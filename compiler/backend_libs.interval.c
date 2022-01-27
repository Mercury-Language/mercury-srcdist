/*
** Automatically generated from `interval.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "libs.op_mode.mih"
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




#line 158 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_backend_libs__interval__type_ctor_info_anchor_follow_info_0;

#line 164 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 167 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 173 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 176 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0;

#line 179 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1;

#line 182 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_2[2];

#line 185 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2;

#line 188 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_3[1];

#line 191 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3;

#line 194 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_4[2];

#line 197 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4;

#line 200 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_5[1];

#line 203 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5;

#line 206 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_0[2];

#line 209 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1[1];

#line 212 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2[1];

#line 215 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3[2];

#line 218 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_0[4];

#line 221 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0[6];

#line 224 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0[6];

#line 227 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 230 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_follow_info_0_0[2];

#line 233 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0;

#line 236 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0[1];

#line 239 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0[1];

#line 242 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0[1];

#line 245 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0[1];

#line 248 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0;

#line 251 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1;

#line 254 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2;

#line 257 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3;

#line 260 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4;

#line 263 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_branch_construct_0[5];

#line 266 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0[5];

#line 269 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0[5];

#line 272 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_branch_end_info_0_0[3];

#line 275 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_branch_end_info_0_0[3];

#line 278 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0;

#line 281 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0[1];

#line 284 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_branch_end_info_0[1];

#line 287 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_branch_end_info_0[1];

#line 290 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_end_info_0[1];

#line 293 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 296 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 299 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_insert_spec_0_0[2];

#line 302 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0;

#line 305 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0[1];

#line 308 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0[1];

#line 311 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0[1];

#line 314 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0[1];

#line 317 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0[1];

#line 320 "backend_libs.interval.c"
static const MR_NotagFunctorDesc backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0;

#line 323 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0;

#line 326 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0;

#line 329 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0;

#line 332 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0;

#line 335 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0;

#line 338 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0;

#line 341 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 344 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 347 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 350 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 353 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 356 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_info_0_0[16];

#line 359 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_info_0_0[16];

#line 362 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0;

#line 365 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0[1];

#line 368 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0[1];

#line 371 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0[1];

#line 374 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0[1];

#line 377 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 380 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0[3];

#line 383 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0[3];

#line 386 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0;

#line 389 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0[1];

#line 392 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0[1];

#line 395 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0[1];

#line 398 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0[1];

#line 401 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 404 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_var_info_0_0[2];

#line 407 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_var_info_0_0[2];

#line 410 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0;

#line 413 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0[1];

#line 416 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_var_info_0[1];

#line 419 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_var_info_0[1];

#line 422 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_var_info_0[1];

#line 425 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0;

#line 428 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1;

#line 431 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_maybe_needs_flush_0[2];

#line 434 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0[2];

#line 437 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0[2];

#line 440 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 443 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0;

#line 446 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1;

#line 449 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_resume_save_status_0[2];

#line 452 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0[2];

#line 455 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0[2];

#line 458 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_save_point_0_0[2];

#line 461 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0;

#line 464 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0[1];

#line 467 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0[1];

#line 470 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0[1];

#line 473 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0[1];

#line 476 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0;

#line 479 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1;

#line 482 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_save_point_type_0[2];

#line 485 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0[2];

#line 488 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0[2];

#line 491 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1[1];

#line 494 "backend_libs.interval.c"
static const MR_TypeClassMethod backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1[1];

#line 497 "backend_libs.interval.c"
static const MR_TypeClassId backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1;

#line 500 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0_10001(
#line 503 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 505 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 508 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_0_0_10001(
#line 511 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 513 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 515 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 518 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0_10001(
#line 521 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 523 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 526 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0_10001(
#line 529 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 531 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 533 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 536 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0_10001(
#line 539 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 541 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 544 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0_10001(
#line 547 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 549 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 551 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 554 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_end_info_0_0_10001(
#line 557 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 559 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 562 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0_10001(
#line 565 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 567 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 569 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 572 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0_10001(
#line 575 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 577 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 580 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0_10001(
#line 583 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 585 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 587 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 590 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0_10001(
#line 593 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 595 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 598 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0_10001(
#line 601 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 603 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 605 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 608 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0_10001(
#line 611 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 613 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 616 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0_10001(
#line 619 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 621 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 623 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 626 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0_10001(
#line 629 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 631 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 634 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0_10001(
#line 637 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 639 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 641 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 644 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0_10001(
#line 647 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 649 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 652 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0_10001(
#line 655 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 657 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 659 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 662 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0_10001(
#line 665 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 667 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 670 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0_10001(
#line 673 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 675 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 677 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 680 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0_10001(
#line 683 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 685 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 688 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0_10001(
#line 691 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 693 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 695 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 698 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0_10001(
#line 701 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 703 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 706 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0_10001(
#line 709 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 711 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 713 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 716 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0_10001(
#line 719 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 721 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 724 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0_10001(
#line 727 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 729 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 731 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 734 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0_10001(
#line 737 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 739 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 742 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_0_0_10001(
#line 745 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 747 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 749 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 752 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0_10001(
#line 755 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 757 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 760 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0_10001(
#line 763 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 765 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 767 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 1188 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(
#line 1188 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1188 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1188 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1188 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1188 "interval.m"
  MR_Word backend_libs__interval__Inserts_6,
#line 1188 "interval.m"
  MR_Word backend_libs__interval__InsertMap_7,
#line 1188 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_8);

#line 638 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(
#line 638 "interval.m"
  MR_Word backend_libs__interval__StartArchor_9,
#line 638 "interval.m"
  MR_Word backend_libs__interval__BeforeId_10,
#line 638 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeVars_11,
#line 638 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_12,
#line 638 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15,
#line 638 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_16);

#line 604 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(
#line 604 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_9,
#line 604 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_10,
#line 604 "interval.m"
  MR_Word backend_libs__interval__BeforeId_11,
#line 604 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_12,
#line 604 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16,
#line 604 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_17,
#line 604 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_18,
#line 604 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_19);

#line 546 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(
#line 546 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_13,
#line 546 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeGoal_14,
#line 546 "interval.m"
  MR_Word backend_libs__interval__Construct_15,
#line 546 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_16,
#line 546 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_17,
#line 546 "interval.m"
  MR_Word * backend_libs__interval__BeforeIntervalId_18,
#line 546 "interval.m"
  MR_Word * backend_libs__interval__AfterIntervalId_19,
#line 546 "interval.m"
  MR_Word * backend_libs__interval__MaybeResumeVars_20,
#line 546 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_34,
#line 546 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_35,
#line 546 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_36,
#line 546 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_37);

#line 497 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(
#line 497 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27,
#line 497 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 497 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3,
#line 497 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_4,
#line 497 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_5,
#line 497 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_6);

#line 441 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 441 "interval.m"
  MR_Word backend_libs__interval__Inputs_8,
#line 441 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedAcrossCall_9,
#line 441 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_10,
#line 441 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26,
#line 441 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_27,
#line 441 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_28,
#line 441 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_29);

#line 1335 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1335__1_2_p_0(
#line 1335 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_31,
#line 1335 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_32);

#line 1322 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_deletion__1322__1_2_p_0(
#line 1322 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_16,
#line 1322 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_17);

#line 1302 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1302__1_2_p_0(
#line 1302 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_154,
#line 1302 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_155);

#line 870 "interval.m"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0(
#line 870 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 870 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 870 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3);

#line 870 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0(
#line 870 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 870 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2);

#line 1344 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_4(
#line 1344 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1344 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1340 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_3(
#line 1340 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);

#line 1344 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_2(
#line 1344 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1344 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1335 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_1(
#line 1335 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1335 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1335 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2);

#line 1327 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0(
#line 1327 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1);

#line 1344 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_2(
#line 1344 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1344 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1322 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_1(
#line 1322 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1322 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1322 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2);

#line 1319 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0(
#line 1319 "interval.m"
  MR_Word backend_libs__interval__Vars_4);

#line 1313 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_3(
#line 1313 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1313 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1313 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1313 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1302 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_2(
#line 1302 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1302 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1302 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2);

#line 1280 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_1(
#line 1280 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1280 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);

#line 1272 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0(
#line 1272 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_5,
#line 1272 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6);

#line 1245 "interval.m"
static void MR_CALL 
backend_libs__interval__construct_anchors_4_p_0(
#line 1245 "interval.m"
  MR_Word backend_libs__interval__Construct_5,
#line 1245 "interval.m"
  MR_Word backend_libs__interval__Goal_6,
#line 1245 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_7,
#line 1245 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_8);

#line 1230 "interval.m"
static void MR_CALL 
backend_libs__interval__build_headvar_subst_4_p_0(
#line 1230 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1230 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 1230 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_Subst_0_3,
#line 1230 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_Subst_4);

#line 1205 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_cases_7_p_0(
#line 1205 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1205 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1205 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1205 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1205 "interval.m"
  MR_Word backend_libs__interval__VarRename0_5,
#line 1205 "interval.m"
  MR_Word backend_libs__interval__InsertMap_6,
#line 1205 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_7);

#line 1167 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_conj_9_p_0(
#line 1167 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1167 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1167 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1167 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1167 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_5,
#line 1167 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_6,
#line 1167 "interval.m"
  MR_Word backend_libs__interval__ConjType_7,
#line 1167 "interval.m"
  MR_Word backend_libs__interval__InsertMap_8,
#line 1167 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_9);

#line 1136 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_at_call_site_9_p_0(
#line 1136 "interval.m"
  MR_Word backend_libs__interval__Goal0_10,
#line 1136 "interval.m"
  MR_Word * backend_libs__interval__Goal_11,
#line 1136 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_25,
#line 1136 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_26,
#line 1136 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_27,
#line 1136 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_28,
#line 1136 "interval.m"
  MR_Word backend_libs__interval__MustHaveMap_14,
#line 1136 "interval.m"
  MR_Word backend_libs__interval__InsertMap_15,
#line 1136 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_16);

#line 1105 "interval.m"
static void MR_CALL 
backend_libs__interval__create_shadow_vars_10_p_0(
#line 1105 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1105 "interval.m"
  MR_Word backend_libs__interval__VarsToExtract_2,
#line 1105 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_0_3,
#line 1105 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarSet_4,
#line 1105 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_0_5,
#line 1105 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarTypes_6,
#line 1105 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_7,
#line 1105 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_8,
#line 1105 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_0_9,
#line 1105 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VoidRename_10);

#line 1054 "interval.m"
static void MR_CALL 
backend_libs__interval__make_inserted_goals_7_p_0(
#line 1054 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_1,
#line 1054 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_2,
#line 1054 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_3,
#line 1054 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_4,
#line 1054 "interval.m"
  MR_Word backend_libs__interval__HeadVar__5_5,
#line 1054 "interval.m"
  MR_Word backend_libs__interval__HeadVar__6_6,
#line 1054 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7);

#line 1043 "interval.m"
static void MR_CALL 
backend_libs__interval__insert_goals_after_7_p_0(
#line 1043 "interval.m"
  MR_Word backend_libs__interval__BranchesGoal_8,
#line 1043 "interval.m"
  MR_Word * backend_libs__interval__Goal_9,
#line 1043 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_17,
#line 1043 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_18,
#line 1043 "interval.m"
  MR_Word * backend_libs__interval__VarRename_11,
#line 1043 "interval.m"
  MR_Word backend_libs__interval__Inserts_12,
#line 1043 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_13);

#line 1033 "interval.m"
static void MR_CALL 
backend_libs__interval__lookup_inserts_3_p_0(
#line 1033 "interval.m"
  MR_Word backend_libs__interval__InsertMap_4,
#line 1033 "interval.m"
  MR_Word backend_libs__interval__Anchor_5,
#line 1033 "interval.m"
  MR_Word * backend_libs__interval__Inserts_6);

#line 883 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_goal_8_p_0(
#line 883 "interval.m"
  MR_Word backend_libs__interval__Goal0_9,
#line 883 "interval.m"
  MR_Word * backend_libs__interval__Goal_10,
#line 883 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_114,
#line 883 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_115,
#line 883 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_116,
#line 883 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_117,
#line 883 "interval.m"
  MR_Word backend_libs__interval__InsertMap_13,
#line 883 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_14);

#line 859 "interval.m"
static void MR_CALL 
backend_libs__interval__record_model_non_anchor_3_p_0(
#line 859 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 859 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 859 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9);

#line 842 "interval.m"
static void MR_CALL 
backend_libs__interval__require_access_3_p_0(
#line 842 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 842 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 842 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9);

#line 834 "interval.m"
static void MR_CALL 
backend_libs__interval__require_flushed_3_p_0(
#line 834 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 834 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 834 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9);

#line 827 "interval.m"
static void MR_CALL 
backend_libs__interval__require_in_regs_3_p_0(
#line 827 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 827 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 827 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8);

#line 784 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_no_succ_3_p_0(
#line 784 "interval.m"
  MR_Word backend_libs__interval__Id_4,
#line 784 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 784 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10);

#line 772 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_succ_4_p_0(
#line 772 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 772 "interval.m"
  MR_Word backend_libs__interval__Succ_6,
#line 772 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 772 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12);

#line 764 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_start_4_p_0(
#line 764 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 764 "interval.m"
  MR_Word backend_libs__interval__Start_6,
#line 764 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 764 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11);

#line 756 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_end_4_p_0(
#line 756 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 756 "interval.m"
  MR_Word backend_libs__interval__End_6,
#line 756 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 756 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11);

#line 735 "interval.m"
static void MR_CALL 
backend_libs__interval__record_branch_end_info_3_p_0(
#line 735 "interval.m"
  MR_Word backend_libs__interval__GoalId_4,
#line 735 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 735 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13);

#line 723 "interval.m"
static void MR_CALL 
backend_libs__interval__new_interval_id_3_p_0(
#line 723 "interval.m"
  MR_Word * backend_libs__interval__Id_4,
#line 723 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 723 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12);

#line 717 "interval.m"
static void MR_CALL 
backend_libs__interval__set_cur_interval_3_p_0(
#line 717 "interval.m"
  MR_Word backend_libs__interval__CurInterval_4,
#line 717 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 717 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7);

#line 713 "interval.m"
static void MR_CALL 
backend_libs__interval__get_cur_interval_2_p_0(
#line 713 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 713 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3);

#line 703 "interval.m"
static void MR_CALL 
backend_libs__interval__gather_interval_vars_4_p_0(
#line 703 "interval.m"
  MR_Word backend_libs__interval__IntervalVarMap_5,
#line 703 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6,
#line 703 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_0_9,
#line 703 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_10);

#line 683 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1(
#line 683 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 683 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 683 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 683 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 676 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(
#line 676 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 676 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17,
#line 676 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_18);

#line 670 "interval.m"
static void MR_CALL 
backend_libs__interval__one_open_interval_3_p_0(
#line 670 "interval.m"
  MR_Word backend_libs__interval__IntervalId_4,
#line 670 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 670 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7);

#line 665 "interval.m"
static void MR_CALL 
backend_libs__interval__no_open_intervals_2_p_0(
#line 665 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4,
#line 665 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_5);

#line 659 "interval.m"
static void MR_CALL 
backend_libs__interval__set_open_intervals_3_p_0(
#line 659 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_4,
#line 659 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 659 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7);

#line 654 "interval.m"
static void MR_CALL 
backend_libs__interval__get_open_intervals_2_p_0(
#line 654 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3,
#line 654 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_4);

#line 621 "interval.m"
static void MR_CALL 
backend_libs__interval__reached_cond_then_3_p_0(
#line 621 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_4,
#line 621 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 621 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13);

#line 594 "interval.m"
static void MR_CALL 
backend_libs__interval__enter_branch_tail_4_p_0(
#line 594 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_5,
#line 594 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 594 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 594 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10);

#line 526 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_cases_10_p_0(
#line 526 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 526 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 526 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_2,
#line 526 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_3,
#line 526 "interval.m"
  MR_Word backend_libs__interval__BeforeId_4,
#line 526 "interval.m"
  MR_Word backend_libs__interval__AfterId_5,
#line 526 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__6_6,
#line 526 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 526 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8,
#line 526 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_9,
#line 526 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_10);

#line 510 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_disj_11_p_0(
#line 510 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 510 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 510 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_2,
#line 510 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_3,
#line 510 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_4,
#line 510 "interval.m"
  MR_Word backend_libs__interval__BeforeId_5,
#line 510 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 510 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7,
#line 510 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 510 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9,
#line 510 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_10,
#line 510 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_11);

#line 427 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(
#line 427 "interval.m"
  MR_Word backend_libs__interval__ModuleInfo_1,
#line 427 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2);

#line 1344 "interval.m"
static void MR_CALL 
backend_libs__interval__write_int_list_3_p_0_1(
#line 1344 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1344 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1270 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_2(
#line 1270 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1270 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1270 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1270 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1266 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_1(
#line 1266 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1266 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1266 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1266 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 357 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_2(
#line 357 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 357 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);

#line 356 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_1(
#line 356 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 356 "interval.m"
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



#line 1847 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1855 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0
  }
};

#line 1864 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1872 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1880 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1889 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1897 "backend_libs.interval.c"
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

#line 1912 "backend_libs.interval.c"
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

#line 1927 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_2[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1933 "backend_libs.interval.c"
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

#line 1948 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_3[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1953 "backend_libs.interval.c"
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

#line 1968 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_4[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1974 "backend_libs.interval.c"
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

#line 1989 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_5[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1994 "backend_libs.interval.c"
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

#line 2009 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_0[2] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1
};

#line 2015 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2
};

#line 2020 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3
};

#line 2025 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3[2] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5
};

#line 2031 "backend_libs.interval.c"
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

#line 2055 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0[6] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0
};

#line 2065 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2075 "backend_libs.interval.c"
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

#line 2092 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2100 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_follow_info_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2106 "backend_libs.interval.c"
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

#line 2121 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0
};

#line 2126 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0
  }
};

#line 2135 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0
};

#line 2140 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0[1] = {
  (MR_Integer) 0
};

#line 2145 "backend_libs.interval.c"
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

#line 2162 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0 = {
  (MR_String) "branch_ite",
  (MR_Integer) 0
};

#line 2168 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1 = {
  (MR_String) "branch_disj",
  (MR_Integer) 1
};

#line 2174 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2 = {
  (MR_String) "branch_switch",
  (MR_Integer) 2
};

#line 2180 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3 = {
  (MR_String) "branch_neg",
  (MR_Integer) 3
};

#line 2186 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4 = {
  (MR_String) "branch_par_conj",
  (MR_Integer) 4
};

#line 2192 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_branch_construct_0[5] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4
};

#line 2201 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0[5] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2
};

#line 2210 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2219 "backend_libs.interval.c"
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

#line 2236 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_branch_end_info_0_0[3] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2243 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_branch_end_info_0_0[3] = {
  (MR_String) "flushed_after_branch",
  (MR_String) "accessed_after_branch",
  (MR_String) "interval_after_branch"
};

#line 2250 "backend_libs.interval.c"
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

#line 2265 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0
};

#line 2270 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_branch_end_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0
  }
};

#line 2279 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_branch_end_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0
};

#line 2284 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_end_info_0[1] = {
  (MR_Integer) 0
};

#line 2289 "backend_libs.interval.c"
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

#line 2306 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2314 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_TypeInfo) &backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2323 "backend_libs.interval.c"
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

#line 2340 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_insert_spec_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2346 "backend_libs.interval.c"
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

#line 2361 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0
};

#line 2366 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0
  }
};

#line 2375 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0
};

#line 2380 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0[1] = {
  (MR_Integer) 0
};

#line 2385 "backend_libs.interval.c"
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

#line 2402 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0[1] = {
  (MR_Integer) 0
};

#line 2407 "backend_libs.interval.c"
static const MR_NotagFunctorDesc backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0 = {
  (MR_String) "interval_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2414 "backend_libs.interval.c"
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

#line 2431 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0
  }
};

#line 2440 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0
  }
};

#line 2449 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2458 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0
  }
};

#line 2467 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2475 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2484 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2492 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2501 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2510 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2518 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2527 "backend_libs.interval.c"
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

#line 2547 "backend_libs.interval.c"
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

#line 2567 "backend_libs.interval.c"
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

#line 2582 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0
};

#line 2587 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0
  }
};

#line 2596 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0
};

#line 2601 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0[1] = {
  (MR_Integer) 0
};

#line 2606 "backend_libs.interval.c"
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

#line 2623 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2632 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2639 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0[3] = {
  (MR_String) "ip_module_info",
  (MR_String) "ip_var_types",
  (MR_String) "ip_at_most_zero_calls"
};

#line 2646 "backend_libs.interval.c"
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

#line 2661 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0
};

#line 2666 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0
  }
};

#line 2675 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0
};

#line 2680 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0[1] = {
  (MR_Integer) 0
};

#line 2685 "backend_libs.interval.c"
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

#line 2702 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2710 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_var_info_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2716 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_var_info_0_0[2] = {
  (MR_String) "ivi_varset",
  (MR_String) "ivi_vartypes"
};

#line 2722 "backend_libs.interval.c"
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

#line 2737 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0
};

#line 2742 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0
  }
};

#line 2751 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_var_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0
};

#line 2756 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2761 "backend_libs.interval.c"
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

#line 2778 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0 = {
  (MR_String) "needs_flush",
  (MR_Integer) 0
};

#line 2784 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1 = {
  (MR_String) "doesnt_need_flush",
  (MR_Integer) 1
};

#line 2790 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_maybe_needs_flush_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1
};

#line 2796 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0
};

#line 2802 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2808 "backend_libs.interval.c"
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

#line 2825 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2834 "backend_libs.interval.c"
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

#line 2851 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0 = {
  (MR_String) "has_resume_save",
  (MR_Integer) 0
};

#line 2857 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1 = {
  (MR_String) "has_no_resume_save",
  (MR_Integer) 1
};

#line 2863 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_resume_save_status_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1
};

#line 2869 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0
};

#line 2875 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2881 "backend_libs.interval.c"
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

#line 2898 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_save_point_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 2904 "backend_libs.interval.c"
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

#line 2919 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0
};

#line 2924 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0
  }
};

#line 2933 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0
};

#line 2938 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0[1] = {
  (MR_Integer) 0
};

#line 2943 "backend_libs.interval.c"
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

#line 2960 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0 = {
  (MR_String) "save_point_call_site",
  (MR_Integer) 0
};

#line 2966 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1 = {
  (MR_String) "save_point_resume_point",
  (MR_Integer) 1
};

#line 2972 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_save_point_type_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1
};

#line 2978 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1
};

#line 2984 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2990 "backend_libs.interval.c"
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

#line 3007 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1[1] = {
  (MR_String) "T"
};

#line 3012 "backend_libs.interval.c"
static const MR_TypeClassMethod backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1[1] = {
  {
    (MR_String) "use_cell",
    (MR_Integer) 8,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 3021 "backend_libs.interval.c"
static const MR_TypeClassId backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1 = {
  (MR_String) "backend_libs.interval",
  (MR_String) "build_interval_info_acc",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1,
  backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1
};

#line 3032 "backend_libs.interval.c"
const MR_TypeClassDeclStruct backend_libs__interval__backend_libs__interval__type_class_decl_build_interval_info_acc_1 = {
  &backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3040 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0_10001(
#line 3043 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3045 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3047 "backend_libs.interval.c"
{
#line 3049 "backend_libs.interval.c"
  {
#line 3051 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3054 "backend_libs.interval.c"
    {
#line 3056 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____anchor_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3059 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3061 "backend_libs.interval.c"
  }
#line 3063 "backend_libs.interval.c"
}

#line 3066 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_0_0_10001(
#line 3069 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3071 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3073 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3075 "backend_libs.interval.c"
{
#line 3077 "backend_libs.interval.c"
  {
#line 3079 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3082 "backend_libs.interval.c"
    {
#line 3084 "backend_libs.interval.c"
      backend_libs__interval____Compare____anchor_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3087 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3089 "backend_libs.interval.c"
  }
#line 3091 "backend_libs.interval.c"
}

#line 3094 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0_10001(
#line 3097 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3099 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3101 "backend_libs.interval.c"
{
#line 3103 "backend_libs.interval.c"
  {
#line 3105 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3108 "backend_libs.interval.c"
    {
#line 3110 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____anchor_follow_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3113 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3115 "backend_libs.interval.c"
  }
#line 3117 "backend_libs.interval.c"
}

#line 3120 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0_10001(
#line 3123 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3125 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3127 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3129 "backend_libs.interval.c"
{
#line 3131 "backend_libs.interval.c"
  {
#line 3133 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3136 "backend_libs.interval.c"
    {
#line 3138 "backend_libs.interval.c"
      backend_libs__interval____Compare____anchor_follow_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3141 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3143 "backend_libs.interval.c"
  }
#line 3145 "backend_libs.interval.c"
}

#line 3148 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0_10001(
#line 3151 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3153 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3155 "backend_libs.interval.c"
{
#line 3157 "backend_libs.interval.c"
  {
#line 3159 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3162 "backend_libs.interval.c"
    {
#line 3164 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____branch_construct_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3167 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3169 "backend_libs.interval.c"
  }
#line 3171 "backend_libs.interval.c"
}

#line 3174 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0_10001(
#line 3177 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3179 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3181 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3183 "backend_libs.interval.c"
{
#line 3185 "backend_libs.interval.c"
  {
#line 3187 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3190 "backend_libs.interval.c"
    {
#line 3192 "backend_libs.interval.c"
      backend_libs__interval____Compare____branch_construct_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3195 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3197 "backend_libs.interval.c"
  }
#line 3199 "backend_libs.interval.c"
}

#line 3202 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_end_info_0_0_10001(
#line 3205 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3207 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3209 "backend_libs.interval.c"
{
#line 3211 "backend_libs.interval.c"
  {
#line 3213 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3216 "backend_libs.interval.c"
    {
#line 3218 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____branch_end_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3221 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3223 "backend_libs.interval.c"
  }
#line 3225 "backend_libs.interval.c"
}

#line 3228 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0_10001(
#line 3231 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3233 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3235 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3237 "backend_libs.interval.c"
{
#line 3239 "backend_libs.interval.c"
  {
#line 3241 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3244 "backend_libs.interval.c"
    {
#line 3246 "backend_libs.interval.c"
      backend_libs__interval____Compare____branch_end_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3249 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3251 "backend_libs.interval.c"
  }
#line 3253 "backend_libs.interval.c"
}

#line 3256 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0_10001(
#line 3259 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3261 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3263 "backend_libs.interval.c"
{
#line 3265 "backend_libs.interval.c"
  {
#line 3267 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3270 "backend_libs.interval.c"
    {
#line 3272 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____insert_map_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3275 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3277 "backend_libs.interval.c"
  }
#line 3279 "backend_libs.interval.c"
}

#line 3282 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0_10001(
#line 3285 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3287 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3289 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3291 "backend_libs.interval.c"
{
#line 3293 "backend_libs.interval.c"
  {
#line 3295 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3298 "backend_libs.interval.c"
    {
#line 3300 "backend_libs.interval.c"
      backend_libs__interval____Compare____insert_map_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3303 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3305 "backend_libs.interval.c"
  }
#line 3307 "backend_libs.interval.c"
}

#line 3310 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0_10001(
#line 3313 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3315 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3317 "backend_libs.interval.c"
{
#line 3319 "backend_libs.interval.c"
  {
#line 3321 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3324 "backend_libs.interval.c"
    {
#line 3326 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____insert_spec_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3329 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3331 "backend_libs.interval.c"
  }
#line 3333 "backend_libs.interval.c"
}

#line 3336 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0_10001(
#line 3339 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3341 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3343 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3345 "backend_libs.interval.c"
{
#line 3347 "backend_libs.interval.c"
  {
#line 3349 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3352 "backend_libs.interval.c"
    {
#line 3354 "backend_libs.interval.c"
      backend_libs__interval____Compare____insert_spec_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3357 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3359 "backend_libs.interval.c"
  }
#line 3361 "backend_libs.interval.c"
}

#line 3364 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0_10001(
#line 3367 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3369 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3371 "backend_libs.interval.c"
{
#line 3373 "backend_libs.interval.c"
  {
#line 3375 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3378 "backend_libs.interval.c"
    {
#line 3380 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_id_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3383 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3385 "backend_libs.interval.c"
  }
#line 3387 "backend_libs.interval.c"
}

#line 3390 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0_10001(
#line 3393 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3395 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3397 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3399 "backend_libs.interval.c"
{
#line 3401 "backend_libs.interval.c"
  {
#line 3403 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3406 "backend_libs.interval.c"
    {
#line 3408 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_id_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3411 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3413 "backend_libs.interval.c"
  }
#line 3415 "backend_libs.interval.c"
}

#line 3418 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0_10001(
#line 3421 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3423 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3425 "backend_libs.interval.c"
{
#line 3427 "backend_libs.interval.c"
  {
#line 3429 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3432 "backend_libs.interval.c"
    {
#line 3434 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3437 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3439 "backend_libs.interval.c"
  }
#line 3441 "backend_libs.interval.c"
}

#line 3444 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0_10001(
#line 3447 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3449 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3451 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3453 "backend_libs.interval.c"
{
#line 3455 "backend_libs.interval.c"
  {
#line 3457 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3460 "backend_libs.interval.c"
    {
#line 3462 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3465 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3467 "backend_libs.interval.c"
  }
#line 3469 "backend_libs.interval.c"
}

#line 3472 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0_10001(
#line 3475 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3477 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3479 "backend_libs.interval.c"
{
#line 3481 "backend_libs.interval.c"
  {
#line 3483 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3486 "backend_libs.interval.c"
    {
#line 3488 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_params_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3491 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3493 "backend_libs.interval.c"
  }
#line 3495 "backend_libs.interval.c"
}

#line 3498 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0_10001(
#line 3501 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3503 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3505 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3507 "backend_libs.interval.c"
{
#line 3509 "backend_libs.interval.c"
  {
#line 3511 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3514 "backend_libs.interval.c"
    {
#line 3516 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_params_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3519 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3521 "backend_libs.interval.c"
  }
#line 3523 "backend_libs.interval.c"
}

#line 3526 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0_10001(
#line 3529 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3531 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3533 "backend_libs.interval.c"
{
#line 3535 "backend_libs.interval.c"
  {
#line 3537 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3540 "backend_libs.interval.c"
    {
#line 3542 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_var_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3545 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3547 "backend_libs.interval.c"
  }
#line 3549 "backend_libs.interval.c"
}

#line 3552 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0_10001(
#line 3555 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3557 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3559 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3561 "backend_libs.interval.c"
{
#line 3563 "backend_libs.interval.c"
  {
#line 3565 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3568 "backend_libs.interval.c"
    {
#line 3570 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_var_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3573 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3575 "backend_libs.interval.c"
  }
#line 3577 "backend_libs.interval.c"
}

#line 3580 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0_10001(
#line 3583 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3585 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3587 "backend_libs.interval.c"
{
#line 3589 "backend_libs.interval.c"
  {
#line 3591 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3594 "backend_libs.interval.c"
    {
#line 3596 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____maybe_needs_flush_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3599 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3601 "backend_libs.interval.c"
  }
#line 3603 "backend_libs.interval.c"
}

#line 3606 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0_10001(
#line 3609 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3611 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3613 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3615 "backend_libs.interval.c"
{
#line 3617 "backend_libs.interval.c"
  {
#line 3619 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3622 "backend_libs.interval.c"
    {
#line 3624 "backend_libs.interval.c"
      backend_libs__interval____Compare____maybe_needs_flush_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3627 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3629 "backend_libs.interval.c"
  }
#line 3631 "backend_libs.interval.c"
}

#line 3634 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0_10001(
#line 3637 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3639 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3641 "backend_libs.interval.c"
{
#line 3643 "backend_libs.interval.c"
  {
#line 3645 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3648 "backend_libs.interval.c"
    {
#line 3650 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____rename_map_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3653 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3655 "backend_libs.interval.c"
  }
#line 3657 "backend_libs.interval.c"
}

#line 3660 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0_10001(
#line 3663 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3665 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3667 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3669 "backend_libs.interval.c"
{
#line 3671 "backend_libs.interval.c"
  {
#line 3673 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3676 "backend_libs.interval.c"
    {
#line 3678 "backend_libs.interval.c"
      backend_libs__interval____Compare____rename_map_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3681 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3683 "backend_libs.interval.c"
  }
#line 3685 "backend_libs.interval.c"
}

#line 3688 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0_10001(
#line 3691 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3693 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3695 "backend_libs.interval.c"
{
#line 3697 "backend_libs.interval.c"
  {
#line 3699 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3702 "backend_libs.interval.c"
    {
#line 3704 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____resume_save_status_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3707 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3709 "backend_libs.interval.c"
  }
#line 3711 "backend_libs.interval.c"
}

#line 3714 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0_10001(
#line 3717 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3719 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3721 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3723 "backend_libs.interval.c"
{
#line 3725 "backend_libs.interval.c"
  {
#line 3727 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3730 "backend_libs.interval.c"
    {
#line 3732 "backend_libs.interval.c"
      backend_libs__interval____Compare____resume_save_status_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3735 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3737 "backend_libs.interval.c"
  }
#line 3739 "backend_libs.interval.c"
}

#line 3742 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0_10001(
#line 3745 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3747 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3749 "backend_libs.interval.c"
{
#line 3751 "backend_libs.interval.c"
  {
#line 3753 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3756 "backend_libs.interval.c"
    {
#line 3758 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____save_point_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3761 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3763 "backend_libs.interval.c"
  }
#line 3765 "backend_libs.interval.c"
}

#line 3768 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_0_0_10001(
#line 3771 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3773 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3775 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3777 "backend_libs.interval.c"
{
#line 3779 "backend_libs.interval.c"
  {
#line 3781 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3784 "backend_libs.interval.c"
    {
#line 3786 "backend_libs.interval.c"
      backend_libs__interval____Compare____save_point_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3789 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3791 "backend_libs.interval.c"
  }
#line 3793 "backend_libs.interval.c"
}

#line 3796 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0_10001(
#line 3799 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3801 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3803 "backend_libs.interval.c"
{
#line 3805 "backend_libs.interval.c"
  {
#line 3807 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3810 "backend_libs.interval.c"
    {
#line 3812 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____save_point_type_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3815 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3817 "backend_libs.interval.c"
  }
#line 3819 "backend_libs.interval.c"
}

#line 3822 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0_10001(
#line 3825 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3827 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3829 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3831 "backend_libs.interval.c"
{
#line 3833 "backend_libs.interval.c"
  {
#line 3835 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3838 "backend_libs.interval.c"
    {
#line 3840 "backend_libs.interval.c"
      backend_libs__interval____Compare____save_point_type_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3843 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3845 "backend_libs.interval.c"
  }
#line 3847 "backend_libs.interval.c"
}

#line 1188 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(
#line 1188 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1188 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1188 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1188 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1188 "interval.m"
  MR_Word backend_libs__interval__Inserts_6,
#line 1188 "interval.m"
  MR_Word backend_libs__interval__InsertMap_7,
#line 1188 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_8)
#line 1188 "interval.m"
{
#line 1193 "interval.m"
  {
#line 1193 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1193 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1193 "interval.m"
      {
#line 1193 "interval.m"
        *backend_libs__interval__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1193 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_4 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_3;
#line 1193 "interval.m"
      }
#line 1193 "interval.m"
    else
#line 1195 "interval.m"
      {
#line 1195 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_40_40 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1195 "interval.m"
        MR_Word backend_libs__interval__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1195 "interval.m"
        MR_Word backend_libs__interval__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1195 "interval.m"
        MR_Word backend_libs__interval__Goal_18;
#line 1195 "interval.m"
        MR_Word backend_libs__interval__Goals_19;
#line 1195 "interval.m"
        MR_Word backend_libs__interval__VarRename1_25;
#line 1195 "interval.m"
        MR_Word backend_libs__interval__InsertGoals_26;
#line 1195 "interval.m"
        MR_Word backend_libs__interval__GoalInfo0_28;
#line 1195 "interval.m"
        MR_Word backend_libs__interval__Goal1_29;
#line 1195 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_33_33;
#line 1195 "interval.m"
        MR_Word backend_libs__interval__V_34_34;
#line 1195 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_35_35;
#line 1195 "interval.m"
        MR_Word backend_libs__interval__V_36_36;
#line 1195 "interval.m"
        MR_Word backend_libs__interval__V_37_37;
#line 1198 "interval.m"
        MR_Word backend_libs__interval__V_27_27;
#line 1199 "interval.m"
        MR_Word backend_libs__interval__V_30_30;

#line 1196 "interval.m"
        {
#line 1196 "interval.m"
          backend_libs__interval__V_34_34 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_40_40, backend_libs__interval__TypeInfo_40_40);
        }
#line 1196 "interval.m"
        {
#line 1196 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_0_3, &backend_libs__interval__STATE_VARIABLE_VarInfo_33_33, backend_libs__interval__V_34_34, &backend_libs__interval__VarRename1_25, backend_libs__interval__Inserts_6, backend_libs__interval__MaybeFeature_8, &backend_libs__interval__InsertGoals_26);
        }
#line 1198 "interval.m"
        backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_16, (MR_Integer) 0)));
#line 1198 "interval.m"
        backend_libs__interval__GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_16, (MR_Integer) 1)));
#line 1199 "interval.m"
        {
#line 1199 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Goal0_16, &backend_libs__interval__Goal1_29, backend_libs__interval__STATE_VARIABLE_VarInfo_33_33, &backend_libs__interval__STATE_VARIABLE_VarInfo_35_35, backend_libs__interval__VarRename1_25, &backend_libs__interval__V_30_30, backend_libs__interval__InsertMap_7, backend_libs__interval__MaybeFeature_8);
        }
#line 1201 "interval.m"
        {
#line 1201 "interval.m"
          backend_libs__interval__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_37_37, 0) = ((MR_Box) (backend_libs__interval__Goal1_29));
#line 1201 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1201 "interval.m"
        }
#line 1201 "interval.m"
        {
#line 1201 "interval.m"
          backend_libs__interval__V_36_36 = mercury__list__append_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, backend_libs__interval__InsertGoals_26, backend_libs__interval__V_37_37);
        }
#line 1201 "interval.m"
        {
#line 1201 "interval.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_36_36, backend_libs__interval__GoalInfo0_28, &backend_libs__interval__Goal_18);
        }
#line 1202 "interval.m"
        {
#line 1202 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(backend_libs__interval__Goals0_17, &backend_libs__interval__Goals_19, backend_libs__interval__STATE_VARIABLE_VarInfo_35_35, backend_libs__interval__STATE_VARIABLE_VarInfo_4, backend_libs__interval__Inserts_6, backend_libs__interval__InsertMap_7, backend_libs__interval__MaybeFeature_8);
        }
#line 1194 "interval.m"
        {
#line 1194 "interval.m"
          MR_Word base;
#line 1194 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "interval.m"
          *backend_libs__interval__HeadVar__2_2 = base;
#line 1194 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Goal_18));
#line 1194 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__Goals_19));
#line 1194 "interval.m"
        }
#line 1195 "interval.m"
      }
#line 1193 "interval.m"
  }
#line 1188 "interval.m"
}

#line 638 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(
#line 638 "interval.m"
  MR_Word backend_libs__interval__StartArchor_9,
#line 638 "interval.m"
  MR_Word backend_libs__interval__BeforeId_10,
#line 638 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeVars_11,
#line 638 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_12,
#line 638 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15,
#line 638 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_16)
#line 638 "interval.m"
{
#line 643 "interval.m"
  {
#line 643 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 643 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17;
#line 643 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18;
#line 643 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19;
#line 643 "interval.m"
    MR_Word backend_libs__interval__EndMap0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 12)));
#line 643 "interval.m"
    MR_Word backend_libs__interval__EndMap_27;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 0)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 1)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 2)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 3)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 4)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 5)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 6)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 7)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 8)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 9)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 10)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 11)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 13)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 14)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 15)));
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_45_45;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_54_54;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_55_55;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_57_57;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_56_56;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_73_73;

#line 761 "interval.m"
    {
#line 761 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__BeforeId_10)), ((MR_Box) (backend_libs__interval__StartArchor_9)), backend_libs__interval__EndMap0_26, &backend_libs__interval__EndMap_27);
    }
#line 762 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 0)));
#line 762 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 1)));
#line 762 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 2)));
#line 762 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 3)));
#line 762 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 4)));
#line 762 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 5)));
#line 762 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 6)));
#line 762 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 7)));
#line 762 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 8)));
#line 762 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 9)));
#line 762 "interval.m"
    backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 10)));
#line 762 "interval.m"
    backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 11)));
#line 762 "interval.m"
    backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 12)));
#line 762 "interval.m"
    backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 13)));
#line 762 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 14)));
#line 762 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 15)));
#line 762 "interval.m"
    {
#line 762 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 0) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 1) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 2) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 3) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 4) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 5) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 6) = ((MR_Box) (backend_libs__interval__V_50_50));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 7) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 8) = ((MR_Box) (backend_libs__interval__V_52_52));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 9) = ((MR_Box) (backend_libs__interval__V_53_53));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 10) = ((MR_Box) (backend_libs__interval__V_54_54));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 11) = ((MR_Box) (backend_libs__interval__V_55_55));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 12) = ((MR_Box) (backend_libs__interval__EndMap_27));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 13) = ((MR_Box) (backend_libs__interval__V_57_57));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 14) = ((MR_Box) (backend_libs__interval__V_58_58));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 15) = ((MR_Box) (backend_libs__interval__V_59_59));
#line 762 "interval.m"
    }
#line 648 "interval.m"
    if ((backend_libs__interval__MaybeResumeVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 649 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17;
#line 648 "interval.m"
    else
#line 646 "interval.m"
      {
#line 646 "interval.m"
        MR_Word backend_libs__interval__ResumeVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeResumeVars_11, (MR_Integer) 0)));

#line 647 "interval.m"
        {
#line 647 "interval.m"
          backend_libs__interval__require_flushed_3_p_0(backend_libs__interval__ResumeVars_14, backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18);
        }
#line 646 "interval.m"
      }
#line 721 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 0)));
#line 721 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 1)));
#line 721 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 2)));
#line 721 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 3)));
#line 721 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 4)));
#line 721 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 5)));
#line 721 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 6)));
#line 721 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 7)));
#line 721 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 8)));
#line 721 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 9)));
#line 721 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 10)));
#line 721 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 11)));
#line 721 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 12)));
#line 721 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 13)));
#line 721 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 14)));
#line 721 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 15)));
#line 721 "interval.m"
    {
#line 721 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 0) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 1) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 2) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 3) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 4) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 5) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 6) = ((MR_Box) (backend_libs__interval__BeforeId_10));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 7) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 8) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 9) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 10) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 11) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 12) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 13) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 14) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 15) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 721 "interval.m"
    }
#line 652 "interval.m"
    {
#line 652 "interval.m"
      backend_libs__interval__set_open_intervals_3_p_0(backend_libs__interval__OpenIntervals_12, backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_16);
#line 652 "interval.m"
      return;
    }
#line 643 "interval.m"
  }
#line 638 "interval.m"
}

#line 604 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(
#line 604 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_9,
#line 604 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_10,
#line 604 "interval.m"
  MR_Word backend_libs__interval__BeforeId_11,
#line 604 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_12,
#line 604 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16,
#line 604 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_17,
#line 604 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_18,
#line 604 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_19)
#line 604 "interval.m"
{
#line 609 "interval.m"
  {
#line 609 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 609 "interval.m"
    MR_Word backend_libs__interval__BranchStartId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 6)));
#line 609 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20;
#line 609 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21;
#line 609 "interval.m"
    MR_Word backend_libs__interval__StartMap0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 11)));
#line 609 "interval.m"
    MR_Word backend_libs__interval__StartMap_46;
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 0)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 1)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 2)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 3)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 4)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 5)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 7)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 8)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 9)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 10)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 12)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 13)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 14)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 15)));
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_93_93;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_94_94;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_95_95;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_96_96;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_97_97;

#line 769 "interval.m"
    {
#line 769 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__BranchStartId_15)), ((MR_Box) (backend_libs__interval__StartAnchor_10)), backend_libs__interval__StartMap0_45, &backend_libs__interval__StartMap_46);
    }
#line 770 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 0)));
#line 770 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 1)));
#line 770 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 2)));
#line 770 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 3)));
#line 770 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 4)));
#line 770 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 5)));
#line 770 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 6)));
#line 770 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 7)));
#line 770 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 8)));
#line 770 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 9)));
#line 770 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 10)));
#line 770 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 11)));
#line 770 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 12)));
#line 770 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 13)));
#line 770 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 14)));
#line 770 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 15)));
#line 770 "interval.m"
    {
#line 770 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 0) = ((MR_Box) (backend_libs__interval__V_63_63));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 1) = ((MR_Box) (backend_libs__interval__V_64_64));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 2) = ((MR_Box) (backend_libs__interval__V_65_65));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 3) = ((MR_Box) (backend_libs__interval__V_66_66));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 4) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 5) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 6) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 7) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 8) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 9) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 10) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 11) = ((MR_Box) (backend_libs__interval__StartMap_46));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 12) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 13) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 14) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 15) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 770 "interval.m"
    }
#line 612 "interval.m"
    {
#line 612 "interval.m"
      backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__BeforeId_11, backend_libs__interval__BranchStartId_15, backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21);
    }
#line 657 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 0)));
#line 657 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 1)));
#line 657 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 2)));
#line 657 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 3)));
#line 657 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 4)));
#line 657 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 5)));
#line 657 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 6)));
#line 657 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 7)));
#line 657 "interval.m"
    *backend_libs__interval__OpenIntervals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 8)));
#line 657 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 9)));
#line 657 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 10)));
#line 657 "interval.m"
    backend_libs__interval__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 11)));
#line 657 "interval.m"
    backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 12)));
#line 657 "interval.m"
    backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 13)));
#line 657 "interval.m"
    backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 14)));
#line 657 "interval.m"
    backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 15)));
#line 616 "interval.m"
#line 616 "interval.m"
    switch (backend_libs__interval__MaybeNeedsFlush_9) {
#line 616 "interval.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 616 "interval.m"
      case (MR_Integer) 1:
#line 615 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_IntervalInfo_17 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21;
#line 616 "interval.m"
        break;
#line 616 "interval.m"
      case (MR_Integer) 0:
#line 618 "interval.m"
        {
#line 618 "interval.m"
          backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(backend_libs__interval__StartAnchor_10, backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_17);
        }
#line 616 "interval.m"
        break;
#line 616 "interval.m"
    }
#line 609 "interval.m"
    *backend_libs__interval__STATE_VARIABLE_Acc_19 = backend_libs__interval__STATE_VARIABLE_Acc_0_18;
#line 609 "interval.m"
  }
#line 604 "interval.m"
}

#line 546 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(
#line 546 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_13,
#line 546 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeGoal_14,
#line 546 "interval.m"
  MR_Word backend_libs__interval__Construct_15,
#line 546 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_16,
#line 546 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_17,
#line 546 "interval.m"
  MR_Word * backend_libs__interval__BeforeIntervalId_18,
#line 546 "interval.m"
  MR_Word * backend_libs__interval__AfterIntervalId_19,
#line 546 "interval.m"
  MR_Word * backend_libs__interval__MaybeResumeVars_20,
#line 546 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_34,
#line 546 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_35,
#line 546 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_36,
#line 546 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_37)
#line 546 "interval.m"
{
#line 554 "interval.m"
  {
#line 554 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 554 "interval.m"
    MR_Word backend_libs__interval__GoalId_23;
#line 554 "interval.m"
    MR_Word backend_libs__interval__HasResumeSave_29;
#line 554 "interval.m"
    MR_Word backend_libs__interval__CodeModel_33;
#line 554 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 554 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40;
#line 554 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41;
#line 554 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 554 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46;
#line 554 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47;
#line 554 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48;
#line 554 "interval.m"
    MR_Word backend_libs__interval__BranchResumeMap0_59;
#line 554 "interval.m"
    MR_Word backend_libs__interval__BranchResumeMap_60;
#line 565 "interval.m"
    MR_Word backend_libs__interval__ResumeVars_27;
#line 558 "interval.m"
    MR_Word backend_libs__interval__ResumeGoalInfo_25;
#line 558 "interval.m"
    MR_Word backend_libs__interval__ResumePoint_26;
#line 558 "interval.m"
    MR_Word backend_libs__interval__ResumeLocs_28;
#line 558 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 558 "interval.m"
    MR_Word backend_libs__interval___ResumeGoalExpr_24;
#line 854 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 854 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 854 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 854 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 854 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 854 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 854 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 854 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 854 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 854 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 854 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 854 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 854 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 854 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 854 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 857 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 574 "interval.m"
    MR_Word backend_libs__interval__StoreMap_30;

#line 555 "interval.m"
    {
#line 555 "interval.m"
      backend_libs__interval__GoalId_23 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_13);
    }
#line 556 "interval.m"
    {
#line 556 "interval.m"
      backend_libs__interval__record_branch_end_info_3_p_0(backend_libs__interval__GoalId_23, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_34, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
    }
#line 558 "interval.m"
    backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__MaybeResumeGoal_14)) == (MR_mktag((MR_Integer) 1)));
#line 558 "interval.m"
    if (backend_libs__interval__succeeded)
#line 558 "interval.m"
      {
#line 558 "interval.m"
        backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeResumeGoal_14, (MR_Integer) 0)));
#line 558 "interval.m"
        backend_libs__interval___ResumeGoalExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_39_39, (MR_Integer) 0)));
#line 558 "interval.m"
        backend_libs__interval__ResumeGoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_39_39, (MR_Integer) 1)));
#line 559 "interval.m"
        {
#line 559 "interval.m"
          backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_resume_point_2_p_0(backend_libs__interval__ResumeGoalInfo_25, &backend_libs__interval__ResumePoint_26);
        }
#line 558 "interval.m"
        if (backend_libs__interval__succeeded)
#line 558 "interval.m"
          {
#line 560 "interval.m"
            backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__ResumePoint_26)) == (MR_mktag((MR_Integer) 1)));
#line 560 "interval.m"
            if (backend_libs__interval__succeeded)
#line 560 "interval.m"
              {
#line 560 "interval.m"
                backend_libs__interval__ResumeVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__ResumePoint_26, (MR_Integer) 0)));
#line 560 "interval.m"
                backend_libs__interval__ResumeLocs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__ResumePoint_26, (MR_Integer) 1)));
#line 561 "interval.m"
                backend_libs__interval__succeeded = (backend_libs__interval__ResumeLocs_28 == (MR_Integer) 0);
#line 561 "interval.m"
                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 560 "interval.m"
              }
#line 558 "interval.m"
          }
#line 558 "interval.m"
      }
#line 565 "interval.m"
    if (backend_libs__interval__succeeded)
#line 563 "interval.m"
      {
#line 563 "interval.m"
        backend_libs__interval__HasResumeSave_29 = (MR_Integer) 0;
#line 564 "interval.m"
        {
#line 564 "interval.m"
          MR_Word base;
#line 564 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 564 "interval.m"
          *backend_libs__interval__MaybeResumeVars_20 = base;
#line 564 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__ResumeVars_27));
#line 564 "interval.m"
        }
#line 563 "interval.m"
      }
#line 565 "interval.m"
    else
#line 566 "interval.m"
      {
#line 566 "interval.m"
        backend_libs__interval__HasResumeSave_29 = (MR_Integer) 1;
#line 567 "interval.m"
        *backend_libs__interval__MaybeResumeVars_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 566 "interval.m"
      }
#line 854 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 0)));
#line 854 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 1)));
#line 854 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 2)));
#line 854 "interval.m"
    backend_libs__interval__BranchResumeMap0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 3)));
#line 854 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 4)));
#line 854 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 5)));
#line 854 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 6)));
#line 854 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 7)));
#line 854 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 8)));
#line 854 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 9)));
#line 854 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 10)));
#line 854 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 11)));
#line 854 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 12)));
#line 854 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 13)));
#line 854 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 14)));
#line 854 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 15)));
#line 855 "interval.m"
    {
#line 855 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0, ((MR_Box) (backend_libs__interval__GoalId_23)), ((MR_Box) (backend_libs__interval__HasResumeSave_29)), backend_libs__interval__BranchResumeMap0_59, &backend_libs__interval__BranchResumeMap_60);
    }
#line 857 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 0)));
#line 857 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 1)));
#line 857 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 2)));
#line 857 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 3)));
#line 857 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 4)));
#line 857 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 5)));
#line 857 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 6)));
#line 857 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 7)));
#line 857 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 8)));
#line 857 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 9)));
#line 857 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 10)));
#line 857 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 11)));
#line 857 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 12)));
#line 857 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 13)));
#line 857 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 14)));
#line 857 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 15)));
#line 857 "interval.m"
    {
#line 857 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 0) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 1) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 2) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 3) = ((MR_Box) (backend_libs__interval__BranchResumeMap_60));
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 4) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 5) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 6) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 7) = ((MR_Box) (backend_libs__interval__V_84_84));
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 8) = ((MR_Box) (backend_libs__interval__V_85_85));
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 9) = ((MR_Box) (backend_libs__interval__V_86_86));
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 10) = ((MR_Box) (backend_libs__interval__V_87_87));
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 11) = ((MR_Box) (backend_libs__interval__V_88_88));
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 12) = ((MR_Box) (backend_libs__interval__V_89_89));
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 13) = ((MR_Box) (backend_libs__interval__V_90_90));
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 14) = ((MR_Box) (backend_libs__interval__V_91_91));
#line 857 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 15) = ((MR_Box) (backend_libs__interval__V_92_92));
#line 857 "interval.m"
    }
#line 570 "interval.m"
    {
#line 570 "interval.m"
      backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_store_map_2_p_0(backend_libs__interval__GoalInfo_13, &backend_libs__interval__StoreMap_30);
    }
#line 574 "interval.m"
    if (backend_libs__interval__succeeded)
#line 571 "interval.m"
      {
#line 571 "interval.m"
        MR_Word backend_libs__interval__StoreMapVarList_31;
#line 571 "interval.m"
        MR_Word backend_libs__interval__StoreMapVars_32;

#line 571 "interval.m"
        {
#line 571 "interval.m"
          mercury__map__sorted_keys_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, backend_libs__interval__StoreMap_30, &backend_libs__interval__StoreMapVarList_31);
        }
#line 572 "interval.m"
        {
#line 572 "interval.m"
          backend_libs__interval__StoreMapVars_32 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__StoreMapVarList_31);
        }
#line 573 "interval.m"
        {
#line 573 "interval.m"
          backend_libs__interval__require_flushed_3_p_0(backend_libs__interval__StoreMapVars_32, backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41);
        }
#line 571 "interval.m"
      }
#line 574 "interval.m"
    else
#line 575 "interval.m"
      {
#line 575 "interval.m"
        {
#line 575 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.reached_branch_end\'/12", (MR_String) "no store map");
#line 575 "interval.m"
          return;
        }
#line 575 "interval.m"
      }
#line 577 "interval.m"
    {
#line 577 "interval.m"
      MR_Word base;
#line 577 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 577 "interval.m"
      *backend_libs__interval__EndAnchor_17 = base;
#line 577 "interval.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 577 "interval.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (backend_libs__interval__Construct_15));
#line 577 "interval.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (backend_libs__interval__GoalId_23));
#line 577 "interval.m"
    }
#line 578 "interval.m"
    {
#line 578 "interval.m"
      MR_Word base;
#line 578 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 578 "interval.m"
      *backend_libs__interval__StartAnchor_16 = base;
#line 578 "interval.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Construct_15));
#line 578 "interval.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__GoalId_23));
#line 578 "interval.m"
    }
#line 579 "interval.m"
    {
#line 579 "interval.m"
      backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(*backend_libs__interval__EndAnchor_17, backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45);
    }
#line 580 "interval.m"
    {
#line 580 "interval.m"
      backend_libs__interval__CodeModel_33 = hlds__code_model__goal_info_get_code_model_1_f_0(backend_libs__interval__GoalInfo_13);
    }
#line 584 "interval.m"
#line 584 "interval.m"
    switch (backend_libs__interval__CodeModel_33) {
#line 584 "interval.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 584 "interval.m"
      case (MR_Integer) 0:
#line 585 "interval.m"
        backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 584 "interval.m"
        break;
#line 584 "interval.m"
      case (MR_Integer) 2:
#line 583 "interval.m"
        {
#line 583 "interval.m"
          backend_libs__interval__record_model_non_anchor_3_p_0(*backend_libs__interval__EndAnchor_17, backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46);
        }
#line 584 "interval.m"
        break;
#line 584 "interval.m"
      case (MR_Integer) 1:
#line 586 "interval.m"
        backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 584 "interval.m"
        break;
#line 584 "interval.m"
    }
#line 589 "interval.m"
    {
#line 589 "interval.m"
      backend_libs__interval__no_open_intervals_2_p_0(backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47);
    }
#line 590 "interval.m"
    {
#line 590 "interval.m"
      backend_libs__interval__get_cur_interval_2_p_0(backend_libs__interval__AfterIntervalId_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47);
    }
#line 591 "interval.m"
    {
#line 591 "interval.m"
      backend_libs__interval__record_interval_start_4_p_0(*backend_libs__interval__AfterIntervalId_19, *backend_libs__interval__EndAnchor_17, backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48);
    }
#line 592 "interval.m"
    {
#line 592 "interval.m"
      backend_libs__interval__new_interval_id_3_p_0(backend_libs__interval__BeforeIntervalId_18, backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_35);
    }
#line 554 "interval.m"
    *backend_libs__interval__STATE_VARIABLE_Acc_37 = backend_libs__interval__STATE_VARIABLE_Acc_0_36;
#line 554 "interval.m"
  }
#line 546 "interval.m"
}

#line 497 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(
#line 497 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27,
#line 497 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 497 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3,
#line 497 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_4,
#line 497 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_5,
#line 497 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_6)
#line 497 "interval.m"
{
#line 501 "interval.m"
  {
#line 501 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 501 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 501 "interval.m"
      {
#line 501 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_Acc_6 = backend_libs__interval__STATE_VARIABLE_Acc_0_5;
#line 501 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_IntervalInfo_4 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3;
#line 501 "interval.m"
      }
#line 501 "interval.m"
    else
#line 502 "interval.m"
      {
#line 502 "interval.m"
        MR_Word backend_libs__interval__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 502 "interval.m"
        MR_Word backend_libs__interval__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 502 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_23_23;
#line 502 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_24_24;

#line 507 "interval.m"
        {
#line 507 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27, backend_libs__interval__Goals_15, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_23_23, backend_libs__interval__STATE_VARIABLE_Acc_0_5, &backend_libs__interval__STATE_VARIABLE_Acc_24_24);
        }
#line 508 "interval.m"
        {
#line 508 "interval.m"
          backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27, backend_libs__interval__Goal_14, backend_libs__interval__STATE_VARIABLE_IntervalInfo_23_23, backend_libs__interval__STATE_VARIABLE_IntervalInfo_4, backend_libs__interval__STATE_VARIABLE_Acc_24_24, backend_libs__interval__STATE_VARIABLE_Acc_6);
#line 508 "interval.m"
          return;
        }
#line 502 "interval.m"
      }
#line 501 "interval.m"
  }
#line 497 "interval.m"
}

#line 441 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 441 "interval.m"
  MR_Word backend_libs__interval__Inputs_8,
#line 441 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedAcrossCall_9,
#line 441 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_10,
#line 441 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26,
#line 441 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_27,
#line 441 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_28,
#line 441 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_29)
#line 441 "interval.m"
{
#line 447 "interval.m"
  {
#line 447 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 490 "interval.m"
    if ((backend_libs__interval__MaybeNeedAcrossCall_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "interval.m"
      {
#line 492 "interval.m"
        {
#line 492 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_at_call\'/7", (MR_String) "no need across call");
#line 492 "interval.m"
          return;
        }
#line 491 "interval.m"
      }
#line 490 "interval.m"
    else
#line 449 "interval.m"
      {
#line 449 "interval.m"
        MR_Word backend_libs__interval__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 449 "interval.m"
        MR_Word backend_libs__interval__NeedAcrossCall_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeNeedAcrossCall_9, (MR_Integer) 0)));
#line 449 "interval.m"
        MR_Word backend_libs__interval__ForwardVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__NeedAcrossCall_13, (MR_Integer) 0)));
#line 449 "interval.m"
        MR_Word backend_libs__interval__ResumeVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__NeedAcrossCall_13, (MR_Integer) 1)));
#line 449 "interval.m"
        MR_Word backend_libs__interval__NondetLiveVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__NeedAcrossCall_13, (MR_Integer) 2)));
#line 449 "interval.m"
        MR_Word backend_libs__interval__VarsOnStack0_17;
#line 449 "interval.m"
        MR_Word backend_libs__interval__GoalId_18;
#line 449 "interval.m"
        MR_Word backend_libs__interval__CallAnchor_19;
#line 449 "interval.m"
        MR_Word backend_libs__interval__AfterCallId_20;
#line 449 "interval.m"
        MR_Word backend_libs__interval__BeforeCallId_21;
#line 449 "interval.m"
        MR_Word backend_libs__interval__InstMapDelta_22;
#line 449 "interval.m"
        MR_Word backend_libs__interval__IntParams_23;
#line 449 "interval.m"
        MR_Word backend_libs__interval__VarsOnStack_24;
#line 449 "interval.m"
        MR_Word backend_libs__interval__CodeModel_25;
#line 449 "interval.m"
        MR_Word backend_libs__interval__V_33_33;
#line 449 "interval.m"
        MR_Word backend_libs__interval__V_34_34;
#line 449 "interval.m"
        MR_Word backend_libs__interval__V_35_35;
#line 449 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_37_37;
#line 449 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 449 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39;
#line 449 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41;
#line 449 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_43_43;
#line 449 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44;
#line 449 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 449 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46;
#line 449 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47;
#line 449 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48;
#line 715 "interval.m"
        MR_Word backend_libs__interval__V_70_70;
#line 715 "interval.m"
        MR_Word backend_libs__interval__V_71_71;
#line 715 "interval.m"
        MR_Word backend_libs__interval__V_72_72;
#line 715 "interval.m"
        MR_Word backend_libs__interval__V_73_73;
#line 715 "interval.m"
        MR_Word backend_libs__interval__V_74_74;
#line 715 "interval.m"
        MR_Word backend_libs__interval__V_75_75;
#line 715 "interval.m"
        MR_Word backend_libs__interval__V_76_76;
#line 715 "interval.m"
        MR_Word backend_libs__interval__V_77_77;
#line 715 "interval.m"
        MR_Word backend_libs__interval__V_78_78;
#line 715 "interval.m"
        MR_Word backend_libs__interval__V_79_79;
#line 715 "interval.m"
        MR_Word backend_libs__interval__V_80_80;
#line 715 "interval.m"
        MR_Word backend_libs__interval__V_81_81;
#line 715 "interval.m"
        MR_Word backend_libs__interval__V_82_82;
#line 715 "interval.m"
        MR_Word backend_libs__interval__V_83_83;
#line 715 "interval.m"
        MR_Word backend_libs__interval__V_84_84;
#line 461 "interval.m"
        MR_Word backend_libs__interval__V_50_50;
#line 461 "interval.m"
        MR_Word backend_libs__interval__V_51_51;
#line 461 "interval.m"
        MR_Word backend_libs__interval__V_52_52;
#line 461 "interval.m"
        MR_Word backend_libs__interval__V_53_53;
#line 461 "interval.m"
        MR_Word backend_libs__interval__V_54_54;
#line 461 "interval.m"
        MR_Word backend_libs__interval__V_55_55;
#line 461 "interval.m"
        MR_Word backend_libs__interval__V_56_56;
#line 461 "interval.m"
        MR_Word backend_libs__interval__V_57_57;
#line 461 "interval.m"
        MR_Word backend_libs__interval__V_58_58;
#line 461 "interval.m"
        MR_Word backend_libs__interval__V_59_59;
#line 461 "interval.m"
        MR_Word backend_libs__interval__V_60_60;
#line 461 "interval.m"
        MR_Word backend_libs__interval__V_61_61;
#line 461 "interval.m"
        MR_Word backend_libs__interval__V_62_62;
#line 461 "interval.m"
        MR_Word backend_libs__interval__V_63_63;
#line 461 "interval.m"
        MR_Word backend_libs__interval__V_64_64;

#line 453 "interval.m"
        {
#line 453 "interval.m"
          backend_libs__interval__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_35_35, 0) = ((MR_Box) (backend_libs__interval__NondetLiveVars_16));
#line 453 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "interval.m"
        }
#line 452 "interval.m"
        {
#line 452 "interval.m"
          backend_libs__interval__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_34_34, 0) = ((MR_Box) (backend_libs__interval__ResumeVars_15));
#line 452 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_34_34, 1) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 452 "interval.m"
        }
#line 452 "interval.m"
        {
#line 452 "interval.m"
          backend_libs__interval__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_33_33, 0) = ((MR_Box) (backend_libs__interval__ForwardVars_14));
#line 452 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_33_33, 1) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 452 "interval.m"
        }
#line 452 "interval.m"
        {
#line 452 "interval.m"
          backend_libs__interval__VarsOnStack0_17 = parse_tree__set_of_var__union_list_1_f_0(backend_libs__interval__TypeCtorInfo_68_68, backend_libs__interval__V_33_33);
        }
#line 454 "interval.m"
        {
#line 454 "interval.m"
          backend_libs__interval__GoalId_18 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_10);
        }
#line 455 "interval.m"
        {
#line 455 "interval.m"
          backend_libs__interval__CallAnchor_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__CallAnchor_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 455 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__CallAnchor_19, 1) = ((MR_Box) (backend_libs__interval__GoalId_18));
#line 455 "interval.m"
        }
#line 715 "interval.m"
        backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 0)));
#line 715 "interval.m"
        backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 1)));
#line 715 "interval.m"
        backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 2)));
#line 715 "interval.m"
        backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 3)));
#line 715 "interval.m"
        backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 4)));
#line 715 "interval.m"
        backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 5)));
#line 715 "interval.m"
        backend_libs__interval__AfterCallId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 6)));
#line 715 "interval.m"
        backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 7)));
#line 715 "interval.m"
        backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 8)));
#line 715 "interval.m"
        backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 9)));
#line 715 "interval.m"
        backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 10)));
#line 715 "interval.m"
        backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 11)));
#line 715 "interval.m"
        backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 12)));
#line 715 "interval.m"
        backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 13)));
#line 715 "interval.m"
        backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 14)));
#line 715 "interval.m"
        backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 15)));
#line 457 "interval.m"
        {
#line 457 "interval.m"
          backend_libs__interval__new_interval_id_3_p_0(&backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_37_37);
        }
#line 458 "interval.m"
        {
#line 458 "interval.m"
          backend_libs__interval__record_interval_start_4_p_0(backend_libs__interval__AfterCallId_20, backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_37_37, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
        }
#line 459 "interval.m"
        {
#line 459 "interval.m"
          backend_libs__interval__record_interval_end_4_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39);
        }
#line 460 "interval.m"
        {
#line 460 "interval.m"
          backend_libs__interval__InstMapDelta_22 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(backend_libs__interval__GoalInfo_10);
        }
#line 461 "interval.m"
        backend_libs__interval__IntParams_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 0)));
#line 461 "interval.m"
        backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 1)));
#line 461 "interval.m"
        backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 2)));
#line 461 "interval.m"
        backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 3)));
#line 461 "interval.m"
        backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 4)));
#line 461 "interval.m"
        backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 5)));
#line 461 "interval.m"
        backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 6)));
#line 461 "interval.m"
        backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 7)));
#line 461 "interval.m"
        backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 8)));
#line 461 "interval.m"
        backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 9)));
#line 461 "interval.m"
        backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 10)));
#line 461 "interval.m"
        backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 11)));
#line 461 "interval.m"
        backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 12)));
#line 461 "interval.m"
        backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 13)));
#line 461 "interval.m"
        backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 14)));
#line 461 "interval.m"
        backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 15)));
#line 463 "interval.m"
        {
#line 463 "interval.m"
          backend_libs__interval__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(backend_libs__interval__InstMapDelta_22);
        }
#line 464 "interval.m"
        if (!(backend_libs__interval__succeeded))
#line 464 "interval.m"
          {
#line 464 "interval.m"
            MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_23, (MR_Integer) 2)));
#line 464 "interval.m"
            MR_Word backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_23, (MR_Integer) 0)));
#line 464 "interval.m"
            MR_Word backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_23, (MR_Integer) 1)));

#line 464 "interval.m"
            backend_libs__interval__succeeded = (backend_libs__interval__V_40_40 == (MR_Integer) 0);
#line 464 "interval.m"
          }
#line 469 "interval.m"
        if (backend_libs__interval__succeeded)
#line 467 "interval.m"
          {
#line 467 "interval.m"
            {
#line 467 "interval.m"
              backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__AfterCallId_20, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41);
            }
#line 468 "interval.m"
            backend_libs__interval__VarsOnStack_24 = backend_libs__interval__VarsOnStack0_17;
#line 467 "interval.m"
          }
#line 469 "interval.m"
        else
#line 472 "interval.m"
          {
#line 472 "interval.m"
            {
#line 472 "interval.m"
              backend_libs__interval__record_interval_no_succ_3_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41);
            }
#line 473 "interval.m"
            {
#line 473 "interval.m"
              backend_libs__interval__VarsOnStack_24 = parse_tree__set_of_var__init_0_f_0(backend_libs__interval__TypeCtorInfo_68_68);
            }
#line 472 "interval.m"
          }
#line 475 "interval.m"
        {
#line 475 "interval.m"
          backend_libs__interval__set_cur_interval_3_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_43_43);
        }
#line 476 "interval.m"
        {
#line 476 "interval.m"
          backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_43_43, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44);
        }
#line 477 "interval.m"
        {
#line 477 "interval.m"
          backend_libs__interval__CodeModel_25 = hlds__code_model__goal_info_get_code_model_1_f_0(backend_libs__interval__GoalInfo_10);
        }
#line 481 "interval.m"
#line 481 "interval.m"
        switch (backend_libs__interval__CodeModel_25) {
#line 481 "interval.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 481 "interval.m"
          case (MR_Integer) 0:
#line 482 "interval.m"
            backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44;
#line 481 "interval.m"
            break;
#line 481 "interval.m"
          case (MR_Integer) 2:
#line 480 "interval.m"
            {
#line 480 "interval.m"
              backend_libs__interval__record_model_non_anchor_3_p_0(backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45);
            }
#line 481 "interval.m"
            break;
#line 481 "interval.m"
          case (MR_Integer) 1:
#line 483 "interval.m"
            backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44;
#line 481 "interval.m"
            break;
#line 481 "interval.m"
        }
#line 486 "interval.m"
        {
#line 486 "interval.m"
          backend_libs__interval__one_open_interval_3_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46);
        }
#line 487 "interval.m"
        {
#line 487 "interval.m"
          backend_libs__interval__require_flushed_3_p_0(backend_libs__interval__VarsOnStack_24, backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47);
        }
#line 488 "interval.m"
        {
#line 488 "interval.m"
          backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__Inputs_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48);
        }
#line 489 "interval.m"
        {
#line 489 "interval.m"
          backend_libs__interval__require_access_3_p_0(backend_libs__interval__Inputs_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_27);
        }
#line 449 "interval.m"
      }
#line 447 "interval.m"
    *backend_libs__interval__STATE_VARIABLE_Acc_29 = backend_libs__interval__STATE_VARIABLE_Acc_0_28;
#line 447 "interval.m"
  }
#line 441 "interval.m"
}

#line 1335 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1335__1_2_p_0(
#line 1335 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_31,
#line 1335 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_32)
#line 1335 "interval.m"
{
#line 1335 "interval.m"
  {
#line 1335 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1335 "interval.m"
    {
#line 1335 "interval.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVar__1_31, backend_libs__interval__HeadVar__2_32);
#line 1335 "interval.m"
      return;
    }
#line 1335 "interval.m"
  }
#line 1335 "interval.m"
}

#line 1322 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_deletion__1322__1_2_p_0(
#line 1322 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_16,
#line 1322 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_17)
#line 1322 "interval.m"
{
#line 1322 "interval.m"
  {
#line 1322 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1322 "interval.m"
    {
#line 1322 "interval.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVar__1_16, backend_libs__interval__HeadVar__2_17);
#line 1322 "interval.m"
      return;
    }
#line 1322 "interval.m"
  }
#line 1322 "interval.m"
}

#line 1302 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1302__1_2_p_0(
#line 1302 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_154,
#line 1302 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_155)
#line 1302 "interval.m"
{
#line 1302 "interval.m"
  {
#line 1302 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1302 "interval.m"
    {
#line 1302 "interval.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVar__1_154, backend_libs__interval__HeadVar__2_155);
#line 1302 "interval.m"
      return;
    }
#line 1302 "interval.m"
  }
#line 1302 "interval.m"
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
#line 5609 "backend_libs.interval.c"
  {
#line 5611 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 5614 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 5616 "backend_libs.interval.c"
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
#line 5645 "backend_libs.interval.c"
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
#line 5671 "backend_libs.interval.c"
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

#line 5745 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_3_3 == backend_libs__interval__V_5_5);
#line 59 "interval.m"
        if (backend_libs__interval__succeeded)
#line 59 "interval.m"
          {
#line 5751 "backend_libs.interval.c"
            backend_libs__interval__V_10_10 = (MR_Integer) backend_libs__interval__V_4_4;
#line 5753 "backend_libs.interval.c"
            backend_libs__interval__V_11_11 = (MR_Integer) backend_libs__interval__V_6_6;
#line 5755 "backend_libs.interval.c"
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
#line 5809 "backend_libs.interval.c"
  {
#line 5811 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 5814 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 5816 "backend_libs.interval.c"
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
#line 5924 "backend_libs.interval.c"
  {
#line 5926 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 5929 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 5931 "backend_libs.interval.c"
  }
#line 136 "interval.m"
}

#line 870 "interval.m"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0(
#line 870 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 870 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 870 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 870 "interval.m"
{
#line 870 "interval.m"
  {
#line 870 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 870 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 870 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 870 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 870 "interval.m"
    if (backend_libs__interval__succeeded)
#line 5960 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 870 "interval.m"
    else
#line 870 "interval.m"
      {
#line 870 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 870 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 870 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 870 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 870 "interval.m"
        MR_Word backend_libs__interval__V_8_8;

#line 870 "interval.m"
        {
#line 870 "interval.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[7], &backend_libs__interval__V_8_8, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
        }
#line 5982 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_8_8 == (MR_Integer) 0);
#line 870 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 870 "interval.m"
        if (backend_libs__interval__succeeded)
#line 870 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_8_8;
#line 870 "interval.m"
        else
#line 870 "interval.m"
          {
#line 870 "interval.m"
            {
#line 870 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[10], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_7_7)));
#line 870 "interval.m"
              return;
            }
#line 870 "interval.m"
          }
#line 870 "interval.m"
      }
#line 870 "interval.m"
  }
#line 870 "interval.m"
}

#line 870 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0(
#line 870 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 870 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 870 "interval.m"
{
#line 870 "interval.m"
  {
#line 870 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 870 "interval.m"
    MR_Integer backend_libs__interval__CastX_7 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 870 "interval.m"
    MR_Integer backend_libs__interval__CastY_8 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 870 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_7 == backend_libs__interval__CastY_8);
#line 870 "interval.m"
    if (backend_libs__interval__succeeded)
#line 870 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 870 "interval.m"
    else
#line 870 "interval.m"
      {
#line 870 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_10_10;
#line 870 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 870 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 870 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 870 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 6049 "backend_libs.interval.c"
        {
#line 6051 "backend_libs.interval.c"
          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[7], ((MR_Box) (backend_libs__interval__V_3_3)), ((MR_Box) (backend_libs__interval__V_5_5)));
        }
#line 870 "interval.m"
        if (backend_libs__interval__succeeded)
#line 870 "interval.m"
          {
#line 6058 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_10_10 = (MR_Word) &backend_libs__interval_scalar_common_2[10];
#line 6060 "backend_libs.interval.c"
            {
#line 6062 "backend_libs.interval.c"
              return backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_10_10, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
            }
#line 870 "interval.m"
          }
#line 870 "interval.m"
      }
#line 870 "interval.m"
    return backend_libs__interval__succeeded;
#line 870 "interval.m"
  }
#line 870 "interval.m"
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
#line 6100 "backend_libs.interval.c"
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
#line 6126 "backend_libs.interval.c"
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
#line 6146 "backend_libs.interval.c"
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

#line 6224 "backend_libs.interval.c"
        {
#line 6226 "backend_libs.interval.c"
          backend_libs__interval__succeeded = hlds__hlds_module____Unify____module_info_0_0(backend_libs__interval__V_3_3, backend_libs__interval__V_6_6);
        }
#line 108 "interval.m"
        if (backend_libs__interval__succeeded)
#line 108 "interval.m"
          {
#line 6233 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_12_12 = (MR_Word) &backend_libs__interval_scalar_common_2[10];
#line 6235 "backend_libs.interval.c"
            {
#line 6237 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_12_12, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_7_7)));
            }
#line 108 "interval.m"
            if (backend_libs__interval__succeeded)
#line 6242 "backend_libs.interval.c"
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
#line 6279 "backend_libs.interval.c"
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
#line 6357 "backend_libs.interval.c"
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
#line 6377 "backend_libs.interval.c"
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
#line 6397 "backend_libs.interval.c"
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
#line 6417 "backend_libs.interval.c"
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
#line 6437 "backend_libs.interval.c"
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
#line 6457 "backend_libs.interval.c"
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
#line 6481 "backend_libs.interval.c"
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
#line 6501 "backend_libs.interval.c"
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
#line 6521 "backend_libs.interval.c"
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
#line 6541 "backend_libs.interval.c"
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
#line 6561 "backend_libs.interval.c"
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
#line 6581 "backend_libs.interval.c"
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
#line 6601 "backend_libs.interval.c"
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
#line 6621 "backend_libs.interval.c"
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
#line 6641 "backend_libs.interval.c"
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

#line 6820 "backend_libs.interval.c"
        {
#line 6822 "backend_libs.interval.c"
          backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_params_0_0(backend_libs__interval__V_3_3, backend_libs__interval__V_19_19);
        }
#line 115 "interval.m"
        if (backend_libs__interval__succeeded)
#line 115 "interval.m"
          {
#line 6829 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_37_37 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 6831 "backend_libs.interval.c"
            {
#line 6833 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_37_37, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_20_20)));
            }
#line 115 "interval.m"
            if (backend_libs__interval__succeeded)
#line 115 "interval.m"
              {
#line 6840 "backend_libs.interval.c"
                backend_libs__interval__TypeInfo_38_38 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 6842 "backend_libs.interval.c"
                {
#line 6844 "backend_libs.interval.c"
                  backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_38_38, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_21_21)));
                }
#line 115 "interval.m"
                if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                  {
#line 6851 "backend_libs.interval.c"
                    backend_libs__interval__TypeInfo_39_39 = (MR_Word) &backend_libs__interval_scalar_common_2[2];
#line 6853 "backend_libs.interval.c"
                    {
#line 6855 "backend_libs.interval.c"
                      backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_39_39, ((MR_Box) (backend_libs__interval__V_6_6)), ((MR_Box) (backend_libs__interval__V_22_22)));
                    }
#line 115 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                      {
#line 6862 "backend_libs.interval.c"
                        backend_libs__interval__TypeInfo_40_40 = (MR_Word) &backend_libs__interval_scalar_common_2[3];
#line 6864 "backend_libs.interval.c"
                        {
#line 6866 "backend_libs.interval.c"
                          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_40_40, ((MR_Box) (backend_libs__interval__V_7_7)), ((MR_Box) (backend_libs__interval__V_23_23)));
                        }
#line 115 "interval.m"
                        if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                          {
#line 6873 "backend_libs.interval.c"
                            backend_libs__interval__TypeInfo_41_41 = (MR_Word) &backend_libs__interval_scalar_common_2[4];
#line 6875 "backend_libs.interval.c"
                            {
#line 6877 "backend_libs.interval.c"
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

#line 6903 "backend_libs.interval.c"
                                    backend_libs__interval__succeeded = (backend_libs__interval__V_51_51 == backend_libs__interval__V_52_52);
#line 84 "interval.m"
                                  }
#line 115 "interval.m"
                                if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                  {
#line 6911 "backend_libs.interval.c"
                                    {
#line 6913 "backend_libs.interval.c"
                                      backend_libs__interval__succeeded = mercury__counter____Unify____counter_0_0(backend_libs__interval__V_10_10, backend_libs__interval__V_26_26);
                                    }
#line 115 "interval.m"
                                    if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                      {
#line 6920 "backend_libs.interval.c"
                                        backend_libs__interval__TypeInfo_43_43 = (MR_Word) &backend_libs__interval_scalar_common_1[5];
#line 6922 "backend_libs.interval.c"
                                        {
#line 6924 "backend_libs.interval.c"
                                          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_43_43, ((MR_Box) (backend_libs__interval__V_11_11)), ((MR_Box) (backend_libs__interval__V_27_27)));
                                        }
#line 115 "interval.m"
                                        if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                          {
#line 6931 "backend_libs.interval.c"
                                            backend_libs__interval__TypeInfo_44_44 = (MR_Word) &backend_libs__interval_scalar_common_2[5];
#line 6933 "backend_libs.interval.c"
                                            {
#line 6935 "backend_libs.interval.c"
                                              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_44_44, ((MR_Box) (backend_libs__interval__V_12_12)), ((MR_Box) (backend_libs__interval__V_28_28)));
                                            }
#line 115 "interval.m"
                                            if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                              {
#line 6942 "backend_libs.interval.c"
                                                backend_libs__interval__TypeInfo_45_45 = (MR_Word) &backend_libs__interval_scalar_common_1[6];
#line 6944 "backend_libs.interval.c"
                                                {
#line 6946 "backend_libs.interval.c"
                                                  backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_45_45, ((MR_Box) (backend_libs__interval__V_13_13)), ((MR_Box) (backend_libs__interval__V_29_29)));
                                                }
#line 115 "interval.m"
                                                if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                                  {
#line 6953 "backend_libs.interval.c"
                                                    backend_libs__interval__TypeInfo_46_46 = (MR_Word) &backend_libs__interval_scalar_common_2[6];
#line 6955 "backend_libs.interval.c"
                                                    {
#line 6957 "backend_libs.interval.c"
                                                      backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_46_46, ((MR_Box) (backend_libs__interval__V_14_14)), ((MR_Box) (backend_libs__interval__V_30_30)));
                                                    }
#line 115 "interval.m"
                                                    if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                                      {
#line 6964 "backend_libs.interval.c"
                                                        backend_libs__interval__TypeInfo_47_47 = (MR_Word) &backend_libs__interval_scalar_common_2[6];
#line 6966 "backend_libs.interval.c"
                                                        {
#line 6968 "backend_libs.interval.c"
                                                          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_47_47, ((MR_Box) (backend_libs__interval__V_15_15)), ((MR_Box) (backend_libs__interval__V_31_31)));
                                                        }
#line 115 "interval.m"
                                                        if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                                          {
#line 6975 "backend_libs.interval.c"
                                                            backend_libs__interval__TypeInfo_48_48 = (MR_Word) &backend_libs__interval_scalar_common_2[7];
#line 6977 "backend_libs.interval.c"
                                                            {
#line 6979 "backend_libs.interval.c"
                                                              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_48_48, ((MR_Box) (backend_libs__interval__V_16_16)), ((MR_Box) (backend_libs__interval__V_32_32)));
                                                            }
#line 115 "interval.m"
                                                            if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                                              {
#line 6986 "backend_libs.interval.c"
                                                                backend_libs__interval__TypeInfo_49_49 = (MR_Word) &backend_libs__interval_scalar_common_2[8];
#line 6988 "backend_libs.interval.c"
                                                                {
#line 6990 "backend_libs.interval.c"
                                                                  backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_49_49, ((MR_Box) (backend_libs__interval__V_17_17)), ((MR_Box) (backend_libs__interval__V_33_33)));
                                                                }
#line 115 "interval.m"
                                                                if (backend_libs__interval__succeeded)
#line 115 "interval.m"
                                                                  {
#line 6997 "backend_libs.interval.c"
                                                                    backend_libs__interval__TypeInfo_50_50 = (MR_Word) &backend_libs__interval_scalar_common_2[9];
#line 6999 "backend_libs.interval.c"
                                                                    {
#line 7001 "backend_libs.interval.c"
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
#line 7067 "backend_libs.interval.c"
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

#line 7125 "backend_libs.interval.c"
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
#line 7160 "backend_libs.interval.c"
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
#line 7182 "backend_libs.interval.c"
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

#line 7249 "backend_libs.interval.c"
        {
#line 7251 "backend_libs.interval.c"
          backend_libs__interval__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(backend_libs__interval__V_3_3, backend_libs__interval__V_5_5);
        }
#line 94 "interval.m"
        if (backend_libs__interval__succeeded)
#line 94 "interval.m"
          {
#line 7258 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_10_10 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 7260 "backend_libs.interval.c"
            {
#line 7262 "backend_libs.interval.c"
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
#line 7362 "backend_libs.interval.c"
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
#line 7388 "backend_libs.interval.c"
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
#line 7408 "backend_libs.interval.c"
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

#line 7490 "backend_libs.interval.c"
        {
#line 7492 "backend_libs.interval.c"
          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__V_3_3)), ((MR_Box) (backend_libs__interval__V_6_6)));
        }
#line 87 "interval.m"
        if (backend_libs__interval__succeeded)
#line 87 "interval.m"
          {
#line 7499 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_12_12 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 7501 "backend_libs.interval.c"
            {
#line 7503 "backend_libs.interval.c"
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

#line 7529 "backend_libs.interval.c"
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
#line 7587 "backend_libs.interval.c"
  {
#line 7589 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 7592 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 7594 "backend_libs.interval.c"
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
#line 7623 "backend_libs.interval.c"
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
#line 7645 "backend_libs.interval.c"
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

#line 7712 "backend_libs.interval.c"
        {
#line 7714 "backend_libs.interval.c"
          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__V_3_3)), ((MR_Box) (backend_libs__interval__V_5_5)));
        }
#line 102 "interval.m"
        if (backend_libs__interval__succeeded)
#line 102 "interval.m"
          {
#line 7721 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_10_10 = (MR_Word) &backend_libs__interval_scalar_common_1[5];
#line 7723 "backend_libs.interval.c"
            {
#line 7725 "backend_libs.interval.c"
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
#line 7763 "backend_libs.interval.c"
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
#line 7811 "backend_libs.interval.c"
                  *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                  break;
#line 76 "interval.m"
                case (MR_Integer) 2:
#line 7817 "backend_libs.interval.c"
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
#line 7830 "backend_libs.interval.c"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                      break;
#line 76 "interval.m"
                    case (MR_Integer) 1:
#line 7836 "backend_libs.interval.c"
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
#line 7880 "backend_libs.interval.c"
                  *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                  break;
#line 76 "interval.m"
                case (MR_Integer) 2:
#line 7886 "backend_libs.interval.c"
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
#line 7899 "backend_libs.interval.c"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                      break;
#line 76 "interval.m"
                    case (MR_Integer) 1:
#line 7905 "backend_libs.interval.c"
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
#line 7944 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 1:
#line 7950 "backend_libs.interval.c"
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
#line 7978 "backend_libs.interval.c"
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
#line 8010 "backend_libs.interval.c"
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
#line 8023 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 1:
#line 8029 "backend_libs.interval.c"
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
#line 8064 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 1:
#line 8070 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                }
#line 76 "interval.m"
                break;
#line 76 "interval.m"
              case (MR_Integer) 1:
#line 8080 "backend_libs.interval.c"
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
#line 8115 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 1:
#line 8121 "backend_libs.interval.c"
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
#line 8165 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                        break;
#line 76 "interval.m"
                      case (MR_Integer) 1:
#line 8171 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                        break;
#line 76 "interval.m"
                    }
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 1:
#line 8181 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 2:
#line 8187 "backend_libs.interval.c"
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
#line 8218 "backend_libs.interval.c"
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
#line 8250 "backend_libs.interval.c"
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
#line 8285 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                        break;
#line 76 "interval.m"
                      case (MR_Integer) 1:
#line 8291 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                        break;
#line 76 "interval.m"
                    }
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 1:
#line 8301 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 76 "interval.m"
                    break;
#line 76 "interval.m"
                  case (MR_Integer) 2:
#line 8307 "backend_libs.interval.c"
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
#line 8320 "backend_libs.interval.c"
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
#line 8466 "backend_libs.interval.c"
                backend_libs__interval__succeeded = (backend_libs__interval__V_7_7 == backend_libs__interval__V_9_9);
#line 76 "interval.m"
                if (backend_libs__interval__succeeded)
#line 76 "interval.m"
                  {
#line 8472 "backend_libs.interval.c"
                    backend_libs__interval__V_27_27 = (MR_Integer) backend_libs__interval__V_8_8;
#line 8474 "backend_libs.interval.c"
                    backend_libs__interval__V_28_28 = (MR_Integer) backend_libs__interval__V_10_10;
#line 8476 "backend_libs.interval.c"
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
#line 8507 "backend_libs.interval.c"
                backend_libs__interval__V_31_31 = (MR_Integer) backend_libs__interval__V_11_11;
#line 8509 "backend_libs.interval.c"
                backend_libs__interval__V_32_32 = (MR_Integer) backend_libs__interval__V_12_12;
#line 8511 "backend_libs.interval.c"
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
#line 8553 "backend_libs.interval.c"
                    backend_libs__interval__succeeded = (backend_libs__interval__V_13_13 == backend_libs__interval__V_15_15);
#line 76 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 76 "interval.m"
                      {
#line 8559 "backend_libs.interval.c"
                        backend_libs__interval__V_25_25 = (MR_Integer) backend_libs__interval__V_14_14;
#line 8561 "backend_libs.interval.c"
                        backend_libs__interval__V_26_26 = (MR_Integer) backend_libs__interval__V_16_16;
#line 8563 "backend_libs.interval.c"
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
#line 8594 "backend_libs.interval.c"
                    backend_libs__interval__V_29_29 = (MR_Integer) backend_libs__interval__V_17_17;
#line 8596 "backend_libs.interval.c"
                    backend_libs__interval__V_30_30 = (MR_Integer) backend_libs__interval__V_18_18;
#line 8598 "backend_libs.interval.c"
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

#line 1344 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_4(
#line 1344 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1344 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1344 "interval.m"
{
#line 1344 "interval.m"
  {
#line 1344 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1344 "interval.m"
    {
#line 1344 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1344 "interval.m"
      return;
    }
#line 1344 "interval.m"
  }
#line 1344 "interval.m"
}

#line 1340 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_3(
#line 1340 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1340 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 1340 "interval.m"
{
#line 1340 "interval.m"
  {
#line 1340 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 1340 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1340 "interval.m"
    MR_Integer backend_libs__interval__conv1_Num_3;

#line 1340 "interval.m"
    {
#line 1340 "interval.m"
      backend_libs__interval__conv1_Num_3 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 1340 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv1_Num_3));
#line 1340 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 1340 "interval.m"
  }
#line 1340 "interval.m"
}

#line 1344 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_2(
#line 1344 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1344 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1344 "interval.m"
{
#line 1344 "interval.m"
  {
#line 1344 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1344 "interval.m"
    {
#line 1344 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1344 "interval.m"
      return;
    }
#line 1344 "interval.m"
  }
#line 1344 "interval.m"
}

#line 1335 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_1(
#line 1335 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1335 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1335 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2)
#line 1335 "interval.m"
{
#line 1335 "interval.m"
  {
#line 1335 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1335 "interval.m"
    MR_Integer backend_libs__interval__conv0_HeadVar__2_32;

#line 1335 "interval.m"
    {
#line 1335 "interval.m"
      backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1335__1_2_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1), &backend_libs__interval__conv0_HeadVar__2_32);
    }
#line 1335 "interval.m"
    *backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__2_32));
#line 1335 "interval.m"
  }
#line 1335 "interval.m"
}

#line 1327 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0(
#line 1327 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1)
#line 1327 "interval.m"
{
#line 1330 "interval.m"
  {
#line 1330 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1330 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_36_36;
#line 1330 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_37_37;
#line 1330 "interval.m"
    MR_Word backend_libs__interval__Anchor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1330 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1330 "interval.m"
    MR_Word backend_libs__interval__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_5, (MR_Integer) 0)));
#line 1330 "interval.m"
    MR_Word backend_libs__interval__Intervals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_5, (MR_Integer) 1)));
#line 1330 "interval.m"
    MR_Word backend_libs__interval__VarNums_9;
#line 1330 "interval.m"
    MR_Word backend_libs__interval__IntervalList_10;
#line 1330 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 1330 "interval.m"
    MR_Word backend_libs__interval__V_25_25;

#line 1332 "interval.m"
    {
#line 1332 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1333 "interval.m"
    {
#line 1333 "interval.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Anchor_4)));
    }
#line 1334 "interval.m"
    {
#line 1334 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) " =>\n");
    }
#line 1335 "interval.m"
    {
#line 1335 "interval.m"
      backend_libs__interval__V_19_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_7);
    }
#line 8793 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1335 "interval.m"
    {
#line 1335 "interval.m"
      mercury__list__map_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], backend_libs__interval__TypeCtorInfo_36_36, (MR_Word) &backend_libs__interval_scalar_common_2[21], backend_libs__interval__V_19_19, &backend_libs__interval__VarNums_9);
    }
#line 1336 "interval.m"
    {
#line 1336 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "vars [");
    }
#line 1344 "interval.m"
    {
#line 1344 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__VarNums_9, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[22]);
    }
#line 1338 "interval.m"
    {
#line 1338 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "]\nintervals: ");
    }
#line 8815 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_37_37 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 1339 "interval.m"
    {
#line 1339 "interval.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__interval__TypeCtorInfo_37_37, backend_libs__interval__Intervals_8, &backend_libs__interval__IntervalList_10);
    }
#line 1340 "interval.m"
    {
#line 1340 "interval.m"
      backend_libs__interval__V_25_25 = mercury__list__map_2_f_0(backend_libs__interval__TypeCtorInfo_37_37, backend_libs__interval__TypeCtorInfo_36_36, (MR_Word) &backend_libs__interval_scalar_common_2[23], backend_libs__interval__IntervalList_10);
    }
#line 1344 "interval.m"
    {
#line 1344 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__V_25_25, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[24]);
    }
#line 1341 "interval.m"
    {
#line 1341 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1341 "interval.m"
      return;
    }
#line 1330 "interval.m"
  }
#line 1327 "interval.m"
}

#line 1344 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_2(
#line 1344 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1344 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1344 "interval.m"
{
#line 1344 "interval.m"
  {
#line 1344 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1344 "interval.m"
    {
#line 1344 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1344 "interval.m"
      return;
    }
#line 1344 "interval.m"
  }
#line 1344 "interval.m"
}

#line 1322 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_1(
#line 1322 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1322 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1322 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2)
#line 1322 "interval.m"
{
#line 1322 "interval.m"
  {
#line 1322 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1322 "interval.m"
    MR_Integer backend_libs__interval__conv0_HeadVar__2_17;

#line 1322 "interval.m"
    {
#line 1322 "interval.m"
      backend_libs__interval__IntroducedFrom__pred__dump_deletion__1322__1_2_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1), &backend_libs__interval__conv0_HeadVar__2_17);
    }
#line 1322 "interval.m"
    *backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__2_17));
#line 1322 "interval.m"
  }
#line 1322 "interval.m"
}

#line 1319 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0(
#line 1319 "interval.m"
  MR_Word backend_libs__interval__Vars_4)
#line 1319 "interval.m"
{
#line 1321 "interval.m"
  {
#line 1321 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1321 "interval.m"
    MR_Word backend_libs__interval__VarNums_6;
#line 1321 "interval.m"
    MR_Word backend_libs__interval__V_10_10;

#line 1322 "interval.m"
    {
#line 1322 "interval.m"
      backend_libs__interval__V_10_10 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_4);
    }
#line 1322 "interval.m"
    {
#line 1322 "interval.m"
      mercury__list__map_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__interval_scalar_common_2[19], backend_libs__interval__V_10_10, &backend_libs__interval__VarNums_6);
    }
#line 1323 "interval.m"
    {
#line 1323 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) " [");
    }
#line 1344 "interval.m"
    {
#line 1344 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__VarNums_6, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[20]);
    }
#line 1325 "interval.m"
    {
#line 1325 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "]");
#line 1325 "interval.m"
      return;
    }
#line 1321 "interval.m"
  }
#line 1319 "interval.m"
}

#line 1313 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_3(
#line 1313 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1313 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1313 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1313 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1313 "interval.m"
{
#line 1313 "interval.m"
  {
#line 1313 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1313 "interval.m"
    {
#line 1313 "interval.m"
      backend_libs__interval__dump_deletion_3_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
#line 1313 "interval.m"
      return;
    }
#line 1313 "interval.m"
  }
#line 1313 "interval.m"
}

#line 1302 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_2(
#line 1302 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1302 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1302 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2)
#line 1302 "interval.m"
{
#line 1302 "interval.m"
  {
#line 1302 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1302 "interval.m"
    MR_Integer backend_libs__interval__conv5_HeadVar__2_155;

#line 1302 "interval.m"
    {
#line 1302 "interval.m"
      backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1302__1_2_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1), &backend_libs__interval__conv5_HeadVar__2_155);
    }
#line 1302 "interval.m"
    *backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv5_HeadVar__2_155));
#line 1302 "interval.m"
  }
#line 1302 "interval.m"
}

#line 1280 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_1(
#line 1280 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1280 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 1280 "interval.m"
{
#line 1280 "interval.m"
  {
#line 1280 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 1280 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1280 "interval.m"
    MR_Integer backend_libs__interval__conv1_Num_3;

#line 1280 "interval.m"
    {
#line 1280 "interval.m"
      backend_libs__interval__conv1_Num_3 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 1280 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv1_Num_3));
#line 1280 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 1280 "interval.m"
  }
#line 1280 "interval.m"
}

#line 1272 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0(
#line 1272 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_5,
#line 1272 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6)
#line 1272 "interval.m"
{
#line 1275 "interval.m"
  {
#line 1275 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1275 "interval.m"
    MR_Integer backend_libs__interval__V_19_19;
#line 1284 "interval.m"
    MR_Word backend_libs__interval__SuccIds_8;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_23_23;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 1279 "interval.m"
    MR_Box backend_libs__interval__conv0_SuccIds_8;
#line 1291 "interval.m"
    MR_Word backend_libs__interval__Start_10;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_93_93;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__V_94_94;
#line 1287 "interval.m"
    MR_Box backend_libs__interval__conv2_Start_10;
#line 1298 "interval.m"
    MR_Word backend_libs__interval__End_11;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_95_95;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_96_96;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_97_97;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_98_98;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_99_99;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_100_100;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_101_101;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_102_102;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_103_103;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_104_104;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_105_105;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_106_106;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_107_107;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_108_108;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__V_109_109;
#line 1294 "interval.m"
    MR_Box backend_libs__interval__conv3_End_11;
#line 1306 "interval.m"
    MR_Word backend_libs__interval__Vars_12;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_110_110;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_111_111;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_112_112;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_113_113;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_114_114;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_115_115;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_116_116;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_117_117;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_118_118;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_119_119;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_120_120;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_121_121;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_122_122;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_123_123;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__V_124_124;
#line 1301 "interval.m"
    MR_Box backend_libs__interval__conv4_Vars_12;
#line 1315 "interval.m"
    MR_Word backend_libs__interval__Deletions_14;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_125_125;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_126_126;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_127_127;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_128_128;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_129_129;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_130_130;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_131_131;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_132_132;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_133_133;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_134_134;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_135_135;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_136_136;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_137_137;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_138_138;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__V_139_139;
#line 1310 "interval.m"
    MR_Box backend_libs__interval__conv6_Deletions_14;

#line 1276 "interval.m"
    {
#line 1276 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\ninterval ");
    }
#line 1277 "interval.m"
    {
#line 1277 "interval.m"
      backend_libs__interval__V_19_19 = backend_libs__interval__interval_id_to_int_1_f_0(backend_libs__interval__IntervalId_6);
    }
#line 1277 "interval.m"
    {
#line 1277 "interval.m"
      mercury__io__write_int_3_p_0(backend_libs__interval__V_19_19);
    }
#line 1278 "interval.m"
    {
#line 1278 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 1279 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1279 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1279 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1279 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1279 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1279 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1279 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1279 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1279 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1279 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1279 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1279 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1279 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1279 "interval.m"
    backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1279 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1279 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1279 "interval.m"
    {
#line 1279 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__V_23_23, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv0_SuccIds_8);
    }
#line 1279 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1279 "interval.m"
      {
#line 1279 "interval.m"
        backend_libs__interval__SuccIds_8 = ((MR_Word) backend_libs__interval__conv0_SuccIds_8);
#line 1279 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1279 "interval.m"
      }
#line 1284 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1280 "interval.m"
      {
#line 1280 "interval.m"
        MR_Word backend_libs__interval__SuccNums_9;

#line 1280 "interval.m"
        {
#line 1280 "interval.m"
          backend_libs__interval__SuccNums_9 = mercury__list__map_2_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__interval_scalar_common_2[16], backend_libs__interval__SuccIds_8);
        }
#line 1281 "interval.m"
        {
#line 1281 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "succ [");
        }
#line 1282 "interval.m"
        {
#line 1282 "interval.m"
          backend_libs__interval__write_int_list_3_p_0(backend_libs__interval__SuccNums_9);
        }
#line 1283 "interval.m"
        {
#line 1283 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n");
        }
#line 1280 "interval.m"
      }
#line 1284 "interval.m"
    else
#line 1285 "interval.m"
      {
#line 1285 "interval.m"
        {
#line 1285 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no succ\n");
        }
#line 1285 "interval.m"
      }
#line 1287 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1287 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1287 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1287 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1287 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1287 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1287 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1287 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1287 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1287 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1287 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1287 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1287 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1287 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1287 "interval.m"
    backend_libs__interval__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1287 "interval.m"
    backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1287 "interval.m"
    {
#line 1287 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, backend_libs__interval__V_32_32, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv2_Start_10);
    }
#line 1287 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1287 "interval.m"
      {
#line 1287 "interval.m"
        backend_libs__interval__Start_10 = ((MR_Word) backend_libs__interval__conv2_Start_10);
#line 1287 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1287 "interval.m"
      }
#line 1291 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1288 "interval.m"
      {
#line 1288 "interval.m"
        {
#line 1288 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "start ");
        }
#line 1289 "interval.m"
        {
#line 1289 "interval.m"
          mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Start_10)));
        }
#line 1290 "interval.m"
        {
#line 1290 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1288 "interval.m"
      }
#line 1291 "interval.m"
    else
#line 1292 "interval.m"
      {
#line 1292 "interval.m"
        {
#line 1292 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no start\n");
        }
#line 1292 "interval.m"
      }
#line 1294 "interval.m"
    backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1294 "interval.m"
    backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1294 "interval.m"
    backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1294 "interval.m"
    backend_libs__interval__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1294 "interval.m"
    backend_libs__interval__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1294 "interval.m"
    backend_libs__interval__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1294 "interval.m"
    backend_libs__interval__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1294 "interval.m"
    backend_libs__interval__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1294 "interval.m"
    backend_libs__interval__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1294 "interval.m"
    backend_libs__interval__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1294 "interval.m"
    backend_libs__interval__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1294 "interval.m"
    backend_libs__interval__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1294 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1294 "interval.m"
    backend_libs__interval__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1294 "interval.m"
    backend_libs__interval__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1294 "interval.m"
    backend_libs__interval__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1294 "interval.m"
    {
#line 1294 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, backend_libs__interval__V_40_40, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv3_End_11);
    }
#line 1294 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1294 "interval.m"
      {
#line 1294 "interval.m"
        backend_libs__interval__End_11 = ((MR_Word) backend_libs__interval__conv3_End_11);
#line 1294 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1294 "interval.m"
      }
#line 1298 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1295 "interval.m"
      {
#line 1295 "interval.m"
        {
#line 1295 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "end ");
        }
#line 1296 "interval.m"
        {
#line 1296 "interval.m"
          mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__End_11)));
        }
#line 1297 "interval.m"
        {
#line 1297 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1295 "interval.m"
      }
#line 1298 "interval.m"
    else
#line 1299 "interval.m"
      {
#line 1299 "interval.m"
        {
#line 1299 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no end\n");
        }
#line 1299 "interval.m"
      }
#line 1301 "interval.m"
    backend_libs__interval__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1301 "interval.m"
    backend_libs__interval__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1301 "interval.m"
    backend_libs__interval__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1301 "interval.m"
    backend_libs__interval__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1301 "interval.m"
    backend_libs__interval__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1301 "interval.m"
    backend_libs__interval__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1301 "interval.m"
    backend_libs__interval__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1301 "interval.m"
    backend_libs__interval__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1301 "interval.m"
    backend_libs__interval__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1301 "interval.m"
    backend_libs__interval__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1301 "interval.m"
    backend_libs__interval__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1301 "interval.m"
    backend_libs__interval__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1301 "interval.m"
    backend_libs__interval__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1301 "interval.m"
    backend_libs__interval__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1301 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1301 "interval.m"
    backend_libs__interval__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1301 "interval.m"
    {
#line 1301 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__V_48_48, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv4_Vars_12);
    }
#line 1301 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1301 "interval.m"
      {
#line 1301 "interval.m"
        backend_libs__interval__Vars_12 = ((MR_Word) backend_libs__interval__conv4_Vars_12);
#line 1301 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1301 "interval.m"
      }
#line 1306 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1302 "interval.m"
      {
#line 1302 "interval.m"
        MR_Word backend_libs__interval__VarNums_13;
#line 1302 "interval.m"
        MR_Word backend_libs__interval__V_50_50;

#line 1302 "interval.m"
        {
#line 1302 "interval.m"
          backend_libs__interval__V_50_50 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_12);
        }
#line 1302 "interval.m"
        {
#line 1302 "interval.m"
          mercury__list__map_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__interval_scalar_common_2[17], backend_libs__interval__V_50_50, &backend_libs__interval__VarNums_13);
        }
#line 1303 "interval.m"
        {
#line 1303 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "vars [");
        }
#line 1304 "interval.m"
        {
#line 1304 "interval.m"
          backend_libs__interval__write_int_list_3_p_0(backend_libs__interval__VarNums_13);
        }
#line 1305 "interval.m"
        {
#line 1305 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n");
        }
#line 1302 "interval.m"
      }
#line 1306 "interval.m"
    else
#line 1307 "interval.m"
      {
#line 1307 "interval.m"
        {
#line 1307 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no vars\n");
        }
#line 1307 "interval.m"
      }
#line 1310 "interval.m"
    backend_libs__interval__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1310 "interval.m"
    backend_libs__interval__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1310 "interval.m"
    backend_libs__interval__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1310 "interval.m"
    backend_libs__interval__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1310 "interval.m"
    backend_libs__interval__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1310 "interval.m"
    backend_libs__interval__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1310 "interval.m"
    backend_libs__interval__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1310 "interval.m"
    backend_libs__interval__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1310 "interval.m"
    backend_libs__interval__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1310 "interval.m"
    backend_libs__interval__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1310 "interval.m"
    backend_libs__interval__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1310 "interval.m"
    backend_libs__interval__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1310 "interval.m"
    backend_libs__interval__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1310 "interval.m"
    backend_libs__interval__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1310 "interval.m"
    backend_libs__interval__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1310 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1310 "interval.m"
    {
#line 1310 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[2], backend_libs__interval__V_58_58, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv6_Deletions_14);
    }
#line 1310 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1310 "interval.m"
      {
#line 1310 "interval.m"
        backend_libs__interval__Deletions_14 = ((MR_Word) backend_libs__interval__conv6_Deletions_14);
#line 1310 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1310 "interval.m"
      }
#line 1315 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1312 "interval.m"
      {
#line 1313 "interval.m"
        MR_Box backend_libs__interval__conv7_STATE_VARIABLE_IO_62_62;

#line 1312 "interval.m"
        {
#line 1312 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "deletions");
        }
#line 1313 "interval.m"
        {
#line 1313 "interval.m"
          mercury__list__foldl_4_p_2((MR_Word) &backend_libs__interval_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &backend_libs__interval_scalar_common_2[18], backend_libs__interval__Deletions_14, ((MR_Box) ((MR_Integer) 0)), &backend_libs__interval__conv7_STATE_VARIABLE_IO_62_62);
        }
#line 1314 "interval.m"
        {
#line 1314 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1314 "interval.m"
          return;
        }
#line 1312 "interval.m"
      }
#line 1315 "interval.m"
    else
#line 1315 "interval.m"
      {
#line 1315 "interval.m"
      }
#line 1275 "interval.m"
  }
#line 1272 "interval.m"
}

#line 1245 "interval.m"
static void MR_CALL 
backend_libs__interval__construct_anchors_4_p_0(
#line 1245 "interval.m"
  MR_Word backend_libs__interval__Construct_5,
#line 1245 "interval.m"
  MR_Word backend_libs__interval__Goal_6,
#line 1245 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_7,
#line 1245 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_8)
#line 1245 "interval.m"
{
#line 1248 "interval.m"
  {
#line 1248 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1248 "interval.m"
    MR_Word backend_libs__interval__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_6, (MR_Integer) 1)));
#line 1248 "interval.m"
    MR_Word backend_libs__interval__GoalId_11;
#line 1249 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_6, (MR_Integer) 0)));

#line 1250 "interval.m"
    {
#line 1250 "interval.m"
      backend_libs__interval__GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_10);
    }
#line 1251 "interval.m"
    {
#line 1251 "interval.m"
      MR_Word base;
#line 1251 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "interval.m"
      *backend_libs__interval__StartAnchor_7 = base;
#line 1251 "interval.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Construct_5));
#line 1251 "interval.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__GoalId_11));
#line 1251 "interval.m"
    }
#line 1252 "interval.m"
    {
#line 1252 "interval.m"
      MR_Word base;
#line 1252 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "interval.m"
      *backend_libs__interval__EndAnchor_8 = base;
#line 1252 "interval.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1252 "interval.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (backend_libs__interval__Construct_5));
#line 1252 "interval.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (backend_libs__interval__GoalId_11));
#line 1252 "interval.m"
    }
#line 1248 "interval.m"
  }
#line 1245 "interval.m"
}

#line 1230 "interval.m"
static void MR_CALL 
backend_libs__interval__build_headvar_subst_4_p_0(
#line 1230 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1230 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 1230 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_Subst_0_3,
#line 1230 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_Subst_4)
#line 1230 "interval.m"
{
#line 1233 "interval.m"
  while (MR_TRUE)
#line 1233 "interval.m"
    {
#line 1233 "interval.m"
      /* tailcall optimized into a loop */
#line 1233 "interval.m"
      {
#line 1233 "interval.m"
        MR_bool backend_libs__interval__succeeded;

#line 1233 "interval.m"
        if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1233 "interval.m"
          *backend_libs__interval__STATE_VARIABLE_Subst_4 = backend_libs__interval__STATE_VARIABLE_Subst_0_3;
#line 1233 "interval.m"
        else
#line 1234 "interval.m"
          {
#line 1234 "interval.m"
            MR_Word backend_libs__interval__HeadVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1234 "interval.m"
            MR_Word backend_libs__interval__HeadVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1234 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_Subst_17_17;
#line 1238 "interval.m"
            MR_Word backend_libs__interval__Replacement_13;
#line 1235 "interval.m"
            MR_Word backend_libs__interval__TypeInfo_19_19 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1235 "interval.m"
            MR_Box backend_libs__interval__conv0_Replacement_13;

#line 1235 "interval.m"
            {
#line 1235 "interval.m"
              backend_libs__interval__succeeded = mercury__map__search_3_p_0(backend_libs__interval__TypeInfo_19_19, backend_libs__interval__TypeInfo_19_19, backend_libs__interval__HeadVar__2_2, ((MR_Box) (backend_libs__interval__HeadVar_9)), &backend_libs__interval__conv0_Replacement_13);
            }
#line 1235 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1235 "interval.m"
              {
#line 1235 "interval.m"
                backend_libs__interval__Replacement_13 = ((MR_Word) backend_libs__interval__conv0_Replacement_13);
#line 1235 "interval.m"
                backend_libs__interval__succeeded = MR_TRUE;
#line 1235 "interval.m"
              }
#line 1238 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1236 "interval.m"
              {
#line 1236 "interval.m"
                MR_Word backend_libs__interval__TypeInfo_20_20 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1236 "interval.m"
                MR_Word backend_libs__interval__STATE_VARIABLE_Subst_16_16;

#line 1236 "interval.m"
                {
#line 1236 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_20_20, backend_libs__interval__TypeInfo_20_20, ((MR_Box) (backend_libs__interval__Replacement_13)), ((MR_Box) (backend_libs__interval__HeadVar_9)), backend_libs__interval__STATE_VARIABLE_Subst_0_3, &backend_libs__interval__STATE_VARIABLE_Subst_16_16);
                }
#line 1237 "interval.m"
                {
#line 1237 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_20_20, backend_libs__interval__TypeInfo_20_20, ((MR_Box) (backend_libs__interval__HeadVar_9)), ((MR_Box) (backend_libs__interval__Replacement_13)), backend_libs__interval__STATE_VARIABLE_Subst_16_16, &backend_libs__interval__STATE_VARIABLE_Subst_17_17);
                }
#line 1236 "interval.m"
              }
#line 1238 "interval.m"
            else
#line 1238 "interval.m"
              backend_libs__interval__STATE_VARIABLE_Subst_17_17 = backend_libs__interval__STATE_VARIABLE_Subst_0_3;
#line 1241 "interval.m"
            /* direct tailcall eliminated */
#line 1241 "interval.m"
            {
#line 1241 "interval.m"
              MR_Word backend_libs__interval__HeadVar__1__tmp_copy_1 = backend_libs__interval__HeadVars_10;
#line 1241 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_Subst_0__tmp_copy_3 = backend_libs__interval__STATE_VARIABLE_Subst_17_17;

#line 1241 "interval.m"
              backend_libs__interval__STATE_VARIABLE_Subst_0_3 = backend_libs__interval__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 1241 "interval.m"
              backend_libs__interval__HeadVar__1_1 = backend_libs__interval__HeadVar__1__tmp_copy_1;
#line 1241 "interval.m"
            }
#line 1241 "interval.m"
            continue;
#line 1234 "interval.m"
          }
#line 1233 "interval.m"
      }
#line 1233 "interval.m"
      break;
#line 1233 "interval.m"
    }
#line 1230 "interval.m"
}

#line 1205 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_cases_7_p_0(
#line 1205 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1205 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1205 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1205 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1205 "interval.m"
  MR_Word backend_libs__interval__VarRename0_5,
#line 1205 "interval.m"
  MR_Word backend_libs__interval__InsertMap_6,
#line 1205 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_7)
#line 1205 "interval.m"
{
#line 1209 "interval.m"
  {
#line 1209 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1209 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "interval.m"
      {
#line 1209 "interval.m"
        *backend_libs__interval__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1209 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_4 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_3;
#line 1209 "interval.m"
      }
#line 1209 "interval.m"
    else
#line 1211 "interval.m"
      {
#line 1211 "interval.m"
        MR_Word backend_libs__interval__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1211 "interval.m"
        MR_Word backend_libs__interval__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1211 "interval.m"
        MR_Word backend_libs__interval__Case_16;
#line 1211 "interval.m"
        MR_Word backend_libs__interval__Cases_17;
#line 1211 "interval.m"
        MR_Word backend_libs__interval__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case0_14, (MR_Integer) 0)));
#line 1211 "interval.m"
        MR_Word backend_libs__interval__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case0_14, (MR_Integer) 1)));
#line 1211 "interval.m"
        MR_Word backend_libs__interval__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case0_14, (MR_Integer) 2)));
#line 1211 "interval.m"
        MR_Word backend_libs__interval__Goal_25;
#line 1211 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_29_29;
#line 1213 "interval.m"
        MR_Word backend_libs__interval__V_26_26;

#line 1213 "interval.m"
        {
#line 1213 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Goal0_24, &backend_libs__interval__Goal_25, backend_libs__interval__STATE_VARIABLE_VarInfo_0_3, &backend_libs__interval__STATE_VARIABLE_VarInfo_29_29, backend_libs__interval__VarRename0_5, &backend_libs__interval__V_26_26, backend_libs__interval__InsertMap_6, backend_libs__interval__MaybeFeature_7);
        }
#line 1215 "interval.m"
        {
#line 1215 "interval.m"
          backend_libs__interval__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1215 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Case_16, 0) = ((MR_Box) (backend_libs__interval__MainConsId_22));
#line 1215 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Case_16, 1) = ((MR_Box) (backend_libs__interval__OtherConsIds_23));
#line 1215 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Case_16, 2) = ((MR_Box) (backend_libs__interval__Goal_25));
#line 1215 "interval.m"
        }
#line 1216 "interval.m"
        {
#line 1216 "interval.m"
          backend_libs__interval__record_decisions_in_cases_7_p_0(backend_libs__interval__Cases0_15, &backend_libs__interval__Cases_17, backend_libs__interval__STATE_VARIABLE_VarInfo_29_29, backend_libs__interval__STATE_VARIABLE_VarInfo_4, backend_libs__interval__VarRename0_5, backend_libs__interval__InsertMap_6, backend_libs__interval__MaybeFeature_7);
        }
#line 1210 "interval.m"
        {
#line 1210 "interval.m"
          MR_Word base;
#line 1210 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "interval.m"
          *backend_libs__interval__HeadVar__2_2 = base;
#line 1210 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Case_16));
#line 1210 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__Cases_17));
#line 1210 "interval.m"
        }
#line 1211 "interval.m"
      }
#line 1209 "interval.m"
  }
#line 1205 "interval.m"
}

#line 1167 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_conj_9_p_0(
#line 1167 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1167 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1167 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1167 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1167 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_5,
#line 1167 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_6,
#line 1167 "interval.m"
  MR_Word backend_libs__interval__ConjType_7,
#line 1167 "interval.m"
  MR_Word backend_libs__interval__InsertMap_8,
#line 1167 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_9)
#line 1167 "interval.m"
{
#line 1172 "interval.m"
  {
#line 1172 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1172 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1172 "interval.m"
      {
#line 1172 "interval.m"
        *backend_libs__interval__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1172 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_6 = backend_libs__interval__STATE_VARIABLE_VarRename_0_5;
#line 1172 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_4 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_3;
#line 1172 "interval.m"
      }
#line 1172 "interval.m"
    else
#line 1174 "interval.m"
      {
#line 1174 "interval.m"
        MR_Word backend_libs__interval__Goal0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1174 "interval.m"
        MR_Word backend_libs__interval__Goals0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1174 "interval.m"
        MR_Word backend_libs__interval__Goal_27;
#line 1174 "interval.m"
        MR_Word backend_libs__interval__TailGoals_28;
#line 1174 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_36_36;
#line 1174 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_37_37;
#line 1184 "interval.m"
        MR_Word backend_libs__interval__SubGoals_30;
#line 1180 "interval.m"
        MR_Word backend_libs__interval__InnerConjType_29;
#line 1180 "interval.m"
        MR_Word backend_libs__interval__V_40_40;
#line 1180 "interval.m"
        MR_Word backend_libs__interval__V_31_31;

#line 1175 "interval.m"
        {
#line 1175 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Goal0_19, &backend_libs__interval__Goal_27, backend_libs__interval__STATE_VARIABLE_VarInfo_0_3, &backend_libs__interval__STATE_VARIABLE_VarInfo_36_36, backend_libs__interval__STATE_VARIABLE_VarRename_0_5, &backend_libs__interval__STATE_VARIABLE_VarRename_37_37, backend_libs__interval__InsertMap_8, backend_libs__interval__MaybeFeature_9);
        }
#line 1177 "interval.m"
        {
#line 1177 "interval.m"
          backend_libs__interval__record_decisions_in_conj_9_p_0(backend_libs__interval__Goals0_20, &backend_libs__interval__TailGoals_28, backend_libs__interval__STATE_VARIABLE_VarInfo_36_36, backend_libs__interval__STATE_VARIABLE_VarInfo_4, backend_libs__interval__STATE_VARIABLE_VarRename_37_37, backend_libs__interval__STATE_VARIABLE_VarRename_6, backend_libs__interval__ConjType_7, backend_libs__interval__InsertMap_8, backend_libs__interval__MaybeFeature_9);
        }
#line 1180 "interval.m"
        backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_27, (MR_Integer) 0)));
#line 1180 "interval.m"
        backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_27, (MR_Integer) 1)));
#line 1180 "interval.m"
        backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__V_40_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__V_40_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1180 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1180 "interval.m"
          {
#line 1180 "interval.m"
            backend_libs__interval__InnerConjType_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__V_40_40, (MR_Integer) 1)));
#line 1180 "interval.m"
            backend_libs__interval__SubGoals_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__V_40_40, (MR_Integer) 2)));
#line 1181 "interval.m"
            backend_libs__interval__succeeded = (backend_libs__interval__ConjType_7 == backend_libs__interval__InnerConjType_29);
#line 1180 "interval.m"
          }
#line 1184 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1183 "interval.m"
          {
#line 1183 "interval.m"
            {
#line 1183 "interval.m"
              *backend_libs__interval__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, backend_libs__interval__SubGoals_30, backend_libs__interval__TailGoals_28);
            }
#line 1183 "interval.m"
          }
#line 1184 "interval.m"
        else
#line 1185 "interval.m"
          {
#line 1185 "interval.m"
            MR_Word base;
#line 1185 "interval.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "interval.m"
            *backend_libs__interval__HeadVar__2_2 = base;
#line 1185 "interval.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Goal_27));
#line 1185 "interval.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__TailGoals_28));
#line 1185 "interval.m"
          }
#line 1174 "interval.m"
      }
#line 1172 "interval.m"
  }
#line 1167 "interval.m"
}

#line 1136 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_at_call_site_9_p_0(
#line 1136 "interval.m"
  MR_Word backend_libs__interval__Goal0_10,
#line 1136 "interval.m"
  MR_Word * backend_libs__interval__Goal_11,
#line 1136 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_25,
#line 1136 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_26,
#line 1136 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_27,
#line 1136 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_28,
#line 1136 "interval.m"
  MR_Word backend_libs__interval__MustHaveMap_14,
#line 1136 "interval.m"
  MR_Word backend_libs__interval__InsertMap_15,
#line 1136 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_16)
#line 1136 "interval.m"
{
#line 1142 "interval.m"
  {
#line 1142 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1142 "interval.m"
    MR_Word backend_libs__interval__GoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_10, (MR_Integer) 1)));
#line 1142 "interval.m"
    MR_Word backend_libs__interval__Goal1_19;
#line 1143 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_10, (MR_Integer) 0)));
#line 1147 "interval.m"
    MR_Word backend_libs__interval__MaybeNeedAcrossCall_20;
#line 1148 "interval.m"
    MR_Word backend_libs__interval___NeedAcrossCall_21;

#line 1144 "interval.m"
    {
#line 1144 "interval.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__STATE_VARIABLE_VarRename_0_27, backend_libs__interval__Goal0_10, &backend_libs__interval__Goal1_19);
    }
#line 1146 "interval.m"
    {
#line 1146 "interval.m"
      backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo0_18, &backend_libs__interval__MaybeNeedAcrossCall_20);
    }
#line 1147 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1147 "interval.m"
      {
#line 1148 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__MaybeNeedAcrossCall_20)) == (MR_mktag((MR_Integer) 1)));
#line 1148 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1148 "interval.m"
          backend_libs__interval___NeedAcrossCall_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeNeedAcrossCall_20, (MR_Integer) 0)));
#line 1147 "interval.m"
      }
#line 1155 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1150 "interval.m"
      {
#line 1150 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_22_54;
#line 1150 "interval.m"
        MR_Word backend_libs__interval__GoalId_22;
#line 1150 "interval.m"
        MR_Word backend_libs__interval__Anchor_23;
#line 1150 "interval.m"
        MR_Word backend_libs__interval__Inserts_24;
#line 1150 "interval.m"
        MR_Word backend_libs__interval__InsertGoals_48;
#line 1150 "interval.m"
        MR_Word backend_libs__interval__BranchesGoalInfo_50;
#line 1150 "interval.m"
        MR_Word backend_libs__interval__V_52_52;
#line 1150 "interval.m"
        MR_Word backend_libs__interval__V_53_53;
#line 1039 "interval.m"
        MR_Word backend_libs__interval__InsertsPrime_37;
#line 1037 "interval.m"
        MR_Box backend_libs__interval__conv0_InsertsPrime_37;
#line 1051 "interval.m"
        MR_Word backend_libs__interval__V_49_49;

#line 1150 "interval.m"
        {
#line 1150 "interval.m"
          backend_libs__interval__GoalId_22 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo0_18);
        }
#line 1151 "interval.m"
        {
#line 1151 "interval.m"
          backend_libs__interval__Anchor_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__Anchor_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1151 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__Anchor_23, 1) = ((MR_Box) (backend_libs__interval__GoalId_22));
#line 1151 "interval.m"
        }
#line 1037 "interval.m"
        {
#line 1037 "interval.m"
          backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval_scalar_common_1[4], backend_libs__interval__InsertMap_15, ((MR_Box) (backend_libs__interval__Anchor_23)), &backend_libs__interval__conv0_InsertsPrime_37);
        }
#line 1037 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1037 "interval.m"
          {
#line 1037 "interval.m"
            backend_libs__interval__InsertsPrime_37 = ((MR_Word) backend_libs__interval__conv0_InsertsPrime_37);
#line 1037 "interval.m"
            backend_libs__interval__succeeded = MR_TRUE;
#line 1037 "interval.m"
          }
#line 1039 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1038 "interval.m"
          backend_libs__interval__Inserts_24 = backend_libs__interval__InsertsPrime_37;
#line 1039 "interval.m"
        else
#line 1040 "interval.m"
          backend_libs__interval__Inserts_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10214 "backend_libs.interval.c"
        backend_libs__interval__TypeInfo_22_54 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1049 "interval.m"
        {
#line 1049 "interval.m"
          backend_libs__interval__V_52_52 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_22_54, backend_libs__interval__TypeInfo_22_54);
        }
#line 1049 "interval.m"
        {
#line 1049 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_0_25, backend_libs__interval__STATE_VARIABLE_VarInfo_26, backend_libs__interval__V_52_52, backend_libs__interval__STATE_VARIABLE_VarRename_28, backend_libs__interval__Inserts_24, backend_libs__interval__MaybeFeature_16, &backend_libs__interval__InsertGoals_48);
        }
#line 1051 "interval.m"
        backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_19, (MR_Integer) 0)));
#line 1051 "interval.m"
        backend_libs__interval__BranchesGoalInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_19, (MR_Integer) 1)));
#line 1052 "interval.m"
        {
#line 1052 "interval.m"
          backend_libs__interval__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_53_53, 0) = ((MR_Box) (backend_libs__interval__Goal1_19));
#line 1052 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_53_53, 1) = ((MR_Box) (backend_libs__interval__InsertGoals_48));
#line 1052 "interval.m"
        }
#line 1052 "interval.m"
        {
#line 1052 "interval.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_53_53, backend_libs__interval__BranchesGoalInfo_50, backend_libs__interval__Goal_11);
#line 1052 "interval.m"
          return;
        }
#line 1150 "interval.m"
      }
#line 1155 "interval.m"
    else
#line 1159 "interval.m"
      {
#line 1159 "interval.m"
#line 1159 "interval.m"
        switch (backend_libs__interval__MustHaveMap_14) {
#line 1159 "interval.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1159 "interval.m"
          case (MR_Integer) 0:
#line 1158 "interval.m"
            *backend_libs__interval__Goal_11 = backend_libs__interval__Goal1_19;
#line 1159 "interval.m"
            break;
#line 1159 "interval.m"
          case (MR_Integer) 1:
#line 1160 "interval.m"
            {
#line 1161 "interval.m"
              {
#line 1161 "interval.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.record_decisions_at_call_site\'/9", (MR_String) "no save map");
#line 1161 "interval.m"
                return;
              }
#line 1160 "interval.m"
            }
#line 1159 "interval.m"
            break;
#line 1159 "interval.m"
        }
#line 1159 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_28 = backend_libs__interval__STATE_VARIABLE_VarRename_0_27;
#line 1159 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_26 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_25;
#line 1159 "interval.m"
      }
#line 1142 "interval.m"
  }
#line 1136 "interval.m"
}

#line 1105 "interval.m"
static void MR_CALL 
backend_libs__interval__create_shadow_vars_10_p_0(
#line 1105 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1105 "interval.m"
  MR_Word backend_libs__interval__VarsToExtract_2,
#line 1105 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_0_3,
#line 1105 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarSet_4,
#line 1105 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_0_5,
#line 1105 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarTypes_6,
#line 1105 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_7,
#line 1105 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_8,
#line 1105 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_0_9,
#line 1105 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VoidRename_10)
#line 1105 "interval.m"
{
#line 1110 "interval.m"
  while (MR_TRUE)
#line 1110 "interval.m"
    {
#line 1110 "interval.m"
      /* tailcall optimized into a loop */
#line 1110 "interval.m"
      {
#line 1110 "interval.m"
        MR_bool backend_libs__interval__succeeded;

#line 1110 "interval.m"
        if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1110 "interval.m"
          {
#line 1110 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VoidRename_10 = backend_libs__interval__STATE_VARIABLE_VoidRename_0_9;
#line 1110 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarRename_8 = backend_libs__interval__STATE_VARIABLE_VarRename_0_7;
#line 1110 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarTypes_6 = backend_libs__interval__STATE_VARIABLE_VarTypes_0_5;
#line 1110 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarSet_4 = backend_libs__interval__STATE_VARIABLE_VarSet_0_3;
#line 1110 "interval.m"
          }
#line 1110 "interval.m"
        else
#line 1112 "interval.m"
          {
#line 1112 "interval.m"
            MR_Word backend_libs__interval__TypeCtorInfo_32_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1112 "interval.m"
            MR_Word backend_libs__interval__Arg_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1112 "interval.m"
            MR_Word backend_libs__interval__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1112 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_39_39;
#line 1112 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_40_40;
#line 1112 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_41_41;
#line 1112 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_42_42;
#line 1112 "interval.m"
            MR_String backend_libs__interval__Name_61;
#line 1112 "interval.m"
            MR_Word backend_libs__interval__Shadow_62;
#line 1112 "interval.m"
            MR_Word backend_libs__interval__Type_63;

#line 1124 "interval.m"
            {
#line 1124 "interval.m"
              mercury__varset__lookup_name_3_p_0(backend_libs__interval__TypeCtorInfo_32_68, backend_libs__interval__STATE_VARIABLE_VarSet_0_3, backend_libs__interval__Arg_24, &backend_libs__interval__Name_61);
            }
#line 1125 "interval.m"
            {
#line 1125 "interval.m"
              mercury__varset__new_named_var_4_p_0(backend_libs__interval__TypeCtorInfo_32_68, backend_libs__interval__Name_61, &backend_libs__interval__Shadow_62, backend_libs__interval__STATE_VARIABLE_VarSet_0_3, &backend_libs__interval__STATE_VARIABLE_VarSet_39_39);
            }
#line 1126 "interval.m"
            {
#line 1126 "interval.m"
              hlds__vartypes__lookup_var_type_3_p_0(backend_libs__interval__STATE_VARIABLE_VarTypes_0_5, backend_libs__interval__Arg_24, &backend_libs__interval__Type_63);
            }
#line 1127 "interval.m"
            {
#line 1127 "interval.m"
              hlds__vartypes__add_var_type_4_p_0(backend_libs__interval__Shadow_62, backend_libs__interval__Type_63, backend_libs__interval__STATE_VARIABLE_VarTypes_0_5, &backend_libs__interval__STATE_VARIABLE_VarTypes_40_40);
            }
#line 1128 "interval.m"
            {
#line 1128 "interval.m"
              backend_libs__interval__succeeded = parse_tree__set_of_var__member_2_p_0(backend_libs__interval__TypeCtorInfo_32_68, backend_libs__interval__VarsToExtract_2, backend_libs__interval__Arg_24);
            }
#line 1130 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1129 "interval.m"
              {
#line 1129 "interval.m"
                MR_Word backend_libs__interval__TypeInfo_33_69 = (MR_Word) &backend_libs__interval_scalar_common_1[0];

#line 1129 "interval.m"
                {
#line 1129 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_33_69, backend_libs__interval__TypeInfo_33_69, ((MR_Box) (backend_libs__interval__Arg_24)), ((MR_Box) (backend_libs__interval__Shadow_62)), backend_libs__interval__STATE_VARIABLE_VarRename_0_7, &backend_libs__interval__STATE_VARIABLE_VarRename_41_41);
                }
#line 1129 "interval.m"
                backend_libs__interval__STATE_VARIABLE_VoidRename_42_42 = backend_libs__interval__STATE_VARIABLE_VoidRename_0_9;
#line 1129 "interval.m"
              }
#line 1130 "interval.m"
            else
#line 1131 "interval.m"
              {
#line 1131 "interval.m"
                MR_Word backend_libs__interval__TypeInfo_34_70 = (MR_Word) &backend_libs__interval_scalar_common_1[0];

#line 1131 "interval.m"
                {
#line 1131 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_34_70, backend_libs__interval__TypeInfo_34_70, ((MR_Box) (backend_libs__interval__Arg_24)), ((MR_Box) (backend_libs__interval__Shadow_62)), backend_libs__interval__STATE_VARIABLE_VoidRename_0_9, &backend_libs__interval__STATE_VARIABLE_VoidRename_42_42);
                }
#line 1131 "interval.m"
                backend_libs__interval__STATE_VARIABLE_VarRename_41_41 = backend_libs__interval__STATE_VARIABLE_VarRename_0_7;
#line 1131 "interval.m"
              }
#line 1115 "interval.m"
            /* direct tailcall eliminated */
#line 1115 "interval.m"
            {
#line 1115 "interval.m"
              MR_Word backend_libs__interval__HeadVar__1__tmp_copy_1 = backend_libs__interval__Args_25;
#line 1115 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_0__tmp_copy_3 = backend_libs__interval__STATE_VARIABLE_VarSet_39_39;
#line 1115 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_0__tmp_copy_5 = backend_libs__interval__STATE_VARIABLE_VarTypes_40_40;
#line 1115 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0__tmp_copy_7 = backend_libs__interval__STATE_VARIABLE_VarRename_41_41;
#line 1115 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_0__tmp_copy_9 = backend_libs__interval__STATE_VARIABLE_VoidRename_42_42;

#line 1115 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VoidRename_0_9 = backend_libs__interval__STATE_VARIABLE_VoidRename_0__tmp_copy_9;
#line 1115 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarRename_0_7 = backend_libs__interval__STATE_VARIABLE_VarRename_0__tmp_copy_7;
#line 1115 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarTypes_0_5 = backend_libs__interval__STATE_VARIABLE_VarTypes_0__tmp_copy_5;
#line 1115 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarSet_0_3 = backend_libs__interval__STATE_VARIABLE_VarSet_0__tmp_copy_3;
#line 1115 "interval.m"
              backend_libs__interval__HeadVar__1_1 = backend_libs__interval__HeadVar__1__tmp_copy_1;
#line 1115 "interval.m"
            }
#line 1115 "interval.m"
            continue;
#line 1112 "interval.m"
          }
#line 1110 "interval.m"
      }
#line 1110 "interval.m"
      break;
#line 1110 "interval.m"
    }
#line 1105 "interval.m"
}

#line 1054 "interval.m"
static void MR_CALL 
backend_libs__interval__make_inserted_goals_7_p_0(
#line 1054 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_1,
#line 1054 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_2,
#line 1054 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_3,
#line 1054 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_4,
#line 1054 "interval.m"
  MR_Word backend_libs__interval__HeadVar__5_5,
#line 1054 "interval.m"
  MR_Word backend_libs__interval__HeadVar__6_6,
#line 1054 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7)
#line 1054 "interval.m"
{
#line 1058 "interval.m"
  {
#line 1058 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1058 "interval.m"
    if ((backend_libs__interval__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1058 "interval.m"
      {
#line 1058 "interval.m"
        *backend_libs__interval__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1058 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_4 = backend_libs__interval__STATE_VARIABLE_VarRename_0_3;
#line 1058 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_2 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_1;
#line 1058 "interval.m"
      }
#line 1058 "interval.m"
    else
#line 1060 "interval.m"
      {
#line 1060 "interval.m"
        MR_Word backend_libs__interval__Spec_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__5_5, (MR_Integer) 0)));
#line 1060 "interval.m"
        MR_Word backend_libs__interval__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__5_5, (MR_Integer) 1)));
#line 1060 "interval.m"
        MR_Word backend_libs__interval__Goal_20;
#line 1060 "interval.m"
        MR_Word backend_libs__interval__Goals_21;
#line 1060 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_26_26;
#line 1060 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_27_27;
#line 1060 "interval.m"
        MR_Word backend_libs__interval__Goal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Spec_17, (MR_Integer) 0)));
#line 1060 "interval.m"
        MR_Word backend_libs__interval__VarsToExtract_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Spec_17, (MR_Integer) 1)));
#line 1060 "interval.m"
        MR_Word backend_libs__interval__GoalExpr0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_39, (MR_Integer) 0)));
#line 1060 "interval.m"
        MR_Word backend_libs__interval__GoalInfo0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_39, (MR_Integer) 1)));
#line 1094 "interval.m"
        MR_Word backend_libs__interval__V_43_43;
#line 1094 "interval.m"
        MR_Word backend_libs__interval__V_44_44;
#line 1094 "interval.m"
        MR_Word backend_libs__interval__V_45_45;
#line 1094 "interval.m"
        MR_Word backend_libs__interval__V_47_47;
#line 1094 "interval.m"
        MR_Word backend_libs__interval__V_48_48;
#line 1094 "interval.m"
        MR_Word backend_libs__interval__V_49_49;
#line 1094 "interval.m"
        MR_Word backend_libs__interval__ArgVars_50;
#line 1094 "interval.m"
        MR_Word backend_libs__interval__V_51_51;
#line 1094 "interval.m"
        MR_Word backend_libs__interval__V_53_53;
#line 1072 "interval.m"
        MR_Word backend_libs__interval__Unification0_46;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__V_52_52;

#line 1072 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_41)) == (MR_mktag((MR_Integer) 1)));
#line 1072 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1072 "interval.m"
          {
#line 1072 "interval.m"
            backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 0)));
#line 1072 "interval.m"
            backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 1)));
#line 1072 "interval.m"
            backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 2)));
#line 1072 "interval.m"
            backend_libs__interval__Unification0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 3)));
#line 1072 "interval.m"
            backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 4)));
#line 1073 "interval.m"
            backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__Unification0_46)) == (MR_mktag((MR_Integer) 1)));
#line 1073 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1073 "interval.m"
              {
#line 1073 "interval.m"
                backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 0)));
#line 1073 "interval.m"
                backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 1)));
#line 1073 "interval.m"
                backend_libs__interval__ArgVars_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 2)));
#line 1073 "interval.m"
                backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 3)));
#line 1073 "interval.m"
                backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 4)));
#line 1073 "interval.m"
                backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 5)));
#line 1073 "interval.m"
              }
#line 1072 "interval.m"
          }
#line 1094 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1075 "interval.m"
          {
#line 1075 "interval.m"
            MR_Word backend_libs__interval__TypeInfo_65_87;
#line 1075 "interval.m"
            MR_Word backend_libs__interval__Unification1_54;
#line 1075 "interval.m"
            MR_Word backend_libs__interval__GoalExpr1_55;
#line 1075 "interval.m"
            MR_Word backend_libs__interval__GoalInfo1_56;
#line 1075 "interval.m"
            MR_Word backend_libs__interval__GoalInfo2_58;
#line 1075 "interval.m"
            MR_Word backend_libs__interval__Goal2_59;
#line 1075 "interval.m"
            MR_Word backend_libs__interval__VarSet0_60;
#line 1075 "interval.m"
            MR_Word backend_libs__interval__VarTypes0_61;
#line 1075 "interval.m"
            MR_Word backend_libs__interval__VarSet_62;
#line 1075 "interval.m"
            MR_Word backend_libs__interval__VarTypes_63;
#line 1075 "interval.m"
            MR_Word backend_libs__interval__NewRename_64;
#line 1075 "interval.m"
            MR_Word backend_libs__interval__VoidRename_65;
#line 1075 "interval.m"
            MR_Word backend_libs__interval__Goal3_66;
#line 1075 "interval.m"
            MR_Word backend_libs__interval__V_69_69;
#line 1075 "interval.m"
            MR_Word backend_libs__interval__V_70_70;

#line 1075 "interval.m"
            {
#line 1075 "interval.m"
              backend_libs__interval__Unification1_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 0) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 1075 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 1) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 1075 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 2) = ((MR_Box) (backend_libs__interval__ArgVars_50));
#line 1075 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 3) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 1075 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1075 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 5) = ((MR_Box) (backend_libs__interval__V_53_53));
#line 1075 "interval.m"
            }
#line 1076 "interval.m"
            {
#line 1076 "interval.m"
              backend_libs__interval__GoalExpr1_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 0) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 1076 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 1) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 1076 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 2) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 1076 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 3) = ((MR_Box) (backend_libs__interval__Unification1_54));
#line 1076 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 4) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 1076 "interval.m"
            }
#line 1077 "interval.m"
            {
#line 1077 "interval.m"
              hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, backend_libs__interval__GoalInfo0_42, &backend_libs__interval__GoalInfo1_56);
            }
#line 1081 "interval.m"
            if ((backend_libs__interval__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1083 "interval.m"
              backend_libs__interval__GoalInfo2_58 = backend_libs__interval__GoalInfo1_56;
#line 1081 "interval.m"
            else
#line 1079 "interval.m"
              {
#line 1079 "interval.m"
                MR_Word backend_libs__interval__Feature_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__6_6, (MR_Integer) 0)));

#line 1080 "interval.m"
                {
#line 1080 "interval.m"
                  hlds__hlds_goal__goal_info_add_feature_3_p_0(backend_libs__interval__Feature_57, backend_libs__interval__GoalInfo1_56, &backend_libs__interval__GoalInfo2_58);
                }
#line 1079 "interval.m"
              }
#line 1085 "interval.m"
            {
#line 1085 "interval.m"
              backend_libs__interval__Goal2_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1085 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_59, 0) = ((MR_Box) (backend_libs__interval__GoalExpr1_55));
#line 1085 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_59, 1) = ((MR_Box) (backend_libs__interval__GoalInfo2_58));
#line 1085 "interval.m"
            }
#line 1086 "interval.m"
            backend_libs__interval__VarSet0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_0_1, (MR_Integer) 0)));
#line 1086 "interval.m"
            backend_libs__interval__VarTypes0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_0_1, (MR_Integer) 1)));
#line 10691 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_65_87 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1088 "interval.m"
            {
#line 1088 "interval.m"
              backend_libs__interval__V_69_69 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_87, backend_libs__interval__TypeInfo_65_87);
            }
#line 1088 "interval.m"
            {
#line 1088 "interval.m"
              backend_libs__interval__V_70_70 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_87, backend_libs__interval__TypeInfo_65_87);
            }
#line 1087 "interval.m"
            {
#line 1087 "interval.m"
              backend_libs__interval__create_shadow_vars_10_p_0(backend_libs__interval__ArgVars_50, backend_libs__interval__VarsToExtract_40, backend_libs__interval__VarSet0_60, &backend_libs__interval__VarSet_62, backend_libs__interval__VarTypes0_61, &backend_libs__interval__VarTypes_63, backend_libs__interval__V_69_69, &backend_libs__interval__NewRename_64, backend_libs__interval__V_70_70, &backend_libs__interval__VoidRename_65);
            }
#line 1089 "interval.m"
            {
#line 1089 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_26_26, 0) = ((MR_Box) (backend_libs__interval__VarSet_62));
#line 1089 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_26_26, 1) = ((MR_Box) (backend_libs__interval__VarTypes_63));
#line 1089 "interval.m"
            }
#line 1090 "interval.m"
            {
#line 1090 "interval.m"
              mercury__map__old_merge_3_p_0(backend_libs__interval__TypeInfo_65_87, backend_libs__interval__TypeInfo_65_87, backend_libs__interval__STATE_VARIABLE_VarRename_0_3, backend_libs__interval__NewRename_64, &backend_libs__interval__STATE_VARIABLE_VarRename_27_27);
            }
#line 1092 "interval.m"
            {
#line 1092 "interval.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__STATE_VARIABLE_VarRename_27_27, backend_libs__interval__Goal2_59, &backend_libs__interval__Goal3_66);
            }
#line 1093 "interval.m"
            {
#line 1093 "interval.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__VoidRename_65, backend_libs__interval__Goal3_66, &backend_libs__interval__Goal_20);
            }
#line 1075 "interval.m"
          }
#line 1094 "interval.m"
        else
#line 1095 "interval.m"
          {
#line 1095 "interval.m"
            {
#line 1095 "interval.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.make_inserted_goal\'/7", (MR_String) "not a deconstruct");
#line 1095 "interval.m"
              return;
            }
#line 1095 "interval.m"
          }
#line 1062 "interval.m"
        {
#line 1062 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_26_26, backend_libs__interval__STATE_VARIABLE_VarInfo_2, backend_libs__interval__STATE_VARIABLE_VarRename_27_27, backend_libs__interval__STATE_VARIABLE_VarRename_4, backend_libs__interval__Specs_18, backend_libs__interval__HeadVar__6_6, &backend_libs__interval__Goals_21);
        }
#line 1060 "interval.m"
        {
#line 1060 "interval.m"
          MR_Word base;
#line 1060 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "interval.m"
          *backend_libs__interval__HeadVar__7_7 = base;
#line 1060 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Goal_20));
#line 1060 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__Goals_21));
#line 1060 "interval.m"
        }
#line 1060 "interval.m"
      }
#line 1058 "interval.m"
  }
#line 1054 "interval.m"
}

#line 1043 "interval.m"
static void MR_CALL 
backend_libs__interval__insert_goals_after_7_p_0(
#line 1043 "interval.m"
  MR_Word backend_libs__interval__BranchesGoal_8,
#line 1043 "interval.m"
  MR_Word * backend_libs__interval__Goal_9,
#line 1043 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_17,
#line 1043 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_18,
#line 1043 "interval.m"
  MR_Word * backend_libs__interval__VarRename_11,
#line 1043 "interval.m"
  MR_Word backend_libs__interval__Inserts_12,
#line 1043 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_13)
#line 1043 "interval.m"
{
#line 1048 "interval.m"
  {
#line 1048 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1048 "interval.m"
    MR_Word backend_libs__interval__TypeInfo_22_22 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1048 "interval.m"
    MR_Word backend_libs__interval__InsertGoals_14;
#line 1048 "interval.m"
    MR_Word backend_libs__interval__BranchesGoalInfo_16;
#line 1048 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 1048 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 1051 "interval.m"
    MR_Word backend_libs__interval__V_15_15;

#line 1049 "interval.m"
    {
#line 1049 "interval.m"
      backend_libs__interval__V_20_20 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_22_22, backend_libs__interval__TypeInfo_22_22);
    }
#line 1049 "interval.m"
    {
#line 1049 "interval.m"
      backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_0_17, backend_libs__interval__STATE_VARIABLE_VarInfo_18, backend_libs__interval__V_20_20, backend_libs__interval__VarRename_11, backend_libs__interval__Inserts_12, backend_libs__interval__MaybeFeature_13, &backend_libs__interval__InsertGoals_14);
    }
#line 1051 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__BranchesGoal_8, (MR_Integer) 0)));
#line 1051 "interval.m"
    backend_libs__interval__BranchesGoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__BranchesGoal_8, (MR_Integer) 1)));
#line 1052 "interval.m"
    {
#line 1052 "interval.m"
      backend_libs__interval__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 0) = ((MR_Box) (backend_libs__interval__BranchesGoal_8));
#line 1052 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 1) = ((MR_Box) (backend_libs__interval__InsertGoals_14));
#line 1052 "interval.m"
    }
#line 1052 "interval.m"
    {
#line 1052 "interval.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_21_21, backend_libs__interval__BranchesGoalInfo_16, backend_libs__interval__Goal_9);
#line 1052 "interval.m"
      return;
    }
#line 1048 "interval.m"
  }
#line 1043 "interval.m"
}

#line 1033 "interval.m"
static void MR_CALL 
backend_libs__interval__lookup_inserts_3_p_0(
#line 1033 "interval.m"
  MR_Word backend_libs__interval__InsertMap_4,
#line 1033 "interval.m"
  MR_Word backend_libs__interval__Anchor_5,
#line 1033 "interval.m"
  MR_Word * backend_libs__interval__Inserts_6)
#line 1033 "interval.m"
{
#line 1039 "interval.m"
  {
#line 1039 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1039 "interval.m"
    MR_Word backend_libs__interval__InsertsPrime_7;
#line 1037 "interval.m"
    MR_Box backend_libs__interval__conv0_InsertsPrime_7;

#line 1037 "interval.m"
    {
#line 1037 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval_scalar_common_1[4], backend_libs__interval__InsertMap_4, ((MR_Box) (backend_libs__interval__Anchor_5)), &backend_libs__interval__conv0_InsertsPrime_7);
    }
#line 1037 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1037 "interval.m"
      {
#line 1037 "interval.m"
        backend_libs__interval__InsertsPrime_7 = ((MR_Word) backend_libs__interval__conv0_InsertsPrime_7);
#line 1037 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1037 "interval.m"
      }
#line 1039 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1038 "interval.m"
      *backend_libs__interval__Inserts_6 = backend_libs__interval__InsertsPrime_7;
#line 1039 "interval.m"
    else
#line 1040 "interval.m"
      *backend_libs__interval__Inserts_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1039 "interval.m"
  }
#line 1033 "interval.m"
}

#line 883 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_goal_8_p_0(
#line 883 "interval.m"
  MR_Word backend_libs__interval__Goal0_9,
#line 883 "interval.m"
  MR_Word * backend_libs__interval__Goal_10,
#line 883 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_114,
#line 883 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_115,
#line 883 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_116,
#line 883 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_117,
#line 883 "interval.m"
  MR_Word backend_libs__interval__InsertMap_13,
#line 883 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_14)
#line 883 "interval.m"
{
#line 889 "interval.m"
  {
#line 889 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 889 "interval.m"
    MR_Word backend_libs__interval__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_9, (MR_Integer) 0)));
#line 889 "interval.m"
    MR_Word backend_libs__interval__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_9, (MR_Integer) 1)));

#line 897 "interval.m"
#line 897 "interval.m"
    switch (MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) {
#line 897 "interval.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 897 "interval.m"
      case (MR_Integer) 0:
#line 928 "interval.m"
        {
#line 928 "interval.m"
          MR_Word backend_libs__interval__NegGoal0_37 = (MR_Word) MR_body(((MR_Word) backend_libs__interval__GoalExpr0_15), (MR_Integer) 0);
#line 928 "interval.m"
          MR_Word backend_libs__interval__NegGoal_38;
#line 928 "interval.m"
          MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_147_147;
#line 928 "interval.m"
          MR_Word backend_libs__interval__V_148_148;
#line 928 "interval.m"
          MR_Word backend_libs__interval__EndAnchor_177;
#line 928 "interval.m"
          MR_Word backend_libs__interval__Goal1_178;
#line 928 "interval.m"
          MR_Word backend_libs__interval__Inserts_179;
#line 929 "interval.m"
          MR_Word backend_libs__interval__V_39_39;
#line 932 "interval.m"
          MR_Word backend_libs__interval___StartAnchor_176;

#line 929 "interval.m"
          {
#line 929 "interval.m"
            backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__NegGoal0_37, &backend_libs__interval__NegGoal_38, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_147_147, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, &backend_libs__interval__V_39_39, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
          }
#line 931 "interval.m"
          backend_libs__interval__V_148_148 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) backend_libs__interval__NegGoal_38);
#line 931 "interval.m"
          {
#line 931 "interval.m"
            backend_libs__interval__Goal1_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 931 "interval.m"
            MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_178, 0) = ((MR_Box) (backend_libs__interval__V_148_148));
#line 931 "interval.m"
            MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_178, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 931 "interval.m"
          }
#line 932 "interval.m"
          {
#line 932 "interval.m"
            backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 3, backend_libs__interval__Goal0_9, &backend_libs__interval___StartAnchor_176, &backend_libs__interval__EndAnchor_177);
          }
#line 933 "interval.m"
          {
#line 933 "interval.m"
            backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_177, &backend_libs__interval__Inserts_179);
          }
#line 935 "interval.m"
          {
#line 935 "interval.m"
            backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_178, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_147_147, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__Inserts_179, backend_libs__interval__MaybeFeature_14);
#line 935 "interval.m"
            return;
          }
#line 928 "interval.m"
        }
#line 897 "interval.m"
        break;
#line 897 "interval.m"
      case (MR_Integer) 1:
#line 1024 "interval.m"
        {
#line 1025 "interval.m"
          {
#line 1025 "interval.m"
            hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10);
          }
#line 1024 "interval.m"
          *backend_libs__interval__STATE_VARIABLE_VarInfo_115 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_114;
#line 1024 "interval.m"
          *backend_libs__interval__STATE_VARIABLE_VarRename_117 = backend_libs__interval__STATE_VARIABLE_VarRename_0_116;
#line 1024 "interval.m"
        }
#line 897 "interval.m"
        break;
#line 897 "interval.m"
      case (MR_Integer) 2:
#line 1007 "interval.m"
        {
#line 1007 "interval.m"
          MR_Word backend_libs__interval__Builtin_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 1007 "interval.m"
          MR_Word backend_libs__interval__MustHaveMap_200;
#line 1007 "interval.m"
          MR_Word backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)));
#line 1007 "interval.m"
          MR_Integer backend_libs__interval__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 1007 "interval.m"
          MR_Word backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 1007 "interval.m"
          MR_Word backend_libs__interval__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 4)));
#line 1007 "interval.m"
          MR_Word backend_libs__interval__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 5)));

#line 1011 "interval.m"
#line 1011 "interval.m"
          switch (backend_libs__interval__Builtin_98) {
#line 1011 "interval.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1011 "interval.m"
            case (MR_Integer) 0:
#line 1010 "interval.m"
              backend_libs__interval__MustHaveMap_200 = (MR_Integer) 0;
#line 1011 "interval.m"
              break;
#line 1011 "interval.m"
            case (MR_Integer) 2:
#line 1011 "interval.m"
            case (MR_Integer) 1:
#line 1015 "interval.m"
              backend_libs__interval__MustHaveMap_200 = (MR_Integer) 1;
#line 1011 "interval.m"
              break;
#line 1011 "interval.m"
          }
#line 1017 "interval.m"
          {
#line 1017 "interval.m"
            backend_libs__interval__record_decisions_at_call_site_9_p_0(backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__MustHaveMap_200, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
#line 1017 "interval.m"
            return;
          }
#line 1007 "interval.m"
        }
#line 897 "interval.m"
        break;
#line 897 "interval.m"
      case (MR_Integer) 3:
#line 897 "interval.m"
#line 897 "interval.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)))) {
#line 897 "interval.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 897 "interval.m"
          case (MR_Integer) 0:
#line 992 "interval.m"
            {
#line 992 "interval.m"
              MR_Word backend_libs__interval__GenericCall_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 992 "interval.m"
              MR_Word backend_libs__interval__MustHaveMap_85;
#line 992 "interval.m"
              MR_Word backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 992 "interval.m"
              MR_Word backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 992 "interval.m"
              MR_Word backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 4)));
#line 992 "interval.m"
              MR_Word backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 5)));

#line 997 "interval.m"
#line 997 "interval.m"
              switch (MR_tag((MR_Word) backend_libs__interval__GenericCall_79)) {
#line 997 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 997 "interval.m"
                case (MR_Integer) 0:
#line 997 "interval.m"
                case (MR_Integer) 1:
#line 997 "interval.m"
                case (MR_Integer) 2:
#line 1002 "interval.m"
                  backend_libs__interval__MustHaveMap_85 = (MR_Integer) 1;
#line 997 "interval.m"
                  break;
#line 997 "interval.m"
                case (MR_Integer) 3:
#line 996 "interval.m"
                  backend_libs__interval__MustHaveMap_85 = (MR_Integer) 0;
#line 997 "interval.m"
                  break;
#line 997 "interval.m"
              }
#line 1004 "interval.m"
              {
#line 1004 "interval.m"
                backend_libs__interval__record_decisions_at_call_site_9_p_0(backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__MustHaveMap_85, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
#line 1004 "interval.m"
                return;
              }
#line 992 "interval.m"
            }
#line 897 "interval.m"
            break;
#line 897 "interval.m"
          case (MR_Integer) 1:
#line 1020 "interval.m"
            {
#line 1021 "interval.m"
              {
#line 1021 "interval.m"
                backend_libs__interval__record_decisions_at_call_site_9_p_0(backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, (MR_Integer) 0, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
#line 1021 "interval.m"
                return;
              }
#line 1020 "interval.m"
            }
#line 897 "interval.m"
            break;
#line 897 "interval.m"
          case (MR_Integer) 2:
#line 892 "interval.m"
            {
#line 892 "interval.m"
              MR_Word backend_libs__interval__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 892 "interval.m"
              MR_Word backend_libs__interval__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 892 "interval.m"
              MR_Word backend_libs__interval__Goals_19;
#line 892 "interval.m"
              MR_Word backend_libs__interval__GoalExpr_20;

#line 893 "interval.m"
              {
#line 893 "interval.m"
                backend_libs__interval__record_decisions_in_conj_9_p_0(backend_libs__interval__Goals0_18, &backend_libs__interval__Goals_19, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__ConjType_17, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 895 "interval.m"
              {
#line 895 "interval.m"
                backend_libs__interval__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 895 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 895 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_20, 1) = ((MR_Box) (backend_libs__interval__ConjType_17));
#line 895 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_20, 2) = ((MR_Box) (backend_libs__interval__Goals_19));
#line 895 "interval.m"
              }
#line 896 "interval.m"
              {
#line 896 "interval.m"
                MR_Word base;
#line 896 "interval.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 896 "interval.m"
                *backend_libs__interval__Goal_10 = base;
#line 896 "interval.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__GoalExpr_20));
#line 896 "interval.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 896 "interval.m"
              }
#line 892 "interval.m"
            }
#line 897 "interval.m"
            break;
#line 897 "interval.m"
          case (MR_Integer) 3:
#line 898 "interval.m"
            {
#line 898 "interval.m"
              MR_Word backend_libs__interval__StartAnchor_21;
#line 898 "interval.m"
              MR_Word backend_libs__interval__EndAnchor_22;
#line 898 "interval.m"
              MR_Word backend_libs__interval__Goals0_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));

#line 899 "interval.m"
              {
#line 899 "interval.m"
                backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 1, backend_libs__interval__Goal0_9, &backend_libs__interval__StartAnchor_21, &backend_libs__interval__EndAnchor_22);
              }
#line 912 "interval.m"
              if ((backend_libs__interval__Goals0_170 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 913 "interval.m"
                {
#line 915 "interval.m"
                  *backend_libs__interval__Goal_10 = backend_libs__interval__Goal0_9;
#line 913 "interval.m"
                  *backend_libs__interval__STATE_VARIABLE_VarInfo_115 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_114;
#line 913 "interval.m"
                  *backend_libs__interval__STATE_VARIABLE_VarRename_117 = backend_libs__interval__STATE_VARIABLE_VarRename_0_116;
#line 913 "interval.m"
                }
#line 912 "interval.m"
              else
#line 901 "interval.m"
                {
#line 901 "interval.m"
                  MR_Word backend_libs__interval__FirstGoal0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals0_170, (MR_Integer) 0)));
#line 901 "interval.m"
                  MR_Word backend_libs__interval__LaterGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals0_170, (MR_Integer) 1)));
#line 901 "interval.m"
                  MR_Word backend_libs__interval__FirstGoal_25;
#line 901 "interval.m"
                  MR_Word backend_libs__interval__StartInserts_27;
#line 901 "interval.m"
                  MR_Word backend_libs__interval__LaterGoals_28;
#line 901 "interval.m"
                  MR_Word backend_libs__interval__Goal1_29;
#line 901 "interval.m"
                  MR_Word backend_libs__interval__Inserts_30;
#line 901 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_159_159;
#line 901 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_160_160;
#line 901 "interval.m"
                  MR_Word backend_libs__interval__V_161_161;
#line 901 "interval.m"
                  MR_Word backend_libs__interval__Goals_166;
#line 902 "interval.m"
                  MR_Word backend_libs__interval__V_26_26;

#line 902 "interval.m"
                  {
#line 902 "interval.m"
                    backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__FirstGoal0_23, &backend_libs__interval__FirstGoal_25, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_159_159, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, &backend_libs__interval__V_26_26, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                  }
#line 904 "interval.m"
                  {
#line 904 "interval.m"
                    backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__StartAnchor_21, &backend_libs__interval__StartInserts_27);
                  }
#line 905 "interval.m"
                  {
#line 905 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(backend_libs__interval__LaterGoals0_24, &backend_libs__interval__LaterGoals_28, backend_libs__interval__STATE_VARIABLE_VarInfo_159_159, &backend_libs__interval__STATE_VARIABLE_VarInfo_160_160, backend_libs__interval__StartInserts_27, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                  }
#line 907 "interval.m"
                  {
#line 907 "interval.m"
                    backend_libs__interval__Goals_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 907 "interval.m"
                    MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_166, 0) = ((MR_Box) (backend_libs__interval__FirstGoal_25));
#line 907 "interval.m"
                    MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_166, 1) = ((MR_Box) (backend_libs__interval__LaterGoals_28));
#line 907 "interval.m"
                  }
#line 908 "interval.m"
                  {
#line 908 "interval.m"
                    backend_libs__interval__V_161_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "interval.m"
                    MR_hl_field(MR_mktag(3), backend_libs__interval__V_161_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 908 "interval.m"
                    MR_hl_field(MR_mktag(3), backend_libs__interval__V_161_161, 1) = ((MR_Box) (backend_libs__interval__Goals_166));
#line 908 "interval.m"
                  }
#line 908 "interval.m"
                  {
#line 908 "interval.m"
                    backend_libs__interval__Goal1_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 908 "interval.m"
                    MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_29, 0) = ((MR_Box) (backend_libs__interval__V_161_161));
#line 908 "interval.m"
                    MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_29, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 908 "interval.m"
                  }
#line 909 "interval.m"
                  {
#line 909 "interval.m"
                    backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_22, &backend_libs__interval__Inserts_30);
                  }
#line 910 "interval.m"
                  {
#line 910 "interval.m"
                    backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_29, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_160_160, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__Inserts_30, backend_libs__interval__MaybeFeature_14);
#line 910 "interval.m"
                    return;
                  }
#line 901 "interval.m"
                }
#line 898 "interval.m"
            }
#line 897 "interval.m"
            break;
#line 897 "interval.m"
          case (MR_Integer) 4:
#line 918 "interval.m"
            {
#line 918 "interval.m"
              MR_Word backend_libs__interval__Var0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 918 "interval.m"
              MR_Word backend_libs__interval__Det_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 918 "interval.m"
              MR_Word backend_libs__interval__Cases0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 918 "interval.m"
              MR_Word backend_libs__interval__Cases_34;
#line 918 "interval.m"
              MR_Word backend_libs__interval__Var_35;
#line 918 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_152_152;
#line 918 "interval.m"
              MR_Word backend_libs__interval__V_154_154;
#line 918 "interval.m"
              MR_Word backend_libs__interval__EndAnchor_173;
#line 918 "interval.m"
              MR_Word backend_libs__interval__Goal1_174;
#line 918 "interval.m"
              MR_Word backend_libs__interval__Inserts_175;
#line 923 "interval.m"
              MR_Word backend_libs__interval___StartAnchor_36;

#line 919 "interval.m"
              {
#line 919 "interval.m"
                backend_libs__interval__record_decisions_in_cases_7_p_0(backend_libs__interval__Cases0_33, &backend_libs__interval__Cases_34, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_152_152, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 921 "interval.m"
              {
#line 921 "interval.m"
                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Var0_31, &backend_libs__interval__Var_35);
              }
#line 922 "interval.m"
              {
#line 922 "interval.m"
                backend_libs__interval__V_154_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 922 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 922 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 1) = ((MR_Box) (backend_libs__interval__Var_35));
#line 922 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 2) = ((MR_Box) (backend_libs__interval__Det_32));
#line 922 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 3) = ((MR_Box) (backend_libs__interval__Cases_34));
#line 922 "interval.m"
              }
#line 922 "interval.m"
              {
#line 922 "interval.m"
                backend_libs__interval__Goal1_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 922 "interval.m"
                MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_174, 0) = ((MR_Box) (backend_libs__interval__V_154_154));
#line 922 "interval.m"
                MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_174, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 922 "interval.m"
              }
#line 923 "interval.m"
              {
#line 923 "interval.m"
                backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 2, backend_libs__interval__Goal0_9, &backend_libs__interval___StartAnchor_36, &backend_libs__interval__EndAnchor_173);
              }
#line 924 "interval.m"
              {
#line 924 "interval.m"
                backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_173, &backend_libs__interval__Inserts_175);
              }
#line 925 "interval.m"
              {
#line 925 "interval.m"
                backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_174, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_152_152, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__Inserts_175, backend_libs__interval__MaybeFeature_14);
#line 925 "interval.m"
                return;
              }
#line 918 "interval.m"
            }
#line 897 "interval.m"
            break;
#line 897 "interval.m"
          case (MR_Integer) 5:
#line 958 "interval.m"
            {
#line 958 "interval.m"
              MR_Word backend_libs__interval__Reason0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 958 "interval.m"
              MR_Word backend_libs__interval__SubGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 958 "interval.m"
              MR_Word backend_libs__interval__Reason_58;
#line 980 "interval.m"
              MR_Word backend_libs__interval__V_130_130;
#line 980 "interval.m"
              MR_Word backend_libs__interval__V_77_77;

#line 963 "interval.m"
#line 963 "interval.m"
              switch (MR_tag((MR_Word) backend_libs__interval__Reason0_56)) {
#line 963 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 963 "interval.m"
                case (MR_Integer) 0:
#line 960 "interval.m"
                  {
#line 960 "interval.m"
                    MR_Word backend_libs__interval__Vars0_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Reason0_56, (MR_Integer) 0)));
#line 960 "interval.m"
                    MR_Word backend_libs__interval__Vars_186;

#line 961 "interval.m"
                    {
#line 961 "interval.m"
                      parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Vars0_185, &backend_libs__interval__Vars_186);
                    }
#line 962 "interval.m"
                    {
#line 962 "interval.m"
                      backend_libs__interval__Reason_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 962 "interval.m"
                      MR_hl_field(MR_mktag(0), backend_libs__interval__Reason_58, 0) = ((MR_Box) (backend_libs__interval__Vars_186));
#line 962 "interval.m"
                    }
#line 960 "interval.m"
                  }
#line 963 "interval.m"
                  break;
#line 963 "interval.m"
                case (MR_Integer) 1:
#line 963 "interval.m"
                case (MR_Integer) 2:
#line 978 "interval.m"
                  backend_libs__interval__Reason_58 = backend_libs__interval__Reason0_56;
#line 963 "interval.m"
                  break;
#line 963 "interval.m"
                case (MR_Integer) 3:
#line 963 "interval.m"
#line 963 "interval.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason0_56, (MR_Integer) 0)))) {
#line 963 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 963 "interval.m"
                    case (MR_Integer) 0:
#line 963 "interval.m"
                    case (MR_Integer) 1:
#line 963 "interval.m"
                    case (MR_Integer) 2:
#line 963 "interval.m"
                    case (MR_Integer) 3:
#line 963 "interval.m"
                    case (MR_Integer) 4:
#line 963 "interval.m"
                    case (MR_Integer) 6:
#line 963 "interval.m"
                    case (MR_Integer) 7:
#line 978 "interval.m"
                      backend_libs__interval__Reason_58 = backend_libs__interval__Reason0_56;
#line 963 "interval.m"
                      break;
#line 963 "interval.m"
                    case (MR_Integer) 5:
#line 964 "interval.m"
                      {
#line 964 "interval.m"
                        MR_Word backend_libs__interval__Kind_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason0_56, (MR_Integer) 2)));
#line 964 "interval.m"
                        MR_Word backend_libs__interval__Var0_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason0_56, (MR_Integer) 1)));
#line 964 "interval.m"
                        MR_Word backend_libs__interval__Var_188;

#line 965 "interval.m"
                        {
#line 965 "interval.m"
                          parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Var0_187, &backend_libs__interval__Var_188);
                        }
#line 966 "interval.m"
                        {
#line 966 "interval.m"
                          backend_libs__interval__Reason_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 966 "interval.m"
                          MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 966 "interval.m"
                          MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, 1) = ((MR_Box) (backend_libs__interval__Var_188));
#line 966 "interval.m"
                          MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, 2) = ((MR_Box) (backend_libs__interval__Kind_59));
#line 966 "interval.m"
                        }
#line 964 "interval.m"
                      }
#line 963 "interval.m"
                      break;
#line 963 "interval.m"
                  }
#line 963 "interval.m"
                  break;
#line 963 "interval.m"
              }
#line 980 "interval.m"
              backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 980 "interval.m"
              if (backend_libs__interval__succeeded)
#line 980 "interval.m"
                {
#line 980 "interval.m"
                  backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, (MR_Integer) 1)));
#line 980 "interval.m"
                  backend_libs__interval__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, (MR_Integer) 2)));
#line 980 "interval.m"
                  backend_libs__interval__succeeded = (backend_libs__interval__V_130_130 == (MR_Integer) 1);
#line 980 "interval.m"
                }
#line 983 "interval.m"
              if (backend_libs__interval__succeeded)
#line 982 "interval.m"
                {
#line 982 "interval.m"
                  *backend_libs__interval__Goal_10 = backend_libs__interval__Goal0_9;
#line 982 "interval.m"
                  *backend_libs__interval__STATE_VARIABLE_VarRename_117 = backend_libs__interval__STATE_VARIABLE_VarRename_0_116;
#line 982 "interval.m"
                  *backend_libs__interval__STATE_VARIABLE_VarInfo_115 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_114;
#line 982 "interval.m"
                }
#line 983 "interval.m"
              else
#line 987 "interval.m"
                {
#line 987 "interval.m"
                  MR_Word backend_libs__interval__SubGoal_78;
#line 987 "interval.m"
                  MR_Word backend_libs__interval__GoalExpr_193;

#line 986 "interval.m"
                  {
#line 986 "interval.m"
                    backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__SubGoal0_57, &backend_libs__interval__SubGoal_78, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                  }
#line 988 "interval.m"
                  {
#line 988 "interval.m"
                    backend_libs__interval__GoalExpr_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 988 "interval.m"
                    MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 988 "interval.m"
                    MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_193, 1) = ((MR_Box) (backend_libs__interval__Reason_58));
#line 988 "interval.m"
                    MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_193, 2) = ((MR_Box) (backend_libs__interval__SubGoal_78));
#line 988 "interval.m"
                  }
#line 989 "interval.m"
                  {
#line 989 "interval.m"
                    MR_Word base;
#line 989 "interval.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 989 "interval.m"
                    *backend_libs__interval__Goal_10 = base;
#line 989 "interval.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__GoalExpr_193));
#line 989 "interval.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 989 "interval.m"
                  }
#line 987 "interval.m"
                }
#line 958 "interval.m"
            }
#line 897 "interval.m"
            break;
#line 897 "interval.m"
          case (MR_Integer) 6:
#line 938 "interval.m"
            {
#line 938 "interval.m"
              MR_Word backend_libs__interval__TypeInfo_203_203;
#line 938 "interval.m"
              MR_Word backend_libs__interval__Vars0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 938 "interval.m"
              MR_Word backend_libs__interval__Cond0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 938 "interval.m"
              MR_Word backend_libs__interval__Then0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 938 "interval.m"
              MR_Word backend_libs__interval__Else0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 4)));
#line 938 "interval.m"
              MR_Word backend_libs__interval__Vars_44;
#line 938 "interval.m"
              MR_Word backend_libs__interval__Cond_45;
#line 938 "interval.m"
              MR_Word backend_libs__interval__Then_46;
#line 938 "interval.m"
              MR_Word backend_libs__interval__VarRenameElse_48;
#line 938 "interval.m"
              MR_Word backend_libs__interval__StartInsertGoals_49;
#line 938 "interval.m"
              MR_Word backend_libs__interval__Else1_50;
#line 938 "interval.m"
              MR_Word backend_libs__interval__ElseGoalInfo0_53;
#line 938 "interval.m"
              MR_Word backend_libs__interval__Else_54;
#line 938 "interval.m"
              MR_Word backend_libs__interval__EndInserts_55;
#line 938 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_135_135;
#line 938 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_136_136;
#line 938 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_137_137;
#line 938 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_138_138;
#line 938 "interval.m"
              MR_Word backend_libs__interval__V_139_139;
#line 938 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_140_140;
#line 938 "interval.m"
              MR_Word backend_libs__interval__V_141_141;
#line 938 "interval.m"
              MR_Word backend_libs__interval__V_142_142;
#line 938 "interval.m"
              MR_Word backend_libs__interval__V_144_144;
#line 938 "interval.m"
              MR_Word backend_libs__interval__StartAnchor_181;
#line 938 "interval.m"
              MR_Word backend_libs__interval__EndAnchor_182;
#line 938 "interval.m"
              MR_Word backend_libs__interval__StartInserts_183;
#line 938 "interval.m"
              MR_Word backend_libs__interval__Goal1_184;
#line 943 "interval.m"
              MR_Word backend_libs__interval__V_47_47;
#line 948 "interval.m"
              MR_Word backend_libs__interval__V_51_51;
#line 950 "interval.m"
              MR_Word backend_libs__interval__V_52_52;

#line 939 "interval.m"
              {
#line 939 "interval.m"
                backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 0, backend_libs__interval__Goal0_9, &backend_libs__interval__StartAnchor_181, &backend_libs__interval__EndAnchor_182);
              }
#line 940 "interval.m"
              {
#line 940 "interval.m"
                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Vars0_40, &backend_libs__interval__Vars_44);
              }
#line 941 "interval.m"
              {
#line 941 "interval.m"
                backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Cond0_41, &backend_libs__interval__Cond_45, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_135_135, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, &backend_libs__interval__STATE_VARIABLE_VarRename_136_136, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 943 "interval.m"
              {
#line 943 "interval.m"
                backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Then0_42, &backend_libs__interval__Then_46, backend_libs__interval__STATE_VARIABLE_VarInfo_135_135, &backend_libs__interval__STATE_VARIABLE_VarInfo_137_137, backend_libs__interval__STATE_VARIABLE_VarRename_136_136, &backend_libs__interval__V_47_47, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 945 "interval.m"
              {
#line 945 "interval.m"
                backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__StartAnchor_181, &backend_libs__interval__StartInserts_183);
              }
#line 11660 "backend_libs.interval.c"
              backend_libs__interval__TypeInfo_203_203 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 946 "interval.m"
              {
#line 946 "interval.m"
                backend_libs__interval__V_139_139 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_203_203, backend_libs__interval__TypeInfo_203_203);
              }
#line 946 "interval.m"
              {
#line 946 "interval.m"
                backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_137_137, &backend_libs__interval__STATE_VARIABLE_VarInfo_138_138, backend_libs__interval__V_139_139, &backend_libs__interval__VarRenameElse_48, backend_libs__interval__StartInserts_183, backend_libs__interval__MaybeFeature_14, &backend_libs__interval__StartInsertGoals_49);
              }
#line 948 "interval.m"
              {
#line 948 "interval.m"
                backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Else0_43, &backend_libs__interval__Else1_50, backend_libs__interval__STATE_VARIABLE_VarInfo_138_138, &backend_libs__interval__STATE_VARIABLE_VarInfo_140_140, backend_libs__interval__VarRenameElse_48, &backend_libs__interval__V_51_51, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 950 "interval.m"
              backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Else0_43, (MR_Integer) 0)));
#line 950 "interval.m"
              backend_libs__interval__ElseGoalInfo0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Else0_43, (MR_Integer) 1)));
#line 951 "interval.m"
              {
#line 951 "interval.m"
                backend_libs__interval__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 951 "interval.m"
                MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 0) = ((MR_Box) (backend_libs__interval__Else1_50));
#line 951 "interval.m"
                MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 951 "interval.m"
              }
#line 951 "interval.m"
              {
#line 951 "interval.m"
                backend_libs__interval__V_141_141 = mercury__list__append_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, backend_libs__interval__StartInsertGoals_49, backend_libs__interval__V_142_142);
              }
#line 951 "interval.m"
              {
#line 951 "interval.m"
                hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_141_141, backend_libs__interval__ElseGoalInfo0_53, &backend_libs__interval__Else_54);
              }
#line 953 "interval.m"
              {
#line 953 "interval.m"
                backend_libs__interval__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 953 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 953 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 1) = ((MR_Box) (backend_libs__interval__Vars_44));
#line 953 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 2) = ((MR_Box) (backend_libs__interval__Cond_45));
#line 953 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 3) = ((MR_Box) (backend_libs__interval__Then_46));
#line 953 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 4) = ((MR_Box) (backend_libs__interval__Else_54));
#line 953 "interval.m"
              }
#line 953 "interval.m"
              {
#line 953 "interval.m"
                backend_libs__interval__Goal1_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 953 "interval.m"
                MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_184, 0) = ((MR_Box) (backend_libs__interval__V_144_144));
#line 953 "interval.m"
                MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_184, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 953 "interval.m"
              }
#line 954 "interval.m"
              {
#line 954 "interval.m"
                backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_182, &backend_libs__interval__EndInserts_55);
              }
#line 955 "interval.m"
              {
#line 955 "interval.m"
                backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_184, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_140_140, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__EndInserts_55, backend_libs__interval__MaybeFeature_14);
#line 955 "interval.m"
                return;
              }
#line 938 "interval.m"
            }
#line 897 "interval.m"
            break;
#line 897 "interval.m"
          case (MR_Integer) 7:
#line 1027 "interval.m"
            {
#line 1028 "interval.m"
              {
#line 1028 "interval.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.record_decisions_in_goal\'/8", (MR_String) "shorthand");
#line 1028 "interval.m"
                return;
              }
#line 1027 "interval.m"
            }
#line 897 "interval.m"
            break;
#line 897 "interval.m"
        }
#line 897 "interval.m"
        break;
#line 897 "interval.m"
    }
#line 889 "interval.m"
  }
#line 883 "interval.m"
}

#line 859 "interval.m"
static void MR_CALL 
backend_libs__interval__record_model_non_anchor_3_p_0(
#line 859 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 859 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 859 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9)
#line 859 "interval.m"
{
#line 862 "interval.m"
  {
#line 862 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 862 "interval.m"
    MR_Word backend_libs__interval__ModelNonAnchors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 862 "interval.m"
    MR_Word backend_libs__interval__ModelNonAnchors_7;
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_27_27;
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 865 "interval.m"
    MR_Word backend_libs__interval__V_36_36;

#line 864 "interval.m"
    {
#line 864 "interval.m"
      mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Anchor_4)), backend_libs__interval__ModelNonAnchors0_6, &backend_libs__interval__ModelNonAnchors_7);
    }
#line 865 "interval.m"
    backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 865 "interval.m"
    backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 865 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 865 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 865 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 865 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 865 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 865 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 865 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 865 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 865 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 865 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 865 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 865 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 865 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 865 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 865 "interval.m"
    {
#line 865 "interval.m"
      MR_Word base;
#line 865 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 865 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = base;
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_26_26));
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_27_27));
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__ModelNonAnchors_7));
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 865 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 865 "interval.m"
    }
#line 862 "interval.m"
  }
#line 859 "interval.m"
}

#line 842 "interval.m"
static void MR_CALL 
backend_libs__interval__require_access_3_p_0(
#line 842 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 842 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 842 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9)
#line 842 "interval.m"
{
#line 845 "interval.m"
  {
#line 845 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 845 "interval.m"
    MR_Word backend_libs__interval__AccessedLater0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 845 "interval.m"
    MR_Word backend_libs__interval__AccessedLater_7;
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_27_27;
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 848 "interval.m"
    MR_Word backend_libs__interval__V_28_28;

#line 847 "interval.m"
    {
#line 847 "interval.m"
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_4, backend_libs__interval__AccessedLater0_6, &backend_libs__interval__AccessedLater_7);
    }
#line 848 "interval.m"
    backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 848 "interval.m"
    backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 848 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 848 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 848 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 848 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 848 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 848 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 848 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 848 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 848 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 848 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 848 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 848 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 848 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 848 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 848 "interval.m"
    {
#line 848 "interval.m"
      MR_Word base;
#line 848 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 848 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = base;
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_26_26));
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_27_27));
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__AccessedLater_7));
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 848 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 848 "interval.m"
    }
#line 845 "interval.m"
  }
#line 842 "interval.m"
}

#line 834 "interval.m"
static void MR_CALL 
backend_libs__interval__require_flushed_3_p_0(
#line 834 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 834 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 834 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9)
#line 834 "interval.m"
{
#line 837 "interval.m"
  {
#line 837 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 837 "interval.m"
    MR_Word backend_libs__interval__FlushedLater0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 837 "interval.m"
    MR_Word backend_libs__interval__FlushedLater_7;
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 840 "interval.m"
    MR_Word backend_libs__interval__V_27_27;

#line 839 "interval.m"
    {
#line 839 "interval.m"
      backend_libs__interval__FlushedLater_7 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__FlushedLater0_6, backend_libs__interval__Vars_4);
    }
#line 840 "interval.m"
    backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 840 "interval.m"
    backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 840 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 840 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 840 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 840 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 840 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 840 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 840 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 840 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 840 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 840 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 840 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 840 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 840 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 840 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 840 "interval.m"
    {
#line 840 "interval.m"
      MR_Word base;
#line 840 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 840 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = base;
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_26_26));
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__FlushedLater_7));
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 840 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 840 "interval.m"
    }
#line 837 "interval.m"
  }
#line 834 "interval.m"
}

#line 827 "interval.m"
static void MR_CALL 
backend_libs__interval__require_in_regs_3_p_0(
#line 827 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 827 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 827 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8)
#line 827 "interval.m"
{
#line 830 "interval.m"
  {
#line 830 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 830 "interval.m"
    MR_Word backend_libs__interval__CurIntervalId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 6)));
#line 831 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 0)));
#line 831 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 1)));
#line 831 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 2)));
#line 831 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 3)));
#line 831 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 4)));
#line 831 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 5)));
#line 831 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 7)));
#line 831 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 8)));
#line 831 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 9)));
#line 831 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 10)));
#line 831 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 11)));
#line 831 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 12)));
#line 831 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 13)));
#line 831 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 14)));
#line 831 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 15)));

#line 832 "interval.m"
    {
#line 832 "interval.m"
      backend_libs__interval__record_interval_vars_4_p_0(backend_libs__interval__CurIntervalId_6, backend_libs__interval__Vars_4, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_8);
#line 832 "interval.m"
      return;
    }
#line 830 "interval.m"
  }
#line 827 "interval.m"
}

#line 784 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_no_succ_3_p_0(
#line 784 "interval.m"
  MR_Word backend_libs__interval__Id_4,
#line 784 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 784 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10)
#line 784 "interval.m"
{
#line 787 "interval.m"
  {
#line 787 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 787 "interval.m"
    MR_Word backend_libs__interval__SuccMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 787 "interval.m"
    MR_Word backend_libs__interval__SuccMap_8;
#line 788 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 788 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 788 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 788 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 788 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 788 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 788 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 788 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 788 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 788 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 788 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 788 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 788 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 788 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 788 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 789 "interval.m"
    MR_Word backend_libs__interval___Succ0_7;
#line 789 "interval.m"
    MR_Box backend_libs__interval__conv0__Succ0_7;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_45_45;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 794 "interval.m"
    MR_Word backend_libs__interval__V_44_44;

#line 789 "interval.m"
    {
#line 789 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__SuccMap0_6, ((MR_Box) (backend_libs__interval__Id_4)), &backend_libs__interval__conv0__Succ0_7);
    }
#line 789 "interval.m"
    if (backend_libs__interval__succeeded)
#line 789 "interval.m"
      {
#line 789 "interval.m"
        backend_libs__interval___Succ0_7 = ((MR_Word) backend_libs__interval__conv0__Succ0_7);
#line 789 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 789 "interval.m"
      }
#line 791 "interval.m"
    if (backend_libs__interval__succeeded)
#line 790 "interval.m"
      {
#line 790 "interval.m"
        {
#line 790 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.record_interval_no_succ\'/3", (MR_String) "already in succ map");
#line 790 "interval.m"
          return;
        }
#line 790 "interval.m"
      }
#line 791 "interval.m"
    else
#line 792 "interval.m"
      {
#line 792 "interval.m"
        {
#line 792 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], ((MR_Box) (backend_libs__interval__Id_4)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), backend_libs__interval__SuccMap0_6, &backend_libs__interval__SuccMap_8);
        }
#line 792 "interval.m"
      }
#line 794 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 794 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 794 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 794 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 794 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 794 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 794 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 794 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 794 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 794 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 794 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 794 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 794 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 794 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 794 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 794 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 794 "interval.m"
    {
#line 794 "interval.m"
      MR_Word base;
#line 794 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 794 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_10 = base;
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__SuccMap_8));
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 794 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 794 "interval.m"
    }
#line 787 "interval.m"
  }
#line 784 "interval.m"
}

#line 772 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_succ_4_p_0(
#line 772 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 772 "interval.m"
  MR_Word backend_libs__interval__Succ_6,
#line 772 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 772 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12)
#line 772 "interval.m"
{
#line 775 "interval.m"
  {
#line 775 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 775 "interval.m"
    MR_Word backend_libs__interval__SuccMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 775 "interval.m"
    MR_Word backend_libs__interval__SuccMap_10;
#line 776 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 776 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 776 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 776 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 776 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 776 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 776 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 776 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 776 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 776 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 776 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 776 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 776 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 776 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 776 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 779 "interval.m"
    MR_Word backend_libs__interval__Succ0_9;
#line 777 "interval.m"
    MR_Box backend_libs__interval__conv0_Succ0_9;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 782 "interval.m"
    MR_Word backend_libs__interval__V_45_45;

#line 777 "interval.m"
    {
#line 777 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__SuccMap0_8, ((MR_Box) (backend_libs__interval__Id_5)), &backend_libs__interval__conv0_Succ0_9);
    }
#line 777 "interval.m"
    if (backend_libs__interval__succeeded)
#line 777 "interval.m"
      {
#line 777 "interval.m"
        backend_libs__interval__Succ0_9 = ((MR_Word) backend_libs__interval__conv0_Succ0_9);
#line 777 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 777 "interval.m"
      }
#line 779 "interval.m"
    if (backend_libs__interval__succeeded)
#line 778 "interval.m"
      {
#line 778 "interval.m"
        MR_Word backend_libs__interval__V_13_13;

#line 778 "interval.m"
        {
#line 778 "interval.m"
          backend_libs__interval__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_13_13, 0) = ((MR_Box) (backend_libs__interval__Succ_6));
#line 778 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_13_13, 1) = ((MR_Box) (backend_libs__interval__Succ0_9));
#line 778 "interval.m"
        }
#line 778 "interval.m"
        {
#line 778 "interval.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__V_13_13)), backend_libs__interval__SuccMap0_8, &backend_libs__interval__SuccMap_10);
        }
#line 778 "interval.m"
      }
#line 779 "interval.m"
    else
#line 780 "interval.m"
      {
#line 780 "interval.m"
        MR_Word backend_libs__interval__V_14_14;

#line 780 "interval.m"
        {
#line 780 "interval.m"
          backend_libs__interval__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_14_14, 0) = ((MR_Box) (backend_libs__interval__Succ_6));
#line 780 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 780 "interval.m"
        }
#line 780 "interval.m"
        {
#line 780 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__V_14_14)), backend_libs__interval__SuccMap0_8, &backend_libs__interval__SuccMap_10);
        }
#line 780 "interval.m"
      }
#line 782 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 782 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 782 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 782 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 782 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 782 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 782 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 782 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 782 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 782 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 782 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 782 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 782 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 782 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 782 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 782 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 782 "interval.m"
    {
#line 782 "interval.m"
      MR_Word base;
#line 782 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 782 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_12 = base;
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__SuccMap_10));
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 782 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 782 "interval.m"
    }
#line 775 "interval.m"
  }
#line 772 "interval.m"
}

#line 764 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_start_4_p_0(
#line 764 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 764 "interval.m"
  MR_Word backend_libs__interval__Start_6,
#line 764 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 764 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11)
#line 764 "interval.m"
{
#line 767 "interval.m"
  {
#line 767 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 767 "interval.m"
    MR_Word backend_libs__interval__StartMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 767 "interval.m"
    MR_Word backend_libs__interval__StartMap_9;
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 770 "interval.m"
    MR_Word backend_libs__interval__V_39_39;

#line 769 "interval.m"
    {
#line 769 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__Start_6)), backend_libs__interval__StartMap0_8, &backend_libs__interval__StartMap_9);
    }
#line 770 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 770 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 770 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 770 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 770 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 770 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 770 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 770 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 770 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 770 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 770 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 770 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 770 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 770 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 770 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 770 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 770 "interval.m"
    {
#line 770 "interval.m"
      MR_Word base;
#line 770 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 770 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_11 = base;
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__StartMap_9));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 770 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 770 "interval.m"
    }
#line 767 "interval.m"
  }
#line 764 "interval.m"
}

#line 756 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_end_4_p_0(
#line 756 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 756 "interval.m"
  MR_Word backend_libs__interval__End_6,
#line 756 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 756 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11)
#line 756 "interval.m"
{
#line 759 "interval.m"
  {
#line 759 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 759 "interval.m"
    MR_Word backend_libs__interval__EndMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 759 "interval.m"
    MR_Word backend_libs__interval__EndMap_9;
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 762 "interval.m"
    MR_Word backend_libs__interval__V_40_40;

#line 761 "interval.m"
    {
#line 761 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__End_6)), backend_libs__interval__EndMap0_8, &backend_libs__interval__EndMap_9);
    }
#line 762 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 762 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 762 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 762 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 762 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 762 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 762 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 762 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 762 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 762 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 762 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 762 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 762 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 762 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 762 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 762 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 762 "interval.m"
    {
#line 762 "interval.m"
      MR_Word base;
#line 762 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 762 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_11 = base;
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__EndMap_9));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 762 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 762 "interval.m"
    }
#line 759 "interval.m"
  }
#line 756 "interval.m"
}

#line 735 "interval.m"
static void MR_CALL 
backend_libs__interval__record_branch_end_info_3_p_0(
#line 735 "interval.m"
  MR_Word backend_libs__interval__GoalId_4,
#line 735 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 735 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13)
#line 735 "interval.m"
{
#line 738 "interval.m"
  {
#line 738 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 738 "interval.m"
    MR_Word backend_libs__interval__FlushedLater_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 738 "interval.m"
    MR_Word backend_libs__interval__AccessedLater_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 738 "interval.m"
    MR_Word backend_libs__interval__CurInterval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 738 "interval.m"
    MR_Word backend_libs__interval__BranchEndMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 738 "interval.m"
    MR_Word backend_libs__interval__BranchEndInfo_10;
#line 738 "interval.m"
    MR_Word backend_libs__interval__BranchEndMap_11;
#line 739 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 739 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 739 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 739 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 739 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 739 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 739 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 739 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 739 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 739 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 739 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 739 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 745 "interval.m"
    MR_Word backend_libs__interval__V_79_79;

#line 743 "interval.m"
    {
#line 743 "interval.m"
      backend_libs__interval__BranchEndInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__BranchEndInfo_10, 0) = ((MR_Box) (backend_libs__interval__FlushedLater_6));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__BranchEndInfo_10, 1) = ((MR_Box) (backend_libs__interval__AccessedLater_7));
#line 743 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__BranchEndInfo_10, 2) = ((MR_Box) (backend_libs__interval__CurInterval_8));
#line 743 "interval.m"
    }
#line 744 "interval.m"
    {
#line 744 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ((MR_Box) (backend_libs__interval__GoalId_4)), ((MR_Box) (backend_libs__interval__BranchEndInfo_10)), backend_libs__interval__BranchEndMap0_9, &backend_libs__interval__BranchEndMap_11);
    }
#line 745 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 745 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 745 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 745 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 745 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 745 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 745 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 745 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 745 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 745 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 745 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 745 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 745 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 745 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 745 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 745 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 745 "interval.m"
    {
#line 745 "interval.m"
      MR_Word base;
#line 745 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 745 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_13 = base;
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__BranchEndMap_11));
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_84_84));
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_85_85));
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_86_86));
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_87_87));
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_88_88));
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_89_89));
#line 745 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_90_90));
#line 745 "interval.m"
    }
#line 738 "interval.m"
  }
#line 735 "interval.m"
}

#line 723 "interval.m"
static void MR_CALL 
backend_libs__interval__new_interval_id_3_p_0(
#line 723 "interval.m"
  MR_Word * backend_libs__interval__Id_4,
#line 723 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 723 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12)
#line 723 "interval.m"
{
#line 726 "interval.m"
  {
#line 726 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 726 "interval.m"
    MR_Word backend_libs__interval__Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 726 "interval.m"
    MR_Word backend_libs__interval__IntervalVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 726 "interval.m"
    MR_Integer backend_libs__interval__Num_8;
#line 726 "interval.m"
    MR_Word backend_libs__interval__Counter_9;
#line 726 "interval.m"
    MR_Word backend_libs__interval__IntervalVars_10;
#line 726 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 726 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 726 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 726 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 726 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 726 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 726 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 726 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 726 "interval.m"
    MR_Word backend_libs__interval__V_54_54;
#line 726 "interval.m"
    MR_Word backend_libs__interval__V_55_55;
#line 726 "interval.m"
    MR_Word backend_libs__interval__V_56_56;
#line 726 "interval.m"
    MR_Word backend_libs__interval__V_57_57;
#line 726 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 726 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 726 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 732 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 732 "interval.m"
    MR_Word backend_libs__interval__V_60_60;

#line 729 "interval.m"
    {
#line 729 "interval.m"
      mercury__counter__allocate_3_p_0(&backend_libs__interval__Num_8, backend_libs__interval__Counter0_6, &backend_libs__interval__Counter_9);
    }
#line 730 "interval.m"
    *backend_libs__interval__Id_4 = (MR_Word) backend_libs__interval__Num_8;
#line 731 "interval.m"
    {
#line 731 "interval.m"
      backend_libs__interval__V_13_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 731 "interval.m"
    {
#line 731 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (*backend_libs__interval__Id_4)), ((MR_Box) (backend_libs__interval__V_13_13)), backend_libs__interval__IntervalVars0_7, &backend_libs__interval__IntervalVars_10);
    }
#line 732 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 732 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 732 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 732 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 732 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 732 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 732 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 732 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 732 "interval.m"
    backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 732 "interval.m"
    backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 732 "interval.m"
    backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 732 "interval.m"
    backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 732 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 732 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 732 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 732 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 733 "interval.m"
    {
#line 733 "interval.m"
      MR_Word base;
#line 733 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 733 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_12 = base;
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_50_50));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_52_52));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__Counter_9));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_54_54));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_55_55));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_56_56));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_57_57));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_58_58));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_59_59));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__IntervalVars_10));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_61_61));
#line 733 "interval.m"
    }
#line 726 "interval.m"
  }
#line 723 "interval.m"
}

#line 717 "interval.m"
static void MR_CALL 
backend_libs__interval__set_cur_interval_3_p_0(
#line 717 "interval.m"
  MR_Word backend_libs__interval__CurInterval_4,
#line 717 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 717 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7)
#line 717 "interval.m"
{
#line 721 "interval.m"
  {
#line 721 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0)));
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1)));
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2)));
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3)));
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4)));
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5)));
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7)));
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 8)));
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9)));
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10)));
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11)));
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12)));
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13)));
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14)));
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15)));
#line 721 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6)));

#line 721 "interval.m"
    {
#line 721 "interval.m"
      MR_Word base;
#line 721 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 721 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_7 = base;
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__CurInterval_4));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_16_16));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_17_17));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_18_18));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 721 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_24_24));
#line 721 "interval.m"
    }
#line 721 "interval.m"
  }
#line 717 "interval.m"
}

#line 713 "interval.m"
static void MR_CALL 
backend_libs__interval__get_cur_interval_2_p_0(
#line 713 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 713 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3)
#line 713 "interval.m"
{
#line 715 "interval.m"
  {
#line 715 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 0)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 1)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 2)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 3)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 4)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 5)));
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_10_10;
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_11_11;
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_12_12;
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 715 "interval.m"
    MR_Word backend_libs__interval__V_18_18;

#line 715 "interval.m"
    *backend_libs__interval__HeadVar__1_1 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 6)));
#line 715 "interval.m"
    backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 7)));
#line 715 "interval.m"
    backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 8)));
#line 715 "interval.m"
    backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 9)));
#line 715 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 10)));
#line 715 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 11)));
#line 715 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 12)));
#line 715 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 13)));
#line 715 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 14)));
#line 715 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 15)));
#line 715 "interval.m"
  }
#line 713 "interval.m"
}

#line 703 "interval.m"
static void MR_CALL 
backend_libs__interval__gather_interval_vars_4_p_0(
#line 703 "interval.m"
  MR_Word backend_libs__interval__IntervalVarMap_5,
#line 703 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6,
#line 703 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_0_9,
#line 703 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_10)
#line 703 "interval.m"
{
#line 706 "interval.m"
  {
#line 706 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 706 "interval.m"
    MR_Word backend_libs__interval__IntervalVars_8;
#line 707 "interval.m"
    MR_Box backend_libs__interval__conv0_IntervalVars_8;

#line 707 "interval.m"
    {
#line 707 "interval.m"
      mercury__map__lookup_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__IntervalVarMap_5, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv0_IntervalVars_8);
    }
#line 707 "interval.m"
    backend_libs__interval__IntervalVars_8 = ((MR_Word) backend_libs__interval__conv0_IntervalVars_8);
#line 708 "interval.m"
    {
#line 708 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_10 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_0_9, backend_libs__interval__IntervalVars_8);
    }
#line 706 "interval.m"
  }
#line 703 "interval.m"
}

#line 683 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1(
#line 683 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 683 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 683 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 683 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 683 "interval.m"
{
#line 683 "interval.m"
  {
#line 683 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 683 "interval.m"
    MR_Word backend_libs__interval__conv0_STATE_VARIABLE_OpenIntervalVars_10;

#line 683 "interval.m"
    {
#line 683 "interval.m"
      backend_libs__interval__gather_interval_vars_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2), &backend_libs__interval__conv0_STATE_VARIABLE_OpenIntervalVars_10);
    }
#line 683 "interval.m"
    *backend_libs__interval__wrapper_arg_3 = ((MR_Box) (backend_libs__interval__conv0_STATE_VARIABLE_OpenIntervalVars_10));
#line 683 "interval.m"
  }
#line 683 "interval.m"
}

#line 676 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(
#line 676 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 676 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17,
#line 676 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_18)
#line 676 "interval.m"
{
#line 679 "interval.m"
  {
#line 679 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 679 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_87_87;
#line 679 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_88_88;
#line 679 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 9)));
#line 679 "interval.m"
    MR_Word backend_libs__interval__IntervalVarMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 14)));
#line 679 "interval.m"
    MR_Word backend_libs__interval__CurOpenIntervals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 8)));
#line 679 "interval.m"
    MR_Word backend_libs__interval__CurOpenIntervalVars_9;
#line 679 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowMap_16;
#line 679 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 679 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 680 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 0)));
#line 680 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 1)));
#line 680 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 2)));
#line 680 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 3)));
#line 680 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 4)));
#line 680 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 5)));
#line 680 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 6)));
#line 680 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 7)));
#line 680 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 10)));
#line 680 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 11)));
#line 680 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 12)));
#line 680 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 13)));
#line 680 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 15)));
#line 683 "interval.m"
    MR_Box backend_libs__interval__conv1_CurOpenIntervalVars_9;
#line 695 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowInfo0_10;
#line 685 "interval.m"
    MR_Box backend_libs__interval__conv2_AnchorFollowInfo0_10;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 701 "interval.m"
    MR_Word backend_libs__interval__V_77_77;

#line 683 "interval.m"
    {
#line 683 "interval.m"
      backend_libs__interval__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 683 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 0) = ((MR_Box) (&backend_libs__interval_scalar_common_4[1]));
#line 683 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 1) = ((MR_Box) (backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1));
#line 683 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 683 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 3) = ((MR_Box) (backend_libs__interval__IntervalVarMap_7));
#line 683 "interval.m"
    }
#line 13808 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 684 "interval.m"
    {
#line 684 "interval.m"
      backend_libs__interval__V_20_20 = parse_tree__set_of_var__init_0_f_0(backend_libs__interval__TypeCtorInfo_87_87);
    }
#line 13815 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_88_88 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 683 "interval.m"
    {
#line 683 "interval.m"
      mercury__set__fold_4_p_0(backend_libs__interval__TypeCtorInfo_88_88, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__V_19_19, backend_libs__interval__CurOpenIntervals_8, ((MR_Box) (backend_libs__interval__V_20_20)), &backend_libs__interval__conv1_CurOpenIntervalVars_9);
    }
#line 683 "interval.m"
    backend_libs__interval__CurOpenIntervalVars_9 = ((MR_Word) backend_libs__interval__conv1_CurOpenIntervalVars_9);
#line 685 "interval.m"
    {
#line 685 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, backend_libs__interval__AnchorFollowMap0_6, ((MR_Box) (backend_libs__interval__Anchor_4)), &backend_libs__interval__conv2_AnchorFollowInfo0_10);
    }
#line 685 "interval.m"
    if (backend_libs__interval__succeeded)
#line 685 "interval.m"
      {
#line 685 "interval.m"
        backend_libs__interval__AnchorFollowInfo0_10 = ((MR_Word) backend_libs__interval__conv2_AnchorFollowInfo0_10);
#line 685 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 685 "interval.m"
      }
#line 695 "interval.m"
    if (backend_libs__interval__succeeded)
#line 687 "interval.m"
      {
#line 687 "interval.m"
        MR_Word backend_libs__interval__OpenIntervalVars0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo0_10, (MR_Integer) 0)));
#line 687 "interval.m"
        MR_Word backend_libs__interval__OpenIntervals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo0_10, (MR_Integer) 1)));
#line 687 "interval.m"
        MR_Word backend_libs__interval__OpenIntervalVars_13;
#line 687 "interval.m"
        MR_Word backend_libs__interval__OpenIntervals_14;
#line 687 "interval.m"
        MR_Word backend_libs__interval__AnchorFollowInfo_15;

#line 688 "interval.m"
        {
#line 688 "interval.m"
          backend_libs__interval__OpenIntervalVars_13 = parse_tree__set_of_var__union_2_f_0(backend_libs__interval__TypeCtorInfo_87_87, backend_libs__interval__OpenIntervalVars0_11, backend_libs__interval__CurOpenIntervalVars_9);
        }
#line 690 "interval.m"
        {
#line 690 "interval.m"
          backend_libs__interval__OpenIntervals_14 = mercury__set__union_2_f_0(backend_libs__interval__TypeCtorInfo_88_88, backend_libs__interval__OpenIntervals0_12, backend_libs__interval__CurOpenIntervals_8);
        }
#line 691 "interval.m"
        {
#line 691 "interval.m"
          backend_libs__interval__AnchorFollowInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 691 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_15, 0) = ((MR_Box) (backend_libs__interval__OpenIntervalVars_13));
#line 691 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_15, 1) = ((MR_Box) (backend_libs__interval__OpenIntervals_14));
#line 691 "interval.m"
        }
#line 693 "interval.m"
        {
#line 693 "interval.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, ((MR_Box) (backend_libs__interval__Anchor_4)), ((MR_Box) (backend_libs__interval__AnchorFollowInfo_15)), backend_libs__interval__AnchorFollowMap0_6, &backend_libs__interval__AnchorFollowMap_16);
        }
#line 687 "interval.m"
      }
#line 695 "interval.m"
    else
#line 697 "interval.m"
      {
#line 697 "interval.m"
        MR_Word backend_libs__interval__AnchorFollowInfo_22;

#line 696 "interval.m"
        {
#line 696 "interval.m"
          backend_libs__interval__AnchorFollowInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 696 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_22, 0) = ((MR_Box) (backend_libs__interval__CurOpenIntervalVars_9));
#line 696 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_22, 1) = ((MR_Box) (backend_libs__interval__CurOpenIntervals_8));
#line 696 "interval.m"
        }
#line 698 "interval.m"
        {
#line 698 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, ((MR_Box) (backend_libs__interval__Anchor_4)), ((MR_Box) (backend_libs__interval__AnchorFollowInfo_22)), backend_libs__interval__AnchorFollowMap0_6, &backend_libs__interval__AnchorFollowMap_16);
        }
#line 697 "interval.m"
      }
#line 701 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 0)));
#line 701 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 1)));
#line 701 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 2)));
#line 701 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 3)));
#line 701 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 4)));
#line 701 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 5)));
#line 701 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 6)));
#line 701 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 7)));
#line 701 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 8)));
#line 701 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 9)));
#line 701 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 10)));
#line 701 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 11)));
#line 701 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 12)));
#line 701 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 13)));
#line 701 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 14)));
#line 701 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 15)));
#line 701 "interval.m"
    {
#line 701 "interval.m"
      MR_Word base;
#line 701 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 701 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_18 = base;
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__AnchorFollowMap_16));
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 701 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 701 "interval.m"
    }
#line 679 "interval.m"
  }
#line 676 "interval.m"
}

#line 670 "interval.m"
static void MR_CALL 
backend_libs__interval__one_open_interval_3_p_0(
#line 670 "interval.m"
  MR_Word backend_libs__interval__IntervalId_4,
#line 670 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 670 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7)
#line 670 "interval.m"
{
#line 673 "interval.m"
  {
#line 673 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 673 "interval.m"
    MR_Word backend_libs__interval__V_9_9;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_10_10;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_11_11;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_12_12;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_22_22;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_23_23;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_24_24;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_25_25;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_18_18;

#line 674 "interval.m"
    {
#line 674 "interval.m"
      backend_libs__interval__V_9_9 = mercury__set__make_singleton_set_1_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (backend_libs__interval__IntervalId_4)));
    }
#line 674 "interval.m"
    backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0)));
#line 674 "interval.m"
    backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1)));
#line 674 "interval.m"
    backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2)));
#line 674 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3)));
#line 674 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4)));
#line 674 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5)));
#line 674 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6)));
#line 674 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7)));
#line 674 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 8)));
#line 674 "interval.m"
    backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9)));
#line 674 "interval.m"
    backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10)));
#line 674 "interval.m"
    backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11)));
#line 674 "interval.m"
    backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12)));
#line 674 "interval.m"
    backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13)));
#line 674 "interval.m"
    backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14)));
#line 674 "interval.m"
    backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15)));
#line 674 "interval.m"
    {
#line 674 "interval.m"
      MR_Word base;
#line 674 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 674 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_7 = base;
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_15_15));
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_16_16));
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_17_17));
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_24_24));
#line 674 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_25_25));
#line 674 "interval.m"
    }
#line 673 "interval.m"
  }
#line 670 "interval.m"
}

#line 665 "interval.m"
static void MR_CALL 
backend_libs__interval__no_open_intervals_2_p_0(
#line 665 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4,
#line 665 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_5)
#line 665 "interval.m"
{
#line 667 "interval.m"
  {
#line 667 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 667 "interval.m"
    MR_Word backend_libs__interval__V_7_7;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_8_8;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_9_9;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_10_10;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_11_11;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_12_12;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_18_18;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_22_22;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_23_23;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_16_16;

#line 668 "interval.m"
    {
#line 668 "interval.m"
      backend_libs__interval__V_7_7 = mercury__set__init_0_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0);
    }
#line 668 "interval.m"
    backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 0)));
#line 668 "interval.m"
    backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 1)));
#line 668 "interval.m"
    backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 2)));
#line 668 "interval.m"
    backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 3)));
#line 668 "interval.m"
    backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 4)));
#line 668 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 5)));
#line 668 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 6)));
#line 668 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 7)));
#line 668 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 8)));
#line 668 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 9)));
#line 668 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 10)));
#line 668 "interval.m"
    backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 11)));
#line 668 "interval.m"
    backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 12)));
#line 668 "interval.m"
    backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 13)));
#line 668 "interval.m"
    backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 14)));
#line 668 "interval.m"
    backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 15)));
#line 668 "interval.m"
    {
#line 668 "interval.m"
      MR_Word base;
#line 668 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 668 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_5 = base;
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_8_8));
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_15_15));
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_7_7));
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_17_17));
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_18_18));
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 668 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 668 "interval.m"
    }
#line 667 "interval.m"
  }
#line 665 "interval.m"
}

#line 659 "interval.m"
static void MR_CALL 
backend_libs__interval__set_open_intervals_3_p_0(
#line 659 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_4,
#line 659 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 659 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7)
#line 659 "interval.m"
{
#line 663 "interval.m"
  {
#line 663 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0)));
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1)));
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2)));
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3)));
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4)));
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5)));
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6)));
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7)));
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9)));
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10)));
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11)));
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12)));
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13)));
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14)));
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15)));
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 8)));

#line 663 "interval.m"
    {
#line 663 "interval.m"
      MR_Word base;
#line 663 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 663 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_7 = base;
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_15_15));
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_16_16));
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__OpenIntervals_4));
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_18_18));
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 663 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_24_24));
#line 663 "interval.m"
    }
#line 663 "interval.m"
  }
#line 659 "interval.m"
}

#line 654 "interval.m"
static void MR_CALL 
backend_libs__interval__get_open_intervals_2_p_0(
#line 654 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3,
#line 654 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_4)
#line 654 "interval.m"
{
#line 657 "interval.m"
  {
#line 657 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 0)));
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 1)));
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 2)));
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 3)));
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 4)));
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 5)));
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 6)));
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 7)));
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_18_18;
#line 657 "interval.m"
    MR_Word backend_libs__interval__V_19_19;

#line 657 "interval.m"
    *backend_libs__interval__OpenIntervals_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 8)));
#line 657 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 9)));
#line 657 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 10)));
#line 657 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 11)));
#line 657 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 12)));
#line 657 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 13)));
#line 657 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 14)));
#line 657 "interval.m"
    backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 15)));
#line 657 "interval.m"
  }
#line 654 "interval.m"
}

#line 621 "interval.m"
static void MR_CALL 
backend_libs__interval__reached_cond_then_3_p_0(
#line 621 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_4,
#line 621 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 621 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13)
#line 621 "interval.m"
{
#line 624 "interval.m"
  {
#line 624 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 624 "interval.m"
    MR_Word backend_libs__interval__GoalId_6;
#line 624 "interval.m"
    MR_Word backend_libs__interval__ThenStartId_7;
#line 624 "interval.m"
    MR_Word backend_libs__interval__CondThenAnchor_8;
#line 624 "interval.m"
    MR_Word backend_libs__interval__CondTailId_9;
#line 624 "interval.m"
    MR_Word backend_libs__interval__OpenIntervals0_10;
#line 624 "interval.m"
    MR_Word backend_libs__interval__OpenIntervals_11;
#line 624 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14;
#line 624 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_15_15;
#line 624 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_16_16;
#line 624 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17;
#line 624 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18;
#line 624 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19;
#line 624 "interval.m"
    MR_Word backend_libs__interval__CurInterval_26;
#line 624 "interval.m"
    MR_Word backend_libs__interval__CondEndMap0_27;
#line 624 "interval.m"
    MR_Word backend_libs__interval__CondEndMap_28;
#line 751 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 751 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 751 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 751 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 751 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 751 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 751 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 751 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 751 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 751 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 751 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 751 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 751 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 751 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 754 "interval.m"
    MR_Word backend_libs__interval__V_60_60;
#line 754 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 754 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 754 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 754 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 754 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 754 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 754 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 754 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 754 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 754 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 754 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 754 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 754 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 754 "interval.m"
    MR_Word backend_libs__interval__V_65_65;

#line 625 "interval.m"
    {
#line 625 "interval.m"
      backend_libs__interval__GoalId_6 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_4);
    }
#line 751 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 751 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 751 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 751 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 751 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 751 "interval.m"
    backend_libs__interval__CondEndMap0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 751 "interval.m"
    backend_libs__interval__CurInterval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 751 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 751 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 751 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 751 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 751 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 751 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 751 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 751 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 751 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 753 "interval.m"
    {
#line 753 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (backend_libs__interval__GoalId_6)), ((MR_Box) (backend_libs__interval__CurInterval_26)), backend_libs__interval__CondEndMap0_27, &backend_libs__interval__CondEndMap_28);
    }
#line 754 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 754 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 754 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 754 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 754 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 754 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 754 "interval.m"
    backend_libs__interval__ThenStartId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 754 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 754 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 754 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 754 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 754 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 754 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 754 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 754 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 754 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 754 "interval.m"
    {
#line 754 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 0) = ((MR_Box) (backend_libs__interval__V_60_60));
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 1) = ((MR_Box) (backend_libs__interval__V_61_61));
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 2) = ((MR_Box) (backend_libs__interval__V_62_62));
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 3) = ((MR_Box) (backend_libs__interval__V_63_63));
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 4) = ((MR_Box) (backend_libs__interval__V_64_64));
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 5) = ((MR_Box) (backend_libs__interval__CondEndMap_28));
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 6) = ((MR_Box) (backend_libs__interval__ThenStartId_7));
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 7) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 8) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 9) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 10) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 11) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 12) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 13) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 14) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 754 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 15) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 754 "interval.m"
    }
#line 630 "interval.m"
    {
#line 630 "interval.m"
      backend_libs__interval__CondThenAnchor_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 630 "interval.m"
      MR_hl_field(MR_mktag(2), backend_libs__interval__CondThenAnchor_8, 0) = ((MR_Box) (backend_libs__interval__GoalId_6));
#line 630 "interval.m"
    }
#line 628 "interval.m"
    {
#line 628 "interval.m"
      backend_libs__interval__record_interval_start_4_p_0(backend_libs__interval__ThenStartId_7, backend_libs__interval__CondThenAnchor_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_15_15);
    }
#line 629 "interval.m"
    {
#line 629 "interval.m"
      backend_libs__interval__new_interval_id_3_p_0(&backend_libs__interval__CondTailId_9, backend_libs__interval__STATE_VARIABLE_IntervalInfo_15_15, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_16_16);
    }
#line 631 "interval.m"
    {
#line 631 "interval.m"
      backend_libs__interval__record_interval_end_4_p_0(backend_libs__interval__CondTailId_9, backend_libs__interval__CondThenAnchor_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_16_16, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17);
    }
#line 632 "interval.m"
    {
#line 632 "interval.m"
      backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__CondTailId_9, backend_libs__interval__ThenStartId_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18);
    }
#line 633 "interval.m"
    {
#line 633 "interval.m"
      backend_libs__interval__set_cur_interval_3_p_0(backend_libs__interval__CondTailId_9, backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19);
    }
#line 634 "interval.m"
    {
#line 634 "interval.m"
      backend_libs__interval__get_open_intervals_2_p_0(backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, &backend_libs__interval__OpenIntervals0_10);
    }
#line 635 "interval.m"
    {
#line 635 "interval.m"
      mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (backend_libs__interval__CondTailId_9)), backend_libs__interval__OpenIntervals0_10, &backend_libs__interval__OpenIntervals_11);
    }
#line 636 "interval.m"
    {
#line 636 "interval.m"
      backend_libs__interval__set_open_intervals_3_p_0(backend_libs__interval__OpenIntervals_11, backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_13);
#line 636 "interval.m"
      return;
    }
#line 624 "interval.m"
  }
#line 621 "interval.m"
}

#line 594 "interval.m"
static void MR_CALL 
backend_libs__interval__enter_branch_tail_4_p_0(
#line 594 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_5,
#line 594 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 594 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 594 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10)
#line 594 "interval.m"
{
#line 597 "interval.m"
  {
#line 597 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 597 "interval.m"
    MR_Word backend_libs__interval__BranchTailId_8;
#line 597 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11;
#line 597 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_12_12;
#line 597 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_13_13;
#line 597 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14;
#line 597 "interval.m"
    MR_Word backend_libs__interval__Counter0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 597 "interval.m"
    MR_Word backend_libs__interval__IntervalVars0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 597 "interval.m"
    MR_Integer backend_libs__interval__Num_22;
#line 597 "interval.m"
    MR_Word backend_libs__interval__Counter_23;
#line 597 "interval.m"
    MR_Word backend_libs__interval__IntervalVars_24;
#line 597 "interval.m"
    MR_Word backend_libs__interval__V_25_25;
#line 597 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 597 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 597 "interval.m"
    MR_Word backend_libs__interval__V_60_60;
#line 597 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 597 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 597 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 597 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 597 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 597 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 597 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 597 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 597 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 597 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 597 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 732 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 732 "interval.m"
    MR_Word backend_libs__interval__V_72_72;

#line 729 "interval.m"
    {
#line 729 "interval.m"
      mercury__counter__allocate_3_p_0(&backend_libs__interval__Num_22, backend_libs__interval__Counter0_20, &backend_libs__interval__Counter_23);
    }
#line 730 "interval.m"
    backend_libs__interval__BranchTailId_8 = (MR_Word) backend_libs__interval__Num_22;
#line 731 "interval.m"
    {
#line 731 "interval.m"
      backend_libs__interval__V_25_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 731 "interval.m"
    {
#line 731 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__BranchTailId_8)), ((MR_Box) (backend_libs__interval__V_25_25)), backend_libs__interval__IntervalVars0_21, &backend_libs__interval__IntervalVars_24);
    }
#line 732 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 732 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 732 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 732 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 732 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 732 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 732 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 732 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 732 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 732 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 732 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 732 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 732 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 732 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 732 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 732 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 733 "interval.m"
    {
#line 733 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 0) = ((MR_Box) (backend_libs__interval__V_58_58));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 1) = ((MR_Box) (backend_libs__interval__V_59_59));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 2) = ((MR_Box) (backend_libs__interval__V_60_60));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 3) = ((MR_Box) (backend_libs__interval__V_61_61));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 4) = ((MR_Box) (backend_libs__interval__V_62_62));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 5) = ((MR_Box) (backend_libs__interval__V_63_63));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 6) = ((MR_Box) (backend_libs__interval__V_64_64));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 7) = ((MR_Box) (backend_libs__interval__Counter_23));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 8) = ((MR_Box) (backend_libs__interval__V_66_66));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 9) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 10) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 11) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 12) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 13) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 14) = ((MR_Box) (backend_libs__interval__IntervalVars_24));
#line 733 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 15) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 733 "interval.m"
    }
#line 599 "interval.m"
    {
#line 599 "interval.m"
      backend_libs__interval__record_interval_end_4_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__EndAnchor_5, backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_12_12);
    }
#line 600 "interval.m"
    {
#line 600 "interval.m"
      backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__AfterId_6, backend_libs__interval__STATE_VARIABLE_IntervalInfo_12_12, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_13_13);
    }
#line 601 "interval.m"
    {
#line 601 "interval.m"
      backend_libs__interval__set_cur_interval_3_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_13_13, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14);
    }
#line 602 "interval.m"
    {
#line 602 "interval.m"
      backend_libs__interval__one_open_interval_3_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, backend_libs__interval__STATE_VARIABLE_IntervalInfo_10);
#line 602 "interval.m"
      return;
    }
#line 597 "interval.m"
  }
#line 594 "interval.m"
}

#line 526 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_cases_10_p_0(
#line 526 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 526 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 526 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_2,
#line 526 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_3,
#line 526 "interval.m"
  MR_Word backend_libs__interval__BeforeId_4,
#line 526 "interval.m"
  MR_Word backend_libs__interval__AfterId_5,
#line 526 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__6_6,
#line 526 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 526 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8,
#line 526 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_9,
#line 526 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_10)
#line 526 "interval.m"
{
#line 531 "interval.m"
  {
#line 531 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 531 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 531 "interval.m"
      {
#line 531 "interval.m"
        *backend_libs__interval__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 531 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_Acc_10 = backend_libs__interval__STATE_VARIABLE_Acc_0_9;
#line 531 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_IntervalInfo_8 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7;
#line 531 "interval.m"
      }
#line 531 "interval.m"
    else
#line 534 "interval.m"
      {
#line 534 "interval.m"
        MR_Word backend_libs__interval__Case_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 534 "interval.m"
        MR_Word backend_libs__interval__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 534 "interval.m"
        MR_Word backend_libs__interval__OpenIntervals_27;
#line 534 "interval.m"
        MR_Word backend_libs__interval__OpenIntervalsList_28;
#line 534 "interval.m"
        MR_Word backend_libs__interval__Goal_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case_21, (MR_Integer) 2)));
#line 534 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 534 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39;
#line 534 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_40_40;
#line 534 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_42_42;
#line 534 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_43_43;
#line 535 "interval.m"
        MR_Word backend_libs__interval___MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case_21, (MR_Integer) 0)));
#line 535 "interval.m"
        MR_Word backend_libs__interval___OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case_21, (MR_Integer) 1)));

#line 536 "interval.m"
        {
#line 536 "interval.m"
          backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_3, backend_libs__interval__AfterId_5, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
        }
#line 537 "interval.m"
        {
#line 537 "interval.m"
          backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Goal_33, backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, backend_libs__interval__STATE_VARIABLE_Acc_0_9, &backend_libs__interval__STATE_VARIABLE_Acc_40_40);
        }
#line 538 "interval.m"
        {
#line 538 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, backend_libs__interval__StartAnchor_2, backend_libs__interval__BeforeId_4, &backend_libs__interval__OpenIntervals_27, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_42_42, backend_libs__interval__STATE_VARIABLE_Acc_40_40, &backend_libs__interval__STATE_VARIABLE_Acc_43_43);
        }
#line 540 "interval.m"
        {
#line 540 "interval.m"
          backend_libs__interval__build_interval_info_in_cases_10_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Cases_22, backend_libs__interval__StartAnchor_2, backend_libs__interval__EndAnchor_3, backend_libs__interval__BeforeId_4, backend_libs__interval__AfterId_5, &backend_libs__interval__OpenIntervalsList_28, backend_libs__interval__STATE_VARIABLE_IntervalInfo_42_42, backend_libs__interval__STATE_VARIABLE_IntervalInfo_8, backend_libs__interval__STATE_VARIABLE_Acc_43_43, backend_libs__interval__STATE_VARIABLE_Acc_10);
        }
#line 534 "interval.m"
        {
#line 534 "interval.m"
          MR_Word base;
#line 534 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "interval.m"
          *backend_libs__interval__HeadVar__6_6 = base;
#line 534 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__OpenIntervals_27));
#line 534 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__OpenIntervalsList_28));
#line 534 "interval.m"
        }
#line 534 "interval.m"
      }
#line 531 "interval.m"
  }
#line 526 "interval.m"
}

#line 510 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_disj_11_p_0(
#line 510 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 510 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 510 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_2,
#line 510 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_3,
#line 510 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_4,
#line 510 "interval.m"
  MR_Word backend_libs__interval__BeforeId_5,
#line 510 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 510 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7,
#line 510 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 510 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9,
#line 510 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_10,
#line 510 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_11)
#line 510 "interval.m"
{
#line 515 "interval.m"
  {
#line 515 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 515 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 515 "interval.m"
      {
#line 515 "interval.m"
        {
#line 515 "interval.m"
          *backend_libs__interval__HeadVar__7_7 = mercury__set__init_0_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0);
        }
#line 515 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_Acc_11 = backend_libs__interval__STATE_VARIABLE_Acc_0_10;
#line 515 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8;
#line 515 "interval.m"
      }
#line 515 "interval.m"
    else
#line 518 "interval.m"
      {
#line 518 "interval.m"
        MR_Word backend_libs__interval__Goal_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 518 "interval.m"
        MR_Word backend_libs__interval__Goals_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 518 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 518 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39;
#line 518 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_40_40;
#line 518 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41;
#line 518 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_42_42;
#line 523 "interval.m"
        MR_Word backend_libs__interval___OpenIntervals_33;

#line 519 "interval.m"
        {
#line 519 "interval.m"
          backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_4, backend_libs__interval__AfterId_6, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
        }
#line 520 "interval.m"
        {
#line 520 "interval.m"
          backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Goal_23, backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, backend_libs__interval__STATE_VARIABLE_Acc_0_10, &backend_libs__interval__STATE_VARIABLE_Acc_40_40);
        }
#line 521 "interval.m"
        {
#line 521 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(backend_libs__interval__MaybeNeedsFlush_2, backend_libs__interval__StartAnchor_3, backend_libs__interval__BeforeId_5, backend_libs__interval__HeadVar__7_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, backend_libs__interval__STATE_VARIABLE_Acc_40_40, &backend_libs__interval__STATE_VARIABLE_Acc_42_42);
        }
#line 523 "interval.m"
        {
#line 523 "interval.m"
          backend_libs__interval__build_interval_info_in_disj_11_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Goals_24, (MR_Integer) 0, backend_libs__interval__StartAnchor_3, backend_libs__interval__EndAnchor_4, backend_libs__interval__BeforeId_5, backend_libs__interval__AfterId_6, &backend_libs__interval___OpenIntervals_33, backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, backend_libs__interval__STATE_VARIABLE_IntervalInfo_9, backend_libs__interval__STATE_VARIABLE_Acc_42_42, backend_libs__interval__STATE_VARIABLE_Acc_11);
        }
#line 518 "interval.m"
      }
#line 515 "interval.m"
  }
#line 510 "interval.m"
}

#line 427 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(
#line 427 "interval.m"
  MR_Word backend_libs__interval__ModuleInfo_1,
#line 427 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 427 "interval.m"
{
#line 430 "interval.m"
  while (MR_TRUE)
#line 430 "interval.m"
    {
#line 430 "interval.m"
      /* tailcall optimized into a loop */
#line 430 "interval.m"
      {
#line 430 "interval.m"
        MR_bool backend_libs__interval__succeeded;

#line 430 "interval.m"
        if ((backend_libs__interval__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 430 "interval.m"
          backend_libs__interval__succeeded = MR_TRUE;
#line 430 "interval.m"
        else
#line 431 "interval.m"
          {
#line 431 "interval.m"
            MR_Word backend_libs__interval__ArgMode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 431 "interval.m"
            MR_Word backend_libs__interval__ArgsModes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 431 "interval.m"
            MR_Word backend_libs__interval__InitCell_7;
#line 431 "interval.m"
            MR_Word backend_libs__interval__InitArg_8;
#line 431 "interval.m"
            MR_Word backend_libs__interval__FinalCell_9;
#line 431 "interval.m"
            MR_Word backend_libs__interval__FinalArg_10;
#line 431 "interval.m"
            MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__ArgMode_5, (MR_Integer) 0)));
#line 431 "interval.m"
            MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__ArgMode_5, (MR_Integer) 1)));
#line 431 "interval.m"
            MR_Word backend_libs__interval__V_13_13;
#line 431 "interval.m"
            MR_Word backend_libs__interval__V_14_14;

#line 432 "interval.m"
            backend_libs__interval__InitCell_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_11_11, (MR_Integer) 0)));
#line 432 "interval.m"
            backend_libs__interval__InitArg_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_11_11, (MR_Integer) 1)));
#line 432 "interval.m"
            backend_libs__interval__FinalCell_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_12_12, (MR_Integer) 0)));
#line 432 "interval.m"
            backend_libs__interval__FinalArg_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_12_12, (MR_Integer) 1)));
#line 433 "interval.m"
            {
#line 433 "interval.m"
              backend_libs__interval__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__V_13_13, 0) = ((MR_Box) (backend_libs__interval__InitCell_7));
#line 433 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__V_13_13, 1) = ((MR_Box) (backend_libs__interval__FinalCell_9));
#line 433 "interval.m"
            }
#line 433 "interval.m"
            {
#line 433 "interval.m"
              backend_libs__interval__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__V_13_13);
            }
#line 431 "interval.m"
            if (backend_libs__interval__succeeded)
#line 431 "interval.m"
              {
#line 434 "interval.m"
                {
#line 434 "interval.m"
                  backend_libs__interval__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 434 "interval.m"
                  MR_hl_field(MR_mktag(0), backend_libs__interval__V_14_14, 0) = ((MR_Box) (backend_libs__interval__InitArg_8));
#line 434 "interval.m"
                  MR_hl_field(MR_mktag(0), backend_libs__interval__V_14_14, 1) = ((MR_Box) (backend_libs__interval__FinalArg_10));
#line 434 "interval.m"
                }
#line 434 "interval.m"
                {
#line 434 "interval.m"
                  backend_libs__interval__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__V_14_14);
                }
#line 431 "interval.m"
                if (backend_libs__interval__succeeded)
#line 431 "interval.m"
                  {
#line 435 "interval.m"
                    {
#line 435 "interval.m"
                      backend_libs__interval__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__FinalCell_9);
                    }
#line 431 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 431 "interval.m"
                      {
#line 436 "interval.m"
                        {
#line 436 "interval.m"
                          backend_libs__interval__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__FinalArg_10);
                        }
#line 431 "interval.m"
                        if (backend_libs__interval__succeeded)
#line 437 "interval.m"
                          {
#line 437 "interval.m"
                            /* direct tailcall eliminated */
#line 437 "interval.m"
                            {
#line 437 "interval.m"
                              MR_Word backend_libs__interval__HeadVar__2__tmp_copy_2 = backend_libs__interval__ArgsModes_6;

#line 437 "interval.m"
                              backend_libs__interval__HeadVar__2_2 = backend_libs__interval__HeadVar__2__tmp_copy_2;
#line 437 "interval.m"
                            }
#line 437 "interval.m"
                            continue;
#line 437 "interval.m"
                          }
#line 431 "interval.m"
                      }
#line 431 "interval.m"
                  }
#line 431 "interval.m"
              }
#line 431 "interval.m"
          }
#line 430 "interval.m"
        return backend_libs__interval__succeeded;
#line 430 "interval.m"
      }
#line 430 "interval.m"
      break;
#line 430 "interval.m"
    }
#line 427 "interval.m"
}

#line 183 "interval.m"
MR_Integer MR_CALL 
backend_libs__interval__interval_id_to_int_1_f_0(
#line 183 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1)
#line 183 "interval.m"
{
#line 1346 "interval.m"
  {
#line 1346 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1346 "interval.m"
    MR_Integer backend_libs__interval__Num_3 = (MR_Integer) backend_libs__interval__HeadVar__1_1;

#line 1346 "interval.m"
    return backend_libs__interval__Num_3;
#line 1346 "interval.m"
  }
#line 183 "interval.m"
}

#line 1344 "interval.m"
static void MR_CALL 
backend_libs__interval__write_int_list_3_p_0_1(
#line 1344 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1344 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1344 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1344 "interval.m"
{
#line 1344 "interval.m"
  {
#line 1344 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1344 "interval.m"
    {
#line 1344 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1344 "interval.m"
      return;
    }
#line 1344 "interval.m"
  }
#line 1344 "interval.m"
}

#line 181 "interval.m"
void MR_CALL 
backend_libs__interval__write_int_list_3_p_0(
#line 181 "interval.m"
  MR_Word backend_libs__interval__List_4)
#line 181 "interval.m"
{
#line 1343 "interval.m"
  {
#line 1343 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1344 "interval.m"
    {
#line 1344 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__List_4, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[15]);
#line 1344 "interval.m"
      return;
    }
#line 1343 "interval.m"
  }
#line 181 "interval.m"
}

#line 1270 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_2(
#line 1270 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1270 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1270 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1270 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1270 "interval.m"
{
#line 1270 "interval.m"
  {
#line 1270 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1270 "interval.m"
    {
#line 1270 "interval.m"
      backend_libs__interval__dump_anchor_follow_3_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
#line 1270 "interval.m"
      return;
    }
#line 1270 "interval.m"
  }
#line 1270 "interval.m"
}

#line 1266 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_1(
#line 1266 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1266 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1266 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1266 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1266 "interval.m"
{
#line 1266 "interval.m"
  {
#line 1266 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1266 "interval.m"
    {
#line 1266 "interval.m"
      backend_libs__interval__dump_interval_info_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__interval__wrapper_arg_1));
#line 1266 "interval.m"
      return;
    }
#line 1266 "interval.m"
  }
#line 1266 "interval.m"
}

#line 179 "interval.m"
void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0(
#line 179 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_4)
#line 179 "interval.m"
{
#line 1258 "interval.m"
  {
#line 1258 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_108_108 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_109_109 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_115_115;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__StartIds_6;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__EndIds_7;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__VarsIds_8;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__SuccIds_9;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__IntervalIds0_10;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__IntervalIds_11;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__AnchorFollows_12;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_18_18;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_22_22;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_54_54;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_55_55;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_56_56;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_57_57;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_60_60;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 1266 "interval.m"
    MR_Box backend_libs__interval__conv0_STATE_VARIABLE_IO_27_27;
#line 1268 "interval.m"
    MR_Word backend_libs__interval__V_93_93;
#line 1268 "interval.m"
    MR_Word backend_libs__interval__V_94_94;
#line 1268 "interval.m"
    MR_Word backend_libs__interval__V_95_95;
#line 1268 "interval.m"
    MR_Word backend_libs__interval__V_96_96;
#line 1268 "interval.m"
    MR_Word backend_libs__interval__V_97_97;
#line 1268 "interval.m"
    MR_Word backend_libs__interval__V_98_98;
#line 1268 "interval.m"
    MR_Word backend_libs__interval__V_99_99;
#line 1268 "interval.m"
    MR_Word backend_libs__interval__V_100_100;
#line 1268 "interval.m"
    MR_Word backend_libs__interval__V_101_101;
#line 1268 "interval.m"
    MR_Word backend_libs__interval__V_102_102;
#line 1268 "interval.m"
    MR_Word backend_libs__interval__V_103_103;
#line 1268 "interval.m"
    MR_Word backend_libs__interval__V_104_104;
#line 1268 "interval.m"
    MR_Word backend_libs__interval__V_105_105;
#line 1268 "interval.m"
    MR_Word backend_libs__interval__V_106_106;
#line 1268 "interval.m"
    MR_Word backend_libs__interval__V_107_107;
#line 1270 "interval.m"
    MR_Box backend_libs__interval__conv1_STATE_VARIABLE_IO_14;

#line 1259 "interval.m"
    {
#line 1259 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__TypeCtorInfo_109_109, backend_libs__interval__V_15_15, &backend_libs__interval__StartIds_6);
    }
#line 1260 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1260 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1260 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1260 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1260 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1260 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1260 "interval.m"
    backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1260 "interval.m"
    backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1260 "interval.m"
    backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1260 "interval.m"
    backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1260 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1260 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1260 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1260 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1260 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1260 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1260 "interval.m"
    {
#line 1260 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__TypeCtorInfo_109_109, backend_libs__interval__V_16_16, &backend_libs__interval__EndIds_7);
    }
#line 1261 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1261 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1261 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1261 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1261 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1261 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1261 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1261 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1261 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1261 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1261 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1261 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1261 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1261 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1261 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1261 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1261 "interval.m"
    {
#line 1261 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__V_17_17, &backend_libs__interval__VarsIds_8);
    }
#line 1262 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1262 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1262 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1262 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1262 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1262 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1262 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1262 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1262 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1262 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1262 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1262 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1262 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1262 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1262 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1262 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1262 "interval.m"
    {
#line 1262 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__V_18_18, &backend_libs__interval__SuccIds_9);
    }
#line 1263 "interval.m"
    {
#line 1263 "interval.m"
      backend_libs__interval__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_22_22, 0) = ((MR_Box) (backend_libs__interval__SuccIds_9));
#line 1263 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1263 "interval.m"
    }
#line 1263 "interval.m"
    {
#line 1263 "interval.m"
      backend_libs__interval__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 0) = ((MR_Box) (backend_libs__interval__VarsIds_8));
#line 1263 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 1) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 1263 "interval.m"
    }
#line 1263 "interval.m"
    {
#line 1263 "interval.m"
      backend_libs__interval__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_20_20, 0) = ((MR_Box) (backend_libs__interval__EndIds_7));
#line 1263 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_20_20, 1) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 1263 "interval.m"
    }
#line 1263 "interval.m"
    {
#line 1263 "interval.m"
      backend_libs__interval__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_19_19, 0) = ((MR_Box) (backend_libs__interval__StartIds_6));
#line 1263 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_19_19, 1) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 1263 "interval.m"
    }
#line 1263 "interval.m"
    {
#line 1263 "interval.m"
      mercury__list__condense_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__V_19_19, &backend_libs__interval__IntervalIds0_10);
    }
#line 1264 "interval.m"
    {
#line 1264 "interval.m"
      mercury__list__sort_and_remove_dups_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__IntervalIds0_10, &backend_libs__interval__IntervalIds_11);
    }
#line 1265 "interval.m"
    {
#line 1265 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "INTERVALS:\n");
    }
#line 1266 "interval.m"
    {
#line 1266 "interval.m"
      backend_libs__interval__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1266 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 0) = ((MR_Box) (&backend_libs__interval_scalar_common_4[0]));
#line 1266 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 1) = ((MR_Box) (backend_libs__interval__dump_interval_info_3_p_0_1));
#line 1266 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1266 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 3) = ((MR_Box) (backend_libs__interval__IntervalInfo_4));
#line 1266 "interval.m"
    }
#line 15779 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_115_115 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1266 "interval.m"
    {
#line 1266 "interval.m"
      mercury__list__foldl_4_p_2(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__TypeCtorInfo_115_115, backend_libs__interval__V_26_26, backend_libs__interval__IntervalIds_11, ((MR_Box) ((MR_Integer) 0)), &backend_libs__interval__conv0_STATE_VARIABLE_IO_27_27);
    }
#line 1268 "interval.m"
    backend_libs__interval__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1268 "interval.m"
    backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1268 "interval.m"
    backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1268 "interval.m"
    backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1268 "interval.m"
    backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1268 "interval.m"
    backend_libs__interval__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1268 "interval.m"
    backend_libs__interval__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1268 "interval.m"
    backend_libs__interval__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1268 "interval.m"
    backend_libs__interval__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1268 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1268 "interval.m"
    backend_libs__interval__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1268 "interval.m"
    backend_libs__interval__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1268 "interval.m"
    backend_libs__interval__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1268 "interval.m"
    backend_libs__interval__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1268 "interval.m"
    backend_libs__interval__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1268 "interval.m"
    backend_libs__interval__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1268 "interval.m"
    {
#line 1268 "interval.m"
      mercury__map__to_assoc_list_2_p_0(backend_libs__interval__TypeCtorInfo_109_109, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, backend_libs__interval__V_28_28, &backend_libs__interval__AnchorFollows_12);
    }
#line 1269 "interval.m"
    {
#line 1269 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\nANCHOR FOLLOW:\n");
    }
#line 1270 "interval.m"
    {
#line 1270 "interval.m"
      mercury__list__foldl_4_p_2((MR_Word) &backend_libs__interval_scalar_common_2[0], backend_libs__interval__TypeCtorInfo_115_115, (MR_Word) &backend_libs__interval_scalar_common_2[14], backend_libs__interval__AnchorFollows_12, ((MR_Box) ((MR_Integer) 0)), &backend_libs__interval__conv1_STATE_VARIABLE_IO_14);
    }
#line 1258 "interval.m"
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
#line 1221 "interval.m"
  {
#line 1221 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1221 "interval.m"
    MR_Word backend_libs__interval__TypeInfo_13_13;
#line 1221 "interval.m"
    MR_Word backend_libs__interval__HeadVars_9;
#line 1221 "interval.m"
    MR_Word backend_libs__interval__Subst_10;
#line 1221 "interval.m"
    MR_Word backend_libs__interval__V_11_11;

#line 1222 "interval.m"
    {
#line 1222 "interval.m"
      backend_libs__interval__HeadVars_9 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVarSet_5);
    }
#line 15869 "backend_libs.interval.c"
    backend_libs__interval__TypeInfo_13_13 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1223 "interval.m"
    {
#line 1223 "interval.m"
      backend_libs__interval__V_11_11 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_13_13, backend_libs__interval__TypeInfo_13_13);
    }
#line 1223 "interval.m"
    {
#line 1223 "interval.m"
      backend_libs__interval__build_headvar_subst_4_p_0(backend_libs__interval__HeadVars_9, backend_libs__interval__RenameMap_6, backend_libs__interval__V_11_11, &backend_libs__interval__Subst_10);
    }
#line 1224 "interval.m"
    {
#line 1224 "interval.m"
      backend_libs__interval__succeeded = mercury__map__is_empty_1_p_0(backend_libs__interval__TypeInfo_13_13, backend_libs__interval__TypeInfo_13_13, backend_libs__interval__Subst_10);
    }
#line 1226 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1225 "interval.m"
      *backend_libs__interval__Goal_8 = backend_libs__interval__Goal0_7;
#line 1226 "interval.m"
    else
#line 1227 "interval.m"
      {
#line 1227 "interval.m"
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__Subst_10, backend_libs__interval__Goal0_7, backend_libs__interval__Goal_8);
#line 1227 "interval.m"
        return;
      }
#line 1221 "interval.m"
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
#line 1099 "interval.m"
  {
#line 1099 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1099 "interval.m"
    MR_Word backend_libs__interval__Info0_18;
#line 1099 "interval.m"
    MR_Word backend_libs__interval__Info_19;
#line 1099 "interval.m"
    MR_Word backend_libs__interval__Goal0_32;
#line 1099 "interval.m"
    MR_Word backend_libs__interval__VarsToExtract_33;
#line 1099 "interval.m"
    MR_Word backend_libs__interval__GoalExpr0_34;
#line 1099 "interval.m"
    MR_Word backend_libs__interval__GoalInfo0_35;
#line 1094 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 1094 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 1094 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 1094 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 1094 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 1094 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 1094 "interval.m"
    MR_Word backend_libs__interval__ArgVars_43;
#line 1094 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 1094 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 1072 "interval.m"
    MR_Word backend_libs__interval__Unification0_39;
#line 1073 "interval.m"
    MR_Word backend_libs__interval__V_45_45;

#line 1100 "interval.m"
    {
#line 1100 "interval.m"
      backend_libs__interval__Info0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1100 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, 0) = ((MR_Box) (backend_libs__interval__VarSet0_10));
#line 1100 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, 1) = ((MR_Box) (backend_libs__interval__VarTypes0_12));
#line 1100 "interval.m"
    }
#line 1069 "interval.m"
    backend_libs__interval__Goal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__InsertSpec_15, (MR_Integer) 0)));
#line 1069 "interval.m"
    backend_libs__interval__VarsToExtract_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__InsertSpec_15, (MR_Integer) 1)));
#line 1070 "interval.m"
    backend_libs__interval__GoalExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_32, (MR_Integer) 0)));
#line 1070 "interval.m"
    backend_libs__interval__GoalInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_32, (MR_Integer) 1)));
#line 1072 "interval.m"
    backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_34)) == (MR_mktag((MR_Integer) 1)));
#line 1072 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1072 "interval.m"
      {
#line 1072 "interval.m"
        backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 0)));
#line 1072 "interval.m"
        backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 1)));
#line 1072 "interval.m"
        backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 2)));
#line 1072 "interval.m"
        backend_libs__interval__Unification0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 3)));
#line 1072 "interval.m"
        backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 4)));
#line 1073 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__Unification0_39)) == (MR_mktag((MR_Integer) 1)));
#line 1073 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1073 "interval.m"
          {
#line 1073 "interval.m"
            backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 0)));
#line 1073 "interval.m"
            backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 1)));
#line 1073 "interval.m"
            backend_libs__interval__ArgVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 2)));
#line 1073 "interval.m"
            backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 3)));
#line 1073 "interval.m"
            backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 4)));
#line 1073 "interval.m"
            backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 5)));
#line 1073 "interval.m"
          }
#line 1072 "interval.m"
      }
#line 1094 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1075 "interval.m"
      {
#line 1075 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_65_80;
#line 1075 "interval.m"
        MR_Word backend_libs__interval__Unification1_47;
#line 1075 "interval.m"
        MR_Word backend_libs__interval__GoalExpr1_48;
#line 1075 "interval.m"
        MR_Word backend_libs__interval__GoalInfo1_49;
#line 1075 "interval.m"
        MR_Word backend_libs__interval__GoalInfo2_51;
#line 1075 "interval.m"
        MR_Word backend_libs__interval__Goal2_52;
#line 1075 "interval.m"
        MR_Word backend_libs__interval__VarSet0_53;
#line 1075 "interval.m"
        MR_Word backend_libs__interval__VarTypes0_54;
#line 1075 "interval.m"
        MR_Word backend_libs__interval__VarSet_55;
#line 1075 "interval.m"
        MR_Word backend_libs__interval__VarTypes_56;
#line 1075 "interval.m"
        MR_Word backend_libs__interval__NewRename_57;
#line 1075 "interval.m"
        MR_Word backend_libs__interval__VoidRename_58;
#line 1075 "interval.m"
        MR_Word backend_libs__interval__Goal3_59;
#line 1075 "interval.m"
        MR_Word backend_libs__interval__V_62_62;
#line 1075 "interval.m"
        MR_Word backend_libs__interval__V_63_63;

#line 1075 "interval.m"
        {
#line 1075 "interval.m"
          backend_libs__interval__Unification1_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1075 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 0) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 1075 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 1) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 1075 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 2) = ((MR_Box) (backend_libs__interval__ArgVars_43));
#line 1075 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 3) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 1075 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1075 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 5) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 1075 "interval.m"
        }
#line 1076 "interval.m"
        {
#line 1076 "interval.m"
          backend_libs__interval__GoalExpr1_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 0) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 1076 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 1) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 1076 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 2) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 1076 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 3) = ((MR_Box) (backend_libs__interval__Unification1_47));
#line 1076 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 4) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 1076 "interval.m"
        }
#line 1077 "interval.m"
        {
#line 1077 "interval.m"
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, backend_libs__interval__GoalInfo0_35, &backend_libs__interval__GoalInfo1_49);
        }
#line 1081 "interval.m"
        if ((backend_libs__interval__MaybeFeature_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1083 "interval.m"
          backend_libs__interval__GoalInfo2_51 = backend_libs__interval__GoalInfo1_49;
#line 1081 "interval.m"
        else
#line 1079 "interval.m"
          {
#line 1079 "interval.m"
            MR_Word backend_libs__interval__Feature_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeFeature_16, (MR_Integer) 0)));

#line 1080 "interval.m"
            {
#line 1080 "interval.m"
              hlds__hlds_goal__goal_info_add_feature_3_p_0(backend_libs__interval__Feature_50, backend_libs__interval__GoalInfo1_49, &backend_libs__interval__GoalInfo2_51);
            }
#line 1079 "interval.m"
          }
#line 1085 "interval.m"
        {
#line 1085 "interval.m"
          backend_libs__interval__Goal2_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1085 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_52, 0) = ((MR_Box) (backend_libs__interval__GoalExpr1_48));
#line 1085 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_52, 1) = ((MR_Box) (backend_libs__interval__GoalInfo2_51));
#line 1085 "interval.m"
        }
#line 1086 "interval.m"
        backend_libs__interval__VarSet0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, (MR_Integer) 0)));
#line 1086 "interval.m"
        backend_libs__interval__VarTypes0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, (MR_Integer) 1)));
#line 16128 "backend_libs.interval.c"
        backend_libs__interval__TypeInfo_65_80 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1088 "interval.m"
        {
#line 1088 "interval.m"
          backend_libs__interval__V_62_62 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_80, backend_libs__interval__TypeInfo_65_80);
        }
#line 1088 "interval.m"
        {
#line 1088 "interval.m"
          backend_libs__interval__V_63_63 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_80, backend_libs__interval__TypeInfo_65_80);
        }
#line 1087 "interval.m"
        {
#line 1087 "interval.m"
          backend_libs__interval__create_shadow_vars_10_p_0(backend_libs__interval__ArgVars_43, backend_libs__interval__VarsToExtract_33, backend_libs__interval__VarSet0_53, &backend_libs__interval__VarSet_55, backend_libs__interval__VarTypes0_54, &backend_libs__interval__VarTypes_56, backend_libs__interval__V_62_62, &backend_libs__interval__NewRename_57, backend_libs__interval__V_63_63, &backend_libs__interval__VoidRename_58);
        }
#line 1089 "interval.m"
        {
#line 1089 "interval.m"
          backend_libs__interval__Info_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1089 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, 0) = ((MR_Box) (backend_libs__interval__VarSet_55));
#line 1089 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, 1) = ((MR_Box) (backend_libs__interval__VarTypes_56));
#line 1089 "interval.m"
        }
#line 1090 "interval.m"
        {
#line 1090 "interval.m"
          mercury__map__old_merge_3_p_0(backend_libs__interval__TypeInfo_65_80, backend_libs__interval__TypeInfo_65_80, backend_libs__interval__STATE_VARIABLE_RenameMap_0_20, backend_libs__interval__NewRename_57, backend_libs__interval__STATE_VARIABLE_RenameMap_21);
        }
#line 1092 "interval.m"
        {
#line 1092 "interval.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*backend_libs__interval__STATE_VARIABLE_RenameMap_21, backend_libs__interval__Goal2_52, &backend_libs__interval__Goal3_59);
        }
#line 1093 "interval.m"
        {
#line 1093 "interval.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__VoidRename_58, backend_libs__interval__Goal3_59, backend_libs__interval__Goal_17);
        }
#line 1075 "interval.m"
      }
#line 1094 "interval.m"
    else
#line 1095 "interval.m"
      {
#line 1095 "interval.m"
        {
#line 1095 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.make_inserted_goal\'/7", (MR_String) "not a deconstruct");
#line 1095 "interval.m"
          return;
        }
#line 1095 "interval.m"
      }
#line 1103 "interval.m"
    *backend_libs__interval__VarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, (MR_Integer) 0)));
#line 1103 "interval.m"
    *backend_libs__interval__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, (MR_Integer) 1)));
#line 1099 "interval.m"
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
#line 877 "interval.m"
  {
#line 877 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 877 "interval.m"
    MR_Word backend_libs__interval__Info0_19;
#line 877 "interval.m"
    MR_Word backend_libs__interval__Info_20;

#line 878 "interval.m"
    {
#line 878 "interval.m"
      backend_libs__interval__Info0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 878 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_19, 0) = ((MR_Box) (backend_libs__interval__VarSet0_12));
#line 878 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_19, 1) = ((MR_Box) (backend_libs__interval__VarTypes0_14));
#line 878 "interval.m"
    }
#line 879 "interval.m"
    {
#line 879 "interval.m"
      backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__STATE_VARIABLE_Goal_0_21, backend_libs__interval__STATE_VARIABLE_Goal_22, backend_libs__interval__Info0_19, &backend_libs__interval__Info_20, backend_libs__interval__STATE_VARIABLE_VarRename_0_23, backend_libs__interval__STATE_VARIABLE_VarRename_24, backend_libs__interval__InsertMap_17, backend_libs__interval__MaybeFeature_18);
    }
#line 881 "interval.m"
    *backend_libs__interval__VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_20, (MR_Integer) 0)));
#line 881 "interval.m"
    *backend_libs__interval__VarTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_20, (MR_Integer) 1)));
#line 877 "interval.m"
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
#line 807 "interval.m"
  {
#line 807 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 807 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_86_86 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 807 "interval.m"
    MR_Word backend_libs__interval__TypeInfo_87_87 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 807 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_88_88;
#line 807 "interval.m"
    MR_Word backend_libs__interval__VarsMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 14)));
#line 807 "interval.m"
    MR_Word backend_libs__interval__Vars0_11;
#line 807 "interval.m"
    MR_Word backend_libs__interval__Vars_12;
#line 807 "interval.m"
    MR_Word backend_libs__interval__VarsMap_13;
#line 807 "interval.m"
    MR_Word backend_libs__interval__DeleteMap0_14;
#line 807 "interval.m"
    MR_Word backend_libs__interval__DeleteMap_17;
#line 807 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20;
#line 808 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 0)));
#line 808 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 1)));
#line 808 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 2)));
#line 808 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 3)));
#line 808 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 4)));
#line 808 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 5)));
#line 808 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 6)));
#line 808 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 7)));
#line 808 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 8)));
#line 808 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 9)));
#line 808 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 10)));
#line 808 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 11)));
#line 808 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 12)));
#line 808 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 13)));
#line 808 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 15)));
#line 809 "interval.m"
    MR_Box backend_libs__interval__conv0_Vars0_11;
#line 813 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 813 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 813 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 813 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 813 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 813 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 813 "interval.m"
    MR_Word backend_libs__interval__V_45_45;
#line 813 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 813 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 813 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 813 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 813 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 813 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 813 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 813 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 821 "interval.m"
    MR_Word backend_libs__interval__Deletions0_15;
#line 818 "interval.m"
    MR_Box backend_libs__interval__conv1_Deletions0_15;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 825 "interval.m"
    MR_Word backend_libs__interval__V_85_85;

#line 809 "interval.m"
    {
#line 809 "interval.m"
      mercury__map__lookup_3_p_0(backend_libs__interval__TypeCtorInfo_86_86, backend_libs__interval__TypeInfo_87_87, backend_libs__interval__VarsMap0_10, ((MR_Box) (backend_libs__interval__Id_6)), &backend_libs__interval__conv0_Vars0_11);
    }
#line 809 "interval.m"
    backend_libs__interval__Vars0_11 = ((MR_Word) backend_libs__interval__conv0_Vars0_11);
#line 16397 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 810 "interval.m"
    {
#line 810 "interval.m"
      *backend_libs__interval__DeletedVars_8 = parse_tree__set_of_var__intersect_2_f_0(backend_libs__interval__TypeCtorInfo_88_88, backend_libs__interval__Vars0_11, backend_libs__interval__ToDeleteVars_7);
    }
#line 811 "interval.m"
    {
#line 811 "interval.m"
      backend_libs__interval__Vars_12 = parse_tree__set_of_var__difference_2_f_0(backend_libs__interval__TypeCtorInfo_88_88, backend_libs__interval__Vars0_11, *backend_libs__interval__DeletedVars_8);
    }
#line 812 "interval.m"
    {
#line 812 "interval.m"
      mercury__map__det_update_4_p_0(backend_libs__interval__TypeCtorInfo_86_86, backend_libs__interval__TypeInfo_87_87, ((MR_Box) (backend_libs__interval__Id_6)), ((MR_Box) (backend_libs__interval__Vars_12)), backend_libs__interval__VarsMap0_10, &backend_libs__interval__VarsMap_13);
    }
#line 813 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 0)));
#line 813 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 1)));
#line 813 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 2)));
#line 813 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 3)));
#line 813 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 4)));
#line 813 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 5)));
#line 813 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 6)));
#line 813 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 7)));
#line 813 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 8)));
#line 813 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 9)));
#line 813 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 10)));
#line 813 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 11)));
#line 813 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 12)));
#line 813 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 13)));
#line 813 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 14)));
#line 813 "interval.m"
    backend_libs__interval__DeleteMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 15)));
#line 813 "interval.m"
    {
#line 813 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 0) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 1) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 2) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 3) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 4) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 5) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 6) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 7) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 8) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 9) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 10) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 11) = ((MR_Box) (backend_libs__interval__V_50_50));
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 12) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 13) = ((MR_Box) (backend_libs__interval__V_52_52));
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 14) = ((MR_Box) (backend_libs__interval__VarsMap_13));
#line 813 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 15) = ((MR_Box) (backend_libs__interval__DeleteMap0_14));
#line 813 "interval.m"
    }
#line 818 "interval.m"
    {
#line 818 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0(backend_libs__interval__TypeCtorInfo_86_86, (MR_Word) &backend_libs__interval_scalar_common_1[2], backend_libs__interval__DeleteMap0_14, ((MR_Box) (backend_libs__interval__Id_6)), &backend_libs__interval__conv1_Deletions0_15);
    }
#line 818 "interval.m"
    if (backend_libs__interval__succeeded)
#line 818 "interval.m"
      {
#line 818 "interval.m"
        backend_libs__interval__Deletions0_15 = ((MR_Word) backend_libs__interval__conv1_Deletions0_15);
#line 818 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 818 "interval.m"
      }
#line 821 "interval.m"
    if (backend_libs__interval__succeeded)
#line 819 "interval.m"
      {
#line 819 "interval.m"
        MR_Word backend_libs__interval__Deletions_16;

#line 819 "interval.m"
        {
#line 819 "interval.m"
          backend_libs__interval__Deletions_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_16, 0) = ((MR_Box) (*backend_libs__interval__DeletedVars_8));
#line 819 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_16, 1) = ((MR_Box) (backend_libs__interval__Deletions0_15));
#line 819 "interval.m"
        }
#line 820 "interval.m"
        {
#line 820 "interval.m"
          mercury__map__det_update_4_p_0(backend_libs__interval__TypeCtorInfo_86_86, (MR_Word) &backend_libs__interval_scalar_common_1[2], ((MR_Box) (backend_libs__interval__Id_6)), ((MR_Box) (backend_libs__interval__Deletions_16)), backend_libs__interval__DeleteMap0_14, &backend_libs__interval__DeleteMap_17);
        }
#line 819 "interval.m"
      }
#line 821 "interval.m"
    else
#line 822 "interval.m"
      {
#line 822 "interval.m"
        MR_Word backend_libs__interval__Deletions_23;

#line 822 "interval.m"
        {
#line 822 "interval.m"
          backend_libs__interval__Deletions_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_23, 0) = ((MR_Box) (*backend_libs__interval__DeletedVars_8));
#line 822 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 822 "interval.m"
        }
#line 823 "interval.m"
        {
#line 823 "interval.m"
          mercury__map__det_insert_4_p_0(backend_libs__interval__TypeCtorInfo_86_86, (MR_Word) &backend_libs__interval_scalar_common_1[2], ((MR_Box) (backend_libs__interval__Id_6)), ((MR_Box) (backend_libs__interval__Deletions_23)), backend_libs__interval__DeleteMap0_14, &backend_libs__interval__DeleteMap_17);
        }
#line 822 "interval.m"
      }
#line 825 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 0)));
#line 825 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 1)));
#line 825 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 2)));
#line 825 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 3)));
#line 825 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 4)));
#line 825 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 5)));
#line 825 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 6)));
#line 825 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 7)));
#line 825 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 8)));
#line 825 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 9)));
#line 825 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 10)));
#line 825 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 11)));
#line 825 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 12)));
#line 825 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 13)));
#line 825 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 14)));
#line 825 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 15)));
#line 825 "interval.m"
    {
#line 825 "interval.m"
      MR_Word base;
#line 825 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 825 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_19 = base;
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_84_84));
#line 825 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__DeleteMap_17));
#line 825 "interval.m"
    }
#line 807 "interval.m"
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
#line 796 "interval.m"
  {
#line 796 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 796 "interval.m"
    MR_Word backend_libs__interval__VarsMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 796 "interval.m"
    MR_Word backend_libs__interval__VarsMap_11;
#line 797 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 801 "interval.m"
    MR_Word backend_libs__interval__Vars0_9;
#line 798 "interval.m"
    MR_Box backend_libs__interval__conv0_Vars0_9;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 805 "interval.m"
    MR_Word backend_libs__interval__V_45_45;

#line 798 "interval.m"
    {
#line 798 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__VarsMap0_8, ((MR_Box) (backend_libs__interval__Id_5)), &backend_libs__interval__conv0_Vars0_9);
    }
#line 798 "interval.m"
    if (backend_libs__interval__succeeded)
#line 798 "interval.m"
      {
#line 798 "interval.m"
        backend_libs__interval__Vars0_9 = ((MR_Word) backend_libs__interval__conv0_Vars0_9);
#line 798 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 798 "interval.m"
      }
#line 801 "interval.m"
    if (backend_libs__interval__succeeded)
#line 799 "interval.m"
      {
#line 799 "interval.m"
        MR_Word backend_libs__interval__Vars_10;

#line 799 "interval.m"
        {
#line 799 "interval.m"
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__NewVars_6, backend_libs__interval__Vars0_9, &backend_libs__interval__Vars_10);
        }
#line 800 "interval.m"
        {
#line 800 "interval.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__Vars_10)), backend_libs__interval__VarsMap0_8, &backend_libs__interval__VarsMap_11);
        }
#line 799 "interval.m"
      }
#line 801 "interval.m"
    else
#line 802 "interval.m"
      {
#line 802 "interval.m"
        MR_Word backend_libs__interval__Vars_15;

#line 802 "interval.m"
        {
#line 802 "interval.m"
          backend_libs__interval__Vars_15 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__NewVars_6);
        }
#line 803 "interval.m"
        {
#line 803 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__Vars_15)), backend_libs__interval__VarsMap0_8, &backend_libs__interval__VarsMap_11);
        }
#line 802 "interval.m"
      }
#line 805 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 805 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 805 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 805 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 805 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 805 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 805 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 805 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 805 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 805 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 805 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 805 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 805 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 805 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 805 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 805 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 805 "interval.m"
    {
#line 805 "interval.m"
      MR_Word base;
#line 805 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 805 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_13 = base;
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__VarsMap_11));
#line 805 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 805 "interval.m"
    }
#line 796 "interval.m"
  }
#line 149 "interval.m"
}

#line 357 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_2(
#line 357 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 357 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 357 "interval.m"
{
#line 357 "interval.m"
  {
#line 357 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 357 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 357 "interval.m"
    MR_Word backend_libs__interval__conv1_HeadVar__2_2;

#line 357 "interval.m"
    {
#line 357 "interval.m"
      backend_libs__interval__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 357 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv1_HeadVar__2_2));
#line 357 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 357 "interval.m"
  }
#line 357 "interval.m"
}

#line 356 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_1(
#line 356 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 356 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 356 "interval.m"
{
#line 356 "interval.m"
  {
#line 356 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 356 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 356 "interval.m"
    MR_Word backend_libs__interval__conv0_HeadVar__2_2;

#line 356 "interval.m"
    {
#line 356 "interval.m"
      backend_libs__interval__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 356 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__2_2));
#line 356 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 356 "interval.m"
  }
#line 356 "interval.m"
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
#line 374 "interval.m"
            {
#line 374 "interval.m"
              MR_Word backend_libs__interval__Unification_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 374 "interval.m"
              MR_Word backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)));
#line 374 "interval.m"
              MR_Word backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 374 "interval.m"
              MR_Word backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 374 "interval.m"
              MR_Word backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));

#line 396 "interval.m"
#line 396 "interval.m"
              switch (MR_tag((MR_Word) backend_libs__interval__Unification_90)) {
#line 396 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 396 "interval.m"
                case (MR_Integer) 0:
#line 377 "interval.m"
                  {
#line 377 "interval.m"
                    MR_Word backend_libs__interval__CellVar_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 0)));
#line 377 "interval.m"
                    MR_Word backend_libs__interval__HowToConstruct_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 4)));
#line 377 "interval.m"
                    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_150_150;
#line 377 "interval.m"
                    MR_Word backend_libs__interval__V_151_151;
#line 377 "interval.m"
                    MR_Word backend_libs__interval__ArgVars_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 2)));
#line 376 "interval.m"
                    MR_Word backend_libs__interval___ConsId_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 376 "interval.m"
                    MR_Word backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 3)));
#line 376 "interval.m"
                    MR_Word backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 5)));
#line 376 "interval.m"
                    MR_Word backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 6)));

#line 381 "interval.m"
#line 381 "interval.m"
                    switch (MR_tag((MR_Word) backend_libs__interval__HowToConstruct_95)) {
#line 381 "interval.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 381 "interval.m"
                      case (MR_Integer) 0:
#line 381 "interval.m"
#line 381 "interval.m"
                        switch (MR_unmkbody(backend_libs__interval__HowToConstruct_95)) {
#line 381 "interval.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 381 "interval.m"
                          case (MR_Integer) 0:
#line 386 "interval.m"
                            {
#line 386 "interval.m"
                            }
#line 381 "interval.m"
                            break;
#line 381 "interval.m"
                          case (MR_Integer) 1:
#line 387 "interval.m"
                            {
#line 387 "interval.m"
                            }
#line 381 "interval.m"
                            break;
#line 381 "interval.m"
                        }
#line 381 "interval.m"
                        break;
#line 381 "interval.m"
                      case (MR_Integer) 1:
#line 379 "interval.m"
                        {
#line 380 "interval.m"
                          {
#line 380 "interval.m"
                            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "reuse");
#line 380 "interval.m"
                            return;
                          }
#line 379 "interval.m"
                        }
#line 381 "interval.m"
                        break;
#line 381 "interval.m"
                      case (MR_Integer) 2:
#line 383 "interval.m"
                        {
#line 384 "interval.m"
                          {
#line 384 "interval.m"
                            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "construct in region");
#line 384 "interval.m"
                            return;
                          }
#line 383 "interval.m"
                        }
#line 381 "interval.m"
                        break;
#line 381 "interval.m"
                    }
#line 390 "interval.m"
                    {
#line 390 "interval.m"
                      backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__ArgVars_273, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_150_150);
                    }
#line 391 "interval.m"
                    {
#line 391 "interval.m"
                      backend_libs__interval__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_151_151, 0) = ((MR_Box) (backend_libs__interval__CellVar_92));
#line 391 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_151_151, 1) = ((MR_Box) (backend_libs__interval__ArgVars_273));
#line 391 "interval.m"
                    }
#line 391 "interval.m"
                    {
#line 391 "interval.m"
                      backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_151_151, backend_libs__interval__STATE_VARIABLE_IntervalInfo_150_150, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                    }
#line 377 "interval.m"
                    *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 377 "interval.m"
                  }
#line 396 "interval.m"
                  break;
#line 396 "interval.m"
                case (MR_Integer) 1:
#line 398 "interval.m"
                  {
#line 398 "interval.m"
                    MR_Word backend_libs__interval__ConsId_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 398 "interval.m"
                    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137;
#line 398 "interval.m"
                    MR_Word backend_libs__interval__V_139_139;
#line 398 "interval.m"
                    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_140_140;
#line 398 "interval.m"
                    MR_Word backend_libs__interval__V_142_142;
#line 398 "interval.m"
                    MR_Word backend_libs__interval__ArgVars_274 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 2)));
#line 398 "interval.m"
                    MR_Word backend_libs__interval__ArgModes_275 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 3)));
#line 398 "interval.m"
                    MR_Word backend_libs__interval__IntParams_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 398 "interval.m"
                    MR_Word backend_libs__interval__ModuleInfo_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_276, (MR_Integer) 0)));
#line 398 "interval.m"
                    MR_Word backend_libs__interval__CellVar_278 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 0)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 4)));
#line 397 "interval.m"
                    MR_Word backend_libs__interval__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 5)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_276, (MR_Integer) 1)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_276, (MR_Integer) 2)));

#line 401 "interval.m"
                    {
#line 401 "interval.m"
                      backend_libs__interval__succeeded = backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(backend_libs__interval__ModuleInfo_277, backend_libs__interval__ArgModes_275);
                    }
#line 404 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 403 "interval.m"
                      {
#line 403 "interval.m"
                        backend_libs__interval__use_cell_8_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__CellVar_278, backend_libs__interval__ArgVars_274, backend_libs__interval__ConsId_100, backend_libs__interval__HeadVar__1_1, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
                      }
#line 404 "interval.m"
                    else
#line 405 "interval.m"
                      {
#line 405 "interval.m"
                        *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 405 "interval.m"
                        backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112;
#line 405 "interval.m"
                      }
#line 407 "interval.m"
                    {
#line 407 "interval.m"
                      backend_libs__interval__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_139_139, 0) = ((MR_Box) (backend_libs__interval__CellVar_278));
#line 407 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "interval.m"
                    }
#line 407 "interval.m"
                    {
#line 407 "interval.m"
                      backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__V_139_139, backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_140_140);
                    }
#line 408 "interval.m"
                    {
#line 408 "interval.m"
                      backend_libs__interval__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 0) = ((MR_Box) (backend_libs__interval__CellVar_278));
#line 408 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 1) = ((MR_Box) (backend_libs__interval__ArgVars_274));
#line 408 "interval.m"
                    }
#line 408 "interval.m"
                    {
#line 408 "interval.m"
                      backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_142_142, backend_libs__interval__STATE_VARIABLE_IntervalInfo_140_140, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
#line 408 "interval.m"
                      return;
                    }
#line 398 "interval.m"
                  }
#line 396 "interval.m"
                  break;
#line 396 "interval.m"
                case (MR_Integer) 2:
#line 410 "interval.m"
                  {
#line 410 "interval.m"
                    MR_Word backend_libs__interval__ToVar_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__Unification_90, (MR_Integer) 0)));
#line 410 "interval.m"
                    MR_Word backend_libs__interval__FromVar_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 410 "interval.m"
                    MR_Word backend_libs__interval__V_130_130;
#line 410 "interval.m"
                    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_131_131;
#line 410 "interval.m"
                    MR_Word backend_libs__interval__V_133_133;
#line 410 "interval.m"
                    MR_Word backend_libs__interval__V_135_135;

#line 411 "interval.m"
                    {
#line 411 "interval.m"
                      backend_libs__interval__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_130_130, 0) = ((MR_Box) (backend_libs__interval__FromVar_105));
#line 411 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "interval.m"
                    }
#line 411 "interval.m"
                    {
#line 411 "interval.m"
                      backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__V_130_130, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_131_131);
                    }
#line 412 "interval.m"
                    {
#line 412 "interval.m"
                      backend_libs__interval__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_135_135, 0) = ((MR_Box) (backend_libs__interval__ToVar_104));
#line 412 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "interval.m"
                    }
#line 412 "interval.m"
                    {
#line 412 "interval.m"
                      backend_libs__interval__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_133_133, 0) = ((MR_Box) (backend_libs__interval__FromVar_105));
#line 412 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_133_133, 1) = ((MR_Box) (backend_libs__interval__V_135_135));
#line 412 "interval.m"
                    }
#line 412 "interval.m"
                    {
#line 412 "interval.m"
                      backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_133_133, backend_libs__interval__STATE_VARIABLE_IntervalInfo_131_131, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                    }
#line 410 "interval.m"
                    *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 410 "interval.m"
                  }
#line 396 "interval.m"
                  break;
#line 396 "interval.m"
                case (MR_Integer) 3:
#line 396 "interval.m"
#line 396 "interval.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Unification_90, (MR_Integer) 0)))) {
#line 396 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 396 "interval.m"
                    case (MR_Integer) 0:
#line 414 "interval.m"
                      {
#line 414 "interval.m"
                        MR_Word backend_libs__interval__Var1_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 414 "interval.m"
                        MR_Word backend_libs__interval__Var2_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Unification_90, (MR_Integer) 2)));
#line 414 "interval.m"
                        MR_Word backend_libs__interval__V_122_122;
#line 414 "interval.m"
                        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_123_123;
#line 414 "interval.m"
                        MR_Word backend_libs__interval__V_124_124;

#line 415 "interval.m"
                        {
#line 415 "interval.m"
                          backend_libs__interval__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "interval.m"
                          MR_hl_field(MR_mktag(1), backend_libs__interval__V_124_124, 0) = ((MR_Box) (backend_libs__interval__Var2_107));
#line 415 "interval.m"
                          MR_hl_field(MR_mktag(1), backend_libs__interval__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 415 "interval.m"
                        }
#line 415 "interval.m"
                        {
#line 415 "interval.m"
                          backend_libs__interval__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "interval.m"
                          MR_hl_field(MR_mktag(1), backend_libs__interval__V_122_122, 0) = ((MR_Box) (backend_libs__interval__Var1_106));
#line 415 "interval.m"
                          MR_hl_field(MR_mktag(1), backend_libs__interval__V_122_122, 1) = ((MR_Box) (backend_libs__interval__V_124_124));
#line 415 "interval.m"
                        }
#line 415 "interval.m"
                        {
#line 415 "interval.m"
                          backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__V_122_122, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_123_123);
                        }
#line 416 "interval.m"
                        {
#line 416 "interval.m"
                          backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_122_122, backend_libs__interval__STATE_VARIABLE_IntervalInfo_123_123, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                        }
#line 414 "interval.m"
                        *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 414 "interval.m"
                      }
#line 396 "interval.m"
                      break;
#line 396 "interval.m"
                    case (MR_Integer) 1:
#line 418 "interval.m"
                      {
#line 419 "interval.m"
                        {
#line 419 "interval.m"
                          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "complicated_unify");
#line 419 "interval.m"
                          return;
                        }
#line 418 "interval.m"
                      }
#line 396 "interval.m"
                      break;
#line 396 "interval.m"
                  }
#line 396 "interval.m"
                  break;
#line 396 "interval.m"
              }
#line 374 "interval.m"
            }
#line 214 "interval.m"
            break;
#line 214 "interval.m"
          case (MR_Integer) 2:
#line 326 "interval.m"
            {
#line 326 "interval.m"
              MR_Word backend_libs__interval__PredId_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)));
#line 326 "interval.m"
              MR_Integer backend_libs__interval__ProcId_67 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 326 "interval.m"
              MR_Word backend_libs__interval__Builtin_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 326 "interval.m"
              MR_Word backend_libs__interval__ProcInfo_72;
#line 326 "interval.m"
              MR_Word backend_libs__interval__ArgVars_255 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 326 "interval.m"
              MR_Word backend_libs__interval__IntParams_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 326 "interval.m"
              MR_Word backend_libs__interval__ModuleInfo_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 0)));
#line 326 "interval.m"
              MR_Word backend_libs__interval__VarTypes_259;
#line 326 "interval.m"
              MR_Word backend_libs__interval__InputArgs_260;
#line 326 "interval.m"
              MR_Word backend_libs__interval__Inputs_261;
#line 326 "interval.m"
              MR_Word backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));
#line 326 "interval.m"
              MR_Word backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 5)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 1)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 2)));
#line 329 "interval.m"
              MR_Word backend_libs__interval___PredInfo_71;
#line 331 "interval.m"
              MR_Word backend_libs__interval__V_323_323;
#line 331 "interval.m"
              MR_Word backend_libs__interval__V_324_324;
#line 332 "interval.m"
              MR_Word backend_libs__interval__V_73_73;
#line 332 "interval.m"
              MR_Word backend_libs__interval__V_74_74;

#line 329 "interval.m"
              {
#line 329 "interval.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(backend_libs__interval__ModuleInfo_258, backend_libs__interval__PredId_66, backend_libs__interval__ProcId_67, &backend_libs__interval___PredInfo_71, &backend_libs__interval__ProcInfo_72);
              }
#line 331 "interval.m"
              backend_libs__interval__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 0)));
#line 331 "interval.m"
              backend_libs__interval__VarTypes_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 1)));
#line 331 "interval.m"
              backend_libs__interval__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 2)));
#line 332 "interval.m"
              {
#line 332 "interval.m"
                hlds__arg_info__partition_proc_call_args_7_p_0(backend_libs__interval__ProcInfo_72, backend_libs__interval__VarTypes_259, backend_libs__interval__ModuleInfo_258, backend_libs__interval__ArgVars_255, &backend_libs__interval__InputArgs_260, &backend_libs__interval__V_73_73, &backend_libs__interval__V_74_74);
              }
#line 334 "interval.m"
              {
#line 334 "interval.m"
                mercury__set__to_sorted_list_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], backend_libs__interval__InputArgs_260, &backend_libs__interval__Inputs_261);
              }
#line 339 "interval.m"
#line 339 "interval.m"
              switch (backend_libs__interval__Builtin_68) {
#line 339 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 339 "interval.m"
                case (MR_Integer) 0:
#line 336 "interval.m"
                  {
#line 336 "interval.m"
                    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_161_161;

#line 337 "interval.m"
                    {
#line 337 "interval.m"
                      backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__Inputs_261, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_161_161);
                    }
#line 338 "interval.m"
                    {
#line 338 "interval.m"
                      backend_libs__interval__require_access_3_p_0(backend_libs__interval__Inputs_261, backend_libs__interval__STATE_VARIABLE_IntervalInfo_161_161, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                    }
#line 336 "interval.m"
                    *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 336 "interval.m"
                  }
#line 339 "interval.m"
                  break;
#line 339 "interval.m"
                case (MR_Integer) 2:
#line 339 "interval.m"
                case (MR_Integer) 1:
#line 342 "interval.m"
                  {
#line 342 "interval.m"
                    MR_Word backend_libs__interval__MaybeNeedAcrossCall_253;

#line 343 "interval.m"
                    {
#line 343 "interval.m"
                      hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo_7, &backend_libs__interval__MaybeNeedAcrossCall_253);
                    }
#line 345 "interval.m"
                    {
#line 345 "interval.m"
                      backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__Inputs_261, backend_libs__interval__MaybeNeedAcrossCall_253, backend_libs__interval__GoalInfo_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
#line 345 "interval.m"
                      return;
                    }
#line 342 "interval.m"
                  }
#line 339 "interval.m"
                  break;
#line 339 "interval.m"
              }
#line 326 "interval.m"
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
#line 293 "interval.m"
                {
#line 293 "interval.m"
                  MR_Word backend_libs__interval__TypeInfo_363_363;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__GenericCall_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 293 "interval.m"
                  MR_Word backend_libs__interval__ArgVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 293 "interval.m"
                  MR_Word backend_libs__interval__ArgModes_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 293 "interval.m"
                  MR_Word backend_libs__interval__MaybeArgRegs_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));
#line 293 "interval.m"
                  MR_Word backend_libs__interval__MaybeNeedAcrossCall_38;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__IntParams_39;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__ModuleInfo_40;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__VarTypes_41;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__ArgTypes_42;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__ArgRegTypes_43;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__InputArgsR_44;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__InputArgsF_45;
#line 293 "interval.m"
                  MR_Word backend_libs__interval__InputArgs_48;
#line 292 "interval.m"
                  MR_Word backend_libs__interval___Detism_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 5)));
#line 295 "interval.m"
                  MR_Word backend_libs__interval__V_287_287;
#line 295 "interval.m"
                  MR_Word backend_libs__interval__V_288_288;
#line 295 "interval.m"
                  MR_Word backend_libs__interval__V_289_289;
#line 295 "interval.m"
                  MR_Word backend_libs__interval__V_290_290;
#line 295 "interval.m"
                  MR_Word backend_libs__interval__V_291_291;
#line 295 "interval.m"
                  MR_Word backend_libs__interval__V_292_292;
#line 295 "interval.m"
                  MR_Word backend_libs__interval__V_293_293;
#line 295 "interval.m"
                  MR_Word backend_libs__interval__V_294_294;
#line 295 "interval.m"
                  MR_Word backend_libs__interval__V_295_295;
#line 295 "interval.m"
                  MR_Word backend_libs__interval__V_296_296;
#line 295 "interval.m"
                  MR_Word backend_libs__interval__V_297_297;
#line 295 "interval.m"
                  MR_Word backend_libs__interval__V_298_298;
#line 295 "interval.m"
                  MR_Word backend_libs__interval__V_299_299;
#line 295 "interval.m"
                  MR_Word backend_libs__interval__V_300_300;
#line 295 "interval.m"
                  MR_Word backend_libs__interval__V_301_301;
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_303_303;
#line 301 "interval.m"
                  MR_Word backend_libs__interval___OutputArgsR_46;
#line 301 "interval.m"
                  MR_Word backend_libs__interval___OutputArgsF_47;

#line 294 "interval.m"
                  {
#line 294 "interval.m"
                    hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo_7, &backend_libs__interval__MaybeNeedAcrossCall_38);
                  }
#line 295 "interval.m"
                  backend_libs__interval__IntParams_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 295 "interval.m"
                  backend_libs__interval__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 295 "interval.m"
                  backend_libs__interval__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 295 "interval.m"
                  backend_libs__interval__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 295 "interval.m"
                  backend_libs__interval__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 295 "interval.m"
                  backend_libs__interval__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 295 "interval.m"
                  backend_libs__interval__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 295 "interval.m"
                  backend_libs__interval__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 295 "interval.m"
                  backend_libs__interval__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 295 "interval.m"
                  backend_libs__interval__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 295 "interval.m"
                  backend_libs__interval__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 295 "interval.m"
                  backend_libs__interval__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 295 "interval.m"
                  backend_libs__interval__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 295 "interval.m"
                  backend_libs__interval__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 295 "interval.m"
                  backend_libs__interval__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 295 "interval.m"
                  backend_libs__interval__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 296 "interval.m"
                  backend_libs__interval__ModuleInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_39, (MR_Integer) 0)));
#line 296 "interval.m"
                  backend_libs__interval__VarTypes_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_39, (MR_Integer) 1)));
#line 296 "interval.m"
                  backend_libs__interval__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_39, (MR_Integer) 2)));
#line 298 "interval.m"
                  {
#line 298 "interval.m"
                    hlds__vartypes__lookup_var_types_3_p_0(backend_libs__interval__VarTypes_41, backend_libs__interval__ArgVars_34, &backend_libs__interval__ArgTypes_42);
                  }
#line 299 "interval.m"
                  {
#line 299 "interval.m"
                    hlds__arg_info__generic_call_arg_reg_types_6_p_0(backend_libs__interval__ModuleInfo_40, backend_libs__interval__VarTypes_41, backend_libs__interval__GenericCall_33, backend_libs__interval__ArgVars_34, backend_libs__interval__MaybeArgRegs_36, &backend_libs__interval__ArgRegTypes_43);
                  }
#line 301 "interval.m"
                  {
#line 301 "interval.m"
                    hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(backend_libs__interval__ModuleInfo_40, backend_libs__interval__ArgVars_34, backend_libs__interval__ArgModes_35, backend_libs__interval__ArgTypes_42, backend_libs__interval__ArgRegTypes_43, &backend_libs__interval__InputArgsR_44, &backend_libs__interval__InputArgsF_45, &backend_libs__interval___OutputArgsR_46, &backend_libs__interval___OutputArgsF_47);
                  }
#line 17708 "backend_libs.interval.c"
                  backend_libs__interval__TypeInfo_363_363 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 304 "interval.m"
                  {
#line 304 "interval.m"
                    mercury__list__append_3_p_1(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__InputArgsR_44, backend_libs__interval__InputArgsF_45, &backend_libs__interval__InputArgs_48);
                  }
#line 311 "interval.m"
#line 311 "interval.m"
                  switch (MR_tag((MR_Word) backend_libs__interval__GenericCall_33)) {
#line 311 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 311 "interval.m"
                    case (MR_Integer) 0:
#line 311 "interval.m"
                    case (MR_Integer) 1:
#line 311 "interval.m"
                    case (MR_Integer) 2:
#line 315 "interval.m"
                      {
#line 315 "interval.m"
                        MR_Word backend_libs__interval__Globals_59;
#line 315 "interval.m"
                        MR_Word backend_libs__interval__GenericVarsArgInfos_61;
#line 315 "interval.m"
                        MR_Word backend_libs__interval__GenericVars_64;
#line 315 "interval.m"
                        MR_Word backend_libs__interval__Inputs_65;
#line 315 "interval.m"
                        MR_Integer backend_libs__interval__V_163_163;
#line 315 "interval.m"
                        MR_Integer backend_libs__interval__V_164_164;
#line 317 "interval.m"
                        MR_Word backend_libs__interval__V_60_60;
#line 317 "interval.m"
                        MR_Integer backend_libs__interval__V_62_62;
#line 317 "interval.m"
                        MR_Word backend_libs__interval__V_63_63;

#line 316 "interval.m"
                        {
#line 316 "interval.m"
                          hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__interval__ModuleInfo_40, &backend_libs__interval__Globals_59);
                        }
#line 318 "interval.m"
                        {
#line 318 "interval.m"
                          backend_libs__interval__V_163_163 = mercury__list__length_1_f_0(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__InputArgsR_44);
                        }
#line 318 "interval.m"
                        {
#line 318 "interval.m"
                          backend_libs__interval__V_164_164 = mercury__list__length_1_f_0(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__InputArgsF_45);
                        }
#line 317 "interval.m"
                        {
#line 317 "interval.m"
                          ll_backend__call_gen__generic_call_info_8_p_0(backend_libs__interval__Globals_59, backend_libs__interval__GenericCall_33, backend_libs__interval__V_163_163, backend_libs__interval__V_164_164, &backend_libs__interval__V_60_60, &backend_libs__interval__GenericVarsArgInfos_61, &backend_libs__interval__V_62_62, &backend_libs__interval__V_63_63);
                        }
#line 320 "interval.m"
                        {
#line 320 "interval.m"
                          mercury__assoc_list__keys_2_p_0(backend_libs__interval__TypeInfo_363_363, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, backend_libs__interval__GenericVarsArgInfos_61, &backend_libs__interval__GenericVars_64);
                        }
#line 321 "interval.m"
                        {
#line 321 "interval.m"
                          mercury__list__append_3_p_1(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__GenericVars_64, backend_libs__interval__InputArgs_48, &backend_libs__interval__Inputs_65);
                        }
#line 322 "interval.m"
                        {
#line 322 "interval.m"
                          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__Inputs_65, backend_libs__interval__MaybeNeedAcrossCall_38, backend_libs__interval__GoalInfo_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
#line 322 "interval.m"
                          return;
                        }
#line 315 "interval.m"
                      }
#line 311 "interval.m"
                      break;
#line 311 "interval.m"
                    case (MR_Integer) 3:
#line 308 "interval.m"
                      {
#line 308 "interval.m"
                        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_167_167;

#line 309 "interval.m"
                        {
#line 309 "interval.m"
                          backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__InputArgs_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_167_167);
                        }
#line 310 "interval.m"
                        {
#line 310 "interval.m"
                          backend_libs__interval__require_access_3_p_0(backend_libs__interval__InputArgs_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_167_167, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                        }
#line 308 "interval.m"
                        *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 308 "interval.m"
                      }
#line 311 "interval.m"
                      break;
#line 311 "interval.m"
                  }
#line 293 "interval.m"
                }
#line 214 "interval.m"
                break;
#line 214 "interval.m"
              case (MR_Integer) 1:
#line 350 "interval.m"
                {
#line 350 "interval.m"
                  MR_Word backend_libs__interval__TypeCtorInfo_366_366;
#line 350 "interval.m"
                  MR_Word backend_libs__interval__TypeInfo_367_367;
#line 350 "interval.m"
                  MR_Word backend_libs__interval__Args_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));
#line 350 "interval.m"
                  MR_Word backend_libs__interval__ExtraArgs_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 5)));
#line 350 "interval.m"
                  MR_Word backend_libs__interval__ExtraVars_80;
#line 350 "interval.m"
                  MR_Word backend_libs__interval__InputArgVarSet_81;
#line 350 "interval.m"
                  MR_Word backend_libs__interval__InputArgVars_84;
#line 350 "interval.m"
                  MR_Word backend_libs__interval__InputVars_85;
#line 350 "interval.m"
                  MR_Word backend_libs__interval__ArgVars_264;
#line 350 "interval.m"
                  MR_Word backend_libs__interval__IntParams_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 350 "interval.m"
                  MR_Word backend_libs__interval__ModuleInfo_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 0)));
#line 350 "interval.m"
                  MR_Word backend_libs__interval__VarTypes_268;
#line 350 "interval.m"
                  MR_Word backend_libs__interval__PredId_269 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 350 "interval.m"
                  MR_Integer backend_libs__interval__ProcId_270 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 350 "interval.m"
                  MR_Word backend_libs__interval__ProcInfo_272;
#line 349 "interval.m"
                  MR_Word backend_libs__interval___Attributes_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval___MaybeTraceRuntimeCond_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 6)));
#line 349 "interval.m"
                  MR_Word backend_libs__interval___PragmaCode_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 7)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 1)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 2)));
#line 353 "interval.m"
                  MR_Word backend_libs__interval___PredInfo_262;
#line 355 "interval.m"
                  MR_Word backend_libs__interval__V_342_342;
#line 355 "interval.m"
                  MR_Word backend_libs__interval__V_343_343;
#line 358 "interval.m"
                  MR_Word backend_libs__interval__V_82_82;
#line 358 "interval.m"
                  MR_Word backend_libs__interval__V_83_83;
#line 369 "interval.m"
                  MR_Word backend_libs__interval__MaybeNeedAcrossCall_263;
#line 365 "interval.m"
                  MR_Word backend_libs__interval__V_86_86;

#line 353 "interval.m"
                  {
#line 353 "interval.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(backend_libs__interval__ModuleInfo_267, backend_libs__interval__PredId_269, backend_libs__interval__ProcId_270, &backend_libs__interval___PredInfo_262, &backend_libs__interval__ProcInfo_272);
                  }
#line 355 "interval.m"
                  backend_libs__interval__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 0)));
#line 355 "interval.m"
                  backend_libs__interval__VarTypes_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 1)));
#line 355 "interval.m"
                  backend_libs__interval__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 2)));
#line 17917 "backend_libs.interval.c"
                  backend_libs__interval__TypeCtorInfo_366_366 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 17919 "backend_libs.interval.c"
                  backend_libs__interval__TypeInfo_367_367 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 356 "interval.m"
                  {
#line 356 "interval.m"
                    backend_libs__interval__ArgVars_264 = mercury__list__map_2_f_0(backend_libs__interval__TypeCtorInfo_366_366, backend_libs__interval__TypeInfo_367_367, (MR_Word) &backend_libs__interval_scalar_common_2[12], backend_libs__interval__Args_76);
                  }
#line 357 "interval.m"
                  {
#line 357 "interval.m"
                    backend_libs__interval__ExtraVars_80 = mercury__list__map_2_f_0(backend_libs__interval__TypeCtorInfo_366_366, backend_libs__interval__TypeInfo_367_367, (MR_Word) &backend_libs__interval_scalar_common_2[13], backend_libs__interval__ExtraArgs_77);
                  }
#line 358 "interval.m"
                  {
#line 358 "interval.m"
                    hlds__arg_info__partition_proc_call_args_7_p_0(backend_libs__interval__ProcInfo_272, backend_libs__interval__VarTypes_268, backend_libs__interval__ModuleInfo_267, backend_libs__interval__ArgVars_264, &backend_libs__interval__InputArgVarSet_81, &backend_libs__interval__V_82_82, &backend_libs__interval__V_83_83);
                  }
#line 360 "interval.m"
                  {
#line 360 "interval.m"
                    mercury__set__to_sorted_list_2_p_0(backend_libs__interval__TypeInfo_367_367, backend_libs__interval__InputArgVarSet_81, &backend_libs__interval__InputArgVars_84);
                  }
#line 361 "interval.m"
                  {
#line 361 "interval.m"
                    mercury__list__append_3_p_1(backend_libs__interval__TypeInfo_367_367, backend_libs__interval__InputArgVars_84, backend_libs__interval__ExtraVars_80, &backend_libs__interval__InputVars_85);
                  }
#line 363 "interval.m"
                  {
#line 363 "interval.m"
                    backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo_7, &backend_libs__interval__MaybeNeedAcrossCall_263);
                  }
#line 364 "interval.m"
                  if (backend_libs__interval__succeeded)
#line 364 "interval.m"
                    {
#line 365 "interval.m"
                      backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__MaybeNeedAcrossCall_263)) == (MR_mktag((MR_Integer) 1)));
#line 365 "interval.m"
                      if (backend_libs__interval__succeeded)
#line 365 "interval.m"
                        backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeNeedAcrossCall_263, (MR_Integer) 0)));
#line 364 "interval.m"
                    }
#line 369 "interval.m"
                  if (backend_libs__interval__succeeded)
#line 367 "interval.m"
                    {
#line 367 "interval.m"
                      backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__InputVars_85, backend_libs__interval__MaybeNeedAcrossCall_263, backend_libs__interval__GoalInfo_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
#line 367 "interval.m"
                      return;
                    }
#line 369 "interval.m"
                  else
#line 370 "interval.m"
                    {
#line 370 "interval.m"
                      MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_157_157;

#line 370 "interval.m"
                      {
#line 370 "interval.m"
                        backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__InputVars_85, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_157_157);
                      }
#line 371 "interval.m"
                      {
#line 371 "interval.m"
                        backend_libs__interval__require_access_3_p_0(backend_libs__interval__InputVars_85, backend_libs__interval__STATE_VARIABLE_IntervalInfo_157_157, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                      }
#line 370 "interval.m"
                      *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 370 "interval.m"
                    }
#line 350 "interval.m"
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
#line 286 "interval.m"
                  MR_Word backend_libs__interval__TermVar_32;
#line 280 "interval.m"
                  MR_Word backend_libs__interval__V_169_169;

#line 280 "interval.m"
                  backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__Reason_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_31, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 280 "interval.m"
                  if (backend_libs__interval__succeeded)
#line 280 "interval.m"
                    {
#line 280 "interval.m"
                      backend_libs__interval__TermVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_31, (MR_Integer) 1)));
#line 280 "interval.m"
                      backend_libs__interval__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_31, (MR_Integer) 2)));
#line 280 "interval.m"
                      backend_libs__interval__succeeded = (backend_libs__interval__V_169_169 == (MR_Integer) 1);
#line 280 "interval.m"
                    }
#line 286 "interval.m"
                  if (backend_libs__interval__succeeded)
#line 285 "interval.m"
                    {
#line 285 "interval.m"
                      MR_Word backend_libs__interval__V_170_170;

#line 285 "interval.m"
                      {
#line 285 "interval.m"
                        backend_libs__interval__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "interval.m"
                        MR_hl_field(MR_mktag(1), backend_libs__interval__V_170_170, 0) = ((MR_Box) (backend_libs__interval__TermVar_32));
#line 285 "interval.m"
                        MR_hl_field(MR_mktag(1), backend_libs__interval__V_170_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "interval.m"
                      }
#line 285 "interval.m"
                      {
#line 285 "interval.m"
                        backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_170_170, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                      }
#line 285 "interval.m"
                      *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 285 "interval.m"
                    }
#line 286 "interval.m"
                  else
#line 289 "interval.m"
                    {
#line 289 "interval.m"
                      /* direct tailcall eliminated */
#line 289 "interval.m"
                      {
#line 289 "interval.m"
                        MR_Word backend_libs__interval__HeadVar__1__tmp_copy_1 = backend_libs__interval__SubGoal_252;

#line 289 "interval.m"
                        backend_libs__interval__HeadVar__1_1 = backend_libs__interval__HeadVar__1__tmp_copy_1;
#line 289 "interval.m"
                      }
#line 289 "interval.m"
                      continue;
#line 289 "interval.m"
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
#line 422 "interval.m"
                {
#line 424 "interval.m"
                  {
#line 424 "interval.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "shorthand");
#line 424 "interval.m"
                    return;
                  }
#line 422 "interval.m"
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
#line 141 "interval.m"
  {
#line 141 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 141 "interval.m"
    void MR_CALL (* backend_libs__interval__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 141 "interval.m"
    MR_Box backend_libs__interval__conv1_HeadVar__6_6;

#line 141 "interval.m"
    {
#line 141 "interval.m"
      backend_libs__interval__func_0(((MR_Box) backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_9), ((MR_Box) (backend_libs__interval__HeadVar__1_1)), ((MR_Box) (backend_libs__interval__HeadVar__2_2)), ((MR_Box) (backend_libs__interval__HeadVar__3_3)), ((MR_Box) (backend_libs__interval__HeadVar__4_4)), ((MR_Box) (backend_libs__interval__HeadVar__5_5)), &backend_libs__interval__conv1_HeadVar__6_6, backend_libs__interval__HeadVar__7_7, backend_libs__interval__HeadVar__8_8);
    }
#line 141 "interval.m"
    *backend_libs__interval__HeadVar__6_6 = ((MR_Word) backend_libs__interval__conv1_HeadVar__6_6);
#line 141 "interval.m"
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
