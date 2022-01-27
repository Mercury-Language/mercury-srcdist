/*
** Automatically generated from `interval.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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


/* :- module backend_libs.interval. */
/* :- implementation. */

/*
INIT mercury__backend_libs__interval__init
ENDINIT
*/

#include "backend_libs.interval.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_match.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
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
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.call_gen.mih"
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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




#line 157 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_backend_libs__interval__type_ctor_info_anchor_follow_info_0;

#line 163 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 166 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0;

#line 178 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1;

#line 181 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_2[2];

#line 184 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2;

#line 187 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_3[1];

#line 190 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3;

#line 193 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_4[2];

#line 196 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4;

#line 199 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_5[1];

#line 202 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5;

#line 205 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_0[2];

#line 208 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1[1];

#line 211 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2[1];

#line 214 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3[2];

#line 217 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_0[4];

#line 220 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0[6];

#line 223 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0[6];

#line 226 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 229 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_follow_info_0_0[2];

#line 232 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0;

#line 235 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0[1];

#line 238 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0[1];

#line 241 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0[1];

#line 244 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0[1];

#line 247 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0;

#line 250 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1;

#line 253 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2;

#line 256 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3;

#line 259 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4;

#line 262 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_branch_construct_0[5];

#line 265 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0[5];

#line 268 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0[5];

#line 271 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_branch_end_info_0_0[3];

#line 274 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_branch_end_info_0_0[3];

#line 277 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0;

#line 280 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0[1];

#line 283 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_branch_end_info_0[1];

#line 286 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_branch_end_info_0[1];

#line 289 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_end_info_0[1];

#line 292 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 295 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 298 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_insert_spec_0_0[2];

#line 301 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0;

#line 304 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0[1];

#line 307 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0[1];

#line 310 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0[1];

#line 313 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0[1];

#line 316 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0[1];

#line 319 "backend_libs.interval.c"
static const MR_NotagFunctorDesc backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0;

#line 322 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0;

#line 325 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0;

#line 328 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0;

#line 331 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0;

#line 334 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0;

#line 337 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0;

#line 340 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 343 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 346 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 349 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 352 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 355 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_info_0_0[16];

#line 358 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_info_0_0[16];

#line 361 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0;

#line 364 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0[1];

#line 367 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0[1];

#line 370 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0[1];

#line 373 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0[1];

#line 376 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 379 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0[3];

#line 382 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0[3];

#line 385 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0;

#line 388 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0[1];

#line 391 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0[1];

#line 394 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0[1];

#line 397 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0[1];

#line 400 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 403 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_var_info_0_0[2];

#line 406 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_var_info_0_0[2];

#line 409 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0;

#line 412 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0[1];

#line 415 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_var_info_0[1];

#line 418 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_var_info_0[1];

#line 421 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_var_info_0[1];

#line 424 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0;

#line 427 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1;

#line 430 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_maybe_needs_flush_0[2];

#line 433 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0[2];

#line 436 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0[2];

#line 439 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 442 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0;

#line 445 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1;

#line 448 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_resume_save_status_0[2];

#line 451 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0[2];

#line 454 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0[2];

#line 457 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_save_point_0_0[2];

#line 460 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0;

#line 463 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0[1];

#line 466 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0[1];

#line 469 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0[1];

#line 472 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0[1];

#line 475 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0;

#line 478 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1;

#line 481 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_save_point_type_0[2];

#line 484 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0[2];

#line 487 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0[2];

#line 490 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1[1];

#line 493 "backend_libs.interval.c"
static const MR_TypeClassMethod backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1[1];

#line 496 "backend_libs.interval.c"
static const MR_TypeClassId backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1;

#line 499 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0_10001(
#line 502 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 504 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 507 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_0_0_10001(
#line 510 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 512 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 514 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 517 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0_10001(
#line 520 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 522 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 525 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0_10001(
#line 528 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 530 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 532 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 535 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0_10001(
#line 538 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 540 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 543 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0_10001(
#line 546 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 548 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 550 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 553 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_end_info_0_0_10001(
#line 556 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 558 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 561 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0_10001(
#line 564 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 566 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 568 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 571 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0_10001(
#line 574 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 576 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 579 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0_10001(
#line 582 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 584 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 586 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 589 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0_10001(
#line 592 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 594 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 597 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0_10001(
#line 600 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 602 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 604 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 607 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0_10001(
#line 610 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 612 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 615 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0_10001(
#line 618 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 620 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 622 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 625 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0_10001(
#line 628 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 630 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 633 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0_10001(
#line 636 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 638 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 640 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 643 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0_10001(
#line 646 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 648 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 651 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0_10001(
#line 654 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 656 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 658 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 661 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0_10001(
#line 664 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 666 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 669 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0_10001(
#line 672 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 674 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 676 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 679 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0_10001(
#line 682 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 684 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 687 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0_10001(
#line 690 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 692 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 694 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 697 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0_10001(
#line 700 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 702 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 705 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0_10001(
#line 708 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 710 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 712 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 715 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0_10001(
#line 718 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 720 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 723 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0_10001(
#line 726 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 728 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 730 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 733 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0_10001(
#line 736 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 738 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 741 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_0_0_10001(
#line 744 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 746 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 748 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 751 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0_10001(
#line 754 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 756 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 759 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0_10001(
#line 762 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 764 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 766 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 1186 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(
#line 1186 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1186 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1186 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1186 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1186 "interval.m"
  MR_Word backend_libs__interval__Inserts_6,
#line 1186 "interval.m"
  MR_Word backend_libs__interval__InsertMap_7,
#line 1186 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_8);

#line 636 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(
#line 636 "interval.m"
  MR_Word backend_libs__interval__StartArchor_9,
#line 636 "interval.m"
  MR_Word backend_libs__interval__BeforeId_10,
#line 636 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeVars_11,
#line 636 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_12,
#line 636 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15,
#line 636 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_16);

#line 602 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(
#line 602 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_9,
#line 602 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_10,
#line 602 "interval.m"
  MR_Word backend_libs__interval__BeforeId_11,
#line 602 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_12,
#line 602 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16,
#line 602 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_17,
#line 602 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_18,
#line 602 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_19);

#line 544 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(
#line 544 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_13,
#line 544 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeGoal_14,
#line 544 "interval.m"
  MR_Word backend_libs__interval__Construct_15,
#line 544 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_16,
#line 544 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_17,
#line 544 "interval.m"
  MR_Word * backend_libs__interval__BeforeIntervalId_18,
#line 544 "interval.m"
  MR_Word * backend_libs__interval__AfterIntervalId_19,
#line 544 "interval.m"
  MR_Word * backend_libs__interval__MaybeResumeVars_20,
#line 544 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_34,
#line 544 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_35,
#line 544 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_36,
#line 544 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_37);

#line 495 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(
#line 495 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27,
#line 495 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 495 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3,
#line 495 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_4,
#line 495 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_5,
#line 495 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_6);

#line 439 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 439 "interval.m"
  MR_Word backend_libs__interval__Inputs_8,
#line 439 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedAcrossCall_9,
#line 439 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_10,
#line 439 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26,
#line 439 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_27,
#line 439 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_28,
#line 439 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_29);

#line 1331 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1331__1_2_p_0(
#line 1331 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_31,
#line 1331 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_32);

#line 1318 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_deletion__1318__1_2_p_0(
#line 1318 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_16,
#line 1318 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_17);

#line 1300 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1300__1_2_p_0(
#line 1300 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_154,
#line 1300 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_155);

#line 868 "interval.m"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0(
#line 868 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 868 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 868 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3);

#line 868 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0(
#line 868 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 868 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2);

#line 1340 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_4(
#line 1340 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1340 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1336 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_3(
#line 1336 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1336 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);

#line 1340 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_2(
#line 1340 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1340 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1331 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_1(
#line 1331 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1331 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1331 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2);

#line 1323 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0(
#line 1323 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1);

#line 1340 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_2(
#line 1340 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1340 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1318 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_1(
#line 1318 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1318 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1318 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2);

#line 1315 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0(
#line 1315 "interval.m"
  MR_Word backend_libs__interval__Vars_4);

#line 1309 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_3(
#line 1309 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1309 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1309 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1309 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1300 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_2(
#line 1300 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1300 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1300 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2);

#line 1278 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_1(
#line 1278 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1278 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);

#line 1270 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0(
#line 1270 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_5,
#line 1270 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6);

#line 1243 "interval.m"
static void MR_CALL 
backend_libs__interval__construct_anchors_4_p_0(
#line 1243 "interval.m"
  MR_Word backend_libs__interval__Construct_5,
#line 1243 "interval.m"
  MR_Word backend_libs__interval__Goal_6,
#line 1243 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_7,
#line 1243 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_8);

#line 1228 "interval.m"
static void MR_CALL 
backend_libs__interval__build_headvar_subst_4_p_0(
#line 1228 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1228 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 1228 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_Subst_0_3,
#line 1228 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_Subst_4);

#line 1203 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_cases_7_p_0(
#line 1203 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1203 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1203 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1203 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1203 "interval.m"
  MR_Word backend_libs__interval__VarRename0_5,
#line 1203 "interval.m"
  MR_Word backend_libs__interval__InsertMap_6,
#line 1203 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_7);

#line 1165 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_conj_9_p_0(
#line 1165 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1165 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1165 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1165 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1165 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_5,
#line 1165 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_6,
#line 1165 "interval.m"
  MR_Word backend_libs__interval__ConjType_7,
#line 1165 "interval.m"
  MR_Word backend_libs__interval__InsertMap_8,
#line 1165 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_9);

#line 1134 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_at_call_site_9_p_0(
#line 1134 "interval.m"
  MR_Word backend_libs__interval__Goal0_10,
#line 1134 "interval.m"
  MR_Word * backend_libs__interval__Goal_11,
#line 1134 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_25,
#line 1134 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_26,
#line 1134 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_27,
#line 1134 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_28,
#line 1134 "interval.m"
  MR_Word backend_libs__interval__MustHaveMap_14,
#line 1134 "interval.m"
  MR_Word backend_libs__interval__InsertMap_15,
#line 1134 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_16);

#line 1103 "interval.m"
static void MR_CALL 
backend_libs__interval__create_shadow_vars_10_p_0(
#line 1103 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1103 "interval.m"
  MR_Word backend_libs__interval__VarsToExtract_2,
#line 1103 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_0_3,
#line 1103 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarSet_4,
#line 1103 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_0_5,
#line 1103 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarTypes_6,
#line 1103 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_7,
#line 1103 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_8,
#line 1103 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_0_9,
#line 1103 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VoidRename_10);

#line 1052 "interval.m"
static void MR_CALL 
backend_libs__interval__make_inserted_goals_7_p_0(
#line 1052 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_1,
#line 1052 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_2,
#line 1052 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_3,
#line 1052 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_4,
#line 1052 "interval.m"
  MR_Word backend_libs__interval__HeadVar__5_5,
#line 1052 "interval.m"
  MR_Word backend_libs__interval__HeadVar__6_6,
#line 1052 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7);

#line 1041 "interval.m"
static void MR_CALL 
backend_libs__interval__insert_goals_after_7_p_0(
#line 1041 "interval.m"
  MR_Word backend_libs__interval__BranchesGoal_8,
#line 1041 "interval.m"
  MR_Word * backend_libs__interval__Goal_9,
#line 1041 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_17,
#line 1041 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_18,
#line 1041 "interval.m"
  MR_Word * backend_libs__interval__VarRename_11,
#line 1041 "interval.m"
  MR_Word backend_libs__interval__Inserts_12,
#line 1041 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_13);

#line 1031 "interval.m"
static void MR_CALL 
backend_libs__interval__lookup_inserts_3_p_0(
#line 1031 "interval.m"
  MR_Word backend_libs__interval__InsertMap_4,
#line 1031 "interval.m"
  MR_Word backend_libs__interval__Anchor_5,
#line 1031 "interval.m"
  MR_Word * backend_libs__interval__Inserts_6);

#line 881 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_goal_8_p_0(
#line 881 "interval.m"
  MR_Word backend_libs__interval__Goal0_9,
#line 881 "interval.m"
  MR_Word * backend_libs__interval__Goal_10,
#line 881 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_114,
#line 881 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_115,
#line 881 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_116,
#line 881 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_117,
#line 881 "interval.m"
  MR_Word backend_libs__interval__InsertMap_13,
#line 881 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_14);

#line 857 "interval.m"
static void MR_CALL 
backend_libs__interval__record_model_non_anchor_3_p_0(
#line 857 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 857 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 857 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9);

#line 840 "interval.m"
static void MR_CALL 
backend_libs__interval__require_access_3_p_0(
#line 840 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 840 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 840 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9);

#line 832 "interval.m"
static void MR_CALL 
backend_libs__interval__require_flushed_3_p_0(
#line 832 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 832 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 832 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9);

#line 825 "interval.m"
static void MR_CALL 
backend_libs__interval__require_in_regs_3_p_0(
#line 825 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 825 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 825 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8);

#line 782 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_no_succ_3_p_0(
#line 782 "interval.m"
  MR_Word backend_libs__interval__Id_4,
#line 782 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 782 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10);

#line 770 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_succ_4_p_0(
#line 770 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 770 "interval.m"
  MR_Word backend_libs__interval__Succ_6,
#line 770 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 770 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12);

#line 762 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_start_4_p_0(
#line 762 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 762 "interval.m"
  MR_Word backend_libs__interval__Start_6,
#line 762 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 762 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11);

#line 754 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_end_4_p_0(
#line 754 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 754 "interval.m"
  MR_Word backend_libs__interval__End_6,
#line 754 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 754 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11);

#line 733 "interval.m"
static void MR_CALL 
backend_libs__interval__record_branch_end_info_3_p_0(
#line 733 "interval.m"
  MR_Word backend_libs__interval__GoalId_4,
#line 733 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 733 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13);

#line 721 "interval.m"
static void MR_CALL 
backend_libs__interval__new_interval_id_3_p_0(
#line 721 "interval.m"
  MR_Word * backend_libs__interval__Id_4,
#line 721 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 721 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12);

#line 715 "interval.m"
static void MR_CALL 
backend_libs__interval__set_cur_interval_3_p_0(
#line 715 "interval.m"
  MR_Word backend_libs__interval__CurInterval_4,
#line 715 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 715 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7);

#line 711 "interval.m"
static void MR_CALL 
backend_libs__interval__get_cur_interval_2_p_0(
#line 711 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 711 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3);

#line 701 "interval.m"
static void MR_CALL 
backend_libs__interval__gather_interval_vars_4_p_0(
#line 701 "interval.m"
  MR_Word backend_libs__interval__IntervalVarMap_5,
#line 701 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6,
#line 701 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_0_9,
#line 701 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_10);

#line 681 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1(
#line 681 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 681 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 681 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 681 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 674 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(
#line 674 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 674 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17,
#line 674 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_18);

#line 668 "interval.m"
static void MR_CALL 
backend_libs__interval__one_open_interval_3_p_0(
#line 668 "interval.m"
  MR_Word backend_libs__interval__IntervalId_4,
#line 668 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 668 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7);

#line 663 "interval.m"
static void MR_CALL 
backend_libs__interval__no_open_intervals_2_p_0(
#line 663 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4,
#line 663 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_5);

#line 657 "interval.m"
static void MR_CALL 
backend_libs__interval__set_open_intervals_3_p_0(
#line 657 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_4,
#line 657 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 657 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7);

#line 652 "interval.m"
static void MR_CALL 
backend_libs__interval__get_open_intervals_2_p_0(
#line 652 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3,
#line 652 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_4);

#line 619 "interval.m"
static void MR_CALL 
backend_libs__interval__reached_cond_then_3_p_0(
#line 619 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_4,
#line 619 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 619 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13);

#line 592 "interval.m"
static void MR_CALL 
backend_libs__interval__enter_branch_tail_4_p_0(
#line 592 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_5,
#line 592 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 592 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 592 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10);

#line 524 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_cases_10_p_0(
#line 524 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 524 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 524 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_2,
#line 524 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_3,
#line 524 "interval.m"
  MR_Word backend_libs__interval__BeforeId_4,
#line 524 "interval.m"
  MR_Word backend_libs__interval__AfterId_5,
#line 524 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__6_6,
#line 524 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 524 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8,
#line 524 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_9,
#line 524 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_10);

#line 508 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_disj_11_p_0(
#line 508 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 508 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 508 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_2,
#line 508 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_3,
#line 508 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_4,
#line 508 "interval.m"
  MR_Word backend_libs__interval__BeforeId_5,
#line 508 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 508 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7,
#line 508 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 508 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9,
#line 508 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_10,
#line 508 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_11);

#line 425 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(
#line 425 "interval.m"
  MR_Word backend_libs__interval__ModuleInfo_1,
#line 425 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2);

#line 1340 "interval.m"
static void MR_CALL 
backend_libs__interval__write_int_list_3_p_0_1(
#line 1340 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1340 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1268 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_2(
#line 1268 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1268 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1268 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1268 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1264 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_1(
#line 1264 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1264 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1264 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1264 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 355 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_2(
#line 355 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 355 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);

#line 354 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_1(
#line 354 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 354 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);


static /* final */ const MR_Box backend_libs__interval_scalar_common_1[8][2];

static /* final */ const MR_Box backend_libs__interval_scalar_common_2[25][3];

static /* final */ const MR_Box backend_libs__interval_scalar_common_3[3][5];

static /* final */ const MR_Box backend_libs__interval_scalar_common_4[2][7];

static /* final */ const MR_Box backend_libs__interval_scalar_common_5[3][6];




static /* final */ const MR_Box backend_libs__interval_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box backend_libs__interval_scalar_common_2[25][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[4]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[3]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[1]))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[2]))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[0])),
    ((MR_Box) (&backend_libs__interval_scalar_common_1[0]))
  },
  /* row 12 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_3[0])),
    ((MR_Box) (backend_libs__interval__build_interval_info_in_goal_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_3[0])),
    ((MR_Box) (backend_libs__interval__build_interval_info_in_goal_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[0])),
    ((MR_Box) (backend_libs__interval__dump_interval_info_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[1])),
    ((MR_Box) (backend_libs__interval__write_int_list_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_3[1])),
    ((MR_Box) (backend_libs__interval__dump_interval_info_id_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_3[2])),
    ((MR_Box) (backend_libs__interval__dump_interval_info_id_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[2])),
    ((MR_Box) (backend_libs__interval__dump_interval_info_id_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_3[2])),
    ((MR_Box) (backend_libs__interval__dump_deletion_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[1])),
    ((MR_Box) (backend_libs__interval__dump_deletion_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_3[2])),
    ((MR_Box) (backend_libs__interval__dump_anchor_follow_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[1])),
    ((MR_Box) (backend_libs__interval__dump_anchor_follow_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_3[1])),
    ((MR_Box) (backend_libs__interval__dump_anchor_follow_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[1])),
    ((MR_Box) (backend_libs__interval__dump_anchor_follow_3_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box backend_libs__interval_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box backend_libs__interval_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box backend_libs__interval_scalar_common_5[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__interval__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_backend_libs__interval__type_ctor_info_anchor_follow_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1846 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1854 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0
  }
};

#line 1863 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1871 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1879 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1888 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1896 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0 = {
  (MR_String) "anchor_proc_start",
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

#line 1911 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1 = {
  (MR_String) "anchor_proc_end",
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

#line 1926 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_2[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1932 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2 = {
  (MR_String) "anchor_branch_start",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  backend_libs__interval__backend_libs__interval__field_types_anchor_0_2,
  NULL,
  NULL,
  NULL
};

#line 1947 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_3[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1952 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3 = {
  (MR_String) "anchor_cond_then",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 3,
  backend_libs__interval__backend_libs__interval__field_types_anchor_0_3,
  NULL,
  NULL,
  NULL
};

#line 1967 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_4[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1973 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4 = {
  (MR_String) "anchor_branch_end",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__field_types_anchor_0_4,
  NULL,
  NULL,
  NULL
};

#line 1988 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_5[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1993 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5 = {
  (MR_String) "anchor_call_site",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 5,
  backend_libs__interval__backend_libs__interval__field_types_anchor_0_5,
  NULL,
  NULL,
  NULL
};

#line 2008 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_0[2] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1
};

#line 2014 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2
};

#line 2019 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3
};

#line 2024 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3[2] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5
};

#line 2030 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_0[4] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3
  }
};

#line 2054 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0[6] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0
};

#line 2064 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2074 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____anchor_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____anchor_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "anchor",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0
};

#line 2091 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2099 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_follow_info_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2105 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0 = {
  (MR_String) "anchor_follow_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__interval__backend_libs__interval__field_types_anchor_follow_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 2120 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0
};

#line 2125 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0
  }
};

#line 2134 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0
};

#line 2139 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0[1] = {
  (MR_Integer) 0
};

#line 2144 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____anchor_follow_info_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____anchor_follow_info_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "anchor_follow_info",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0
};

#line 2161 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0 = {
  (MR_String) "branch_ite",
  (MR_Integer) 0
};

#line 2167 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1 = {
  (MR_String) "branch_disj",
  (MR_Integer) 1
};

#line 2173 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2 = {
  (MR_String) "branch_switch",
  (MR_Integer) 2
};

#line 2179 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3 = {
  (MR_String) "branch_neg",
  (MR_Integer) 3
};

#line 2185 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4 = {
  (MR_String) "branch_par_conj",
  (MR_Integer) 4
};

#line 2191 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_branch_construct_0[5] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4
};

#line 2200 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0[5] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2
};

#line 2209 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2218 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____branch_construct_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____branch_construct_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "branch_construct",
  {     backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0 },
  {     backend_libs__interval__backend_libs__interval__enum_value_ordered_branch_construct_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0
};

#line 2235 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_branch_end_info_0_0[3] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2242 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_branch_end_info_0_0[3] = {
  (MR_String) "flushed_after_branch",
  (MR_String) "accessed_after_branch",
  (MR_String) "interval_after_branch"
};

#line 2249 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0 = {
  (MR_String) "branch_end_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__interval__backend_libs__interval__field_types_branch_end_info_0_0,
  backend_libs__interval__backend_libs__interval__field_names_branch_end_info_0_0,
  NULL,
  NULL
};

#line 2264 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0
};

#line 2269 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_branch_end_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0
  }
};

#line 2278 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_branch_end_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0
};

#line 2283 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_end_info_0[1] = {
  (MR_Integer) 0
};

#line 2288 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____branch_end_info_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____branch_end_info_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "branch_end_info",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_branch_end_info_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_branch_end_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_branch_end_info_0
};

#line 2305 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2313 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_TypeInfo) &backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2322 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_insert_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__interval____Unify____insert_map_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____insert_map_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "insert_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2339 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_insert_spec_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2345 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0 = {
  (MR_String) "insert_spec",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__interval__backend_libs__interval__field_types_insert_spec_0_0,
  NULL,
  NULL,
  NULL
};

#line 2360 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0
};

#line 2365 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0
  }
};

#line 2374 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0
};

#line 2379 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0[1] = {
  (MR_Integer) 0
};

#line 2384 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____insert_spec_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____insert_spec_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "insert_spec",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0
};

#line 2401 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0[1] = {
  (MR_Integer) 0
};

#line 2406 "backend_libs.interval.c"
static const MR_NotagFunctorDesc backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0 = {
  (MR_String) "interval_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2413 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (backend_libs__interval____Unify____interval_id_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_id_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_id",
  {     &backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0 },
  {     &backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0
};

#line 2430 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0
  }
};

#line 2439 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0
  }
};

#line 2448 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2457 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0
  }
};

#line 2466 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2474 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2483 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2491 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2500 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2509 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2517 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2526 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_info_0_0[16] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_params_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2546 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_info_0_0[16] = {
  (MR_String) "ii_interval_params",
  (MR_String) "ii_flushed_later",
  (MR_String) "ii_accessed_later",
  (MR_String) "ii_branch_resume_map",
  (MR_String) "ii_branch_end_map",
  (MR_String) "ii_cond_end_map",
  (MR_String) "ii_cur_interval",
  (MR_String) "ii_interval_counter",
  (MR_String) "ii_open_intervals",
  (MR_String) "ii_anchor_follow_map",
  (MR_String) "ii_model_non_anchors",
  (MR_String) "ii_interval_start",
  (MR_String) "ii_interval_end",
  (MR_String) "ii_interval_succ",
  (MR_String) "ii_interval_vars",
  (MR_String) "ii_interval_delvars"
};

#line 2566 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0 = {
  (MR_String) "interval_info",
  (MR_Integer) 16,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__interval__backend_libs__interval__field_types_interval_info_0_0,
  backend_libs__interval__backend_libs__interval__field_names_interval_info_0_0,
  NULL,
  NULL
};

#line 2581 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0
};

#line 2586 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0
  }
};

#line 2595 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0
};

#line 2600 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0[1] = {
  (MR_Integer) 0
};

#line 2605 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____interval_info_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_info_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_info",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0
};

#line 2622 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2631 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2638 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0[3] = {
  (MR_String) "ip_module_info",
  (MR_String) "ip_var_types",
  (MR_String) "ip_at_most_zero_calls"
};

#line 2645 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0 = {
  (MR_String) "interval_params",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0,
  backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0,
  NULL,
  NULL
};

#line 2660 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0
};

#line 2665 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0
  }
};

#line 2674 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0
};

#line 2679 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0[1] = {
  (MR_Integer) 0
};

#line 2684 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____interval_params_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_params_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_params",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0
};

#line 2701 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2709 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_var_info_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2715 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_var_info_0_0[2] = {
  (MR_String) "ivi_varset",
  (MR_String) "ivi_vartypes"
};

#line 2721 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0 = {
  (MR_String) "interval_var_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__interval__backend_libs__interval__field_types_interval_var_info_0_0,
  backend_libs__interval__backend_libs__interval__field_names_interval_var_info_0_0,
  NULL,
  NULL
};

#line 2736 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0
};

#line 2741 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0
  }
};

#line 2750 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_var_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0
};

#line 2755 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2760 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____interval_var_info_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_var_info_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_var_info",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_interval_var_info_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_var_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_var_info_0
};

#line 2777 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0 = {
  (MR_String) "needs_flush",
  (MR_Integer) 0
};

#line 2783 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1 = {
  (MR_String) "doesnt_need_flush",
  (MR_Integer) 1
};

#line 2789 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_maybe_needs_flush_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1
};

#line 2795 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0
};

#line 2801 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2807 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_maybe_needs_flush_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____maybe_needs_flush_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____maybe_needs_flush_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "maybe_needs_flush",
  {     backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0 },
  {     backend_libs__interval__backend_libs__interval__enum_value_ordered_maybe_needs_flush_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0
};

#line 2824 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2833 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_rename_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__interval____Unify____rename_map_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____rename_map_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "rename_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2850 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0 = {
  (MR_String) "has_resume_save",
  (MR_Integer) 0
};

#line 2856 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1 = {
  (MR_String) "has_no_resume_save",
  (MR_Integer) 1
};

#line 2862 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_resume_save_status_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1
};

#line 2868 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0
};

#line 2874 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2880 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____resume_save_status_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____resume_save_status_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "resume_save_status",
  {     backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0 },
  {     backend_libs__interval__backend_libs__interval__enum_value_ordered_resume_save_status_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0
};

#line 2897 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_save_point_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 2903 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0 = {
  (MR_String) "save_point",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__interval__backend_libs__interval__field_types_save_point_0_0,
  NULL,
  NULL,
  NULL
};

#line 2918 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0
};

#line 2923 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0
  }
};

#line 2932 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0
};

#line 2937 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0[1] = {
  (MR_Integer) 0
};

#line 2942 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____save_point_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____save_point_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "save_point",
  {     backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0 },
  {     backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0
};

#line 2959 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0 = {
  (MR_String) "save_point_call_site",
  (MR_Integer) 0
};

#line 2965 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1 = {
  (MR_String) "save_point_resume_point",
  (MR_Integer) 1
};

#line 2971 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_save_point_type_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1
};

#line 2977 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1
};

#line 2983 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2989 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____save_point_type_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____save_point_type_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "save_point_type",
  {     backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0 },
  {     backend_libs__interval__backend_libs__interval__enum_value_ordered_save_point_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0
};

#line 3006 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1[1] = {
  (MR_String) "T"
};

#line 3011 "backend_libs.interval.c"
static const MR_TypeClassMethod backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1[1] = {
  {
    (MR_String) "use_cell",
    (MR_Integer) 8,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 3020 "backend_libs.interval.c"
static const MR_TypeClassId backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1 = {
  (MR_String) "backend_libs.interval",
  (MR_String) "build_interval_info_acc",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1,
  backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1
};

#line 3031 "backend_libs.interval.c"
const MR_TypeClassDeclStruct backend_libs__interval__backend_libs__interval__type_class_decl_build_interval_info_acc_1 = {
  &backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3039 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0_10001(
#line 3042 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3044 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3046 "backend_libs.interval.c"
{
#line 3048 "backend_libs.interval.c"
  {
#line 3050 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3053 "backend_libs.interval.c"
    {
#line 3055 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____anchor_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3058 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3060 "backend_libs.interval.c"
  }
#line 3062 "backend_libs.interval.c"
}

#line 3065 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_0_0_10001(
#line 3068 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3070 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3072 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3074 "backend_libs.interval.c"
{
#line 3076 "backend_libs.interval.c"
  {
#line 3078 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3081 "backend_libs.interval.c"
    {
#line 3083 "backend_libs.interval.c"
      backend_libs__interval____Compare____anchor_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3086 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3088 "backend_libs.interval.c"
  }
#line 3090 "backend_libs.interval.c"
}

#line 3093 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0_10001(
#line 3096 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3098 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3100 "backend_libs.interval.c"
{
#line 3102 "backend_libs.interval.c"
  {
#line 3104 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3107 "backend_libs.interval.c"
    {
#line 3109 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____anchor_follow_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3112 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3114 "backend_libs.interval.c"
  }
#line 3116 "backend_libs.interval.c"
}

#line 3119 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0_10001(
#line 3122 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3124 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3126 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3128 "backend_libs.interval.c"
{
#line 3130 "backend_libs.interval.c"
  {
#line 3132 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3135 "backend_libs.interval.c"
    {
#line 3137 "backend_libs.interval.c"
      backend_libs__interval____Compare____anchor_follow_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3140 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3142 "backend_libs.interval.c"
  }
#line 3144 "backend_libs.interval.c"
}

#line 3147 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0_10001(
#line 3150 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3152 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3154 "backend_libs.interval.c"
{
#line 3156 "backend_libs.interval.c"
  {
#line 3158 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3161 "backend_libs.interval.c"
    {
#line 3163 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____branch_construct_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3166 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3168 "backend_libs.interval.c"
  }
#line 3170 "backend_libs.interval.c"
}

#line 3173 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0_10001(
#line 3176 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3178 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3180 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3182 "backend_libs.interval.c"
{
#line 3184 "backend_libs.interval.c"
  {
#line 3186 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3189 "backend_libs.interval.c"
    {
#line 3191 "backend_libs.interval.c"
      backend_libs__interval____Compare____branch_construct_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3194 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3196 "backend_libs.interval.c"
  }
#line 3198 "backend_libs.interval.c"
}

#line 3201 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_end_info_0_0_10001(
#line 3204 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3206 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3208 "backend_libs.interval.c"
{
#line 3210 "backend_libs.interval.c"
  {
#line 3212 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3215 "backend_libs.interval.c"
    {
#line 3217 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____branch_end_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3220 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3222 "backend_libs.interval.c"
  }
#line 3224 "backend_libs.interval.c"
}

#line 3227 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0_10001(
#line 3230 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3232 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3234 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3236 "backend_libs.interval.c"
{
#line 3238 "backend_libs.interval.c"
  {
#line 3240 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3243 "backend_libs.interval.c"
    {
#line 3245 "backend_libs.interval.c"
      backend_libs__interval____Compare____branch_end_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3248 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3250 "backend_libs.interval.c"
  }
#line 3252 "backend_libs.interval.c"
}

#line 3255 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0_10001(
#line 3258 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3260 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3262 "backend_libs.interval.c"
{
#line 3264 "backend_libs.interval.c"
  {
#line 3266 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3269 "backend_libs.interval.c"
    {
#line 3271 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____insert_map_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3274 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3276 "backend_libs.interval.c"
  }
#line 3278 "backend_libs.interval.c"
}

#line 3281 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0_10001(
#line 3284 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3286 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3288 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3290 "backend_libs.interval.c"
{
#line 3292 "backend_libs.interval.c"
  {
#line 3294 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3297 "backend_libs.interval.c"
    {
#line 3299 "backend_libs.interval.c"
      backend_libs__interval____Compare____insert_map_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3302 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3304 "backend_libs.interval.c"
  }
#line 3306 "backend_libs.interval.c"
}

#line 3309 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0_10001(
#line 3312 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3314 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3316 "backend_libs.interval.c"
{
#line 3318 "backend_libs.interval.c"
  {
#line 3320 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3323 "backend_libs.interval.c"
    {
#line 3325 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____insert_spec_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3328 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3330 "backend_libs.interval.c"
  }
#line 3332 "backend_libs.interval.c"
}

#line 3335 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0_10001(
#line 3338 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3340 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3342 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3344 "backend_libs.interval.c"
{
#line 3346 "backend_libs.interval.c"
  {
#line 3348 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3351 "backend_libs.interval.c"
    {
#line 3353 "backend_libs.interval.c"
      backend_libs__interval____Compare____insert_spec_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3356 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3358 "backend_libs.interval.c"
  }
#line 3360 "backend_libs.interval.c"
}

#line 3363 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0_10001(
#line 3366 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3368 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3370 "backend_libs.interval.c"
{
#line 3372 "backend_libs.interval.c"
  {
#line 3374 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3377 "backend_libs.interval.c"
    {
#line 3379 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_id_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3382 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3384 "backend_libs.interval.c"
  }
#line 3386 "backend_libs.interval.c"
}

#line 3389 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0_10001(
#line 3392 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3394 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3396 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3398 "backend_libs.interval.c"
{
#line 3400 "backend_libs.interval.c"
  {
#line 3402 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3405 "backend_libs.interval.c"
    {
#line 3407 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_id_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3410 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3412 "backend_libs.interval.c"
  }
#line 3414 "backend_libs.interval.c"
}

#line 3417 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0_10001(
#line 3420 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3422 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3424 "backend_libs.interval.c"
{
#line 3426 "backend_libs.interval.c"
  {
#line 3428 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3431 "backend_libs.interval.c"
    {
#line 3433 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3436 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3438 "backend_libs.interval.c"
  }
#line 3440 "backend_libs.interval.c"
}

#line 3443 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0_10001(
#line 3446 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3448 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3450 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3452 "backend_libs.interval.c"
{
#line 3454 "backend_libs.interval.c"
  {
#line 3456 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3459 "backend_libs.interval.c"
    {
#line 3461 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3464 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3466 "backend_libs.interval.c"
  }
#line 3468 "backend_libs.interval.c"
}

#line 3471 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0_10001(
#line 3474 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3476 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3478 "backend_libs.interval.c"
{
#line 3480 "backend_libs.interval.c"
  {
#line 3482 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3485 "backend_libs.interval.c"
    {
#line 3487 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_params_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3490 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3492 "backend_libs.interval.c"
  }
#line 3494 "backend_libs.interval.c"
}

#line 3497 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0_10001(
#line 3500 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3502 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3504 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3506 "backend_libs.interval.c"
{
#line 3508 "backend_libs.interval.c"
  {
#line 3510 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3513 "backend_libs.interval.c"
    {
#line 3515 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_params_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3518 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3520 "backend_libs.interval.c"
  }
#line 3522 "backend_libs.interval.c"
}

#line 3525 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0_10001(
#line 3528 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3530 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3532 "backend_libs.interval.c"
{
#line 3534 "backend_libs.interval.c"
  {
#line 3536 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3539 "backend_libs.interval.c"
    {
#line 3541 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_var_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3544 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3546 "backend_libs.interval.c"
  }
#line 3548 "backend_libs.interval.c"
}

#line 3551 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0_10001(
#line 3554 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3556 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3558 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3560 "backend_libs.interval.c"
{
#line 3562 "backend_libs.interval.c"
  {
#line 3564 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3567 "backend_libs.interval.c"
    {
#line 3569 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_var_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3572 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3574 "backend_libs.interval.c"
  }
#line 3576 "backend_libs.interval.c"
}

#line 3579 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0_10001(
#line 3582 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3584 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3586 "backend_libs.interval.c"
{
#line 3588 "backend_libs.interval.c"
  {
#line 3590 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3593 "backend_libs.interval.c"
    {
#line 3595 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____maybe_needs_flush_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3598 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3600 "backend_libs.interval.c"
  }
#line 3602 "backend_libs.interval.c"
}

#line 3605 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0_10001(
#line 3608 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3610 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3612 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3614 "backend_libs.interval.c"
{
#line 3616 "backend_libs.interval.c"
  {
#line 3618 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3621 "backend_libs.interval.c"
    {
#line 3623 "backend_libs.interval.c"
      backend_libs__interval____Compare____maybe_needs_flush_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3626 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3628 "backend_libs.interval.c"
  }
#line 3630 "backend_libs.interval.c"
}

#line 3633 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0_10001(
#line 3636 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3638 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3640 "backend_libs.interval.c"
{
#line 3642 "backend_libs.interval.c"
  {
#line 3644 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3647 "backend_libs.interval.c"
    {
#line 3649 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____rename_map_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3652 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3654 "backend_libs.interval.c"
  }
#line 3656 "backend_libs.interval.c"
}

#line 3659 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0_10001(
#line 3662 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3664 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3666 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3668 "backend_libs.interval.c"
{
#line 3670 "backend_libs.interval.c"
  {
#line 3672 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3675 "backend_libs.interval.c"
    {
#line 3677 "backend_libs.interval.c"
      backend_libs__interval____Compare____rename_map_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3680 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3682 "backend_libs.interval.c"
  }
#line 3684 "backend_libs.interval.c"
}

#line 3687 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0_10001(
#line 3690 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3692 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3694 "backend_libs.interval.c"
{
#line 3696 "backend_libs.interval.c"
  {
#line 3698 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3701 "backend_libs.interval.c"
    {
#line 3703 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____resume_save_status_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3706 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3708 "backend_libs.interval.c"
  }
#line 3710 "backend_libs.interval.c"
}

#line 3713 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0_10001(
#line 3716 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3718 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3720 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3722 "backend_libs.interval.c"
{
#line 3724 "backend_libs.interval.c"
  {
#line 3726 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3729 "backend_libs.interval.c"
    {
#line 3731 "backend_libs.interval.c"
      backend_libs__interval____Compare____resume_save_status_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3734 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3736 "backend_libs.interval.c"
  }
#line 3738 "backend_libs.interval.c"
}

#line 3741 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0_10001(
#line 3744 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3746 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3748 "backend_libs.interval.c"
{
#line 3750 "backend_libs.interval.c"
  {
#line 3752 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3755 "backend_libs.interval.c"
    {
#line 3757 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____save_point_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3760 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3762 "backend_libs.interval.c"
  }
#line 3764 "backend_libs.interval.c"
}

#line 3767 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_0_0_10001(
#line 3770 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3772 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3774 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3776 "backend_libs.interval.c"
{
#line 3778 "backend_libs.interval.c"
  {
#line 3780 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3783 "backend_libs.interval.c"
    {
#line 3785 "backend_libs.interval.c"
      backend_libs__interval____Compare____save_point_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3788 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3790 "backend_libs.interval.c"
  }
#line 3792 "backend_libs.interval.c"
}

#line 3795 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0_10001(
#line 3798 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3800 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3802 "backend_libs.interval.c"
{
#line 3804 "backend_libs.interval.c"
  {
#line 3806 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3809 "backend_libs.interval.c"
    {
#line 3811 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____save_point_type_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3814 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3816 "backend_libs.interval.c"
  }
#line 3818 "backend_libs.interval.c"
}

#line 3821 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0_10001(
#line 3824 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3826 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3828 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3830 "backend_libs.interval.c"
{
#line 3832 "backend_libs.interval.c"
  {
#line 3834 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3837 "backend_libs.interval.c"
    {
#line 3839 "backend_libs.interval.c"
      backend_libs__interval____Compare____save_point_type_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3842 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3844 "backend_libs.interval.c"
  }
#line 3846 "backend_libs.interval.c"
}

#line 1186 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(
#line 1186 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1186 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1186 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1186 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1186 "interval.m"
  MR_Word backend_libs__interval__Inserts_6,
#line 1186 "interval.m"
  MR_Word backend_libs__interval__InsertMap_7,
#line 1186 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_8)
#line 1186 "interval.m"
{
#line 1191 "interval.m"
  {
#line 1191 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1191 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1191 "interval.m"
      {
#line 1191 "interval.m"
        *backend_libs__interval__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1191 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_4 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_3;
#line 1191 "interval.m"
      }
#line 1191 "interval.m"
    else
#line 1193 "interval.m"
      {
#line 1193 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_40_40 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1193 "interval.m"
        MR_Word backend_libs__interval__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1193 "interval.m"
        MR_Word backend_libs__interval__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1193 "interval.m"
        MR_Word backend_libs__interval__Goal_18;
#line 1193 "interval.m"
        MR_Word backend_libs__interval__Goals_19;
#line 1193 "interval.m"
        MR_Word backend_libs__interval__VarRename1_25;
#line 1193 "interval.m"
        MR_Word backend_libs__interval__InsertGoals_26;
#line 1193 "interval.m"
        MR_Word backend_libs__interval__GoalInfo0_28;
#line 1193 "interval.m"
        MR_Word backend_libs__interval__Goal1_29;
#line 1193 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_33_33;
#line 1193 "interval.m"
        MR_Word backend_libs__interval__V_34_34;
#line 1193 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_35_35;
#line 1193 "interval.m"
        MR_Word backend_libs__interval__V_36_36;
#line 1193 "interval.m"
        MR_Word backend_libs__interval__V_37_37;
#line 1196 "interval.m"
        MR_Word backend_libs__interval__V_27_27;
#line 1197 "interval.m"
        MR_Word backend_libs__interval__V_30_30;

#line 1194 "interval.m"
        {
#line 1194 "interval.m"
          backend_libs__interval__V_34_34 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_40_40, backend_libs__interval__TypeInfo_40_40);
        }
#line 1194 "interval.m"
        {
#line 1194 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_0_3, &backend_libs__interval__STATE_VARIABLE_VarInfo_33_33, backend_libs__interval__V_34_34, &backend_libs__interval__VarRename1_25, backend_libs__interval__Inserts_6, backend_libs__interval__MaybeFeature_8, &backend_libs__interval__InsertGoals_26);
        }
#line 1196 "interval.m"
        backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_16, (MR_Integer) 0)));
#line 1196 "interval.m"
        backend_libs__interval__GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_16, (MR_Integer) 1)));
#line 1197 "interval.m"
        {
#line 1197 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Goal0_16, &backend_libs__interval__Goal1_29, backend_libs__interval__STATE_VARIABLE_VarInfo_33_33, &backend_libs__interval__STATE_VARIABLE_VarInfo_35_35, backend_libs__interval__VarRename1_25, &backend_libs__interval__V_30_30, backend_libs__interval__InsertMap_7, backend_libs__interval__MaybeFeature_8);
        }
#line 1199 "interval.m"
        {
#line 1199 "interval.m"
          backend_libs__interval__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_37_37, 0) = ((MR_Box) (backend_libs__interval__Goal1_29));
#line 1199 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1199 "interval.m"
        }
#line 1199 "interval.m"
        {
#line 1199 "interval.m"
          backend_libs__interval__V_36_36 = mercury__list__append_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, backend_libs__interval__InsertGoals_26, backend_libs__interval__V_37_37);
        }
#line 1199 "interval.m"
        {
#line 1199 "interval.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_36_36, backend_libs__interval__GoalInfo0_28, &backend_libs__interval__Goal_18);
        }
#line 1200 "interval.m"
        {
#line 1200 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(backend_libs__interval__Goals0_17, &backend_libs__interval__Goals_19, backend_libs__interval__STATE_VARIABLE_VarInfo_35_35, backend_libs__interval__STATE_VARIABLE_VarInfo_4, backend_libs__interval__Inserts_6, backend_libs__interval__InsertMap_7, backend_libs__interval__MaybeFeature_8);
        }
#line 1192 "interval.m"
        {
#line 1192 "interval.m"
          MR_Word base;
#line 1192 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "interval.m"
          *backend_libs__interval__HeadVar__2_2 = base;
#line 1192 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Goal_18));
#line 1192 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__Goals_19));
#line 1192 "interval.m"
        }
#line 1193 "interval.m"
      }
#line 1191 "interval.m"
  }
#line 1186 "interval.m"
}

#line 636 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(
#line 636 "interval.m"
  MR_Word backend_libs__interval__StartArchor_9,
#line 636 "interval.m"
  MR_Word backend_libs__interval__BeforeId_10,
#line 636 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeVars_11,
#line 636 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_12,
#line 636 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15,
#line 636 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_16)
#line 636 "interval.m"
{
#line 641 "interval.m"
  {
#line 641 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 641 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17;
#line 641 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18;
#line 641 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19;
#line 641 "interval.m"
    MR_Word backend_libs__interval__EndMap0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 12)));
#line 641 "interval.m"
    MR_Word backend_libs__interval__EndMap_27;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 0)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 1)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 2)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 3)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 4)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 5)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 6)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 7)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 8)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 9)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 10)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 11)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 13)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 14)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 15)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_45_45;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_54_54;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_55_55;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_57_57;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_56_56;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_73_73;

#line 759 "interval.m"
    {
#line 759 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__BeforeId_10)), ((MR_Box) (backend_libs__interval__StartArchor_9)), backend_libs__interval__EndMap0_26, &backend_libs__interval__EndMap_27);
    }
#line 760 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 0)));
#line 760 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 1)));
#line 760 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 2)));
#line 760 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 3)));
#line 760 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 4)));
#line 760 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 5)));
#line 760 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 6)));
#line 760 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 7)));
#line 760 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 8)));
#line 760 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 9)));
#line 760 "interval.m"
    backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 10)));
#line 760 "interval.m"
    backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 11)));
#line 760 "interval.m"
    backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 12)));
#line 760 "interval.m"
    backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 13)));
#line 760 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 14)));
#line 760 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 15)));
#line 760 "interval.m"
    {
#line 760 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 0) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 1) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 2) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 3) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 4) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 5) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 6) = ((MR_Box) (backend_libs__interval__V_50_50));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 7) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 8) = ((MR_Box) (backend_libs__interval__V_52_52));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 9) = ((MR_Box) (backend_libs__interval__V_53_53));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 10) = ((MR_Box) (backend_libs__interval__V_54_54));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 11) = ((MR_Box) (backend_libs__interval__V_55_55));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 12) = ((MR_Box) (backend_libs__interval__EndMap_27));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 13) = ((MR_Box) (backend_libs__interval__V_57_57));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 14) = ((MR_Box) (backend_libs__interval__V_58_58));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 15) = ((MR_Box) (backend_libs__interval__V_59_59));
#line 760 "interval.m"
    }
#line 646 "interval.m"
    if ((backend_libs__interval__MaybeResumeVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 647 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17;
#line 646 "interval.m"
    else
#line 644 "interval.m"
      {
#line 644 "interval.m"
        MR_Word backend_libs__interval__ResumeVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeResumeVars_11, (MR_Integer) 0)));

#line 645 "interval.m"
        {
#line 645 "interval.m"
          backend_libs__interval__require_flushed_3_p_0(backend_libs__interval__ResumeVars_14, backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18);
        }
#line 644 "interval.m"
      }
#line 719 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 0)));
#line 719 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 1)));
#line 719 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 2)));
#line 719 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 3)));
#line 719 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 4)));
#line 719 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 5)));
#line 719 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 6)));
#line 719 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 7)));
#line 719 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 8)));
#line 719 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 9)));
#line 719 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 10)));
#line 719 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 11)));
#line 719 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 12)));
#line 719 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 13)));
#line 719 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 14)));
#line 719 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 15)));
#line 719 "interval.m"
    {
#line 719 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 0) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 1) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 2) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 3) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 4) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 5) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 6) = ((MR_Box) (backend_libs__interval__BeforeId_10));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 7) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 8) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 9) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 10) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 11) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 12) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 13) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 14) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 15) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 719 "interval.m"
    }
#line 650 "interval.m"
    {
#line 650 "interval.m"
      backend_libs__interval__set_open_intervals_3_p_0(backend_libs__interval__OpenIntervals_12, backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_16);
#line 650 "interval.m"
      return;
    }
#line 641 "interval.m"
  }
#line 636 "interval.m"
}

#line 602 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(
#line 602 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_9,
#line 602 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_10,
#line 602 "interval.m"
  MR_Word backend_libs__interval__BeforeId_11,
#line 602 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_12,
#line 602 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16,
#line 602 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_17,
#line 602 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_18,
#line 602 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_19)
#line 602 "interval.m"
{
#line 607 "interval.m"
  {
#line 607 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 607 "interval.m"
    MR_Word backend_libs__interval__BranchStartId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 6)));
#line 607 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20;
#line 607 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21;
#line 607 "interval.m"
    MR_Word backend_libs__interval__StartMap0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 11)));
#line 607 "interval.m"
    MR_Word backend_libs__interval__StartMap_46;
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 0)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 1)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 2)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 3)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 4)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 5)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 7)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 8)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 9)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 10)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 12)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 13)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 14)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 15)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_93_93;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_94_94;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_95_95;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_96_96;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_97_97;

#line 767 "interval.m"
    {
#line 767 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__BranchStartId_15)), ((MR_Box) (backend_libs__interval__StartAnchor_10)), backend_libs__interval__StartMap0_45, &backend_libs__interval__StartMap_46);
    }
#line 768 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 0)));
#line 768 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 1)));
#line 768 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 2)));
#line 768 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 3)));
#line 768 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 4)));
#line 768 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 5)));
#line 768 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 6)));
#line 768 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 7)));
#line 768 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 8)));
#line 768 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 9)));
#line 768 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 10)));
#line 768 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 11)));
#line 768 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 12)));
#line 768 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 13)));
#line 768 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 14)));
#line 768 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 15)));
#line 768 "interval.m"
    {
#line 768 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 0) = ((MR_Box) (backend_libs__interval__V_63_63));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 1) = ((MR_Box) (backend_libs__interval__V_64_64));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 2) = ((MR_Box) (backend_libs__interval__V_65_65));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 3) = ((MR_Box) (backend_libs__interval__V_66_66));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 4) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 5) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 6) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 7) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 8) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 9) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 10) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 11) = ((MR_Box) (backend_libs__interval__StartMap_46));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 12) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 13) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 14) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 15) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 768 "interval.m"
    }
#line 610 "interval.m"
    {
#line 610 "interval.m"
      backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__BeforeId_11, backend_libs__interval__BranchStartId_15, backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21);
    }
#line 655 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 0)));
#line 655 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 1)));
#line 655 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 2)));
#line 655 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 3)));
#line 655 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 4)));
#line 655 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 5)));
#line 655 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 6)));
#line 655 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 7)));
#line 655 "interval.m"
    *backend_libs__interval__OpenIntervals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 8)));
#line 655 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 9)));
#line 655 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 10)));
#line 655 "interval.m"
    backend_libs__interval__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 11)));
#line 655 "interval.m"
    backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 12)));
#line 655 "interval.m"
    backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 13)));
#line 655 "interval.m"
    backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 14)));
#line 655 "interval.m"
    backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 15)));
#line 614 "interval.m"
#line 614 "interval.m"
    switch (backend_libs__interval__MaybeNeedsFlush_9) {
#line 614 "interval.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 614 "interval.m"
      case (MR_Integer) 1:
#line 613 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_IntervalInfo_17 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21;
#line 614 "interval.m"
        break;
#line 614 "interval.m"
      case (MR_Integer) 0:
#line 616 "interval.m"
        {
#line 616 "interval.m"
          backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(backend_libs__interval__StartAnchor_10, backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_17);
        }
#line 614 "interval.m"
        break;
#line 614 "interval.m"
    }
#line 607 "interval.m"
    *backend_libs__interval__STATE_VARIABLE_Acc_19 = backend_libs__interval__STATE_VARIABLE_Acc_0_18;
#line 607 "interval.m"
  }
#line 602 "interval.m"
}

#line 544 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(
#line 544 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_13,
#line 544 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeGoal_14,
#line 544 "interval.m"
  MR_Word backend_libs__interval__Construct_15,
#line 544 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_16,
#line 544 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_17,
#line 544 "interval.m"
  MR_Word * backend_libs__interval__BeforeIntervalId_18,
#line 544 "interval.m"
  MR_Word * backend_libs__interval__AfterIntervalId_19,
#line 544 "interval.m"
  MR_Word * backend_libs__interval__MaybeResumeVars_20,
#line 544 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_34,
#line 544 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_35,
#line 544 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_36,
#line 544 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_37)
#line 544 "interval.m"
{
#line 552 "interval.m"
  {
#line 552 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 552 "interval.m"
    MR_Word backend_libs__interval__GoalId_23;
#line 552 "interval.m"
    MR_Word backend_libs__interval__HasResumeSave_29;
#line 552 "interval.m"
    MR_Word backend_libs__interval__CodeModel_33;
#line 552 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 552 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40;
#line 552 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41;
#line 552 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 552 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46;
#line 552 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47;
#line 552 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48;
#line 552 "interval.m"
    MR_Word backend_libs__interval__BranchResumeMap0_59;
#line 552 "interval.m"
    MR_Word backend_libs__interval__BranchResumeMap_60;
#line 563 "interval.m"
    MR_Word backend_libs__interval__ResumeVars_27;
#line 556 "interval.m"
    MR_Word backend_libs__interval__ResumeGoalInfo_25;
#line 556 "interval.m"
    MR_Word backend_libs__interval__ResumePoint_26;
#line 556 "interval.m"
    MR_Word backend_libs__interval__ResumeLocs_28;
#line 556 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 556 "interval.m"
    MR_Word backend_libs__interval___ResumeGoalExpr_24;
#line 852 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 852 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 852 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 852 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 852 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 852 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 852 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 852 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 852 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 852 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 852 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 852 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 852 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 852 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 852 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 572 "interval.m"
    MR_Word backend_libs__interval__StoreMap_30;

#line 553 "interval.m"
    {
#line 553 "interval.m"
      backend_libs__interval__GoalId_23 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_13);
    }
#line 554 "interval.m"
    {
#line 554 "interval.m"
      backend_libs__interval__record_branch_end_info_3_p_0(backend_libs__interval__GoalId_23, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_34, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
    }
#line 556 "interval.m"
    backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__MaybeResumeGoal_14)) == (MR_mktag((MR_Integer) 1)));
#line 556 "interval.m"
    if (backend_libs__interval__succeeded)
#line 556 "interval.m"
      {
#line 556 "interval.m"
        backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeResumeGoal_14, (MR_Integer) 0)));
#line 556 "interval.m"
        backend_libs__interval___ResumeGoalExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_39_39, (MR_Integer) 0)));
#line 556 "interval.m"
        backend_libs__interval__ResumeGoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_39_39, (MR_Integer) 1)));
#line 557 "interval.m"
        {
#line 557 "interval.m"
          backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_resume_point_2_p_0(backend_libs__interval__ResumeGoalInfo_25, &backend_libs__interval__ResumePoint_26);
        }
#line 556 "interval.m"
        if (backend_libs__interval__succeeded)
#line 556 "interval.m"
          {
#line 558 "interval.m"
            backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__ResumePoint_26)) == (MR_mktag((MR_Integer) 1)));
#line 558 "interval.m"
            if (backend_libs__interval__succeeded)
#line 558 "interval.m"
              {
#line 558 "interval.m"
                backend_libs__interval__ResumeVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__ResumePoint_26, (MR_Integer) 0)));
#line 558 "interval.m"
                backend_libs__interval__ResumeLocs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__ResumePoint_26, (MR_Integer) 1)));
#line 559 "interval.m"
                backend_libs__interval__succeeded = (backend_libs__interval__ResumeLocs_28 == (MR_Integer) 0);
#line 559 "interval.m"
                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 558 "interval.m"
              }
#line 556 "interval.m"
          }
#line 556 "interval.m"
      }
#line 563 "interval.m"
    if (backend_libs__interval__succeeded)
#line 561 "interval.m"
      {
#line 561 "interval.m"
        backend_libs__interval__HasResumeSave_29 = (MR_Integer) 0;
#line 562 "interval.m"
        {
#line 562 "interval.m"
          MR_Word base;
#line 562 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 562 "interval.m"
          *backend_libs__interval__MaybeResumeVars_20 = base;
#line 562 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__ResumeVars_27));
#line 562 "interval.m"
        }
#line 561 "interval.m"
      }
#line 563 "interval.m"
    else
#line 564 "interval.m"
      {
#line 564 "interval.m"
        backend_libs__interval__HasResumeSave_29 = (MR_Integer) 1;
#line 565 "interval.m"
        *backend_libs__interval__MaybeResumeVars_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 564 "interval.m"
      }
#line 852 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 0)));
#line 852 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 1)));
#line 852 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 2)));
#line 852 "interval.m"
    backend_libs__interval__BranchResumeMap0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 3)));
#line 852 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 4)));
#line 852 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 5)));
#line 852 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 6)));
#line 852 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 7)));
#line 852 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 8)));
#line 852 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 9)));
#line 852 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 10)));
#line 852 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 11)));
#line 852 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 12)));
#line 852 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 13)));
#line 852 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 14)));
#line 852 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 15)));
#line 853 "interval.m"
    {
#line 853 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0, ((MR_Box) (backend_libs__interval__GoalId_23)), ((MR_Box) (backend_libs__interval__HasResumeSave_29)), backend_libs__interval__BranchResumeMap0_59, &backend_libs__interval__BranchResumeMap_60);
    }
#line 855 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 0)));
#line 855 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 1)));
#line 855 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 2)));
#line 855 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 3)));
#line 855 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 4)));
#line 855 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 5)));
#line 855 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 6)));
#line 855 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 7)));
#line 855 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 8)));
#line 855 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 9)));
#line 855 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 10)));
#line 855 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 11)));
#line 855 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 12)));
#line 855 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 13)));
#line 855 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 14)));
#line 855 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 15)));
#line 855 "interval.m"
    {
#line 855 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 0) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 1) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 2) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 3) = ((MR_Box) (backend_libs__interval__BranchResumeMap_60));
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 4) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 5) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 6) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 7) = ((MR_Box) (backend_libs__interval__V_84_84));
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 8) = ((MR_Box) (backend_libs__interval__V_85_85));
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 9) = ((MR_Box) (backend_libs__interval__V_86_86));
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 10) = ((MR_Box) (backend_libs__interval__V_87_87));
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 11) = ((MR_Box) (backend_libs__interval__V_88_88));
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 12) = ((MR_Box) (backend_libs__interval__V_89_89));
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 13) = ((MR_Box) (backend_libs__interval__V_90_90));
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 14) = ((MR_Box) (backend_libs__interval__V_91_91));
#line 855 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 15) = ((MR_Box) (backend_libs__interval__V_92_92));
#line 855 "interval.m"
    }
#line 568 "interval.m"
    {
#line 568 "interval.m"
      backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_store_map_2_p_0(backend_libs__interval__GoalInfo_13, &backend_libs__interval__StoreMap_30);
    }
#line 572 "interval.m"
    if (backend_libs__interval__succeeded)
#line 569 "interval.m"
      {
#line 569 "interval.m"
        MR_Word backend_libs__interval__StoreMapVarList_31;
#line 569 "interval.m"
        MR_Word backend_libs__interval__StoreMapVars_32;

#line 569 "interval.m"
        {
#line 569 "interval.m"
          mercury__map__sorted_keys_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, backend_libs__interval__StoreMap_30, &backend_libs__interval__StoreMapVarList_31);
        }
#line 570 "interval.m"
        {
#line 570 "interval.m"
          backend_libs__interval__StoreMapVars_32 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__StoreMapVarList_31);
        }
#line 571 "interval.m"
        {
#line 571 "interval.m"
          backend_libs__interval__require_flushed_3_p_0(backend_libs__interval__StoreMapVars_32, backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41);
        }
#line 569 "interval.m"
      }
#line 572 "interval.m"
    else
#line 573 "interval.m"
      {
#line 573 "interval.m"
        {
#line 573 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.reached_branch_end\'/12", (MR_String) "no store map");
#line 573 "interval.m"
          return;
        }
#line 573 "interval.m"
      }
#line 575 "interval.m"
    {
#line 575 "interval.m"
      MR_Word base;
#line 575 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 575 "interval.m"
      *backend_libs__interval__EndAnchor_17 = base;
#line 575 "interval.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 575 "interval.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (backend_libs__interval__Construct_15));
#line 575 "interval.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (backend_libs__interval__GoalId_23));
#line 575 "interval.m"
    }
#line 576 "interval.m"
    {
#line 576 "interval.m"
      MR_Word base;
#line 576 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "interval.m"
      *backend_libs__interval__StartAnchor_16 = base;
#line 576 "interval.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Construct_15));
#line 576 "interval.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__GoalId_23));
#line 576 "interval.m"
    }
#line 577 "interval.m"
    {
#line 577 "interval.m"
      backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(*backend_libs__interval__EndAnchor_17, backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45);
    }
#line 578 "interval.m"
    {
#line 578 "interval.m"
      backend_libs__interval__CodeModel_33 = hlds__code_model__goal_info_get_code_model_1_f_0(backend_libs__interval__GoalInfo_13);
    }
#line 582 "interval.m"
#line 582 "interval.m"
    switch (backend_libs__interval__CodeModel_33) {
#line 582 "interval.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 582 "interval.m"
      case (MR_Integer) 0:
#line 583 "interval.m"
        backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 582 "interval.m"
        break;
#line 582 "interval.m"
      case (MR_Integer) 2:
#line 581 "interval.m"
        {
#line 581 "interval.m"
          backend_libs__interval__record_model_non_anchor_3_p_0(*backend_libs__interval__EndAnchor_17, backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46);
        }
#line 582 "interval.m"
        break;
#line 582 "interval.m"
      case (MR_Integer) 1:
#line 584 "interval.m"
        backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 582 "interval.m"
        break;
#line 582 "interval.m"
    }
#line 587 "interval.m"
    {
#line 587 "interval.m"
      backend_libs__interval__no_open_intervals_2_p_0(backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47);
    }
#line 588 "interval.m"
    {
#line 588 "interval.m"
      backend_libs__interval__get_cur_interval_2_p_0(backend_libs__interval__AfterIntervalId_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47);
    }
#line 589 "interval.m"
    {
#line 589 "interval.m"
      backend_libs__interval__record_interval_start_4_p_0(*backend_libs__interval__AfterIntervalId_19, *backend_libs__interval__EndAnchor_17, backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48);
    }
#line 590 "interval.m"
    {
#line 590 "interval.m"
      backend_libs__interval__new_interval_id_3_p_0(backend_libs__interval__BeforeIntervalId_18, backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_35);
    }
#line 552 "interval.m"
    *backend_libs__interval__STATE_VARIABLE_Acc_37 = backend_libs__interval__STATE_VARIABLE_Acc_0_36;
#line 552 "interval.m"
  }
#line 544 "interval.m"
}

#line 495 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(
#line 495 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27,
#line 495 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 495 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3,
#line 495 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_4,
#line 495 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_5,
#line 495 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_6)
#line 495 "interval.m"
{
#line 499 "interval.m"
  {
#line 499 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 499 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 499 "interval.m"
      {
#line 499 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_Acc_6 = backend_libs__interval__STATE_VARIABLE_Acc_0_5;
#line 499 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_IntervalInfo_4 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3;
#line 499 "interval.m"
      }
#line 499 "interval.m"
    else
#line 500 "interval.m"
      {
#line 500 "interval.m"
        MR_Word backend_libs__interval__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 500 "interval.m"
        MR_Word backend_libs__interval__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 500 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_23_23;
#line 500 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_24_24;

#line 505 "interval.m"
        {
#line 505 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27, backend_libs__interval__Goals_15, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_23_23, backend_libs__interval__STATE_VARIABLE_Acc_0_5, &backend_libs__interval__STATE_VARIABLE_Acc_24_24);
        }
#line 506 "interval.m"
        {
#line 506 "interval.m"
          backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27, backend_libs__interval__Goal_14, backend_libs__interval__STATE_VARIABLE_IntervalInfo_23_23, backend_libs__interval__STATE_VARIABLE_IntervalInfo_4, backend_libs__interval__STATE_VARIABLE_Acc_24_24, backend_libs__interval__STATE_VARIABLE_Acc_6);
#line 506 "interval.m"
          return;
        }
#line 500 "interval.m"
      }
#line 499 "interval.m"
  }
#line 495 "interval.m"
}

#line 439 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 439 "interval.m"
  MR_Word backend_libs__interval__Inputs_8,
#line 439 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedAcrossCall_9,
#line 439 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_10,
#line 439 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26,
#line 439 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_27,
#line 439 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_28,
#line 439 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_29)
#line 439 "interval.m"
{
#line 445 "interval.m"
  {
#line 445 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 488 "interval.m"
    if ((backend_libs__interval__MaybeNeedAcrossCall_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "interval.m"
      {
#line 490 "interval.m"
        {
#line 490 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_at_call\'/7", (MR_String) "no need across call");
#line 490 "interval.m"
          return;
        }
#line 489 "interval.m"
      }
#line 488 "interval.m"
    else
#line 447 "interval.m"
      {
#line 447 "interval.m"
        MR_Word backend_libs__interval__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 447 "interval.m"
        MR_Word backend_libs__interval__NeedAcrossCall_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeNeedAcrossCall_9, (MR_Integer) 0)));
#line 447 "interval.m"
        MR_Word backend_libs__interval__ForwardVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__NeedAcrossCall_13, (MR_Integer) 0)));
#line 447 "interval.m"
        MR_Word backend_libs__interval__ResumeVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__NeedAcrossCall_13, (MR_Integer) 1)));
#line 447 "interval.m"
        MR_Word backend_libs__interval__NondetLiveVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__NeedAcrossCall_13, (MR_Integer) 2)));
#line 447 "interval.m"
        MR_Word backend_libs__interval__VarsOnStack0_17;
#line 447 "interval.m"
        MR_Word backend_libs__interval__GoalId_18;
#line 447 "interval.m"
        MR_Word backend_libs__interval__CallAnchor_19;
#line 447 "interval.m"
        MR_Word backend_libs__interval__AfterCallId_20;
#line 447 "interval.m"
        MR_Word backend_libs__interval__BeforeCallId_21;
#line 447 "interval.m"
        MR_Word backend_libs__interval__InstMapDelta_22;
#line 447 "interval.m"
        MR_Word backend_libs__interval__IntParams_23;
#line 447 "interval.m"
        MR_Word backend_libs__interval__VarsOnStack_24;
#line 447 "interval.m"
        MR_Word backend_libs__interval__CodeModel_25;
#line 447 "interval.m"
        MR_Word backend_libs__interval__V_33_33;
#line 447 "interval.m"
        MR_Word backend_libs__interval__V_34_34;
#line 447 "interval.m"
        MR_Word backend_libs__interval__V_35_35;
#line 447 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_37_37;
#line 447 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 447 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39;
#line 447 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41;
#line 447 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_43_43;
#line 447 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44;
#line 447 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 447 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46;
#line 447 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47;
#line 447 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48;
#line 713 "interval.m"
        MR_Word backend_libs__interval__V_70_70;
#line 713 "interval.m"
        MR_Word backend_libs__interval__V_71_71;
#line 713 "interval.m"
        MR_Word backend_libs__interval__V_72_72;
#line 713 "interval.m"
        MR_Word backend_libs__interval__V_73_73;
#line 713 "interval.m"
        MR_Word backend_libs__interval__V_74_74;
#line 713 "interval.m"
        MR_Word backend_libs__interval__V_75_75;
#line 713 "interval.m"
        MR_Word backend_libs__interval__V_76_76;
#line 713 "interval.m"
        MR_Word backend_libs__interval__V_77_77;
#line 713 "interval.m"
        MR_Word backend_libs__interval__V_78_78;
#line 713 "interval.m"
        MR_Word backend_libs__interval__V_79_79;
#line 713 "interval.m"
        MR_Word backend_libs__interval__V_80_80;
#line 713 "interval.m"
        MR_Word backend_libs__interval__V_81_81;
#line 713 "interval.m"
        MR_Word backend_libs__interval__V_82_82;
#line 713 "interval.m"
        MR_Word backend_libs__interval__V_83_83;
#line 713 "interval.m"
        MR_Word backend_libs__interval__V_84_84;
#line 459 "interval.m"
        MR_Word backend_libs__interval__V_50_50;
#line 459 "interval.m"
        MR_Word backend_libs__interval__V_51_51;
#line 459 "interval.m"
        MR_Word backend_libs__interval__V_52_52;
#line 459 "interval.m"
        MR_Word backend_libs__interval__V_53_53;
#line 459 "interval.m"
        MR_Word backend_libs__interval__V_54_54;
#line 459 "interval.m"
        MR_Word backend_libs__interval__V_55_55;
#line 459 "interval.m"
        MR_Word backend_libs__interval__V_56_56;
#line 459 "interval.m"
        MR_Word backend_libs__interval__V_57_57;
#line 459 "interval.m"
        MR_Word backend_libs__interval__V_58_58;
#line 459 "interval.m"
        MR_Word backend_libs__interval__V_59_59;
#line 459 "interval.m"
        MR_Word backend_libs__interval__V_60_60;
#line 459 "interval.m"
        MR_Word backend_libs__interval__V_61_61;
#line 459 "interval.m"
        MR_Word backend_libs__interval__V_62_62;
#line 459 "interval.m"
        MR_Word backend_libs__interval__V_63_63;
#line 459 "interval.m"
        MR_Word backend_libs__interval__V_64_64;

#line 451 "interval.m"
        {
#line 451 "interval.m"
          backend_libs__interval__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_35_35, 0) = ((MR_Box) (backend_libs__interval__NondetLiveVars_16));
#line 451 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 451 "interval.m"
        }
#line 450 "interval.m"
        {
#line 450 "interval.m"
          backend_libs__interval__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_34_34, 0) = ((MR_Box) (backend_libs__interval__ResumeVars_15));
#line 450 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_34_34, 1) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 450 "interval.m"
        }
#line 450 "interval.m"
        {
#line 450 "interval.m"
          backend_libs__interval__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_33_33, 0) = ((MR_Box) (backend_libs__interval__ForwardVars_14));
#line 450 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_33_33, 1) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 450 "interval.m"
        }
#line 450 "interval.m"
        {
#line 450 "interval.m"
          backend_libs__interval__VarsOnStack0_17 = parse_tree__set_of_var__union_list_1_f_0(backend_libs__interval__TypeCtorInfo_68_68, backend_libs__interval__V_33_33);
        }
#line 452 "interval.m"
        {
#line 452 "interval.m"
          backend_libs__interval__GoalId_18 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_10);
        }
#line 453 "interval.m"
        {
#line 453 "interval.m"
          backend_libs__interval__CallAnchor_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__CallAnchor_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 453 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__CallAnchor_19, 1) = ((MR_Box) (backend_libs__interval__GoalId_18));
#line 453 "interval.m"
        }
#line 713 "interval.m"
        backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 0)));
#line 713 "interval.m"
        backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 1)));
#line 713 "interval.m"
        backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 2)));
#line 713 "interval.m"
        backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 3)));
#line 713 "interval.m"
        backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 4)));
#line 713 "interval.m"
        backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 5)));
#line 713 "interval.m"
        backend_libs__interval__AfterCallId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 6)));
#line 713 "interval.m"
        backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 7)));
#line 713 "interval.m"
        backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 8)));
#line 713 "interval.m"
        backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 9)));
#line 713 "interval.m"
        backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 10)));
#line 713 "interval.m"
        backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 11)));
#line 713 "interval.m"
        backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 12)));
#line 713 "interval.m"
        backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 13)));
#line 713 "interval.m"
        backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 14)));
#line 713 "interval.m"
        backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 15)));
#line 455 "interval.m"
        {
#line 455 "interval.m"
          backend_libs__interval__new_interval_id_3_p_0(&backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_37_37);
        }
#line 456 "interval.m"
        {
#line 456 "interval.m"
          backend_libs__interval__record_interval_start_4_p_0(backend_libs__interval__AfterCallId_20, backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_37_37, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
        }
#line 457 "interval.m"
        {
#line 457 "interval.m"
          backend_libs__interval__record_interval_end_4_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39);
        }
#line 458 "interval.m"
        {
#line 458 "interval.m"
          backend_libs__interval__InstMapDelta_22 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(backend_libs__interval__GoalInfo_10);
        }
#line 459 "interval.m"
        backend_libs__interval__IntParams_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 0)));
#line 459 "interval.m"
        backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 1)));
#line 459 "interval.m"
        backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 2)));
#line 459 "interval.m"
        backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 3)));
#line 459 "interval.m"
        backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 4)));
#line 459 "interval.m"
        backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 5)));
#line 459 "interval.m"
        backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 6)));
#line 459 "interval.m"
        backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 7)));
#line 459 "interval.m"
        backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 8)));
#line 459 "interval.m"
        backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 9)));
#line 459 "interval.m"
        backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 10)));
#line 459 "interval.m"
        backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 11)));
#line 459 "interval.m"
        backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 12)));
#line 459 "interval.m"
        backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 13)));
#line 459 "interval.m"
        backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 14)));
#line 459 "interval.m"
        backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 15)));
#line 461 "interval.m"
        {
#line 461 "interval.m"
          backend_libs__interval__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(backend_libs__interval__InstMapDelta_22);
        }
#line 462 "interval.m"
        if (!(backend_libs__interval__succeeded))
#line 462 "interval.m"
          {
#line 462 "interval.m"
            MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_23, (MR_Integer) 2)));
#line 462 "interval.m"
            MR_Word backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_23, (MR_Integer) 0)));
#line 462 "interval.m"
            MR_Word backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_23, (MR_Integer) 1)));

#line 462 "interval.m"
            backend_libs__interval__succeeded = (backend_libs__interval__V_40_40 == (MR_Integer) 0);
#line 462 "interval.m"
          }
#line 467 "interval.m"
        if (backend_libs__interval__succeeded)
#line 465 "interval.m"
          {
#line 465 "interval.m"
            {
#line 465 "interval.m"
              backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__AfterCallId_20, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41);
            }
#line 466 "interval.m"
            backend_libs__interval__VarsOnStack_24 = backend_libs__interval__VarsOnStack0_17;
#line 465 "interval.m"
          }
#line 467 "interval.m"
        else
#line 470 "interval.m"
          {
#line 470 "interval.m"
            {
#line 470 "interval.m"
              backend_libs__interval__record_interval_no_succ_3_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41);
            }
#line 471 "interval.m"
            {
#line 471 "interval.m"
              backend_libs__interval__VarsOnStack_24 = parse_tree__set_of_var__init_0_f_0(backend_libs__interval__TypeCtorInfo_68_68);
            }
#line 470 "interval.m"
          }
#line 473 "interval.m"
        {
#line 473 "interval.m"
          backend_libs__interval__set_cur_interval_3_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_43_43);
        }
#line 474 "interval.m"
        {
#line 474 "interval.m"
          backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_43_43, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44);
        }
#line 475 "interval.m"
        {
#line 475 "interval.m"
          backend_libs__interval__CodeModel_25 = hlds__code_model__goal_info_get_code_model_1_f_0(backend_libs__interval__GoalInfo_10);
        }
#line 479 "interval.m"
#line 479 "interval.m"
        switch (backend_libs__interval__CodeModel_25) {
#line 479 "interval.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 479 "interval.m"
          case (MR_Integer) 0:
#line 480 "interval.m"
            backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44;
#line 479 "interval.m"
            break;
#line 479 "interval.m"
          case (MR_Integer) 2:
#line 478 "interval.m"
            {
#line 478 "interval.m"
              backend_libs__interval__record_model_non_anchor_3_p_0(backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45);
            }
#line 479 "interval.m"
            break;
#line 479 "interval.m"
          case (MR_Integer) 1:
#line 481 "interval.m"
            backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44;
#line 479 "interval.m"
            break;
#line 479 "interval.m"
        }
#line 484 "interval.m"
        {
#line 484 "interval.m"
          backend_libs__interval__one_open_interval_3_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46);
        }
#line 485 "interval.m"
        {
#line 485 "interval.m"
          backend_libs__interval__require_flushed_3_p_0(backend_libs__interval__VarsOnStack_24, backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47);
        }
#line 486 "interval.m"
        {
#line 486 "interval.m"
          backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__Inputs_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48);
        }
#line 487 "interval.m"
        {
#line 487 "interval.m"
          backend_libs__interval__require_access_3_p_0(backend_libs__interval__Inputs_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_27);
        }
#line 447 "interval.m"
      }
#line 445 "interval.m"
    *backend_libs__interval__STATE_VARIABLE_Acc_29 = backend_libs__interval__STATE_VARIABLE_Acc_0_28;
#line 445 "interval.m"
  }
#line 439 "interval.m"
}

#line 1331 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1331__1_2_p_0(
#line 1331 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_31,
#line 1331 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_32)
#line 1331 "interval.m"
{
#line 1331 "interval.m"
  {
#line 1331 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1331 "interval.m"
    {
#line 1331 "interval.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVar__1_31, backend_libs__interval__HeadVar__2_32);
#line 1331 "interval.m"
      return;
    }
#line 1331 "interval.m"
  }
#line 1331 "interval.m"
}

#line 1318 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_deletion__1318__1_2_p_0(
#line 1318 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_16,
#line 1318 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_17)
#line 1318 "interval.m"
{
#line 1318 "interval.m"
  {
#line 1318 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1318 "interval.m"
    {
#line 1318 "interval.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVar__1_16, backend_libs__interval__HeadVar__2_17);
#line 1318 "interval.m"
      return;
    }
#line 1318 "interval.m"
  }
#line 1318 "interval.m"
}

#line 1300 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1300__1_2_p_0(
#line 1300 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_154,
#line 1300 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_155)
#line 1300 "interval.m"
{
#line 1300 "interval.m"
  {
#line 1300 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1300 "interval.m"
    {
#line 1300 "interval.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVar__1_154, backend_libs__interval__HeadVar__2_155);
#line 1300 "interval.m"
      return;
    }
#line 1300 "interval.m"
  }
#line 1300 "interval.m"
}

#line 55 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0(
#line 55 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 55 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 55 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 55 "interval.m"
{
#line 55 "interval.m"
  {
#line 55 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 55 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar1_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 55 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar2_5 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 55 "interval.m"
    {
#line 55 "interval.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__Cast_HeadVar1_4, backend_libs__interval__Cast_HeadVar2_5);
#line 55 "interval.m"
      return;
    }
#line 55 "interval.m"
  }
#line 55 "interval.m"
}

#line 55 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0(
#line 55 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_1,
#line 55 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 55 "interval.m"
{
#line 5608 "backend_libs.interval.c"
  {
#line 5610 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 5613 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 5615 "backend_libs.interval.c"
  }
#line 55 "interval.m"
}

#line 59 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____save_point_0_0(
#line 59 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 59 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 59 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 59 "interval.m"
{
#line 59 "interval.m"
  {
#line 59 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 59 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 59 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 59 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 59 "interval.m"
    if (backend_libs__interval__succeeded)
#line 5644 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 59 "interval.m"
    else
#line 59 "interval.m"
      {
#line 59 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 59 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 59 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 59 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 59 "interval.m"
        MR_Word backend_libs__interval__V_8_8;
#line 59 "interval.m"
        MR_Integer backend_libs__interval__V_13_13 = (MR_Integer) backend_libs__interval__V_4_4;
#line 59 "interval.m"
        MR_Integer backend_libs__interval__V_14_14 = (MR_Integer) backend_libs__interval__V_6_6;

#line 59 "interval.m"
        {
#line 59 "interval.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__interval__V_8_8, backend_libs__interval__V_13_13, backend_libs__interval__V_14_14);
        }
#line 5670 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_8_8 == (MR_Integer) 0);
#line 59 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 59 "interval.m"
        if (backend_libs__interval__succeeded)
#line 59 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_8_8;
#line 59 "interval.m"
        else
#line 59 "interval.m"
          {
#line 59 "interval.m"
            MR_Integer backend_libs__interval__V_15_15 = (MR_Integer) backend_libs__interval__V_5_5;
#line 59 "interval.m"
            MR_Integer backend_libs__interval__V_16_16 = (MR_Integer) backend_libs__interval__V_7_7;

#line 59 "interval.m"
            {
#line 59 "interval.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_15_15, backend_libs__interval__V_16_16);
#line 59 "interval.m"
              return;
            }
#line 59 "interval.m"
          }
#line 59 "interval.m"
      }
#line 59 "interval.m"
  }
#line 59 "interval.m"
}

#line 59 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0(
#line 59 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 59 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 59 "interval.m"
{
#line 59 "interval.m"
  {
#line 59 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 59 "interval.m"
    MR_Integer backend_libs__interval__CastX_7 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 59 "interval.m"
    MR_Integer backend_libs__interval__CastY_8 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 59 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_7 == backend_libs__interval__CastY_8);
#line 59 "interval.m"
    if (backend_libs__interval__succeeded)
#line 59 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 59 "interval.m"
    else
#line 59 "interval.m"
      {
#line 59 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 59 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 59 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 59 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 59 "interval.m"
        MR_Integer backend_libs__interval__V_10_10;
#line 59 "interval.m"
        MR_Integer backend_libs__interval__V_11_11;

#line 5744 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_3_3 == backend_libs__interval__V_5_5);
#line 59 "interval.m"
        if (backend_libs__interval__succeeded)
#line 59 "interval.m"
          {
#line 5750 "backend_libs.interval.c"
            backend_libs__interval__V_10_10 = (MR_Integer) backend_libs__interval__V_4_4;
#line 5752 "backend_libs.interval.c"
            backend_libs__interval__V_11_11 = (MR_Integer) backend_libs__interval__V_6_6;
#line 5754 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_10_10 == backend_libs__interval__V_11_11);
#line 59 "interval.m"
          }
#line 59 "interval.m"
      }
#line 59 "interval.m"
    return backend_libs__interval__succeeded;
#line 59 "interval.m"
  }
#line 59 "interval.m"
}

#line 72 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0(
#line 72 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 72 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 72 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 72 "interval.m"
{
#line 72 "interval.m"
  {
#line 72 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 72 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar1_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 72 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar2_5 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 72 "interval.m"
    {
#line 72 "interval.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__Cast_HeadVar1_4, backend_libs__interval__Cast_HeadVar2_5);
#line 72 "interval.m"
      return;
    }
#line 72 "interval.m"
  }
#line 72 "interval.m"
}

#line 72 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0(
#line 72 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_1,
#line 72 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 72 "interval.m"
{
#line 5808 "backend_libs.interval.c"
  {
#line 5810 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 5813 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 5815 "backend_libs.interval.c"
  }
#line 72 "interval.m"
}

#line 155 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0(
#line 155 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 155 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 155 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 155 "interval.m"
{
#line 155 "interval.m"
  {
#line 155 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 155 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar1_4 = backend_libs__interval__HeadVar__2_2;
#line 155 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar2_5 = backend_libs__interval__HeadVar__3_3;

#line 155 "interval.m"
    {
#line 155 "interval.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[11], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__interval__Cast_HeadVar2_5)));
#line 155 "interval.m"
      return;
    }
#line 155 "interval.m"
  }
#line 155 "interval.m"
}

#line 155 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0(
#line 155 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 155 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 155 "interval.m"
{
#line 155 "interval.m"
  {
#line 155 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 155 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar1_3 = backend_libs__interval__HeadVar__1_1;
#line 155 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar2_4 = backend_libs__interval__HeadVar__2_2;

#line 155 "interval.m"
    {
#line 155 "interval.m"
      return backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_2[11], ((MR_Box) (backend_libs__interval__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__interval__Cast_HeadVar2_4)));
    }
#line 155 "interval.m"
    return backend_libs__interval__succeeded;
#line 155 "interval.m"
  }
#line 155 "interval.m"
}

#line 136 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0(
#line 136 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 136 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 136 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 136 "interval.m"
{
#line 136 "interval.m"
  {
#line 136 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 136 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar1_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 136 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar2_5 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 136 "interval.m"
    {
#line 136 "interval.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__Cast_HeadVar1_4, backend_libs__interval__Cast_HeadVar2_5);
#line 136 "interval.m"
      return;
    }
#line 136 "interval.m"
  }
#line 136 "interval.m"
}

#line 136 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0(
#line 136 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_1,
#line 136 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 136 "interval.m"
{
#line 5923 "backend_libs.interval.c"
  {
#line 5925 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 5928 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 5930 "backend_libs.interval.c"
  }
#line 136 "interval.m"
}

#line 868 "interval.m"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0(
#line 868 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 868 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 868 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 868 "interval.m"
{
#line 868 "interval.m"
  {
#line 868 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 868 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 868 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 868 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 868 "interval.m"
    if (backend_libs__interval__succeeded)
#line 5959 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 868 "interval.m"
    else
#line 868 "interval.m"
      {
#line 868 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 868 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 868 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 868 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 868 "interval.m"
        MR_Word backend_libs__interval__V_8_8;

#line 868 "interval.m"
        {
#line 868 "interval.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[7], &backend_libs__interval__V_8_8, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
        }
#line 5981 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_8_8 == (MR_Integer) 0);
#line 868 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 868 "interval.m"
        if (backend_libs__interval__succeeded)
#line 868 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_8_8;
#line 868 "interval.m"
        else
#line 868 "interval.m"
          {
#line 868 "interval.m"
            {
#line 868 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[10], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_7_7)));
#line 868 "interval.m"
              return;
            }
#line 868 "interval.m"
          }
#line 868 "interval.m"
      }
#line 868 "interval.m"
  }
#line 868 "interval.m"
}

#line 868 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0(
#line 868 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 868 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 868 "interval.m"
{
#line 868 "interval.m"
  {
#line 868 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 868 "interval.m"
    MR_Integer backend_libs__interval__CastX_7 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 868 "interval.m"
    MR_Integer backend_libs__interval__CastY_8 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 868 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_7 == backend_libs__interval__CastY_8);
#line 868 "interval.m"
    if (backend_libs__interval__succeeded)
#line 868 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 868 "interval.m"
    else
#line 868 "interval.m"
      {
#line 868 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_10_10;
#line 868 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 868 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 868 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 868 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 6048 "backend_libs.interval.c"
        {
#line 6050 "backend_libs.interval.c"
          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[7], ((MR_Box) (backend_libs__interval__V_3_3)), ((MR_Box) (backend_libs__interval__V_5_5)));
        }
#line 868 "interval.m"
        if (backend_libs__interval__succeeded)
#line 868 "interval.m"
          {
#line 6057 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_10_10 = (MR_Word) &backend_libs__interval_scalar_common_2[10];
#line 6059 "backend_libs.interval.c"
            {
#line 6061 "backend_libs.interval.c"
              return backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_10_10, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
            }
#line 868 "interval.m"
          }
#line 868 "interval.m"
      }
#line 868 "interval.m"
    return backend_libs__interval__succeeded;
#line 868 "interval.m"
  }
#line 868 "interval.m"
}

#line 108 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0(
#line 108 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 108 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 108 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 108 "interval.m"
{
#line 108 "interval.m"
  {
#line 108 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 108 "interval.m"
    MR_Integer backend_libs__interval__CastX_12 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 108 "interval.m"
    MR_Integer backend_libs__interval__CastY_13 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 108 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_12 == backend_libs__interval__CastY_13);
#line 108 "interval.m"
    if (backend_libs__interval__succeeded)
#line 6099 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 108 "interval.m"
    else
#line 108 "interval.m"
      {
#line 108 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 108 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 108 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 108 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 108 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 108 "interval.m"
        MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 2)));
#line 108 "interval.m"
        MR_Word backend_libs__interval__V_10_10;

#line 108 "interval.m"
        {
#line 108 "interval.m"
          hlds__hlds_module____Compare____module_info_0_0(&backend_libs__interval__V_10_10, backend_libs__interval__V_4_4, backend_libs__interval__V_7_7);
        }
#line 6125 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_10_10 == (MR_Integer) 0);
#line 108 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 108 "interval.m"
        if (backend_libs__interval__succeeded)
#line 108 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_10_10;
#line 108 "interval.m"
        else
#line 108 "interval.m"
          {
#line 108 "interval.m"
            MR_Word backend_libs__interval__V_11_11;

#line 108 "interval.m"
            {
#line 108 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[10], &backend_libs__interval__V_11_11, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_8_8)));
            }
#line 6145 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_11_11 == (MR_Integer) 0);
#line 108 "interval.m"
            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 108 "interval.m"
            if (backend_libs__interval__succeeded)
#line 108 "interval.m"
              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_11_11;
#line 108 "interval.m"
            else
#line 108 "interval.m"
              {
#line 108 "interval.m"
                MR_Integer backend_libs__interval__V_17_17 = (MR_Integer) backend_libs__interval__V_6_6;
#line 108 "interval.m"
                MR_Integer backend_libs__interval__V_18_18 = (MR_Integer) backend_libs__interval__V_9_9;

#line 108 "interval.m"
                {
#line 108 "interval.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_17_17, backend_libs__interval__V_18_18);
#line 108 "interval.m"
                  return;
                }
#line 108 "interval.m"
              }
#line 108 "interval.m"
          }
#line 108 "interval.m"
      }
#line 108 "interval.m"
  }
#line 108 "interval.m"
}

#line 108 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0(
#line 108 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 108 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 108 "interval.m"
{
#line 108 "interval.m"
  {
#line 108 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 108 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 108 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 108 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 108 "interval.m"
    if (backend_libs__interval__succeeded)
#line 108 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 108 "interval.m"
    else
#line 108 "interval.m"
      {
#line 108 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_12_12;
#line 108 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 108 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 2)));
#line 108 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 108 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 108 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));

#line 6223 "backend_libs.interval.c"
        {
#line 6225 "backend_libs.interval.c"
          backend_libs__interval__succeeded = hlds__hlds_module____Unify____module_info_0_0(backend_libs__interval__V_3_3, backend_libs__interval__V_6_6);
        }
#line 108 "interval.m"
        if (backend_libs__interval__succeeded)
#line 108 "interval.m"
          {
#line 6232 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_12_12 = (MR_Word) &backend_libs__interval_scalar_common_2[10];
#line 6234 "backend_libs.interval.c"
            {
#line 6236 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_12_12, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_7_7)));
            }
#line 108 "interval.m"
            if (backend_libs__interval__succeeded)
#line 6241 "backend_libs.interval.c"
              backend_libs__interval__succeeded = (backend_libs__interval__V_5_5 == backend_libs__interval__V_8_8);
#line 108 "interval.m"
          }
#line 108 "interval.m"
      }
#line 108 "interval.m"
    return backend_libs__interval__succeeded;
#line 108 "interval.m"
  }
#line 108 "interval.m"
}

#line 115 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0(
#line 115 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 115 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 115 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 115 "interval.m"
{
#line 115 "interval.m"
  {
#line 115 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 115 "interval.m"
    MR_Integer backend_libs__interval__CastX_51 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 115 "interval.m"
    MR_Integer backend_libs__interval__CastY_52 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 115 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_51 == backend_libs__interval__CastY_52);
#line 115 "interval.m"
    if (backend_libs__interval__succeeded)
#line 6278 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 115 "interval.m"
    else
#line 115 "interval.m"
      {
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 3)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 4)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 5)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 6)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 7)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 8)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 9)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 10)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 11)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 12)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 13)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 14)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 15)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 2)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 3)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 4)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 5)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 6)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 7)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 8)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 9)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 10)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 11)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 12)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 13)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 14)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 15)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_36_36;

#line 115 "interval.m"
        {
#line 115 "interval.m"
          backend_libs__interval____Compare____interval_params_0_0(&backend_libs__interval__V_36_36, backend_libs__interval__V_4_4, backend_libs__interval__V_20_20);
        }
#line 6356 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_36_36 == (MR_Integer) 0);
#line 115 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 115 "interval.m"
        if (backend_libs__interval__succeeded)
#line 115 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_36_36;
#line 115 "interval.m"
        else
#line 115 "interval.m"
          {
#line 115 "interval.m"
            MR_Word backend_libs__interval__V_37_37;

#line 115 "interval.m"
            {
#line 115 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], &backend_libs__interval__V_37_37, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_21_21)));
            }
#line 6376 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_37_37 == (MR_Integer) 0);
#line 115 "interval.m"
            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 115 "interval.m"
            if (backend_libs__interval__succeeded)
#line 115 "interval.m"
              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_37_37;
#line 115 "interval.m"
            else
#line 115 "interval.m"
              {
#line 115 "interval.m"
                MR_Word backend_libs__interval__V_38_38;

#line 115 "interval.m"
                {
#line 115 "interval.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], &backend_libs__interval__V_38_38, ((MR_Box) (backend_libs__interval__V_6_6)), ((MR_Box) (backend_libs__interval__V_22_22)));
                }
#line 6396 "backend_libs.interval.c"
                backend_libs__interval__succeeded = (backend_libs__interval__V_38_38 == (MR_Integer) 0);
#line 115 "interval.m"
                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 115 "interval.m"
                if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                  *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_38_38;
#line 115 "interval.m"
                else
#line 115 "interval.m"
                  {
#line 115 "interval.m"
                    MR_Word backend_libs__interval__V_39_39;

#line 115 "interval.m"
                    {
#line 115 "interval.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[2], &backend_libs__interval__V_39_39, ((MR_Box) (backend_libs__interval__V_7_7)), ((MR_Box) (backend_libs__interval__V_23_23)));
                    }
#line 6416 "backend_libs.interval.c"
                    backend_libs__interval__succeeded = (backend_libs__interval__V_39_39 == (MR_Integer) 0);
#line 115 "interval.m"
                    backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 115 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                      *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_39_39;
#line 115 "interval.m"
                    else
#line 115 "interval.m"
                      {
#line 115 "interval.m"
                        MR_Word backend_libs__interval__V_40_40;

#line 115 "interval.m"
                        {
#line 115 "interval.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[3], &backend_libs__interval__V_40_40, ((MR_Box) (backend_libs__interval__V_8_8)), ((MR_Box) (backend_libs__interval__V_24_24)));
                        }
#line 6436 "backend_libs.interval.c"
                        backend_libs__interval__succeeded = (backend_libs__interval__V_40_40 == (MR_Integer) 0);
#line 115 "interval.m"
                        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 115 "interval.m"
                        if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_40_40;
#line 115 "interval.m"
                        else
#line 115 "interval.m"
                          {
#line 115 "interval.m"
                            MR_Word backend_libs__interval__V_41_41;

#line 115 "interval.m"
                            {
#line 115 "interval.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[4], &backend_libs__interval__V_41_41, ((MR_Box) (backend_libs__interval__V_9_9)), ((MR_Box) (backend_libs__interval__V_25_25)));
                            }
#line 6456 "backend_libs.interval.c"
                            backend_libs__interval__succeeded = (backend_libs__interval__V_41_41 == (MR_Integer) 0);
#line 115 "interval.m"
                            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 115 "interval.m"
                            if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_41_41;
#line 115 "interval.m"
                            else
#line 115 "interval.m"
                              {
#line 115 "interval.m"
                                MR_Word backend_libs__interval__V_42_42;
#line 115 "interval.m"
                                MR_Integer backend_libs__interval__V_69_69 = (MR_Integer) backend_libs__interval__V_10_10;
#line 115 "interval.m"
                                MR_Integer backend_libs__interval__V_70_70 = (MR_Integer) backend_libs__interval__V_26_26;

#line 115 "interval.m"
                                {
#line 115 "interval.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__interval__V_42_42, backend_libs__interval__V_69_69, backend_libs__interval__V_70_70);
                                }
#line 6480 "backend_libs.interval.c"
                                backend_libs__interval__succeeded = (backend_libs__interval__V_42_42 == (MR_Integer) 0);
#line 115 "interval.m"
                                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 115 "interval.m"
                                if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                  *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_42_42;
#line 115 "interval.m"
                                else
#line 115 "interval.m"
                                  {
#line 115 "interval.m"
                                    MR_Word backend_libs__interval__V_43_43;

#line 115 "interval.m"
                                    {
#line 115 "interval.m"
                                      mercury__counter____Compare____counter_0_0(&backend_libs__interval__V_43_43, backend_libs__interval__V_11_11, backend_libs__interval__V_27_27);
                                    }
#line 6500 "backend_libs.interval.c"
                                    backend_libs__interval__succeeded = (backend_libs__interval__V_43_43 == (MR_Integer) 0);
#line 115 "interval.m"
                                    backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 115 "interval.m"
                                    if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                      *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_43_43;
#line 115 "interval.m"
                                    else
#line 115 "interval.m"
                                      {
#line 115 "interval.m"
                                        MR_Word backend_libs__interval__V_44_44;

#line 115 "interval.m"
                                        {
#line 115 "interval.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[5], &backend_libs__interval__V_44_44, ((MR_Box) (backend_libs__interval__V_12_12)), ((MR_Box) (backend_libs__interval__V_28_28)));
                                        }
#line 6520 "backend_libs.interval.c"
                                        backend_libs__interval__succeeded = (backend_libs__interval__V_44_44 == (MR_Integer) 0);
#line 115 "interval.m"
                                        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 115 "interval.m"
                                        if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_44_44;
#line 115 "interval.m"
                                        else
#line 115 "interval.m"
                                          {
#line 115 "interval.m"
                                            MR_Word backend_libs__interval__V_45_45;

#line 115 "interval.m"
                                            {
#line 115 "interval.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[5], &backend_libs__interval__V_45_45, ((MR_Box) (backend_libs__interval__V_13_13)), ((MR_Box) (backend_libs__interval__V_29_29)));
                                            }
#line 6540 "backend_libs.interval.c"
                                            backend_libs__interval__succeeded = (backend_libs__interval__V_45_45 == (MR_Integer) 0);
#line 115 "interval.m"
                                            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 115 "interval.m"
                                            if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_45_45;
#line 115 "interval.m"
                                            else
#line 115 "interval.m"
                                              {
#line 115 "interval.m"
                                                MR_Word backend_libs__interval__V_46_46;

#line 115 "interval.m"
                                                {
#line 115 "interval.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[6], &backend_libs__interval__V_46_46, ((MR_Box) (backend_libs__interval__V_14_14)), ((MR_Box) (backend_libs__interval__V_30_30)));
                                                }
#line 6560 "backend_libs.interval.c"
                                                backend_libs__interval__succeeded = (backend_libs__interval__V_46_46 == (MR_Integer) 0);
#line 115 "interval.m"
                                                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 115 "interval.m"
                                                if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                                  *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_46_46;
#line 115 "interval.m"
                                                else
#line 115 "interval.m"
                                                  {
#line 115 "interval.m"
                                                    MR_Word backend_libs__interval__V_47_47;

#line 115 "interval.m"
                                                    {
#line 115 "interval.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[6], &backend_libs__interval__V_47_47, ((MR_Box) (backend_libs__interval__V_15_15)), ((MR_Box) (backend_libs__interval__V_31_31)));
                                                    }
#line 6580 "backend_libs.interval.c"
                                                    backend_libs__interval__succeeded = (backend_libs__interval__V_47_47 == (MR_Integer) 0);
#line 115 "interval.m"
                                                    backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 115 "interval.m"
                                                    if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                                      *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_47_47;
#line 115 "interval.m"
                                                    else
#line 115 "interval.m"
                                                      {
#line 115 "interval.m"
                                                        MR_Word backend_libs__interval__V_48_48;

#line 115 "interval.m"
                                                        {
#line 115 "interval.m"
                                                          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[6], &backend_libs__interval__V_48_48, ((MR_Box) (backend_libs__interval__V_16_16)), ((MR_Box) (backend_libs__interval__V_32_32)));
                                                        }
#line 6600 "backend_libs.interval.c"
                                                        backend_libs__interval__succeeded = (backend_libs__interval__V_48_48 == (MR_Integer) 0);
#line 115 "interval.m"
                                                        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 115 "interval.m"
                                                        if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                                          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_48_48;
#line 115 "interval.m"
                                                        else
#line 115 "interval.m"
                                                          {
#line 115 "interval.m"
                                                            MR_Word backend_libs__interval__V_49_49;

#line 115 "interval.m"
                                                            {
#line 115 "interval.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[7], &backend_libs__interval__V_49_49, ((MR_Box) (backend_libs__interval__V_17_17)), ((MR_Box) (backend_libs__interval__V_33_33)));
                                                            }
#line 6620 "backend_libs.interval.c"
                                                            backend_libs__interval__succeeded = (backend_libs__interval__V_49_49 == (MR_Integer) 0);
#line 115 "interval.m"
                                                            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 115 "interval.m"
                                                            if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                                              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_49_49;
#line 115 "interval.m"
                                                            else
#line 115 "interval.m"
                                                              {
#line 115 "interval.m"
                                                                MR_Word backend_libs__interval__V_50_50;

#line 115 "interval.m"
                                                                {
#line 115 "interval.m"
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[8], &backend_libs__interval__V_50_50, ((MR_Box) (backend_libs__interval__V_18_18)), ((MR_Box) (backend_libs__interval__V_34_34)));
                                                                }
#line 6640 "backend_libs.interval.c"
                                                                backend_libs__interval__succeeded = (backend_libs__interval__V_50_50 == (MR_Integer) 0);
#line 115 "interval.m"
                                                                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 115 "interval.m"
                                                                if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                                                  *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_50_50;
#line 115 "interval.m"
                                                                else
#line 115 "interval.m"
                                                                  {
#line 115 "interval.m"
                                                                    {
#line 115 "interval.m"
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[9], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__V_19_19)), ((MR_Box) (backend_libs__interval__V_35_35)));
#line 115 "interval.m"
                                                                      return;
                                                                    }
#line 115 "interval.m"
                                                                  }
#line 115 "interval.m"
                                                              }
#line 115 "interval.m"
                                                          }
#line 115 "interval.m"
                                                      }
#line 115 "interval.m"
                                                  }
#line 115 "interval.m"
                                              }
#line 115 "interval.m"
                                          }
#line 115 "interval.m"
                                      }
#line 115 "interval.m"
                                  }
#line 115 "interval.m"
                              }
#line 115 "interval.m"
                          }
#line 115 "interval.m"
                      }
#line 115 "interval.m"
                  }
#line 115 "interval.m"
              }
#line 115 "interval.m"
          }
#line 115 "interval.m"
      }
#line 115 "interval.m"
  }
#line 115 "interval.m"
}

#line 115 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0(
#line 115 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 115 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 115 "interval.m"
{
#line 115 "interval.m"
  {
#line 115 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 115 "interval.m"
    MR_Integer backend_libs__interval__CastX_35 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 115 "interval.m"
    MR_Integer backend_libs__interval__CastY_36 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 115 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_35 == backend_libs__interval__CastY_36);
#line 115 "interval.m"
    if (backend_libs__interval__succeeded)
#line 115 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 115 "interval.m"
    else
#line 115 "interval.m"
      {
#line 115 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_37_37;
#line 115 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_38_38;
#line 115 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_39_39;
#line 115 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_40_40;
#line 115 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_41_41;
#line 115 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_43_43;
#line 115 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_44_44;
#line 115 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_45_45;
#line 115 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_46_46;
#line 115 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_47_47;
#line 115 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_48_48;
#line 115 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_49_49;
#line 115 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_50_50;
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 2)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 3)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 4)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 5)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 6)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 7)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 8)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 9)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 10)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 11)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 12)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 13)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 14)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 15)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 3)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 4)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 5)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 6)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 7)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 8)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 9)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 10)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 11)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 12)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 13)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 14)));
#line 115 "interval.m"
        MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 15)));
#line 84 "interval.m"
        MR_Integer backend_libs__interval__CastX_53;
#line 84 "interval.m"
        MR_Integer backend_libs__interval__CastY_54;

#line 6819 "backend_libs.interval.c"
        {
#line 6821 "backend_libs.interval.c"
          backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_params_0_0(backend_libs__interval__V_3_3, backend_libs__interval__V_19_19);
        }
#line 115 "interval.m"
        if (backend_libs__interval__succeeded)
#line 115 "interval.m"
          {
#line 6828 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_37_37 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 6830 "backend_libs.interval.c"
            {
#line 6832 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_37_37, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_20_20)));
            }
#line 115 "interval.m"
            if (backend_libs__interval__succeeded)
#line 115 "interval.m"
              {
#line 6839 "backend_libs.interval.c"
                backend_libs__interval__TypeInfo_38_38 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 6841 "backend_libs.interval.c"
                {
#line 6843 "backend_libs.interval.c"
                  backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_38_38, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_21_21)));
                }
#line 115 "interval.m"
                if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                  {
#line 6850 "backend_libs.interval.c"
                    backend_libs__interval__TypeInfo_39_39 = (MR_Word) &backend_libs__interval_scalar_common_2[2];
#line 6852 "backend_libs.interval.c"
                    {
#line 6854 "backend_libs.interval.c"
                      backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_39_39, ((MR_Box) (backend_libs__interval__V_6_6)), ((MR_Box) (backend_libs__interval__V_22_22)));
                    }
#line 115 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                      {
#line 6861 "backend_libs.interval.c"
                        backend_libs__interval__TypeInfo_40_40 = (MR_Word) &backend_libs__interval_scalar_common_2[3];
#line 6863 "backend_libs.interval.c"
                        {
#line 6865 "backend_libs.interval.c"
                          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_40_40, ((MR_Box) (backend_libs__interval__V_7_7)), ((MR_Box) (backend_libs__interval__V_23_23)));
                        }
#line 115 "interval.m"
                        if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                          {
#line 6872 "backend_libs.interval.c"
                            backend_libs__interval__TypeInfo_41_41 = (MR_Word) &backend_libs__interval_scalar_common_2[4];
#line 6874 "backend_libs.interval.c"
                            {
#line 6876 "backend_libs.interval.c"
                              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_41_41, ((MR_Box) (backend_libs__interval__V_8_8)), ((MR_Box) (backend_libs__interval__V_24_24)));
                            }
#line 115 "interval.m"
                            if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                              {
#line 84 "interval.m"
                                backend_libs__interval__CastX_53 = (MR_Integer) backend_libs__interval__V_9_9;
#line 84 "interval.m"
                                backend_libs__interval__CastY_54 = (MR_Integer) backend_libs__interval__V_25_25;
#line 84 "interval.m"
                                backend_libs__interval__succeeded = (backend_libs__interval__CastX_53 == backend_libs__interval__CastY_54);
#line 84 "interval.m"
                                if (backend_libs__interval__succeeded)
#line 84 "interval.m"
                                  backend_libs__interval__succeeded = MR_TRUE;
#line 84 "interval.m"
                                else
#line 84 "interval.m"
                                  {
#line 84 "interval.m"
                                    MR_Integer backend_libs__interval__V_51_51 = (MR_Integer) backend_libs__interval__V_9_9;
#line 84 "interval.m"
                                    MR_Integer backend_libs__interval__V_52_52 = (MR_Integer) backend_libs__interval__V_25_25;

#line 6902 "backend_libs.interval.c"
                                    backend_libs__interval__succeeded = (backend_libs__interval__V_51_51 == backend_libs__interval__V_52_52);
#line 84 "interval.m"
                                  }
#line 115 "interval.m"
                                if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                  {
#line 6910 "backend_libs.interval.c"
                                    {
#line 6912 "backend_libs.interval.c"
                                      backend_libs__interval__succeeded = mercury__counter____Unify____counter_0_0(backend_libs__interval__V_10_10, backend_libs__interval__V_26_26);
                                    }
#line 115 "interval.m"
                                    if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                      {
#line 6919 "backend_libs.interval.c"
                                        backend_libs__interval__TypeInfo_43_43 = (MR_Word) &backend_libs__interval_scalar_common_1[5];
#line 6921 "backend_libs.interval.c"
                                        {
#line 6923 "backend_libs.interval.c"
                                          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_43_43, ((MR_Box) (backend_libs__interval__V_11_11)), ((MR_Box) (backend_libs__interval__V_27_27)));
                                        }
#line 115 "interval.m"
                                        if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                          {
#line 6930 "backend_libs.interval.c"
                                            backend_libs__interval__TypeInfo_44_44 = (MR_Word) &backend_libs__interval_scalar_common_2[5];
#line 6932 "backend_libs.interval.c"
                                            {
#line 6934 "backend_libs.interval.c"
                                              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_44_44, ((MR_Box) (backend_libs__interval__V_12_12)), ((MR_Box) (backend_libs__interval__V_28_28)));
                                            }
#line 115 "interval.m"
                                            if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                              {
#line 6941 "backend_libs.interval.c"
                                                backend_libs__interval__TypeInfo_45_45 = (MR_Word) &backend_libs__interval_scalar_common_1[6];
#line 6943 "backend_libs.interval.c"
                                                {
#line 6945 "backend_libs.interval.c"
                                                  backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_45_45, ((MR_Box) (backend_libs__interval__V_13_13)), ((MR_Box) (backend_libs__interval__V_29_29)));
                                                }
#line 115 "interval.m"
                                                if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                                  {
#line 6952 "backend_libs.interval.c"
                                                    backend_libs__interval__TypeInfo_46_46 = (MR_Word) &backend_libs__interval_scalar_common_2[6];
#line 6954 "backend_libs.interval.c"
                                                    {
#line 6956 "backend_libs.interval.c"
                                                      backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_46_46, ((MR_Box) (backend_libs__interval__V_14_14)), ((MR_Box) (backend_libs__interval__V_30_30)));
                                                    }
#line 115 "interval.m"
                                                    if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                                      {
#line 6963 "backend_libs.interval.c"
                                                        backend_libs__interval__TypeInfo_47_47 = (MR_Word) &backend_libs__interval_scalar_common_2[6];
#line 6965 "backend_libs.interval.c"
                                                        {
#line 6967 "backend_libs.interval.c"
                                                          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_47_47, ((MR_Box) (backend_libs__interval__V_15_15)), ((MR_Box) (backend_libs__interval__V_31_31)));
                                                        }
#line 115 "interval.m"
                                                        if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                                          {
#line 6974 "backend_libs.interval.c"
                                                            backend_libs__interval__TypeInfo_48_48 = (MR_Word) &backend_libs__interval_scalar_common_2[7];
#line 6976 "backend_libs.interval.c"
                                                            {
#line 6978 "backend_libs.interval.c"
                                                              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_48_48, ((MR_Box) (backend_libs__interval__V_16_16)), ((MR_Box) (backend_libs__interval__V_32_32)));
                                                            }
#line 115 "interval.m"
                                                            if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                                              {
#line 6985 "backend_libs.interval.c"
                                                                backend_libs__interval__TypeInfo_49_49 = (MR_Word) &backend_libs__interval_scalar_common_2[8];
#line 6987 "backend_libs.interval.c"
                                                                {
#line 6989 "backend_libs.interval.c"
                                                                  backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_49_49, ((MR_Box) (backend_libs__interval__V_17_17)), ((MR_Box) (backend_libs__interval__V_33_33)));
                                                                }
#line 115 "interval.m"
                                                                if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                                                  {
#line 6996 "backend_libs.interval.c"
                                                                    backend_libs__interval__TypeInfo_50_50 = (MR_Word) &backend_libs__interval_scalar_common_2[9];
#line 6998 "backend_libs.interval.c"
                                                                    {
#line 7000 "backend_libs.interval.c"
                                                                      return backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_50_50, ((MR_Box) (backend_libs__interval__V_18_18)), ((MR_Box) (backend_libs__interval__V_34_34)));
                                                                    }
#line 115 "interval.m"
                                                                  }
#line 115 "interval.m"
                                                              }
#line 115 "interval.m"
                                                          }
#line 115 "interval.m"
                                                      }
#line 115 "interval.m"
                                                  }
#line 115 "interval.m"
                                              }
#line 115 "interval.m"
                                          }
#line 115 "interval.m"
                                      }
#line 115 "interval.m"
                                  }
#line 115 "interval.m"
                              }
#line 115 "interval.m"
                          }
#line 115 "interval.m"
                      }
#line 115 "interval.m"
                  }
#line 115 "interval.m"
              }
#line 115 "interval.m"
          }
#line 115 "interval.m"
      }
#line 115 "interval.m"
    return backend_libs__interval__succeeded;
#line 115 "interval.m"
  }
#line 115 "interval.m"
}

#line 84 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0(
#line 84 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 84 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 84 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 84 "interval.m"
{
#line 84 "interval.m"
  {
#line 84 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 84 "interval.m"
    MR_Integer backend_libs__interval__CastX_6 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 84 "interval.m"
    MR_Integer backend_libs__interval__CastY_7 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 84 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_6 == backend_libs__interval__CastY_7);
#line 84 "interval.m"
    if (backend_libs__interval__succeeded)
#line 7066 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 84 "interval.m"
    else
#line 84 "interval.m"
      {
#line 84 "interval.m"
        MR_Integer backend_libs__interval__V_4_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 84 "interval.m"
        MR_Integer backend_libs__interval__V_5_5 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 84 "interval.m"
        {
#line 84 "interval.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_4_4, backend_libs__interval__V_5_5);
#line 84 "interval.m"
          return;
        }
#line 84 "interval.m"
      }
#line 84 "interval.m"
  }
#line 84 "interval.m"
}

#line 84 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0(
#line 84 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 84 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 84 "interval.m"
{
#line 84 "interval.m"
  {
#line 84 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 84 "interval.m"
    MR_Integer backend_libs__interval__CastX_5 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 84 "interval.m"
    MR_Integer backend_libs__interval__CastY_6 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 84 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_5 == backend_libs__interval__CastY_6);
#line 84 "interval.m"
    if (backend_libs__interval__succeeded)
#line 84 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 84 "interval.m"
    else
#line 84 "interval.m"
      {
#line 84 "interval.m"
        MR_Integer backend_libs__interval__V_3_3 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 84 "interval.m"
        MR_Integer backend_libs__interval__V_4_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 7124 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_3_3 == backend_libs__interval__V_4_4);
#line 84 "interval.m"
      }
#line 84 "interval.m"
    return backend_libs__interval__succeeded;
#line 84 "interval.m"
  }
#line 84 "interval.m"
}

#line 94 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0(
#line 94 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 94 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 94 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 94 "interval.m"
{
#line 94 "interval.m"
  {
#line 94 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 94 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 94 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 94 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 94 "interval.m"
    if (backend_libs__interval__succeeded)
#line 7159 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 94 "interval.m"
    else
#line 94 "interval.m"
      {
#line 94 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 94 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 94 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 94 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 94 "interval.m"
        MR_Word backend_libs__interval__V_8_8;

#line 94 "interval.m"
        {
#line 94 "interval.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&backend_libs__interval__V_8_8, backend_libs__interval__V_4_4, backend_libs__interval__V_6_6);
        }
#line 7181 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_8_8 == (MR_Integer) 0);
#line 94 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 94 "interval.m"
        if (backend_libs__interval__succeeded)
#line 94 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_8_8;
#line 94 "interval.m"
        else
#line 94 "interval.m"
          {
#line 94 "interval.m"
            {
#line 94 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_7_7)));
#line 94 "interval.m"
              return;
            }
#line 94 "interval.m"
          }
#line 94 "interval.m"
      }
#line 94 "interval.m"
  }
#line 94 "interval.m"
}

#line 94 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0(
#line 94 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 94 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 94 "interval.m"
{
#line 94 "interval.m"
  {
#line 94 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 94 "interval.m"
    MR_Integer backend_libs__interval__CastX_7 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 94 "interval.m"
    MR_Integer backend_libs__interval__CastY_8 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 94 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_7 == backend_libs__interval__CastY_8);
#line 94 "interval.m"
    if (backend_libs__interval__succeeded)
#line 94 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 94 "interval.m"
    else
#line 94 "interval.m"
      {
#line 94 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_10_10;
#line 94 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 94 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 94 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 94 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 7248 "backend_libs.interval.c"
        {
#line 7250 "backend_libs.interval.c"
          backend_libs__interval__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(backend_libs__interval__V_3_3, backend_libs__interval__V_5_5);
        }
#line 94 "interval.m"
        if (backend_libs__interval__succeeded)
#line 94 "interval.m"
          {
#line 7257 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_10_10 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 7259 "backend_libs.interval.c"
            {
#line 7261 "backend_libs.interval.c"
              return backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_10_10, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
            }
#line 94 "interval.m"
          }
#line 94 "interval.m"
      }
#line 94 "interval.m"
    return backend_libs__interval__succeeded;
#line 94 "interval.m"
  }
#line 94 "interval.m"
}

#line 100 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0(
#line 100 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 100 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 100 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 100 "interval.m"
{
#line 100 "interval.m"
  {
#line 100 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 100 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar1_4 = backend_libs__interval__HeadVar__2_2;
#line 100 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar2_5 = backend_libs__interval__HeadVar__3_3;

#line 100 "interval.m"
    {
#line 100 "interval.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[1], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__interval__Cast_HeadVar2_5)));
#line 100 "interval.m"
      return;
    }
#line 100 "interval.m"
  }
#line 100 "interval.m"
}

#line 100 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0(
#line 100 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 100 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 100 "interval.m"
{
#line 100 "interval.m"
  {
#line 100 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 100 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar1_3 = backend_libs__interval__HeadVar__1_1;
#line 100 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar2_4 = backend_libs__interval__HeadVar__2_2;

#line 100 "interval.m"
    {
#line 100 "interval.m"
      return backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_2[1], ((MR_Box) (backend_libs__interval__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__interval__Cast_HeadVar2_4)));
    }
#line 100 "interval.m"
    return backend_libs__interval__succeeded;
#line 100 "interval.m"
  }
#line 100 "interval.m"
}

#line 87 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0(
#line 87 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 87 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 87 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 87 "interval.m"
{
#line 87 "interval.m"
  {
#line 87 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 87 "interval.m"
    MR_Integer backend_libs__interval__CastX_12 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 87 "interval.m"
    MR_Integer backend_libs__interval__CastY_13 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 87 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_12 == backend_libs__interval__CastY_13);
#line 87 "interval.m"
    if (backend_libs__interval__succeeded)
#line 7361 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 87 "interval.m"
    else
#line 87 "interval.m"
      {
#line 87 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 87 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 87 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 87 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 87 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 87 "interval.m"
        MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 2)));
#line 87 "interval.m"
        MR_Word backend_libs__interval__V_10_10;

#line 87 "interval.m"
        {
#line 87 "interval.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], &backend_libs__interval__V_10_10, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_7_7)));
        }
#line 7387 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_10_10 == (MR_Integer) 0);
#line 87 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 87 "interval.m"
        if (backend_libs__interval__succeeded)
#line 87 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_10_10;
#line 87 "interval.m"
        else
#line 87 "interval.m"
          {
#line 87 "interval.m"
            MR_Word backend_libs__interval__V_11_11;

#line 87 "interval.m"
            {
#line 87 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], &backend_libs__interval__V_11_11, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_8_8)));
            }
#line 7407 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_11_11 == (MR_Integer) 0);
#line 87 "interval.m"
            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 87 "interval.m"
            if (backend_libs__interval__succeeded)
#line 87 "interval.m"
              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_11_11;
#line 87 "interval.m"
            else
#line 87 "interval.m"
              {
#line 87 "interval.m"
                MR_Integer backend_libs__interval__V_17_17 = (MR_Integer) backend_libs__interval__V_6_6;
#line 87 "interval.m"
                MR_Integer backend_libs__interval__V_18_18 = (MR_Integer) backend_libs__interval__V_9_9;

#line 87 "interval.m"
                {
#line 87 "interval.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_17_17, backend_libs__interval__V_18_18);
#line 87 "interval.m"
                  return;
                }
#line 87 "interval.m"
              }
#line 87 "interval.m"
          }
#line 87 "interval.m"
      }
#line 87 "interval.m"
  }
#line 87 "interval.m"
}

#line 87 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____branch_end_info_0_0(
#line 87 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 87 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 87 "interval.m"
{
#line 87 "interval.m"
  {
#line 87 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 87 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 87 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 87 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 87 "interval.m"
    if (backend_libs__interval__succeeded)
#line 87 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 87 "interval.m"
    else
#line 87 "interval.m"
      {
#line 87 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_12_12;
#line 87 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 87 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 87 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 2)));
#line 87 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 87 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 87 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 84 "interval.m"
        MR_Integer backend_libs__interval__CastX_15;
#line 84 "interval.m"
        MR_Integer backend_libs__interval__CastY_16;

#line 7489 "backend_libs.interval.c"
        {
#line 7491 "backend_libs.interval.c"
          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__V_3_3)), ((MR_Box) (backend_libs__interval__V_6_6)));
        }
#line 87 "interval.m"
        if (backend_libs__interval__succeeded)
#line 87 "interval.m"
          {
#line 7498 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_12_12 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 7500 "backend_libs.interval.c"
            {
#line 7502 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_12_12, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_7_7)));
            }
#line 87 "interval.m"
            if (backend_libs__interval__succeeded)
#line 87 "interval.m"
              {
#line 84 "interval.m"
                backend_libs__interval__CastX_15 = (MR_Integer) backend_libs__interval__V_5_5;
#line 84 "interval.m"
                backend_libs__interval__CastY_16 = (MR_Integer) backend_libs__interval__V_8_8;
#line 84 "interval.m"
                backend_libs__interval__succeeded = (backend_libs__interval__CastX_15 == backend_libs__interval__CastY_16);
#line 84 "interval.m"
                if (backend_libs__interval__succeeded)
#line 84 "interval.m"
                  backend_libs__interval__succeeded = MR_TRUE;
#line 84 "interval.m"
                else
#line 84 "interval.m"
                  {
#line 84 "interval.m"
                    MR_Integer backend_libs__interval__V_13_13 = (MR_Integer) backend_libs__interval__V_5_5;
#line 84 "interval.m"
                    MR_Integer backend_libs__interval__V_14_14 = (MR_Integer) backend_libs__interval__V_8_8;

#line 7528 "backend_libs.interval.c"
                    backend_libs__interval__succeeded = (backend_libs__interval__V_13_13 == backend_libs__interval__V_14_14);
#line 84 "interval.m"
                  }
#line 87 "interval.m"
              }
#line 87 "interval.m"
          }
#line 87 "interval.m"
      }
#line 87 "interval.m"
    return backend_libs__interval__succeeded;
#line 87 "interval.m"
  }
#line 87 "interval.m"
}

#line 65 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0(
#line 65 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 65 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 65 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 65 "interval.m"
{
#line 65 "interval.m"
  {
#line 65 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 65 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar1_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 65 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar2_5 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 65 "interval.m"
    {
#line 65 "interval.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__Cast_HeadVar1_4, backend_libs__interval__Cast_HeadVar2_5);
#line 65 "interval.m"
      return;
    }
#line 65 "interval.m"
  }
#line 65 "interval.m"
}

#line 65 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0(
#line 65 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_1,
#line 65 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 65 "interval.m"
{
#line 7586 "backend_libs.interval.c"
  {
#line 7588 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 7591 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 7593 "backend_libs.interval.c"
  }
#line 65 "interval.m"
}

#line 102 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0(
#line 102 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 102 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 102 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 102 "interval.m"
{
#line 102 "interval.m"
  {
#line 102 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 102 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 102 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 102 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 102 "interval.m"
    if (backend_libs__interval__succeeded)
#line 7622 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 102 "interval.m"
    else
#line 102 "interval.m"
      {
#line 102 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 102 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 102 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 102 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 102 "interval.m"
        MR_Word backend_libs__interval__V_8_8;

#line 102 "interval.m"
        {
#line 102 "interval.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], &backend_libs__interval__V_8_8, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
        }
#line 7644 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_8_8 == (MR_Integer) 0);
#line 102 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 102 "interval.m"
        if (backend_libs__interval__succeeded)
#line 102 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_8_8;
#line 102 "interval.m"
        else
#line 102 "interval.m"
          {
#line 102 "interval.m"
            {
#line 102 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[5], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_7_7)));
#line 102 "interval.m"
              return;
            }
#line 102 "interval.m"
          }
#line 102 "interval.m"
      }
#line 102 "interval.m"
  }
#line 102 "interval.m"
}

#line 102 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0(
#line 102 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 102 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 102 "interval.m"
{
#line 102 "interval.m"
  {
#line 102 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 102 "interval.m"
    MR_Integer backend_libs__interval__CastX_7 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 102 "interval.m"
    MR_Integer backend_libs__interval__CastY_8 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 102 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_7 == backend_libs__interval__CastY_8);
#line 102 "interval.m"
    if (backend_libs__interval__succeeded)
#line 102 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 102 "interval.m"
    else
#line 102 "interval.m"
      {
#line 102 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_10_10;
#line 102 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 102 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 102 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 102 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 7711 "backend_libs.interval.c"
        {
#line 7713 "backend_libs.interval.c"
          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__V_3_3)), ((MR_Box) (backend_libs__interval__V_5_5)));
        }
#line 102 "interval.m"
        if (backend_libs__interval__succeeded)
#line 102 "interval.m"
          {
#line 7720 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_10_10 = (MR_Word) &backend_libs__interval_scalar_common_1[5];
#line 7722 "backend_libs.interval.c"
            {
#line 7724 "backend_libs.interval.c"
              return backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_10_10, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
            }
#line 102 "interval.m"
          }
#line 102 "interval.m"
      }
#line 102 "interval.m"
    return backend_libs__interval__succeeded;
#line 102 "interval.m"
  }
#line 102 "interval.m"
}

#line 76 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____anchor_0_0(
#line 76 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 76 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 76 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 76 "interval.m"
{
#line 76 "interval.m"
  {
#line 76 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 76 "interval.m"
    MR_Integer backend_libs__interval__CastX_78 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 76 "interval.m"
    MR_Integer backend_libs__interval__CastY_79 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 76 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_78 == backend_libs__interval__CastY_79);
#line 76 "interval.m"
    if (backend_libs__interval__succeeded)
#line 7762 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "interval.m"
    else
#line 76 "interval.m"
#line 76 "interval.m"
      switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) {
#line 76 "interval.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
        case (MR_Integer) 0:
#line 76 "interval.m"
#line 76 "interval.m"
          switch (MR_unmkbody(backend_libs__interval__HeadVar__2_2)) {
#line 76 "interval.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
            case (MR_Integer) 0:
#line 76 "interval.m"
#line 76 "interval.m"
              switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) {
#line 76 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                case (MR_Integer) 0:
#line 76 "interval.m"
#line 76 "interval.m"
                  switch (MR_unmkbody(backend_libs__interval__HeadVar__3_3)) {
#line 76 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                    case (MR_Integer) 0:
#line 76 "interval.m"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "interval.m"
                      break;
#line 76 "interval.m"
                    case (MR_Integer) 1:
#line 76 "interval.m"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                      break;
#line 76 "interval.m"
                  }
#line 76 "interval.m"
                  break;
#line 76 "interval.m"
                case (MR_Integer) 1:
#line 7810 "backend_libs.interval.c"
                  *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                  break;
#line 76 "interval.m"
                case (MR_Integer) 2:
#line 7816 "backend_libs.interval.c"
                  *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                  break;
#line 76 "interval.m"
                case (MR_Integer) 3:
#line 76 "interval.m"
#line 76 "interval.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) {
#line 76 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                    case (MR_Integer) 0:
#line 7829 "backend_libs.interval.c"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                      break;
#line 76 "interval.m"
                    case (MR_Integer) 1:
#line 7835 "backend_libs.interval.c"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                      break;
#line 76 "interval.m"
                  }
#line 76 "interval.m"
                  break;
#line 76 "interval.m"
              }
#line 76 "interval.m"
              break;
#line 76 "interval.m"
            case (MR_Integer) 1:
#line 76 "interval.m"
#line 76 "interval.m"
              switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) {
#line 76 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                case (MR_Integer) 0:
#line 76 "interval.m"
#line 76 "interval.m"
                  switch (MR_unmkbody(backend_libs__interval__HeadVar__3_3)) {
#line 76 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                    case (MR_Integer) 0:
#line 76 "interval.m"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                      break;
#line 76 "interval.m"
                    case (MR_Integer) 1:
#line 76 "interval.m"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 76 "interval.m"
                      break;
#line 76 "interval.m"
                  }
#line 76 "interval.m"
                  break;
#line 76 "interval.m"
                case (MR_Integer) 1:
#line 7879 "backend_libs.interval.c"
                  *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                  break;
#line 76 "interval.m"
                case (MR_Integer) 2:
#line 7885 "backend_libs.interval.c"
                  *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                  break;
#line 76 "interval.m"
                case (MR_Integer) 3:
#line 76 "interval.m"
#line 76 "interval.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) {
#line 76 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                    case (MR_Integer) 0:
#line 7898 "backend_libs.interval.c"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                      break;
#line 76 "interval.m"
                    case (MR_Integer) 1:
#line 7904 "backend_libs.interval.c"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                      break;
#line 76 "interval.m"
                  }
#line 76 "interval.m"
                  break;
#line 76 "interval.m"
              }
#line 76 "interval.m"
              break;
#line 76 "interval.m"
          }
#line 76 "interval.m"
          break;
#line 76 "interval.m"
        case (MR_Integer) 1:
#line 76 "interval.m"
          {
#line 76 "interval.m"
            MR_Word backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "interval.m"
            MR_Word backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));

#line 76 "interval.m"
#line 76 "interval.m"
            switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) {
#line 76 "interval.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
              case (MR_Integer) 0:
#line 76 "interval.m"
#line 76 "interval.m"
                switch (MR_unmkbody(backend_libs__interval__HeadVar__3_3)) {
#line 76 "interval.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                  case (MR_Integer) 0:
#line 7943 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 1:
#line 7949 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                }
#line 76 "interval.m"
                break;
#line 76 "interval.m"
              case (MR_Integer) 1:
#line 76 "interval.m"
                {
#line 76 "interval.m"
                  MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 76 "interval.m"
                  MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "interval.m"
                  MR_Word backend_libs__interval__V_24_24;
#line 76 "interval.m"
                  MR_Integer backend_libs__interval__V_96_96 = (MR_Integer) backend_libs__interval__V_89_89;
#line 76 "interval.m"
                  MR_Integer backend_libs__interval__V_97_97 = (MR_Integer) backend_libs__interval__V_22_22;

#line 76 "interval.m"
                  {
#line 76 "interval.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__interval__V_24_24, backend_libs__interval__V_96_96, backend_libs__interval__V_97_97);
                  }
#line 7977 "backend_libs.interval.c"
                  backend_libs__interval__succeeded = (backend_libs__interval__V_24_24 == (MR_Integer) 0);
#line 76 "interval.m"
                  backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 76 "interval.m"
                  if (backend_libs__interval__succeeded)
#line 76 "interval.m"
                    *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_24_24;
#line 76 "interval.m"
                  else
#line 76 "interval.m"
                    {
#line 76 "interval.m"
                      MR_Integer backend_libs__interval__V_98_98 = (MR_Integer) backend_libs__interval__V_88_88;
#line 76 "interval.m"
                      MR_Integer backend_libs__interval__V_99_99 = (MR_Integer) backend_libs__interval__V_23_23;

#line 76 "interval.m"
                      {
#line 76 "interval.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_98_98, backend_libs__interval__V_99_99);
#line 76 "interval.m"
                        return;
                      }
#line 76 "interval.m"
                    }
#line 76 "interval.m"
                }
#line 76 "interval.m"
                break;
#line 76 "interval.m"
              case (MR_Integer) 2:
#line 8009 "backend_libs.interval.c"
                *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                break;
#line 76 "interval.m"
              case (MR_Integer) 3:
#line 76 "interval.m"
#line 76 "interval.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) {
#line 76 "interval.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                  case (MR_Integer) 0:
#line 8022 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 1:
#line 8028 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                }
#line 76 "interval.m"
                break;
#line 76 "interval.m"
            }
#line 76 "interval.m"
          }
#line 76 "interval.m"
          break;
#line 76 "interval.m"
        case (MR_Integer) 2:
#line 76 "interval.m"
          {
#line 76 "interval.m"
            MR_Word backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));

#line 76 "interval.m"
#line 76 "interval.m"
            switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) {
#line 76 "interval.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
              case (MR_Integer) 0:
#line 76 "interval.m"
#line 76 "interval.m"
                switch (MR_unmkbody(backend_libs__interval__HeadVar__3_3)) {
#line 76 "interval.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                  case (MR_Integer) 0:
#line 8063 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 1:
#line 8069 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                }
#line 76 "interval.m"
                break;
#line 76 "interval.m"
              case (MR_Integer) 1:
#line 8079 "backend_libs.interval.c"
                *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                break;
#line 76 "interval.m"
              case (MR_Integer) 2:
#line 76 "interval.m"
                {
#line 76 "interval.m"
                  MR_Word backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 76 "interval.m"
                  MR_Integer backend_libs__interval__V_102_102 = (MR_Integer) backend_libs__interval__V_91_91;
#line 76 "interval.m"
                  MR_Integer backend_libs__interval__V_103_103 = (MR_Integer) backend_libs__interval__V_41_41;

#line 76 "interval.m"
                  {
#line 76 "interval.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_102_102, backend_libs__interval__V_103_103);
#line 76 "interval.m"
                    return;
                  }
#line 76 "interval.m"
                }
#line 76 "interval.m"
                break;
#line 76 "interval.m"
              case (MR_Integer) 3:
#line 76 "interval.m"
#line 76 "interval.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) {
#line 76 "interval.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                  case (MR_Integer) 0:
#line 8114 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 1:
#line 8120 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                }
#line 76 "interval.m"
                break;
#line 76 "interval.m"
            }
#line 76 "interval.m"
          }
#line 76 "interval.m"
          break;
#line 76 "interval.m"
        case (MR_Integer) 3:
#line 76 "interval.m"
#line 76 "interval.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)))) {
#line 76 "interval.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
            case (MR_Integer) 0:
#line 76 "interval.m"
              {
#line 76 "interval.m"
                MR_Word backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 76 "interval.m"
                MR_Word backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 76 "interval.m"
#line 76 "interval.m"
                switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) {
#line 76 "interval.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                  case (MR_Integer) 0:
#line 76 "interval.m"
#line 76 "interval.m"
                    switch (MR_unmkbody(backend_libs__interval__HeadVar__3_3)) {
#line 76 "interval.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                      case (MR_Integer) 0:
#line 8164 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                        break;
#line 76 "interval.m"
                      case (MR_Integer) 1:
#line 8170 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                        break;
#line 76 "interval.m"
                    }
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 1:
#line 8180 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 2:
#line 8186 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 3:
#line 76 "interval.m"
#line 76 "interval.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) {
#line 76 "interval.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                      case (MR_Integer) 0:
#line 76 "interval.m"
                        {
#line 76 "interval.m"
                          MR_Word backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "interval.m"
                          MR_Word backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 2)));
#line 76 "interval.m"
                          MR_Word backend_libs__interval__V_62_62;
#line 76 "interval.m"
                          MR_Integer backend_libs__interval__V_92_92 = (MR_Integer) backend_libs__interval__V_87_87;
#line 76 "interval.m"
                          MR_Integer backend_libs__interval__V_93_93 = (MR_Integer) backend_libs__interval__V_60_60;

#line 76 "interval.m"
                          {
#line 76 "interval.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__interval__V_62_62, backend_libs__interval__V_92_92, backend_libs__interval__V_93_93);
                          }
#line 8217 "backend_libs.interval.c"
                          backend_libs__interval__succeeded = (backend_libs__interval__V_62_62 == (MR_Integer) 0);
#line 76 "interval.m"
                          backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 76 "interval.m"
                          if (backend_libs__interval__succeeded)
#line 76 "interval.m"
                            *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_62_62;
#line 76 "interval.m"
                          else
#line 76 "interval.m"
                            {
#line 76 "interval.m"
                              MR_Integer backend_libs__interval__V_94_94 = (MR_Integer) backend_libs__interval__V_86_86;
#line 76 "interval.m"
                              MR_Integer backend_libs__interval__V_95_95 = (MR_Integer) backend_libs__interval__V_61_61;

#line 76 "interval.m"
                              {
#line 76 "interval.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_94_94, backend_libs__interval__V_95_95);
#line 76 "interval.m"
                                return;
                              }
#line 76 "interval.m"
                            }
#line 76 "interval.m"
                        }
#line 76 "interval.m"
                        break;
#line 76 "interval.m"
                      case (MR_Integer) 1:
#line 8249 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                        break;
#line 76 "interval.m"
                    }
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                }
#line 76 "interval.m"
              }
#line 76 "interval.m"
              break;
#line 76 "interval.m"
            case (MR_Integer) 1:
#line 76 "interval.m"
              {
#line 76 "interval.m"
                MR_Word backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 76 "interval.m"
#line 76 "interval.m"
                switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) {
#line 76 "interval.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                  case (MR_Integer) 0:
#line 76 "interval.m"
#line 76 "interval.m"
                    switch (MR_unmkbody(backend_libs__interval__HeadVar__3_3)) {
#line 76 "interval.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                      case (MR_Integer) 0:
#line 8284 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                        break;
#line 76 "interval.m"
                      case (MR_Integer) 1:
#line 8290 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                        break;
#line 76 "interval.m"
                    }
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 1:
#line 8300 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 2:
#line 8306 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 3:
#line 76 "interval.m"
#line 76 "interval.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) {
#line 76 "interval.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
                      case (MR_Integer) 0:
#line 8319 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                        break;
#line 76 "interval.m"
                      case (MR_Integer) 1:
#line 76 "interval.m"
                        {
#line 76 "interval.m"
                          MR_Word backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 76 "interval.m"
                          MR_Integer backend_libs__interval__V_100_100 = (MR_Integer) backend_libs__interval__V_90_90;
#line 76 "interval.m"
                          MR_Integer backend_libs__interval__V_101_101 = (MR_Integer) backend_libs__interval__V_77_77;

#line 76 "interval.m"
                          {
#line 76 "interval.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_100_100, backend_libs__interval__V_101_101);
#line 76 "interval.m"
                            return;
                          }
#line 76 "interval.m"
                        }
#line 76 "interval.m"
                        break;
#line 76 "interval.m"
                    }
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                }
#line 76 "interval.m"
              }
#line 76 "interval.m"
              break;
#line 76 "interval.m"
          }
#line 76 "interval.m"
          break;
#line 76 "interval.m"
      }
#line 76 "interval.m"
  }
#line 76 "interval.m"
}

#line 76 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0(
#line 76 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 76 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 76 "interval.m"
{
#line 76 "interval.m"
  {
#line 76 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 76 "interval.m"
    MR_Integer backend_libs__interval__CastX_19 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 76 "interval.m"
    MR_Integer backend_libs__interval__CastY_20 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 76 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_19 == backend_libs__interval__CastY_20);
#line 76 "interval.m"
    if (backend_libs__interval__succeeded)
#line 76 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 76 "interval.m"
    else
#line 76 "interval.m"
#line 76 "interval.m"
      switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__1_1)) {
#line 76 "interval.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
        case (MR_Integer) 0:
#line 76 "interval.m"
#line 76 "interval.m"
          switch (MR_unmkbody(backend_libs__interval__HeadVar__1_1)) {
#line 76 "interval.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
            case (MR_Integer) 0:
#line 76 "interval.m"
              {
#line 76 "interval.m"
                MR_Integer backend_libs__interval__CastX_3 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 76 "interval.m"
                MR_Integer backend_libs__interval__CastY_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 76 "interval.m"
                backend_libs__interval__succeeded = (backend_libs__interval__CastY_4 == backend_libs__interval__CastX_3);
#line 76 "interval.m"
              }
#line 76 "interval.m"
              break;
#line 76 "interval.m"
            case (MR_Integer) 1:
#line 76 "interval.m"
              {
#line 76 "interval.m"
                MR_Integer backend_libs__interval__CastX_5 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 76 "interval.m"
                MR_Integer backend_libs__interval__CastY_6 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 76 "interval.m"
                backend_libs__interval__succeeded = (backend_libs__interval__CastY_6 == backend_libs__interval__CastX_5);
#line 76 "interval.m"
              }
#line 76 "interval.m"
              break;
#line 76 "interval.m"
          }
#line 76 "interval.m"
          break;
#line 76 "interval.m"
        case (MR_Integer) 1:
#line 76 "interval.m"
          {
#line 76 "interval.m"
            MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 76 "interval.m"
            MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "interval.m"
            MR_Word backend_libs__interval__V_9_9;
#line 76 "interval.m"
            MR_Word backend_libs__interval__V_10_10;
#line 76 "interval.m"
            MR_Integer backend_libs__interval__V_27_27;
#line 76 "interval.m"
            MR_Integer backend_libs__interval__V_28_28;

#line 76 "interval.m"
            backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 76 "interval.m"
            if (backend_libs__interval__succeeded)
#line 76 "interval.m"
              {
#line 76 "interval.m"
                backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 76 "interval.m"
                backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 8465 "backend_libs.interval.c"
                backend_libs__interval__succeeded = (backend_libs__interval__V_7_7 == backend_libs__interval__V_9_9);
#line 76 "interval.m"
                if (backend_libs__interval__succeeded)
#line 76 "interval.m"
                  {
#line 8471 "backend_libs.interval.c"
                    backend_libs__interval__V_27_27 = (MR_Integer) backend_libs__interval__V_8_8;
#line 8473 "backend_libs.interval.c"
                    backend_libs__interval__V_28_28 = (MR_Integer) backend_libs__interval__V_10_10;
#line 8475 "backend_libs.interval.c"
                    backend_libs__interval__succeeded = (backend_libs__interval__V_27_27 == backend_libs__interval__V_28_28);
#line 76 "interval.m"
                  }
#line 76 "interval.m"
              }
#line 76 "interval.m"
          }
#line 76 "interval.m"
          break;
#line 76 "interval.m"
        case (MR_Integer) 2:
#line 76 "interval.m"
          {
#line 76 "interval.m"
            MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 76 "interval.m"
            MR_Word backend_libs__interval__V_12_12;
#line 76 "interval.m"
            MR_Integer backend_libs__interval__V_31_31;
#line 76 "interval.m"
            MR_Integer backend_libs__interval__V_32_32;

#line 76 "interval.m"
            backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 76 "interval.m"
            if (backend_libs__interval__succeeded)
#line 76 "interval.m"
              {
#line 76 "interval.m"
                backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 8506 "backend_libs.interval.c"
                backend_libs__interval__V_31_31 = (MR_Integer) backend_libs__interval__V_11_11;
#line 8508 "backend_libs.interval.c"
                backend_libs__interval__V_32_32 = (MR_Integer) backend_libs__interval__V_12_12;
#line 8510 "backend_libs.interval.c"
                backend_libs__interval__succeeded = (backend_libs__interval__V_31_31 == backend_libs__interval__V_32_32);
#line 76 "interval.m"
              }
#line 76 "interval.m"
          }
#line 76 "interval.m"
          break;
#line 76 "interval.m"
        case (MR_Integer) 3:
#line 76 "interval.m"
#line 76 "interval.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)))) {
#line 76 "interval.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 76 "interval.m"
            case (MR_Integer) 0:
#line 76 "interval.m"
              {
#line 76 "interval.m"
                MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "interval.m"
                MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__1_1, (MR_Integer) 2)));
#line 76 "interval.m"
                MR_Word backend_libs__interval__V_15_15;
#line 76 "interval.m"
                MR_Word backend_libs__interval__V_16_16;
#line 76 "interval.m"
                MR_Integer backend_libs__interval__V_25_25;
#line 76 "interval.m"
                MR_Integer backend_libs__interval__V_26_26;

#line 76 "interval.m"
                backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 76 "interval.m"
                if (backend_libs__interval__succeeded)
#line 76 "interval.m"
                  {
#line 76 "interval.m"
                    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 76 "interval.m"
                    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 8552 "backend_libs.interval.c"
                    backend_libs__interval__succeeded = (backend_libs__interval__V_13_13 == backend_libs__interval__V_15_15);
#line 76 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 76 "interval.m"
                      {
#line 8558 "backend_libs.interval.c"
                        backend_libs__interval__V_25_25 = (MR_Integer) backend_libs__interval__V_14_14;
#line 8560 "backend_libs.interval.c"
                        backend_libs__interval__V_26_26 = (MR_Integer) backend_libs__interval__V_16_16;
#line 8562 "backend_libs.interval.c"
                        backend_libs__interval__succeeded = (backend_libs__interval__V_25_25 == backend_libs__interval__V_26_26);
#line 76 "interval.m"
                      }
#line 76 "interval.m"
                  }
#line 76 "interval.m"
              }
#line 76 "interval.m"
              break;
#line 76 "interval.m"
            case (MR_Integer) 1:
#line 76 "interval.m"
              {
#line 76 "interval.m"
                MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 76 "interval.m"
                MR_Word backend_libs__interval__V_18_18;
#line 76 "interval.m"
                MR_Integer backend_libs__interval__V_29_29;
#line 76 "interval.m"
                MR_Integer backend_libs__interval__V_30_30;

#line 76 "interval.m"
                backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 76 "interval.m"
                if (backend_libs__interval__succeeded)
#line 76 "interval.m"
                  {
#line 76 "interval.m"
                    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 8593 "backend_libs.interval.c"
                    backend_libs__interval__V_29_29 = (MR_Integer) backend_libs__interval__V_17_17;
#line 8595 "backend_libs.interval.c"
                    backend_libs__interval__V_30_30 = (MR_Integer) backend_libs__interval__V_18_18;
#line 8597 "backend_libs.interval.c"
                    backend_libs__interval__succeeded = (backend_libs__interval__V_29_29 == backend_libs__interval__V_30_30);
#line 76 "interval.m"
                  }
#line 76 "interval.m"
              }
#line 76 "interval.m"
              break;
#line 76 "interval.m"
          }
#line 76 "interval.m"
          break;
#line 76 "interval.m"
      }
#line 76 "interval.m"
    return backend_libs__interval__succeeded;
#line 76 "interval.m"
  }
#line 76 "interval.m"
}

#line 1340 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_4(
#line 1340 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1340 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1340 "interval.m"
{
#line 1340 "interval.m"
  {
#line 1340 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1340 "interval.m"
    {
#line 1340 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1340 "interval.m"
      return;
    }
#line 1340 "interval.m"
  }
#line 1340 "interval.m"
}

#line 1336 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_3(
#line 1336 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1336 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 1336 "interval.m"
{
#line 1336 "interval.m"
  {
#line 1336 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 1336 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1336 "interval.m"
    MR_Integer backend_libs__interval__conv1_Num_3;

#line 1336 "interval.m"
    {
#line 1336 "interval.m"
      backend_libs__interval__conv1_Num_3 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 1336 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv1_Num_3));
#line 1336 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 1336 "interval.m"
  }
#line 1336 "interval.m"
}

#line 1340 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_2(
#line 1340 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1340 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1340 "interval.m"
{
#line 1340 "interval.m"
  {
#line 1340 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1340 "interval.m"
    {
#line 1340 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1340 "interval.m"
      return;
    }
#line 1340 "interval.m"
  }
#line 1340 "interval.m"
}

#line 1331 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_1(
#line 1331 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1331 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1331 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2)
#line 1331 "interval.m"
{
#line 1331 "interval.m"
  {
#line 1331 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1331 "interval.m"
    MR_Integer backend_libs__interval__conv0_HeadVar__2_32;

#line 1331 "interval.m"
    {
#line 1331 "interval.m"
      backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1331__1_2_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1), &backend_libs__interval__conv0_HeadVar__2_32);
    }
#line 1331 "interval.m"
    *backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__2_32));
#line 1331 "interval.m"
  }
#line 1331 "interval.m"
}

#line 1323 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0(
#line 1323 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1)
#line 1323 "interval.m"
{
#line 1326 "interval.m"
  {
#line 1326 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1326 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_36_36;
#line 1326 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_37_37;
#line 1326 "interval.m"
    MR_Word backend_libs__interval__Anchor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1326 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1326 "interval.m"
    MR_Word backend_libs__interval__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_5, (MR_Integer) 0)));
#line 1326 "interval.m"
    MR_Word backend_libs__interval__Intervals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_5, (MR_Integer) 1)));
#line 1326 "interval.m"
    MR_Word backend_libs__interval__VarNums_9;
#line 1326 "interval.m"
    MR_Word backend_libs__interval__IntervalList_10;
#line 1326 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 1326 "interval.m"
    MR_Word backend_libs__interval__V_25_25;

#line 1328 "interval.m"
    {
#line 1328 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1329 "interval.m"
    {
#line 1329 "interval.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Anchor_4)));
    }
#line 1330 "interval.m"
    {
#line 1330 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) " =>\n");
    }
#line 1331 "interval.m"
    {
#line 1331 "interval.m"
      backend_libs__interval__V_19_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_7);
    }
#line 8792 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1331 "interval.m"
    {
#line 1331 "interval.m"
      mercury__list__map_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], backend_libs__interval__TypeCtorInfo_36_36, (MR_Word) &backend_libs__interval_scalar_common_2[21], backend_libs__interval__V_19_19, &backend_libs__interval__VarNums_9);
    }
#line 1332 "interval.m"
    {
#line 1332 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "vars [");
    }
#line 1340 "interval.m"
    {
#line 1340 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__VarNums_9, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[22]);
    }
#line 1334 "interval.m"
    {
#line 1334 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "]\nintervals: ");
    }
#line 8814 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_37_37 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 1335 "interval.m"
    {
#line 1335 "interval.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__interval__TypeCtorInfo_37_37, backend_libs__interval__Intervals_8, &backend_libs__interval__IntervalList_10);
    }
#line 1336 "interval.m"
    {
#line 1336 "interval.m"
      backend_libs__interval__V_25_25 = mercury__list__map_2_f_0(backend_libs__interval__TypeCtorInfo_37_37, backend_libs__interval__TypeCtorInfo_36_36, (MR_Word) &backend_libs__interval_scalar_common_2[23], backend_libs__interval__IntervalList_10);
    }
#line 1340 "interval.m"
    {
#line 1340 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__V_25_25, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[24]);
    }
#line 1337 "interval.m"
    {
#line 1337 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1337 "interval.m"
      return;
    }
#line 1326 "interval.m"
  }
#line 1323 "interval.m"
}

#line 1340 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_2(
#line 1340 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1340 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1340 "interval.m"
{
#line 1340 "interval.m"
  {
#line 1340 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1340 "interval.m"
    {
#line 1340 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1340 "interval.m"
      return;
    }
#line 1340 "interval.m"
  }
#line 1340 "interval.m"
}

#line 1318 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_1(
#line 1318 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1318 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1318 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2)
#line 1318 "interval.m"
{
#line 1318 "interval.m"
  {
#line 1318 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1318 "interval.m"
    MR_Integer backend_libs__interval__conv0_HeadVar__2_17;

#line 1318 "interval.m"
    {
#line 1318 "interval.m"
      backend_libs__interval__IntroducedFrom__pred__dump_deletion__1318__1_2_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1), &backend_libs__interval__conv0_HeadVar__2_17);
    }
#line 1318 "interval.m"
    *backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__2_17));
#line 1318 "interval.m"
  }
#line 1318 "interval.m"
}

#line 1315 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0(
#line 1315 "interval.m"
  MR_Word backend_libs__interval__Vars_4)
#line 1315 "interval.m"
{
#line 1317 "interval.m"
  {
#line 1317 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1317 "interval.m"
    MR_Word backend_libs__interval__VarNums_6;
#line 1317 "interval.m"
    MR_Word backend_libs__interval__V_10_10;

#line 1318 "interval.m"
    {
#line 1318 "interval.m"
      backend_libs__interval__V_10_10 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_4);
    }
#line 1318 "interval.m"
    {
#line 1318 "interval.m"
      mercury__list__map_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__interval_scalar_common_2[19], backend_libs__interval__V_10_10, &backend_libs__interval__VarNums_6);
    }
#line 1319 "interval.m"
    {
#line 1319 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) " [");
    }
#line 1340 "interval.m"
    {
#line 1340 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__VarNums_6, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[20]);
    }
#line 1321 "interval.m"
    {
#line 1321 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "]");
#line 1321 "interval.m"
      return;
    }
#line 1317 "interval.m"
  }
#line 1315 "interval.m"
}

#line 1309 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_3(
#line 1309 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1309 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1309 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1309 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1309 "interval.m"
{
#line 1309 "interval.m"
  {
#line 1309 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1309 "interval.m"
    {
#line 1309 "interval.m"
      backend_libs__interval__dump_deletion_3_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
#line 1309 "interval.m"
      return;
    }
#line 1309 "interval.m"
  }
#line 1309 "interval.m"
}

#line 1300 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_2(
#line 1300 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1300 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1300 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2)
#line 1300 "interval.m"
{
#line 1300 "interval.m"
  {
#line 1300 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1300 "interval.m"
    MR_Integer backend_libs__interval__conv5_HeadVar__2_155;

#line 1300 "interval.m"
    {
#line 1300 "interval.m"
      backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1300__1_2_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1), &backend_libs__interval__conv5_HeadVar__2_155);
    }
#line 1300 "interval.m"
    *backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv5_HeadVar__2_155));
#line 1300 "interval.m"
  }
#line 1300 "interval.m"
}

#line 1278 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_1(
#line 1278 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1278 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 1278 "interval.m"
{
#line 1278 "interval.m"
  {
#line 1278 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 1278 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1278 "interval.m"
    MR_Integer backend_libs__interval__conv1_Num_3;

#line 1278 "interval.m"
    {
#line 1278 "interval.m"
      backend_libs__interval__conv1_Num_3 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 1278 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv1_Num_3));
#line 1278 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 1278 "interval.m"
  }
#line 1278 "interval.m"
}

#line 1270 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0(
#line 1270 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_5,
#line 1270 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6)
#line 1270 "interval.m"
{
#line 1273 "interval.m"
  {
#line 1273 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1273 "interval.m"
    MR_Integer backend_libs__interval__V_19_19;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__SuccIds_8;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_23_23;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 1277 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 1277 "interval.m"
    MR_Box backend_libs__interval__conv0_SuccIds_8;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__Start_10;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_93_93;
#line 1285 "interval.m"
    MR_Word backend_libs__interval__V_94_94;
#line 1285 "interval.m"
    MR_Box backend_libs__interval__conv2_Start_10;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__End_11;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_95_95;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_96_96;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_97_97;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_98_98;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_99_99;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_100_100;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_101_101;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_102_102;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_103_103;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_104_104;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_105_105;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_106_106;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_107_107;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_108_108;
#line 1292 "interval.m"
    MR_Word backend_libs__interval__V_109_109;
#line 1292 "interval.m"
    MR_Box backend_libs__interval__conv3_End_11;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__Vars_12;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_110_110;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_111_111;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_112_112;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_113_113;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_114_114;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_115_115;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_116_116;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_117_117;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_118_118;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_119_119;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_120_120;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_121_121;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_122_122;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_123_123;
#line 1299 "interval.m"
    MR_Word backend_libs__interval__V_124_124;
#line 1299 "interval.m"
    MR_Box backend_libs__interval__conv4_Vars_12;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__Deletions_14;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_125_125;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_126_126;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_127_127;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_128_128;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_129_129;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_130_130;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_131_131;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_132_132;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_133_133;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_134_134;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_135_135;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_136_136;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_137_137;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_138_138;
#line 1307 "interval.m"
    MR_Word backend_libs__interval__V_139_139;
#line 1307 "interval.m"
    MR_Box backend_libs__interval__conv6_Deletions_14;

#line 1274 "interval.m"
    {
#line 1274 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\ninterval ");
    }
#line 1275 "interval.m"
    {
#line 1275 "interval.m"
      backend_libs__interval__V_19_19 = backend_libs__interval__interval_id_to_int_1_f_0(backend_libs__interval__IntervalId_6);
    }
#line 1275 "interval.m"
    {
#line 1275 "interval.m"
      mercury__io__write_int_3_p_0(backend_libs__interval__V_19_19);
    }
#line 1276 "interval.m"
    {
#line 1276 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 1277 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1277 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1277 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1277 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1277 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1277 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1277 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1277 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1277 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1277 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1277 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1277 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1277 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1277 "interval.m"
    backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1277 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1277 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1277 "interval.m"
    {
#line 1277 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__V_23_23, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv0_SuccIds_8);
    }
#line 1277 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1277 "interval.m"
      {
#line 1277 "interval.m"
        backend_libs__interval__SuccIds_8 = ((MR_Word) backend_libs__interval__conv0_SuccIds_8);
#line 1277 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1277 "interval.m"
      }
#line 1282 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1278 "interval.m"
      {
#line 1278 "interval.m"
        MR_Word backend_libs__interval__SuccNums_9;

#line 1278 "interval.m"
        {
#line 1278 "interval.m"
          backend_libs__interval__SuccNums_9 = mercury__list__map_2_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__interval_scalar_common_2[16], backend_libs__interval__SuccIds_8);
        }
#line 1279 "interval.m"
        {
#line 1279 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "succ [");
        }
#line 1280 "interval.m"
        {
#line 1280 "interval.m"
          backend_libs__interval__write_int_list_3_p_0(backend_libs__interval__SuccNums_9);
        }
#line 1281 "interval.m"
        {
#line 1281 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n");
        }
#line 1278 "interval.m"
      }
#line 1282 "interval.m"
    else
#line 1283 "interval.m"
      {
#line 1283 "interval.m"
        {
#line 1283 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no succ\n");
        }
#line 1283 "interval.m"
      }
#line 1285 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1285 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1285 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1285 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1285 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1285 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1285 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1285 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1285 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1285 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1285 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1285 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1285 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1285 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1285 "interval.m"
    backend_libs__interval__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1285 "interval.m"
    backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1285 "interval.m"
    {
#line 1285 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, backend_libs__interval__V_32_32, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv2_Start_10);
    }
#line 1285 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1285 "interval.m"
      {
#line 1285 "interval.m"
        backend_libs__interval__Start_10 = ((MR_Word) backend_libs__interval__conv2_Start_10);
#line 1285 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1285 "interval.m"
      }
#line 1289 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1286 "interval.m"
      {
#line 1286 "interval.m"
        {
#line 1286 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "start ");
        }
#line 1287 "interval.m"
        {
#line 1287 "interval.m"
          mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Start_10)));
        }
#line 1288 "interval.m"
        {
#line 1288 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1286 "interval.m"
      }
#line 1289 "interval.m"
    else
#line 1290 "interval.m"
      {
#line 1290 "interval.m"
        {
#line 1290 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no start\n");
        }
#line 1290 "interval.m"
      }
#line 1292 "interval.m"
    backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1292 "interval.m"
    backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1292 "interval.m"
    backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1292 "interval.m"
    backend_libs__interval__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1292 "interval.m"
    backend_libs__interval__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1292 "interval.m"
    backend_libs__interval__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1292 "interval.m"
    backend_libs__interval__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1292 "interval.m"
    backend_libs__interval__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1292 "interval.m"
    backend_libs__interval__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1292 "interval.m"
    backend_libs__interval__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1292 "interval.m"
    backend_libs__interval__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1292 "interval.m"
    backend_libs__interval__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1292 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1292 "interval.m"
    backend_libs__interval__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1292 "interval.m"
    backend_libs__interval__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1292 "interval.m"
    backend_libs__interval__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1292 "interval.m"
    {
#line 1292 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, backend_libs__interval__V_40_40, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv3_End_11);
    }
#line 1292 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1292 "interval.m"
      {
#line 1292 "interval.m"
        backend_libs__interval__End_11 = ((MR_Word) backend_libs__interval__conv3_End_11);
#line 1292 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1292 "interval.m"
      }
#line 1296 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1293 "interval.m"
      {
#line 1293 "interval.m"
        {
#line 1293 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "end ");
        }
#line 1294 "interval.m"
        {
#line 1294 "interval.m"
          mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__End_11)));
        }
#line 1295 "interval.m"
        {
#line 1295 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1293 "interval.m"
      }
#line 1296 "interval.m"
    else
#line 1297 "interval.m"
      {
#line 1297 "interval.m"
        {
#line 1297 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no end\n");
        }
#line 1297 "interval.m"
      }
#line 1299 "interval.m"
    backend_libs__interval__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1299 "interval.m"
    backend_libs__interval__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1299 "interval.m"
    backend_libs__interval__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1299 "interval.m"
    backend_libs__interval__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1299 "interval.m"
    backend_libs__interval__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1299 "interval.m"
    backend_libs__interval__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1299 "interval.m"
    backend_libs__interval__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1299 "interval.m"
    backend_libs__interval__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1299 "interval.m"
    backend_libs__interval__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1299 "interval.m"
    backend_libs__interval__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1299 "interval.m"
    backend_libs__interval__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1299 "interval.m"
    backend_libs__interval__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1299 "interval.m"
    backend_libs__interval__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1299 "interval.m"
    backend_libs__interval__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1299 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1299 "interval.m"
    backend_libs__interval__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1299 "interval.m"
    {
#line 1299 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__V_48_48, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv4_Vars_12);
    }
#line 1299 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1299 "interval.m"
      {
#line 1299 "interval.m"
        backend_libs__interval__Vars_12 = ((MR_Word) backend_libs__interval__conv4_Vars_12);
#line 1299 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1299 "interval.m"
      }
#line 1304 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1300 "interval.m"
      {
#line 1300 "interval.m"
        MR_Word backend_libs__interval__VarNums_13;
#line 1300 "interval.m"
        MR_Word backend_libs__interval__V_50_50;

#line 1300 "interval.m"
        {
#line 1300 "interval.m"
          backend_libs__interval__V_50_50 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_12);
        }
#line 1300 "interval.m"
        {
#line 1300 "interval.m"
          mercury__list__map_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__interval_scalar_common_2[17], backend_libs__interval__V_50_50, &backend_libs__interval__VarNums_13);
        }
#line 1301 "interval.m"
        {
#line 1301 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "vars [");
        }
#line 1302 "interval.m"
        {
#line 1302 "interval.m"
          backend_libs__interval__write_int_list_3_p_0(backend_libs__interval__VarNums_13);
        }
#line 1303 "interval.m"
        {
#line 1303 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n");
        }
#line 1300 "interval.m"
      }
#line 1304 "interval.m"
    else
#line 1305 "interval.m"
      {
#line 1305 "interval.m"
        {
#line 1305 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no vars\n");
        }
#line 1305 "interval.m"
      }
#line 1307 "interval.m"
    backend_libs__interval__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1307 "interval.m"
    backend_libs__interval__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1307 "interval.m"
    backend_libs__interval__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1307 "interval.m"
    backend_libs__interval__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1307 "interval.m"
    backend_libs__interval__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1307 "interval.m"
    backend_libs__interval__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1307 "interval.m"
    backend_libs__interval__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1307 "interval.m"
    backend_libs__interval__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1307 "interval.m"
    backend_libs__interval__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1307 "interval.m"
    backend_libs__interval__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1307 "interval.m"
    backend_libs__interval__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1307 "interval.m"
    backend_libs__interval__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1307 "interval.m"
    backend_libs__interval__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1307 "interval.m"
    backend_libs__interval__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1307 "interval.m"
    backend_libs__interval__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1307 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1307 "interval.m"
    {
#line 1307 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[2], backend_libs__interval__V_58_58, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv6_Deletions_14);
    }
#line 1307 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1307 "interval.m"
      {
#line 1307 "interval.m"
        backend_libs__interval__Deletions_14 = ((MR_Word) backend_libs__interval__conv6_Deletions_14);
#line 1307 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1307 "interval.m"
      }
#line 1311 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1308 "interval.m"
      {
#line 1309 "interval.m"
        MR_Box backend_libs__interval__conv7_STATE_VARIABLE_IO_62_62;

#line 1308 "interval.m"
        {
#line 1308 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "deletions");
        }
#line 1309 "interval.m"
        {
#line 1309 "interval.m"
          mercury__list__foldl_4_p_2((MR_Word) &backend_libs__interval_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &backend_libs__interval_scalar_common_2[18], backend_libs__interval__Deletions_14, ((MR_Box) ((MR_Integer) 0)), &backend_libs__interval__conv7_STATE_VARIABLE_IO_62_62);
        }
#line 1310 "interval.m"
        {
#line 1310 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1310 "interval.m"
          return;
        }
#line 1308 "interval.m"
      }
#line 1311 "interval.m"
    else
#line 1311 "interval.m"
      {
#line 1311 "interval.m"
      }
#line 1273 "interval.m"
  }
#line 1270 "interval.m"
}

#line 1243 "interval.m"
static void MR_CALL 
backend_libs__interval__construct_anchors_4_p_0(
#line 1243 "interval.m"
  MR_Word backend_libs__interval__Construct_5,
#line 1243 "interval.m"
  MR_Word backend_libs__interval__Goal_6,
#line 1243 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_7,
#line 1243 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_8)
#line 1243 "interval.m"
{
#line 1246 "interval.m"
  {
#line 1246 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1246 "interval.m"
    MR_Word backend_libs__interval__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_6, (MR_Integer) 1)));
#line 1246 "interval.m"
    MR_Word backend_libs__interval__GoalId_11;
#line 1247 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_6, (MR_Integer) 0)));

#line 1248 "interval.m"
    {
#line 1248 "interval.m"
      backend_libs__interval__GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_10);
    }
#line 1249 "interval.m"
    {
#line 1249 "interval.m"
      MR_Word base;
#line 1249 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1249 "interval.m"
      *backend_libs__interval__StartAnchor_7 = base;
#line 1249 "interval.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Construct_5));
#line 1249 "interval.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__GoalId_11));
#line 1249 "interval.m"
    }
#line 1250 "interval.m"
    {
#line 1250 "interval.m"
      MR_Word base;
#line 1250 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1250 "interval.m"
      *backend_libs__interval__EndAnchor_8 = base;
#line 1250 "interval.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1250 "interval.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (backend_libs__interval__Construct_5));
#line 1250 "interval.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (backend_libs__interval__GoalId_11));
#line 1250 "interval.m"
    }
#line 1246 "interval.m"
  }
#line 1243 "interval.m"
}

#line 1228 "interval.m"
static void MR_CALL 
backend_libs__interval__build_headvar_subst_4_p_0(
#line 1228 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1228 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 1228 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_Subst_0_3,
#line 1228 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_Subst_4)
#line 1228 "interval.m"
{
#line 1231 "interval.m"
  while (MR_TRUE)
#line 1231 "interval.m"
    {
#line 1231 "interval.m"
      /* tailcall optimized into a loop */
#line 1231 "interval.m"
      {
#line 1231 "interval.m"
        MR_bool backend_libs__interval__succeeded;

#line 1231 "interval.m"
        if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1231 "interval.m"
          *backend_libs__interval__STATE_VARIABLE_Subst_4 = backend_libs__interval__STATE_VARIABLE_Subst_0_3;
#line 1231 "interval.m"
        else
#line 1232 "interval.m"
          {
#line 1232 "interval.m"
            MR_Word backend_libs__interval__HeadVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1232 "interval.m"
            MR_Word backend_libs__interval__HeadVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1232 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_Subst_17_17;
#line 1236 "interval.m"
            MR_Word backend_libs__interval__Replacement_13;
#line 1233 "interval.m"
            MR_Word backend_libs__interval__TypeInfo_19_19 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1233 "interval.m"
            MR_Box backend_libs__interval__conv0_Replacement_13;

#line 1233 "interval.m"
            {
#line 1233 "interval.m"
              backend_libs__interval__succeeded = mercury__map__search_3_p_0(backend_libs__interval__TypeInfo_19_19, backend_libs__interval__TypeInfo_19_19, backend_libs__interval__HeadVar__2_2, ((MR_Box) (backend_libs__interval__HeadVar_9)), &backend_libs__interval__conv0_Replacement_13);
            }
#line 1233 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1233 "interval.m"
              {
#line 1233 "interval.m"
                backend_libs__interval__Replacement_13 = ((MR_Word) backend_libs__interval__conv0_Replacement_13);
#line 1233 "interval.m"
                backend_libs__interval__succeeded = MR_TRUE;
#line 1233 "interval.m"
              }
#line 1236 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1234 "interval.m"
              {
#line 1234 "interval.m"
                MR_Word backend_libs__interval__TypeInfo_20_20 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1234 "interval.m"
                MR_Word backend_libs__interval__STATE_VARIABLE_Subst_16_16;

#line 1234 "interval.m"
                {
#line 1234 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_20_20, backend_libs__interval__TypeInfo_20_20, ((MR_Box) (backend_libs__interval__Replacement_13)), ((MR_Box) (backend_libs__interval__HeadVar_9)), backend_libs__interval__STATE_VARIABLE_Subst_0_3, &backend_libs__interval__STATE_VARIABLE_Subst_16_16);
                }
#line 1235 "interval.m"
                {
#line 1235 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_20_20, backend_libs__interval__TypeInfo_20_20, ((MR_Box) (backend_libs__interval__HeadVar_9)), ((MR_Box) (backend_libs__interval__Replacement_13)), backend_libs__interval__STATE_VARIABLE_Subst_16_16, &backend_libs__interval__STATE_VARIABLE_Subst_17_17);
                }
#line 1234 "interval.m"
              }
#line 1236 "interval.m"
            else
#line 1236 "interval.m"
              backend_libs__interval__STATE_VARIABLE_Subst_17_17 = backend_libs__interval__STATE_VARIABLE_Subst_0_3;
#line 1239 "interval.m"
            /* direct tailcall eliminated */
#line 1239 "interval.m"
            {
#line 1239 "interval.m"
              MR_Word backend_libs__interval__HeadVar__1__tmp_copy_1 = backend_libs__interval__HeadVars_10;
#line 1239 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_Subst_0__tmp_copy_3 = backend_libs__interval__STATE_VARIABLE_Subst_17_17;

#line 1239 "interval.m"
              backend_libs__interval__STATE_VARIABLE_Subst_0_3 = backend_libs__interval__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 1239 "interval.m"
              backend_libs__interval__HeadVar__1_1 = backend_libs__interval__HeadVar__1__tmp_copy_1;
#line 1239 "interval.m"
            }
#line 1239 "interval.m"
            continue;
#line 1232 "interval.m"
          }
#line 1231 "interval.m"
      }
#line 1231 "interval.m"
      break;
#line 1231 "interval.m"
    }
#line 1228 "interval.m"
}

#line 1203 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_cases_7_p_0(
#line 1203 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1203 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1203 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1203 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1203 "interval.m"
  MR_Word backend_libs__interval__VarRename0_5,
#line 1203 "interval.m"
  MR_Word backend_libs__interval__InsertMap_6,
#line 1203 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_7)
#line 1203 "interval.m"
{
#line 1207 "interval.m"
  {
#line 1207 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1207 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1207 "interval.m"
      {
#line 1207 "interval.m"
        *backend_libs__interval__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1207 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_4 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_3;
#line 1207 "interval.m"
      }
#line 1207 "interval.m"
    else
#line 1209 "interval.m"
      {
#line 1209 "interval.m"
        MR_Word backend_libs__interval__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1209 "interval.m"
        MR_Word backend_libs__interval__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1209 "interval.m"
        MR_Word backend_libs__interval__Case_16;
#line 1209 "interval.m"
        MR_Word backend_libs__interval__Cases_17;
#line 1209 "interval.m"
        MR_Word backend_libs__interval__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case0_14, (MR_Integer) 0)));
#line 1209 "interval.m"
        MR_Word backend_libs__interval__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case0_14, (MR_Integer) 1)));
#line 1209 "interval.m"
        MR_Word backend_libs__interval__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case0_14, (MR_Integer) 2)));
#line 1209 "interval.m"
        MR_Word backend_libs__interval__Goal_25;
#line 1209 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_29_29;
#line 1211 "interval.m"
        MR_Word backend_libs__interval__V_26_26;

#line 1211 "interval.m"
        {
#line 1211 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Goal0_24, &backend_libs__interval__Goal_25, backend_libs__interval__STATE_VARIABLE_VarInfo_0_3, &backend_libs__interval__STATE_VARIABLE_VarInfo_29_29, backend_libs__interval__VarRename0_5, &backend_libs__interval__V_26_26, backend_libs__interval__InsertMap_6, backend_libs__interval__MaybeFeature_7);
        }
#line 1213 "interval.m"
        {
#line 1213 "interval.m"
          backend_libs__interval__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1213 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Case_16, 0) = ((MR_Box) (backend_libs__interval__MainConsId_22));
#line 1213 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Case_16, 1) = ((MR_Box) (backend_libs__interval__OtherConsIds_23));
#line 1213 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Case_16, 2) = ((MR_Box) (backend_libs__interval__Goal_25));
#line 1213 "interval.m"
        }
#line 1214 "interval.m"
        {
#line 1214 "interval.m"
          backend_libs__interval__record_decisions_in_cases_7_p_0(backend_libs__interval__Cases0_15, &backend_libs__interval__Cases_17, backend_libs__interval__STATE_VARIABLE_VarInfo_29_29, backend_libs__interval__STATE_VARIABLE_VarInfo_4, backend_libs__interval__VarRename0_5, backend_libs__interval__InsertMap_6, backend_libs__interval__MaybeFeature_7);
        }
#line 1208 "interval.m"
        {
#line 1208 "interval.m"
          MR_Word base;
#line 1208 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1208 "interval.m"
          *backend_libs__interval__HeadVar__2_2 = base;
#line 1208 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Case_16));
#line 1208 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__Cases_17));
#line 1208 "interval.m"
        }
#line 1209 "interval.m"
      }
#line 1207 "interval.m"
  }
#line 1203 "interval.m"
}

#line 1165 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_conj_9_p_0(
#line 1165 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1165 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1165 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1165 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1165 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_5,
#line 1165 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_6,
#line 1165 "interval.m"
  MR_Word backend_libs__interval__ConjType_7,
#line 1165 "interval.m"
  MR_Word backend_libs__interval__InsertMap_8,
#line 1165 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_9)
#line 1165 "interval.m"
{
#line 1170 "interval.m"
  {
#line 1170 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1170 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1170 "interval.m"
      {
#line 1170 "interval.m"
        *backend_libs__interval__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1170 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_6 = backend_libs__interval__STATE_VARIABLE_VarRename_0_5;
#line 1170 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_4 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_3;
#line 1170 "interval.m"
      }
#line 1170 "interval.m"
    else
#line 1172 "interval.m"
      {
#line 1172 "interval.m"
        MR_Word backend_libs__interval__Goal0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1172 "interval.m"
        MR_Word backend_libs__interval__Goals0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1172 "interval.m"
        MR_Word backend_libs__interval__Goal_27;
#line 1172 "interval.m"
        MR_Word backend_libs__interval__TailGoals_28;
#line 1172 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_36_36;
#line 1172 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_37_37;
#line 1182 "interval.m"
        MR_Word backend_libs__interval__SubGoals_30;
#line 1178 "interval.m"
        MR_Word backend_libs__interval__InnerConjType_29;
#line 1178 "interval.m"
        MR_Word backend_libs__interval__V_40_40;
#line 1178 "interval.m"
        MR_Word backend_libs__interval__V_31_31;

#line 1173 "interval.m"
        {
#line 1173 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Goal0_19, &backend_libs__interval__Goal_27, backend_libs__interval__STATE_VARIABLE_VarInfo_0_3, &backend_libs__interval__STATE_VARIABLE_VarInfo_36_36, backend_libs__interval__STATE_VARIABLE_VarRename_0_5, &backend_libs__interval__STATE_VARIABLE_VarRename_37_37, backend_libs__interval__InsertMap_8, backend_libs__interval__MaybeFeature_9);
        }
#line 1175 "interval.m"
        {
#line 1175 "interval.m"
          backend_libs__interval__record_decisions_in_conj_9_p_0(backend_libs__interval__Goals0_20, &backend_libs__interval__TailGoals_28, backend_libs__interval__STATE_VARIABLE_VarInfo_36_36, backend_libs__interval__STATE_VARIABLE_VarInfo_4, backend_libs__interval__STATE_VARIABLE_VarRename_37_37, backend_libs__interval__STATE_VARIABLE_VarRename_6, backend_libs__interval__ConjType_7, backend_libs__interval__InsertMap_8, backend_libs__interval__MaybeFeature_9);
        }
#line 1178 "interval.m"
        backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_27, (MR_Integer) 0)));
#line 1178 "interval.m"
        backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_27, (MR_Integer) 1)));
#line 1178 "interval.m"
        backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__V_40_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__V_40_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1178 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1178 "interval.m"
          {
#line 1178 "interval.m"
            backend_libs__interval__InnerConjType_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__V_40_40, (MR_Integer) 1)));
#line 1178 "interval.m"
            backend_libs__interval__SubGoals_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__V_40_40, (MR_Integer) 2)));
#line 1179 "interval.m"
            backend_libs__interval__succeeded = (backend_libs__interval__ConjType_7 == backend_libs__interval__InnerConjType_29);
#line 1178 "interval.m"
          }
#line 1182 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1181 "interval.m"
          {
#line 1181 "interval.m"
            {
#line 1181 "interval.m"
              *backend_libs__interval__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, backend_libs__interval__SubGoals_30, backend_libs__interval__TailGoals_28);
            }
#line 1181 "interval.m"
          }
#line 1182 "interval.m"
        else
#line 1183 "interval.m"
          {
#line 1183 "interval.m"
            MR_Word base;
#line 1183 "interval.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "interval.m"
            *backend_libs__interval__HeadVar__2_2 = base;
#line 1183 "interval.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Goal_27));
#line 1183 "interval.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__TailGoals_28));
#line 1183 "interval.m"
          }
#line 1172 "interval.m"
      }
#line 1170 "interval.m"
  }
#line 1165 "interval.m"
}

#line 1134 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_at_call_site_9_p_0(
#line 1134 "interval.m"
  MR_Word backend_libs__interval__Goal0_10,
#line 1134 "interval.m"
  MR_Word * backend_libs__interval__Goal_11,
#line 1134 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_25,
#line 1134 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_26,
#line 1134 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_27,
#line 1134 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_28,
#line 1134 "interval.m"
  MR_Word backend_libs__interval__MustHaveMap_14,
#line 1134 "interval.m"
  MR_Word backend_libs__interval__InsertMap_15,
#line 1134 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_16)
#line 1134 "interval.m"
{
#line 1140 "interval.m"
  {
#line 1140 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1140 "interval.m"
    MR_Word backend_libs__interval__GoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_10, (MR_Integer) 1)));
#line 1140 "interval.m"
    MR_Word backend_libs__interval__Goal1_19;
#line 1141 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_10, (MR_Integer) 0)));
#line 1145 "interval.m"
    MR_Word backend_libs__interval__MaybeNeedAcrossCall_20;
#line 1146 "interval.m"
    MR_Word backend_libs__interval___NeedAcrossCall_21;

#line 1142 "interval.m"
    {
#line 1142 "interval.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__STATE_VARIABLE_VarRename_0_27, backend_libs__interval__Goal0_10, &backend_libs__interval__Goal1_19);
    }
#line 1144 "interval.m"
    {
#line 1144 "interval.m"
      backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo0_18, &backend_libs__interval__MaybeNeedAcrossCall_20);
    }
#line 1145 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1145 "interval.m"
      {
#line 1146 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__MaybeNeedAcrossCall_20)) == (MR_mktag((MR_Integer) 1)));
#line 1146 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1146 "interval.m"
          backend_libs__interval___NeedAcrossCall_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeNeedAcrossCall_20, (MR_Integer) 0)));
#line 1145 "interval.m"
      }
#line 1153 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1148 "interval.m"
      {
#line 1148 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_22_54;
#line 1148 "interval.m"
        MR_Word backend_libs__interval__GoalId_22;
#line 1148 "interval.m"
        MR_Word backend_libs__interval__Anchor_23;
#line 1148 "interval.m"
        MR_Word backend_libs__interval__Inserts_24;
#line 1148 "interval.m"
        MR_Word backend_libs__interval__InsertGoals_48;
#line 1148 "interval.m"
        MR_Word backend_libs__interval__BranchesGoalInfo_50;
#line 1148 "interval.m"
        MR_Word backend_libs__interval__V_52_52;
#line 1148 "interval.m"
        MR_Word backend_libs__interval__V_53_53;
#line 1037 "interval.m"
        MR_Word backend_libs__interval__InsertsPrime_37;
#line 1035 "interval.m"
        MR_Box backend_libs__interval__conv0_InsertsPrime_37;
#line 1049 "interval.m"
        MR_Word backend_libs__interval__V_49_49;

#line 1148 "interval.m"
        {
#line 1148 "interval.m"
          backend_libs__interval__GoalId_22 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo0_18);
        }
#line 1149 "interval.m"
        {
#line 1149 "interval.m"
          backend_libs__interval__Anchor_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__Anchor_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1149 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__Anchor_23, 1) = ((MR_Box) (backend_libs__interval__GoalId_22));
#line 1149 "interval.m"
        }
#line 1035 "interval.m"
        {
#line 1035 "interval.m"
          backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval_scalar_common_1[4], backend_libs__interval__InsertMap_15, ((MR_Box) (backend_libs__interval__Anchor_23)), &backend_libs__interval__conv0_InsertsPrime_37);
        }
#line 1035 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1035 "interval.m"
          {
#line 1035 "interval.m"
            backend_libs__interval__InsertsPrime_37 = ((MR_Word) backend_libs__interval__conv0_InsertsPrime_37);
#line 1035 "interval.m"
            backend_libs__interval__succeeded = MR_TRUE;
#line 1035 "interval.m"
          }
#line 1037 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1036 "interval.m"
          backend_libs__interval__Inserts_24 = backend_libs__interval__InsertsPrime_37;
#line 1037 "interval.m"
        else
#line 1038 "interval.m"
          backend_libs__interval__Inserts_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10213 "backend_libs.interval.c"
        backend_libs__interval__TypeInfo_22_54 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1047 "interval.m"
        {
#line 1047 "interval.m"
          backend_libs__interval__V_52_52 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_22_54, backend_libs__interval__TypeInfo_22_54);
        }
#line 1047 "interval.m"
        {
#line 1047 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_0_25, backend_libs__interval__STATE_VARIABLE_VarInfo_26, backend_libs__interval__V_52_52, backend_libs__interval__STATE_VARIABLE_VarRename_28, backend_libs__interval__Inserts_24, backend_libs__interval__MaybeFeature_16, &backend_libs__interval__InsertGoals_48);
        }
#line 1049 "interval.m"
        backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_19, (MR_Integer) 0)));
#line 1049 "interval.m"
        backend_libs__interval__BranchesGoalInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_19, (MR_Integer) 1)));
#line 1050 "interval.m"
        {
#line 1050 "interval.m"
          backend_libs__interval__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_53_53, 0) = ((MR_Box) (backend_libs__interval__Goal1_19));
#line 1050 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_53_53, 1) = ((MR_Box) (backend_libs__interval__InsertGoals_48));
#line 1050 "interval.m"
        }
#line 1050 "interval.m"
        {
#line 1050 "interval.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_53_53, backend_libs__interval__BranchesGoalInfo_50, backend_libs__interval__Goal_11);
#line 1050 "interval.m"
          return;
        }
#line 1148 "interval.m"
      }
#line 1153 "interval.m"
    else
#line 1157 "interval.m"
      {
#line 1157 "interval.m"
#line 1157 "interval.m"
        switch (backend_libs__interval__MustHaveMap_14) {
#line 1157 "interval.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1157 "interval.m"
          case (MR_Integer) 0:
#line 1156 "interval.m"
            *backend_libs__interval__Goal_11 = backend_libs__interval__Goal1_19;
#line 1157 "interval.m"
            break;
#line 1157 "interval.m"
          case (MR_Integer) 1:
#line 1158 "interval.m"
            {
#line 1159 "interval.m"
              {
#line 1159 "interval.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.record_decisions_at_call_site\'/9", (MR_String) "no save map");
#line 1159 "interval.m"
                return;
              }
#line 1158 "interval.m"
            }
#line 1157 "interval.m"
            break;
#line 1157 "interval.m"
        }
#line 1157 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_28 = backend_libs__interval__STATE_VARIABLE_VarRename_0_27;
#line 1157 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_26 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_25;
#line 1157 "interval.m"
      }
#line 1140 "interval.m"
  }
#line 1134 "interval.m"
}

#line 1103 "interval.m"
static void MR_CALL 
backend_libs__interval__create_shadow_vars_10_p_0(
#line 1103 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1103 "interval.m"
  MR_Word backend_libs__interval__VarsToExtract_2,
#line 1103 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_0_3,
#line 1103 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarSet_4,
#line 1103 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_0_5,
#line 1103 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarTypes_6,
#line 1103 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_7,
#line 1103 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_8,
#line 1103 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_0_9,
#line 1103 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VoidRename_10)
#line 1103 "interval.m"
{
#line 1108 "interval.m"
  while (MR_TRUE)
#line 1108 "interval.m"
    {
#line 1108 "interval.m"
      /* tailcall optimized into a loop */
#line 1108 "interval.m"
      {
#line 1108 "interval.m"
        MR_bool backend_libs__interval__succeeded;

#line 1108 "interval.m"
        if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1108 "interval.m"
          {
#line 1108 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VoidRename_10 = backend_libs__interval__STATE_VARIABLE_VoidRename_0_9;
#line 1108 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarRename_8 = backend_libs__interval__STATE_VARIABLE_VarRename_0_7;
#line 1108 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarTypes_6 = backend_libs__interval__STATE_VARIABLE_VarTypes_0_5;
#line 1108 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarSet_4 = backend_libs__interval__STATE_VARIABLE_VarSet_0_3;
#line 1108 "interval.m"
          }
#line 1108 "interval.m"
        else
#line 1110 "interval.m"
          {
#line 1110 "interval.m"
            MR_Word backend_libs__interval__TypeCtorInfo_32_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1110 "interval.m"
            MR_Word backend_libs__interval__Arg_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1110 "interval.m"
            MR_Word backend_libs__interval__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1110 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_39_39;
#line 1110 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_40_40;
#line 1110 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_41_41;
#line 1110 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_42_42;
#line 1110 "interval.m"
            MR_String backend_libs__interval__Name_61;
#line 1110 "interval.m"
            MR_Word backend_libs__interval__Shadow_62;
#line 1110 "interval.m"
            MR_Word backend_libs__interval__Type_63;

#line 1122 "interval.m"
            {
#line 1122 "interval.m"
              mercury__varset__lookup_name_3_p_0(backend_libs__interval__TypeCtorInfo_32_68, backend_libs__interval__STATE_VARIABLE_VarSet_0_3, backend_libs__interval__Arg_24, &backend_libs__interval__Name_61);
            }
#line 1123 "interval.m"
            {
#line 1123 "interval.m"
              mercury__varset__new_named_var_4_p_0(backend_libs__interval__TypeCtorInfo_32_68, backend_libs__interval__Name_61, &backend_libs__interval__Shadow_62, backend_libs__interval__STATE_VARIABLE_VarSet_0_3, &backend_libs__interval__STATE_VARIABLE_VarSet_39_39);
            }
#line 1124 "interval.m"
            {
#line 1124 "interval.m"
              hlds__vartypes__lookup_var_type_3_p_0(backend_libs__interval__STATE_VARIABLE_VarTypes_0_5, backend_libs__interval__Arg_24, &backend_libs__interval__Type_63);
            }
#line 1125 "interval.m"
            {
#line 1125 "interval.m"
              hlds__vartypes__add_var_type_4_p_0(backend_libs__interval__Shadow_62, backend_libs__interval__Type_63, backend_libs__interval__STATE_VARIABLE_VarTypes_0_5, &backend_libs__interval__STATE_VARIABLE_VarTypes_40_40);
            }
#line 1126 "interval.m"
            {
#line 1126 "interval.m"
              backend_libs__interval__succeeded = parse_tree__set_of_var__member_2_p_0(backend_libs__interval__TypeCtorInfo_32_68, backend_libs__interval__VarsToExtract_2, backend_libs__interval__Arg_24);
            }
#line 1128 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1127 "interval.m"
              {
#line 1127 "interval.m"
                MR_Word backend_libs__interval__TypeInfo_33_69 = (MR_Word) &backend_libs__interval_scalar_common_1[0];

#line 1127 "interval.m"
                {
#line 1127 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_33_69, backend_libs__interval__TypeInfo_33_69, ((MR_Box) (backend_libs__interval__Arg_24)), ((MR_Box) (backend_libs__interval__Shadow_62)), backend_libs__interval__STATE_VARIABLE_VarRename_0_7, &backend_libs__interval__STATE_VARIABLE_VarRename_41_41);
                }
#line 1127 "interval.m"
                backend_libs__interval__STATE_VARIABLE_VoidRename_42_42 = backend_libs__interval__STATE_VARIABLE_VoidRename_0_9;
#line 1127 "interval.m"
              }
#line 1128 "interval.m"
            else
#line 1129 "interval.m"
              {
#line 1129 "interval.m"
                MR_Word backend_libs__interval__TypeInfo_34_70 = (MR_Word) &backend_libs__interval_scalar_common_1[0];

#line 1129 "interval.m"
                {
#line 1129 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_34_70, backend_libs__interval__TypeInfo_34_70, ((MR_Box) (backend_libs__interval__Arg_24)), ((MR_Box) (backend_libs__interval__Shadow_62)), backend_libs__interval__STATE_VARIABLE_VoidRename_0_9, &backend_libs__interval__STATE_VARIABLE_VoidRename_42_42);
                }
#line 1129 "interval.m"
                backend_libs__interval__STATE_VARIABLE_VarRename_41_41 = backend_libs__interval__STATE_VARIABLE_VarRename_0_7;
#line 1129 "interval.m"
              }
#line 1113 "interval.m"
            /* direct tailcall eliminated */
#line 1113 "interval.m"
            {
#line 1113 "interval.m"
              MR_Word backend_libs__interval__HeadVar__1__tmp_copy_1 = backend_libs__interval__Args_25;
#line 1113 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_0__tmp_copy_3 = backend_libs__interval__STATE_VARIABLE_VarSet_39_39;
#line 1113 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_0__tmp_copy_5 = backend_libs__interval__STATE_VARIABLE_VarTypes_40_40;
#line 1113 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0__tmp_copy_7 = backend_libs__interval__STATE_VARIABLE_VarRename_41_41;
#line 1113 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_0__tmp_copy_9 = backend_libs__interval__STATE_VARIABLE_VoidRename_42_42;

#line 1113 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VoidRename_0_9 = backend_libs__interval__STATE_VARIABLE_VoidRename_0__tmp_copy_9;
#line 1113 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarRename_0_7 = backend_libs__interval__STATE_VARIABLE_VarRename_0__tmp_copy_7;
#line 1113 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarTypes_0_5 = backend_libs__interval__STATE_VARIABLE_VarTypes_0__tmp_copy_5;
#line 1113 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarSet_0_3 = backend_libs__interval__STATE_VARIABLE_VarSet_0__tmp_copy_3;
#line 1113 "interval.m"
              backend_libs__interval__HeadVar__1_1 = backend_libs__interval__HeadVar__1__tmp_copy_1;
#line 1113 "interval.m"
            }
#line 1113 "interval.m"
            continue;
#line 1110 "interval.m"
          }
#line 1108 "interval.m"
      }
#line 1108 "interval.m"
      break;
#line 1108 "interval.m"
    }
#line 1103 "interval.m"
}

#line 1052 "interval.m"
static void MR_CALL 
backend_libs__interval__make_inserted_goals_7_p_0(
#line 1052 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_1,
#line 1052 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_2,
#line 1052 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_3,
#line 1052 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_4,
#line 1052 "interval.m"
  MR_Word backend_libs__interval__HeadVar__5_5,
#line 1052 "interval.m"
  MR_Word backend_libs__interval__HeadVar__6_6,
#line 1052 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7)
#line 1052 "interval.m"
{
#line 1056 "interval.m"
  {
#line 1056 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1056 "interval.m"
    if ((backend_libs__interval__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1056 "interval.m"
      {
#line 1056 "interval.m"
        *backend_libs__interval__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1056 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_4 = backend_libs__interval__STATE_VARIABLE_VarRename_0_3;
#line 1056 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_2 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_1;
#line 1056 "interval.m"
      }
#line 1056 "interval.m"
    else
#line 1058 "interval.m"
      {
#line 1058 "interval.m"
        MR_Word backend_libs__interval__Spec_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__5_5, (MR_Integer) 0)));
#line 1058 "interval.m"
        MR_Word backend_libs__interval__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__5_5, (MR_Integer) 1)));
#line 1058 "interval.m"
        MR_Word backend_libs__interval__Goal_20;
#line 1058 "interval.m"
        MR_Word backend_libs__interval__Goals_21;
#line 1058 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_26_26;
#line 1058 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_27_27;
#line 1058 "interval.m"
        MR_Word backend_libs__interval__Goal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Spec_17, (MR_Integer) 0)));
#line 1058 "interval.m"
        MR_Word backend_libs__interval__VarsToExtract_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Spec_17, (MR_Integer) 1)));
#line 1058 "interval.m"
        MR_Word backend_libs__interval__GoalExpr0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_39, (MR_Integer) 0)));
#line 1058 "interval.m"
        MR_Word backend_libs__interval__GoalInfo0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_39, (MR_Integer) 1)));
#line 1092 "interval.m"
        MR_Word backend_libs__interval__V_43_43;
#line 1092 "interval.m"
        MR_Word backend_libs__interval__V_44_44;
#line 1092 "interval.m"
        MR_Word backend_libs__interval__V_45_45;
#line 1092 "interval.m"
        MR_Word backend_libs__interval__V_47_47;
#line 1092 "interval.m"
        MR_Word backend_libs__interval__V_48_48;
#line 1092 "interval.m"
        MR_Word backend_libs__interval__V_49_49;
#line 1092 "interval.m"
        MR_Word backend_libs__interval__ArgVars_50;
#line 1092 "interval.m"
        MR_Word backend_libs__interval__V_51_51;
#line 1092 "interval.m"
        MR_Word backend_libs__interval__V_53_53;
#line 1070 "interval.m"
        MR_Word backend_libs__interval__Unification0_46;
#line 1071 "interval.m"
        MR_Word backend_libs__interval__V_52_52;

#line 1070 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_41)) == (MR_mktag((MR_Integer) 1)));
#line 1070 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1070 "interval.m"
          {
#line 1070 "interval.m"
            backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 0)));
#line 1070 "interval.m"
            backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 1)));
#line 1070 "interval.m"
            backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 2)));
#line 1070 "interval.m"
            backend_libs__interval__Unification0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 3)));
#line 1070 "interval.m"
            backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 4)));
#line 1071 "interval.m"
            backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__Unification0_46)) == (MR_mktag((MR_Integer) 1)));
#line 1071 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1071 "interval.m"
              {
#line 1071 "interval.m"
                backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 0)));
#line 1071 "interval.m"
                backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 1)));
#line 1071 "interval.m"
                backend_libs__interval__ArgVars_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 2)));
#line 1071 "interval.m"
                backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 3)));
#line 1071 "interval.m"
                backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 4)));
#line 1071 "interval.m"
                backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 5)));
#line 1071 "interval.m"
              }
#line 1070 "interval.m"
          }
#line 1092 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1073 "interval.m"
          {
#line 1073 "interval.m"
            MR_Word backend_libs__interval__TypeInfo_65_87;
#line 1073 "interval.m"
            MR_Word backend_libs__interval__Unification1_54;
#line 1073 "interval.m"
            MR_Word backend_libs__interval__GoalExpr1_55;
#line 1073 "interval.m"
            MR_Word backend_libs__interval__GoalInfo1_56;
#line 1073 "interval.m"
            MR_Word backend_libs__interval__GoalInfo2_58;
#line 1073 "interval.m"
            MR_Word backend_libs__interval__Goal2_59;
#line 1073 "interval.m"
            MR_Word backend_libs__interval__VarSet0_60;
#line 1073 "interval.m"
            MR_Word backend_libs__interval__VarTypes0_61;
#line 1073 "interval.m"
            MR_Word backend_libs__interval__VarSet_62;
#line 1073 "interval.m"
            MR_Word backend_libs__interval__VarTypes_63;
#line 1073 "interval.m"
            MR_Word backend_libs__interval__NewRename_64;
#line 1073 "interval.m"
            MR_Word backend_libs__interval__VoidRename_65;
#line 1073 "interval.m"
            MR_Word backend_libs__interval__Goal3_66;
#line 1073 "interval.m"
            MR_Word backend_libs__interval__V_69_69;
#line 1073 "interval.m"
            MR_Word backend_libs__interval__V_70_70;

#line 1073 "interval.m"
            {
#line 1073 "interval.m"
              backend_libs__interval__Unification1_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 0) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 1073 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 1) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 1073 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 2) = ((MR_Box) (backend_libs__interval__ArgVars_50));
#line 1073 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 3) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 1073 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1073 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 5) = ((MR_Box) (backend_libs__interval__V_53_53));
#line 1073 "interval.m"
            }
#line 1074 "interval.m"
            {
#line 1074 "interval.m"
              backend_libs__interval__GoalExpr1_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 0) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 1074 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 1) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 1074 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 2) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 1074 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 3) = ((MR_Box) (backend_libs__interval__Unification1_54));
#line 1074 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 4) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 1074 "interval.m"
            }
#line 1075 "interval.m"
            {
#line 1075 "interval.m"
              hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, backend_libs__interval__GoalInfo0_42, &backend_libs__interval__GoalInfo1_56);
            }
#line 1079 "interval.m"
            if ((backend_libs__interval__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1081 "interval.m"
              backend_libs__interval__GoalInfo2_58 = backend_libs__interval__GoalInfo1_56;
#line 1079 "interval.m"
            else
#line 1077 "interval.m"
              {
#line 1077 "interval.m"
                MR_Word backend_libs__interval__Feature_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__6_6, (MR_Integer) 0)));

#line 1078 "interval.m"
                {
#line 1078 "interval.m"
                  hlds__hlds_goal__goal_info_add_feature_3_p_0(backend_libs__interval__Feature_57, backend_libs__interval__GoalInfo1_56, &backend_libs__interval__GoalInfo2_58);
                }
#line 1077 "interval.m"
              }
#line 1083 "interval.m"
            {
#line 1083 "interval.m"
              backend_libs__interval__Goal2_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1083 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_59, 0) = ((MR_Box) (backend_libs__interval__GoalExpr1_55));
#line 1083 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_59, 1) = ((MR_Box) (backend_libs__interval__GoalInfo2_58));
#line 1083 "interval.m"
            }
#line 1084 "interval.m"
            backend_libs__interval__VarSet0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_0_1, (MR_Integer) 0)));
#line 1084 "interval.m"
            backend_libs__interval__VarTypes0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_0_1, (MR_Integer) 1)));
#line 10690 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_65_87 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1086 "interval.m"
            {
#line 1086 "interval.m"
              backend_libs__interval__V_69_69 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_87, backend_libs__interval__TypeInfo_65_87);
            }
#line 1086 "interval.m"
            {
#line 1086 "interval.m"
              backend_libs__interval__V_70_70 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_87, backend_libs__interval__TypeInfo_65_87);
            }
#line 1085 "interval.m"
            {
#line 1085 "interval.m"
              backend_libs__interval__create_shadow_vars_10_p_0(backend_libs__interval__ArgVars_50, backend_libs__interval__VarsToExtract_40, backend_libs__interval__VarSet0_60, &backend_libs__interval__VarSet_62, backend_libs__interval__VarTypes0_61, &backend_libs__interval__VarTypes_63, backend_libs__interval__V_69_69, &backend_libs__interval__NewRename_64, backend_libs__interval__V_70_70, &backend_libs__interval__VoidRename_65);
            }
#line 1087 "interval.m"
            {
#line 1087 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_26_26, 0) = ((MR_Box) (backend_libs__interval__VarSet_62));
#line 1087 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_26_26, 1) = ((MR_Box) (backend_libs__interval__VarTypes_63));
#line 1087 "interval.m"
            }
#line 1088 "interval.m"
            {
#line 1088 "interval.m"
              mercury__map__old_merge_3_p_0(backend_libs__interval__TypeInfo_65_87, backend_libs__interval__TypeInfo_65_87, backend_libs__interval__STATE_VARIABLE_VarRename_0_3, backend_libs__interval__NewRename_64, &backend_libs__interval__STATE_VARIABLE_VarRename_27_27);
            }
#line 1090 "interval.m"
            {
#line 1090 "interval.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__STATE_VARIABLE_VarRename_27_27, backend_libs__interval__Goal2_59, &backend_libs__interval__Goal3_66);
            }
#line 1091 "interval.m"
            {
#line 1091 "interval.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__VoidRename_65, backend_libs__interval__Goal3_66, &backend_libs__interval__Goal_20);
            }
#line 1073 "interval.m"
          }
#line 1092 "interval.m"
        else
#line 1093 "interval.m"
          {
#line 1093 "interval.m"
            {
#line 1093 "interval.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.make_inserted_goal\'/7", (MR_String) "not a deconstruct");
#line 1093 "interval.m"
              return;
            }
#line 1093 "interval.m"
          }
#line 1060 "interval.m"
        {
#line 1060 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_26_26, backend_libs__interval__STATE_VARIABLE_VarInfo_2, backend_libs__interval__STATE_VARIABLE_VarRename_27_27, backend_libs__interval__STATE_VARIABLE_VarRename_4, backend_libs__interval__Specs_18, backend_libs__interval__HeadVar__6_6, &backend_libs__interval__Goals_21);
        }
#line 1058 "interval.m"
        {
#line 1058 "interval.m"
          MR_Word base;
#line 1058 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "interval.m"
          *backend_libs__interval__HeadVar__7_7 = base;
#line 1058 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Goal_20));
#line 1058 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__Goals_21));
#line 1058 "interval.m"
        }
#line 1058 "interval.m"
      }
#line 1056 "interval.m"
  }
#line 1052 "interval.m"
}

#line 1041 "interval.m"
static void MR_CALL 
backend_libs__interval__insert_goals_after_7_p_0(
#line 1041 "interval.m"
  MR_Word backend_libs__interval__BranchesGoal_8,
#line 1041 "interval.m"
  MR_Word * backend_libs__interval__Goal_9,
#line 1041 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_17,
#line 1041 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_18,
#line 1041 "interval.m"
  MR_Word * backend_libs__interval__VarRename_11,
#line 1041 "interval.m"
  MR_Word backend_libs__interval__Inserts_12,
#line 1041 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_13)
#line 1041 "interval.m"
{
#line 1046 "interval.m"
  {
#line 1046 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1046 "interval.m"
    MR_Word backend_libs__interval__TypeInfo_22_22 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1046 "interval.m"
    MR_Word backend_libs__interval__InsertGoals_14;
#line 1046 "interval.m"
    MR_Word backend_libs__interval__BranchesGoalInfo_16;
#line 1046 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 1046 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 1049 "interval.m"
    MR_Word backend_libs__interval__V_15_15;

#line 1047 "interval.m"
    {
#line 1047 "interval.m"
      backend_libs__interval__V_20_20 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_22_22, backend_libs__interval__TypeInfo_22_22);
    }
#line 1047 "interval.m"
    {
#line 1047 "interval.m"
      backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_0_17, backend_libs__interval__STATE_VARIABLE_VarInfo_18, backend_libs__interval__V_20_20, backend_libs__interval__VarRename_11, backend_libs__interval__Inserts_12, backend_libs__interval__MaybeFeature_13, &backend_libs__interval__InsertGoals_14);
    }
#line 1049 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__BranchesGoal_8, (MR_Integer) 0)));
#line 1049 "interval.m"
    backend_libs__interval__BranchesGoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__BranchesGoal_8, (MR_Integer) 1)));
#line 1050 "interval.m"
    {
#line 1050 "interval.m"
      backend_libs__interval__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1050 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 0) = ((MR_Box) (backend_libs__interval__BranchesGoal_8));
#line 1050 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 1) = ((MR_Box) (backend_libs__interval__InsertGoals_14));
#line 1050 "interval.m"
    }
#line 1050 "interval.m"
    {
#line 1050 "interval.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_21_21, backend_libs__interval__BranchesGoalInfo_16, backend_libs__interval__Goal_9);
#line 1050 "interval.m"
      return;
    }
#line 1046 "interval.m"
  }
#line 1041 "interval.m"
}

#line 1031 "interval.m"
static void MR_CALL 
backend_libs__interval__lookup_inserts_3_p_0(
#line 1031 "interval.m"
  MR_Word backend_libs__interval__InsertMap_4,
#line 1031 "interval.m"
  MR_Word backend_libs__interval__Anchor_5,
#line 1031 "interval.m"
  MR_Word * backend_libs__interval__Inserts_6)
#line 1031 "interval.m"
{
#line 1037 "interval.m"
  {
#line 1037 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1037 "interval.m"
    MR_Word backend_libs__interval__InsertsPrime_7;
#line 1035 "interval.m"
    MR_Box backend_libs__interval__conv0_InsertsPrime_7;

#line 1035 "interval.m"
    {
#line 1035 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval_scalar_common_1[4], backend_libs__interval__InsertMap_4, ((MR_Box) (backend_libs__interval__Anchor_5)), &backend_libs__interval__conv0_InsertsPrime_7);
    }
#line 1035 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1035 "interval.m"
      {
#line 1035 "interval.m"
        backend_libs__interval__InsertsPrime_7 = ((MR_Word) backend_libs__interval__conv0_InsertsPrime_7);
#line 1035 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1035 "interval.m"
      }
#line 1037 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1036 "interval.m"
      *backend_libs__interval__Inserts_6 = backend_libs__interval__InsertsPrime_7;
#line 1037 "interval.m"
    else
#line 1038 "interval.m"
      *backend_libs__interval__Inserts_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1037 "interval.m"
  }
#line 1031 "interval.m"
}

#line 881 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_goal_8_p_0(
#line 881 "interval.m"
  MR_Word backend_libs__interval__Goal0_9,
#line 881 "interval.m"
  MR_Word * backend_libs__interval__Goal_10,
#line 881 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_114,
#line 881 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_115,
#line 881 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_116,
#line 881 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_117,
#line 881 "interval.m"
  MR_Word backend_libs__interval__InsertMap_13,
#line 881 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_14)
#line 881 "interval.m"
{
#line 887 "interval.m"
  {
#line 887 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 887 "interval.m"
    MR_Word backend_libs__interval__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_9, (MR_Integer) 0)));
#line 887 "interval.m"
    MR_Word backend_libs__interval__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_9, (MR_Integer) 1)));

#line 895 "interval.m"
#line 895 "interval.m"
    switch (MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) {
#line 895 "interval.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 895 "interval.m"
      case (MR_Integer) 0:
#line 926 "interval.m"
        {
#line 926 "interval.m"
          MR_Word backend_libs__interval__NegGoal0_37 = (MR_Word) MR_body(((MR_Word) backend_libs__interval__GoalExpr0_15), (MR_Integer) 0);
#line 926 "interval.m"
          MR_Word backend_libs__interval__NegGoal_38;
#line 926 "interval.m"
          MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_147_147;
#line 926 "interval.m"
          MR_Word backend_libs__interval__V_148_148;
#line 926 "interval.m"
          MR_Word backend_libs__interval__EndAnchor_177;
#line 926 "interval.m"
          MR_Word backend_libs__interval__Goal1_178;
#line 926 "interval.m"
          MR_Word backend_libs__interval__Inserts_179;
#line 927 "interval.m"
          MR_Word backend_libs__interval__V_39_39;
#line 930 "interval.m"
          MR_Word backend_libs__interval___StartAnchor_176;

#line 927 "interval.m"
          {
#line 927 "interval.m"
            backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__NegGoal0_37, &backend_libs__interval__NegGoal_38, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_147_147, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, &backend_libs__interval__V_39_39, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
          }
#line 929 "interval.m"
          backend_libs__interval__V_148_148 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) backend_libs__interval__NegGoal_38);
#line 929 "interval.m"
          {
#line 929 "interval.m"
            backend_libs__interval__Goal1_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 929 "interval.m"
            MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_178, 0) = ((MR_Box) (backend_libs__interval__V_148_148));
#line 929 "interval.m"
            MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_178, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 929 "interval.m"
          }
#line 930 "interval.m"
          {
#line 930 "interval.m"
            backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 3, backend_libs__interval__Goal0_9, &backend_libs__interval___StartAnchor_176, &backend_libs__interval__EndAnchor_177);
          }
#line 931 "interval.m"
          {
#line 931 "interval.m"
            backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_177, &backend_libs__interval__Inserts_179);
          }
#line 933 "interval.m"
          {
#line 933 "interval.m"
            backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_178, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_147_147, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__Inserts_179, backend_libs__interval__MaybeFeature_14);
#line 933 "interval.m"
            return;
          }
#line 926 "interval.m"
        }
#line 895 "interval.m"
        break;
#line 895 "interval.m"
      case (MR_Integer) 1:
#line 1022 "interval.m"
        {
#line 1023 "interval.m"
          {
#line 1023 "interval.m"
            hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10);
          }
#line 1022 "interval.m"
          *backend_libs__interval__STATE_VARIABLE_VarInfo_115 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_114;
#line 1022 "interval.m"
          *backend_libs__interval__STATE_VARIABLE_VarRename_117 = backend_libs__interval__STATE_VARIABLE_VarRename_0_116;
#line 1022 "interval.m"
        }
#line 895 "interval.m"
        break;
#line 895 "interval.m"
      case (MR_Integer) 2:
#line 1005 "interval.m"
        {
#line 1005 "interval.m"
          MR_Word backend_libs__interval__Builtin_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 1005 "interval.m"
          MR_Word backend_libs__interval__MustHaveMap_200;
#line 1005 "interval.m"
          MR_Word backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)));
#line 1005 "interval.m"
          MR_Integer backend_libs__interval__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 1005 "interval.m"
          MR_Word backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 1005 "interval.m"
          MR_Word backend_libs__interval__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 4)));
#line 1005 "interval.m"
          MR_Word backend_libs__interval__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 5)));

#line 1009 "interval.m"
#line 1009 "interval.m"
          switch (backend_libs__interval__Builtin_98) {
#line 1009 "interval.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1009 "interval.m"
            case (MR_Integer) 0:
#line 1008 "interval.m"
              backend_libs__interval__MustHaveMap_200 = (MR_Integer) 0;
#line 1009 "interval.m"
              break;
#line 1009 "interval.m"
            case (MR_Integer) 2:
#line 1009 "interval.m"
            case (MR_Integer) 1:
#line 1013 "interval.m"
              backend_libs__interval__MustHaveMap_200 = (MR_Integer) 1;
#line 1009 "interval.m"
              break;
#line 1009 "interval.m"
          }
#line 1015 "interval.m"
          {
#line 1015 "interval.m"
            backend_libs__interval__record_decisions_at_call_site_9_p_0(backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__MustHaveMap_200, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
#line 1015 "interval.m"
            return;
          }
#line 1005 "interval.m"
        }
#line 895 "interval.m"
        break;
#line 895 "interval.m"
      case (MR_Integer) 3:
#line 895 "interval.m"
#line 895 "interval.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)))) {
#line 895 "interval.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 895 "interval.m"
          case (MR_Integer) 0:
#line 990 "interval.m"
            {
#line 990 "interval.m"
              MR_Word backend_libs__interval__GenericCall_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 990 "interval.m"
              MR_Word backend_libs__interval__MustHaveMap_85;
#line 990 "interval.m"
              MR_Word backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 990 "interval.m"
              MR_Word backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 990 "interval.m"
              MR_Word backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 4)));
#line 990 "interval.m"
              MR_Word backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 5)));

#line 995 "interval.m"
#line 995 "interval.m"
              switch (MR_tag((MR_Word) backend_libs__interval__GenericCall_79)) {
#line 995 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 995 "interval.m"
                case (MR_Integer) 0:
#line 995 "interval.m"
                case (MR_Integer) 1:
#line 995 "interval.m"
                case (MR_Integer) 2:
#line 1000 "interval.m"
                  backend_libs__interval__MustHaveMap_85 = (MR_Integer) 1;
#line 995 "interval.m"
                  break;
#line 995 "interval.m"
                case (MR_Integer) 3:
#line 994 "interval.m"
                  backend_libs__interval__MustHaveMap_85 = (MR_Integer) 0;
#line 995 "interval.m"
                  break;
#line 995 "interval.m"
              }
#line 1002 "interval.m"
              {
#line 1002 "interval.m"
                backend_libs__interval__record_decisions_at_call_site_9_p_0(backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__MustHaveMap_85, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
#line 1002 "interval.m"
                return;
              }
#line 990 "interval.m"
            }
#line 895 "interval.m"
            break;
#line 895 "interval.m"
          case (MR_Integer) 1:
#line 1018 "interval.m"
            {
#line 1019 "interval.m"
              {
#line 1019 "interval.m"
                backend_libs__interval__record_decisions_at_call_site_9_p_0(backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, (MR_Integer) 0, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
#line 1019 "interval.m"
                return;
              }
#line 1018 "interval.m"
            }
#line 895 "interval.m"
            break;
#line 895 "interval.m"
          case (MR_Integer) 2:
#line 890 "interval.m"
            {
#line 890 "interval.m"
              MR_Word backend_libs__interval__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 890 "interval.m"
              MR_Word backend_libs__interval__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 890 "interval.m"
              MR_Word backend_libs__interval__Goals_19;
#line 890 "interval.m"
              MR_Word backend_libs__interval__GoalExpr_20;

#line 891 "interval.m"
              {
#line 891 "interval.m"
                backend_libs__interval__record_decisions_in_conj_9_p_0(backend_libs__interval__Goals0_18, &backend_libs__interval__Goals_19, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__ConjType_17, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 893 "interval.m"
              {
#line 893 "interval.m"
                backend_libs__interval__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 893 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 893 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_20, 1) = ((MR_Box) (backend_libs__interval__ConjType_17));
#line 893 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_20, 2) = ((MR_Box) (backend_libs__interval__Goals_19));
#line 893 "interval.m"
              }
#line 894 "interval.m"
              {
#line 894 "interval.m"
                MR_Word base;
#line 894 "interval.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 894 "interval.m"
                *backend_libs__interval__Goal_10 = base;
#line 894 "interval.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__GoalExpr_20));
#line 894 "interval.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 894 "interval.m"
              }
#line 890 "interval.m"
            }
#line 895 "interval.m"
            break;
#line 895 "interval.m"
          case (MR_Integer) 3:
#line 896 "interval.m"
            {
#line 896 "interval.m"
              MR_Word backend_libs__interval__StartAnchor_21;
#line 896 "interval.m"
              MR_Word backend_libs__interval__EndAnchor_22;
#line 896 "interval.m"
              MR_Word backend_libs__interval__Goals0_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));

#line 897 "interval.m"
              {
#line 897 "interval.m"
                backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 1, backend_libs__interval__Goal0_9, &backend_libs__interval__StartAnchor_21, &backend_libs__interval__EndAnchor_22);
              }
#line 910 "interval.m"
              if ((backend_libs__interval__Goals0_170 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 911 "interval.m"
                {
#line 913 "interval.m"
                  *backend_libs__interval__Goal_10 = backend_libs__interval__Goal0_9;
#line 911 "interval.m"
                  *backend_libs__interval__STATE_VARIABLE_VarInfo_115 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_114;
#line 911 "interval.m"
                  *backend_libs__interval__STATE_VARIABLE_VarRename_117 = backend_libs__interval__STATE_VARIABLE_VarRename_0_116;
#line 911 "interval.m"
                }
#line 910 "interval.m"
              else
#line 899 "interval.m"
                {
#line 899 "interval.m"
                  MR_Word backend_libs__interval__FirstGoal0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals0_170, (MR_Integer) 0)));
#line 899 "interval.m"
                  MR_Word backend_libs__interval__LaterGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals0_170, (MR_Integer) 1)));
#line 899 "interval.m"
                  MR_Word backend_libs__interval__FirstGoal_25;
#line 899 "interval.m"
                  MR_Word backend_libs__interval__StartInserts_27;
#line 899 "interval.m"
                  MR_Word backend_libs__interval__LaterGoals_28;
#line 899 "interval.m"
                  MR_Word backend_libs__interval__Goal1_29;
#line 899 "interval.m"
                  MR_Word backend_libs__interval__Inserts_30;
#line 899 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_159_159;
#line 899 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_160_160;
#line 899 "interval.m"
                  MR_Word backend_libs__interval__V_161_161;
#line 899 "interval.m"
                  MR_Word backend_libs__interval__Goals_166;
#line 900 "interval.m"
                  MR_Word backend_libs__interval__V_26_26;

#line 900 "interval.m"
                  {
#line 900 "interval.m"
                    backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__FirstGoal0_23, &backend_libs__interval__FirstGoal_25, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_159_159, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, &backend_libs__interval__V_26_26, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                  }
#line 902 "interval.m"
                  {
#line 902 "interval.m"
                    backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__StartAnchor_21, &backend_libs__interval__StartInserts_27);
                  }
#line 903 "interval.m"
                  {
#line 903 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(backend_libs__interval__LaterGoals0_24, &backend_libs__interval__LaterGoals_28, backend_libs__interval__STATE_VARIABLE_VarInfo_159_159, &backend_libs__interval__STATE_VARIABLE_VarInfo_160_160, backend_libs__interval__StartInserts_27, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                  }
#line 905 "interval.m"
                  {
#line 905 "interval.m"
                    backend_libs__interval__Goals_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "interval.m"
                    MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_166, 0) = ((MR_Box) (backend_libs__interval__FirstGoal_25));
#line 905 "interval.m"
                    MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_166, 1) = ((MR_Box) (backend_libs__interval__LaterGoals_28));
#line 905 "interval.m"
                  }
#line 906 "interval.m"
                  {
#line 906 "interval.m"
                    backend_libs__interval__V_161_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "interval.m"
                    MR_hl_field(MR_mktag(3), backend_libs__interval__V_161_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 906 "interval.m"
                    MR_hl_field(MR_mktag(3), backend_libs__interval__V_161_161, 1) = ((MR_Box) (backend_libs__interval__Goals_166));
#line 906 "interval.m"
                  }
#line 906 "interval.m"
                  {
#line 906 "interval.m"
                    backend_libs__interval__Goal1_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 906 "interval.m"
                    MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_29, 0) = ((MR_Box) (backend_libs__interval__V_161_161));
#line 906 "interval.m"
                    MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_29, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 906 "interval.m"
                  }
#line 907 "interval.m"
                  {
#line 907 "interval.m"
                    backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_22, &backend_libs__interval__Inserts_30);
                  }
#line 908 "interval.m"
                  {
#line 908 "interval.m"
                    backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_29, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_160_160, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__Inserts_30, backend_libs__interval__MaybeFeature_14);
#line 908 "interval.m"
                    return;
                  }
#line 899 "interval.m"
                }
#line 896 "interval.m"
            }
#line 895 "interval.m"
            break;
#line 895 "interval.m"
          case (MR_Integer) 4:
#line 916 "interval.m"
            {
#line 916 "interval.m"
              MR_Word backend_libs__interval__Var0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 916 "interval.m"
              MR_Word backend_libs__interval__Det_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 916 "interval.m"
              MR_Word backend_libs__interval__Cases0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 916 "interval.m"
              MR_Word backend_libs__interval__Cases_34;
#line 916 "interval.m"
              MR_Word backend_libs__interval__Var_35;
#line 916 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_152_152;
#line 916 "interval.m"
              MR_Word backend_libs__interval__V_154_154;
#line 916 "interval.m"
              MR_Word backend_libs__interval__EndAnchor_173;
#line 916 "interval.m"
              MR_Word backend_libs__interval__Goal1_174;
#line 916 "interval.m"
              MR_Word backend_libs__interval__Inserts_175;
#line 921 "interval.m"
              MR_Word backend_libs__interval___StartAnchor_36;

#line 917 "interval.m"
              {
#line 917 "interval.m"
                backend_libs__interval__record_decisions_in_cases_7_p_0(backend_libs__interval__Cases0_33, &backend_libs__interval__Cases_34, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_152_152, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 919 "interval.m"
              {
#line 919 "interval.m"
                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Var0_31, &backend_libs__interval__Var_35);
              }
#line 920 "interval.m"
              {
#line 920 "interval.m"
                backend_libs__interval__V_154_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 920 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 920 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 1) = ((MR_Box) (backend_libs__interval__Var_35));
#line 920 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 2) = ((MR_Box) (backend_libs__interval__Det_32));
#line 920 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 3) = ((MR_Box) (backend_libs__interval__Cases_34));
#line 920 "interval.m"
              }
#line 920 "interval.m"
              {
#line 920 "interval.m"
                backend_libs__interval__Goal1_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 920 "interval.m"
                MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_174, 0) = ((MR_Box) (backend_libs__interval__V_154_154));
#line 920 "interval.m"
                MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_174, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 920 "interval.m"
              }
#line 921 "interval.m"
              {
#line 921 "interval.m"
                backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 2, backend_libs__interval__Goal0_9, &backend_libs__interval___StartAnchor_36, &backend_libs__interval__EndAnchor_173);
              }
#line 922 "interval.m"
              {
#line 922 "interval.m"
                backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_173, &backend_libs__interval__Inserts_175);
              }
#line 923 "interval.m"
              {
#line 923 "interval.m"
                backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_174, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_152_152, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__Inserts_175, backend_libs__interval__MaybeFeature_14);
#line 923 "interval.m"
                return;
              }
#line 916 "interval.m"
            }
#line 895 "interval.m"
            break;
#line 895 "interval.m"
          case (MR_Integer) 5:
#line 956 "interval.m"
            {
#line 956 "interval.m"
              MR_Word backend_libs__interval__Reason0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 956 "interval.m"
              MR_Word backend_libs__interval__SubGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 956 "interval.m"
              MR_Word backend_libs__interval__Reason_58;
#line 978 "interval.m"
              MR_Word backend_libs__interval__V_130_130;
#line 978 "interval.m"
              MR_Word backend_libs__interval__V_77_77;

#line 961 "interval.m"
#line 961 "interval.m"
              switch (MR_tag((MR_Word) backend_libs__interval__Reason0_56)) {
#line 961 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 961 "interval.m"
                case (MR_Integer) 0:
#line 958 "interval.m"
                  {
#line 958 "interval.m"
                    MR_Word backend_libs__interval__Vars0_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Reason0_56, (MR_Integer) 0)));
#line 958 "interval.m"
                    MR_Word backend_libs__interval__Vars_186;

#line 959 "interval.m"
                    {
#line 959 "interval.m"
                      parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Vars0_185, &backend_libs__interval__Vars_186);
                    }
#line 960 "interval.m"
                    {
#line 960 "interval.m"
                      backend_libs__interval__Reason_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 960 "interval.m"
                      MR_hl_field(MR_mktag(0), backend_libs__interval__Reason_58, 0) = ((MR_Box) (backend_libs__interval__Vars_186));
#line 960 "interval.m"
                    }
#line 958 "interval.m"
                  }
#line 961 "interval.m"
                  break;
#line 961 "interval.m"
                case (MR_Integer) 1:
#line 961 "interval.m"
                case (MR_Integer) 2:
#line 976 "interval.m"
                  backend_libs__interval__Reason_58 = backend_libs__interval__Reason0_56;
#line 961 "interval.m"
                  break;
#line 961 "interval.m"
                case (MR_Integer) 3:
#line 961 "interval.m"
#line 961 "interval.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason0_56, (MR_Integer) 0)))) {
#line 961 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 961 "interval.m"
                    case (MR_Integer) 0:
#line 961 "interval.m"
                    case (MR_Integer) 1:
#line 961 "interval.m"
                    case (MR_Integer) 2:
#line 961 "interval.m"
                    case (MR_Integer) 3:
#line 961 "interval.m"
                    case (MR_Integer) 4:
#line 961 "interval.m"
                    case (MR_Integer) 6:
#line 961 "interval.m"
                    case (MR_Integer) 7:
#line 976 "interval.m"
                      backend_libs__interval__Reason_58 = backend_libs__interval__Reason0_56;
#line 961 "interval.m"
                      break;
#line 961 "interval.m"
                    case (MR_Integer) 5:
#line 962 "interval.m"
                      {
#line 962 "interval.m"
                        MR_Word backend_libs__interval__Kind_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason0_56, (MR_Integer) 2)));
#line 962 "interval.m"
                        MR_Word backend_libs__interval__Var0_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason0_56, (MR_Integer) 1)));
#line 962 "interval.m"
                        MR_Word backend_libs__interval__Var_188;

#line 963 "interval.m"
                        {
#line 963 "interval.m"
                          parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Var0_187, &backend_libs__interval__Var_188);
                        }
#line 964 "interval.m"
                        {
#line 964 "interval.m"
                          backend_libs__interval__Reason_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 964 "interval.m"
                          MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 964 "interval.m"
                          MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, 1) = ((MR_Box) (backend_libs__interval__Var_188));
#line 964 "interval.m"
                          MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, 2) = ((MR_Box) (backend_libs__interval__Kind_59));
#line 964 "interval.m"
                        }
#line 962 "interval.m"
                      }
#line 961 "interval.m"
                      break;
#line 961 "interval.m"
                  }
#line 961 "interval.m"
                  break;
#line 961 "interval.m"
              }
#line 978 "interval.m"
              backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 978 "interval.m"
              if (backend_libs__interval__succeeded)
#line 978 "interval.m"
                {
#line 978 "interval.m"
                  backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, (MR_Integer) 1)));
#line 978 "interval.m"
                  backend_libs__interval__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, (MR_Integer) 2)));
#line 978 "interval.m"
                  backend_libs__interval__succeeded = (backend_libs__interval__V_130_130 == (MR_Integer) 1);
#line 978 "interval.m"
                }
#line 981 "interval.m"
              if (backend_libs__interval__succeeded)
#line 980 "interval.m"
                {
#line 980 "interval.m"
                  *backend_libs__interval__Goal_10 = backend_libs__interval__Goal0_9;
#line 980 "interval.m"
                  *backend_libs__interval__STATE_VARIABLE_VarRename_117 = backend_libs__interval__STATE_VARIABLE_VarRename_0_116;
#line 980 "interval.m"
                  *backend_libs__interval__STATE_VARIABLE_VarInfo_115 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_114;
#line 980 "interval.m"
                }
#line 981 "interval.m"
              else
#line 985 "interval.m"
                {
#line 985 "interval.m"
                  MR_Word backend_libs__interval__SubGoal_78;
#line 985 "interval.m"
                  MR_Word backend_libs__interval__GoalExpr_193;

#line 984 "interval.m"
                  {
#line 984 "interval.m"
                    backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__SubGoal0_57, &backend_libs__interval__SubGoal_78, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                  }
#line 986 "interval.m"
                  {
#line 986 "interval.m"
                    backend_libs__interval__GoalExpr_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 986 "interval.m"
                    MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 986 "interval.m"
                    MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_193, 1) = ((MR_Box) (backend_libs__interval__Reason_58));
#line 986 "interval.m"
                    MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_193, 2) = ((MR_Box) (backend_libs__interval__SubGoal_78));
#line 986 "interval.m"
                  }
#line 987 "interval.m"
                  {
#line 987 "interval.m"
                    MR_Word base;
#line 987 "interval.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 987 "interval.m"
                    *backend_libs__interval__Goal_10 = base;
#line 987 "interval.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__GoalExpr_193));
#line 987 "interval.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 987 "interval.m"
                  }
#line 985 "interval.m"
                }
#line 956 "interval.m"
            }
#line 895 "interval.m"
            break;
#line 895 "interval.m"
          case (MR_Integer) 6:
#line 936 "interval.m"
            {
#line 936 "interval.m"
              MR_Word backend_libs__interval__TypeInfo_203_203;
#line 936 "interval.m"
              MR_Word backend_libs__interval__Vars0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 936 "interval.m"
              MR_Word backend_libs__interval__Cond0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 936 "interval.m"
              MR_Word backend_libs__interval__Then0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 936 "interval.m"
              MR_Word backend_libs__interval__Else0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 4)));
#line 936 "interval.m"
              MR_Word backend_libs__interval__Vars_44;
#line 936 "interval.m"
              MR_Word backend_libs__interval__Cond_45;
#line 936 "interval.m"
              MR_Word backend_libs__interval__Then_46;
#line 936 "interval.m"
              MR_Word backend_libs__interval__VarRenameElse_48;
#line 936 "interval.m"
              MR_Word backend_libs__interval__StartInsertGoals_49;
#line 936 "interval.m"
              MR_Word backend_libs__interval__Else1_50;
#line 936 "interval.m"
              MR_Word backend_libs__interval__ElseGoalInfo0_53;
#line 936 "interval.m"
              MR_Word backend_libs__interval__Else_54;
#line 936 "interval.m"
              MR_Word backend_libs__interval__EndInserts_55;
#line 936 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_135_135;
#line 936 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_136_136;
#line 936 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_137_137;
#line 936 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_138_138;
#line 936 "interval.m"
              MR_Word backend_libs__interval__V_139_139;
#line 936 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_140_140;
#line 936 "interval.m"
              MR_Word backend_libs__interval__V_141_141;
#line 936 "interval.m"
              MR_Word backend_libs__interval__V_142_142;
#line 936 "interval.m"
              MR_Word backend_libs__interval__V_144_144;
#line 936 "interval.m"
              MR_Word backend_libs__interval__StartAnchor_181;
#line 936 "interval.m"
              MR_Word backend_libs__interval__EndAnchor_182;
#line 936 "interval.m"
              MR_Word backend_libs__interval__StartInserts_183;
#line 936 "interval.m"
              MR_Word backend_libs__interval__Goal1_184;
#line 941 "interval.m"
              MR_Word backend_libs__interval__V_47_47;
#line 946 "interval.m"
              MR_Word backend_libs__interval__V_51_51;
#line 948 "interval.m"
              MR_Word backend_libs__interval__V_52_52;

#line 937 "interval.m"
              {
#line 937 "interval.m"
                backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 0, backend_libs__interval__Goal0_9, &backend_libs__interval__StartAnchor_181, &backend_libs__interval__EndAnchor_182);
              }
#line 938 "interval.m"
              {
#line 938 "interval.m"
                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Vars0_40, &backend_libs__interval__Vars_44);
              }
#line 939 "interval.m"
              {
#line 939 "interval.m"
                backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Cond0_41, &backend_libs__interval__Cond_45, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_135_135, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, &backend_libs__interval__STATE_VARIABLE_VarRename_136_136, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 941 "interval.m"
              {
#line 941 "interval.m"
                backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Then0_42, &backend_libs__interval__Then_46, backend_libs__interval__STATE_VARIABLE_VarInfo_135_135, &backend_libs__interval__STATE_VARIABLE_VarInfo_137_137, backend_libs__interval__STATE_VARIABLE_VarRename_136_136, &backend_libs__interval__V_47_47, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 943 "interval.m"
              {
#line 943 "interval.m"
                backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__StartAnchor_181, &backend_libs__interval__StartInserts_183);
              }
#line 11659 "backend_libs.interval.c"
              backend_libs__interval__TypeInfo_203_203 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 944 "interval.m"
              {
#line 944 "interval.m"
                backend_libs__interval__V_139_139 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_203_203, backend_libs__interval__TypeInfo_203_203);
              }
#line 944 "interval.m"
              {
#line 944 "interval.m"
                backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_137_137, &backend_libs__interval__STATE_VARIABLE_VarInfo_138_138, backend_libs__interval__V_139_139, &backend_libs__interval__VarRenameElse_48, backend_libs__interval__StartInserts_183, backend_libs__interval__MaybeFeature_14, &backend_libs__interval__StartInsertGoals_49);
              }
#line 946 "interval.m"
              {
#line 946 "interval.m"
                backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Else0_43, &backend_libs__interval__Else1_50, backend_libs__interval__STATE_VARIABLE_VarInfo_138_138, &backend_libs__interval__STATE_VARIABLE_VarInfo_140_140, backend_libs__interval__VarRenameElse_48, &backend_libs__interval__V_51_51, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 948 "interval.m"
              backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Else0_43, (MR_Integer) 0)));
#line 948 "interval.m"
              backend_libs__interval__ElseGoalInfo0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Else0_43, (MR_Integer) 1)));
#line 949 "interval.m"
              {
#line 949 "interval.m"
                backend_libs__interval__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "interval.m"
                MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 0) = ((MR_Box) (backend_libs__interval__Else1_50));
#line 949 "interval.m"
                MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 949 "interval.m"
              }
#line 949 "interval.m"
              {
#line 949 "interval.m"
                backend_libs__interval__V_141_141 = mercury__list__append_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, backend_libs__interval__StartInsertGoals_49, backend_libs__interval__V_142_142);
              }
#line 949 "interval.m"
              {
#line 949 "interval.m"
                hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_141_141, backend_libs__interval__ElseGoalInfo0_53, &backend_libs__interval__Else_54);
              }
#line 951 "interval.m"
              {
#line 951 "interval.m"
                backend_libs__interval__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 951 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 951 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 1) = ((MR_Box) (backend_libs__interval__Vars_44));
#line 951 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 2) = ((MR_Box) (backend_libs__interval__Cond_45));
#line 951 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 3) = ((MR_Box) (backend_libs__interval__Then_46));
#line 951 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 4) = ((MR_Box) (backend_libs__interval__Else_54));
#line 951 "interval.m"
              }
#line 951 "interval.m"
              {
#line 951 "interval.m"
                backend_libs__interval__Goal1_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 951 "interval.m"
                MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_184, 0) = ((MR_Box) (backend_libs__interval__V_144_144));
#line 951 "interval.m"
                MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_184, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 951 "interval.m"
              }
#line 952 "interval.m"
              {
#line 952 "interval.m"
                backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_182, &backend_libs__interval__EndInserts_55);
              }
#line 953 "interval.m"
              {
#line 953 "interval.m"
                backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_184, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_140_140, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__EndInserts_55, backend_libs__interval__MaybeFeature_14);
#line 953 "interval.m"
                return;
              }
#line 936 "interval.m"
            }
#line 895 "interval.m"
            break;
#line 895 "interval.m"
          case (MR_Integer) 7:
#line 1025 "interval.m"
            {
#line 1026 "interval.m"
              {
#line 1026 "interval.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.record_decisions_in_goal\'/8", (MR_String) "shorthand");
#line 1026 "interval.m"
                return;
              }
#line 1025 "interval.m"
            }
#line 895 "interval.m"
            break;
#line 895 "interval.m"
        }
#line 895 "interval.m"
        break;
#line 895 "interval.m"
    }
#line 887 "interval.m"
  }
#line 881 "interval.m"
}

#line 857 "interval.m"
static void MR_CALL 
backend_libs__interval__record_model_non_anchor_3_p_0(
#line 857 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 857 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 857 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9)
#line 857 "interval.m"
{
#line 860 "interval.m"
  {
#line 860 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 860 "interval.m"
    MR_Word backend_libs__interval__ModelNonAnchors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 860 "interval.m"
    MR_Word backend_libs__interval__ModelNonAnchors_7;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_27_27;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_36_36;

#line 862 "interval.m"
    {
#line 862 "interval.m"
      mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Anchor_4)), backend_libs__interval__ModelNonAnchors0_6, &backend_libs__interval__ModelNonAnchors_7);
    }
#line 863 "interval.m"
    backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 863 "interval.m"
    backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 863 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 863 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 863 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 863 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 863 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 863 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 863 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 863 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 863 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 863 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 863 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 863 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 863 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 863 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 863 "interval.m"
    {
#line 863 "interval.m"
      MR_Word base;
#line 863 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 863 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = base;
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_26_26));
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_27_27));
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__ModelNonAnchors_7));
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 863 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 863 "interval.m"
    }
#line 860 "interval.m"
  }
#line 857 "interval.m"
}

#line 840 "interval.m"
static void MR_CALL 
backend_libs__interval__require_access_3_p_0(
#line 840 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 840 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 840 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9)
#line 840 "interval.m"
{
#line 843 "interval.m"
  {
#line 843 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 843 "interval.m"
    MR_Word backend_libs__interval__AccessedLater0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 843 "interval.m"
    MR_Word backend_libs__interval__AccessedLater_7;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_27_27;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_28_28;

#line 845 "interval.m"
    {
#line 845 "interval.m"
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_4, backend_libs__interval__AccessedLater0_6, &backend_libs__interval__AccessedLater_7);
    }
#line 846 "interval.m"
    backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 846 "interval.m"
    backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 846 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 846 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 846 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 846 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 846 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 846 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 846 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 846 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 846 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 846 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 846 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 846 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 846 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 846 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 846 "interval.m"
    {
#line 846 "interval.m"
      MR_Word base;
#line 846 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 846 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = base;
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_26_26));
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_27_27));
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__AccessedLater_7));
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 846 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 846 "interval.m"
    }
#line 843 "interval.m"
  }
#line 840 "interval.m"
}

#line 832 "interval.m"
static void MR_CALL 
backend_libs__interval__require_flushed_3_p_0(
#line 832 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 832 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 832 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9)
#line 832 "interval.m"
{
#line 835 "interval.m"
  {
#line 835 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 835 "interval.m"
    MR_Word backend_libs__interval__FlushedLater0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 835 "interval.m"
    MR_Word backend_libs__interval__FlushedLater_7;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_27_27;

#line 837 "interval.m"
    {
#line 837 "interval.m"
      backend_libs__interval__FlushedLater_7 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__FlushedLater0_6, backend_libs__interval__Vars_4);
    }
#line 838 "interval.m"
    backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 838 "interval.m"
    backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 838 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 838 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 838 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 838 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 838 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 838 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 838 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 838 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 838 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 838 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 838 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 838 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 838 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 838 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 838 "interval.m"
    {
#line 838 "interval.m"
      MR_Word base;
#line 838 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 838 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = base;
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_26_26));
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__FlushedLater_7));
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 838 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 838 "interval.m"
    }
#line 835 "interval.m"
  }
#line 832 "interval.m"
}

#line 825 "interval.m"
static void MR_CALL 
backend_libs__interval__require_in_regs_3_p_0(
#line 825 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 825 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 825 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8)
#line 825 "interval.m"
{
#line 828 "interval.m"
  {
#line 828 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 828 "interval.m"
    MR_Word backend_libs__interval__CurIntervalId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 6)));
#line 829 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 0)));
#line 829 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 1)));
#line 829 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 2)));
#line 829 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 3)));
#line 829 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 4)));
#line 829 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 5)));
#line 829 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 7)));
#line 829 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 8)));
#line 829 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 9)));
#line 829 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 10)));
#line 829 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 11)));
#line 829 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 12)));
#line 829 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 13)));
#line 829 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 14)));
#line 829 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 15)));

#line 830 "interval.m"
    {
#line 830 "interval.m"
      backend_libs__interval__record_interval_vars_4_p_0(backend_libs__interval__CurIntervalId_6, backend_libs__interval__Vars_4, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_8);
#line 830 "interval.m"
      return;
    }
#line 828 "interval.m"
  }
#line 825 "interval.m"
}

#line 782 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_no_succ_3_p_0(
#line 782 "interval.m"
  MR_Word backend_libs__interval__Id_4,
#line 782 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 782 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10)
#line 782 "interval.m"
{
#line 785 "interval.m"
  {
#line 785 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 785 "interval.m"
    MR_Word backend_libs__interval__SuccMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 785 "interval.m"
    MR_Word backend_libs__interval__SuccMap_8;
#line 786 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 786 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 786 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 786 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 786 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 786 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 786 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 786 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 786 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 786 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 786 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 786 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 786 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 786 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 786 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 787 "interval.m"
    MR_Word backend_libs__interval___Succ0_7;
#line 787 "interval.m"
    MR_Box backend_libs__interval__conv0__Succ0_7;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_45_45;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 792 "interval.m"
    MR_Word backend_libs__interval__V_44_44;

#line 787 "interval.m"
    {
#line 787 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__SuccMap0_6, ((MR_Box) (backend_libs__interval__Id_4)), &backend_libs__interval__conv0__Succ0_7);
    }
#line 787 "interval.m"
    if (backend_libs__interval__succeeded)
#line 787 "interval.m"
      {
#line 787 "interval.m"
        backend_libs__interval___Succ0_7 = ((MR_Word) backend_libs__interval__conv0__Succ0_7);
#line 787 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 787 "interval.m"
      }
#line 789 "interval.m"
    if (backend_libs__interval__succeeded)
#line 788 "interval.m"
      {
#line 788 "interval.m"
        {
#line 788 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.record_interval_no_succ\'/3", (MR_String) "already in succ map");
#line 788 "interval.m"
          return;
        }
#line 788 "interval.m"
      }
#line 789 "interval.m"
    else
#line 790 "interval.m"
      {
#line 790 "interval.m"
        {
#line 790 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], ((MR_Box) (backend_libs__interval__Id_4)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), backend_libs__interval__SuccMap0_6, &backend_libs__interval__SuccMap_8);
        }
#line 790 "interval.m"
      }
#line 792 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 792 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 792 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 792 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 792 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 792 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 792 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 792 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 792 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 792 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 792 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 792 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 792 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 792 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 792 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 792 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 792 "interval.m"
    {
#line 792 "interval.m"
      MR_Word base;
#line 792 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 792 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_10 = base;
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__SuccMap_8));
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 792 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 792 "interval.m"
    }
#line 785 "interval.m"
  }
#line 782 "interval.m"
}

#line 770 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_succ_4_p_0(
#line 770 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 770 "interval.m"
  MR_Word backend_libs__interval__Succ_6,
#line 770 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 770 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12)
#line 770 "interval.m"
{
#line 773 "interval.m"
  {
#line 773 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 773 "interval.m"
    MR_Word backend_libs__interval__SuccMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 773 "interval.m"
    MR_Word backend_libs__interval__SuccMap_10;
#line 774 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 774 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 774 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 774 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 774 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 774 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 774 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 774 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 774 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 774 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 774 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 774 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 774 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 774 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 774 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 777 "interval.m"
    MR_Word backend_libs__interval__Succ0_9;
#line 775 "interval.m"
    MR_Box backend_libs__interval__conv0_Succ0_9;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 780 "interval.m"
    MR_Word backend_libs__interval__V_45_45;

#line 775 "interval.m"
    {
#line 775 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__SuccMap0_8, ((MR_Box) (backend_libs__interval__Id_5)), &backend_libs__interval__conv0_Succ0_9);
    }
#line 775 "interval.m"
    if (backend_libs__interval__succeeded)
#line 775 "interval.m"
      {
#line 775 "interval.m"
        backend_libs__interval__Succ0_9 = ((MR_Word) backend_libs__interval__conv0_Succ0_9);
#line 775 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 775 "interval.m"
      }
#line 777 "interval.m"
    if (backend_libs__interval__succeeded)
#line 776 "interval.m"
      {
#line 776 "interval.m"
        MR_Word backend_libs__interval__V_13_13;

#line 776 "interval.m"
        {
#line 776 "interval.m"
          backend_libs__interval__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_13_13, 0) = ((MR_Box) (backend_libs__interval__Succ_6));
#line 776 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_13_13, 1) = ((MR_Box) (backend_libs__interval__Succ0_9));
#line 776 "interval.m"
        }
#line 776 "interval.m"
        {
#line 776 "interval.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__V_13_13)), backend_libs__interval__SuccMap0_8, &backend_libs__interval__SuccMap_10);
        }
#line 776 "interval.m"
      }
#line 777 "interval.m"
    else
#line 778 "interval.m"
      {
#line 778 "interval.m"
        MR_Word backend_libs__interval__V_14_14;

#line 778 "interval.m"
        {
#line 778 "interval.m"
          backend_libs__interval__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_14_14, 0) = ((MR_Box) (backend_libs__interval__Succ_6));
#line 778 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 778 "interval.m"
        }
#line 778 "interval.m"
        {
#line 778 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__V_14_14)), backend_libs__interval__SuccMap0_8, &backend_libs__interval__SuccMap_10);
        }
#line 778 "interval.m"
      }
#line 780 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 780 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 780 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 780 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 780 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 780 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 780 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 780 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 780 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 780 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 780 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 780 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 780 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 780 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 780 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 780 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 780 "interval.m"
    {
#line 780 "interval.m"
      MR_Word base;
#line 780 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 780 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_12 = base;
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__SuccMap_10));
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 780 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 780 "interval.m"
    }
#line 773 "interval.m"
  }
#line 770 "interval.m"
}

#line 762 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_start_4_p_0(
#line 762 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 762 "interval.m"
  MR_Word backend_libs__interval__Start_6,
#line 762 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 762 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11)
#line 762 "interval.m"
{
#line 765 "interval.m"
  {
#line 765 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 765 "interval.m"
    MR_Word backend_libs__interval__StartMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 765 "interval.m"
    MR_Word backend_libs__interval__StartMap_9;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_39_39;

#line 767 "interval.m"
    {
#line 767 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__Start_6)), backend_libs__interval__StartMap0_8, &backend_libs__interval__StartMap_9);
    }
#line 768 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 768 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 768 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 768 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 768 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 768 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 768 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 768 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 768 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 768 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 768 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 768 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 768 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 768 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 768 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 768 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 768 "interval.m"
    {
#line 768 "interval.m"
      MR_Word base;
#line 768 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 768 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_11 = base;
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__StartMap_9));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 768 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 768 "interval.m"
    }
#line 765 "interval.m"
  }
#line 762 "interval.m"
}

#line 754 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_end_4_p_0(
#line 754 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 754 "interval.m"
  MR_Word backend_libs__interval__End_6,
#line 754 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 754 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11)
#line 754 "interval.m"
{
#line 757 "interval.m"
  {
#line 757 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 757 "interval.m"
    MR_Word backend_libs__interval__EndMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 757 "interval.m"
    MR_Word backend_libs__interval__EndMap_9;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_40_40;

#line 759 "interval.m"
    {
#line 759 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__End_6)), backend_libs__interval__EndMap0_8, &backend_libs__interval__EndMap_9);
    }
#line 760 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 760 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 760 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 760 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 760 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 760 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 760 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 760 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 760 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 760 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 760 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 760 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 760 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 760 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 760 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 760 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 760 "interval.m"
    {
#line 760 "interval.m"
      MR_Word base;
#line 760 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 760 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_11 = base;
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__EndMap_9));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 760 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 760 "interval.m"
    }
#line 757 "interval.m"
  }
#line 754 "interval.m"
}

#line 733 "interval.m"
static void MR_CALL 
backend_libs__interval__record_branch_end_info_3_p_0(
#line 733 "interval.m"
  MR_Word backend_libs__interval__GoalId_4,
#line 733 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 733 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13)
#line 733 "interval.m"
{
#line 736 "interval.m"
  {
#line 736 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 736 "interval.m"
    MR_Word backend_libs__interval__FlushedLater_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 736 "interval.m"
    MR_Word backend_libs__interval__AccessedLater_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 736 "interval.m"
    MR_Word backend_libs__interval__CurInterval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 736 "interval.m"
    MR_Word backend_libs__interval__BranchEndMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 736 "interval.m"
    MR_Word backend_libs__interval__BranchEndInfo_10;
#line 736 "interval.m"
    MR_Word backend_libs__interval__BranchEndMap_11;
#line 737 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 737 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 737 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 737 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 737 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 737 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 737 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 737 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 737 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 737 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 737 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 737 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 743 "interval.m"
    MR_Word backend_libs__interval__V_79_79;

#line 741 "interval.m"
    {
#line 741 "interval.m"
      backend_libs__interval__BranchEndInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__BranchEndInfo_10, 0) = ((MR_Box) (backend_libs__interval__FlushedLater_6));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__BranchEndInfo_10, 1) = ((MR_Box) (backend_libs__interval__AccessedLater_7));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__BranchEndInfo_10, 2) = ((MR_Box) (backend_libs__interval__CurInterval_8));
#line 741 "interval.m"
    }
#line 742 "interval.m"
    {
#line 742 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ((MR_Box) (backend_libs__interval__GoalId_4)), ((MR_Box) (backend_libs__interval__BranchEndInfo_10)), backend_libs__interval__BranchEndMap0_9, &backend_libs__interval__BranchEndMap_11);
    }
#line 743 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 743 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 743 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 743 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 743 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 743 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 743 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 743 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 743 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 743 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 743 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 743 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 743 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 743 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 743 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 743 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 743 "interval.m"
    {
#line 743 "interval.m"
      MR_Word base;
#line 743 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 743 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_13 = base;
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__BranchEndMap_11));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_84_84));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_85_85));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_86_86));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_87_87));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_88_88));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_89_89));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_90_90));
#line 743 "interval.m"
    }
#line 736 "interval.m"
  }
#line 733 "interval.m"
}

#line 721 "interval.m"
static void MR_CALL 
backend_libs__interval__new_interval_id_3_p_0(
#line 721 "interval.m"
  MR_Word * backend_libs__interval__Id_4,
#line 721 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 721 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12)
#line 721 "interval.m"
{
#line 724 "interval.m"
  {
#line 724 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 724 "interval.m"
    MR_Word backend_libs__interval__Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 724 "interval.m"
    MR_Word backend_libs__interval__IntervalVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 724 "interval.m"
    MR_Integer backend_libs__interval__Num_8;
#line 724 "interval.m"
    MR_Word backend_libs__interval__Counter_9;
#line 724 "interval.m"
    MR_Word backend_libs__interval__IntervalVars_10;
#line 724 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 724 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 724 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 724 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 724 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 724 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 724 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 724 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 724 "interval.m"
    MR_Word backend_libs__interval__V_54_54;
#line 724 "interval.m"
    MR_Word backend_libs__interval__V_55_55;
#line 724 "interval.m"
    MR_Word backend_libs__interval__V_56_56;
#line 724 "interval.m"
    MR_Word backend_libs__interval__V_57_57;
#line 724 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 724 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 724 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 730 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 730 "interval.m"
    MR_Word backend_libs__interval__V_60_60;

#line 727 "interval.m"
    {
#line 727 "interval.m"
      mercury__counter__allocate_3_p_0(&backend_libs__interval__Num_8, backend_libs__interval__Counter0_6, &backend_libs__interval__Counter_9);
    }
#line 728 "interval.m"
    *backend_libs__interval__Id_4 = (MR_Word) backend_libs__interval__Num_8;
#line 729 "interval.m"
    {
#line 729 "interval.m"
      backend_libs__interval__V_13_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 729 "interval.m"
    {
#line 729 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (*backend_libs__interval__Id_4)), ((MR_Box) (backend_libs__interval__V_13_13)), backend_libs__interval__IntervalVars0_7, &backend_libs__interval__IntervalVars_10);
    }
#line 730 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 730 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 730 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 730 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 730 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 730 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 730 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 730 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 730 "interval.m"
    backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 730 "interval.m"
    backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 730 "interval.m"
    backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 730 "interval.m"
    backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 730 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 730 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 730 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 730 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 731 "interval.m"
    {
#line 731 "interval.m"
      MR_Word base;
#line 731 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 731 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_12 = base;
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_50_50));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_52_52));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__Counter_9));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_54_54));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_55_55));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_56_56));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_57_57));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_58_58));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_59_59));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__IntervalVars_10));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_61_61));
#line 731 "interval.m"
    }
#line 724 "interval.m"
  }
#line 721 "interval.m"
}

#line 715 "interval.m"
static void MR_CALL 
backend_libs__interval__set_cur_interval_3_p_0(
#line 715 "interval.m"
  MR_Word backend_libs__interval__CurInterval_4,
#line 715 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 715 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7)
#line 715 "interval.m"
{
#line 719 "interval.m"
  {
#line 719 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0)));
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1)));
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2)));
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3)));
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4)));
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5)));
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7)));
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 8)));
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9)));
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10)));
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11)));
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12)));
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13)));
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14)));
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15)));
#line 719 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6)));

#line 719 "interval.m"
    {
#line 719 "interval.m"
      MR_Word base;
#line 719 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 719 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_7 = base;
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__CurInterval_4));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_16_16));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_17_17));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_18_18));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 719 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_24_24));
#line 719 "interval.m"
    }
#line 719 "interval.m"
  }
#line 715 "interval.m"
}

#line 711 "interval.m"
static void MR_CALL 
backend_libs__interval__get_cur_interval_2_p_0(
#line 711 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 711 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3)
#line 711 "interval.m"
{
#line 713 "interval.m"
  {
#line 713 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 0)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 1)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 2)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 3)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 4)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 5)));
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_10_10;
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_11_11;
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_12_12;
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 713 "interval.m"
    MR_Word backend_libs__interval__V_18_18;

#line 713 "interval.m"
    *backend_libs__interval__HeadVar__1_1 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 6)));
#line 713 "interval.m"
    backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 7)));
#line 713 "interval.m"
    backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 8)));
#line 713 "interval.m"
    backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 9)));
#line 713 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 10)));
#line 713 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 11)));
#line 713 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 12)));
#line 713 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 13)));
#line 713 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 14)));
#line 713 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 15)));
#line 713 "interval.m"
  }
#line 711 "interval.m"
}

#line 701 "interval.m"
static void MR_CALL 
backend_libs__interval__gather_interval_vars_4_p_0(
#line 701 "interval.m"
  MR_Word backend_libs__interval__IntervalVarMap_5,
#line 701 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6,
#line 701 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_0_9,
#line 701 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_10)
#line 701 "interval.m"
{
#line 704 "interval.m"
  {
#line 704 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 704 "interval.m"
    MR_Word backend_libs__interval__IntervalVars_8;
#line 705 "interval.m"
    MR_Box backend_libs__interval__conv0_IntervalVars_8;

#line 705 "interval.m"
    {
#line 705 "interval.m"
      mercury__map__lookup_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__IntervalVarMap_5, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv0_IntervalVars_8);
    }
#line 705 "interval.m"
    backend_libs__interval__IntervalVars_8 = ((MR_Word) backend_libs__interval__conv0_IntervalVars_8);
#line 706 "interval.m"
    {
#line 706 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_10 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_0_9, backend_libs__interval__IntervalVars_8);
    }
#line 704 "interval.m"
  }
#line 701 "interval.m"
}

#line 681 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1(
#line 681 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 681 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 681 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 681 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 681 "interval.m"
{
#line 681 "interval.m"
  {
#line 681 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 681 "interval.m"
    MR_Word backend_libs__interval__conv0_STATE_VARIABLE_OpenIntervalVars_10;

#line 681 "interval.m"
    {
#line 681 "interval.m"
      backend_libs__interval__gather_interval_vars_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2), &backend_libs__interval__conv0_STATE_VARIABLE_OpenIntervalVars_10);
    }
#line 681 "interval.m"
    *backend_libs__interval__wrapper_arg_3 = ((MR_Box) (backend_libs__interval__conv0_STATE_VARIABLE_OpenIntervalVars_10));
#line 681 "interval.m"
  }
#line 681 "interval.m"
}

#line 674 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(
#line 674 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 674 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17,
#line 674 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_18)
#line 674 "interval.m"
{
#line 677 "interval.m"
  {
#line 677 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 677 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_87_87;
#line 677 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_88_88;
#line 677 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 9)));
#line 677 "interval.m"
    MR_Word backend_libs__interval__IntervalVarMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 14)));
#line 677 "interval.m"
    MR_Word backend_libs__interval__CurOpenIntervals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 8)));
#line 677 "interval.m"
    MR_Word backend_libs__interval__CurOpenIntervalVars_9;
#line 677 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowMap_16;
#line 677 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 677 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 678 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 0)));
#line 678 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 1)));
#line 678 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 2)));
#line 678 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 3)));
#line 678 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 4)));
#line 678 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 5)));
#line 678 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 6)));
#line 678 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 7)));
#line 678 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 10)));
#line 678 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 11)));
#line 678 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 12)));
#line 678 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 13)));
#line 678 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 15)));
#line 681 "interval.m"
    MR_Box backend_libs__interval__conv1_CurOpenIntervalVars_9;
#line 693 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowInfo0_10;
#line 683 "interval.m"
    MR_Box backend_libs__interval__conv2_AnchorFollowInfo0_10;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 699 "interval.m"
    MR_Word backend_libs__interval__V_77_77;

#line 681 "interval.m"
    {
#line 681 "interval.m"
      backend_libs__interval__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 681 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 0) = ((MR_Box) (&backend_libs__interval_scalar_common_4[1]));
#line 681 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 1) = ((MR_Box) (backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1));
#line 681 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 681 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 3) = ((MR_Box) (backend_libs__interval__IntervalVarMap_7));
#line 681 "interval.m"
    }
#line 13807 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 682 "interval.m"
    {
#line 682 "interval.m"
      backend_libs__interval__V_20_20 = parse_tree__set_of_var__init_0_f_0(backend_libs__interval__TypeCtorInfo_87_87);
    }
#line 13814 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_88_88 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 681 "interval.m"
    {
#line 681 "interval.m"
      mercury__set__fold_4_p_0(backend_libs__interval__TypeCtorInfo_88_88, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__V_19_19, backend_libs__interval__CurOpenIntervals_8, ((MR_Box) (backend_libs__interval__V_20_20)), &backend_libs__interval__conv1_CurOpenIntervalVars_9);
    }
#line 681 "interval.m"
    backend_libs__interval__CurOpenIntervalVars_9 = ((MR_Word) backend_libs__interval__conv1_CurOpenIntervalVars_9);
#line 683 "interval.m"
    {
#line 683 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, backend_libs__interval__AnchorFollowMap0_6, ((MR_Box) (backend_libs__interval__Anchor_4)), &backend_libs__interval__conv2_AnchorFollowInfo0_10);
    }
#line 683 "interval.m"
    if (backend_libs__interval__succeeded)
#line 683 "interval.m"
      {
#line 683 "interval.m"
        backend_libs__interval__AnchorFollowInfo0_10 = ((MR_Word) backend_libs__interval__conv2_AnchorFollowInfo0_10);
#line 683 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 683 "interval.m"
      }
#line 693 "interval.m"
    if (backend_libs__interval__succeeded)
#line 685 "interval.m"
      {
#line 685 "interval.m"
        MR_Word backend_libs__interval__OpenIntervalVars0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo0_10, (MR_Integer) 0)));
#line 685 "interval.m"
        MR_Word backend_libs__interval__OpenIntervals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo0_10, (MR_Integer) 1)));
#line 685 "interval.m"
        MR_Word backend_libs__interval__OpenIntervalVars_13;
#line 685 "interval.m"
        MR_Word backend_libs__interval__OpenIntervals_14;
#line 685 "interval.m"
        MR_Word backend_libs__interval__AnchorFollowInfo_15;

#line 686 "interval.m"
        {
#line 686 "interval.m"
          backend_libs__interval__OpenIntervalVars_13 = parse_tree__set_of_var__union_2_f_0(backend_libs__interval__TypeCtorInfo_87_87, backend_libs__interval__OpenIntervalVars0_11, backend_libs__interval__CurOpenIntervalVars_9);
        }
#line 688 "interval.m"
        {
#line 688 "interval.m"
          backend_libs__interval__OpenIntervals_14 = mercury__set__union_2_f_0(backend_libs__interval__TypeCtorInfo_88_88, backend_libs__interval__OpenIntervals0_12, backend_libs__interval__CurOpenIntervals_8);
        }
#line 689 "interval.m"
        {
#line 689 "interval.m"
          backend_libs__interval__AnchorFollowInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 689 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_15, 0) = ((MR_Box) (backend_libs__interval__OpenIntervalVars_13));
#line 689 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_15, 1) = ((MR_Box) (backend_libs__interval__OpenIntervals_14));
#line 689 "interval.m"
        }
#line 691 "interval.m"
        {
#line 691 "interval.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, ((MR_Box) (backend_libs__interval__Anchor_4)), ((MR_Box) (backend_libs__interval__AnchorFollowInfo_15)), backend_libs__interval__AnchorFollowMap0_6, &backend_libs__interval__AnchorFollowMap_16);
        }
#line 685 "interval.m"
      }
#line 693 "interval.m"
    else
#line 695 "interval.m"
      {
#line 695 "interval.m"
        MR_Word backend_libs__interval__AnchorFollowInfo_22;

#line 694 "interval.m"
        {
#line 694 "interval.m"
          backend_libs__interval__AnchorFollowInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 694 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_22, 0) = ((MR_Box) (backend_libs__interval__CurOpenIntervalVars_9));
#line 694 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_22, 1) = ((MR_Box) (backend_libs__interval__CurOpenIntervals_8));
#line 694 "interval.m"
        }
#line 696 "interval.m"
        {
#line 696 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, ((MR_Box) (backend_libs__interval__Anchor_4)), ((MR_Box) (backend_libs__interval__AnchorFollowInfo_22)), backend_libs__interval__AnchorFollowMap0_6, &backend_libs__interval__AnchorFollowMap_16);
        }
#line 695 "interval.m"
      }
#line 699 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 0)));
#line 699 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 1)));
#line 699 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 2)));
#line 699 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 3)));
#line 699 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 4)));
#line 699 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 5)));
#line 699 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 6)));
#line 699 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 7)));
#line 699 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 8)));
#line 699 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 9)));
#line 699 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 10)));
#line 699 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 11)));
#line 699 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 12)));
#line 699 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 13)));
#line 699 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 14)));
#line 699 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 15)));
#line 699 "interval.m"
    {
#line 699 "interval.m"
      MR_Word base;
#line 699 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 699 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_18 = base;
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__AnchorFollowMap_16));
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 699 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 699 "interval.m"
    }
#line 677 "interval.m"
  }
#line 674 "interval.m"
}

#line 668 "interval.m"
static void MR_CALL 
backend_libs__interval__one_open_interval_3_p_0(
#line 668 "interval.m"
  MR_Word backend_libs__interval__IntervalId_4,
#line 668 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 668 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7)
#line 668 "interval.m"
{
#line 671 "interval.m"
  {
#line 671 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 671 "interval.m"
    MR_Word backend_libs__interval__V_9_9;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_10_10;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_11_11;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_12_12;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_22_22;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_23_23;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_24_24;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_25_25;
#line 672 "interval.m"
    MR_Word backend_libs__interval__V_18_18;

#line 672 "interval.m"
    {
#line 672 "interval.m"
      backend_libs__interval__V_9_9 = mercury__set__make_singleton_set_1_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (backend_libs__interval__IntervalId_4)));
    }
#line 672 "interval.m"
    backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0)));
#line 672 "interval.m"
    backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1)));
#line 672 "interval.m"
    backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2)));
#line 672 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3)));
#line 672 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4)));
#line 672 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5)));
#line 672 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6)));
#line 672 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7)));
#line 672 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 8)));
#line 672 "interval.m"
    backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9)));
#line 672 "interval.m"
    backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10)));
#line 672 "interval.m"
    backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11)));
#line 672 "interval.m"
    backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12)));
#line 672 "interval.m"
    backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13)));
#line 672 "interval.m"
    backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14)));
#line 672 "interval.m"
    backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15)));
#line 672 "interval.m"
    {
#line 672 "interval.m"
      MR_Word base;
#line 672 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 672 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_7 = base;
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_15_15));
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_16_16));
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_17_17));
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_24_24));
#line 672 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_25_25));
#line 672 "interval.m"
    }
#line 671 "interval.m"
  }
#line 668 "interval.m"
}

#line 663 "interval.m"
static void MR_CALL 
backend_libs__interval__no_open_intervals_2_p_0(
#line 663 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4,
#line 663 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_5)
#line 663 "interval.m"
{
#line 665 "interval.m"
  {
#line 665 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 665 "interval.m"
    MR_Word backend_libs__interval__V_7_7;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_8_8;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_9_9;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_10_10;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_11_11;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_12_12;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_18_18;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_22_22;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_23_23;
#line 666 "interval.m"
    MR_Word backend_libs__interval__V_16_16;

#line 666 "interval.m"
    {
#line 666 "interval.m"
      backend_libs__interval__V_7_7 = mercury__set__init_0_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0);
    }
#line 666 "interval.m"
    backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 0)));
#line 666 "interval.m"
    backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 1)));
#line 666 "interval.m"
    backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 2)));
#line 666 "interval.m"
    backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 3)));
#line 666 "interval.m"
    backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 4)));
#line 666 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 5)));
#line 666 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 6)));
#line 666 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 7)));
#line 666 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 8)));
#line 666 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 9)));
#line 666 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 10)));
#line 666 "interval.m"
    backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 11)));
#line 666 "interval.m"
    backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 12)));
#line 666 "interval.m"
    backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 13)));
#line 666 "interval.m"
    backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 14)));
#line 666 "interval.m"
    backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 15)));
#line 666 "interval.m"
    {
#line 666 "interval.m"
      MR_Word base;
#line 666 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 666 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_5 = base;
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_8_8));
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_15_15));
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_7_7));
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_17_17));
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_18_18));
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 666 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 666 "interval.m"
    }
#line 665 "interval.m"
  }
#line 663 "interval.m"
}

#line 657 "interval.m"
static void MR_CALL 
backend_libs__interval__set_open_intervals_3_p_0(
#line 657 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_4,
#line 657 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 657 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7)
#line 657 "interval.m"
{
#line 661 "interval.m"
  {
#line 661 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0)));
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1)));
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2)));
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3)));
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4)));
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5)));
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6)));
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7)));
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9)));
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10)));
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11)));
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12)));
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13)));
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14)));
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15)));
#line 661 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 8)));

#line 661 "interval.m"
    {
#line 661 "interval.m"
      MR_Word base;
#line 661 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 661 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_7 = base;
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_15_15));
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_16_16));
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__OpenIntervals_4));
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_18_18));
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 661 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_24_24));
#line 661 "interval.m"
    }
#line 661 "interval.m"
  }
#line 657 "interval.m"
}

#line 652 "interval.m"
static void MR_CALL 
backend_libs__interval__get_open_intervals_2_p_0(
#line 652 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3,
#line 652 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_4)
#line 652 "interval.m"
{
#line 655 "interval.m"
  {
#line 655 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 0)));
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 1)));
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 2)));
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 3)));
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 4)));
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 5)));
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 6)));
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 7)));
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_18_18;
#line 655 "interval.m"
    MR_Word backend_libs__interval__V_19_19;

#line 655 "interval.m"
    *backend_libs__interval__OpenIntervals_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 8)));
#line 655 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 9)));
#line 655 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 10)));
#line 655 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 11)));
#line 655 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 12)));
#line 655 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 13)));
#line 655 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 14)));
#line 655 "interval.m"
    backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 15)));
#line 655 "interval.m"
  }
#line 652 "interval.m"
}

#line 619 "interval.m"
static void MR_CALL 
backend_libs__interval__reached_cond_then_3_p_0(
#line 619 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_4,
#line 619 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 619 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13)
#line 619 "interval.m"
{
#line 622 "interval.m"
  {
#line 622 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 622 "interval.m"
    MR_Word backend_libs__interval__GoalId_6;
#line 622 "interval.m"
    MR_Word backend_libs__interval__ThenStartId_7;
#line 622 "interval.m"
    MR_Word backend_libs__interval__CondThenAnchor_8;
#line 622 "interval.m"
    MR_Word backend_libs__interval__CondTailId_9;
#line 622 "interval.m"
    MR_Word backend_libs__interval__OpenIntervals0_10;
#line 622 "interval.m"
    MR_Word backend_libs__interval__OpenIntervals_11;
#line 622 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14;
#line 622 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_15_15;
#line 622 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_16_16;
#line 622 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17;
#line 622 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18;
#line 622 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19;
#line 622 "interval.m"
    MR_Word backend_libs__interval__CurInterval_26;
#line 622 "interval.m"
    MR_Word backend_libs__interval__CondEndMap0_27;
#line 622 "interval.m"
    MR_Word backend_libs__interval__CondEndMap_28;
#line 749 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 749 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 749 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 749 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 749 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 749 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 749 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 749 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 749 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 749 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 749 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 749 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 749 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 749 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_60_60;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_65_65;

#line 623 "interval.m"
    {
#line 623 "interval.m"
      backend_libs__interval__GoalId_6 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_4);
    }
#line 749 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 749 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 749 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 749 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 749 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 749 "interval.m"
    backend_libs__interval__CondEndMap0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 749 "interval.m"
    backend_libs__interval__CurInterval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 749 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 749 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 749 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 749 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 749 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 749 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 749 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 749 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 749 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 751 "interval.m"
    {
#line 751 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (backend_libs__interval__GoalId_6)), ((MR_Box) (backend_libs__interval__CurInterval_26)), backend_libs__interval__CondEndMap0_27, &backend_libs__interval__CondEndMap_28);
    }
#line 752 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 752 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 752 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 752 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 752 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 752 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 752 "interval.m"
    backend_libs__interval__ThenStartId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 752 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 752 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 752 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 752 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 752 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 752 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 752 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 752 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 752 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 752 "interval.m"
    {
#line 752 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 0) = ((MR_Box) (backend_libs__interval__V_60_60));
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 1) = ((MR_Box) (backend_libs__interval__V_61_61));
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 2) = ((MR_Box) (backend_libs__interval__V_62_62));
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 3) = ((MR_Box) (backend_libs__interval__V_63_63));
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 4) = ((MR_Box) (backend_libs__interval__V_64_64));
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 5) = ((MR_Box) (backend_libs__interval__CondEndMap_28));
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 6) = ((MR_Box) (backend_libs__interval__ThenStartId_7));
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 7) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 8) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 9) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 10) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 11) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 12) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 13) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 14) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 752 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 15) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 752 "interval.m"
    }
#line 628 "interval.m"
    {
#line 628 "interval.m"
      backend_libs__interval__CondThenAnchor_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 628 "interval.m"
      MR_hl_field(MR_mktag(2), backend_libs__interval__CondThenAnchor_8, 0) = ((MR_Box) (backend_libs__interval__GoalId_6));
#line 628 "interval.m"
    }
#line 626 "interval.m"
    {
#line 626 "interval.m"
      backend_libs__interval__record_interval_start_4_p_0(backend_libs__interval__ThenStartId_7, backend_libs__interval__CondThenAnchor_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_15_15);
    }
#line 627 "interval.m"
    {
#line 627 "interval.m"
      backend_libs__interval__new_interval_id_3_p_0(&backend_libs__interval__CondTailId_9, backend_libs__interval__STATE_VARIABLE_IntervalInfo_15_15, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_16_16);
    }
#line 629 "interval.m"
    {
#line 629 "interval.m"
      backend_libs__interval__record_interval_end_4_p_0(backend_libs__interval__CondTailId_9, backend_libs__interval__CondThenAnchor_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_16_16, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17);
    }
#line 630 "interval.m"
    {
#line 630 "interval.m"
      backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__CondTailId_9, backend_libs__interval__ThenStartId_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18);
    }
#line 631 "interval.m"
    {
#line 631 "interval.m"
      backend_libs__interval__set_cur_interval_3_p_0(backend_libs__interval__CondTailId_9, backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19);
    }
#line 632 "interval.m"
    {
#line 632 "interval.m"
      backend_libs__interval__get_open_intervals_2_p_0(backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, &backend_libs__interval__OpenIntervals0_10);
    }
#line 633 "interval.m"
    {
#line 633 "interval.m"
      mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (backend_libs__interval__CondTailId_9)), backend_libs__interval__OpenIntervals0_10, &backend_libs__interval__OpenIntervals_11);
    }
#line 634 "interval.m"
    {
#line 634 "interval.m"
      backend_libs__interval__set_open_intervals_3_p_0(backend_libs__interval__OpenIntervals_11, backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_13);
#line 634 "interval.m"
      return;
    }
#line 622 "interval.m"
  }
#line 619 "interval.m"
}

#line 592 "interval.m"
static void MR_CALL 
backend_libs__interval__enter_branch_tail_4_p_0(
#line 592 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_5,
#line 592 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 592 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 592 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10)
#line 592 "interval.m"
{
#line 595 "interval.m"
  {
#line 595 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 595 "interval.m"
    MR_Word backend_libs__interval__BranchTailId_8;
#line 595 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11;
#line 595 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_12_12;
#line 595 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_13_13;
#line 595 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14;
#line 595 "interval.m"
    MR_Word backend_libs__interval__Counter0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 595 "interval.m"
    MR_Word backend_libs__interval__IntervalVars0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 595 "interval.m"
    MR_Integer backend_libs__interval__Num_22;
#line 595 "interval.m"
    MR_Word backend_libs__interval__Counter_23;
#line 595 "interval.m"
    MR_Word backend_libs__interval__IntervalVars_24;
#line 595 "interval.m"
    MR_Word backend_libs__interval__V_25_25;
#line 595 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 595 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 595 "interval.m"
    MR_Word backend_libs__interval__V_60_60;
#line 595 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 595 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 595 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 595 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 595 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 595 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 595 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 595 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 595 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 595 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 595 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 725 "interval.m"
    MR_Word backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 730 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 730 "interval.m"
    MR_Word backend_libs__interval__V_72_72;

#line 727 "interval.m"
    {
#line 727 "interval.m"
      mercury__counter__allocate_3_p_0(&backend_libs__interval__Num_22, backend_libs__interval__Counter0_20, &backend_libs__interval__Counter_23);
    }
#line 728 "interval.m"
    backend_libs__interval__BranchTailId_8 = (MR_Word) backend_libs__interval__Num_22;
#line 729 "interval.m"
    {
#line 729 "interval.m"
      backend_libs__interval__V_25_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 729 "interval.m"
    {
#line 729 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__BranchTailId_8)), ((MR_Box) (backend_libs__interval__V_25_25)), backend_libs__interval__IntervalVars0_21, &backend_libs__interval__IntervalVars_24);
    }
#line 730 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 730 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 730 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 730 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 730 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 730 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 730 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 730 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 730 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 730 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 730 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 730 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 730 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 730 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 730 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 730 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 731 "interval.m"
    {
#line 731 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 0) = ((MR_Box) (backend_libs__interval__V_58_58));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 1) = ((MR_Box) (backend_libs__interval__V_59_59));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 2) = ((MR_Box) (backend_libs__interval__V_60_60));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 3) = ((MR_Box) (backend_libs__interval__V_61_61));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 4) = ((MR_Box) (backend_libs__interval__V_62_62));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 5) = ((MR_Box) (backend_libs__interval__V_63_63));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 6) = ((MR_Box) (backend_libs__interval__V_64_64));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 7) = ((MR_Box) (backend_libs__interval__Counter_23));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 8) = ((MR_Box) (backend_libs__interval__V_66_66));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 9) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 10) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 11) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 12) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 13) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 14) = ((MR_Box) (backend_libs__interval__IntervalVars_24));
#line 731 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 15) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 731 "interval.m"
    }
#line 597 "interval.m"
    {
#line 597 "interval.m"
      backend_libs__interval__record_interval_end_4_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__EndAnchor_5, backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_12_12);
    }
#line 598 "interval.m"
    {
#line 598 "interval.m"
      backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__AfterId_6, backend_libs__interval__STATE_VARIABLE_IntervalInfo_12_12, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_13_13);
    }
#line 599 "interval.m"
    {
#line 599 "interval.m"
      backend_libs__interval__set_cur_interval_3_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_13_13, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14);
    }
#line 600 "interval.m"
    {
#line 600 "interval.m"
      backend_libs__interval__one_open_interval_3_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, backend_libs__interval__STATE_VARIABLE_IntervalInfo_10);
#line 600 "interval.m"
      return;
    }
#line 595 "interval.m"
  }
#line 592 "interval.m"
}

#line 524 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_cases_10_p_0(
#line 524 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 524 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 524 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_2,
#line 524 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_3,
#line 524 "interval.m"
  MR_Word backend_libs__interval__BeforeId_4,
#line 524 "interval.m"
  MR_Word backend_libs__interval__AfterId_5,
#line 524 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__6_6,
#line 524 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 524 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8,
#line 524 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_9,
#line 524 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_10)
#line 524 "interval.m"
{
#line 529 "interval.m"
  {
#line 529 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 529 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "interval.m"
      {
#line 529 "interval.m"
        *backend_libs__interval__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 529 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_Acc_10 = backend_libs__interval__STATE_VARIABLE_Acc_0_9;
#line 529 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_IntervalInfo_8 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7;
#line 529 "interval.m"
      }
#line 529 "interval.m"
    else
#line 532 "interval.m"
      {
#line 532 "interval.m"
        MR_Word backend_libs__interval__Case_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 532 "interval.m"
        MR_Word backend_libs__interval__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 532 "interval.m"
        MR_Word backend_libs__interval__OpenIntervals_27;
#line 532 "interval.m"
        MR_Word backend_libs__interval__OpenIntervalsList_28;
#line 532 "interval.m"
        MR_Word backend_libs__interval__Goal_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case_21, (MR_Integer) 2)));
#line 532 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 532 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39;
#line 532 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_40_40;
#line 532 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_42_42;
#line 532 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_43_43;
#line 533 "interval.m"
        MR_Word backend_libs__interval___MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case_21, (MR_Integer) 0)));
#line 533 "interval.m"
        MR_Word backend_libs__interval___OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case_21, (MR_Integer) 1)));

#line 534 "interval.m"
        {
#line 534 "interval.m"
          backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_3, backend_libs__interval__AfterId_5, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
        }
#line 535 "interval.m"
        {
#line 535 "interval.m"
          backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Goal_33, backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, backend_libs__interval__STATE_VARIABLE_Acc_0_9, &backend_libs__interval__STATE_VARIABLE_Acc_40_40);
        }
#line 536 "interval.m"
        {
#line 536 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, backend_libs__interval__StartAnchor_2, backend_libs__interval__BeforeId_4, &backend_libs__interval__OpenIntervals_27, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_42_42, backend_libs__interval__STATE_VARIABLE_Acc_40_40, &backend_libs__interval__STATE_VARIABLE_Acc_43_43);
        }
#line 538 "interval.m"
        {
#line 538 "interval.m"
          backend_libs__interval__build_interval_info_in_cases_10_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Cases_22, backend_libs__interval__StartAnchor_2, backend_libs__interval__EndAnchor_3, backend_libs__interval__BeforeId_4, backend_libs__interval__AfterId_5, &backend_libs__interval__OpenIntervalsList_28, backend_libs__interval__STATE_VARIABLE_IntervalInfo_42_42, backend_libs__interval__STATE_VARIABLE_IntervalInfo_8, backend_libs__interval__STATE_VARIABLE_Acc_43_43, backend_libs__interval__STATE_VARIABLE_Acc_10);
        }
#line 532 "interval.m"
        {
#line 532 "interval.m"
          MR_Word base;
#line 532 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "interval.m"
          *backend_libs__interval__HeadVar__6_6 = base;
#line 532 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__OpenIntervals_27));
#line 532 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__OpenIntervalsList_28));
#line 532 "interval.m"
        }
#line 532 "interval.m"
      }
#line 529 "interval.m"
  }
#line 524 "interval.m"
}

#line 508 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_disj_11_p_0(
#line 508 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 508 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 508 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_2,
#line 508 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_3,
#line 508 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_4,
#line 508 "interval.m"
  MR_Word backend_libs__interval__BeforeId_5,
#line 508 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 508 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7,
#line 508 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 508 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9,
#line 508 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_10,
#line 508 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_11)
#line 508 "interval.m"
{
#line 513 "interval.m"
  {
#line 513 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 513 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "interval.m"
      {
#line 513 "interval.m"
        {
#line 513 "interval.m"
          *backend_libs__interval__HeadVar__7_7 = mercury__set__init_0_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0);
        }
#line 513 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_Acc_11 = backend_libs__interval__STATE_VARIABLE_Acc_0_10;
#line 513 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8;
#line 513 "interval.m"
      }
#line 513 "interval.m"
    else
#line 516 "interval.m"
      {
#line 516 "interval.m"
        MR_Word backend_libs__interval__Goal_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 516 "interval.m"
        MR_Word backend_libs__interval__Goals_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 516 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 516 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39;
#line 516 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_40_40;
#line 516 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41;
#line 516 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_42_42;
#line 521 "interval.m"
        MR_Word backend_libs__interval___OpenIntervals_33;

#line 517 "interval.m"
        {
#line 517 "interval.m"
          backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_4, backend_libs__interval__AfterId_6, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
        }
#line 518 "interval.m"
        {
#line 518 "interval.m"
          backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Goal_23, backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, backend_libs__interval__STATE_VARIABLE_Acc_0_10, &backend_libs__interval__STATE_VARIABLE_Acc_40_40);
        }
#line 519 "interval.m"
        {
#line 519 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(backend_libs__interval__MaybeNeedsFlush_2, backend_libs__interval__StartAnchor_3, backend_libs__interval__BeforeId_5, backend_libs__interval__HeadVar__7_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, backend_libs__interval__STATE_VARIABLE_Acc_40_40, &backend_libs__interval__STATE_VARIABLE_Acc_42_42);
        }
#line 521 "interval.m"
        {
#line 521 "interval.m"
          backend_libs__interval__build_interval_info_in_disj_11_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Goals_24, (MR_Integer) 0, backend_libs__interval__StartAnchor_3, backend_libs__interval__EndAnchor_4, backend_libs__interval__BeforeId_5, backend_libs__interval__AfterId_6, &backend_libs__interval___OpenIntervals_33, backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, backend_libs__interval__STATE_VARIABLE_IntervalInfo_9, backend_libs__interval__STATE_VARIABLE_Acc_42_42, backend_libs__interval__STATE_VARIABLE_Acc_11);
        }
#line 516 "interval.m"
      }
#line 513 "interval.m"
  }
#line 508 "interval.m"
}

#line 425 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(
#line 425 "interval.m"
  MR_Word backend_libs__interval__ModuleInfo_1,
#line 425 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 425 "interval.m"
{
#line 428 "interval.m"
  while (MR_TRUE)
#line 428 "interval.m"
    {
#line 428 "interval.m"
      /* tailcall optimized into a loop */
#line 428 "interval.m"
      {
#line 428 "interval.m"
        MR_bool backend_libs__interval__succeeded;

#line 428 "interval.m"
        if ((backend_libs__interval__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "interval.m"
          backend_libs__interval__succeeded = MR_TRUE;
#line 428 "interval.m"
        else
#line 429 "interval.m"
          {
#line 429 "interval.m"
            MR_Word backend_libs__interval__ArgMode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 429 "interval.m"
            MR_Word backend_libs__interval__ArgsModes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 429 "interval.m"
            MR_Word backend_libs__interval__InitCell_7;
#line 429 "interval.m"
            MR_Word backend_libs__interval__InitArg_8;
#line 429 "interval.m"
            MR_Word backend_libs__interval__FinalCell_9;
#line 429 "interval.m"
            MR_Word backend_libs__interval__FinalArg_10;
#line 429 "interval.m"
            MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__ArgMode_5, (MR_Integer) 0)));
#line 429 "interval.m"
            MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__ArgMode_5, (MR_Integer) 1)));
#line 429 "interval.m"
            MR_Word backend_libs__interval__V_13_13;
#line 429 "interval.m"
            MR_Word backend_libs__interval__V_14_14;

#line 430 "interval.m"
            backend_libs__interval__InitCell_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_11_11, (MR_Integer) 0)));
#line 430 "interval.m"
            backend_libs__interval__InitArg_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_11_11, (MR_Integer) 1)));
#line 430 "interval.m"
            backend_libs__interval__FinalCell_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_12_12, (MR_Integer) 0)));
#line 430 "interval.m"
            backend_libs__interval__FinalArg_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_12_12, (MR_Integer) 1)));
#line 431 "interval.m"
            {
#line 431 "interval.m"
              backend_libs__interval__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 431 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__V_13_13, 0) = ((MR_Box) (backend_libs__interval__InitCell_7));
#line 431 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__V_13_13, 1) = ((MR_Box) (backend_libs__interval__FinalCell_9));
#line 431 "interval.m"
            }
#line 431 "interval.m"
            {
#line 431 "interval.m"
              backend_libs__interval__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__V_13_13);
            }
#line 429 "interval.m"
            if (backend_libs__interval__succeeded)
#line 429 "interval.m"
              {
#line 432 "interval.m"
                {
#line 432 "interval.m"
                  backend_libs__interval__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 432 "interval.m"
                  MR_hl_field(MR_mktag(0), backend_libs__interval__V_14_14, 0) = ((MR_Box) (backend_libs__interval__InitArg_8));
#line 432 "interval.m"
                  MR_hl_field(MR_mktag(0), backend_libs__interval__V_14_14, 1) = ((MR_Box) (backend_libs__interval__FinalArg_10));
#line 432 "interval.m"
                }
#line 432 "interval.m"
                {
#line 432 "interval.m"
                  backend_libs__interval__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__V_14_14);
                }
#line 429 "interval.m"
                if (backend_libs__interval__succeeded)
#line 429 "interval.m"
                  {
#line 433 "interval.m"
                    {
#line 433 "interval.m"
                      backend_libs__interval__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__FinalCell_9);
                    }
#line 429 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 429 "interval.m"
                      {
#line 434 "interval.m"
                        {
#line 434 "interval.m"
                          backend_libs__interval__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__FinalArg_10);
                        }
#line 429 "interval.m"
                        if (backend_libs__interval__succeeded)
#line 435 "interval.m"
                          {
#line 435 "interval.m"
                            /* direct tailcall eliminated */
#line 435 "interval.m"
                            {
#line 435 "interval.m"
                              MR_Word backend_libs__interval__HeadVar__2__tmp_copy_2 = backend_libs__interval__ArgsModes_6;

#line 435 "interval.m"
                              backend_libs__interval__HeadVar__2_2 = backend_libs__interval__HeadVar__2__tmp_copy_2;
#line 435 "interval.m"
                            }
#line 435 "interval.m"
                            continue;
#line 435 "interval.m"
                          }
#line 429 "interval.m"
                      }
#line 429 "interval.m"
                  }
#line 429 "interval.m"
              }
#line 429 "interval.m"
          }
#line 428 "interval.m"
        return backend_libs__interval__succeeded;
#line 428 "interval.m"
      }
#line 428 "interval.m"
      break;
#line 428 "interval.m"
    }
#line 425 "interval.m"
}

#line 183 "interval.m"
MR_Integer MR_CALL 
backend_libs__interval__interval_id_to_int_1_f_0(
#line 183 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1)
#line 183 "interval.m"
{
#line 1342 "interval.m"
  {
#line 1342 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1342 "interval.m"
    MR_Integer backend_libs__interval__Num_3 = (MR_Integer) backend_libs__interval__HeadVar__1_1;

#line 1342 "interval.m"
    return backend_libs__interval__Num_3;
#line 1342 "interval.m"
  }
#line 183 "interval.m"
}

#line 1340 "interval.m"
static void MR_CALL 
backend_libs__interval__write_int_list_3_p_0_1(
#line 1340 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1340 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1340 "interval.m"
{
#line 1340 "interval.m"
  {
#line 1340 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1340 "interval.m"
    {
#line 1340 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1340 "interval.m"
      return;
    }
#line 1340 "interval.m"
  }
#line 1340 "interval.m"
}

#line 181 "interval.m"
void MR_CALL 
backend_libs__interval__write_int_list_3_p_0(
#line 181 "interval.m"
  MR_Word backend_libs__interval__List_4)
#line 181 "interval.m"
{
#line 1339 "interval.m"
  {
#line 1339 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1340 "interval.m"
    {
#line 1340 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__List_4, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[15]);
#line 1340 "interval.m"
      return;
    }
#line 1339 "interval.m"
  }
#line 181 "interval.m"
}

#line 1268 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_2(
#line 1268 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1268 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1268 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1268 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1268 "interval.m"
{
#line 1268 "interval.m"
  {
#line 1268 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1268 "interval.m"
    {
#line 1268 "interval.m"
      backend_libs__interval__dump_anchor_follow_3_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
#line 1268 "interval.m"
      return;
    }
#line 1268 "interval.m"
  }
#line 1268 "interval.m"
}

#line 1264 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_1(
#line 1264 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1264 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1264 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1264 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1264 "interval.m"
{
#line 1264 "interval.m"
  {
#line 1264 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1264 "interval.m"
    {
#line 1264 "interval.m"
      backend_libs__interval__dump_interval_info_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__interval__wrapper_arg_1));
#line 1264 "interval.m"
      return;
    }
#line 1264 "interval.m"
  }
#line 1264 "interval.m"
}

#line 179 "interval.m"
void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0(
#line 179 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_4)
#line 179 "interval.m"
{
#line 1256 "interval.m"
  {
#line 1256 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_108_108 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_109_109 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_115_115;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__StartIds_6;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__EndIds_7;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__VarsIds_8;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__SuccIds_9;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__IntervalIds0_10;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__IntervalIds_11;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__AnchorFollows_12;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_18_18;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_22_22;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_54_54;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_55_55;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_56_56;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_57_57;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_60_60;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 1264 "interval.m"
    MR_Box backend_libs__interval__conv0_STATE_VARIABLE_IO_27_27;
#line 1266 "interval.m"
    MR_Word backend_libs__interval__V_93_93;
#line 1266 "interval.m"
    MR_Word backend_libs__interval__V_94_94;
#line 1266 "interval.m"
    MR_Word backend_libs__interval__V_95_95;
#line 1266 "interval.m"
    MR_Word backend_libs__interval__V_96_96;
#line 1266 "interval.m"
    MR_Word backend_libs__interval__V_97_97;
#line 1266 "interval.m"
    MR_Word backend_libs__interval__V_98_98;
#line 1266 "interval.m"
    MR_Word backend_libs__interval__V_99_99;
#line 1266 "interval.m"
    MR_Word backend_libs__interval__V_100_100;
#line 1266 "interval.m"
    MR_Word backend_libs__interval__V_101_101;
#line 1266 "interval.m"
    MR_Word backend_libs__interval__V_102_102;
#line 1266 "interval.m"
    MR_Word backend_libs__interval__V_103_103;
#line 1266 "interval.m"
    MR_Word backend_libs__interval__V_104_104;
#line 1266 "interval.m"
    MR_Word backend_libs__interval__V_105_105;
#line 1266 "interval.m"
    MR_Word backend_libs__interval__V_106_106;
#line 1266 "interval.m"
    MR_Word backend_libs__interval__V_107_107;
#line 1268 "interval.m"
    MR_Box backend_libs__interval__conv1_STATE_VARIABLE_IO_14;

#line 1257 "interval.m"
    {
#line 1257 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__TypeCtorInfo_109_109, backend_libs__interval__V_15_15, &backend_libs__interval__StartIds_6);
    }
#line 1258 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1258 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1258 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1258 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1258 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1258 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1258 "interval.m"
    backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1258 "interval.m"
    backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1258 "interval.m"
    backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1258 "interval.m"
    backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1258 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1258 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1258 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1258 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1258 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1258 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1258 "interval.m"
    {
#line 1258 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__TypeCtorInfo_109_109, backend_libs__interval__V_16_16, &backend_libs__interval__EndIds_7);
    }
#line 1259 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1259 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1259 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1259 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1259 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1259 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1259 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1259 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1259 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1259 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1259 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1259 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1259 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1259 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1259 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1259 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1259 "interval.m"
    {
#line 1259 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__V_17_17, &backend_libs__interval__VarsIds_8);
    }
#line 1260 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1260 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1260 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1260 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1260 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1260 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1260 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1260 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1260 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1260 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1260 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1260 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1260 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1260 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1260 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1260 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1260 "interval.m"
    {
#line 1260 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__V_18_18, &backend_libs__interval__SuccIds_9);
    }
#line 1261 "interval.m"
    {
#line 1261 "interval.m"
      backend_libs__interval__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_22_22, 0) = ((MR_Box) (backend_libs__interval__SuccIds_9));
#line 1261 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1261 "interval.m"
    }
#line 1261 "interval.m"
    {
#line 1261 "interval.m"
      backend_libs__interval__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 0) = ((MR_Box) (backend_libs__interval__VarsIds_8));
#line 1261 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 1) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 1261 "interval.m"
    }
#line 1261 "interval.m"
    {
#line 1261 "interval.m"
      backend_libs__interval__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_20_20, 0) = ((MR_Box) (backend_libs__interval__EndIds_7));
#line 1261 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_20_20, 1) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 1261 "interval.m"
    }
#line 1261 "interval.m"
    {
#line 1261 "interval.m"
      backend_libs__interval__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_19_19, 0) = ((MR_Box) (backend_libs__interval__StartIds_6));
#line 1261 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_19_19, 1) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 1261 "interval.m"
    }
#line 1261 "interval.m"
    {
#line 1261 "interval.m"
      mercury__list__condense_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__V_19_19, &backend_libs__interval__IntervalIds0_10);
    }
#line 1262 "interval.m"
    {
#line 1262 "interval.m"
      mercury__list__sort_and_remove_dups_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__IntervalIds0_10, &backend_libs__interval__IntervalIds_11);
    }
#line 1263 "interval.m"
    {
#line 1263 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "INTERVALS:\n");
    }
#line 1264 "interval.m"
    {
#line 1264 "interval.m"
      backend_libs__interval__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 0) = ((MR_Box) (&backend_libs__interval_scalar_common_4[0]));
#line 1264 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 1) = ((MR_Box) (backend_libs__interval__dump_interval_info_3_p_0_1));
#line 1264 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1264 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 3) = ((MR_Box) (backend_libs__interval__IntervalInfo_4));
#line 1264 "interval.m"
    }
#line 15778 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_115_115 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1264 "interval.m"
    {
#line 1264 "interval.m"
      mercury__list__foldl_4_p_2(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__TypeCtorInfo_115_115, backend_libs__interval__V_26_26, backend_libs__interval__IntervalIds_11, ((MR_Box) ((MR_Integer) 0)), &backend_libs__interval__conv0_STATE_VARIABLE_IO_27_27);
    }
#line 1266 "interval.m"
    backend_libs__interval__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1266 "interval.m"
    backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1266 "interval.m"
    backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1266 "interval.m"
    backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1266 "interval.m"
    backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1266 "interval.m"
    backend_libs__interval__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1266 "interval.m"
    backend_libs__interval__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1266 "interval.m"
    backend_libs__interval__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1266 "interval.m"
    backend_libs__interval__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1266 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1266 "interval.m"
    backend_libs__interval__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1266 "interval.m"
    backend_libs__interval__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1266 "interval.m"
    backend_libs__interval__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1266 "interval.m"
    backend_libs__interval__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1266 "interval.m"
    backend_libs__interval__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1266 "interval.m"
    backend_libs__interval__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1266 "interval.m"
    {
#line 1266 "interval.m"
      mercury__map__to_assoc_list_2_p_0(backend_libs__interval__TypeCtorInfo_109_109, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, backend_libs__interval__V_28_28, &backend_libs__interval__AnchorFollows_12);
    }
#line 1267 "interval.m"
    {
#line 1267 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\nANCHOR FOLLOW:\n");
    }
#line 1268 "interval.m"
    {
#line 1268 "interval.m"
      mercury__list__foldl_4_p_2((MR_Word) &backend_libs__interval_scalar_common_2[0], backend_libs__interval__TypeCtorInfo_115_115, (MR_Word) &backend_libs__interval_scalar_common_2[14], backend_libs__interval__AnchorFollows_12, ((MR_Box) ((MR_Integer) 0)), &backend_libs__interval__conv1_STATE_VARIABLE_IO_14);
    }
#line 1256 "interval.m"
  }
#line 179 "interval.m"
}

#line 176 "interval.m"
void MR_CALL 
backend_libs__interval__apply_headvar_correction_4_p_0(
#line 176 "interval.m"
  MR_Word backend_libs__interval__HeadVarSet_5,
#line 176 "interval.m"
  MR_Word backend_libs__interval__RenameMap_6,
#line 176 "interval.m"
  MR_Word backend_libs__interval__Goal0_7,
#line 176 "interval.m"
  MR_Word * backend_libs__interval__Goal_8)
#line 176 "interval.m"
{
#line 1219 "interval.m"
  {
#line 1219 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1219 "interval.m"
    MR_Word backend_libs__interval__TypeInfo_13_13;
#line 1219 "interval.m"
    MR_Word backend_libs__interval__HeadVars_9;
#line 1219 "interval.m"
    MR_Word backend_libs__interval__Subst_10;
#line 1219 "interval.m"
    MR_Word backend_libs__interval__V_11_11;

#line 1220 "interval.m"
    {
#line 1220 "interval.m"
      backend_libs__interval__HeadVars_9 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVarSet_5);
    }
#line 15868 "backend_libs.interval.c"
    backend_libs__interval__TypeInfo_13_13 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1221 "interval.m"
    {
#line 1221 "interval.m"
      backend_libs__interval__V_11_11 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_13_13, backend_libs__interval__TypeInfo_13_13);
    }
#line 1221 "interval.m"
    {
#line 1221 "interval.m"
      backend_libs__interval__build_headvar_subst_4_p_0(backend_libs__interval__HeadVars_9, backend_libs__interval__RenameMap_6, backend_libs__interval__V_11_11, &backend_libs__interval__Subst_10);
    }
#line 1222 "interval.m"
    {
#line 1222 "interval.m"
      backend_libs__interval__succeeded = mercury__map__is_empty_1_p_0(backend_libs__interval__TypeInfo_13_13, backend_libs__interval__TypeInfo_13_13, backend_libs__interval__Subst_10);
    }
#line 1224 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1223 "interval.m"
      *backend_libs__interval__Goal_8 = backend_libs__interval__Goal0_7;
#line 1224 "interval.m"
    else
#line 1225 "interval.m"
      {
#line 1225 "interval.m"
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__Subst_10, backend_libs__interval__Goal0_7, backend_libs__interval__Goal_8);
#line 1225 "interval.m"
        return;
      }
#line 1219 "interval.m"
  }
#line 176 "interval.m"
}

#line 162 "interval.m"
void MR_CALL 
backend_libs__interval__make_inserted_goal_9_p_0(
#line 162 "interval.m"
  MR_Word backend_libs__interval__VarSet0_10,
#line 162 "interval.m"
  MR_Word * backend_libs__interval__VarSet_11,
#line 162 "interval.m"
  MR_Word backend_libs__interval__VarTypes0_12,
#line 162 "interval.m"
  MR_Word * backend_libs__interval__VarTypes_13,
#line 162 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_RenameMap_0_20,
#line 162 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_RenameMap_21,
#line 162 "interval.m"
  MR_Word backend_libs__interval__InsertSpec_15,
#line 162 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_16,
#line 162 "interval.m"
  MR_Word * backend_libs__interval__Goal_17)
#line 162 "interval.m"
{
#line 1097 "interval.m"
  {
#line 1097 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1097 "interval.m"
    MR_Word backend_libs__interval__Info0_18;
#line 1097 "interval.m"
    MR_Word backend_libs__interval__Info_19;
#line 1097 "interval.m"
    MR_Word backend_libs__interval__Goal0_32;
#line 1097 "interval.m"
    MR_Word backend_libs__interval__VarsToExtract_33;
#line 1097 "interval.m"
    MR_Word backend_libs__interval__GoalExpr0_34;
#line 1097 "interval.m"
    MR_Word backend_libs__interval__GoalInfo0_35;
#line 1092 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 1092 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 1092 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 1092 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 1092 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 1092 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 1092 "interval.m"
    MR_Word backend_libs__interval__ArgVars_43;
#line 1092 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 1092 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 1070 "interval.m"
    MR_Word backend_libs__interval__Unification0_39;
#line 1071 "interval.m"
    MR_Word backend_libs__interval__V_45_45;

#line 1098 "interval.m"
    {
#line 1098 "interval.m"
      backend_libs__interval__Info0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1098 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, 0) = ((MR_Box) (backend_libs__interval__VarSet0_10));
#line 1098 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, 1) = ((MR_Box) (backend_libs__interval__VarTypes0_12));
#line 1098 "interval.m"
    }
#line 1067 "interval.m"
    backend_libs__interval__Goal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__InsertSpec_15, (MR_Integer) 0)));
#line 1067 "interval.m"
    backend_libs__interval__VarsToExtract_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__InsertSpec_15, (MR_Integer) 1)));
#line 1068 "interval.m"
    backend_libs__interval__GoalExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_32, (MR_Integer) 0)));
#line 1068 "interval.m"
    backend_libs__interval__GoalInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_32, (MR_Integer) 1)));
#line 1070 "interval.m"
    backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_34)) == (MR_mktag((MR_Integer) 1)));
#line 1070 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1070 "interval.m"
      {
#line 1070 "interval.m"
        backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 0)));
#line 1070 "interval.m"
        backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 1)));
#line 1070 "interval.m"
        backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 2)));
#line 1070 "interval.m"
        backend_libs__interval__Unification0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 3)));
#line 1070 "interval.m"
        backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 4)));
#line 1071 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__Unification0_39)) == (MR_mktag((MR_Integer) 1)));
#line 1071 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1071 "interval.m"
          {
#line 1071 "interval.m"
            backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 0)));
#line 1071 "interval.m"
            backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 1)));
#line 1071 "interval.m"
            backend_libs__interval__ArgVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 2)));
#line 1071 "interval.m"
            backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 3)));
#line 1071 "interval.m"
            backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 4)));
#line 1071 "interval.m"
            backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 5)));
#line 1071 "interval.m"
          }
#line 1070 "interval.m"
      }
#line 1092 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1073 "interval.m"
      {
#line 1073 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_65_80;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__Unification1_47;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__GoalExpr1_48;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__GoalInfo1_49;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__GoalInfo2_51;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__Goal2_52;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__VarSet0_53;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__VarTypes0_54;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__VarSet_55;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__VarTypes_56;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__NewRename_57;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__VoidRename_58;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__Goal3_59;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__V_62_62;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__V_63_63;

#line 1073 "interval.m"
        {
#line 1073 "interval.m"
          backend_libs__interval__Unification1_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 0) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 1073 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 1) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 1073 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 2) = ((MR_Box) (backend_libs__interval__ArgVars_43));
#line 1073 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 3) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 1073 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1073 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 5) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 1073 "interval.m"
        }
#line 1074 "interval.m"
        {
#line 1074 "interval.m"
          backend_libs__interval__GoalExpr1_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1074 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 0) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 1074 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 1) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 1074 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 2) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 1074 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 3) = ((MR_Box) (backend_libs__interval__Unification1_47));
#line 1074 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 4) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 1074 "interval.m"
        }
#line 1075 "interval.m"
        {
#line 1075 "interval.m"
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, backend_libs__interval__GoalInfo0_35, &backend_libs__interval__GoalInfo1_49);
        }
#line 1079 "interval.m"
        if ((backend_libs__interval__MaybeFeature_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1081 "interval.m"
          backend_libs__interval__GoalInfo2_51 = backend_libs__interval__GoalInfo1_49;
#line 1079 "interval.m"
        else
#line 1077 "interval.m"
          {
#line 1077 "interval.m"
            MR_Word backend_libs__interval__Feature_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeFeature_16, (MR_Integer) 0)));

#line 1078 "interval.m"
            {
#line 1078 "interval.m"
              hlds__hlds_goal__goal_info_add_feature_3_p_0(backend_libs__interval__Feature_50, backend_libs__interval__GoalInfo1_49, &backend_libs__interval__GoalInfo2_51);
            }
#line 1077 "interval.m"
          }
#line 1083 "interval.m"
        {
#line 1083 "interval.m"
          backend_libs__interval__Goal2_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1083 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_52, 0) = ((MR_Box) (backend_libs__interval__GoalExpr1_48));
#line 1083 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_52, 1) = ((MR_Box) (backend_libs__interval__GoalInfo2_51));
#line 1083 "interval.m"
        }
#line 1084 "interval.m"
        backend_libs__interval__VarSet0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, (MR_Integer) 0)));
#line 1084 "interval.m"
        backend_libs__interval__VarTypes0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, (MR_Integer) 1)));
#line 16127 "backend_libs.interval.c"
        backend_libs__interval__TypeInfo_65_80 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1086 "interval.m"
        {
#line 1086 "interval.m"
          backend_libs__interval__V_62_62 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_80, backend_libs__interval__TypeInfo_65_80);
        }
#line 1086 "interval.m"
        {
#line 1086 "interval.m"
          backend_libs__interval__V_63_63 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_80, backend_libs__interval__TypeInfo_65_80);
        }
#line 1085 "interval.m"
        {
#line 1085 "interval.m"
          backend_libs__interval__create_shadow_vars_10_p_0(backend_libs__interval__ArgVars_43, backend_libs__interval__VarsToExtract_33, backend_libs__interval__VarSet0_53, &backend_libs__interval__VarSet_55, backend_libs__interval__VarTypes0_54, &backend_libs__interval__VarTypes_56, backend_libs__interval__V_62_62, &backend_libs__interval__NewRename_57, backend_libs__interval__V_63_63, &backend_libs__interval__VoidRename_58);
        }
#line 1087 "interval.m"
        {
#line 1087 "interval.m"
          backend_libs__interval__Info_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, 0) = ((MR_Box) (backend_libs__interval__VarSet_55));
#line 1087 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, 1) = ((MR_Box) (backend_libs__interval__VarTypes_56));
#line 1087 "interval.m"
        }
#line 1088 "interval.m"
        {
#line 1088 "interval.m"
          mercury__map__old_merge_3_p_0(backend_libs__interval__TypeInfo_65_80, backend_libs__interval__TypeInfo_65_80, backend_libs__interval__STATE_VARIABLE_RenameMap_0_20, backend_libs__interval__NewRename_57, backend_libs__interval__STATE_VARIABLE_RenameMap_21);
        }
#line 1090 "interval.m"
        {
#line 1090 "interval.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*backend_libs__interval__STATE_VARIABLE_RenameMap_21, backend_libs__interval__Goal2_52, &backend_libs__interval__Goal3_59);
        }
#line 1091 "interval.m"
        {
#line 1091 "interval.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__VoidRename_58, backend_libs__interval__Goal3_59, backend_libs__interval__Goal_17);
        }
#line 1073 "interval.m"
      }
#line 1092 "interval.m"
    else
#line 1093 "interval.m"
      {
#line 1093 "interval.m"
        {
#line 1093 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.make_inserted_goal\'/7", (MR_String) "not a deconstruct");
#line 1093 "interval.m"
          return;
        }
#line 1093 "interval.m"
      }
#line 1101 "interval.m"
    *backend_libs__interval__VarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, (MR_Integer) 0)));
#line 1101 "interval.m"
    *backend_libs__interval__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, (MR_Integer) 1)));
#line 1097 "interval.m"
  }
#line 162 "interval.m"
}

#line 157 "interval.m"
void MR_CALL 
backend_libs__interval__record_decisions_in_goal_10_p_0(
#line 157 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_Goal_0_21,
#line 157 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_Goal_22,
#line 157 "interval.m"
  MR_Word backend_libs__interval__VarSet0_12,
#line 157 "interval.m"
  MR_Word * backend_libs__interval__VarSet_13,
#line 157 "interval.m"
  MR_Word backend_libs__interval__VarTypes0_14,
#line 157 "interval.m"
  MR_Word * backend_libs__interval__VarTypes_15,
#line 157 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_23,
#line 157 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_24,
#line 157 "interval.m"
  MR_Word backend_libs__interval__InsertMap_17,
#line 157 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_18)
#line 157 "interval.m"
{
#line 875 "interval.m"
  {
#line 875 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 875 "interval.m"
    MR_Word backend_libs__interval__Info0_19;
#line 875 "interval.m"
    MR_Word backend_libs__interval__Info_20;

#line 876 "interval.m"
    {
#line 876 "interval.m"
      backend_libs__interval__Info0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 876 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_19, 0) = ((MR_Box) (backend_libs__interval__VarSet0_12));
#line 876 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_19, 1) = ((MR_Box) (backend_libs__interval__VarTypes0_14));
#line 876 "interval.m"
    }
#line 877 "interval.m"
    {
#line 877 "interval.m"
      backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__STATE_VARIABLE_Goal_0_21, backend_libs__interval__STATE_VARIABLE_Goal_22, backend_libs__interval__Info0_19, &backend_libs__interval__Info_20, backend_libs__interval__STATE_VARIABLE_VarRename_0_23, backend_libs__interval__STATE_VARIABLE_VarRename_24, backend_libs__interval__InsertMap_17, backend_libs__interval__MaybeFeature_18);
    }
#line 879 "interval.m"
    *backend_libs__interval__VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_20, (MR_Integer) 0)));
#line 879 "interval.m"
    *backend_libs__interval__VarTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_20, (MR_Integer) 1)));
#line 875 "interval.m"
  }
#line 157 "interval.m"
}

#line 152 "interval.m"
void MR_CALL 
backend_libs__interval__delete_interval_vars_5_p_0(
#line 152 "interval.m"
  MR_Word backend_libs__interval__Id_6,
#line 152 "interval.m"
  MR_Word backend_libs__interval__ToDeleteVars_7,
#line 152 "interval.m"
  MR_Word * backend_libs__interval__DeletedVars_8,
#line 152 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18,
#line 152 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_19)
#line 152 "interval.m"
{
#line 805 "interval.m"
  {
#line 805 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 805 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_86_86 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 805 "interval.m"
    MR_Word backend_libs__interval__TypeInfo_87_87 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 805 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_88_88;
#line 805 "interval.m"
    MR_Word backend_libs__interval__VarsMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 14)));
#line 805 "interval.m"
    MR_Word backend_libs__interval__Vars0_11;
#line 805 "interval.m"
    MR_Word backend_libs__interval__Vars_12;
#line 805 "interval.m"
    MR_Word backend_libs__interval__VarsMap_13;
#line 805 "interval.m"
    MR_Word backend_libs__interval__DeleteMap0_14;
#line 805 "interval.m"
    MR_Word backend_libs__interval__DeleteMap_17;
#line 805 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 0)));
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 1)));
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 2)));
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 3)));
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 4)));
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 5)));
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 6)));
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 7)));
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 8)));
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 9)));
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 10)));
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 11)));
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 12)));
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 13)));
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 15)));
#line 807 "interval.m"
    MR_Box backend_libs__interval__conv0_Vars0_11;
#line 811 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 811 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 811 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 811 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 811 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 811 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 811 "interval.m"
    MR_Word backend_libs__interval__V_45_45;
#line 811 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 811 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 811 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 811 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 811 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 811 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 811 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 811 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 819 "interval.m"
    MR_Word backend_libs__interval__Deletions0_15;
#line 816 "interval.m"
    MR_Box backend_libs__interval__conv1_Deletions0_15;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 823 "interval.m"
    MR_Word backend_libs__interval__V_85_85;

#line 807 "interval.m"
    {
#line 807 "interval.m"
      mercury__map__lookup_3_p_0(backend_libs__interval__TypeCtorInfo_86_86, backend_libs__interval__TypeInfo_87_87, backend_libs__interval__VarsMap0_10, ((MR_Box) (backend_libs__interval__Id_6)), &backend_libs__interval__conv0_Vars0_11);
    }
#line 807 "interval.m"
    backend_libs__interval__Vars0_11 = ((MR_Word) backend_libs__interval__conv0_Vars0_11);
#line 16396 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 808 "interval.m"
    {
#line 808 "interval.m"
      *backend_libs__interval__DeletedVars_8 = parse_tree__set_of_var__intersect_2_f_0(backend_libs__interval__TypeCtorInfo_88_88, backend_libs__interval__Vars0_11, backend_libs__interval__ToDeleteVars_7);
    }
#line 809 "interval.m"
    {
#line 809 "interval.m"
      backend_libs__interval__Vars_12 = parse_tree__set_of_var__difference_2_f_0(backend_libs__interval__TypeCtorInfo_88_88, backend_libs__interval__Vars0_11, *backend_libs__interval__DeletedVars_8);
    }
#line 810 "interval.m"
    {
#line 810 "interval.m"
      mercury__map__det_update_4_p_0(backend_libs__interval__TypeCtorInfo_86_86, backend_libs__interval__TypeInfo_87_87, ((MR_Box) (backend_libs__interval__Id_6)), ((MR_Box) (backend_libs__interval__Vars_12)), backend_libs__interval__VarsMap0_10, &backend_libs__interval__VarsMap_13);
    }
#line 811 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 0)));
#line 811 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 1)));
#line 811 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 2)));
#line 811 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 3)));
#line 811 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 4)));
#line 811 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 5)));
#line 811 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 6)));
#line 811 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 7)));
#line 811 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 8)));
#line 811 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 9)));
#line 811 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 10)));
#line 811 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 11)));
#line 811 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 12)));
#line 811 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 13)));
#line 811 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 14)));
#line 811 "interval.m"
    backend_libs__interval__DeleteMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 15)));
#line 811 "interval.m"
    {
#line 811 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 0) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 1) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 2) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 3) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 4) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 5) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 6) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 7) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 8) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 9) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 10) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 11) = ((MR_Box) (backend_libs__interval__V_50_50));
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 12) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 13) = ((MR_Box) (backend_libs__interval__V_52_52));
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 14) = ((MR_Box) (backend_libs__interval__VarsMap_13));
#line 811 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 15) = ((MR_Box) (backend_libs__interval__DeleteMap0_14));
#line 811 "interval.m"
    }
#line 816 "interval.m"
    {
#line 816 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0(backend_libs__interval__TypeCtorInfo_86_86, (MR_Word) &backend_libs__interval_scalar_common_1[2], backend_libs__interval__DeleteMap0_14, ((MR_Box) (backend_libs__interval__Id_6)), &backend_libs__interval__conv1_Deletions0_15);
    }
#line 816 "interval.m"
    if (backend_libs__interval__succeeded)
#line 816 "interval.m"
      {
#line 816 "interval.m"
        backend_libs__interval__Deletions0_15 = ((MR_Word) backend_libs__interval__conv1_Deletions0_15);
#line 816 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 816 "interval.m"
      }
#line 819 "interval.m"
    if (backend_libs__interval__succeeded)
#line 817 "interval.m"
      {
#line 817 "interval.m"
        MR_Word backend_libs__interval__Deletions_16;

#line 817 "interval.m"
        {
#line 817 "interval.m"
          backend_libs__interval__Deletions_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 817 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_16, 0) = ((MR_Box) (*backend_libs__interval__DeletedVars_8));
#line 817 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_16, 1) = ((MR_Box) (backend_libs__interval__Deletions0_15));
#line 817 "interval.m"
        }
#line 818 "interval.m"
        {
#line 818 "interval.m"
          mercury__map__det_update_4_p_0(backend_libs__interval__TypeCtorInfo_86_86, (MR_Word) &backend_libs__interval_scalar_common_1[2], ((MR_Box) (backend_libs__interval__Id_6)), ((MR_Box) (backend_libs__interval__Deletions_16)), backend_libs__interval__DeleteMap0_14, &backend_libs__interval__DeleteMap_17);
        }
#line 817 "interval.m"
      }
#line 819 "interval.m"
    else
#line 820 "interval.m"
      {
#line 820 "interval.m"
        MR_Word backend_libs__interval__Deletions_23;

#line 820 "interval.m"
        {
#line 820 "interval.m"
          backend_libs__interval__Deletions_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_23, 0) = ((MR_Box) (*backend_libs__interval__DeletedVars_8));
#line 820 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 820 "interval.m"
        }
#line 821 "interval.m"
        {
#line 821 "interval.m"
          mercury__map__det_insert_4_p_0(backend_libs__interval__TypeCtorInfo_86_86, (MR_Word) &backend_libs__interval_scalar_common_1[2], ((MR_Box) (backend_libs__interval__Id_6)), ((MR_Box) (backend_libs__interval__Deletions_23)), backend_libs__interval__DeleteMap0_14, &backend_libs__interval__DeleteMap_17);
        }
#line 820 "interval.m"
      }
#line 823 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 0)));
#line 823 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 1)));
#line 823 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 2)));
#line 823 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 3)));
#line 823 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 4)));
#line 823 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 5)));
#line 823 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 6)));
#line 823 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 7)));
#line 823 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 8)));
#line 823 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 9)));
#line 823 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 10)));
#line 823 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 11)));
#line 823 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 12)));
#line 823 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 13)));
#line 823 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 14)));
#line 823 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 15)));
#line 823 "interval.m"
    {
#line 823 "interval.m"
      MR_Word base;
#line 823 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 823 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_19 = base;
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_84_84));
#line 823 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__DeleteMap_17));
#line 823 "interval.m"
    }
#line 805 "interval.m"
  }
#line 152 "interval.m"
}

#line 149 "interval.m"
void MR_CALL 
backend_libs__interval__record_interval_vars_4_p_0(
#line 149 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 149 "interval.m"
  MR_Word backend_libs__interval__NewVars_6,
#line 149 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 149 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13)
#line 149 "interval.m"
{
#line 794 "interval.m"
  {
#line 794 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 794 "interval.m"
    MR_Word backend_libs__interval__VarsMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 794 "interval.m"
    MR_Word backend_libs__interval__VarsMap_11;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 799 "interval.m"
    MR_Word backend_libs__interval__Vars0_9;
#line 796 "interval.m"
    MR_Box backend_libs__interval__conv0_Vars0_9;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 803 "interval.m"
    MR_Word backend_libs__interval__V_45_45;

#line 796 "interval.m"
    {
#line 796 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__VarsMap0_8, ((MR_Box) (backend_libs__interval__Id_5)), &backend_libs__interval__conv0_Vars0_9);
    }
#line 796 "interval.m"
    if (backend_libs__interval__succeeded)
#line 796 "interval.m"
      {
#line 796 "interval.m"
        backend_libs__interval__Vars0_9 = ((MR_Word) backend_libs__interval__conv0_Vars0_9);
#line 796 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 796 "interval.m"
      }
#line 799 "interval.m"
    if (backend_libs__interval__succeeded)
#line 797 "interval.m"
      {
#line 797 "interval.m"
        MR_Word backend_libs__interval__Vars_10;

#line 797 "interval.m"
        {
#line 797 "interval.m"
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__NewVars_6, backend_libs__interval__Vars0_9, &backend_libs__interval__Vars_10);
        }
#line 798 "interval.m"
        {
#line 798 "interval.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__Vars_10)), backend_libs__interval__VarsMap0_8, &backend_libs__interval__VarsMap_11);
        }
#line 797 "interval.m"
      }
#line 799 "interval.m"
    else
#line 800 "interval.m"
      {
#line 800 "interval.m"
        MR_Word backend_libs__interval__Vars_15;

#line 800 "interval.m"
        {
#line 800 "interval.m"
          backend_libs__interval__Vars_15 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__NewVars_6);
        }
#line 801 "interval.m"
        {
#line 801 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__Vars_15)), backend_libs__interval__VarsMap0_8, &backend_libs__interval__VarsMap_11);
        }
#line 800 "interval.m"
      }
#line 803 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 803 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 803 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 803 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 803 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 803 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 803 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 803 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 803 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 803 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 803 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 803 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 803 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 803 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 803 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 803 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 803 "interval.m"
    {
#line 803 "interval.m"
      MR_Word base;
#line 803 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 803 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_13 = base;
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__VarsMap_11));
#line 803 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 803 "interval.m"
    }
#line 794 "interval.m"
  }
#line 149 "interval.m"
}

#line 355 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_2(
#line 355 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 355 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 355 "interval.m"
{
#line 355 "interval.m"
  {
#line 355 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 355 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 355 "interval.m"
    MR_Word backend_libs__interval__conv1_HeadVar__2_2;

#line 355 "interval.m"
    {
#line 355 "interval.m"
      backend_libs__interval__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 355 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv1_HeadVar__2_2));
#line 355 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 355 "interval.m"
  }
#line 355 "interval.m"
}

#line 354 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_1(
#line 354 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 354 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 354 "interval.m"
{
#line 354 "interval.m"
  {
#line 354 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 354 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 354 "interval.m"
    MR_Word backend_libs__interval__conv0_HeadVar__2_2;

#line 354 "interval.m"
    {
#line 354 "interval.m"
      backend_libs__interval__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 354 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__2_2));
#line 354 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 354 "interval.m"
  }
#line 354 "interval.m"
}

#line 146 "interval.m"
void MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0(
#line 146 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361,
#line 146 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 146 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112,
#line 146 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_113,
#line 146 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_114,
#line 146 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_115)
#line 146 "interval.m"
{
#line 210 "interval.m"
  while (MR_TRUE)
#line 210 "interval.m"
    {
#line 210 "interval.m"
      /* tailcall optimized into a loop */
#line 210 "interval.m"
      {
#line 210 "interval.m"
        MR_bool backend_libs__interval__succeeded;
#line 210 "interval.m"
        MR_Word backend_libs__interval__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 210 "interval.m"
        MR_Word backend_libs__interval__GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));

#line 214 "interval.m"
#line 214 "interval.m"
        switch (MR_tag((MR_Word) backend_libs__interval__GoalExpr_6)) {
#line 214 "interval.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 214 "interval.m"
          case (MR_Integer) 0:
#line 250 "interval.m"
            {
#line 250 "interval.m"
              MR_Word backend_libs__interval__SubGoal_24 = (MR_Word) MR_body(((MR_Word) backend_libs__interval__GoalExpr_6), (MR_Integer) 0);
#line 250 "interval.m"
              MR_Word backend_libs__interval__V_196_196;
#line 250 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_198_198;
#line 250 "interval.m"
              MR_Box backend_libs__interval__STATE_VARIABLE_Acc_199_199;
#line 250 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_200_200;
#line 250 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_201_201;
#line 250 "interval.m"
              MR_Box backend_libs__interval__STATE_VARIABLE_Acc_202_202;
#line 250 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_204_204;
#line 250 "interval.m"
              MR_Word backend_libs__interval__StartAnchor_241;
#line 250 "interval.m"
              MR_Word backend_libs__interval__EndAnchor_242;
#line 250 "interval.m"
              MR_Word backend_libs__interval__BeforeId_243;
#line 250 "interval.m"
              MR_Word backend_libs__interval__AfterId_244;
#line 250 "interval.m"
              MR_Word backend_libs__interval__MaybeResumeVars_245;
#line 250 "interval.m"
              MR_Word backend_libs__interval__OpenIntervals_246;

#line 251 "interval.m"
              {
#line 251 "interval.m"
                backend_libs__interval__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 251 "interval.m"
                MR_hl_field(MR_mktag(1), backend_libs__interval__V_196_196, 0) = ((MR_Box) (backend_libs__interval__SubGoal_24));
#line 251 "interval.m"
              }
#line 251 "interval.m"
              {
#line 251 "interval.m"
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(backend_libs__interval__GoalInfo_7, backend_libs__interval__V_196_196, (MR_Integer) 3, &backend_libs__interval__StartAnchor_241, &backend_libs__interval__EndAnchor_242, &backend_libs__interval__BeforeId_243, &backend_libs__interval__AfterId_244, &backend_libs__interval__MaybeResumeVars_245, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_198_198, backend_libs__interval__STATE_VARIABLE_Acc_0_114, &backend_libs__interval__STATE_VARIABLE_Acc_199_199);
              }
#line 254 "interval.m"
              {
#line 254 "interval.m"
                backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_242, backend_libs__interval__AfterId_244, backend_libs__interval__STATE_VARIABLE_IntervalInfo_198_198, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_200_200);
              }
#line 255 "interval.m"
              {
#line 255 "interval.m"
                backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__SubGoal_24, backend_libs__interval__STATE_VARIABLE_IntervalInfo_200_200, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_201_201, backend_libs__interval__STATE_VARIABLE_Acc_199_199, &backend_libs__interval__STATE_VARIABLE_Acc_202_202);
              }
#line 256 "interval.m"
              {
#line 256 "interval.m"
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, backend_libs__interval__StartAnchor_241, backend_libs__interval__BeforeId_243, &backend_libs__interval__OpenIntervals_246, backend_libs__interval__STATE_VARIABLE_IntervalInfo_201_201, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_204_204, backend_libs__interval__STATE_VARIABLE_Acc_202_202, backend_libs__interval__STATE_VARIABLE_Acc_115);
              }
#line 258 "interval.m"
              {
#line 258 "interval.m"
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__StartAnchor_241, backend_libs__interval__BeforeId_243, backend_libs__interval__MaybeResumeVars_245, backend_libs__interval__OpenIntervals_246, backend_libs__interval__STATE_VARIABLE_IntervalInfo_204_204, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
#line 258 "interval.m"
                return;
              }
#line 250 "interval.m"
            }
#line 214 "interval.m"
            break;
#line 214 "interval.m"
          case (MR_Integer) 1:
#line 372 "interval.m"
            {
#line 372 "interval.m"
              MR_Word backend_libs__interval__Unification_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 372 "interval.m"
              MR_Word backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)));
#line 372 "interval.m"
              MR_Word backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 372 "interval.m"
              MR_Word backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 372 "interval.m"
              MR_Word backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));

#line 394 "interval.m"
#line 394 "interval.m"
              switch (MR_tag((MR_Word) backend_libs__interval__Unification_90)) {
#line 394 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 394 "interval.m"
                case (MR_Integer) 0:
#line 375 "interval.m"
                  {
#line 375 "interval.m"
                    MR_Word backend_libs__interval__CellVar_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 0)));
#line 375 "interval.m"
                    MR_Word backend_libs__interval__HowToConstruct_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 4)));
#line 375 "interval.m"
                    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_150_150;
#line 375 "interval.m"
                    MR_Word backend_libs__interval__V_151_151;
#line 375 "interval.m"
                    MR_Word backend_libs__interval__ArgVars_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 2)));
#line 374 "interval.m"
                    MR_Word backend_libs__interval___ConsId_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 374 "interval.m"
                    MR_Word backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 3)));
#line 374 "interval.m"
                    MR_Word backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 5)));
#line 374 "interval.m"
                    MR_Word backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 6)));

#line 379 "interval.m"
#line 379 "interval.m"
                    switch (MR_tag((MR_Word) backend_libs__interval__HowToConstruct_95)) {
#line 379 "interval.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 379 "interval.m"
                      case (MR_Integer) 0:
#line 379 "interval.m"
#line 379 "interval.m"
                        switch (MR_unmkbody(backend_libs__interval__HowToConstruct_95)) {
#line 379 "interval.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 379 "interval.m"
                          case (MR_Integer) 0:
#line 384 "interval.m"
                            {
#line 384 "interval.m"
                            }
#line 379 "interval.m"
                            break;
#line 379 "interval.m"
                          case (MR_Integer) 1:
#line 385 "interval.m"
                            {
#line 385 "interval.m"
                            }
#line 379 "interval.m"
                            break;
#line 379 "interval.m"
                        }
#line 379 "interval.m"
                        break;
#line 379 "interval.m"
                      case (MR_Integer) 1:
#line 377 "interval.m"
                        {
#line 378 "interval.m"
                          {
#line 378 "interval.m"
                            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "reuse");
#line 378 "interval.m"
                            return;
                          }
#line 377 "interval.m"
                        }
#line 379 "interval.m"
                        break;
#line 379 "interval.m"
                      case (MR_Integer) 2:
#line 381 "interval.m"
                        {
#line 382 "interval.m"
                          {
#line 382 "interval.m"
                            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "construct in region");
#line 382 "interval.m"
                            return;
                          }
#line 381 "interval.m"
                        }
#line 379 "interval.m"
                        break;
#line 379 "interval.m"
                    }
#line 388 "interval.m"
                    {
#line 388 "interval.m"
                      backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__ArgVars_273, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_150_150);
                    }
#line 389 "interval.m"
                    {
#line 389 "interval.m"
                      backend_libs__interval__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_151_151, 0) = ((MR_Box) (backend_libs__interval__CellVar_92));
#line 389 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_151_151, 1) = ((MR_Box) (backend_libs__interval__ArgVars_273));
#line 389 "interval.m"
                    }
#line 389 "interval.m"
                    {
#line 389 "interval.m"
                      backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_151_151, backend_libs__interval__STATE_VARIABLE_IntervalInfo_150_150, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                    }
#line 375 "interval.m"
                    *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 375 "interval.m"
                  }
#line 394 "interval.m"
                  break;
#line 394 "interval.m"
                case (MR_Integer) 1:
#line 396 "interval.m"
                  {
#line 396 "interval.m"
                    MR_Word backend_libs__interval__ConsId_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 396 "interval.m"
                    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137;
#line 396 "interval.m"
                    MR_Word backend_libs__interval__V_139_139;
#line 396 "interval.m"
                    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_140_140;
#line 396 "interval.m"
                    MR_Word backend_libs__interval__V_142_142;
#line 396 "interval.m"
                    MR_Word backend_libs__interval__ArgVars_274 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 2)));
#line 396 "interval.m"
                    MR_Word backend_libs__interval__ArgModes_275 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 3)));
#line 396 "interval.m"
                    MR_Word backend_libs__interval__IntParams_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 396 "interval.m"
                    MR_Word backend_libs__interval__ModuleInfo_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_276, (MR_Integer) 0)));
#line 396 "interval.m"
                    MR_Word backend_libs__interval__CellVar_278 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 0)));
#line 395 "interval.m"
                    MR_Word backend_libs__interval__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 4)));
#line 395 "interval.m"
                    MR_Word backend_libs__interval__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 5)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 398 "interval.m"
                    MR_Word backend_libs__interval__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_276, (MR_Integer) 1)));
#line 398 "interval.m"
                    MR_Word backend_libs__interval__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_276, (MR_Integer) 2)));

#line 399 "interval.m"
                    {
#line 399 "interval.m"
                      backend_libs__interval__succeeded = backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(backend_libs__interval__ModuleInfo_277, backend_libs__interval__ArgModes_275);
                    }
#line 402 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 401 "interval.m"
                      {
#line 401 "interval.m"
                        backend_libs__interval__use_cell_8_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__CellVar_278, backend_libs__interval__ArgVars_274, backend_libs__interval__ConsId_100, backend_libs__interval__HeadVar__1_1, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
                      }
#line 402 "interval.m"
                    else
#line 403 "interval.m"
                      {
#line 403 "interval.m"
                        *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 403 "interval.m"
                        backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112;
#line 403 "interval.m"
                      }
#line 405 "interval.m"
                    {
#line 405 "interval.m"
                      backend_libs__interval__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_139_139, 0) = ((MR_Box) (backend_libs__interval__CellVar_278));
#line 405 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 405 "interval.m"
                    }
#line 405 "interval.m"
                    {
#line 405 "interval.m"
                      backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__V_139_139, backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_140_140);
                    }
#line 406 "interval.m"
                    {
#line 406 "interval.m"
                      backend_libs__interval__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 0) = ((MR_Box) (backend_libs__interval__CellVar_278));
#line 406 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 1) = ((MR_Box) (backend_libs__interval__ArgVars_274));
#line 406 "interval.m"
                    }
#line 406 "interval.m"
                    {
#line 406 "interval.m"
                      backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_142_142, backend_libs__interval__STATE_VARIABLE_IntervalInfo_140_140, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
#line 406 "interval.m"
                      return;
                    }
#line 396 "interval.m"
                  }
#line 394 "interval.m"
                  break;
#line 394 "interval.m"
                case (MR_Integer) 2:
#line 408 "interval.m"
                  {
#line 408 "interval.m"
                    MR_Word backend_libs__interval__ToVar_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__Unification_90, (MR_Integer) 0)));
#line 408 "interval.m"
                    MR_Word backend_libs__interval__FromVar_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 408 "interval.m"
                    MR_Word backend_libs__interval__V_130_130;
#line 408 "interval.m"
                    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_131_131;
#line 408 "interval.m"
                    MR_Word backend_libs__interval__V_133_133;
#line 408 "interval.m"
                    MR_Word backend_libs__interval__V_135_135;

#line 409 "interval.m"
                    {
#line 409 "interval.m"
                      backend_libs__interval__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_130_130, 0) = ((MR_Box) (backend_libs__interval__FromVar_105));
#line 409 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 409 "interval.m"
                    }
#line 409 "interval.m"
                    {
#line 409 "interval.m"
                      backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__V_130_130, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_131_131);
                    }
#line 410 "interval.m"
                    {
#line 410 "interval.m"
                      backend_libs__interval__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_135_135, 0) = ((MR_Box) (backend_libs__interval__ToVar_104));
#line 410 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 410 "interval.m"
                    }
#line 410 "interval.m"
                    {
#line 410 "interval.m"
                      backend_libs__interval__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_133_133, 0) = ((MR_Box) (backend_libs__interval__FromVar_105));
#line 410 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_133_133, 1) = ((MR_Box) (backend_libs__interval__V_135_135));
#line 410 "interval.m"
                    }
#line 410 "interval.m"
                    {
#line 410 "interval.m"
                      backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_133_133, backend_libs__interval__STATE_VARIABLE_IntervalInfo_131_131, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                    }
#line 408 "interval.m"
                    *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 408 "interval.m"
                  }
#line 394 "interval.m"
                  break;
#line 394 "interval.m"
                case (MR_Integer) 3:
#line 394 "interval.m"
#line 394 "interval.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Unification_90, (MR_Integer) 0)))) {
#line 394 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 394 "interval.m"
                    case (MR_Integer) 0:
#line 412 "interval.m"
                      {
#line 412 "interval.m"
                        MR_Word backend_libs__interval__Var1_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 412 "interval.m"
                        MR_Word backend_libs__interval__Var2_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Unification_90, (MR_Integer) 2)));
#line 412 "interval.m"
                        MR_Word backend_libs__interval__V_122_122;
#line 412 "interval.m"
                        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_123_123;
#line 412 "interval.m"
                        MR_Word backend_libs__interval__V_124_124;

#line 413 "interval.m"
                        {
#line 413 "interval.m"
                          backend_libs__interval__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "interval.m"
                          MR_hl_field(MR_mktag(1), backend_libs__interval__V_124_124, 0) = ((MR_Box) (backend_libs__interval__Var2_107));
#line 413 "interval.m"
                          MR_hl_field(MR_mktag(1), backend_libs__interval__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "interval.m"
                        }
#line 413 "interval.m"
                        {
#line 413 "interval.m"
                          backend_libs__interval__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "interval.m"
                          MR_hl_field(MR_mktag(1), backend_libs__interval__V_122_122, 0) = ((MR_Box) (backend_libs__interval__Var1_106));
#line 413 "interval.m"
                          MR_hl_field(MR_mktag(1), backend_libs__interval__V_122_122, 1) = ((MR_Box) (backend_libs__interval__V_124_124));
#line 413 "interval.m"
                        }
#line 413 "interval.m"
                        {
#line 413 "interval.m"
                          backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__V_122_122, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_123_123);
                        }
#line 414 "interval.m"
                        {
#line 414 "interval.m"
                          backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_122_122, backend_libs__interval__STATE_VARIABLE_IntervalInfo_123_123, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                        }
#line 412 "interval.m"
                        *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 412 "interval.m"
                      }
#line 394 "interval.m"
                      break;
#line 394 "interval.m"
                    case (MR_Integer) 1:
#line 416 "interval.m"
                      {
#line 417 "interval.m"
                        {
#line 417 "interval.m"
                          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "complicated_unify");
#line 417 "interval.m"
                          return;
                        }
#line 416 "interval.m"
                      }
#line 394 "interval.m"
                      break;
#line 394 "interval.m"
                  }
#line 394 "interval.m"
                  break;
#line 394 "interval.m"
              }
#line 372 "interval.m"
            }
#line 214 "interval.m"
            break;
#line 214 "interval.m"
          case (MR_Integer) 2:
#line 324 "interval.m"
            {
#line 324 "interval.m"
              MR_Word backend_libs__interval__PredId_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)));
#line 324 "interval.m"
              MR_Integer backend_libs__interval__ProcId_67 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 324 "interval.m"
              MR_Word backend_libs__interval__Builtin_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 324 "interval.m"
              MR_Word backend_libs__interval__ProcInfo_72;
#line 324 "interval.m"
              MR_Word backend_libs__interval__ArgVars_255 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 324 "interval.m"
              MR_Word backend_libs__interval__IntParams_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 324 "interval.m"
              MR_Word backend_libs__interval__ModuleInfo_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 0)));
#line 324 "interval.m"
              MR_Word backend_libs__interval__VarTypes_259;
#line 324 "interval.m"
              MR_Word backend_libs__interval__InputArgs_260;
#line 324 "interval.m"
              MR_Word backend_libs__interval__Inputs_261;
#line 324 "interval.m"
              MR_Word backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));
#line 324 "interval.m"
              MR_Word backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 5)));
#line 325 "interval.m"
              MR_Word backend_libs__interval__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 325 "interval.m"
              MR_Word backend_libs__interval__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 325 "interval.m"
              MR_Word backend_libs__interval__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 325 "interval.m"
              MR_Word backend_libs__interval__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 325 "interval.m"
              MR_Word backend_libs__interval__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 325 "interval.m"
              MR_Word backend_libs__interval__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 325 "interval.m"
              MR_Word backend_libs__interval__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 325 "interval.m"
              MR_Word backend_libs__interval__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 325 "interval.m"
              MR_Word backend_libs__interval__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 325 "interval.m"
              MR_Word backend_libs__interval__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 325 "interval.m"
              MR_Word backend_libs__interval__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 325 "interval.m"
              MR_Word backend_libs__interval__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 325 "interval.m"
              MR_Word backend_libs__interval__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 325 "interval.m"
              MR_Word backend_libs__interval__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 325 "interval.m"
              MR_Word backend_libs__interval__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 326 "interval.m"
              MR_Word backend_libs__interval__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 1)));
#line 326 "interval.m"
              MR_Word backend_libs__interval__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 2)));
#line 327 "interval.m"
              MR_Word backend_libs__interval___PredInfo_71;
#line 329 "interval.m"
              MR_Word backend_libs__interval__V_323_323;
#line 329 "interval.m"
              MR_Word backend_libs__interval__V_324_324;
#line 330 "interval.m"
              MR_Word backend_libs__interval__V_73_73;
#line 330 "interval.m"
              MR_Word backend_libs__interval__V_74_74;

#line 327 "interval.m"
              {
#line 327 "interval.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(backend_libs__interval__ModuleInfo_258, backend_libs__interval__PredId_66, backend_libs__interval__ProcId_67, &backend_libs__interval___PredInfo_71, &backend_libs__interval__ProcInfo_72);
              }
#line 329 "interval.m"
              backend_libs__interval__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 0)));
#line 329 "interval.m"
              backend_libs__interval__VarTypes_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 1)));
#line 329 "interval.m"
              backend_libs__interval__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 2)));
#line 330 "interval.m"
              {
#line 330 "interval.m"
                hlds__arg_info__partition_proc_call_args_7_p_0(backend_libs__interval__ProcInfo_72, backend_libs__interval__VarTypes_259, backend_libs__interval__ModuleInfo_258, backend_libs__interval__ArgVars_255, &backend_libs__interval__InputArgs_260, &backend_libs__interval__V_73_73, &backend_libs__interval__V_74_74);
              }
#line 332 "interval.m"
              {
#line 332 "interval.m"
                mercury__set__to_sorted_list_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], backend_libs__interval__InputArgs_260, &backend_libs__interval__Inputs_261);
              }
#line 337 "interval.m"
#line 337 "interval.m"
              switch (backend_libs__interval__Builtin_68) {
#line 337 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 337 "interval.m"
                case (MR_Integer) 0:
#line 334 "interval.m"
                  {
#line 334 "interval.m"
                    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_161_161;

#line 335 "interval.m"
                    {
#line 335 "interval.m"
                      backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__Inputs_261, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_161_161);
                    }
#line 336 "interval.m"
                    {
#line 336 "interval.m"
                      backend_libs__interval__require_access_3_p_0(backend_libs__interval__Inputs_261, backend_libs__interval__STATE_VARIABLE_IntervalInfo_161_161, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                    }
#line 334 "interval.m"
                    *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 334 "interval.m"
                  }
#line 337 "interval.m"
                  break;
#line 337 "interval.m"
                case (MR_Integer) 2:
#line 337 "interval.m"
                case (MR_Integer) 1:
#line 340 "interval.m"
                  {
#line 340 "interval.m"
                    MR_Word backend_libs__interval__MaybeNeedAcrossCall_253;

#line 341 "interval.m"
                    {
#line 341 "interval.m"
                      hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo_7, &backend_libs__interval__MaybeNeedAcrossCall_253);
                    }
#line 343 "interval.m"
                    {
#line 343 "interval.m"
                      backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__Inputs_261, backend_libs__interval__MaybeNeedAcrossCall_253, backend_libs__interval__GoalInfo_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
#line 343 "interval.m"
                      return;
                    }
#line 340 "interval.m"
                  }
#line 337 "interval.m"
                  break;
#line 337 "interval.m"
              }
#line 324 "interval.m"
            }
#line 214 "interval.m"
            break;
#line 214 "interval.m"
          case (MR_Integer) 3:
#line 214 "interval.m"
#line 214 "interval.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)))) {
#line 214 "interval.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 214 "interval.m"
              case (MR_Integer) 0:
#line 291 "interval.m"
                {
#line 291 "interval.m"
                  MR_Word backend_libs__interval__TypeInfo_363_363;
#line 291 "interval.m"
                  MR_Word backend_libs__interval__GenericCall_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 291 "interval.m"
                  MR_Word backend_libs__interval__ArgVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 291 "interval.m"
                  MR_Word backend_libs__interval__ArgModes_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 291 "interval.m"
                  MR_Word backend_libs__interval__MaybeArgRegs_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));
#line 291 "interval.m"
                  MR_Word backend_libs__interval__MaybeNeedAcrossCall_38;
#line 291 "interval.m"
                  MR_Word backend_libs__interval__IntParams_39;
#line 291 "interval.m"
                  MR_Word backend_libs__interval__ModuleInfo_40;
#line 291 "interval.m"
                  MR_Word backend_libs__interval__VarTypes_41;
#line 291 "interval.m"
                  MR_Word backend_libs__interval__ArgTypes_42;
#line 291 "interval.m"
                  MR_Word backend_libs__interval__ArgRegTypes_43;
#line 291 "interval.m"
                  MR_Word backend_libs__interval__InputArgsR_44;
#line 291 "interval.m"
                  MR_Word backend_libs__interval__InputArgsF_45;
#line 291 "interval.m"
                  MR_Word backend_libs__interval__InputArgs_48;
#line 290 "interval.m"
                  MR_Word backend_libs__interval___Detism_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 5)));
#line 293 "interval.m"
                  MR_Word backend_libs__interval__V_287_287;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__V_288_288;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__V_289_289;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__V_290_290;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__V_291_291;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__V_292_292;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__V_293_293;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__V_294_294;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__V_295_295;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__V_296_296;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__V_297_297;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__V_298_298;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__V_299_299;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__V_300_300;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__V_301_301;
#line 294 "interval.m"
                  MR_Word backend_libs__interval__V_303_303;
#line 299 "interval.m"
                  MR_Word backend_libs__interval___OutputArgsR_46;
#line 299 "interval.m"
                  MR_Word backend_libs__interval___OutputArgsF_47;

#line 292 "interval.m"
                  {
#line 292 "interval.m"
                    hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo_7, &backend_libs__interval__MaybeNeedAcrossCall_38);
                  }
#line 293 "interval.m"
                  backend_libs__interval__IntParams_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 293 "interval.m"
                  backend_libs__interval__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 293 "interval.m"
                  backend_libs__interval__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 293 "interval.m"
                  backend_libs__interval__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 293 "interval.m"
                  backend_libs__interval__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 293 "interval.m"
                  backend_libs__interval__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 293 "interval.m"
                  backend_libs__interval__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 293 "interval.m"
                  backend_libs__interval__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 293 "interval.m"
                  backend_libs__interval__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 293 "interval.m"
                  backend_libs__interval__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 293 "interval.m"
                  backend_libs__interval__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 293 "interval.m"
                  backend_libs__interval__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 293 "interval.m"
                  backend_libs__interval__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 293 "interval.m"
                  backend_libs__interval__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 293 "interval.m"
                  backend_libs__interval__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 293 "interval.m"
                  backend_libs__interval__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 294 "interval.m"
                  backend_libs__interval__ModuleInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_39, (MR_Integer) 0)));
#line 294 "interval.m"
                  backend_libs__interval__VarTypes_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_39, (MR_Integer) 1)));
#line 294 "interval.m"
                  backend_libs__interval__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_39, (MR_Integer) 2)));
#line 296 "interval.m"
                  {
#line 296 "interval.m"
                    hlds__vartypes__lookup_var_types_3_p_0(backend_libs__interval__VarTypes_41, backend_libs__interval__ArgVars_34, &backend_libs__interval__ArgTypes_42);
                  }
#line 297 "interval.m"
                  {
#line 297 "interval.m"
                    hlds__arg_info__generic_call_arg_reg_types_6_p_0(backend_libs__interval__ModuleInfo_40, backend_libs__interval__VarTypes_41, backend_libs__interval__GenericCall_33, backend_libs__interval__ArgVars_34, backend_libs__interval__MaybeArgRegs_36, &backend_libs__interval__ArgRegTypes_43);
                  }
#line 299 "interval.m"
                  {
#line 299 "interval.m"
                    hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(backend_libs__interval__ModuleInfo_40, backend_libs__interval__ArgVars_34, backend_libs__interval__ArgModes_35, backend_libs__interval__ArgTypes_42, backend_libs__interval__ArgRegTypes_43, &backend_libs__interval__InputArgsR_44, &backend_libs__interval__InputArgsF_45, &backend_libs__interval___OutputArgsR_46, &backend_libs__interval___OutputArgsF_47);
                  }
#line 17707 "backend_libs.interval.c"
                  backend_libs__interval__TypeInfo_363_363 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 302 "interval.m"
                  {
#line 302 "interval.m"
                    mercury__list__append_3_p_1(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__InputArgsR_44, backend_libs__interval__InputArgsF_45, &backend_libs__interval__InputArgs_48);
                  }
#line 309 "interval.m"
#line 309 "interval.m"
                  switch (MR_tag((MR_Word) backend_libs__interval__GenericCall_33)) {
#line 309 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 309 "interval.m"
                    case (MR_Integer) 0:
#line 309 "interval.m"
                    case (MR_Integer) 1:
#line 309 "interval.m"
                    case (MR_Integer) 2:
#line 313 "interval.m"
                      {
#line 313 "interval.m"
                        MR_Word backend_libs__interval__Globals_59;
#line 313 "interval.m"
                        MR_Word backend_libs__interval__GenericVarsArgInfos_61;
#line 313 "interval.m"
                        MR_Word backend_libs__interval__GenericVars_64;
#line 313 "interval.m"
                        MR_Word backend_libs__interval__Inputs_65;
#line 313 "interval.m"
                        MR_Integer backend_libs__interval__V_163_163;
#line 313 "interval.m"
                        MR_Integer backend_libs__interval__V_164_164;
#line 315 "interval.m"
                        MR_Word backend_libs__interval__V_60_60;
#line 315 "interval.m"
                        MR_Integer backend_libs__interval__V_62_62;
#line 315 "interval.m"
                        MR_Word backend_libs__interval__V_63_63;

#line 314 "interval.m"
                        {
#line 314 "interval.m"
                          hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__interval__ModuleInfo_40, &backend_libs__interval__Globals_59);
                        }
#line 316 "interval.m"
                        {
#line 316 "interval.m"
                          backend_libs__interval__V_163_163 = mercury__list__length_1_f_0(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__InputArgsR_44);
                        }
#line 316 "interval.m"
                        {
#line 316 "interval.m"
                          backend_libs__interval__V_164_164 = mercury__list__length_1_f_0(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__InputArgsF_45);
                        }
#line 315 "interval.m"
                        {
#line 315 "interval.m"
                          ll_backend__call_gen__generic_call_info_8_p_0(backend_libs__interval__Globals_59, backend_libs__interval__GenericCall_33, backend_libs__interval__V_163_163, backend_libs__interval__V_164_164, &backend_libs__interval__V_60_60, &backend_libs__interval__GenericVarsArgInfos_61, &backend_libs__interval__V_62_62, &backend_libs__interval__V_63_63);
                        }
#line 318 "interval.m"
                        {
#line 318 "interval.m"
                          mercury__assoc_list__keys_2_p_0(backend_libs__interval__TypeInfo_363_363, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, backend_libs__interval__GenericVarsArgInfos_61, &backend_libs__interval__GenericVars_64);
                        }
#line 319 "interval.m"
                        {
#line 319 "interval.m"
                          mercury__list__append_3_p_1(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__GenericVars_64, backend_libs__interval__InputArgs_48, &backend_libs__interval__Inputs_65);
                        }
#line 320 "interval.m"
                        {
#line 320 "interval.m"
                          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__Inputs_65, backend_libs__interval__MaybeNeedAcrossCall_38, backend_libs__interval__GoalInfo_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
#line 320 "interval.m"
                          return;
                        }
#line 313 "interval.m"
                      }
#line 309 "interval.m"
                      break;
#line 309 "interval.m"
                    case (MR_Integer) 3:
#line 306 "interval.m"
                      {
#line 306 "interval.m"
                        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_167_167;

#line 307 "interval.m"
                        {
#line 307 "interval.m"
                          backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__InputArgs_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_167_167);
                        }
#line 308 "interval.m"
                        {
#line 308 "interval.m"
                          backend_libs__interval__require_access_3_p_0(backend_libs__interval__InputArgs_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_167_167, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                        }
#line 306 "interval.m"
                        *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 306 "interval.m"
                      }
#line 309 "interval.m"
                      break;
#line 309 "interval.m"
                  }
#line 291 "interval.m"
                }
#line 214 "interval.m"
                break;
#line 214 "interval.m"
              case (MR_Integer) 1:
#line 348 "interval.m"
                {
#line 348 "interval.m"
                  MR_Word backend_libs__interval__TypeCtorInfo_366_366;
#line 348 "interval.m"
                  MR_Word backend_libs__interval__TypeInfo_367_367;
#line 348 "interval.m"
                  MR_Word backend_libs__interval__Args_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));
#line 348 "interval.m"
                  MR_Word backend_libs__interval__ExtraArgs_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 5)));
#line 348 "interval.m"
                  MR_Word backend_libs__interval__ExtraVars_80;
#line 348 "interval.m"
                  MR_Word backend_libs__interval__InputArgVarSet_81;
#line 348 "interval.m"
                  MR_Word backend_libs__interval__InputArgVars_84;
#line 348 "interval.m"
                  MR_Word backend_libs__interval__InputVars_85;
#line 348 "interval.m"
                  MR_Word backend_libs__interval__ArgVars_264;
#line 348 "interval.m"
                  MR_Word backend_libs__interval__IntParams_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 348 "interval.m"
                  MR_Word backend_libs__interval__ModuleInfo_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 0)));
#line 348 "interval.m"
                  MR_Word backend_libs__interval__VarTypes_268;
#line 348 "interval.m"
                  MR_Word backend_libs__interval__PredId_269 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 348 "interval.m"
                  MR_Integer backend_libs__interval__ProcId_270 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 348 "interval.m"
                  MR_Word backend_libs__interval__ProcInfo_272;
#line 347 "interval.m"
                  MR_Word backend_libs__interval___Attributes_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 347 "interval.m"
                  MR_Word backend_libs__interval___MaybeTraceRuntimeCond_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 6)));
#line 347 "interval.m"
                  MR_Word backend_libs__interval___PragmaCode_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 7)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 350 "interval.m"
                  MR_Word backend_libs__interval__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 1)));
#line 350 "interval.m"
                  MR_Word backend_libs__interval__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 2)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval___PredInfo_262;
#line 353 "interval.m"
                  MR_Word backend_libs__interval__V_342_342;
#line 353 "interval.m"
                  MR_Word backend_libs__interval__V_343_343;
#line 356 "interval.m"
                  MR_Word backend_libs__interval__V_82_82;
#line 356 "interval.m"
                  MR_Word backend_libs__interval__V_83_83;
#line 367 "interval.m"
                  MR_Word backend_libs__interval__MaybeNeedAcrossCall_263;
#line 363 "interval.m"
                  MR_Word backend_libs__interval__V_86_86;

#line 351 "interval.m"
                  {
#line 351 "interval.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(backend_libs__interval__ModuleInfo_267, backend_libs__interval__PredId_269, backend_libs__interval__ProcId_270, &backend_libs__interval___PredInfo_262, &backend_libs__interval__ProcInfo_272);
                  }
#line 353 "interval.m"
                  backend_libs__interval__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 0)));
#line 353 "interval.m"
                  backend_libs__interval__VarTypes_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 1)));
#line 353 "interval.m"
                  backend_libs__interval__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 2)));
#line 17916 "backend_libs.interval.c"
                  backend_libs__interval__TypeCtorInfo_366_366 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 17918 "backend_libs.interval.c"
                  backend_libs__interval__TypeInfo_367_367 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 354 "interval.m"
                  {
#line 354 "interval.m"
                    backend_libs__interval__ArgVars_264 = mercury__list__map_2_f_0(backend_libs__interval__TypeCtorInfo_366_366, backend_libs__interval__TypeInfo_367_367, (MR_Word) &backend_libs__interval_scalar_common_2[12], backend_libs__interval__Args_76);
                  }
#line 355 "interval.m"
                  {
#line 355 "interval.m"
                    backend_libs__interval__ExtraVars_80 = mercury__list__map_2_f_0(backend_libs__interval__TypeCtorInfo_366_366, backend_libs__interval__TypeInfo_367_367, (MR_Word) &backend_libs__interval_scalar_common_2[13], backend_libs__interval__ExtraArgs_77);
                  }
#line 356 "interval.m"
                  {
#line 356 "interval.m"
                    hlds__arg_info__partition_proc_call_args_7_p_0(backend_libs__interval__ProcInfo_272, backend_libs__interval__VarTypes_268, backend_libs__interval__ModuleInfo_267, backend_libs__interval__ArgVars_264, &backend_libs__interval__InputArgVarSet_81, &backend_libs__interval__V_82_82, &backend_libs__interval__V_83_83);
                  }
#line 358 "interval.m"
                  {
#line 358 "interval.m"
                    mercury__set__to_sorted_list_2_p_0(backend_libs__interval__TypeInfo_367_367, backend_libs__interval__InputArgVarSet_81, &backend_libs__interval__InputArgVars_84);
                  }
#line 359 "interval.m"
                  {
#line 359 "interval.m"
                    mercury__list__append_3_p_1(backend_libs__interval__TypeInfo_367_367, backend_libs__interval__InputArgVars_84, backend_libs__interval__ExtraVars_80, &backend_libs__interval__InputVars_85);
                  }
#line 361 "interval.m"
                  {
#line 361 "interval.m"
                    backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo_7, &backend_libs__interval__MaybeNeedAcrossCall_263);
                  }
#line 362 "interval.m"
                  if (backend_libs__interval__succeeded)
#line 362 "interval.m"
                    {
#line 363 "interval.m"
                      backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__MaybeNeedAcrossCall_263)) == (MR_mktag((MR_Integer) 1)));
#line 363 "interval.m"
                      if (backend_libs__interval__succeeded)
#line 363 "interval.m"
                        backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeNeedAcrossCall_263, (MR_Integer) 0)));
#line 362 "interval.m"
                    }
#line 367 "interval.m"
                  if (backend_libs__interval__succeeded)
#line 365 "interval.m"
                    {
#line 365 "interval.m"
                      backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__InputVars_85, backend_libs__interval__MaybeNeedAcrossCall_263, backend_libs__interval__GoalInfo_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
#line 365 "interval.m"
                      return;
                    }
#line 367 "interval.m"
                  else
#line 368 "interval.m"
                    {
#line 368 "interval.m"
                      MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_157_157;

#line 368 "interval.m"
                      {
#line 368 "interval.m"
                        backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__InputVars_85, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_157_157);
                      }
#line 369 "interval.m"
                      {
#line 369 "interval.m"
                        backend_libs__interval__require_access_3_p_0(backend_libs__interval__InputVars_85, backend_libs__interval__STATE_VARIABLE_IntervalInfo_157_157, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                      }
#line 368 "interval.m"
                      *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 368 "interval.m"
                    }
#line 348 "interval.m"
                }
#line 214 "interval.m"
                break;
#line 214 "interval.m"
              case (MR_Integer) 2:
#line 212 "interval.m"
                {
#line 212 "interval.m"
                  MR_Word backend_libs__interval__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 212 "interval.m"
                  MR_Word backend_libs__interval__ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));

#line 213 "interval.m"
                  {
#line 213 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Goals_11, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
#line 213 "interval.m"
                    return;
                  }
#line 212 "interval.m"
                }
#line 214 "interval.m"
                break;
#line 214 "interval.m"
              case (MR_Integer) 3:
#line 215 "interval.m"
                {
#line 215 "interval.m"
                  MR_Word backend_libs__interval__Goals_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));

#line 226 "interval.m"
                  if ((backend_libs__interval__Goals_234 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 227 "interval.m"
                    {
#line 235 "interval.m"
                      {
#line 235 "interval.m"
                        backend_libs__interval__no_open_intervals_2_p_0(backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                      }
#line 227 "interval.m"
                      *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 227 "interval.m"
                    }
#line 226 "interval.m"
                  else
#line 217 "interval.m"
                    {
#line 217 "interval.m"
                      MR_Word backend_libs__interval__FirstDisjunct_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_234, (MR_Integer) 0)));
#line 217 "interval.m"
                      MR_Word backend_libs__interval__StartAnchor_14;
#line 217 "interval.m"
                      MR_Word backend_libs__interval__EndAnchor_15;
#line 217 "interval.m"
                      MR_Word backend_libs__interval__BeforeId_16;
#line 217 "interval.m"
                      MR_Word backend_libs__interval__AfterId_17;
#line 217 "interval.m"
                      MR_Word backend_libs__interval__MaybeResumeVars_18;
#line 217 "interval.m"
                      MR_Word backend_libs__interval__OpenIntervals_19;
#line 217 "interval.m"
                      MR_Word backend_libs__interval__V_223_223;
#line 217 "interval.m"
                      MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_225_225;
#line 217 "interval.m"
                      MR_Box backend_libs__interval__STATE_VARIABLE_Acc_226_226;
#line 217 "interval.m"
                      MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_228_228;
#line 217 "interval.m"
                      MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_234, (MR_Integer) 1)));

#line 218 "interval.m"
                      {
#line 218 "interval.m"
                        backend_libs__interval__V_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 218 "interval.m"
                        MR_hl_field(MR_mktag(1), backend_libs__interval__V_223_223, 0) = ((MR_Box) (backend_libs__interval__FirstDisjunct_12));
#line 218 "interval.m"
                      }
#line 218 "interval.m"
                      {
#line 218 "interval.m"
                        backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(backend_libs__interval__GoalInfo_7, backend_libs__interval__V_223_223, (MR_Integer) 1, &backend_libs__interval__StartAnchor_14, &backend_libs__interval__EndAnchor_15, &backend_libs__interval__BeforeId_16, &backend_libs__interval__AfterId_17, &backend_libs__interval__MaybeResumeVars_18, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_225_225, backend_libs__interval__STATE_VARIABLE_Acc_0_114, &backend_libs__interval__STATE_VARIABLE_Acc_226_226);
                      }
#line 221 "interval.m"
                      {
#line 221 "interval.m"
                        backend_libs__interval__build_interval_info_in_disj_11_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Goals_234, (MR_Integer) 1, backend_libs__interval__StartAnchor_14, backend_libs__interval__EndAnchor_15, backend_libs__interval__BeforeId_16, backend_libs__interval__AfterId_17, &backend_libs__interval__OpenIntervals_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_225_225, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_228_228, backend_libs__interval__STATE_VARIABLE_Acc_226_226, backend_libs__interval__STATE_VARIABLE_Acc_115);
                      }
#line 224 "interval.m"
                      {
#line 224 "interval.m"
                        backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__StartAnchor_14, backend_libs__interval__BeforeId_16, backend_libs__interval__MaybeResumeVars_18, backend_libs__interval__OpenIntervals_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_228_228, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
#line 224 "interval.m"
                        return;
                      }
#line 217 "interval.m"
                    }
#line 215 "interval.m"
                }
#line 214 "interval.m"
                break;
#line 214 "interval.m"
              case (MR_Integer) 4:
#line 238 "interval.m"
                {
#line 238 "interval.m"
                  MR_Word backend_libs__interval__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 238 "interval.m"
                  MR_Word backend_libs__interval__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 238 "interval.m"
                  MR_Word backend_libs__interval__OpenIntervalsList_23;
#line 238 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_210_210;
#line 238 "interval.m"
                  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_211_211;
#line 238 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_212_212;
#line 238 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_215_215;
#line 238 "interval.m"
                  MR_Word backend_libs__interval__V_216_216;
#line 238 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_217_217;
#line 238 "interval.m"
                  MR_Word backend_libs__interval__StartAnchor_235;
#line 238 "interval.m"
                  MR_Word backend_libs__interval__EndAnchor_236;
#line 238 "interval.m"
                  MR_Word backend_libs__interval__BeforeId_237;
#line 238 "interval.m"
                  MR_Word backend_libs__interval__AfterId_238;
#line 238 "interval.m"
                  MR_Word backend_libs__interval__MaybeResumeVars_239;
#line 238 "interval.m"
                  MR_Word backend_libs__interval__OpenIntervals_240;
#line 238 "interval.m"
                  MR_Word backend_libs__interval___Det_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));

#line 239 "interval.m"
                  {
#line 239 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(backend_libs__interval__GoalInfo_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, &backend_libs__interval__StartAnchor_235, &backend_libs__interval__EndAnchor_236, &backend_libs__interval__BeforeId_237, &backend_libs__interval__AfterId_238, &backend_libs__interval__MaybeResumeVars_239, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_210_210, backend_libs__interval__STATE_VARIABLE_Acc_0_114, &backend_libs__interval__STATE_VARIABLE_Acc_211_211);
                  }
#line 242 "interval.m"
                  {
#line 242 "interval.m"
                    backend_libs__interval__build_interval_info_in_cases_10_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Cases_22, backend_libs__interval__StartAnchor_235, backend_libs__interval__EndAnchor_236, backend_libs__interval__BeforeId_237, backend_libs__interval__AfterId_238, &backend_libs__interval__OpenIntervalsList_23, backend_libs__interval__STATE_VARIABLE_IntervalInfo_210_210, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_212_212, backend_libs__interval__STATE_VARIABLE_Acc_211_211, backend_libs__interval__STATE_VARIABLE_Acc_115);
                  }
#line 244 "interval.m"
                  {
#line 244 "interval.m"
                    backend_libs__interval__OpenIntervals_240 = mercury__set__union_list_1_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, backend_libs__interval__OpenIntervalsList_23);
                  }
#line 245 "interval.m"
                  {
#line 245 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__StartAnchor_235, backend_libs__interval__BeforeId_237, backend_libs__interval__MaybeResumeVars_239, backend_libs__interval__OpenIntervals_240, backend_libs__interval__STATE_VARIABLE_IntervalInfo_212_212, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_215_215);
                  }
#line 247 "interval.m"
                  {
#line 247 "interval.m"
                    backend_libs__interval__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "interval.m"
                    MR_hl_field(MR_mktag(1), backend_libs__interval__V_216_216, 0) = ((MR_Box) (backend_libs__interval__Var_20));
#line 247 "interval.m"
                    MR_hl_field(MR_mktag(1), backend_libs__interval__V_216_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "interval.m"
                  }
#line 247 "interval.m"
                  {
#line 247 "interval.m"
                    backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__V_216_216, backend_libs__interval__STATE_VARIABLE_IntervalInfo_215_215, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_217_217);
                  }
#line 248 "interval.m"
                  {
#line 248 "interval.m"
                    backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_216_216, backend_libs__interval__STATE_VARIABLE_IntervalInfo_217_217, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
#line 248 "interval.m"
                    return;
                  }
#line 238 "interval.m"
                }
#line 214 "interval.m"
                break;
#line 214 "interval.m"
              case (MR_Integer) 5:
#line 278 "interval.m"
                {
#line 278 "interval.m"
                  MR_Word backend_libs__interval__Reason_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 278 "interval.m"
                  MR_Word backend_libs__interval__SubGoal_252 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 284 "interval.m"
                  MR_Word backend_libs__interval__TermVar_32;
#line 279 "interval.m"
                  MR_Word backend_libs__interval__V_169_169;

#line 279 "interval.m"
                  backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__Reason_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_31, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 279 "interval.m"
                  if (backend_libs__interval__succeeded)
#line 279 "interval.m"
                    {
#line 279 "interval.m"
                      backend_libs__interval__TermVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_31, (MR_Integer) 1)));
#line 279 "interval.m"
                      backend_libs__interval__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_31, (MR_Integer) 2)));
#line 279 "interval.m"
                      backend_libs__interval__succeeded = (backend_libs__interval__V_169_169 == (MR_Integer) 1);
#line 279 "interval.m"
                    }
#line 284 "interval.m"
                  if (backend_libs__interval__succeeded)
#line 283 "interval.m"
                    {
#line 283 "interval.m"
                      MR_Word backend_libs__interval__V_170_170;

#line 283 "interval.m"
                      {
#line 283 "interval.m"
                        backend_libs__interval__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "interval.m"
                        MR_hl_field(MR_mktag(1), backend_libs__interval__V_170_170, 0) = ((MR_Box) (backend_libs__interval__TermVar_32));
#line 283 "interval.m"
                        MR_hl_field(MR_mktag(1), backend_libs__interval__V_170_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 283 "interval.m"
                      }
#line 283 "interval.m"
                      {
#line 283 "interval.m"
                        backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_170_170, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                      }
#line 283 "interval.m"
                      *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 283 "interval.m"
                    }
#line 284 "interval.m"
                  else
#line 287 "interval.m"
                    {
#line 287 "interval.m"
                      /* direct tailcall eliminated */
#line 287 "interval.m"
                      {
#line 287 "interval.m"
                        MR_Word backend_libs__interval__HeadVar__1__tmp_copy_1 = backend_libs__interval__SubGoal_252;

#line 287 "interval.m"
                        backend_libs__interval__HeadVar__1_1 = backend_libs__interval__HeadVar__1__tmp_copy_1;
#line 287 "interval.m"
                      }
#line 287 "interval.m"
                      continue;
#line 287 "interval.m"
                    }
#line 278 "interval.m"
                }
#line 214 "interval.m"
                break;
#line 214 "interval.m"
              case (MR_Integer) 6:
#line 261 "interval.m"
                {
#line 261 "interval.m"
                  MR_Word backend_libs__interval__Cond_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 261 "interval.m"
                  MR_Word backend_libs__interval__Then_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 261 "interval.m"
                  MR_Word backend_libs__interval__Else_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));
#line 261 "interval.m"
                  MR_Word backend_libs__interval__CondOpenIntervals_29;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__V_175_175;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_177_177;
#line 261 "interval.m"
                  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_178_178;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_179_179;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_180_180;
#line 261 "interval.m"
                  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_181_181;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_182_182;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_183_183;
#line 261 "interval.m"
                  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_184_184;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_186_186;
#line 261 "interval.m"
                  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_187_187;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_188_188;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_189_189;
#line 261 "interval.m"
                  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_190_190;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_192_192;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__StartAnchor_247;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__EndAnchor_248;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__BeforeId_249;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__AfterId_250;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__MaybeResumeVars_251;
#line 261 "interval.m"
                  MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 273 "interval.m"
                  MR_Word backend_libs__interval___ElseOpenIntervals_30;

#line 262 "interval.m"
                  {
#line 262 "interval.m"
                    backend_libs__interval__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 262 "interval.m"
                    MR_hl_field(MR_mktag(1), backend_libs__interval__V_175_175, 0) = ((MR_Box) (backend_libs__interval__Cond_26));
#line 262 "interval.m"
                  }
#line 262 "interval.m"
                  {
#line 262 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(backend_libs__interval__GoalInfo_7, backend_libs__interval__V_175_175, (MR_Integer) 0, &backend_libs__interval__StartAnchor_247, &backend_libs__interval__EndAnchor_248, &backend_libs__interval__BeforeId_249, &backend_libs__interval__AfterId_250, &backend_libs__interval__MaybeResumeVars_251, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_177_177, backend_libs__interval__STATE_VARIABLE_Acc_0_114, &backend_libs__interval__STATE_VARIABLE_Acc_178_178);
                  }
#line 265 "interval.m"
                  {
#line 265 "interval.m"
                    backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_248, backend_libs__interval__AfterId_250, backend_libs__interval__STATE_VARIABLE_IntervalInfo_177_177, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_179_179);
                  }
#line 266 "interval.m"
                  {
#line 266 "interval.m"
                    backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Then_27, backend_libs__interval__STATE_VARIABLE_IntervalInfo_179_179, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_180_180, backend_libs__interval__STATE_VARIABLE_Acc_178_178, &backend_libs__interval__STATE_VARIABLE_Acc_181_181);
                  }
#line 267 "interval.m"
                  {
#line 267 "interval.m"
                    backend_libs__interval__reached_cond_then_3_p_0(backend_libs__interval__GoalInfo_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_180_180, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_182_182);
                  }
#line 268 "interval.m"
                  {
#line 268 "interval.m"
                    backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Cond_26, backend_libs__interval__STATE_VARIABLE_IntervalInfo_182_182, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_183_183, backend_libs__interval__STATE_VARIABLE_Acc_181_181, &backend_libs__interval__STATE_VARIABLE_Acc_184_184);
                  }
#line 269 "interval.m"
                  {
#line 269 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, backend_libs__interval__StartAnchor_247, backend_libs__interval__BeforeId_249, &backend_libs__interval__CondOpenIntervals_29, backend_libs__interval__STATE_VARIABLE_IntervalInfo_183_183, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_186_186, backend_libs__interval__STATE_VARIABLE_Acc_184_184, &backend_libs__interval__STATE_VARIABLE_Acc_187_187);
                  }
#line 271 "interval.m"
                  {
#line 271 "interval.m"
                    backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_248, backend_libs__interval__AfterId_250, backend_libs__interval__STATE_VARIABLE_IntervalInfo_186_186, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_188_188);
                  }
#line 272 "interval.m"
                  {
#line 272 "interval.m"
                    backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Else_28, backend_libs__interval__STATE_VARIABLE_IntervalInfo_188_188, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_189_189, backend_libs__interval__STATE_VARIABLE_Acc_187_187, &backend_libs__interval__STATE_VARIABLE_Acc_190_190);
                  }
#line 273 "interval.m"
                  {
#line 273 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, backend_libs__interval__StartAnchor_247, backend_libs__interval__BeforeId_249, &backend_libs__interval___ElseOpenIntervals_30, backend_libs__interval__STATE_VARIABLE_IntervalInfo_189_189, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_192_192, backend_libs__interval__STATE_VARIABLE_Acc_190_190, backend_libs__interval__STATE_VARIABLE_Acc_115);
                  }
#line 275 "interval.m"
                  {
#line 275 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__StartAnchor_247, backend_libs__interval__BeforeId_249, backend_libs__interval__MaybeResumeVars_251, backend_libs__interval__CondOpenIntervals_29, backend_libs__interval__STATE_VARIABLE_IntervalInfo_192_192, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
#line 275 "interval.m"
                    return;
                  }
#line 261 "interval.m"
                }
#line 214 "interval.m"
                break;
#line 214 "interval.m"
              case (MR_Integer) 7:
#line 420 "interval.m"
                {
#line 422 "interval.m"
                  {
#line 422 "interval.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "shorthand");
#line 422 "interval.m"
                    return;
                  }
#line 420 "interval.m"
                }
#line 214 "interval.m"
                break;
#line 214 "interval.m"
            }
#line 214 "interval.m"
            break;
#line 214 "interval.m"
        }
#line 210 "interval.m"
      }
#line 210 "interval.m"
      break;
#line 210 "interval.m"
    }
#line 146 "interval.m"
}

#line 141 "interval.m"
void MR_CALL 
backend_libs__interval__use_cell_8_p_0(
#line 141 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_9,
#line 141 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 141 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 141 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3,
#line 141 "interval.m"
  MR_Word backend_libs__interval__HeadVar__4_4,
#line 141 "interval.m"
  MR_Word backend_libs__interval__HeadVar__5_5,
#line 141 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__6_6,
#line 141 "interval.m"
  MR_Box backend_libs__interval__HeadVar__7_7,
#line 141 "interval.m"
  MR_Box * backend_libs__interval__HeadVar__8_8)
#line 141 "interval.m"
{
#line 18429 "backend_libs.interval.c"
  {
#line 18431 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;
#line 18433 "backend_libs.interval.c"
    void MR_CALL (* backend_libs__interval__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 18435 "backend_libs.interval.c"
    MR_Box backend_libs__interval__conv1_HeadVar__6_6;

#line 18438 "backend_libs.interval.c"
    {
#line 18440 "backend_libs.interval.c"
      backend_libs__interval__func_0(((MR_Box) backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_9), ((MR_Box) (backend_libs__interval__HeadVar__1_1)), ((MR_Box) (backend_libs__interval__HeadVar__2_2)), ((MR_Box) (backend_libs__interval__HeadVar__3_3)), ((MR_Box) (backend_libs__interval__HeadVar__4_4)), ((MR_Box) (backend_libs__interval__HeadVar__5_5)), &backend_libs__interval__conv1_HeadVar__6_6, backend_libs__interval__HeadVar__7_7, backend_libs__interval__HeadVar__8_8);
    }
#line 18443 "backend_libs.interval.c"
    *backend_libs__interval__HeadVar__6_6 = ((MR_Word) backend_libs__interval__conv1_HeadVar__6_6);
#line 18445 "backend_libs.interval.c"
  }
#line 141 "interval.m"
}

void mercury__backend_libs__interval__init(void)
{
}

void mercury__backend_libs__interval__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_map_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_params_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_var_info_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_maybe_needs_flush_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_rename_map_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_0);
	MR_register_type_ctor_info(&backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_type_0);
}

void mercury__backend_libs__interval__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.interval. */
