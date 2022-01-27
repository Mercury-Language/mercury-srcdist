/*
** Automatically generated from `interval.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.call_gen.mih"
#include "ll_backend.code_info.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 152 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 155 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_backend_libs__interval__type_ctor_info_anchor_follow_info_0;

#line 158 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 167 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0;

#line 173 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1;

#line 176 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_2[2];

#line 179 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2;

#line 182 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_3[1];

#line 185 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3;

#line 188 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_4[2];

#line 191 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4;

#line 194 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_5[1];

#line 197 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5;

#line 200 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_0[2];

#line 203 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1[1];

#line 206 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2[1];

#line 209 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3[2];

#line 212 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_0[4];

#line 215 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0[6];

#line 218 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0[6];

#line 221 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 224 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_follow_info_0_0[2];

#line 227 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0;

#line 230 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0[1];

#line 233 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0[1];

#line 236 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0[1];

#line 239 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0[1];

#line 242 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0;

#line 245 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1;

#line 248 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2;

#line 251 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3;

#line 254 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4;

#line 257 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_branch_construct_0[5];

#line 260 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0[5];

#line 263 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0[5];

#line 266 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_branch_end_info_0_0[3];

#line 269 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_branch_end_info_0_0[3];

#line 272 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0;

#line 275 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0[1];

#line 278 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_branch_end_info_0[1];

#line 281 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_branch_end_info_0[1];

#line 284 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_end_info_0[1];

#line 287 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 290 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 293 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_insert_spec_0_0[2];

#line 296 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0;

#line 299 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0[1];

#line 302 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0[1];

#line 305 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0[1];

#line 308 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0[1];

#line 311 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0[1];

#line 314 "backend_libs.interval.c"
static const MR_NotagFunctorDesc backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0;

#line 317 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0;

#line 320 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0;

#line 323 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0;

#line 326 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0;

#line 329 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0;

#line 332 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0;

#line 335 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 338 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 341 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 344 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 347 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 350 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_info_0_0[16];

#line 353 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_info_0_0[16];

#line 356 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0;

#line 359 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0[1];

#line 362 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0[1];

#line 365 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0[1];

#line 368 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0[1];

#line 371 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 374 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0[3];

#line 377 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0[3];

#line 380 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0;

#line 383 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0[1];

#line 386 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0[1];

#line 389 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0[1];

#line 392 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0[1];

#line 395 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 398 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_var_info_0_0[2];

#line 401 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_var_info_0_0[2];

#line 404 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0;

#line 407 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0[1];

#line 410 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_var_info_0[1];

#line 413 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_var_info_0[1];

#line 416 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_var_info_0[1];

#line 419 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0;

#line 422 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1;

#line 425 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_maybe_needs_flush_0[2];

#line 428 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0[2];

#line 431 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0[2];

#line 434 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 437 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0;

#line 440 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1;

#line 443 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_resume_save_status_0[2];

#line 446 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0[2];

#line 449 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0[2];

#line 452 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_save_point_0_0[2];

#line 455 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0;

#line 458 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0[1];

#line 461 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0[1];

#line 464 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0[1];

#line 467 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0[1];

#line 470 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0;

#line 473 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1;

#line 476 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_save_point_type_0[2];

#line 479 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0[2];

#line 482 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0[2];

#line 485 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1[1];

#line 488 "backend_libs.interval.c"
static const MR_TypeClassMethod backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1[1];

#line 491 "backend_libs.interval.c"
static const MR_TypeClassId backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1;

#line 494 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0_10001(
#line 497 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 499 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 502 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_0_0_10001(
#line 505 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 507 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 509 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 512 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0_10001(
#line 515 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 517 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 520 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0_10001(
#line 523 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 525 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 527 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 530 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0_10001(
#line 533 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 535 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 538 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0_10001(
#line 541 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 543 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 545 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 548 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_end_info_0_0_10001(
#line 551 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 553 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 556 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0_10001(
#line 559 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 561 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 563 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 566 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0_10001(
#line 569 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 571 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 574 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0_10001(
#line 577 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 579 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 581 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 584 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0_10001(
#line 587 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 589 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 592 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0_10001(
#line 595 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 597 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 599 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 602 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0_10001(
#line 605 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 607 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 610 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0_10001(
#line 613 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 615 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 617 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 620 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0_10001(
#line 623 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 625 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 628 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0_10001(
#line 631 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 633 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 635 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 638 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0_10001(
#line 641 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 643 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 646 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0_10001(
#line 649 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 651 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 653 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 656 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0_10001(
#line 659 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 661 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 664 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0_10001(
#line 667 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 669 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 671 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 674 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0_10001(
#line 677 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 679 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 682 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0_10001(
#line 685 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 687 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 689 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 692 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0_10001(
#line 695 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 697 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 700 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0_10001(
#line 703 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 705 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 707 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 710 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0_10001(
#line 713 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 715 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 718 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0_10001(
#line 721 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 723 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 725 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 728 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0_10001(
#line 731 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 733 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 736 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_0_0_10001(
#line 739 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 741 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 743 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 746 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0_10001(
#line 749 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 751 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 754 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0_10001(
#line 757 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 759 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 761 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 1184 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(
#line 1184 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1184 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1184 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1184 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1184 "interval.m"
  MR_Word backend_libs__interval__Inserts_6,
#line 1184 "interval.m"
  MR_Word backend_libs__interval__InsertMap_7,
#line 1184 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_8);

#line 634 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(
#line 634 "interval.m"
  MR_Word backend_libs__interval__StartArchor_9,
#line 634 "interval.m"
  MR_Word backend_libs__interval__BeforeId_10,
#line 634 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeVars_11,
#line 634 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_12,
#line 634 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15,
#line 634 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_16);

#line 600 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(
#line 600 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_9,
#line 600 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_10,
#line 600 "interval.m"
  MR_Word backend_libs__interval__BeforeId_11,
#line 600 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_12,
#line 600 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16,
#line 600 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_17,
#line 600 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_18,
#line 600 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_19);

#line 542 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(
#line 542 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_13,
#line 542 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeGoal_14,
#line 542 "interval.m"
  MR_Word backend_libs__interval__Construct_15,
#line 542 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_16,
#line 542 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_17,
#line 542 "interval.m"
  MR_Word * backend_libs__interval__BeforeIntervalId_18,
#line 542 "interval.m"
  MR_Word * backend_libs__interval__AfterIntervalId_19,
#line 542 "interval.m"
  MR_Word * backend_libs__interval__MaybeResumeVars_20,
#line 542 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_34,
#line 542 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_35,
#line 542 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_36,
#line 542 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_37);

#line 493 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(
#line 493 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27,
#line 493 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 493 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3,
#line 493 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_4,
#line 493 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_5,
#line 493 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_6);

#line 437 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 437 "interval.m"
  MR_Word backend_libs__interval__Inputs_8,
#line 437 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedAcrossCall_9,
#line 437 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_10,
#line 437 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26,
#line 437 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_27,
#line 437 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_28,
#line 437 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_29);

#line 1329 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1329__1_2_p_0(
#line 1329 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_31,
#line 1329 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_32);

#line 1316 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_deletion__1316__1_2_p_0(
#line 1316 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_16,
#line 1316 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_17);

#line 1298 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1298__1_2_p_0(
#line 1298 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_154,
#line 1298 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_155);

#line 866 "interval.m"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0(
#line 866 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 866 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 866 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3);

#line 866 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0(
#line 866 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 866 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2);

#line 1338 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_4(
#line 1338 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1338 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1334 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_3(
#line 1334 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1334 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);

#line 1338 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_2(
#line 1338 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1338 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1329 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_1(
#line 1329 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1329 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1329 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2);

#line 1321 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0(
#line 1321 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1);

#line 1338 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_2(
#line 1338 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1338 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1316 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_1(
#line 1316 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1316 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1316 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2);

#line 1313 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0(
#line 1313 "interval.m"
  MR_Word backend_libs__interval__Vars_4);

#line 1307 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_3(
#line 1307 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1307 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1307 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1307 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1298 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_2(
#line 1298 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1298 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1298 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2);

#line 1276 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_1(
#line 1276 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1276 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);

#line 1268 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0(
#line 1268 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_5,
#line 1268 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6);

#line 1241 "interval.m"
static void MR_CALL 
backend_libs__interval__construct_anchors_4_p_0(
#line 1241 "interval.m"
  MR_Word backend_libs__interval__Construct_5,
#line 1241 "interval.m"
  MR_Word backend_libs__interval__Goal_6,
#line 1241 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_7,
#line 1241 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_8);

#line 1226 "interval.m"
static void MR_CALL 
backend_libs__interval__build_headvar_subst_4_p_0(
#line 1226 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1226 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 1226 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_Subst_0_3,
#line 1226 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_Subst_4);

#line 1201 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_cases_7_p_0(
#line 1201 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1201 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1201 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1201 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1201 "interval.m"
  MR_Word backend_libs__interval__VarRename0_5,
#line 1201 "interval.m"
  MR_Word backend_libs__interval__InsertMap_6,
#line 1201 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_7);

#line 1163 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_conj_9_p_0(
#line 1163 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1163 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1163 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1163 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1163 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_5,
#line 1163 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_6,
#line 1163 "interval.m"
  MR_Word backend_libs__interval__ConjType_7,
#line 1163 "interval.m"
  MR_Word backend_libs__interval__InsertMap_8,
#line 1163 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_9);

#line 1132 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_at_call_site_9_p_0(
#line 1132 "interval.m"
  MR_Word backend_libs__interval__Goal0_10,
#line 1132 "interval.m"
  MR_Word * backend_libs__interval__Goal_11,
#line 1132 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_25,
#line 1132 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_26,
#line 1132 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_27,
#line 1132 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_28,
#line 1132 "interval.m"
  MR_Word backend_libs__interval__MustHaveMap_14,
#line 1132 "interval.m"
  MR_Word backend_libs__interval__InsertMap_15,
#line 1132 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_16);

#line 1101 "interval.m"
static void MR_CALL 
backend_libs__interval__create_shadow_vars_10_p_0(
#line 1101 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1101 "interval.m"
  MR_Word backend_libs__interval__VarsToExtract_2,
#line 1101 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_0_3,
#line 1101 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarSet_4,
#line 1101 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_0_5,
#line 1101 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarTypes_6,
#line 1101 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_7,
#line 1101 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_8,
#line 1101 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_0_9,
#line 1101 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VoidRename_10);

#line 1050 "interval.m"
static void MR_CALL 
backend_libs__interval__make_inserted_goals_7_p_0(
#line 1050 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_1,
#line 1050 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_2,
#line 1050 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_3,
#line 1050 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_4,
#line 1050 "interval.m"
  MR_Word backend_libs__interval__HeadVar__5_5,
#line 1050 "interval.m"
  MR_Word backend_libs__interval__HeadVar__6_6,
#line 1050 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7);

#line 1039 "interval.m"
static void MR_CALL 
backend_libs__interval__insert_goals_after_7_p_0(
#line 1039 "interval.m"
  MR_Word backend_libs__interval__BranchesGoal_8,
#line 1039 "interval.m"
  MR_Word * backend_libs__interval__Goal_9,
#line 1039 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_17,
#line 1039 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_18,
#line 1039 "interval.m"
  MR_Word * backend_libs__interval__VarRename_11,
#line 1039 "interval.m"
  MR_Word backend_libs__interval__Inserts_12,
#line 1039 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_13);

#line 1029 "interval.m"
static void MR_CALL 
backend_libs__interval__lookup_inserts_3_p_0(
#line 1029 "interval.m"
  MR_Word backend_libs__interval__InsertMap_4,
#line 1029 "interval.m"
  MR_Word backend_libs__interval__Anchor_5,
#line 1029 "interval.m"
  MR_Word * backend_libs__interval__Inserts_6);

#line 879 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_goal_8_p_0(
#line 879 "interval.m"
  MR_Word backend_libs__interval__Goal0_9,
#line 879 "interval.m"
  MR_Word * backend_libs__interval__Goal_10,
#line 879 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_114,
#line 879 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_115,
#line 879 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_116,
#line 879 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_117,
#line 879 "interval.m"
  MR_Word backend_libs__interval__InsertMap_13,
#line 879 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_14);

#line 855 "interval.m"
static void MR_CALL 
backend_libs__interval__record_model_non_anchor_3_p_0(
#line 855 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 855 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 855 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9);

#line 838 "interval.m"
static void MR_CALL 
backend_libs__interval__require_access_3_p_0(
#line 838 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 838 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 838 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9);

#line 830 "interval.m"
static void MR_CALL 
backend_libs__interval__require_flushed_3_p_0(
#line 830 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 830 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 830 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9);

#line 823 "interval.m"
static void MR_CALL 
backend_libs__interval__require_in_regs_3_p_0(
#line 823 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 823 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 823 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8);

#line 780 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_no_succ_3_p_0(
#line 780 "interval.m"
  MR_Word backend_libs__interval__Id_4,
#line 780 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 780 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10);

#line 768 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_succ_4_p_0(
#line 768 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 768 "interval.m"
  MR_Word backend_libs__interval__Succ_6,
#line 768 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 768 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12);

#line 760 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_start_4_p_0(
#line 760 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 760 "interval.m"
  MR_Word backend_libs__interval__Start_6,
#line 760 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 760 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11);

#line 752 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_end_4_p_0(
#line 752 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 752 "interval.m"
  MR_Word backend_libs__interval__End_6,
#line 752 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 752 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11);

#line 731 "interval.m"
static void MR_CALL 
backend_libs__interval__record_branch_end_info_3_p_0(
#line 731 "interval.m"
  MR_Word backend_libs__interval__GoalId_4,
#line 731 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 731 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13);

#line 719 "interval.m"
static void MR_CALL 
backend_libs__interval__new_interval_id_3_p_0(
#line 719 "interval.m"
  MR_Word * backend_libs__interval__Id_4,
#line 719 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 719 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12);

#line 713 "interval.m"
static void MR_CALL 
backend_libs__interval__set_cur_interval_3_p_0(
#line 713 "interval.m"
  MR_Word backend_libs__interval__CurInterval_4,
#line 713 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 713 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7);

#line 709 "interval.m"
static void MR_CALL 
backend_libs__interval__get_cur_interval_2_p_0(
#line 709 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 709 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3);

#line 699 "interval.m"
static void MR_CALL 
backend_libs__interval__gather_interval_vars_4_p_0(
#line 699 "interval.m"
  MR_Word backend_libs__interval__IntervalVarMap_5,
#line 699 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6,
#line 699 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_0_9,
#line 699 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_10);

#line 679 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1(
#line 679 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 679 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 679 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 679 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 672 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(
#line 672 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 672 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17,
#line 672 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_18);

#line 666 "interval.m"
static void MR_CALL 
backend_libs__interval__one_open_interval_3_p_0(
#line 666 "interval.m"
  MR_Word backend_libs__interval__IntervalId_4,
#line 666 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 666 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7);

#line 661 "interval.m"
static void MR_CALL 
backend_libs__interval__no_open_intervals_2_p_0(
#line 661 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4,
#line 661 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_5);

#line 655 "interval.m"
static void MR_CALL 
backend_libs__interval__set_open_intervals_3_p_0(
#line 655 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_4,
#line 655 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 655 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7);

#line 650 "interval.m"
static void MR_CALL 
backend_libs__interval__get_open_intervals_2_p_0(
#line 650 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3,
#line 650 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_4);

#line 617 "interval.m"
static void MR_CALL 
backend_libs__interval__reached_cond_then_3_p_0(
#line 617 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_4,
#line 617 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 617 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13);

#line 590 "interval.m"
static void MR_CALL 
backend_libs__interval__enter_branch_tail_4_p_0(
#line 590 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_5,
#line 590 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 590 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 590 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10);

#line 522 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_cases_10_p_0(
#line 522 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 522 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 522 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_2,
#line 522 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_3,
#line 522 "interval.m"
  MR_Word backend_libs__interval__BeforeId_4,
#line 522 "interval.m"
  MR_Word backend_libs__interval__AfterId_5,
#line 522 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__6_6,
#line 522 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 522 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8,
#line 522 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_9,
#line 522 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_10);

#line 506 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_disj_11_p_0(
#line 506 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 506 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 506 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_2,
#line 506 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_3,
#line 506 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_4,
#line 506 "interval.m"
  MR_Word backend_libs__interval__BeforeId_5,
#line 506 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 506 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7,
#line 506 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 506 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9,
#line 506 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_10,
#line 506 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_11);

#line 423 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(
#line 423 "interval.m"
  MR_Word backend_libs__interval__ModuleInfo_1,
#line 423 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2);

#line 1338 "interval.m"
static void MR_CALL 
backend_libs__interval__write_int_list_3_p_0_1(
#line 1338 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1338 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1266 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_2(
#line 1266 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1266 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1266 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1266 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1262 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_1(
#line 1262 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1262 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1262 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1262 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 353 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_2(
#line 353 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 353 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);

#line 352 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_1(
#line 352 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 352 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);


static /* final */ const MR_Box backend_libs__interval_scalar_common_1[8][2];

static /* final */ const MR_Box backend_libs__interval_scalar_common_2[24][3];

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
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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

static /* final */ const MR_Box backend_libs__interval_scalar_common_2[24][3] = {
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
    ((MR_Box) (&backend_libs__interval_scalar_common_1[0]))
  },
  /* row 11 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_3[0])),
    ((MR_Box) (backend_libs__interval__build_interval_info_in_goal_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_3[0])),
    ((MR_Box) (backend_libs__interval__build_interval_info_in_goal_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[0])),
    ((MR_Box) (backend_libs__interval__dump_interval_info_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[1])),
    ((MR_Box) (backend_libs__interval__write_int_list_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_3[1])),
    ((MR_Box) (backend_libs__interval__dump_interval_info_id_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_3[2])),
    ((MR_Box) (backend_libs__interval__dump_interval_info_id_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[2])),
    ((MR_Box) (backend_libs__interval__dump_interval_info_id_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_3[2])),
    ((MR_Box) (backend_libs__interval__dump_deletion_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[1])),
    ((MR_Box) (backend_libs__interval__dump_deletion_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_3[2])),
    ((MR_Box) (backend_libs__interval__dump_anchor_follow_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_5[1])),
    ((MR_Box) (backend_libs__interval__dump_anchor_follow_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&backend_libs__interval_scalar_common_3[1])),
    ((MR_Box) (backend_libs__interval__dump_anchor_follow_3_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
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



#line 1843 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1851 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0
  }
};

#line 1860 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1868 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1876 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1885 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1893 "backend_libs.interval.c"
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

#line 1908 "backend_libs.interval.c"
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

#line 1923 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_2[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1929 "backend_libs.interval.c"
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

#line 1944 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_3[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1949 "backend_libs.interval.c"
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

#line 1964 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_4[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1970 "backend_libs.interval.c"
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

#line 1985 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_5[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1990 "backend_libs.interval.c"
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

#line 2005 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_0[2] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1
};

#line 2011 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2
};

#line 2016 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3
};

#line 2021 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3[2] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5
};

#line 2027 "backend_libs.interval.c"
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

#line 2051 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0[6] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0
};

#line 2061 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2071 "backend_libs.interval.c"
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

#line 2088 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2096 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_follow_info_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2102 "backend_libs.interval.c"
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

#line 2117 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0
};

#line 2122 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0
  }
};

#line 2131 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0
};

#line 2136 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0[1] = {
  (MR_Integer) 0
};

#line 2141 "backend_libs.interval.c"
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

#line 2158 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0 = {
  (MR_String) "branch_ite",
  (MR_Integer) 0
};

#line 2164 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1 = {
  (MR_String) "branch_disj",
  (MR_Integer) 1
};

#line 2170 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2 = {
  (MR_String) "branch_switch",
  (MR_Integer) 2
};

#line 2176 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3 = {
  (MR_String) "branch_neg",
  (MR_Integer) 3
};

#line 2182 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4 = {
  (MR_String) "branch_par_conj",
  (MR_Integer) 4
};

#line 2188 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_branch_construct_0[5] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4
};

#line 2197 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0[5] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2
};

#line 2206 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2215 "backend_libs.interval.c"
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

#line 2232 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_branch_end_info_0_0[3] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2239 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_branch_end_info_0_0[3] = {
  (MR_String) "flushed_after_branch",
  (MR_String) "accessed_after_branch",
  (MR_String) "interval_after_branch"
};

#line 2246 "backend_libs.interval.c"
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

#line 2261 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0
};

#line 2266 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_branch_end_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0
  }
};

#line 2275 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_branch_end_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0
};

#line 2280 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_end_info_0[1] = {
  (MR_Integer) 0
};

#line 2285 "backend_libs.interval.c"
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

#line 2302 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2310 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_TypeInfo) &backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2319 "backend_libs.interval.c"
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

#line 2336 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_insert_spec_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2342 "backend_libs.interval.c"
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

#line 2357 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0
};

#line 2362 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0
  }
};

#line 2371 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0
};

#line 2376 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0[1] = {
  (MR_Integer) 0
};

#line 2381 "backend_libs.interval.c"
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

#line 2398 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0[1] = {
  (MR_Integer) 0
};

#line 2403 "backend_libs.interval.c"
static const MR_NotagFunctorDesc backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0 = {
  (MR_String) "interval_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2410 "backend_libs.interval.c"
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

#line 2427 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0
  }
};

#line 2436 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0
  }
};

#line 2445 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2454 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0
  }
};

#line 2463 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2471 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2480 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2488 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2497 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2506 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2514 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2523 "backend_libs.interval.c"
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

#line 2543 "backend_libs.interval.c"
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

#line 2563 "backend_libs.interval.c"
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

#line 2578 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0
};

#line 2583 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0
  }
};

#line 2592 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0
};

#line 2597 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0[1] = {
  (MR_Integer) 0
};

#line 2602 "backend_libs.interval.c"
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

#line 2619 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2628 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2635 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0[3] = {
  (MR_String) "ip_module_info",
  (MR_String) "ip_var_types",
  (MR_String) "ip_at_most_zero_calls"
};

#line 2642 "backend_libs.interval.c"
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

#line 2657 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0
};

#line 2662 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0
  }
};

#line 2671 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0
};

#line 2676 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0[1] = {
  (MR_Integer) 0
};

#line 2681 "backend_libs.interval.c"
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

#line 2698 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2706 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_var_info_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2712 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_var_info_0_0[2] = {
  (MR_String) "ivi_varset",
  (MR_String) "ivi_vartypes"
};

#line 2718 "backend_libs.interval.c"
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

#line 2733 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0
};

#line 2738 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0
  }
};

#line 2747 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_var_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0
};

#line 2752 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2757 "backend_libs.interval.c"
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

#line 2774 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0 = {
  (MR_String) "needs_flush",
  (MR_Integer) 0
};

#line 2780 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1 = {
  (MR_String) "doesnt_need_flush",
  (MR_Integer) 1
};

#line 2786 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_maybe_needs_flush_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1
};

#line 2792 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0
};

#line 2798 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2804 "backend_libs.interval.c"
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

#line 2821 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2830 "backend_libs.interval.c"
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

#line 2847 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0 = {
  (MR_String) "has_resume_save",
  (MR_Integer) 0
};

#line 2853 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1 = {
  (MR_String) "has_no_resume_save",
  (MR_Integer) 1
};

#line 2859 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_resume_save_status_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1
};

#line 2865 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0
};

#line 2871 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2877 "backend_libs.interval.c"
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

#line 2894 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_save_point_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 2900 "backend_libs.interval.c"
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

#line 2915 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0
};

#line 2920 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0
  }
};

#line 2929 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0
};

#line 2934 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0[1] = {
  (MR_Integer) 0
};

#line 2939 "backend_libs.interval.c"
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

#line 2956 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0 = {
  (MR_String) "save_point_call_site",
  (MR_Integer) 0
};

#line 2962 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1 = {
  (MR_String) "save_point_resume_point",
  (MR_Integer) 1
};

#line 2968 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_save_point_type_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1
};

#line 2974 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1
};

#line 2980 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2986 "backend_libs.interval.c"
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

#line 3003 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1[1] = {
  (MR_String) "T"
};

#line 3008 "backend_libs.interval.c"
static const MR_TypeClassMethod backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1[1] = {
  {
    (MR_String) "use_cell",
    (MR_Integer) 8,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 3017 "backend_libs.interval.c"
static const MR_TypeClassId backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1 = {
  (MR_String) "backend_libs.interval",
  (MR_String) "build_interval_info_acc",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1,
  backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1
};

#line 3028 "backend_libs.interval.c"
const MR_TypeClassDeclStruct backend_libs__interval__backend_libs__interval__type_class_decl_build_interval_info_acc_1 = {
  &backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3036 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0_10001(
#line 3039 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3041 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3043 "backend_libs.interval.c"
{
#line 3045 "backend_libs.interval.c"
  {
#line 3047 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3050 "backend_libs.interval.c"
    {
#line 3052 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____anchor_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3055 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3057 "backend_libs.interval.c"
  }
#line 3059 "backend_libs.interval.c"
}

#line 3062 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_0_0_10001(
#line 3065 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3067 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3069 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3071 "backend_libs.interval.c"
{
#line 3073 "backend_libs.interval.c"
  {
#line 3075 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3078 "backend_libs.interval.c"
    {
#line 3080 "backend_libs.interval.c"
      backend_libs__interval____Compare____anchor_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3083 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3085 "backend_libs.interval.c"
  }
#line 3087 "backend_libs.interval.c"
}

#line 3090 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0_10001(
#line 3093 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3095 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3097 "backend_libs.interval.c"
{
#line 3099 "backend_libs.interval.c"
  {
#line 3101 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3104 "backend_libs.interval.c"
    {
#line 3106 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____anchor_follow_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3109 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3111 "backend_libs.interval.c"
  }
#line 3113 "backend_libs.interval.c"
}

#line 3116 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0_10001(
#line 3119 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3121 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3123 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3125 "backend_libs.interval.c"
{
#line 3127 "backend_libs.interval.c"
  {
#line 3129 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3132 "backend_libs.interval.c"
    {
#line 3134 "backend_libs.interval.c"
      backend_libs__interval____Compare____anchor_follow_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3137 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3139 "backend_libs.interval.c"
  }
#line 3141 "backend_libs.interval.c"
}

#line 3144 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0_10001(
#line 3147 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3149 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3151 "backend_libs.interval.c"
{
#line 3153 "backend_libs.interval.c"
  {
#line 3155 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3158 "backend_libs.interval.c"
    {
#line 3160 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____branch_construct_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3163 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3165 "backend_libs.interval.c"
  }
#line 3167 "backend_libs.interval.c"
}

#line 3170 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0_10001(
#line 3173 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3175 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3177 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3179 "backend_libs.interval.c"
{
#line 3181 "backend_libs.interval.c"
  {
#line 3183 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3186 "backend_libs.interval.c"
    {
#line 3188 "backend_libs.interval.c"
      backend_libs__interval____Compare____branch_construct_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3191 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3193 "backend_libs.interval.c"
  }
#line 3195 "backend_libs.interval.c"
}

#line 3198 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_end_info_0_0_10001(
#line 3201 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3203 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3205 "backend_libs.interval.c"
{
#line 3207 "backend_libs.interval.c"
  {
#line 3209 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3212 "backend_libs.interval.c"
    {
#line 3214 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____branch_end_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3217 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3219 "backend_libs.interval.c"
  }
#line 3221 "backend_libs.interval.c"
}

#line 3224 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0_10001(
#line 3227 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3229 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3231 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3233 "backend_libs.interval.c"
{
#line 3235 "backend_libs.interval.c"
  {
#line 3237 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3240 "backend_libs.interval.c"
    {
#line 3242 "backend_libs.interval.c"
      backend_libs__interval____Compare____branch_end_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3245 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3247 "backend_libs.interval.c"
  }
#line 3249 "backend_libs.interval.c"
}

#line 3252 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0_10001(
#line 3255 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3257 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3259 "backend_libs.interval.c"
{
#line 3261 "backend_libs.interval.c"
  {
#line 3263 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3266 "backend_libs.interval.c"
    {
#line 3268 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____insert_map_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3271 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3273 "backend_libs.interval.c"
  }
#line 3275 "backend_libs.interval.c"
}

#line 3278 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0_10001(
#line 3281 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3283 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3285 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3287 "backend_libs.interval.c"
{
#line 3289 "backend_libs.interval.c"
  {
#line 3291 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3294 "backend_libs.interval.c"
    {
#line 3296 "backend_libs.interval.c"
      backend_libs__interval____Compare____insert_map_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3299 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3301 "backend_libs.interval.c"
  }
#line 3303 "backend_libs.interval.c"
}

#line 3306 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0_10001(
#line 3309 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3311 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3313 "backend_libs.interval.c"
{
#line 3315 "backend_libs.interval.c"
  {
#line 3317 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3320 "backend_libs.interval.c"
    {
#line 3322 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____insert_spec_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3325 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3327 "backend_libs.interval.c"
  }
#line 3329 "backend_libs.interval.c"
}

#line 3332 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0_10001(
#line 3335 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3337 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3339 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3341 "backend_libs.interval.c"
{
#line 3343 "backend_libs.interval.c"
  {
#line 3345 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3348 "backend_libs.interval.c"
    {
#line 3350 "backend_libs.interval.c"
      backend_libs__interval____Compare____insert_spec_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3353 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3355 "backend_libs.interval.c"
  }
#line 3357 "backend_libs.interval.c"
}

#line 3360 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0_10001(
#line 3363 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3365 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3367 "backend_libs.interval.c"
{
#line 3369 "backend_libs.interval.c"
  {
#line 3371 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3374 "backend_libs.interval.c"
    {
#line 3376 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_id_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3379 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3381 "backend_libs.interval.c"
  }
#line 3383 "backend_libs.interval.c"
}

#line 3386 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0_10001(
#line 3389 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3391 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3393 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3395 "backend_libs.interval.c"
{
#line 3397 "backend_libs.interval.c"
  {
#line 3399 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3402 "backend_libs.interval.c"
    {
#line 3404 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_id_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3407 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3409 "backend_libs.interval.c"
  }
#line 3411 "backend_libs.interval.c"
}

#line 3414 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0_10001(
#line 3417 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3419 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3421 "backend_libs.interval.c"
{
#line 3423 "backend_libs.interval.c"
  {
#line 3425 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3428 "backend_libs.interval.c"
    {
#line 3430 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3433 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3435 "backend_libs.interval.c"
  }
#line 3437 "backend_libs.interval.c"
}

#line 3440 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0_10001(
#line 3443 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3445 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3447 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3449 "backend_libs.interval.c"
{
#line 3451 "backend_libs.interval.c"
  {
#line 3453 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3456 "backend_libs.interval.c"
    {
#line 3458 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3461 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3463 "backend_libs.interval.c"
  }
#line 3465 "backend_libs.interval.c"
}

#line 3468 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0_10001(
#line 3471 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3473 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3475 "backend_libs.interval.c"
{
#line 3477 "backend_libs.interval.c"
  {
#line 3479 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3482 "backend_libs.interval.c"
    {
#line 3484 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_params_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3487 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3489 "backend_libs.interval.c"
  }
#line 3491 "backend_libs.interval.c"
}

#line 3494 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0_10001(
#line 3497 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3499 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3501 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3503 "backend_libs.interval.c"
{
#line 3505 "backend_libs.interval.c"
  {
#line 3507 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3510 "backend_libs.interval.c"
    {
#line 3512 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_params_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3515 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3517 "backend_libs.interval.c"
  }
#line 3519 "backend_libs.interval.c"
}

#line 3522 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0_10001(
#line 3525 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3527 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3529 "backend_libs.interval.c"
{
#line 3531 "backend_libs.interval.c"
  {
#line 3533 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3536 "backend_libs.interval.c"
    {
#line 3538 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_var_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3541 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3543 "backend_libs.interval.c"
  }
#line 3545 "backend_libs.interval.c"
}

#line 3548 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0_10001(
#line 3551 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3553 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3555 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3557 "backend_libs.interval.c"
{
#line 3559 "backend_libs.interval.c"
  {
#line 3561 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3564 "backend_libs.interval.c"
    {
#line 3566 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_var_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3569 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3571 "backend_libs.interval.c"
  }
#line 3573 "backend_libs.interval.c"
}

#line 3576 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0_10001(
#line 3579 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3581 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3583 "backend_libs.interval.c"
{
#line 3585 "backend_libs.interval.c"
  {
#line 3587 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3590 "backend_libs.interval.c"
    {
#line 3592 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____maybe_needs_flush_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3595 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3597 "backend_libs.interval.c"
  }
#line 3599 "backend_libs.interval.c"
}

#line 3602 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0_10001(
#line 3605 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3607 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3609 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3611 "backend_libs.interval.c"
{
#line 3613 "backend_libs.interval.c"
  {
#line 3615 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3618 "backend_libs.interval.c"
    {
#line 3620 "backend_libs.interval.c"
      backend_libs__interval____Compare____maybe_needs_flush_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3623 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3625 "backend_libs.interval.c"
  }
#line 3627 "backend_libs.interval.c"
}

#line 3630 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0_10001(
#line 3633 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3635 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3637 "backend_libs.interval.c"
{
#line 3639 "backend_libs.interval.c"
  {
#line 3641 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3644 "backend_libs.interval.c"
    {
#line 3646 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____rename_map_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3649 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3651 "backend_libs.interval.c"
  }
#line 3653 "backend_libs.interval.c"
}

#line 3656 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0_10001(
#line 3659 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3661 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3663 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3665 "backend_libs.interval.c"
{
#line 3667 "backend_libs.interval.c"
  {
#line 3669 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3672 "backend_libs.interval.c"
    {
#line 3674 "backend_libs.interval.c"
      backend_libs__interval____Compare____rename_map_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3677 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3679 "backend_libs.interval.c"
  }
#line 3681 "backend_libs.interval.c"
}

#line 3684 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0_10001(
#line 3687 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3689 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3691 "backend_libs.interval.c"
{
#line 3693 "backend_libs.interval.c"
  {
#line 3695 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3698 "backend_libs.interval.c"
    {
#line 3700 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____resume_save_status_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3703 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3705 "backend_libs.interval.c"
  }
#line 3707 "backend_libs.interval.c"
}

#line 3710 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0_10001(
#line 3713 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3715 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3717 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3719 "backend_libs.interval.c"
{
#line 3721 "backend_libs.interval.c"
  {
#line 3723 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3726 "backend_libs.interval.c"
    {
#line 3728 "backend_libs.interval.c"
      backend_libs__interval____Compare____resume_save_status_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3731 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3733 "backend_libs.interval.c"
  }
#line 3735 "backend_libs.interval.c"
}

#line 3738 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0_10001(
#line 3741 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3743 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3745 "backend_libs.interval.c"
{
#line 3747 "backend_libs.interval.c"
  {
#line 3749 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3752 "backend_libs.interval.c"
    {
#line 3754 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____save_point_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3757 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3759 "backend_libs.interval.c"
  }
#line 3761 "backend_libs.interval.c"
}

#line 3764 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_0_0_10001(
#line 3767 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3769 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3771 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3773 "backend_libs.interval.c"
{
#line 3775 "backend_libs.interval.c"
  {
#line 3777 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3780 "backend_libs.interval.c"
    {
#line 3782 "backend_libs.interval.c"
      backend_libs__interval____Compare____save_point_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3785 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3787 "backend_libs.interval.c"
  }
#line 3789 "backend_libs.interval.c"
}

#line 3792 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0_10001(
#line 3795 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3797 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3799 "backend_libs.interval.c"
{
#line 3801 "backend_libs.interval.c"
  {
#line 3803 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3806 "backend_libs.interval.c"
    {
#line 3808 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____save_point_type_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3811 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3813 "backend_libs.interval.c"
  }
#line 3815 "backend_libs.interval.c"
}

#line 3818 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0_10001(
#line 3821 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3823 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3825 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3827 "backend_libs.interval.c"
{
#line 3829 "backend_libs.interval.c"
  {
#line 3831 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3834 "backend_libs.interval.c"
    {
#line 3836 "backend_libs.interval.c"
      backend_libs__interval____Compare____save_point_type_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3839 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3841 "backend_libs.interval.c"
  }
#line 3843 "backend_libs.interval.c"
}

#line 1184 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(
#line 1184 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1184 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1184 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1184 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1184 "interval.m"
  MR_Word backend_libs__interval__Inserts_6,
#line 1184 "interval.m"
  MR_Word backend_libs__interval__InsertMap_7,
#line 1184 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_8)
#line 1184 "interval.m"
{
#line 1189 "interval.m"
  {
#line 1189 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1189 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1189 "interval.m"
      {
#line 1189 "interval.m"
        *backend_libs__interval__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1189 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_4 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_3;
#line 1189 "interval.m"
      }
#line 1189 "interval.m"
    else
#line 1191 "interval.m"
      {
#line 1191 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_40_40 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1191 "interval.m"
        MR_Word backend_libs__interval__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1191 "interval.m"
        MR_Word backend_libs__interval__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1191 "interval.m"
        MR_Word backend_libs__interval__Goal_18;
#line 1191 "interval.m"
        MR_Word backend_libs__interval__Goals_19;
#line 1191 "interval.m"
        MR_Word backend_libs__interval__VarRename1_25;
#line 1191 "interval.m"
        MR_Word backend_libs__interval__InsertGoals_26;
#line 1191 "interval.m"
        MR_Word backend_libs__interval__GoalInfo0_28;
#line 1191 "interval.m"
        MR_Word backend_libs__interval__Goal1_29;
#line 1191 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_33_33;
#line 1191 "interval.m"
        MR_Word backend_libs__interval__V_34_34;
#line 1191 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_35_35;
#line 1191 "interval.m"
        MR_Word backend_libs__interval__V_36_36;
#line 1191 "interval.m"
        MR_Word backend_libs__interval__V_37_37;
#line 1194 "interval.m"
        MR_Word backend_libs__interval__V_27_27;
#line 1195 "interval.m"
        MR_Word backend_libs__interval__V_30_30;

#line 1192 "interval.m"
        {
#line 1192 "interval.m"
          backend_libs__interval__V_34_34 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_40_40, backend_libs__interval__TypeInfo_40_40);
        }
#line 1192 "interval.m"
        {
#line 1192 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_0_3, &backend_libs__interval__STATE_VARIABLE_VarInfo_33_33, backend_libs__interval__V_34_34, &backend_libs__interval__VarRename1_25, backend_libs__interval__Inserts_6, backend_libs__interval__MaybeFeature_8, &backend_libs__interval__InsertGoals_26);
        }
#line 1194 "interval.m"
        backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_16, (MR_Integer) 0)));
#line 1194 "interval.m"
        backend_libs__interval__GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_16, (MR_Integer) 1)));
#line 1195 "interval.m"
        {
#line 1195 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Goal0_16, &backend_libs__interval__Goal1_29, backend_libs__interval__STATE_VARIABLE_VarInfo_33_33, &backend_libs__interval__STATE_VARIABLE_VarInfo_35_35, backend_libs__interval__VarRename1_25, &backend_libs__interval__V_30_30, backend_libs__interval__InsertMap_7, backend_libs__interval__MaybeFeature_8);
        }
#line 1197 "interval.m"
        {
#line 1197 "interval.m"
          backend_libs__interval__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_37_37, 0) = ((MR_Box) (backend_libs__interval__Goal1_29));
#line 1197 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1197 "interval.m"
        }
#line 1197 "interval.m"
        {
#line 1197 "interval.m"
          backend_libs__interval__V_36_36 = mercury__list__append_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, backend_libs__interval__InsertGoals_26, backend_libs__interval__V_37_37);
        }
#line 1197 "interval.m"
        {
#line 1197 "interval.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_36_36, backend_libs__interval__GoalInfo0_28, &backend_libs__interval__Goal_18);
        }
#line 1198 "interval.m"
        {
#line 1198 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(backend_libs__interval__Goals0_17, &backend_libs__interval__Goals_19, backend_libs__interval__STATE_VARIABLE_VarInfo_35_35, backend_libs__interval__STATE_VARIABLE_VarInfo_4, backend_libs__interval__Inserts_6, backend_libs__interval__InsertMap_7, backend_libs__interval__MaybeFeature_8);
        }
#line 1190 "interval.m"
        {
#line 1190 "interval.m"
          MR_Word base;
#line 1190 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1190 "interval.m"
          *backend_libs__interval__HeadVar__2_2 = base;
#line 1190 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Goal_18));
#line 1190 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__Goals_19));
#line 1190 "interval.m"
        }
#line 1191 "interval.m"
      }
#line 1189 "interval.m"
  }
#line 1184 "interval.m"
}

#line 634 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(
#line 634 "interval.m"
  MR_Word backend_libs__interval__StartArchor_9,
#line 634 "interval.m"
  MR_Word backend_libs__interval__BeforeId_10,
#line 634 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeVars_11,
#line 634 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_12,
#line 634 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15,
#line 634 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_16)
#line 634 "interval.m"
{
#line 639 "interval.m"
  {
#line 639 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 639 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17;
#line 639 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18;
#line 639 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19;
#line 639 "interval.m"
    MR_Word backend_libs__interval__EndMap0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 12)));
#line 639 "interval.m"
    MR_Word backend_libs__interval__EndMap_27;
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 0)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 1)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 2)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 3)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 4)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 5)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 6)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 7)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 8)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 9)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 10)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 11)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 13)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 14)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 15)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_45_45;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_54_54;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_55_55;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_57_57;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_56_56;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_73_73;

#line 757 "interval.m"
    {
#line 757 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__BeforeId_10)), ((MR_Box) (backend_libs__interval__StartArchor_9)), backend_libs__interval__EndMap0_26, &backend_libs__interval__EndMap_27);
    }
#line 758 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 0)));
#line 758 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 1)));
#line 758 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 2)));
#line 758 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 3)));
#line 758 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 4)));
#line 758 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 5)));
#line 758 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 6)));
#line 758 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 7)));
#line 758 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 8)));
#line 758 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 9)));
#line 758 "interval.m"
    backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 10)));
#line 758 "interval.m"
    backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 11)));
#line 758 "interval.m"
    backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 12)));
#line 758 "interval.m"
    backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 13)));
#line 758 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 14)));
#line 758 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 15)));
#line 758 "interval.m"
    {
#line 758 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 0) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 1) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 2) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 3) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 4) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 5) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 6) = ((MR_Box) (backend_libs__interval__V_50_50));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 7) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 8) = ((MR_Box) (backend_libs__interval__V_52_52));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 9) = ((MR_Box) (backend_libs__interval__V_53_53));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 10) = ((MR_Box) (backend_libs__interval__V_54_54));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 11) = ((MR_Box) (backend_libs__interval__V_55_55));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 12) = ((MR_Box) (backend_libs__interval__EndMap_27));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 13) = ((MR_Box) (backend_libs__interval__V_57_57));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 14) = ((MR_Box) (backend_libs__interval__V_58_58));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 15) = ((MR_Box) (backend_libs__interval__V_59_59));
#line 758 "interval.m"
    }
#line 644 "interval.m"
    if ((backend_libs__interval__MaybeResumeVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 645 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17;
#line 644 "interval.m"
    else
#line 642 "interval.m"
      {
#line 642 "interval.m"
        MR_Word backend_libs__interval__ResumeVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeResumeVars_11, (MR_Integer) 0)));

#line 643 "interval.m"
        {
#line 643 "interval.m"
          backend_libs__interval__require_flushed_3_p_0(backend_libs__interval__ResumeVars_14, backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18);
        }
#line 642 "interval.m"
      }
#line 717 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 0)));
#line 717 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 1)));
#line 717 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 2)));
#line 717 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 3)));
#line 717 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 4)));
#line 717 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 5)));
#line 717 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 6)));
#line 717 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 7)));
#line 717 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 8)));
#line 717 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 9)));
#line 717 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 10)));
#line 717 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 11)));
#line 717 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 12)));
#line 717 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 13)));
#line 717 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 14)));
#line 717 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 15)));
#line 717 "interval.m"
    {
#line 717 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 0) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 1) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 2) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 3) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 4) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 5) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 6) = ((MR_Box) (backend_libs__interval__BeforeId_10));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 7) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 8) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 9) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 10) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 11) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 12) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 13) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 14) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 15) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 717 "interval.m"
    }
#line 648 "interval.m"
    {
#line 648 "interval.m"
      backend_libs__interval__set_open_intervals_3_p_0(backend_libs__interval__OpenIntervals_12, backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_16);
#line 648 "interval.m"
      return;
    }
#line 639 "interval.m"
  }
#line 634 "interval.m"
}

#line 600 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(
#line 600 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_9,
#line 600 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_10,
#line 600 "interval.m"
  MR_Word backend_libs__interval__BeforeId_11,
#line 600 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_12,
#line 600 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16,
#line 600 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_17,
#line 600 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_18,
#line 600 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_19)
#line 600 "interval.m"
{
#line 605 "interval.m"
  {
#line 605 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 605 "interval.m"
    MR_Word backend_libs__interval__BranchStartId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 6)));
#line 605 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20;
#line 605 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21;
#line 605 "interval.m"
    MR_Word backend_libs__interval__StartMap0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 11)));
#line 605 "interval.m"
    MR_Word backend_libs__interval__StartMap_46;
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 0)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 1)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 2)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 3)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 4)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 5)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 7)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 8)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 9)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 10)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 12)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 13)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 14)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 15)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_93_93;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_94_94;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_95_95;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_96_96;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_97_97;

#line 765 "interval.m"
    {
#line 765 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__BranchStartId_15)), ((MR_Box) (backend_libs__interval__StartAnchor_10)), backend_libs__interval__StartMap0_45, &backend_libs__interval__StartMap_46);
    }
#line 766 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 0)));
#line 766 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 1)));
#line 766 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 2)));
#line 766 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 3)));
#line 766 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 4)));
#line 766 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 5)));
#line 766 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 6)));
#line 766 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 7)));
#line 766 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 8)));
#line 766 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 9)));
#line 766 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 10)));
#line 766 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 11)));
#line 766 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 12)));
#line 766 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 13)));
#line 766 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 14)));
#line 766 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 15)));
#line 766 "interval.m"
    {
#line 766 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 0) = ((MR_Box) (backend_libs__interval__V_63_63));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 1) = ((MR_Box) (backend_libs__interval__V_64_64));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 2) = ((MR_Box) (backend_libs__interval__V_65_65));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 3) = ((MR_Box) (backend_libs__interval__V_66_66));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 4) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 5) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 6) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 7) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 8) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 9) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 10) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 11) = ((MR_Box) (backend_libs__interval__StartMap_46));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 12) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 13) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 14) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 15) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 766 "interval.m"
    }
#line 608 "interval.m"
    {
#line 608 "interval.m"
      backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__BeforeId_11, backend_libs__interval__BranchStartId_15, backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21);
    }
#line 653 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 0)));
#line 653 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 1)));
#line 653 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 2)));
#line 653 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 3)));
#line 653 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 4)));
#line 653 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 5)));
#line 653 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 6)));
#line 653 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 7)));
#line 653 "interval.m"
    *backend_libs__interval__OpenIntervals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 8)));
#line 653 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 9)));
#line 653 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 10)));
#line 653 "interval.m"
    backend_libs__interval__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 11)));
#line 653 "interval.m"
    backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 12)));
#line 653 "interval.m"
    backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 13)));
#line 653 "interval.m"
    backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 14)));
#line 653 "interval.m"
    backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 15)));
#line 612 "interval.m"
    if ((backend_libs__interval__MaybeNeedsFlush_9 == (MR_Integer) 1))
#line 611 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_17 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21;
#line 612 "interval.m"
    else
#line 614 "interval.m"
      {
#line 614 "interval.m"
        backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(backend_libs__interval__StartAnchor_10, backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_17);
      }
#line 605 "interval.m"
    *backend_libs__interval__STATE_VARIABLE_Acc_19 = backend_libs__interval__STATE_VARIABLE_Acc_0_18;
#line 605 "interval.m"
  }
#line 600 "interval.m"
}

#line 542 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(
#line 542 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_13,
#line 542 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeGoal_14,
#line 542 "interval.m"
  MR_Word backend_libs__interval__Construct_15,
#line 542 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_16,
#line 542 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_17,
#line 542 "interval.m"
  MR_Word * backend_libs__interval__BeforeIntervalId_18,
#line 542 "interval.m"
  MR_Word * backend_libs__interval__AfterIntervalId_19,
#line 542 "interval.m"
  MR_Word * backend_libs__interval__MaybeResumeVars_20,
#line 542 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_34,
#line 542 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_35,
#line 542 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_36,
#line 542 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_37)
#line 542 "interval.m"
{
#line 550 "interval.m"
  {
#line 550 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 550 "interval.m"
    MR_Word backend_libs__interval__GoalId_23;
#line 550 "interval.m"
    MR_Word backend_libs__interval__HasResumeSave_29;
#line 550 "interval.m"
    MR_Word backend_libs__interval__CodeModel_33;
#line 550 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 550 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40;
#line 550 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41;
#line 550 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 550 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46;
#line 550 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47;
#line 550 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48;
#line 550 "interval.m"
    MR_Word backend_libs__interval__BranchResumeMap0_59;
#line 550 "interval.m"
    MR_Word backend_libs__interval__BranchResumeMap_60;
#line 561 "interval.m"
    MR_Word backend_libs__interval__ResumeVars_27;
#line 554 "interval.m"
    MR_Word backend_libs__interval__ResumeGoalInfo_25;
#line 554 "interval.m"
    MR_Word backend_libs__interval__ResumePoint_26;
#line 554 "interval.m"
    MR_Word backend_libs__interval__ResumeLocs_28;
#line 554 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 554 "interval.m"
    MR_Word backend_libs__interval___ResumeGoalExpr_24;
#line 850 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 850 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 850 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 850 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 850 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 850 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 850 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 850 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 850 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 850 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 850 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 850 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 850 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 850 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 850 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 853 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 570 "interval.m"
    MR_Word backend_libs__interval__StoreMap_30;

#line 551 "interval.m"
    {
#line 551 "interval.m"
      backend_libs__interval__GoalId_23 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_13);
    }
#line 552 "interval.m"
    {
#line 552 "interval.m"
      backend_libs__interval__record_branch_end_info_3_p_0(backend_libs__interval__GoalId_23, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_34, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
    }
#line 554 "interval.m"
    backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__MaybeResumeGoal_14)) == (MR_mktag((MR_Integer) 1)));
#line 554 "interval.m"
    if (backend_libs__interval__succeeded)
#line 554 "interval.m"
      {
#line 554 "interval.m"
        backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeResumeGoal_14, (MR_Integer) 0)));
#line 554 "interval.m"
        backend_libs__interval___ResumeGoalExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_39_39, (MR_Integer) 0)));
#line 554 "interval.m"
        backend_libs__interval__ResumeGoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_39_39, (MR_Integer) 1)));
#line 555 "interval.m"
        {
#line 555 "interval.m"
          backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_resume_point_2_p_0(backend_libs__interval__ResumeGoalInfo_25, &backend_libs__interval__ResumePoint_26);
        }
#line 554 "interval.m"
        if (backend_libs__interval__succeeded)
#line 554 "interval.m"
          {
#line 556 "interval.m"
            backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__ResumePoint_26)) == (MR_mktag((MR_Integer) 1)));
#line 556 "interval.m"
            if (backend_libs__interval__succeeded)
#line 556 "interval.m"
              {
#line 556 "interval.m"
                backend_libs__interval__ResumeVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__ResumePoint_26, (MR_Integer) 0)));
#line 556 "interval.m"
                backend_libs__interval__ResumeLocs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__ResumePoint_26, (MR_Integer) 1)));
#line 557 "interval.m"
                backend_libs__interval__succeeded = (backend_libs__interval__ResumeLocs_28 == (MR_Integer) 0);
#line 557 "interval.m"
                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 556 "interval.m"
              }
#line 554 "interval.m"
          }
#line 554 "interval.m"
      }
#line 561 "interval.m"
    if (backend_libs__interval__succeeded)
#line 559 "interval.m"
      {
#line 559 "interval.m"
        backend_libs__interval__HasResumeSave_29 = (MR_Integer) 0;
#line 560 "interval.m"
        {
#line 560 "interval.m"
          MR_Word base;
#line 560 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 560 "interval.m"
          *backend_libs__interval__MaybeResumeVars_20 = base;
#line 560 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__ResumeVars_27));
#line 560 "interval.m"
        }
#line 559 "interval.m"
      }
#line 561 "interval.m"
    else
#line 562 "interval.m"
      {
#line 562 "interval.m"
        backend_libs__interval__HasResumeSave_29 = (MR_Integer) 1;
#line 563 "interval.m"
        *backend_libs__interval__MaybeResumeVars_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 562 "interval.m"
      }
#line 850 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 0)));
#line 850 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 1)));
#line 850 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 2)));
#line 850 "interval.m"
    backend_libs__interval__BranchResumeMap0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 3)));
#line 850 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 4)));
#line 850 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 5)));
#line 850 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 6)));
#line 850 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 7)));
#line 850 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 8)));
#line 850 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 9)));
#line 850 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 10)));
#line 850 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 11)));
#line 850 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 12)));
#line 850 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 13)));
#line 850 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 14)));
#line 850 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 15)));
#line 851 "interval.m"
    {
#line 851 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0, ((MR_Box) (backend_libs__interval__GoalId_23)), ((MR_Box) (backend_libs__interval__HasResumeSave_29)), backend_libs__interval__BranchResumeMap0_59, &backend_libs__interval__BranchResumeMap_60);
    }
#line 853 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 0)));
#line 853 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 1)));
#line 853 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 2)));
#line 853 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 3)));
#line 853 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 4)));
#line 853 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 5)));
#line 853 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 6)));
#line 853 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 7)));
#line 853 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 8)));
#line 853 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 9)));
#line 853 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 10)));
#line 853 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 11)));
#line 853 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 12)));
#line 853 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 13)));
#line 853 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 14)));
#line 853 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 15)));
#line 853 "interval.m"
    {
#line 853 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 0) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 1) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 2) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 3) = ((MR_Box) (backend_libs__interval__BranchResumeMap_60));
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 4) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 5) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 6) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 7) = ((MR_Box) (backend_libs__interval__V_84_84));
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 8) = ((MR_Box) (backend_libs__interval__V_85_85));
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 9) = ((MR_Box) (backend_libs__interval__V_86_86));
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 10) = ((MR_Box) (backend_libs__interval__V_87_87));
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 11) = ((MR_Box) (backend_libs__interval__V_88_88));
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 12) = ((MR_Box) (backend_libs__interval__V_89_89));
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 13) = ((MR_Box) (backend_libs__interval__V_90_90));
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 14) = ((MR_Box) (backend_libs__interval__V_91_91));
#line 853 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 15) = ((MR_Box) (backend_libs__interval__V_92_92));
#line 853 "interval.m"
    }
#line 566 "interval.m"
    {
#line 566 "interval.m"
      backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_store_map_2_p_0(backend_libs__interval__GoalInfo_13, &backend_libs__interval__StoreMap_30);
    }
#line 570 "interval.m"
    if (backend_libs__interval__succeeded)
#line 567 "interval.m"
      {
#line 567 "interval.m"
        MR_Word backend_libs__interval__StoreMapVarList_31;
#line 567 "interval.m"
        MR_Word backend_libs__interval__StoreMapVars_32;

#line 567 "interval.m"
        {
#line 567 "interval.m"
          mercury__map__sorted_keys_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, backend_libs__interval__StoreMap_30, &backend_libs__interval__StoreMapVarList_31);
        }
#line 568 "interval.m"
        {
#line 568 "interval.m"
          backend_libs__interval__StoreMapVars_32 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__StoreMapVarList_31);
        }
#line 569 "interval.m"
        {
#line 569 "interval.m"
          backend_libs__interval__require_flushed_3_p_0(backend_libs__interval__StoreMapVars_32, backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41);
        }
#line 567 "interval.m"
      }
#line 570 "interval.m"
    else
#line 571 "interval.m"
      {
#line 571 "interval.m"
        {
#line 571 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.reached_branch_end\'/12", (MR_String) "no store map");
#line 571 "interval.m"
          return;
        }
#line 571 "interval.m"
      }
#line 573 "interval.m"
    {
#line 573 "interval.m"
      MR_Word base;
#line 573 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 573 "interval.m"
      *backend_libs__interval__EndAnchor_17 = base;
#line 573 "interval.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 573 "interval.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (backend_libs__interval__Construct_15));
#line 573 "interval.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (backend_libs__interval__GoalId_23));
#line 573 "interval.m"
    }
#line 574 "interval.m"
    {
#line 574 "interval.m"
      MR_Word base;
#line 574 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "interval.m"
      *backend_libs__interval__StartAnchor_16 = base;
#line 574 "interval.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Construct_15));
#line 574 "interval.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__GoalId_23));
#line 574 "interval.m"
    }
#line 575 "interval.m"
    {
#line 575 "interval.m"
      backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(*backend_libs__interval__EndAnchor_17, backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45);
    }
#line 576 "interval.m"
    {
#line 576 "interval.m"
      backend_libs__interval__CodeModel_33 = hlds__code_model__goal_info_get_code_model_1_f_0(backend_libs__interval__GoalInfo_13);
    }
#line 580 "interval.m"
    if ((backend_libs__interval__CodeModel_33 == (MR_Integer) 0))
#line 581 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 580 "interval.m"
    else
#line 580 "interval.m"
    if ((backend_libs__interval__CodeModel_33 == (MR_Integer) 2))
#line 579 "interval.m"
      {
#line 579 "interval.m"
        backend_libs__interval__record_model_non_anchor_3_p_0(*backend_libs__interval__EndAnchor_17, backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46);
      }
#line 580 "interval.m"
    else
#line 582 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 585 "interval.m"
    {
#line 585 "interval.m"
      backend_libs__interval__no_open_intervals_2_p_0(backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47);
    }
#line 586 "interval.m"
    {
#line 586 "interval.m"
      backend_libs__interval__get_cur_interval_2_p_0(backend_libs__interval__AfterIntervalId_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47);
    }
#line 587 "interval.m"
    {
#line 587 "interval.m"
      backend_libs__interval__record_interval_start_4_p_0(*backend_libs__interval__AfterIntervalId_19, *backend_libs__interval__EndAnchor_17, backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48);
    }
#line 588 "interval.m"
    {
#line 588 "interval.m"
      backend_libs__interval__new_interval_id_3_p_0(backend_libs__interval__BeforeIntervalId_18, backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_35);
    }
#line 550 "interval.m"
    *backend_libs__interval__STATE_VARIABLE_Acc_37 = backend_libs__interval__STATE_VARIABLE_Acc_0_36;
#line 550 "interval.m"
  }
#line 542 "interval.m"
}

#line 493 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(
#line 493 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27,
#line 493 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 493 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3,
#line 493 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_4,
#line 493 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_5,
#line 493 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_6)
#line 493 "interval.m"
{
#line 497 "interval.m"
  {
#line 497 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 497 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 497 "interval.m"
      {
#line 497 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_Acc_6 = backend_libs__interval__STATE_VARIABLE_Acc_0_5;
#line 497 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_IntervalInfo_4 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3;
#line 497 "interval.m"
      }
#line 497 "interval.m"
    else
#line 498 "interval.m"
      {
#line 498 "interval.m"
        MR_Word backend_libs__interval__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 498 "interval.m"
        MR_Word backend_libs__interval__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 498 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_23_23;
#line 498 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_24_24;

#line 503 "interval.m"
        {
#line 503 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27, backend_libs__interval__Goals_15, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_23_23, backend_libs__interval__STATE_VARIABLE_Acc_0_5, &backend_libs__interval__STATE_VARIABLE_Acc_24_24);
        }
#line 504 "interval.m"
        {
#line 504 "interval.m"
          backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27, backend_libs__interval__Goal_14, backend_libs__interval__STATE_VARIABLE_IntervalInfo_23_23, backend_libs__interval__STATE_VARIABLE_IntervalInfo_4, backend_libs__interval__STATE_VARIABLE_Acc_24_24, backend_libs__interval__STATE_VARIABLE_Acc_6);
#line 504 "interval.m"
          return;
        }
#line 498 "interval.m"
      }
#line 497 "interval.m"
  }
#line 493 "interval.m"
}

#line 437 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 437 "interval.m"
  MR_Word backend_libs__interval__Inputs_8,
#line 437 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedAcrossCall_9,
#line 437 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_10,
#line 437 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26,
#line 437 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_27,
#line 437 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_28,
#line 437 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_29)
#line 437 "interval.m"
{
#line 443 "interval.m"
  {
#line 443 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 486 "interval.m"
    if ((backend_libs__interval__MaybeNeedAcrossCall_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "interval.m"
      {
#line 488 "interval.m"
        {
#line 488 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_at_call\'/7", (MR_String) "no need across call");
#line 488 "interval.m"
          return;
        }
#line 487 "interval.m"
      }
#line 486 "interval.m"
    else
#line 445 "interval.m"
      {
#line 445 "interval.m"
        MR_Word backend_libs__interval__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 445 "interval.m"
        MR_Word backend_libs__interval__NeedAcrossCall_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeNeedAcrossCall_9, (MR_Integer) 0)));
#line 445 "interval.m"
        MR_Word backend_libs__interval__ForwardVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__NeedAcrossCall_13, (MR_Integer) 0)));
#line 445 "interval.m"
        MR_Word backend_libs__interval__ResumeVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__NeedAcrossCall_13, (MR_Integer) 1)));
#line 445 "interval.m"
        MR_Word backend_libs__interval__NondetLiveVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__NeedAcrossCall_13, (MR_Integer) 2)));
#line 445 "interval.m"
        MR_Word backend_libs__interval__VarsOnStack0_17;
#line 445 "interval.m"
        MR_Word backend_libs__interval__GoalId_18;
#line 445 "interval.m"
        MR_Word backend_libs__interval__CallAnchor_19;
#line 445 "interval.m"
        MR_Word backend_libs__interval__AfterCallId_20;
#line 445 "interval.m"
        MR_Word backend_libs__interval__BeforeCallId_21;
#line 445 "interval.m"
        MR_Word backend_libs__interval__InstMapDelta_22;
#line 445 "interval.m"
        MR_Word backend_libs__interval__IntParams_23;
#line 445 "interval.m"
        MR_Word backend_libs__interval__VarsOnStack_24;
#line 445 "interval.m"
        MR_Word backend_libs__interval__CodeModel_25;
#line 445 "interval.m"
        MR_Word backend_libs__interval__V_33_33;
#line 445 "interval.m"
        MR_Word backend_libs__interval__V_34_34;
#line 445 "interval.m"
        MR_Word backend_libs__interval__V_35_35;
#line 445 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_37_37;
#line 445 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 445 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39;
#line 445 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41;
#line 445 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_43_43;
#line 445 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44;
#line 445 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 445 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46;
#line 445 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47;
#line 445 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48;
#line 711 "interval.m"
        MR_Word backend_libs__interval__V_70_70;
#line 711 "interval.m"
        MR_Word backend_libs__interval__V_71_71;
#line 711 "interval.m"
        MR_Word backend_libs__interval__V_72_72;
#line 711 "interval.m"
        MR_Word backend_libs__interval__V_73_73;
#line 711 "interval.m"
        MR_Word backend_libs__interval__V_74_74;
#line 711 "interval.m"
        MR_Word backend_libs__interval__V_75_75;
#line 711 "interval.m"
        MR_Word backend_libs__interval__V_76_76;
#line 711 "interval.m"
        MR_Word backend_libs__interval__V_77_77;
#line 711 "interval.m"
        MR_Word backend_libs__interval__V_78_78;
#line 711 "interval.m"
        MR_Word backend_libs__interval__V_79_79;
#line 711 "interval.m"
        MR_Word backend_libs__interval__V_80_80;
#line 711 "interval.m"
        MR_Word backend_libs__interval__V_81_81;
#line 711 "interval.m"
        MR_Word backend_libs__interval__V_82_82;
#line 711 "interval.m"
        MR_Word backend_libs__interval__V_83_83;
#line 711 "interval.m"
        MR_Word backend_libs__interval__V_84_84;
#line 457 "interval.m"
        MR_Word backend_libs__interval__V_50_50;
#line 457 "interval.m"
        MR_Word backend_libs__interval__V_51_51;
#line 457 "interval.m"
        MR_Word backend_libs__interval__V_52_52;
#line 457 "interval.m"
        MR_Word backend_libs__interval__V_53_53;
#line 457 "interval.m"
        MR_Word backend_libs__interval__V_54_54;
#line 457 "interval.m"
        MR_Word backend_libs__interval__V_55_55;
#line 457 "interval.m"
        MR_Word backend_libs__interval__V_56_56;
#line 457 "interval.m"
        MR_Word backend_libs__interval__V_57_57;
#line 457 "interval.m"
        MR_Word backend_libs__interval__V_58_58;
#line 457 "interval.m"
        MR_Word backend_libs__interval__V_59_59;
#line 457 "interval.m"
        MR_Word backend_libs__interval__V_60_60;
#line 457 "interval.m"
        MR_Word backend_libs__interval__V_61_61;
#line 457 "interval.m"
        MR_Word backend_libs__interval__V_62_62;
#line 457 "interval.m"
        MR_Word backend_libs__interval__V_63_63;
#line 457 "interval.m"
        MR_Word backend_libs__interval__V_64_64;

#line 449 "interval.m"
        {
#line 449 "interval.m"
          backend_libs__interval__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_35_35, 0) = ((MR_Box) (backend_libs__interval__NondetLiveVars_16));
#line 449 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "interval.m"
        }
#line 448 "interval.m"
        {
#line 448 "interval.m"
          backend_libs__interval__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_34_34, 0) = ((MR_Box) (backend_libs__interval__ResumeVars_15));
#line 448 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_34_34, 1) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 448 "interval.m"
        }
#line 448 "interval.m"
        {
#line 448 "interval.m"
          backend_libs__interval__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_33_33, 0) = ((MR_Box) (backend_libs__interval__ForwardVars_14));
#line 448 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_33_33, 1) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 448 "interval.m"
        }
#line 448 "interval.m"
        {
#line 448 "interval.m"
          backend_libs__interval__VarsOnStack0_17 = parse_tree__set_of_var__union_list_1_f_0(backend_libs__interval__TypeCtorInfo_68_68, backend_libs__interval__V_33_33);
        }
#line 450 "interval.m"
        {
#line 450 "interval.m"
          backend_libs__interval__GoalId_18 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_10);
        }
#line 451 "interval.m"
        {
#line 451 "interval.m"
          backend_libs__interval__CallAnchor_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__CallAnchor_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 451 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__CallAnchor_19, 1) = ((MR_Box) (backend_libs__interval__GoalId_18));
#line 451 "interval.m"
        }
#line 711 "interval.m"
        backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 0)));
#line 711 "interval.m"
        backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 1)));
#line 711 "interval.m"
        backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 2)));
#line 711 "interval.m"
        backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 3)));
#line 711 "interval.m"
        backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 4)));
#line 711 "interval.m"
        backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 5)));
#line 711 "interval.m"
        backend_libs__interval__AfterCallId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 6)));
#line 711 "interval.m"
        backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 7)));
#line 711 "interval.m"
        backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 8)));
#line 711 "interval.m"
        backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 9)));
#line 711 "interval.m"
        backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 10)));
#line 711 "interval.m"
        backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 11)));
#line 711 "interval.m"
        backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 12)));
#line 711 "interval.m"
        backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 13)));
#line 711 "interval.m"
        backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 14)));
#line 711 "interval.m"
        backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 15)));
#line 453 "interval.m"
        {
#line 453 "interval.m"
          backend_libs__interval__new_interval_id_3_p_0(&backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_37_37);
        }
#line 454 "interval.m"
        {
#line 454 "interval.m"
          backend_libs__interval__record_interval_start_4_p_0(backend_libs__interval__AfterCallId_20, backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_37_37, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
        }
#line 455 "interval.m"
        {
#line 455 "interval.m"
          backend_libs__interval__record_interval_end_4_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39);
        }
#line 456 "interval.m"
        {
#line 456 "interval.m"
          backend_libs__interval__InstMapDelta_22 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(backend_libs__interval__GoalInfo_10);
        }
#line 457 "interval.m"
        backend_libs__interval__IntParams_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 0)));
#line 457 "interval.m"
        backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 1)));
#line 457 "interval.m"
        backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 2)));
#line 457 "interval.m"
        backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 3)));
#line 457 "interval.m"
        backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 4)));
#line 457 "interval.m"
        backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 5)));
#line 457 "interval.m"
        backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 6)));
#line 457 "interval.m"
        backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 7)));
#line 457 "interval.m"
        backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 8)));
#line 457 "interval.m"
        backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 9)));
#line 457 "interval.m"
        backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 10)));
#line 457 "interval.m"
        backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 11)));
#line 457 "interval.m"
        backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 12)));
#line 457 "interval.m"
        backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 13)));
#line 457 "interval.m"
        backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 14)));
#line 457 "interval.m"
        backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 15)));
#line 459 "interval.m"
        {
#line 459 "interval.m"
          backend_libs__interval__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(backend_libs__interval__InstMapDelta_22);
        }
#line 460 "interval.m"
        if (!(backend_libs__interval__succeeded))
#line 460 "interval.m"
          {
#line 460 "interval.m"
            MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_23, (MR_Integer) 2)));
#line 460 "interval.m"
            MR_Word backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_23, (MR_Integer) 0)));
#line 460 "interval.m"
            MR_Word backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_23, (MR_Integer) 1)));

#line 460 "interval.m"
            backend_libs__interval__succeeded = (backend_libs__interval__V_40_40 == (MR_Integer) 0);
#line 460 "interval.m"
          }
#line 465 "interval.m"
        if (backend_libs__interval__succeeded)
#line 463 "interval.m"
          {
#line 463 "interval.m"
            {
#line 463 "interval.m"
              backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__AfterCallId_20, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41);
            }
#line 464 "interval.m"
            backend_libs__interval__VarsOnStack_24 = backend_libs__interval__VarsOnStack0_17;
#line 463 "interval.m"
          }
#line 465 "interval.m"
        else
#line 468 "interval.m"
          {
#line 468 "interval.m"
            {
#line 468 "interval.m"
              backend_libs__interval__record_interval_no_succ_3_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41);
            }
#line 469 "interval.m"
            {
#line 469 "interval.m"
              backend_libs__interval__VarsOnStack_24 = parse_tree__set_of_var__init_0_f_0(backend_libs__interval__TypeCtorInfo_68_68);
            }
#line 468 "interval.m"
          }
#line 471 "interval.m"
        {
#line 471 "interval.m"
          backend_libs__interval__set_cur_interval_3_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_43_43);
        }
#line 472 "interval.m"
        {
#line 472 "interval.m"
          backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_43_43, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44);
        }
#line 473 "interval.m"
        {
#line 473 "interval.m"
          backend_libs__interval__CodeModel_25 = hlds__code_model__goal_info_get_code_model_1_f_0(backend_libs__interval__GoalInfo_10);
        }
#line 477 "interval.m"
        if ((backend_libs__interval__CodeModel_25 == (MR_Integer) 0))
#line 478 "interval.m"
          backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44;
#line 477 "interval.m"
        else
#line 477 "interval.m"
        if ((backend_libs__interval__CodeModel_25 == (MR_Integer) 2))
#line 476 "interval.m"
          {
#line 476 "interval.m"
            backend_libs__interval__record_model_non_anchor_3_p_0(backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45);
          }
#line 477 "interval.m"
        else
#line 479 "interval.m"
          backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44;
#line 482 "interval.m"
        {
#line 482 "interval.m"
          backend_libs__interval__one_open_interval_3_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46);
        }
#line 483 "interval.m"
        {
#line 483 "interval.m"
          backend_libs__interval__require_flushed_3_p_0(backend_libs__interval__VarsOnStack_24, backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47);
        }
#line 484 "interval.m"
        {
#line 484 "interval.m"
          backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__Inputs_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48);
        }
#line 485 "interval.m"
        {
#line 485 "interval.m"
          backend_libs__interval__require_access_3_p_0(backend_libs__interval__Inputs_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_27);
        }
#line 445 "interval.m"
      }
#line 443 "interval.m"
    *backend_libs__interval__STATE_VARIABLE_Acc_29 = backend_libs__interval__STATE_VARIABLE_Acc_0_28;
#line 443 "interval.m"
  }
#line 437 "interval.m"
}

#line 1329 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1329__1_2_p_0(
#line 1329 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_31,
#line 1329 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_32)
#line 1329 "interval.m"
{
#line 1329 "interval.m"
  {
#line 1329 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1329 "interval.m"
    {
#line 1329 "interval.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVar__1_31, backend_libs__interval__HeadVar__2_32);
#line 1329 "interval.m"
      return;
    }
#line 1329 "interval.m"
  }
#line 1329 "interval.m"
}

#line 1316 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_deletion__1316__1_2_p_0(
#line 1316 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_16,
#line 1316 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_17)
#line 1316 "interval.m"
{
#line 1316 "interval.m"
  {
#line 1316 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1316 "interval.m"
    {
#line 1316 "interval.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVar__1_16, backend_libs__interval__HeadVar__2_17);
#line 1316 "interval.m"
      return;
    }
#line 1316 "interval.m"
  }
#line 1316 "interval.m"
}

#line 1298 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1298__1_2_p_0(
#line 1298 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_154,
#line 1298 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_155)
#line 1298 "interval.m"
{
#line 1298 "interval.m"
  {
#line 1298 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1298 "interval.m"
    {
#line 1298 "interval.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVar__1_154, backend_libs__interval__HeadVar__2_155);
#line 1298 "interval.m"
      return;
    }
#line 1298 "interval.m"
  }
#line 1298 "interval.m"
}

#line 54 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0(
#line 54 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 54 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 54 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 54 "interval.m"
{
#line 54 "interval.m"
  {
#line 54 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 54 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar1_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 54 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar2_5 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 54 "interval.m"
    {
#line 54 "interval.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__Cast_HeadVar1_4, backend_libs__interval__Cast_HeadVar2_5);
#line 54 "interval.m"
      return;
    }
#line 54 "interval.m"
  }
#line 54 "interval.m"
}

#line 54 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0(
#line 54 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_1,
#line 54 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 54 "interval.m"
{
#line 5572 "backend_libs.interval.c"
  {
#line 5574 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 5577 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 5579 "backend_libs.interval.c"
  }
#line 54 "interval.m"
}

#line 58 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____save_point_0_0(
#line 58 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 58 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 58 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 58 "interval.m"
{
#line 58 "interval.m"
  {
#line 58 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 58 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 58 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 58 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 58 "interval.m"
    if (backend_libs__interval__succeeded)
#line 5608 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 58 "interval.m"
    else
#line 58 "interval.m"
      {
#line 58 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 58 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 58 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 58 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 58 "interval.m"
        MR_Word backend_libs__interval__V_8_8;
#line 58 "interval.m"
        MR_Integer backend_libs__interval__V_13_13 = (MR_Integer) backend_libs__interval__V_4_4;
#line 58 "interval.m"
        MR_Integer backend_libs__interval__V_14_14 = (MR_Integer) backend_libs__interval__V_6_6;

#line 58 "interval.m"
        {
#line 58 "interval.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__interval__V_8_8, backend_libs__interval__V_13_13, backend_libs__interval__V_14_14);
        }
#line 5634 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_8_8 == (MR_Integer) 0);
#line 58 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 58 "interval.m"
        if (backend_libs__interval__succeeded)
#line 58 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_8_8;
#line 58 "interval.m"
        else
#line 58 "interval.m"
          {
#line 58 "interval.m"
            MR_Integer backend_libs__interval__V_15_15 = (MR_Integer) backend_libs__interval__V_5_5;
#line 58 "interval.m"
            MR_Integer backend_libs__interval__V_16_16 = (MR_Integer) backend_libs__interval__V_7_7;

#line 58 "interval.m"
            {
#line 58 "interval.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_15_15, backend_libs__interval__V_16_16);
#line 58 "interval.m"
              return;
            }
#line 58 "interval.m"
          }
#line 58 "interval.m"
      }
#line 58 "interval.m"
  }
#line 58 "interval.m"
}

#line 58 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0(
#line 58 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 58 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 58 "interval.m"
{
#line 58 "interval.m"
  {
#line 58 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 58 "interval.m"
    MR_Integer backend_libs__interval__CastX_7 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 58 "interval.m"
    MR_Integer backend_libs__interval__CastY_8 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 58 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_7 == backend_libs__interval__CastY_8);
#line 58 "interval.m"
    if (backend_libs__interval__succeeded)
#line 58 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 58 "interval.m"
    else
#line 58 "interval.m"
      {
#line 58 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 58 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 58 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 58 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 58 "interval.m"
        MR_Integer backend_libs__interval__V_10_10;
#line 58 "interval.m"
        MR_Integer backend_libs__interval__V_11_11;

#line 5708 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_3_3 == backend_libs__interval__V_5_5);
#line 58 "interval.m"
        if (backend_libs__interval__succeeded)
#line 58 "interval.m"
          {
#line 5714 "backend_libs.interval.c"
            backend_libs__interval__V_10_10 = (MR_Integer) backend_libs__interval__V_4_4;
#line 5716 "backend_libs.interval.c"
            backend_libs__interval__V_11_11 = (MR_Integer) backend_libs__interval__V_6_6;
#line 5718 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_10_10 == backend_libs__interval__V_11_11);
#line 58 "interval.m"
          }
#line 58 "interval.m"
      }
#line 58 "interval.m"
    return backend_libs__interval__succeeded;
#line 58 "interval.m"
  }
#line 58 "interval.m"
}

#line 71 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0(
#line 71 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 71 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 71 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 71 "interval.m"
{
#line 71 "interval.m"
  {
#line 71 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 71 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar1_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 71 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar2_5 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 71 "interval.m"
    {
#line 71 "interval.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__Cast_HeadVar1_4, backend_libs__interval__Cast_HeadVar2_5);
#line 71 "interval.m"
      return;
    }
#line 71 "interval.m"
  }
#line 71 "interval.m"
}

#line 71 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0(
#line 71 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_1,
#line 71 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 71 "interval.m"
{
#line 5772 "backend_libs.interval.c"
  {
#line 5774 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 5777 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 5779 "backend_libs.interval.c"
  }
#line 71 "interval.m"
}

#line 154 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0(
#line 154 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 154 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 154 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 154 "interval.m"
{
#line 154 "interval.m"
  {
#line 154 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 154 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar1_4 = backend_libs__interval__HeadVar__2_2;
#line 154 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar2_5 = backend_libs__interval__HeadVar__3_3;

#line 154 "interval.m"
    {
#line 154 "interval.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[10], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__interval__Cast_HeadVar2_5)));
#line 154 "interval.m"
      return;
    }
#line 154 "interval.m"
  }
#line 154 "interval.m"
}

#line 154 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0(
#line 154 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 154 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 154 "interval.m"
{
#line 154 "interval.m"
  {
#line 154 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 154 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar1_3 = backend_libs__interval__HeadVar__1_1;
#line 154 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar2_4 = backend_libs__interval__HeadVar__2_2;

#line 154 "interval.m"
    {
#line 154 "interval.m"
      return backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_2[10], ((MR_Box) (backend_libs__interval__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__interval__Cast_HeadVar2_4)));
    }
#line 154 "interval.m"
    return backend_libs__interval__succeeded;
#line 154 "interval.m"
  }
#line 154 "interval.m"
}

#line 135 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0(
#line 135 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 135 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 135 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 135 "interval.m"
{
#line 135 "interval.m"
  {
#line 135 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 135 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar1_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 135 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar2_5 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 135 "interval.m"
    {
#line 135 "interval.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__Cast_HeadVar1_4, backend_libs__interval__Cast_HeadVar2_5);
#line 135 "interval.m"
      return;
    }
#line 135 "interval.m"
  }
#line 135 "interval.m"
}

#line 135 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0(
#line 135 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_1,
#line 135 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 135 "interval.m"
{
#line 5887 "backend_libs.interval.c"
  {
#line 5889 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 5892 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 5894 "backend_libs.interval.c"
  }
#line 135 "interval.m"
}

#line 866 "interval.m"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0(
#line 866 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 866 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 866 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 866 "interval.m"
{
#line 866 "interval.m"
  {
#line 866 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 866 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 866 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 866 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 866 "interval.m"
    if (backend_libs__interval__succeeded)
#line 5923 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 866 "interval.m"
    else
#line 866 "interval.m"
      {
#line 866 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 866 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 866 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 866 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 866 "interval.m"
        MR_Word backend_libs__interval__V_8_8;

#line 866 "interval.m"
        {
#line 866 "interval.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[7], &backend_libs__interval__V_8_8, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
        }
#line 5945 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_8_8 == (MR_Integer) 0);
#line 866 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 866 "interval.m"
        if (backend_libs__interval__succeeded)
#line 866 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_8_8;
#line 866 "interval.m"
        else
#line 866 "interval.m"
          {
#line 866 "interval.m"
            {
#line 866 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_7_7)));
#line 866 "interval.m"
              return;
            }
#line 866 "interval.m"
          }
#line 866 "interval.m"
      }
#line 866 "interval.m"
  }
#line 866 "interval.m"
}

#line 866 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0(
#line 866 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 866 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 866 "interval.m"
{
#line 866 "interval.m"
  {
#line 866 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 866 "interval.m"
    MR_Integer backend_libs__interval__CastX_7 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 866 "interval.m"
    MR_Integer backend_libs__interval__CastY_8 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 866 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_7 == backend_libs__interval__CastY_8);
#line 866 "interval.m"
    if (backend_libs__interval__succeeded)
#line 866 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 866 "interval.m"
    else
#line 866 "interval.m"
      {
#line 866 "interval.m"
        MR_Word backend_libs__interval__TypeCtorInfo_10_10;
#line 866 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 866 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 866 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 866 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 6012 "backend_libs.interval.c"
        {
#line 6014 "backend_libs.interval.c"
          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[7], ((MR_Box) (backend_libs__interval__V_3_3)), ((MR_Box) (backend_libs__interval__V_5_5)));
        }
#line 866 "interval.m"
        if (backend_libs__interval__succeeded)
#line 866 "interval.m"
          {
#line 6021 "backend_libs.interval.c"
            backend_libs__interval__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 6023 "backend_libs.interval.c"
            {
#line 6025 "backend_libs.interval.c"
              return backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeCtorInfo_10_10, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
            }
#line 866 "interval.m"
          }
#line 866 "interval.m"
      }
#line 866 "interval.m"
    return backend_libs__interval__succeeded;
#line 866 "interval.m"
  }
#line 866 "interval.m"
}

#line 107 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0(
#line 107 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 107 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 107 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 107 "interval.m"
{
#line 107 "interval.m"
  {
#line 107 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 107 "interval.m"
    MR_Integer backend_libs__interval__CastX_12 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 107 "interval.m"
    MR_Integer backend_libs__interval__CastY_13 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 107 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_12 == backend_libs__interval__CastY_13);
#line 107 "interval.m"
    if (backend_libs__interval__succeeded)
#line 6063 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 107 "interval.m"
    else
#line 107 "interval.m"
      {
#line 107 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 107 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 107 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 107 "interval.m"
        MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 2)));
#line 107 "interval.m"
        MR_Word backend_libs__interval__V_10_10;

#line 107 "interval.m"
        {
#line 107 "interval.m"
          hlds__hlds_module____Compare____module_info_0_0(&backend_libs__interval__V_10_10, backend_libs__interval__V_4_4, backend_libs__interval__V_7_7);
        }
#line 6089 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_10_10 == (MR_Integer) 0);
#line 107 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 107 "interval.m"
        if (backend_libs__interval__succeeded)
#line 107 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_10_10;
#line 107 "interval.m"
        else
#line 107 "interval.m"
          {
#line 107 "interval.m"
            MR_Word backend_libs__interval__V_11_11;

#line 107 "interval.m"
            {
#line 107 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, &backend_libs__interval__V_11_11, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_8_8)));
            }
#line 6109 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_11_11 == (MR_Integer) 0);
#line 107 "interval.m"
            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 107 "interval.m"
            if (backend_libs__interval__succeeded)
#line 107 "interval.m"
              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_11_11;
#line 107 "interval.m"
            else
#line 107 "interval.m"
              {
#line 107 "interval.m"
                MR_Integer backend_libs__interval__V_17_17 = (MR_Integer) backend_libs__interval__V_6_6;
#line 107 "interval.m"
                MR_Integer backend_libs__interval__V_18_18 = (MR_Integer) backend_libs__interval__V_9_9;

#line 107 "interval.m"
                {
#line 107 "interval.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_17_17, backend_libs__interval__V_18_18);
#line 107 "interval.m"
                  return;
                }
#line 107 "interval.m"
              }
#line 107 "interval.m"
          }
#line 107 "interval.m"
      }
#line 107 "interval.m"
  }
#line 107 "interval.m"
}

#line 107 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0(
#line 107 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 107 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 107 "interval.m"
{
#line 107 "interval.m"
  {
#line 107 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 107 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 107 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 107 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 107 "interval.m"
    if (backend_libs__interval__succeeded)
#line 107 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 107 "interval.m"
    else
#line 107 "interval.m"
      {
#line 107 "interval.m"
        MR_Word backend_libs__interval__TypeCtorInfo_12_12;
#line 107 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 107 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 107 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 2)));
#line 107 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));

#line 6187 "backend_libs.interval.c"
        {
#line 6189 "backend_libs.interval.c"
          backend_libs__interval__succeeded = hlds__hlds_module____Unify____module_info_0_0(backend_libs__interval__V_3_3, backend_libs__interval__V_6_6);
        }
#line 107 "interval.m"
        if (backend_libs__interval__succeeded)
#line 107 "interval.m"
          {
#line 6196 "backend_libs.interval.c"
            backend_libs__interval__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 6198 "backend_libs.interval.c"
            {
#line 6200 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeCtorInfo_12_12, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_7_7)));
            }
#line 107 "interval.m"
            if (backend_libs__interval__succeeded)
#line 6205 "backend_libs.interval.c"
              backend_libs__interval__succeeded = (backend_libs__interval__V_5_5 == backend_libs__interval__V_8_8);
#line 107 "interval.m"
          }
#line 107 "interval.m"
      }
#line 107 "interval.m"
    return backend_libs__interval__succeeded;
#line 107 "interval.m"
  }
#line 107 "interval.m"
}

#line 114 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0(
#line 114 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 114 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 114 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 114 "interval.m"
{
#line 114 "interval.m"
  {
#line 114 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 114 "interval.m"
    MR_Integer backend_libs__interval__CastX_51 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 114 "interval.m"
    MR_Integer backend_libs__interval__CastY_52 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 114 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_51 == backend_libs__interval__CastY_52);
#line 114 "interval.m"
    if (backend_libs__interval__succeeded)
#line 6242 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 114 "interval.m"
    else
#line 114 "interval.m"
      {
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 3)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 4)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 5)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 6)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 7)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 8)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 9)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 10)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 11)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 12)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 13)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 14)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 15)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 2)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 3)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 4)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 5)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 6)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 7)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 8)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 9)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 10)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 11)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 12)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 13)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 14)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 15)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_36_36;

#line 114 "interval.m"
        {
#line 114 "interval.m"
          backend_libs__interval____Compare____interval_params_0_0(&backend_libs__interval__V_36_36, backend_libs__interval__V_4_4, backend_libs__interval__V_20_20);
        }
#line 6320 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_36_36 == (MR_Integer) 0);
#line 114 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 114 "interval.m"
        if (backend_libs__interval__succeeded)
#line 114 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_36_36;
#line 114 "interval.m"
        else
#line 114 "interval.m"
          {
#line 114 "interval.m"
            MR_Word backend_libs__interval__V_37_37;

#line 114 "interval.m"
            {
#line 114 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], &backend_libs__interval__V_37_37, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_21_21)));
            }
#line 6340 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_37_37 == (MR_Integer) 0);
#line 114 "interval.m"
            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 114 "interval.m"
            if (backend_libs__interval__succeeded)
#line 114 "interval.m"
              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_37_37;
#line 114 "interval.m"
            else
#line 114 "interval.m"
              {
#line 114 "interval.m"
                MR_Word backend_libs__interval__V_38_38;

#line 114 "interval.m"
                {
#line 114 "interval.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], &backend_libs__interval__V_38_38, ((MR_Box) (backend_libs__interval__V_6_6)), ((MR_Box) (backend_libs__interval__V_22_22)));
                }
#line 6360 "backend_libs.interval.c"
                backend_libs__interval__succeeded = (backend_libs__interval__V_38_38 == (MR_Integer) 0);
#line 114 "interval.m"
                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 114 "interval.m"
                if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                  *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_38_38;
#line 114 "interval.m"
                else
#line 114 "interval.m"
                  {
#line 114 "interval.m"
                    MR_Word backend_libs__interval__V_39_39;

#line 114 "interval.m"
                    {
#line 114 "interval.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[2], &backend_libs__interval__V_39_39, ((MR_Box) (backend_libs__interval__V_7_7)), ((MR_Box) (backend_libs__interval__V_23_23)));
                    }
#line 6380 "backend_libs.interval.c"
                    backend_libs__interval__succeeded = (backend_libs__interval__V_39_39 == (MR_Integer) 0);
#line 114 "interval.m"
                    backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 114 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                      *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_39_39;
#line 114 "interval.m"
                    else
#line 114 "interval.m"
                      {
#line 114 "interval.m"
                        MR_Word backend_libs__interval__V_40_40;

#line 114 "interval.m"
                        {
#line 114 "interval.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[3], &backend_libs__interval__V_40_40, ((MR_Box) (backend_libs__interval__V_8_8)), ((MR_Box) (backend_libs__interval__V_24_24)));
                        }
#line 6400 "backend_libs.interval.c"
                        backend_libs__interval__succeeded = (backend_libs__interval__V_40_40 == (MR_Integer) 0);
#line 114 "interval.m"
                        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 114 "interval.m"
                        if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_40_40;
#line 114 "interval.m"
                        else
#line 114 "interval.m"
                          {
#line 114 "interval.m"
                            MR_Word backend_libs__interval__V_41_41;

#line 114 "interval.m"
                            {
#line 114 "interval.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[4], &backend_libs__interval__V_41_41, ((MR_Box) (backend_libs__interval__V_9_9)), ((MR_Box) (backend_libs__interval__V_25_25)));
                            }
#line 6420 "backend_libs.interval.c"
                            backend_libs__interval__succeeded = (backend_libs__interval__V_41_41 == (MR_Integer) 0);
#line 114 "interval.m"
                            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 114 "interval.m"
                            if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_41_41;
#line 114 "interval.m"
                            else
#line 114 "interval.m"
                              {
#line 114 "interval.m"
                                MR_Word backend_libs__interval__V_42_42;
#line 114 "interval.m"
                                MR_Integer backend_libs__interval__V_69_69 = (MR_Integer) backend_libs__interval__V_10_10;
#line 114 "interval.m"
                                MR_Integer backend_libs__interval__V_70_70 = (MR_Integer) backend_libs__interval__V_26_26;

#line 114 "interval.m"
                                {
#line 114 "interval.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__interval__V_42_42, backend_libs__interval__V_69_69, backend_libs__interval__V_70_70);
                                }
#line 6444 "backend_libs.interval.c"
                                backend_libs__interval__succeeded = (backend_libs__interval__V_42_42 == (MR_Integer) 0);
#line 114 "interval.m"
                                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 114 "interval.m"
                                if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                  *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_42_42;
#line 114 "interval.m"
                                else
#line 114 "interval.m"
                                  {
#line 114 "interval.m"
                                    MR_Word backend_libs__interval__V_43_43;

#line 114 "interval.m"
                                    {
#line 114 "interval.m"
                                      mercury__counter____Compare____counter_0_0(&backend_libs__interval__V_43_43, backend_libs__interval__V_11_11, backend_libs__interval__V_27_27);
                                    }
#line 6464 "backend_libs.interval.c"
                                    backend_libs__interval__succeeded = (backend_libs__interval__V_43_43 == (MR_Integer) 0);
#line 114 "interval.m"
                                    backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 114 "interval.m"
                                    if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                      *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_43_43;
#line 114 "interval.m"
                                    else
#line 114 "interval.m"
                                      {
#line 114 "interval.m"
                                        MR_Word backend_libs__interval__V_44_44;

#line 114 "interval.m"
                                        {
#line 114 "interval.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[5], &backend_libs__interval__V_44_44, ((MR_Box) (backend_libs__interval__V_12_12)), ((MR_Box) (backend_libs__interval__V_28_28)));
                                        }
#line 6484 "backend_libs.interval.c"
                                        backend_libs__interval__succeeded = (backend_libs__interval__V_44_44 == (MR_Integer) 0);
#line 114 "interval.m"
                                        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 114 "interval.m"
                                        if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_44_44;
#line 114 "interval.m"
                                        else
#line 114 "interval.m"
                                          {
#line 114 "interval.m"
                                            MR_Word backend_libs__interval__V_45_45;

#line 114 "interval.m"
                                            {
#line 114 "interval.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[5], &backend_libs__interval__V_45_45, ((MR_Box) (backend_libs__interval__V_13_13)), ((MR_Box) (backend_libs__interval__V_29_29)));
                                            }
#line 6504 "backend_libs.interval.c"
                                            backend_libs__interval__succeeded = (backend_libs__interval__V_45_45 == (MR_Integer) 0);
#line 114 "interval.m"
                                            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 114 "interval.m"
                                            if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_45_45;
#line 114 "interval.m"
                                            else
#line 114 "interval.m"
                                              {
#line 114 "interval.m"
                                                MR_Word backend_libs__interval__V_46_46;

#line 114 "interval.m"
                                                {
#line 114 "interval.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[6], &backend_libs__interval__V_46_46, ((MR_Box) (backend_libs__interval__V_14_14)), ((MR_Box) (backend_libs__interval__V_30_30)));
                                                }
#line 6524 "backend_libs.interval.c"
                                                backend_libs__interval__succeeded = (backend_libs__interval__V_46_46 == (MR_Integer) 0);
#line 114 "interval.m"
                                                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 114 "interval.m"
                                                if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                                  *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_46_46;
#line 114 "interval.m"
                                                else
#line 114 "interval.m"
                                                  {
#line 114 "interval.m"
                                                    MR_Word backend_libs__interval__V_47_47;

#line 114 "interval.m"
                                                    {
#line 114 "interval.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[6], &backend_libs__interval__V_47_47, ((MR_Box) (backend_libs__interval__V_15_15)), ((MR_Box) (backend_libs__interval__V_31_31)));
                                                    }
#line 6544 "backend_libs.interval.c"
                                                    backend_libs__interval__succeeded = (backend_libs__interval__V_47_47 == (MR_Integer) 0);
#line 114 "interval.m"
                                                    backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 114 "interval.m"
                                                    if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                                      *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_47_47;
#line 114 "interval.m"
                                                    else
#line 114 "interval.m"
                                                      {
#line 114 "interval.m"
                                                        MR_Word backend_libs__interval__V_48_48;

#line 114 "interval.m"
                                                        {
#line 114 "interval.m"
                                                          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[6], &backend_libs__interval__V_48_48, ((MR_Box) (backend_libs__interval__V_16_16)), ((MR_Box) (backend_libs__interval__V_32_32)));
                                                        }
#line 6564 "backend_libs.interval.c"
                                                        backend_libs__interval__succeeded = (backend_libs__interval__V_48_48 == (MR_Integer) 0);
#line 114 "interval.m"
                                                        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 114 "interval.m"
                                                        if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                                          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_48_48;
#line 114 "interval.m"
                                                        else
#line 114 "interval.m"
                                                          {
#line 114 "interval.m"
                                                            MR_Word backend_libs__interval__V_49_49;

#line 114 "interval.m"
                                                            {
#line 114 "interval.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[7], &backend_libs__interval__V_49_49, ((MR_Box) (backend_libs__interval__V_17_17)), ((MR_Box) (backend_libs__interval__V_33_33)));
                                                            }
#line 6584 "backend_libs.interval.c"
                                                            backend_libs__interval__succeeded = (backend_libs__interval__V_49_49 == (MR_Integer) 0);
#line 114 "interval.m"
                                                            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 114 "interval.m"
                                                            if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                                              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_49_49;
#line 114 "interval.m"
                                                            else
#line 114 "interval.m"
                                                              {
#line 114 "interval.m"
                                                                MR_Word backend_libs__interval__V_50_50;

#line 114 "interval.m"
                                                                {
#line 114 "interval.m"
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[8], &backend_libs__interval__V_50_50, ((MR_Box) (backend_libs__interval__V_18_18)), ((MR_Box) (backend_libs__interval__V_34_34)));
                                                                }
#line 6604 "backend_libs.interval.c"
                                                                backend_libs__interval__succeeded = (backend_libs__interval__V_50_50 == (MR_Integer) 0);
#line 114 "interval.m"
                                                                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 114 "interval.m"
                                                                if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                                                  *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_50_50;
#line 114 "interval.m"
                                                                else
#line 114 "interval.m"
                                                                  {
#line 114 "interval.m"
                                                                    {
#line 114 "interval.m"
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[9], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__V_19_19)), ((MR_Box) (backend_libs__interval__V_35_35)));
#line 114 "interval.m"
                                                                      return;
                                                                    }
#line 114 "interval.m"
                                                                  }
#line 114 "interval.m"
                                                              }
#line 114 "interval.m"
                                                          }
#line 114 "interval.m"
                                                      }
#line 114 "interval.m"
                                                  }
#line 114 "interval.m"
                                              }
#line 114 "interval.m"
                                          }
#line 114 "interval.m"
                                      }
#line 114 "interval.m"
                                  }
#line 114 "interval.m"
                              }
#line 114 "interval.m"
                          }
#line 114 "interval.m"
                      }
#line 114 "interval.m"
                  }
#line 114 "interval.m"
              }
#line 114 "interval.m"
          }
#line 114 "interval.m"
      }
#line 114 "interval.m"
  }
#line 114 "interval.m"
}

#line 114 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0(
#line 114 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 114 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 114 "interval.m"
{
#line 114 "interval.m"
  {
#line 114 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 114 "interval.m"
    MR_Integer backend_libs__interval__CastX_35 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 114 "interval.m"
    MR_Integer backend_libs__interval__CastY_36 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 114 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_35 == backend_libs__interval__CastY_36);
#line 114 "interval.m"
    if (backend_libs__interval__succeeded)
#line 114 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 114 "interval.m"
    else
#line 114 "interval.m"
      {
#line 114 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_37_37;
#line 114 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_38_38;
#line 114 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_39_39;
#line 114 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_40_40;
#line 114 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_41_41;
#line 114 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_43_43;
#line 114 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_44_44;
#line 114 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_45_45;
#line 114 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_46_46;
#line 114 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_47_47;
#line 114 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_48_48;
#line 114 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_49_49;
#line 114 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_50_50;
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 2)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 3)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 4)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 5)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 6)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 7)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 8)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 9)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 10)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 11)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 12)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 13)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 14)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 15)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 3)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 4)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 5)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 6)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 7)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 8)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 9)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 10)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 11)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 12)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 13)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 14)));
#line 114 "interval.m"
        MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 15)));
#line 83 "interval.m"
        MR_Integer backend_libs__interval__CastX_53;
#line 83 "interval.m"
        MR_Integer backend_libs__interval__CastY_54;

#line 6783 "backend_libs.interval.c"
        {
#line 6785 "backend_libs.interval.c"
          backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_params_0_0(backend_libs__interval__V_3_3, backend_libs__interval__V_19_19);
        }
#line 114 "interval.m"
        if (backend_libs__interval__succeeded)
#line 114 "interval.m"
          {
#line 6792 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_37_37 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 6794 "backend_libs.interval.c"
            {
#line 6796 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_37_37, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_20_20)));
            }
#line 114 "interval.m"
            if (backend_libs__interval__succeeded)
#line 114 "interval.m"
              {
#line 6803 "backend_libs.interval.c"
                backend_libs__interval__TypeInfo_38_38 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 6805 "backend_libs.interval.c"
                {
#line 6807 "backend_libs.interval.c"
                  backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_38_38, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_21_21)));
                }
#line 114 "interval.m"
                if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                  {
#line 6814 "backend_libs.interval.c"
                    backend_libs__interval__TypeInfo_39_39 = (MR_Word) &backend_libs__interval_scalar_common_2[2];
#line 6816 "backend_libs.interval.c"
                    {
#line 6818 "backend_libs.interval.c"
                      backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_39_39, ((MR_Box) (backend_libs__interval__V_6_6)), ((MR_Box) (backend_libs__interval__V_22_22)));
                    }
#line 114 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                      {
#line 6825 "backend_libs.interval.c"
                        backend_libs__interval__TypeInfo_40_40 = (MR_Word) &backend_libs__interval_scalar_common_2[3];
#line 6827 "backend_libs.interval.c"
                        {
#line 6829 "backend_libs.interval.c"
                          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_40_40, ((MR_Box) (backend_libs__interval__V_7_7)), ((MR_Box) (backend_libs__interval__V_23_23)));
                        }
#line 114 "interval.m"
                        if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                          {
#line 6836 "backend_libs.interval.c"
                            backend_libs__interval__TypeInfo_41_41 = (MR_Word) &backend_libs__interval_scalar_common_2[4];
#line 6838 "backend_libs.interval.c"
                            {
#line 6840 "backend_libs.interval.c"
                              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_41_41, ((MR_Box) (backend_libs__interval__V_8_8)), ((MR_Box) (backend_libs__interval__V_24_24)));
                            }
#line 114 "interval.m"
                            if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                              {
#line 83 "interval.m"
                                backend_libs__interval__CastX_53 = (MR_Integer) backend_libs__interval__V_9_9;
#line 83 "interval.m"
                                backend_libs__interval__CastY_54 = (MR_Integer) backend_libs__interval__V_25_25;
#line 83 "interval.m"
                                backend_libs__interval__succeeded = (backend_libs__interval__CastX_53 == backend_libs__interval__CastY_54);
#line 83 "interval.m"
                                if (backend_libs__interval__succeeded)
#line 83 "interval.m"
                                  backend_libs__interval__succeeded = MR_TRUE;
#line 83 "interval.m"
                                else
#line 83 "interval.m"
                                  {
#line 83 "interval.m"
                                    MR_Integer backend_libs__interval__V_51_51 = (MR_Integer) backend_libs__interval__V_9_9;
#line 83 "interval.m"
                                    MR_Integer backend_libs__interval__V_52_52 = (MR_Integer) backend_libs__interval__V_25_25;

#line 6866 "backend_libs.interval.c"
                                    backend_libs__interval__succeeded = (backend_libs__interval__V_51_51 == backend_libs__interval__V_52_52);
#line 83 "interval.m"
                                  }
#line 114 "interval.m"
                                if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                  {
#line 6874 "backend_libs.interval.c"
                                    {
#line 6876 "backend_libs.interval.c"
                                      backend_libs__interval__succeeded = mercury__counter____Unify____counter_0_0(backend_libs__interval__V_10_10, backend_libs__interval__V_26_26);
                                    }
#line 114 "interval.m"
                                    if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                      {
#line 6883 "backend_libs.interval.c"
                                        backend_libs__interval__TypeInfo_43_43 = (MR_Word) &backend_libs__interval_scalar_common_1[5];
#line 6885 "backend_libs.interval.c"
                                        {
#line 6887 "backend_libs.interval.c"
                                          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_43_43, ((MR_Box) (backend_libs__interval__V_11_11)), ((MR_Box) (backend_libs__interval__V_27_27)));
                                        }
#line 114 "interval.m"
                                        if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                          {
#line 6894 "backend_libs.interval.c"
                                            backend_libs__interval__TypeInfo_44_44 = (MR_Word) &backend_libs__interval_scalar_common_2[5];
#line 6896 "backend_libs.interval.c"
                                            {
#line 6898 "backend_libs.interval.c"
                                              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_44_44, ((MR_Box) (backend_libs__interval__V_12_12)), ((MR_Box) (backend_libs__interval__V_28_28)));
                                            }
#line 114 "interval.m"
                                            if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                              {
#line 6905 "backend_libs.interval.c"
                                                backend_libs__interval__TypeInfo_45_45 = (MR_Word) &backend_libs__interval_scalar_common_1[6];
#line 6907 "backend_libs.interval.c"
                                                {
#line 6909 "backend_libs.interval.c"
                                                  backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_45_45, ((MR_Box) (backend_libs__interval__V_13_13)), ((MR_Box) (backend_libs__interval__V_29_29)));
                                                }
#line 114 "interval.m"
                                                if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                                  {
#line 6916 "backend_libs.interval.c"
                                                    backend_libs__interval__TypeInfo_46_46 = (MR_Word) &backend_libs__interval_scalar_common_2[6];
#line 6918 "backend_libs.interval.c"
                                                    {
#line 6920 "backend_libs.interval.c"
                                                      backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_46_46, ((MR_Box) (backend_libs__interval__V_14_14)), ((MR_Box) (backend_libs__interval__V_30_30)));
                                                    }
#line 114 "interval.m"
                                                    if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                                      {
#line 6927 "backend_libs.interval.c"
                                                        backend_libs__interval__TypeInfo_47_47 = (MR_Word) &backend_libs__interval_scalar_common_2[6];
#line 6929 "backend_libs.interval.c"
                                                        {
#line 6931 "backend_libs.interval.c"
                                                          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_47_47, ((MR_Box) (backend_libs__interval__V_15_15)), ((MR_Box) (backend_libs__interval__V_31_31)));
                                                        }
#line 114 "interval.m"
                                                        if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                                          {
#line 6938 "backend_libs.interval.c"
                                                            backend_libs__interval__TypeInfo_48_48 = (MR_Word) &backend_libs__interval_scalar_common_2[7];
#line 6940 "backend_libs.interval.c"
                                                            {
#line 6942 "backend_libs.interval.c"
                                                              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_48_48, ((MR_Box) (backend_libs__interval__V_16_16)), ((MR_Box) (backend_libs__interval__V_32_32)));
                                                            }
#line 114 "interval.m"
                                                            if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                                              {
#line 6949 "backend_libs.interval.c"
                                                                backend_libs__interval__TypeInfo_49_49 = (MR_Word) &backend_libs__interval_scalar_common_2[8];
#line 6951 "backend_libs.interval.c"
                                                                {
#line 6953 "backend_libs.interval.c"
                                                                  backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_49_49, ((MR_Box) (backend_libs__interval__V_17_17)), ((MR_Box) (backend_libs__interval__V_33_33)));
                                                                }
#line 114 "interval.m"
                                                                if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                                                  {
#line 6960 "backend_libs.interval.c"
                                                                    backend_libs__interval__TypeInfo_50_50 = (MR_Word) &backend_libs__interval_scalar_common_2[9];
#line 6962 "backend_libs.interval.c"
                                                                    {
#line 6964 "backend_libs.interval.c"
                                                                      return backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_50_50, ((MR_Box) (backend_libs__interval__V_18_18)), ((MR_Box) (backend_libs__interval__V_34_34)));
                                                                    }
#line 114 "interval.m"
                                                                  }
#line 114 "interval.m"
                                                              }
#line 114 "interval.m"
                                                          }
#line 114 "interval.m"
                                                      }
#line 114 "interval.m"
                                                  }
#line 114 "interval.m"
                                              }
#line 114 "interval.m"
                                          }
#line 114 "interval.m"
                                      }
#line 114 "interval.m"
                                  }
#line 114 "interval.m"
                              }
#line 114 "interval.m"
                          }
#line 114 "interval.m"
                      }
#line 114 "interval.m"
                  }
#line 114 "interval.m"
              }
#line 114 "interval.m"
          }
#line 114 "interval.m"
      }
#line 114 "interval.m"
    return backend_libs__interval__succeeded;
#line 114 "interval.m"
  }
#line 114 "interval.m"
}

#line 83 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0(
#line 83 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 83 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 83 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 83 "interval.m"
{
#line 83 "interval.m"
  {
#line 83 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 83 "interval.m"
    MR_Integer backend_libs__interval__CastX_6 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 83 "interval.m"
    MR_Integer backend_libs__interval__CastY_7 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 83 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_6 == backend_libs__interval__CastY_7);
#line 83 "interval.m"
    if (backend_libs__interval__succeeded)
#line 7030 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 83 "interval.m"
    else
#line 83 "interval.m"
      {
#line 83 "interval.m"
        MR_Integer backend_libs__interval__V_4_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 83 "interval.m"
        MR_Integer backend_libs__interval__V_5_5 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 83 "interval.m"
        {
#line 83 "interval.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_4_4, backend_libs__interval__V_5_5);
#line 83 "interval.m"
          return;
        }
#line 83 "interval.m"
      }
#line 83 "interval.m"
  }
#line 83 "interval.m"
}

#line 83 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0(
#line 83 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 83 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 83 "interval.m"
{
#line 83 "interval.m"
  {
#line 83 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 83 "interval.m"
    MR_Integer backend_libs__interval__CastX_5 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 83 "interval.m"
    MR_Integer backend_libs__interval__CastY_6 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 83 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_5 == backend_libs__interval__CastY_6);
#line 83 "interval.m"
    if (backend_libs__interval__succeeded)
#line 83 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 83 "interval.m"
    else
#line 83 "interval.m"
      {
#line 83 "interval.m"
        MR_Integer backend_libs__interval__V_3_3 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 83 "interval.m"
        MR_Integer backend_libs__interval__V_4_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 7088 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_3_3 == backend_libs__interval__V_4_4);
#line 83 "interval.m"
      }
#line 83 "interval.m"
    return backend_libs__interval__succeeded;
#line 83 "interval.m"
  }
#line 83 "interval.m"
}

#line 93 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0(
#line 93 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 93 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 93 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 93 "interval.m"
{
#line 93 "interval.m"
  {
#line 93 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 93 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 93 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 93 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 93 "interval.m"
    if (backend_libs__interval__succeeded)
#line 7123 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 93 "interval.m"
    else
#line 93 "interval.m"
      {
#line 93 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 93 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 93 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 93 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 93 "interval.m"
        MR_Word backend_libs__interval__V_8_8;

#line 93 "interval.m"
        {
#line 93 "interval.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&backend_libs__interval__V_8_8, backend_libs__interval__V_4_4, backend_libs__interval__V_6_6);
        }
#line 7145 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_8_8 == (MR_Integer) 0);
#line 93 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 93 "interval.m"
        if (backend_libs__interval__succeeded)
#line 93 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_8_8;
#line 93 "interval.m"
        else
#line 93 "interval.m"
          {
#line 93 "interval.m"
            {
#line 93 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_7_7)));
#line 93 "interval.m"
              return;
            }
#line 93 "interval.m"
          }
#line 93 "interval.m"
      }
#line 93 "interval.m"
  }
#line 93 "interval.m"
}

#line 93 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0(
#line 93 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 93 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 93 "interval.m"
{
#line 93 "interval.m"
  {
#line 93 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 93 "interval.m"
    MR_Integer backend_libs__interval__CastX_7 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 93 "interval.m"
    MR_Integer backend_libs__interval__CastY_8 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 93 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_7 == backend_libs__interval__CastY_8);
#line 93 "interval.m"
    if (backend_libs__interval__succeeded)
#line 93 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 93 "interval.m"
    else
#line 93 "interval.m"
      {
#line 93 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_10_10;
#line 93 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 93 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 93 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 93 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 7212 "backend_libs.interval.c"
        {
#line 7214 "backend_libs.interval.c"
          backend_libs__interval__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(backend_libs__interval__V_3_3, backend_libs__interval__V_5_5);
        }
#line 93 "interval.m"
        if (backend_libs__interval__succeeded)
#line 93 "interval.m"
          {
#line 7221 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_10_10 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 7223 "backend_libs.interval.c"
            {
#line 7225 "backend_libs.interval.c"
              return backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_10_10, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
            }
#line 93 "interval.m"
          }
#line 93 "interval.m"
      }
#line 93 "interval.m"
    return backend_libs__interval__succeeded;
#line 93 "interval.m"
  }
#line 93 "interval.m"
}

#line 99 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0(
#line 99 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 99 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 99 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 99 "interval.m"
{
#line 99 "interval.m"
  {
#line 99 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 99 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar1_4 = backend_libs__interval__HeadVar__2_2;
#line 99 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar2_5 = backend_libs__interval__HeadVar__3_3;

#line 99 "interval.m"
    {
#line 99 "interval.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[1], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__interval__Cast_HeadVar2_5)));
#line 99 "interval.m"
      return;
    }
#line 99 "interval.m"
  }
#line 99 "interval.m"
}

#line 99 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0(
#line 99 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 99 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 99 "interval.m"
{
#line 99 "interval.m"
  {
#line 99 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 99 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar1_3 = backend_libs__interval__HeadVar__1_1;
#line 99 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar2_4 = backend_libs__interval__HeadVar__2_2;

#line 99 "interval.m"
    {
#line 99 "interval.m"
      return backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_2[1], ((MR_Box) (backend_libs__interval__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__interval__Cast_HeadVar2_4)));
    }
#line 99 "interval.m"
    return backend_libs__interval__succeeded;
#line 99 "interval.m"
  }
#line 99 "interval.m"
}

#line 86 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0(
#line 86 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 86 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 86 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 86 "interval.m"
{
#line 86 "interval.m"
  {
#line 86 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 86 "interval.m"
    MR_Integer backend_libs__interval__CastX_12 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 86 "interval.m"
    MR_Integer backend_libs__interval__CastY_13 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 86 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_12 == backend_libs__interval__CastY_13);
#line 86 "interval.m"
    if (backend_libs__interval__succeeded)
#line 7325 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 86 "interval.m"
    else
#line 86 "interval.m"
      {
#line 86 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 86 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 86 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 86 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 86 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 86 "interval.m"
        MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 2)));
#line 86 "interval.m"
        MR_Word backend_libs__interval__V_10_10;

#line 86 "interval.m"
        {
#line 86 "interval.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], &backend_libs__interval__V_10_10, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_7_7)));
        }
#line 7351 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_10_10 == (MR_Integer) 0);
#line 86 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 86 "interval.m"
        if (backend_libs__interval__succeeded)
#line 86 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_10_10;
#line 86 "interval.m"
        else
#line 86 "interval.m"
          {
#line 86 "interval.m"
            MR_Word backend_libs__interval__V_11_11;

#line 86 "interval.m"
            {
#line 86 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], &backend_libs__interval__V_11_11, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_8_8)));
            }
#line 7371 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_11_11 == (MR_Integer) 0);
#line 86 "interval.m"
            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 86 "interval.m"
            if (backend_libs__interval__succeeded)
#line 86 "interval.m"
              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_11_11;
#line 86 "interval.m"
            else
#line 86 "interval.m"
              {
#line 86 "interval.m"
                MR_Integer backend_libs__interval__V_17_17 = (MR_Integer) backend_libs__interval__V_6_6;
#line 86 "interval.m"
                MR_Integer backend_libs__interval__V_18_18 = (MR_Integer) backend_libs__interval__V_9_9;

#line 86 "interval.m"
                {
#line 86 "interval.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_17_17, backend_libs__interval__V_18_18);
#line 86 "interval.m"
                  return;
                }
#line 86 "interval.m"
              }
#line 86 "interval.m"
          }
#line 86 "interval.m"
      }
#line 86 "interval.m"
  }
#line 86 "interval.m"
}

#line 86 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____branch_end_info_0_0(
#line 86 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 86 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 86 "interval.m"
{
#line 86 "interval.m"
  {
#line 86 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 86 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 86 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 86 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 86 "interval.m"
    if (backend_libs__interval__succeeded)
#line 86 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 86 "interval.m"
    else
#line 86 "interval.m"
      {
#line 86 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_12_12;
#line 86 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 86 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 86 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 2)));
#line 86 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 86 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 86 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 83 "interval.m"
        MR_Integer backend_libs__interval__CastX_15;
#line 83 "interval.m"
        MR_Integer backend_libs__interval__CastY_16;

#line 7453 "backend_libs.interval.c"
        {
#line 7455 "backend_libs.interval.c"
          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__V_3_3)), ((MR_Box) (backend_libs__interval__V_6_6)));
        }
#line 86 "interval.m"
        if (backend_libs__interval__succeeded)
#line 86 "interval.m"
          {
#line 7462 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_12_12 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 7464 "backend_libs.interval.c"
            {
#line 7466 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_12_12, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_7_7)));
            }
#line 86 "interval.m"
            if (backend_libs__interval__succeeded)
#line 86 "interval.m"
              {
#line 83 "interval.m"
                backend_libs__interval__CastX_15 = (MR_Integer) backend_libs__interval__V_5_5;
#line 83 "interval.m"
                backend_libs__interval__CastY_16 = (MR_Integer) backend_libs__interval__V_8_8;
#line 83 "interval.m"
                backend_libs__interval__succeeded = (backend_libs__interval__CastX_15 == backend_libs__interval__CastY_16);
#line 83 "interval.m"
                if (backend_libs__interval__succeeded)
#line 83 "interval.m"
                  backend_libs__interval__succeeded = MR_TRUE;
#line 83 "interval.m"
                else
#line 83 "interval.m"
                  {
#line 83 "interval.m"
                    MR_Integer backend_libs__interval__V_13_13 = (MR_Integer) backend_libs__interval__V_5_5;
#line 83 "interval.m"
                    MR_Integer backend_libs__interval__V_14_14 = (MR_Integer) backend_libs__interval__V_8_8;

#line 7492 "backend_libs.interval.c"
                    backend_libs__interval__succeeded = (backend_libs__interval__V_13_13 == backend_libs__interval__V_14_14);
#line 83 "interval.m"
                  }
#line 86 "interval.m"
              }
#line 86 "interval.m"
          }
#line 86 "interval.m"
      }
#line 86 "interval.m"
    return backend_libs__interval__succeeded;
#line 86 "interval.m"
  }
#line 86 "interval.m"
}

#line 64 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0(
#line 64 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 64 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 64 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 64 "interval.m"
{
#line 64 "interval.m"
  {
#line 64 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 64 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar1_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 64 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar2_5 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 64 "interval.m"
    {
#line 64 "interval.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__Cast_HeadVar1_4, backend_libs__interval__Cast_HeadVar2_5);
#line 64 "interval.m"
      return;
    }
#line 64 "interval.m"
  }
#line 64 "interval.m"
}

#line 64 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0(
#line 64 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_1,
#line 64 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 64 "interval.m"
{
#line 7550 "backend_libs.interval.c"
  {
#line 7552 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 7555 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 7557 "backend_libs.interval.c"
  }
#line 64 "interval.m"
}

#line 101 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0(
#line 101 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 101 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 101 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 101 "interval.m"
{
#line 101 "interval.m"
  {
#line 101 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 101 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 101 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 101 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 101 "interval.m"
    if (backend_libs__interval__succeeded)
#line 7586 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 101 "interval.m"
    else
#line 101 "interval.m"
      {
#line 101 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 101 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 101 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 101 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 101 "interval.m"
        MR_Word backend_libs__interval__V_8_8;

#line 101 "interval.m"
        {
#line 101 "interval.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], &backend_libs__interval__V_8_8, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
        }
#line 7608 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_8_8 == (MR_Integer) 0);
#line 101 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 101 "interval.m"
        if (backend_libs__interval__succeeded)
#line 101 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_8_8;
#line 101 "interval.m"
        else
#line 101 "interval.m"
          {
#line 101 "interval.m"
            {
#line 101 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[5], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_7_7)));
#line 101 "interval.m"
              return;
            }
#line 101 "interval.m"
          }
#line 101 "interval.m"
      }
#line 101 "interval.m"
  }
#line 101 "interval.m"
}

#line 101 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0(
#line 101 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 101 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 101 "interval.m"
{
#line 101 "interval.m"
  {
#line 101 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 101 "interval.m"
    MR_Integer backend_libs__interval__CastX_7 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 101 "interval.m"
    MR_Integer backend_libs__interval__CastY_8 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 101 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_7 == backend_libs__interval__CastY_8);
#line 101 "interval.m"
    if (backend_libs__interval__succeeded)
#line 101 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 101 "interval.m"
    else
#line 101 "interval.m"
      {
#line 101 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_10_10;
#line 101 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 101 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 101 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 101 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 7675 "backend_libs.interval.c"
        {
#line 7677 "backend_libs.interval.c"
          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__V_3_3)), ((MR_Box) (backend_libs__interval__V_5_5)));
        }
#line 101 "interval.m"
        if (backend_libs__interval__succeeded)
#line 101 "interval.m"
          {
#line 7684 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_10_10 = (MR_Word) &backend_libs__interval_scalar_common_1[5];
#line 7686 "backend_libs.interval.c"
            {
#line 7688 "backend_libs.interval.c"
              return backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_10_10, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
            }
#line 101 "interval.m"
          }
#line 101 "interval.m"
      }
#line 101 "interval.m"
    return backend_libs__interval__succeeded;
#line 101 "interval.m"
  }
#line 101 "interval.m"
}

#line 75 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____anchor_0_0(
#line 75 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 75 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 75 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 75 "interval.m"
{
#line 75 "interval.m"
  {
#line 75 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 75 "interval.m"
    MR_Integer backend_libs__interval__CastX_78 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 75 "interval.m"
    MR_Integer backend_libs__interval__CastY_79 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 75 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_78 == backend_libs__interval__CastY_79);
#line 75 "interval.m"
    if (backend_libs__interval__succeeded)
#line 7726 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "interval.m"
    else
#line 75 "interval.m"
    if ((backend_libs__interval__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 75 "interval.m"
      if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 75 "interval.m"
        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "interval.m"
      else
#line 75 "interval.m"
      if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 75 "interval.m"
        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
      else
#line 75 "interval.m"
      if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7746 "backend_libs.interval.c"
        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
      else
#line 75 "interval.m"
      if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7752 "backend_libs.interval.c"
        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
      else
#line 75 "interval.m"
      if (((((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7758 "backend_libs.interval.c"
        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
      else
#line 7762 "backend_libs.interval.c"
        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
    else
#line 75 "interval.m"
    if ((backend_libs__interval__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 75 "interval.m"
      if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 75 "interval.m"
        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
      else
#line 75 "interval.m"
      if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 75 "interval.m"
        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "interval.m"
      else
#line 75 "interval.m"
      if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7782 "backend_libs.interval.c"
        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
      else
#line 75 "interval.m"
      if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7788 "backend_libs.interval.c"
        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
      else
#line 75 "interval.m"
      if (((((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7794 "backend_libs.interval.c"
        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
      else
#line 7798 "backend_libs.interval.c"
        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
    else
#line 75 "interval.m"
    if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 75 "interval.m"
      {
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));

#line 75 "interval.m"
        if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7813 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7819 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 75 "interval.m"
          {
#line 75 "interval.m"
            MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "interval.m"
            MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "interval.m"
            MR_Word backend_libs__interval__V_24_24;
#line 75 "interval.m"
            MR_Integer backend_libs__interval__V_96_96 = (MR_Integer) backend_libs__interval__V_89_89;
#line 75 "interval.m"
            MR_Integer backend_libs__interval__V_97_97 = (MR_Integer) backend_libs__interval__V_22_22;

#line 75 "interval.m"
            {
#line 75 "interval.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__interval__V_24_24, backend_libs__interval__V_96_96, backend_libs__interval__V_97_97);
            }
#line 7843 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_24_24 == (MR_Integer) 0);
#line 75 "interval.m"
            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 75 "interval.m"
            if (backend_libs__interval__succeeded)
#line 75 "interval.m"
              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_24_24;
#line 75 "interval.m"
            else
#line 75 "interval.m"
              {
#line 75 "interval.m"
                MR_Integer backend_libs__interval__V_98_98 = (MR_Integer) backend_libs__interval__V_88_88;
#line 75 "interval.m"
                MR_Integer backend_libs__interval__V_99_99 = (MR_Integer) backend_libs__interval__V_23_23;

#line 75 "interval.m"
                {
#line 75 "interval.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_98_98, backend_libs__interval__V_99_99);
#line 75 "interval.m"
                  return;
                }
#line 75 "interval.m"
              }
#line 75 "interval.m"
          }
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7875 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if (((((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7881 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
        else
#line 7885 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
      }
#line 75 "interval.m"
    else
#line 75 "interval.m"
    if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 75 "interval.m"
      {
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));

#line 75 "interval.m"
        if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7900 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7906 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7912 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 75 "interval.m"
          {
#line 75 "interval.m"
            MR_Word backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "interval.m"
            MR_Integer backend_libs__interval__V_102_102 = (MR_Integer) backend_libs__interval__V_91_91;
#line 75 "interval.m"
            MR_Integer backend_libs__interval__V_103_103 = (MR_Integer) backend_libs__interval__V_41_41;

#line 75 "interval.m"
            {
#line 75 "interval.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_102_102, backend_libs__interval__V_103_103);
#line 75 "interval.m"
              return;
            }
#line 75 "interval.m"
          }
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if (((((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7940 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
        else
#line 7944 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
      }
#line 75 "interval.m"
    else
#line 75 "interval.m"
    if (((((MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 75 "interval.m"
      {
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "interval.m"
        if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 7961 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7967 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7973 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7979 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if (((((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 75 "interval.m"
          {
#line 75 "interval.m"
            MR_Word backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "interval.m"
            MR_Word backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 2)));
#line 75 "interval.m"
            MR_Word backend_libs__interval__V_62_62;
#line 75 "interval.m"
            MR_Integer backend_libs__interval__V_92_92 = (MR_Integer) backend_libs__interval__V_87_87;
#line 75 "interval.m"
            MR_Integer backend_libs__interval__V_93_93 = (MR_Integer) backend_libs__interval__V_60_60;

#line 75 "interval.m"
            {
#line 75 "interval.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__interval__V_62_62, backend_libs__interval__V_92_92, backend_libs__interval__V_93_93);
            }
#line 8003 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_62_62 == (MR_Integer) 0);
#line 75 "interval.m"
            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 75 "interval.m"
            if (backend_libs__interval__succeeded)
#line 75 "interval.m"
              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_62_62;
#line 75 "interval.m"
            else
#line 75 "interval.m"
              {
#line 75 "interval.m"
                MR_Integer backend_libs__interval__V_94_94 = (MR_Integer) backend_libs__interval__V_86_86;
#line 75 "interval.m"
                MR_Integer backend_libs__interval__V_95_95 = (MR_Integer) backend_libs__interval__V_61_61;

#line 75 "interval.m"
                {
#line 75 "interval.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_94_94, backend_libs__interval__V_95_95);
#line 75 "interval.m"
                  return;
                }
#line 75 "interval.m"
              }
#line 75 "interval.m"
          }
#line 75 "interval.m"
        else
#line 8033 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
      }
#line 75 "interval.m"
    else
#line 75 "interval.m"
      {
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 75 "interval.m"
        if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 8046 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8052 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8058 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8064 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
        else
#line 75 "interval.m"
        if (((((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 8070 "backend_libs.interval.c"
          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
        else
#line 75 "interval.m"
          {
#line 75 "interval.m"
            MR_Word backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "interval.m"
            MR_Integer backend_libs__interval__V_100_100 = (MR_Integer) backend_libs__interval__V_90_90;
#line 75 "interval.m"
            MR_Integer backend_libs__interval__V_101_101 = (MR_Integer) backend_libs__interval__V_77_77;

#line 75 "interval.m"
            {
#line 75 "interval.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_100_100, backend_libs__interval__V_101_101);
#line 75 "interval.m"
              return;
            }
#line 75 "interval.m"
          }
#line 75 "interval.m"
      }
#line 75 "interval.m"
  }
#line 75 "interval.m"
}

#line 75 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0(
#line 75 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 75 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 75 "interval.m"
{
#line 75 "interval.m"
  {
#line 75 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 75 "interval.m"
    MR_Integer backend_libs__interval__CastX_19 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 75 "interval.m"
    MR_Integer backend_libs__interval__CastY_20 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 75 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_19 == backend_libs__interval__CastY_20);
#line 75 "interval.m"
    if (backend_libs__interval__succeeded)
#line 75 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 75 "interval.m"
    else
#line 75 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 75 "interval.m"
      {
#line 75 "interval.m"
        MR_Integer backend_libs__interval__CastX_5 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 75 "interval.m"
        MR_Integer backend_libs__interval__CastY_6 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 75 "interval.m"
        backend_libs__interval__succeeded = (backend_libs__interval__CastY_6 == backend_libs__interval__CastX_5);
#line 75 "interval.m"
      }
#line 75 "interval.m"
    else
#line 75 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 75 "interval.m"
      {
#line 75 "interval.m"
        MR_Integer backend_libs__interval__CastX_3 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 75 "interval.m"
        MR_Integer backend_libs__interval__CastY_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 75 "interval.m"
        backend_libs__interval__succeeded = (backend_libs__interval__CastY_4 == backend_libs__interval__CastX_3);
#line 75 "interval.m"
      }
#line 75 "interval.m"
    else
#line 75 "interval.m"
    if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 75 "interval.m"
      {
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_9_9;
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_10_10;
#line 75 "interval.m"
        MR_Integer backend_libs__interval__V_27_27;
#line 75 "interval.m"
        MR_Integer backend_libs__interval__V_28_28;

#line 75 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 75 "interval.m"
        if (backend_libs__interval__succeeded)
#line 75 "interval.m"
          {
#line 75 "interval.m"
            backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "interval.m"
            backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 8182 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_7_7 == backend_libs__interval__V_9_9);
#line 75 "interval.m"
            if (backend_libs__interval__succeeded)
#line 75 "interval.m"
              {
#line 8188 "backend_libs.interval.c"
                backend_libs__interval__V_27_27 = (MR_Integer) backend_libs__interval__V_8_8;
#line 8190 "backend_libs.interval.c"
                backend_libs__interval__V_28_28 = (MR_Integer) backend_libs__interval__V_10_10;
#line 8192 "backend_libs.interval.c"
                backend_libs__interval__succeeded = (backend_libs__interval__V_27_27 == backend_libs__interval__V_28_28);
#line 75 "interval.m"
              }
#line 75 "interval.m"
          }
#line 75 "interval.m"
      }
#line 75 "interval.m"
    else
#line 75 "interval.m"
    if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 75 "interval.m"
      {
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_12_12;
#line 75 "interval.m"
        MR_Integer backend_libs__interval__V_31_31;
#line 75 "interval.m"
        MR_Integer backend_libs__interval__V_32_32;

#line 75 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 75 "interval.m"
        if (backend_libs__interval__succeeded)
#line 75 "interval.m"
          {
#line 75 "interval.m"
            backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 8223 "backend_libs.interval.c"
            backend_libs__interval__V_31_31 = (MR_Integer) backend_libs__interval__V_11_11;
#line 8225 "backend_libs.interval.c"
            backend_libs__interval__V_32_32 = (MR_Integer) backend_libs__interval__V_12_12;
#line 8227 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_31_31 == backend_libs__interval__V_32_32);
#line 75 "interval.m"
          }
#line 75 "interval.m"
      }
#line 75 "interval.m"
    else
#line 75 "interval.m"
    if (((((MR_tag((MR_Word) backend_libs__interval__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 75 "interval.m"
      {
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__1_1, (MR_Integer) 2)));
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_15_15;
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_16_16;
#line 75 "interval.m"
        MR_Integer backend_libs__interval__V_25_25;
#line 75 "interval.m"
        MR_Integer backend_libs__interval__V_26_26;

#line 75 "interval.m"
        backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 75 "interval.m"
        if (backend_libs__interval__succeeded)
#line 75 "interval.m"
          {
#line 75 "interval.m"
            backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "interval.m"
            backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 8262 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_13_13 == backend_libs__interval__V_15_15);
#line 75 "interval.m"
            if (backend_libs__interval__succeeded)
#line 75 "interval.m"
              {
#line 8268 "backend_libs.interval.c"
                backend_libs__interval__V_25_25 = (MR_Integer) backend_libs__interval__V_14_14;
#line 8270 "backend_libs.interval.c"
                backend_libs__interval__V_26_26 = (MR_Integer) backend_libs__interval__V_16_16;
#line 8272 "backend_libs.interval.c"
                backend_libs__interval__succeeded = (backend_libs__interval__V_25_25 == backend_libs__interval__V_26_26);
#line 75 "interval.m"
              }
#line 75 "interval.m"
          }
#line 75 "interval.m"
      }
#line 75 "interval.m"
    else
#line 75 "interval.m"
      {
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "interval.m"
        MR_Word backend_libs__interval__V_18_18;
#line 75 "interval.m"
        MR_Integer backend_libs__interval__V_29_29;
#line 75 "interval.m"
        MR_Integer backend_libs__interval__V_30_30;

#line 75 "interval.m"
        backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 75 "interval.m"
        if (backend_libs__interval__succeeded)
#line 75 "interval.m"
          {
#line 75 "interval.m"
            backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 8301 "backend_libs.interval.c"
            backend_libs__interval__V_29_29 = (MR_Integer) backend_libs__interval__V_17_17;
#line 8303 "backend_libs.interval.c"
            backend_libs__interval__V_30_30 = (MR_Integer) backend_libs__interval__V_18_18;
#line 8305 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_29_29 == backend_libs__interval__V_30_30);
#line 75 "interval.m"
          }
#line 75 "interval.m"
      }
#line 75 "interval.m"
    return backend_libs__interval__succeeded;
#line 75 "interval.m"
  }
#line 75 "interval.m"
}

#line 1338 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_4(
#line 1338 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1338 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1338 "interval.m"
{
#line 1338 "interval.m"
  {
#line 1338 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1338 "interval.m"
    {
#line 1338 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1338 "interval.m"
      return;
    }
#line 1338 "interval.m"
  }
#line 1338 "interval.m"
}

#line 1334 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_3(
#line 1334 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1334 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 1334 "interval.m"
{
#line 1334 "interval.m"
  {
#line 1334 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 1334 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1334 "interval.m"
    MR_Integer backend_libs__interval__conv1_Num_3;

#line 1334 "interval.m"
    {
#line 1334 "interval.m"
      backend_libs__interval__conv1_Num_3 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 1334 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv1_Num_3));
#line 1334 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 1334 "interval.m"
  }
#line 1334 "interval.m"
}

#line 1338 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_2(
#line 1338 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1338 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1338 "interval.m"
{
#line 1338 "interval.m"
  {
#line 1338 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1338 "interval.m"
    {
#line 1338 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1338 "interval.m"
      return;
    }
#line 1338 "interval.m"
  }
#line 1338 "interval.m"
}

#line 1329 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_1(
#line 1329 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1329 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1329 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2)
#line 1329 "interval.m"
{
#line 1329 "interval.m"
  {
#line 1329 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1329 "interval.m"
    MR_Integer backend_libs__interval__conv0_HeadVar__2_32;

#line 1329 "interval.m"
    {
#line 1329 "interval.m"
      backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1329__1_2_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1), &backend_libs__interval__conv0_HeadVar__2_32);
    }
#line 1329 "interval.m"
    *backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__2_32));
#line 1329 "interval.m"
  }
#line 1329 "interval.m"
}

#line 1321 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0(
#line 1321 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1)
#line 1321 "interval.m"
{
#line 1324 "interval.m"
  {
#line 1324 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1324 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_36_36;
#line 1324 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_37_37;
#line 1324 "interval.m"
    MR_Word backend_libs__interval__Anchor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1324 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1324 "interval.m"
    MR_Word backend_libs__interval__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_5, (MR_Integer) 0)));
#line 1324 "interval.m"
    MR_Word backend_libs__interval__Intervals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_5, (MR_Integer) 1)));
#line 1324 "interval.m"
    MR_Word backend_libs__interval__VarNums_9;
#line 1324 "interval.m"
    MR_Word backend_libs__interval__IntervalList_10;
#line 1324 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 1324 "interval.m"
    MR_Word backend_libs__interval__V_25_25;

#line 1326 "interval.m"
    {
#line 1326 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1327 "interval.m"
    {
#line 1327 "interval.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Anchor_4)));
    }
#line 1328 "interval.m"
    {
#line 1328 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) " =>\n");
    }
#line 1329 "interval.m"
    {
#line 1329 "interval.m"
      backend_libs__interval__V_19_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_7);
    }
#line 8492 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1329 "interval.m"
    {
#line 1329 "interval.m"
      mercury__list__map_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], backend_libs__interval__TypeCtorInfo_36_36, (MR_Word) &backend_libs__interval_scalar_common_2[20], backend_libs__interval__V_19_19, &backend_libs__interval__VarNums_9);
    }
#line 1330 "interval.m"
    {
#line 1330 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "vars [");
    }
#line 1338 "interval.m"
    {
#line 1338 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__VarNums_9, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[21]);
    }
#line 1332 "interval.m"
    {
#line 1332 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "]\nintervals: ");
    }
#line 8514 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_37_37 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 1333 "interval.m"
    {
#line 1333 "interval.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__interval__TypeCtorInfo_37_37, backend_libs__interval__Intervals_8, &backend_libs__interval__IntervalList_10);
    }
#line 1334 "interval.m"
    {
#line 1334 "interval.m"
      backend_libs__interval__V_25_25 = mercury__list__map_2_f_0(backend_libs__interval__TypeCtorInfo_37_37, backend_libs__interval__TypeCtorInfo_36_36, (MR_Word) &backend_libs__interval_scalar_common_2[22], backend_libs__interval__IntervalList_10);
    }
#line 1338 "interval.m"
    {
#line 1338 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__V_25_25, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[23]);
    }
#line 1335 "interval.m"
    {
#line 1335 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1335 "interval.m"
      return;
    }
#line 1324 "interval.m"
  }
#line 1321 "interval.m"
}

#line 1338 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_2(
#line 1338 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1338 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1338 "interval.m"
{
#line 1338 "interval.m"
  {
#line 1338 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1338 "interval.m"
    {
#line 1338 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1338 "interval.m"
      return;
    }
#line 1338 "interval.m"
  }
#line 1338 "interval.m"
}

#line 1316 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_1(
#line 1316 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1316 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1316 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2)
#line 1316 "interval.m"
{
#line 1316 "interval.m"
  {
#line 1316 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1316 "interval.m"
    MR_Integer backend_libs__interval__conv0_HeadVar__2_17;

#line 1316 "interval.m"
    {
#line 1316 "interval.m"
      backend_libs__interval__IntroducedFrom__pred__dump_deletion__1316__1_2_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1), &backend_libs__interval__conv0_HeadVar__2_17);
    }
#line 1316 "interval.m"
    *backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__2_17));
#line 1316 "interval.m"
  }
#line 1316 "interval.m"
}

#line 1313 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0(
#line 1313 "interval.m"
  MR_Word backend_libs__interval__Vars_4)
#line 1313 "interval.m"
{
#line 1315 "interval.m"
  {
#line 1315 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1315 "interval.m"
    MR_Word backend_libs__interval__VarNums_6;
#line 1315 "interval.m"
    MR_Word backend_libs__interval__V_10_10;

#line 1316 "interval.m"
    {
#line 1316 "interval.m"
      backend_libs__interval__V_10_10 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_4);
    }
#line 1316 "interval.m"
    {
#line 1316 "interval.m"
      mercury__list__map_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__interval_scalar_common_2[18], backend_libs__interval__V_10_10, &backend_libs__interval__VarNums_6);
    }
#line 1317 "interval.m"
    {
#line 1317 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) " [");
    }
#line 1338 "interval.m"
    {
#line 1338 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__VarNums_6, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[19]);
    }
#line 1319 "interval.m"
    {
#line 1319 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "]");
#line 1319 "interval.m"
      return;
    }
#line 1315 "interval.m"
  }
#line 1313 "interval.m"
}

#line 1307 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_3(
#line 1307 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1307 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1307 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1307 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1307 "interval.m"
{
#line 1307 "interval.m"
  {
#line 1307 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1307 "interval.m"
    {
#line 1307 "interval.m"
      backend_libs__interval__dump_deletion_3_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
#line 1307 "interval.m"
      return;
    }
#line 1307 "interval.m"
  }
#line 1307 "interval.m"
}

#line 1298 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_2(
#line 1298 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1298 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1298 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2)
#line 1298 "interval.m"
{
#line 1298 "interval.m"
  {
#line 1298 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1298 "interval.m"
    MR_Integer backend_libs__interval__conv5_HeadVar__2_155;

#line 1298 "interval.m"
    {
#line 1298 "interval.m"
      backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1298__1_2_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1), &backend_libs__interval__conv5_HeadVar__2_155);
    }
#line 1298 "interval.m"
    *backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv5_HeadVar__2_155));
#line 1298 "interval.m"
  }
#line 1298 "interval.m"
}

#line 1276 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_1(
#line 1276 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1276 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 1276 "interval.m"
{
#line 1276 "interval.m"
  {
#line 1276 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 1276 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1276 "interval.m"
    MR_Integer backend_libs__interval__conv1_Num_3;

#line 1276 "interval.m"
    {
#line 1276 "interval.m"
      backend_libs__interval__conv1_Num_3 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 1276 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv1_Num_3));
#line 1276 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 1276 "interval.m"
  }
#line 1276 "interval.m"
}

#line 1268 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0(
#line 1268 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_5,
#line 1268 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6)
#line 1268 "interval.m"
{
#line 1271 "interval.m"
  {
#line 1271 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1271 "interval.m"
    MR_Integer backend_libs__interval__V_19_19;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__SuccIds_8;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_23_23;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 1275 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 1275 "interval.m"
    MR_Box backend_libs__interval__conv0_SuccIds_8;
#line 1287 "interval.m"
    MR_Word backend_libs__interval__Start_10;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_93_93;
#line 1283 "interval.m"
    MR_Word backend_libs__interval__V_94_94;
#line 1283 "interval.m"
    MR_Box backend_libs__interval__conv2_Start_10;
#line 1294 "interval.m"
    MR_Word backend_libs__interval__End_11;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_95_95;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_96_96;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_97_97;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_98_98;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_99_99;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_100_100;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_101_101;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_102_102;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_103_103;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_104_104;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_105_105;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_106_106;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_107_107;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_108_108;
#line 1290 "interval.m"
    MR_Word backend_libs__interval__V_109_109;
#line 1290 "interval.m"
    MR_Box backend_libs__interval__conv3_End_11;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__Vars_12;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_110_110;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_111_111;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_112_112;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_113_113;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_114_114;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_115_115;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_116_116;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_117_117;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_118_118;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_119_119;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_120_120;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_121_121;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_122_122;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_123_123;
#line 1297 "interval.m"
    MR_Word backend_libs__interval__V_124_124;
#line 1297 "interval.m"
    MR_Box backend_libs__interval__conv4_Vars_12;
#line 1309 "interval.m"
    MR_Word backend_libs__interval__Deletions_14;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_125_125;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_126_126;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_127_127;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_128_128;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_129_129;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_130_130;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_131_131;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_132_132;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_133_133;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_134_134;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_135_135;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_136_136;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_137_137;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_138_138;
#line 1305 "interval.m"
    MR_Word backend_libs__interval__V_139_139;
#line 1305 "interval.m"
    MR_Box backend_libs__interval__conv6_Deletions_14;

#line 1272 "interval.m"
    {
#line 1272 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\ninterval ");
    }
#line 1273 "interval.m"
    {
#line 1273 "interval.m"
      backend_libs__interval__V_19_19 = backend_libs__interval__interval_id_to_int_1_f_0(backend_libs__interval__IntervalId_6);
    }
#line 1273 "interval.m"
    {
#line 1273 "interval.m"
      mercury__io__write_int_3_p_0(backend_libs__interval__V_19_19);
    }
#line 1274 "interval.m"
    {
#line 1274 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 1275 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1275 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1275 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1275 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1275 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1275 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1275 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1275 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1275 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1275 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1275 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1275 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1275 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1275 "interval.m"
    backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1275 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1275 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1275 "interval.m"
    {
#line 1275 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__V_23_23, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv0_SuccIds_8);
    }
#line 1275 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1275 "interval.m"
      {
#line 1275 "interval.m"
        backend_libs__interval__SuccIds_8 = ((MR_Word) backend_libs__interval__conv0_SuccIds_8);
#line 1275 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1275 "interval.m"
      }
#line 1280 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1276 "interval.m"
      {
#line 1276 "interval.m"
        MR_Word backend_libs__interval__SuccNums_9;

#line 1276 "interval.m"
        {
#line 1276 "interval.m"
          backend_libs__interval__SuccNums_9 = mercury__list__map_2_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__interval_scalar_common_2[15], backend_libs__interval__SuccIds_8);
        }
#line 1277 "interval.m"
        {
#line 1277 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "succ [");
        }
#line 1278 "interval.m"
        {
#line 1278 "interval.m"
          backend_libs__interval__write_int_list_3_p_0(backend_libs__interval__SuccNums_9);
        }
#line 1279 "interval.m"
        {
#line 1279 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n");
        }
#line 1276 "interval.m"
      }
#line 1280 "interval.m"
    else
#line 1281 "interval.m"
      {
#line 1281 "interval.m"
        {
#line 1281 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no succ\n");
        }
#line 1281 "interval.m"
      }
#line 1283 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1283 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1283 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1283 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1283 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1283 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1283 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1283 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1283 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1283 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1283 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1283 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1283 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1283 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1283 "interval.m"
    backend_libs__interval__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1283 "interval.m"
    backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1283 "interval.m"
    {
#line 1283 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, backend_libs__interval__V_32_32, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv2_Start_10);
    }
#line 1283 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1283 "interval.m"
      {
#line 1283 "interval.m"
        backend_libs__interval__Start_10 = ((MR_Word) backend_libs__interval__conv2_Start_10);
#line 1283 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1283 "interval.m"
      }
#line 1287 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1284 "interval.m"
      {
#line 1284 "interval.m"
        {
#line 1284 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "start ");
        }
#line 1285 "interval.m"
        {
#line 1285 "interval.m"
          mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Start_10)));
        }
#line 1286 "interval.m"
        {
#line 1286 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1284 "interval.m"
      }
#line 1287 "interval.m"
    else
#line 1288 "interval.m"
      {
#line 1288 "interval.m"
        {
#line 1288 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no start\n");
        }
#line 1288 "interval.m"
      }
#line 1290 "interval.m"
    backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1290 "interval.m"
    backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1290 "interval.m"
    backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1290 "interval.m"
    backend_libs__interval__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1290 "interval.m"
    backend_libs__interval__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1290 "interval.m"
    backend_libs__interval__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1290 "interval.m"
    backend_libs__interval__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1290 "interval.m"
    backend_libs__interval__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1290 "interval.m"
    backend_libs__interval__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1290 "interval.m"
    backend_libs__interval__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1290 "interval.m"
    backend_libs__interval__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1290 "interval.m"
    backend_libs__interval__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1290 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1290 "interval.m"
    backend_libs__interval__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1290 "interval.m"
    backend_libs__interval__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1290 "interval.m"
    backend_libs__interval__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1290 "interval.m"
    {
#line 1290 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, backend_libs__interval__V_40_40, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv3_End_11);
    }
#line 1290 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1290 "interval.m"
      {
#line 1290 "interval.m"
        backend_libs__interval__End_11 = ((MR_Word) backend_libs__interval__conv3_End_11);
#line 1290 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1290 "interval.m"
      }
#line 1294 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1291 "interval.m"
      {
#line 1291 "interval.m"
        {
#line 1291 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "end ");
        }
#line 1292 "interval.m"
        {
#line 1292 "interval.m"
          mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__End_11)));
        }
#line 1293 "interval.m"
        {
#line 1293 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1291 "interval.m"
      }
#line 1294 "interval.m"
    else
#line 1295 "interval.m"
      {
#line 1295 "interval.m"
        {
#line 1295 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no end\n");
        }
#line 1295 "interval.m"
      }
#line 1297 "interval.m"
    backend_libs__interval__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1297 "interval.m"
    backend_libs__interval__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1297 "interval.m"
    backend_libs__interval__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1297 "interval.m"
    backend_libs__interval__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1297 "interval.m"
    backend_libs__interval__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1297 "interval.m"
    backend_libs__interval__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1297 "interval.m"
    backend_libs__interval__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1297 "interval.m"
    backend_libs__interval__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1297 "interval.m"
    backend_libs__interval__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1297 "interval.m"
    backend_libs__interval__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1297 "interval.m"
    backend_libs__interval__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1297 "interval.m"
    backend_libs__interval__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1297 "interval.m"
    backend_libs__interval__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1297 "interval.m"
    backend_libs__interval__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1297 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1297 "interval.m"
    backend_libs__interval__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1297 "interval.m"
    {
#line 1297 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__V_48_48, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv4_Vars_12);
    }
#line 1297 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1297 "interval.m"
      {
#line 1297 "interval.m"
        backend_libs__interval__Vars_12 = ((MR_Word) backend_libs__interval__conv4_Vars_12);
#line 1297 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1297 "interval.m"
      }
#line 1302 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1298 "interval.m"
      {
#line 1298 "interval.m"
        MR_Word backend_libs__interval__VarNums_13;
#line 1298 "interval.m"
        MR_Word backend_libs__interval__V_50_50;

#line 1298 "interval.m"
        {
#line 1298 "interval.m"
          backend_libs__interval__V_50_50 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_12);
        }
#line 1298 "interval.m"
        {
#line 1298 "interval.m"
          mercury__list__map_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__interval_scalar_common_2[16], backend_libs__interval__V_50_50, &backend_libs__interval__VarNums_13);
        }
#line 1299 "interval.m"
        {
#line 1299 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "vars [");
        }
#line 1300 "interval.m"
        {
#line 1300 "interval.m"
          backend_libs__interval__write_int_list_3_p_0(backend_libs__interval__VarNums_13);
        }
#line 1301 "interval.m"
        {
#line 1301 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n");
        }
#line 1298 "interval.m"
      }
#line 1302 "interval.m"
    else
#line 1303 "interval.m"
      {
#line 1303 "interval.m"
        {
#line 1303 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no vars\n");
        }
#line 1303 "interval.m"
      }
#line 1305 "interval.m"
    backend_libs__interval__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1305 "interval.m"
    backend_libs__interval__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1305 "interval.m"
    backend_libs__interval__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1305 "interval.m"
    backend_libs__interval__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1305 "interval.m"
    backend_libs__interval__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1305 "interval.m"
    backend_libs__interval__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1305 "interval.m"
    backend_libs__interval__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1305 "interval.m"
    backend_libs__interval__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1305 "interval.m"
    backend_libs__interval__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1305 "interval.m"
    backend_libs__interval__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1305 "interval.m"
    backend_libs__interval__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1305 "interval.m"
    backend_libs__interval__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1305 "interval.m"
    backend_libs__interval__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1305 "interval.m"
    backend_libs__interval__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1305 "interval.m"
    backend_libs__interval__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1305 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1305 "interval.m"
    {
#line 1305 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[2], backend_libs__interval__V_58_58, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv6_Deletions_14);
    }
#line 1305 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1305 "interval.m"
      {
#line 1305 "interval.m"
        backend_libs__interval__Deletions_14 = ((MR_Word) backend_libs__interval__conv6_Deletions_14);
#line 1305 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1305 "interval.m"
      }
#line 1309 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1306 "interval.m"
      {
#line 1307 "interval.m"
        MR_Box backend_libs__interval__conv7_STATE_VARIABLE_IO_62_62;

#line 1306 "interval.m"
        {
#line 1306 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "deletions");
        }
#line 1307 "interval.m"
        {
#line 1307 "interval.m"
          mercury__list__foldl_4_p_2((MR_Word) &backend_libs__interval_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &backend_libs__interval_scalar_common_2[17], backend_libs__interval__Deletions_14, ((MR_Box) ((MR_Integer) 0)), &backend_libs__interval__conv7_STATE_VARIABLE_IO_62_62);
        }
#line 1308 "interval.m"
        {
#line 1308 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1308 "interval.m"
          return;
        }
#line 1306 "interval.m"
      }
#line 1309 "interval.m"
    else
#line 1309 "interval.m"
      {
#line 1309 "interval.m"
      }
#line 1271 "interval.m"
  }
#line 1268 "interval.m"
}

#line 1241 "interval.m"
static void MR_CALL 
backend_libs__interval__construct_anchors_4_p_0(
#line 1241 "interval.m"
  MR_Word backend_libs__interval__Construct_5,
#line 1241 "interval.m"
  MR_Word backend_libs__interval__Goal_6,
#line 1241 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_7,
#line 1241 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_8)
#line 1241 "interval.m"
{
#line 1244 "interval.m"
  {
#line 1244 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1244 "interval.m"
    MR_Word backend_libs__interval__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_6, (MR_Integer) 1)));
#line 1244 "interval.m"
    MR_Word backend_libs__interval__GoalId_11;
#line 1245 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_6, (MR_Integer) 0)));

#line 1246 "interval.m"
    {
#line 1246 "interval.m"
      backend_libs__interval__GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_10);
    }
#line 1247 "interval.m"
    {
#line 1247 "interval.m"
      MR_Word base;
#line 1247 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1247 "interval.m"
      *backend_libs__interval__StartAnchor_7 = base;
#line 1247 "interval.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Construct_5));
#line 1247 "interval.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__GoalId_11));
#line 1247 "interval.m"
    }
#line 1248 "interval.m"
    {
#line 1248 "interval.m"
      MR_Word base;
#line 1248 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1248 "interval.m"
      *backend_libs__interval__EndAnchor_8 = base;
#line 1248 "interval.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1248 "interval.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (backend_libs__interval__Construct_5));
#line 1248 "interval.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (backend_libs__interval__GoalId_11));
#line 1248 "interval.m"
    }
#line 1244 "interval.m"
  }
#line 1241 "interval.m"
}

#line 1226 "interval.m"
static void MR_CALL 
backend_libs__interval__build_headvar_subst_4_p_0(
#line 1226 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1226 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 1226 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_Subst_0_3,
#line 1226 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_Subst_4)
#line 1226 "interval.m"
{
#line 1229 "interval.m"
  while (MR_TRUE)
#line 1229 "interval.m"
    {
#line 1229 "interval.m"
      /* tailcall optimized into a loop */
#line 1229 "interval.m"
      {
#line 1229 "interval.m"
        MR_bool backend_libs__interval__succeeded;

#line 1229 "interval.m"
        if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1229 "interval.m"
          *backend_libs__interval__STATE_VARIABLE_Subst_4 = backend_libs__interval__STATE_VARIABLE_Subst_0_3;
#line 1229 "interval.m"
        else
#line 1230 "interval.m"
          {
#line 1230 "interval.m"
            MR_Word backend_libs__interval__HeadVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1230 "interval.m"
            MR_Word backend_libs__interval__HeadVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1230 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_Subst_17_17;
#line 1234 "interval.m"
            MR_Word backend_libs__interval__Replacement_13;
#line 1231 "interval.m"
            MR_Word backend_libs__interval__TypeInfo_19_19 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1231 "interval.m"
            MR_Box backend_libs__interval__conv0_Replacement_13;

#line 1231 "interval.m"
            {
#line 1231 "interval.m"
              backend_libs__interval__succeeded = mercury__map__search_3_p_0(backend_libs__interval__TypeInfo_19_19, backend_libs__interval__TypeInfo_19_19, backend_libs__interval__HeadVar__2_2, ((MR_Box) (backend_libs__interval__HeadVar_9)), &backend_libs__interval__conv0_Replacement_13);
            }
#line 1231 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1231 "interval.m"
              {
#line 1231 "interval.m"
                backend_libs__interval__Replacement_13 = ((MR_Word) backend_libs__interval__conv0_Replacement_13);
#line 1231 "interval.m"
                backend_libs__interval__succeeded = MR_TRUE;
#line 1231 "interval.m"
              }
#line 1234 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1232 "interval.m"
              {
#line 1232 "interval.m"
                MR_Word backend_libs__interval__TypeInfo_20_20 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1232 "interval.m"
                MR_Word backend_libs__interval__STATE_VARIABLE_Subst_16_16;

#line 1232 "interval.m"
                {
#line 1232 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_20_20, backend_libs__interval__TypeInfo_20_20, ((MR_Box) (backend_libs__interval__Replacement_13)), ((MR_Box) (backend_libs__interval__HeadVar_9)), backend_libs__interval__STATE_VARIABLE_Subst_0_3, &backend_libs__interval__STATE_VARIABLE_Subst_16_16);
                }
#line 1233 "interval.m"
                {
#line 1233 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_20_20, backend_libs__interval__TypeInfo_20_20, ((MR_Box) (backend_libs__interval__HeadVar_9)), ((MR_Box) (backend_libs__interval__Replacement_13)), backend_libs__interval__STATE_VARIABLE_Subst_16_16, &backend_libs__interval__STATE_VARIABLE_Subst_17_17);
                }
#line 1232 "interval.m"
              }
#line 1234 "interval.m"
            else
#line 1234 "interval.m"
              backend_libs__interval__STATE_VARIABLE_Subst_17_17 = backend_libs__interval__STATE_VARIABLE_Subst_0_3;
#line 1237 "interval.m"
            /* direct tailcall eliminated */
#line 1237 "interval.m"
            {
#line 1237 "interval.m"
              MR_Word backend_libs__interval__HeadVar__1__tmp_copy_1 = backend_libs__interval__HeadVars_10;
#line 1237 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_Subst_0__tmp_copy_3 = backend_libs__interval__STATE_VARIABLE_Subst_17_17;

#line 1237 "interval.m"
              backend_libs__interval__STATE_VARIABLE_Subst_0_3 = backend_libs__interval__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 1237 "interval.m"
              backend_libs__interval__HeadVar__1_1 = backend_libs__interval__HeadVar__1__tmp_copy_1;
#line 1237 "interval.m"
            }
#line 1237 "interval.m"
            continue;
#line 1230 "interval.m"
          }
#line 1229 "interval.m"
      }
#line 1229 "interval.m"
      break;
#line 1229 "interval.m"
    }
#line 1226 "interval.m"
}

#line 1201 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_cases_7_p_0(
#line 1201 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1201 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1201 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1201 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1201 "interval.m"
  MR_Word backend_libs__interval__VarRename0_5,
#line 1201 "interval.m"
  MR_Word backend_libs__interval__InsertMap_6,
#line 1201 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_7)
#line 1201 "interval.m"
{
#line 1205 "interval.m"
  {
#line 1205 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1205 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1205 "interval.m"
      {
#line 1205 "interval.m"
        *backend_libs__interval__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1205 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_4 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_3;
#line 1205 "interval.m"
      }
#line 1205 "interval.m"
    else
#line 1207 "interval.m"
      {
#line 1207 "interval.m"
        MR_Word backend_libs__interval__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1207 "interval.m"
        MR_Word backend_libs__interval__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1207 "interval.m"
        MR_Word backend_libs__interval__Case_16;
#line 1207 "interval.m"
        MR_Word backend_libs__interval__Cases_17;
#line 1207 "interval.m"
        MR_Word backend_libs__interval__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case0_14, (MR_Integer) 0)));
#line 1207 "interval.m"
        MR_Word backend_libs__interval__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case0_14, (MR_Integer) 1)));
#line 1207 "interval.m"
        MR_Word backend_libs__interval__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case0_14, (MR_Integer) 2)));
#line 1207 "interval.m"
        MR_Word backend_libs__interval__Goal_25;
#line 1207 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_29_29;
#line 1209 "interval.m"
        MR_Word backend_libs__interval__V_26_26;

#line 1209 "interval.m"
        {
#line 1209 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Goal0_24, &backend_libs__interval__Goal_25, backend_libs__interval__STATE_VARIABLE_VarInfo_0_3, &backend_libs__interval__STATE_VARIABLE_VarInfo_29_29, backend_libs__interval__VarRename0_5, &backend_libs__interval__V_26_26, backend_libs__interval__InsertMap_6, backend_libs__interval__MaybeFeature_7);
        }
#line 1211 "interval.m"
        {
#line 1211 "interval.m"
          backend_libs__interval__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1211 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Case_16, 0) = ((MR_Box) (backend_libs__interval__MainConsId_22));
#line 1211 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Case_16, 1) = ((MR_Box) (backend_libs__interval__OtherConsIds_23));
#line 1211 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Case_16, 2) = ((MR_Box) (backend_libs__interval__Goal_25));
#line 1211 "interval.m"
        }
#line 1212 "interval.m"
        {
#line 1212 "interval.m"
          backend_libs__interval__record_decisions_in_cases_7_p_0(backend_libs__interval__Cases0_15, &backend_libs__interval__Cases_17, backend_libs__interval__STATE_VARIABLE_VarInfo_29_29, backend_libs__interval__STATE_VARIABLE_VarInfo_4, backend_libs__interval__VarRename0_5, backend_libs__interval__InsertMap_6, backend_libs__interval__MaybeFeature_7);
        }
#line 1206 "interval.m"
        {
#line 1206 "interval.m"
          MR_Word base;
#line 1206 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1206 "interval.m"
          *backend_libs__interval__HeadVar__2_2 = base;
#line 1206 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Case_16));
#line 1206 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__Cases_17));
#line 1206 "interval.m"
        }
#line 1207 "interval.m"
      }
#line 1205 "interval.m"
  }
#line 1201 "interval.m"
}

#line 1163 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_conj_9_p_0(
#line 1163 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1163 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1163 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1163 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1163 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_5,
#line 1163 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_6,
#line 1163 "interval.m"
  MR_Word backend_libs__interval__ConjType_7,
#line 1163 "interval.m"
  MR_Word backend_libs__interval__InsertMap_8,
#line 1163 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_9)
#line 1163 "interval.m"
{
#line 1168 "interval.m"
  {
#line 1168 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1168 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1168 "interval.m"
      {
#line 1168 "interval.m"
        *backend_libs__interval__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1168 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_6 = backend_libs__interval__STATE_VARIABLE_VarRename_0_5;
#line 1168 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_4 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_3;
#line 1168 "interval.m"
      }
#line 1168 "interval.m"
    else
#line 1170 "interval.m"
      {
#line 1170 "interval.m"
        MR_Word backend_libs__interval__Goal0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1170 "interval.m"
        MR_Word backend_libs__interval__Goals0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1170 "interval.m"
        MR_Word backend_libs__interval__Goal_27;
#line 1170 "interval.m"
        MR_Word backend_libs__interval__TailGoals_28;
#line 1170 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_36_36;
#line 1170 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_37_37;
#line 1180 "interval.m"
        MR_Word backend_libs__interval__SubGoals_30;
#line 1176 "interval.m"
        MR_Word backend_libs__interval__InnerConjType_29;
#line 1176 "interval.m"
        MR_Word backend_libs__interval__V_40_40;
#line 1176 "interval.m"
        MR_Word backend_libs__interval__V_31_31;

#line 1171 "interval.m"
        {
#line 1171 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Goal0_19, &backend_libs__interval__Goal_27, backend_libs__interval__STATE_VARIABLE_VarInfo_0_3, &backend_libs__interval__STATE_VARIABLE_VarInfo_36_36, backend_libs__interval__STATE_VARIABLE_VarRename_0_5, &backend_libs__interval__STATE_VARIABLE_VarRename_37_37, backend_libs__interval__InsertMap_8, backend_libs__interval__MaybeFeature_9);
        }
#line 1173 "interval.m"
        {
#line 1173 "interval.m"
          backend_libs__interval__record_decisions_in_conj_9_p_0(backend_libs__interval__Goals0_20, &backend_libs__interval__TailGoals_28, backend_libs__interval__STATE_VARIABLE_VarInfo_36_36, backend_libs__interval__STATE_VARIABLE_VarInfo_4, backend_libs__interval__STATE_VARIABLE_VarRename_37_37, backend_libs__interval__STATE_VARIABLE_VarRename_6, backend_libs__interval__ConjType_7, backend_libs__interval__InsertMap_8, backend_libs__interval__MaybeFeature_9);
        }
#line 1176 "interval.m"
        backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_27, (MR_Integer) 0)));
#line 1176 "interval.m"
        backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_27, (MR_Integer) 1)));
#line 1176 "interval.m"
        backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__V_40_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__V_40_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1176 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1176 "interval.m"
          {
#line 1176 "interval.m"
            backend_libs__interval__InnerConjType_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__V_40_40, (MR_Integer) 1)));
#line 1176 "interval.m"
            backend_libs__interval__SubGoals_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__V_40_40, (MR_Integer) 2)));
#line 1177 "interval.m"
            backend_libs__interval__succeeded = (backend_libs__interval__ConjType_7 == backend_libs__interval__InnerConjType_29);
#line 1176 "interval.m"
          }
#line 1180 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1179 "interval.m"
          {
#line 1179 "interval.m"
            {
#line 1179 "interval.m"
              *backend_libs__interval__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, backend_libs__interval__SubGoals_30, backend_libs__interval__TailGoals_28);
            }
#line 1179 "interval.m"
          }
#line 1180 "interval.m"
        else
#line 1181 "interval.m"
          {
#line 1181 "interval.m"
            MR_Word base;
#line 1181 "interval.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "interval.m"
            *backend_libs__interval__HeadVar__2_2 = base;
#line 1181 "interval.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Goal_27));
#line 1181 "interval.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__TailGoals_28));
#line 1181 "interval.m"
          }
#line 1170 "interval.m"
      }
#line 1168 "interval.m"
  }
#line 1163 "interval.m"
}

#line 1132 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_at_call_site_9_p_0(
#line 1132 "interval.m"
  MR_Word backend_libs__interval__Goal0_10,
#line 1132 "interval.m"
  MR_Word * backend_libs__interval__Goal_11,
#line 1132 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_25,
#line 1132 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_26,
#line 1132 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_27,
#line 1132 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_28,
#line 1132 "interval.m"
  MR_Word backend_libs__interval__MustHaveMap_14,
#line 1132 "interval.m"
  MR_Word backend_libs__interval__InsertMap_15,
#line 1132 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_16)
#line 1132 "interval.m"
{
#line 1138 "interval.m"
  {
#line 1138 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1138 "interval.m"
    MR_Word backend_libs__interval__GoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_10, (MR_Integer) 1)));
#line 1138 "interval.m"
    MR_Word backend_libs__interval__Goal1_19;
#line 1139 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_10, (MR_Integer) 0)));
#line 1143 "interval.m"
    MR_Word backend_libs__interval__MaybeNeedAcrossCall_20;
#line 1144 "interval.m"
    MR_Word backend_libs__interval___NeedAcrossCall_21;

#line 1140 "interval.m"
    {
#line 1140 "interval.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__STATE_VARIABLE_VarRename_0_27, backend_libs__interval__Goal0_10, &backend_libs__interval__Goal1_19);
    }
#line 1142 "interval.m"
    {
#line 1142 "interval.m"
      backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo0_18, &backend_libs__interval__MaybeNeedAcrossCall_20);
    }
#line 1143 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1143 "interval.m"
      {
#line 1144 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__MaybeNeedAcrossCall_20)) == (MR_mktag((MR_Integer) 1)));
#line 1144 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1144 "interval.m"
          backend_libs__interval___NeedAcrossCall_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeNeedAcrossCall_20, (MR_Integer) 0)));
#line 1143 "interval.m"
      }
#line 1151 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1146 "interval.m"
      {
#line 1146 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_22_54;
#line 1146 "interval.m"
        MR_Word backend_libs__interval__GoalId_22;
#line 1146 "interval.m"
        MR_Word backend_libs__interval__Anchor_23;
#line 1146 "interval.m"
        MR_Word backend_libs__interval__Inserts_24;
#line 1146 "interval.m"
        MR_Word backend_libs__interval__InsertGoals_48;
#line 1146 "interval.m"
        MR_Word backend_libs__interval__BranchesGoalInfo_50;
#line 1146 "interval.m"
        MR_Word backend_libs__interval__V_52_52;
#line 1146 "interval.m"
        MR_Word backend_libs__interval__V_53_53;
#line 1035 "interval.m"
        MR_Word backend_libs__interval__InsertsPrime_37;
#line 1033 "interval.m"
        MR_Box backend_libs__interval__conv0_InsertsPrime_37;
#line 1047 "interval.m"
        MR_Word backend_libs__interval__V_49_49;

#line 1146 "interval.m"
        {
#line 1146 "interval.m"
          backend_libs__interval__GoalId_22 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo0_18);
        }
#line 1147 "interval.m"
        {
#line 1147 "interval.m"
          backend_libs__interval__Anchor_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__Anchor_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1147 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__Anchor_23, 1) = ((MR_Box) (backend_libs__interval__GoalId_22));
#line 1147 "interval.m"
        }
#line 1033 "interval.m"
        {
#line 1033 "interval.m"
          backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval_scalar_common_1[4], backend_libs__interval__InsertMap_15, ((MR_Box) (backend_libs__interval__Anchor_23)), &backend_libs__interval__conv0_InsertsPrime_37);
        }
#line 1033 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1033 "interval.m"
          {
#line 1033 "interval.m"
            backend_libs__interval__InsertsPrime_37 = ((MR_Word) backend_libs__interval__conv0_InsertsPrime_37);
#line 1033 "interval.m"
            backend_libs__interval__succeeded = MR_TRUE;
#line 1033 "interval.m"
          }
#line 1035 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1034 "interval.m"
          backend_libs__interval__Inserts_24 = backend_libs__interval__InsertsPrime_37;
#line 1035 "interval.m"
        else
#line 1036 "interval.m"
          backend_libs__interval__Inserts_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9913 "backend_libs.interval.c"
        backend_libs__interval__TypeInfo_22_54 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1045 "interval.m"
        {
#line 1045 "interval.m"
          backend_libs__interval__V_52_52 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_22_54, backend_libs__interval__TypeInfo_22_54);
        }
#line 1045 "interval.m"
        {
#line 1045 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_0_25, backend_libs__interval__STATE_VARIABLE_VarInfo_26, backend_libs__interval__V_52_52, backend_libs__interval__STATE_VARIABLE_VarRename_28, backend_libs__interval__Inserts_24, backend_libs__interval__MaybeFeature_16, &backend_libs__interval__InsertGoals_48);
        }
#line 1047 "interval.m"
        backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_19, (MR_Integer) 0)));
#line 1047 "interval.m"
        backend_libs__interval__BranchesGoalInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_19, (MR_Integer) 1)));
#line 1048 "interval.m"
        {
#line 1048 "interval.m"
          backend_libs__interval__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_53_53, 0) = ((MR_Box) (backend_libs__interval__Goal1_19));
#line 1048 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_53_53, 1) = ((MR_Box) (backend_libs__interval__InsertGoals_48));
#line 1048 "interval.m"
        }
#line 1048 "interval.m"
        {
#line 1048 "interval.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_53_53, backend_libs__interval__BranchesGoalInfo_50, backend_libs__interval__Goal_11);
#line 1048 "interval.m"
          return;
        }
#line 1146 "interval.m"
      }
#line 1151 "interval.m"
    else
#line 1155 "interval.m"
      {
#line 1155 "interval.m"
        if ((backend_libs__interval__MustHaveMap_14 == (MR_Integer) 0))
#line 1154 "interval.m"
          *backend_libs__interval__Goal_11 = backend_libs__interval__Goal1_19;
#line 1155 "interval.m"
        else
#line 1156 "interval.m"
          {
#line 1157 "interval.m"
            {
#line 1157 "interval.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.record_decisions_at_call_site\'/9", (MR_String) "no save map");
#line 1157 "interval.m"
              return;
            }
#line 1156 "interval.m"
          }
#line 1155 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_28 = backend_libs__interval__STATE_VARIABLE_VarRename_0_27;
#line 1155 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_26 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_25;
#line 1155 "interval.m"
      }
#line 1138 "interval.m"
  }
#line 1132 "interval.m"
}

#line 1101 "interval.m"
static void MR_CALL 
backend_libs__interval__create_shadow_vars_10_p_0(
#line 1101 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1101 "interval.m"
  MR_Word backend_libs__interval__VarsToExtract_2,
#line 1101 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_0_3,
#line 1101 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarSet_4,
#line 1101 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_0_5,
#line 1101 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarTypes_6,
#line 1101 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_7,
#line 1101 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_8,
#line 1101 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_0_9,
#line 1101 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VoidRename_10)
#line 1101 "interval.m"
{
#line 1106 "interval.m"
  while (MR_TRUE)
#line 1106 "interval.m"
    {
#line 1106 "interval.m"
      /* tailcall optimized into a loop */
#line 1106 "interval.m"
      {
#line 1106 "interval.m"
        MR_bool backend_libs__interval__succeeded;

#line 1106 "interval.m"
        if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1106 "interval.m"
          {
#line 1106 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VoidRename_10 = backend_libs__interval__STATE_VARIABLE_VoidRename_0_9;
#line 1106 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarRename_8 = backend_libs__interval__STATE_VARIABLE_VarRename_0_7;
#line 1106 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarTypes_6 = backend_libs__interval__STATE_VARIABLE_VarTypes_0_5;
#line 1106 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarSet_4 = backend_libs__interval__STATE_VARIABLE_VarSet_0_3;
#line 1106 "interval.m"
          }
#line 1106 "interval.m"
        else
#line 1108 "interval.m"
          {
#line 1108 "interval.m"
            MR_Word backend_libs__interval__TypeCtorInfo_32_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1108 "interval.m"
            MR_Word backend_libs__interval__Arg_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1108 "interval.m"
            MR_Word backend_libs__interval__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1108 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_39_39;
#line 1108 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_40_40;
#line 1108 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_41_41;
#line 1108 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_42_42;
#line 1108 "interval.m"
            MR_String backend_libs__interval__Name_61;
#line 1108 "interval.m"
            MR_Word backend_libs__interval__Shadow_62;
#line 1108 "interval.m"
            MR_Word backend_libs__interval__Type_63;

#line 1120 "interval.m"
            {
#line 1120 "interval.m"
              mercury__varset__lookup_name_3_p_0(backend_libs__interval__TypeCtorInfo_32_68, backend_libs__interval__STATE_VARIABLE_VarSet_0_3, backend_libs__interval__Arg_24, &backend_libs__interval__Name_61);
            }
#line 1121 "interval.m"
            {
#line 1121 "interval.m"
              mercury__varset__new_named_var_4_p_0(backend_libs__interval__TypeCtorInfo_32_68, backend_libs__interval__Name_61, &backend_libs__interval__Shadow_62, backend_libs__interval__STATE_VARIABLE_VarSet_0_3, &backend_libs__interval__STATE_VARIABLE_VarSet_39_39);
            }
#line 1122 "interval.m"
            {
#line 1122 "interval.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(backend_libs__interval__STATE_VARIABLE_VarTypes_0_5, backend_libs__interval__Arg_24, &backend_libs__interval__Type_63);
            }
#line 1123 "interval.m"
            {
#line 1123 "interval.m"
              parse_tree__prog_data__add_var_type_4_p_0(backend_libs__interval__Shadow_62, backend_libs__interval__Type_63, backend_libs__interval__STATE_VARIABLE_VarTypes_0_5, &backend_libs__interval__STATE_VARIABLE_VarTypes_40_40);
            }
#line 1124 "interval.m"
            {
#line 1124 "interval.m"
              backend_libs__interval__succeeded = parse_tree__set_of_var__member_2_p_0(backend_libs__interval__TypeCtorInfo_32_68, backend_libs__interval__VarsToExtract_2, backend_libs__interval__Arg_24);
            }
#line 1126 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1125 "interval.m"
              {
#line 1125 "interval.m"
                MR_Word backend_libs__interval__TypeInfo_33_69 = (MR_Word) &backend_libs__interval_scalar_common_1[0];

#line 1125 "interval.m"
                {
#line 1125 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_33_69, backend_libs__interval__TypeInfo_33_69, ((MR_Box) (backend_libs__interval__Arg_24)), ((MR_Box) (backend_libs__interval__Shadow_62)), backend_libs__interval__STATE_VARIABLE_VarRename_0_7, &backend_libs__interval__STATE_VARIABLE_VarRename_41_41);
                }
#line 1125 "interval.m"
                backend_libs__interval__STATE_VARIABLE_VoidRename_42_42 = backend_libs__interval__STATE_VARIABLE_VoidRename_0_9;
#line 1125 "interval.m"
              }
#line 1126 "interval.m"
            else
#line 1127 "interval.m"
              {
#line 1127 "interval.m"
                MR_Word backend_libs__interval__TypeInfo_34_70 = (MR_Word) &backend_libs__interval_scalar_common_1[0];

#line 1127 "interval.m"
                {
#line 1127 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_34_70, backend_libs__interval__TypeInfo_34_70, ((MR_Box) (backend_libs__interval__Arg_24)), ((MR_Box) (backend_libs__interval__Shadow_62)), backend_libs__interval__STATE_VARIABLE_VoidRename_0_9, &backend_libs__interval__STATE_VARIABLE_VoidRename_42_42);
                }
#line 1127 "interval.m"
                backend_libs__interval__STATE_VARIABLE_VarRename_41_41 = backend_libs__interval__STATE_VARIABLE_VarRename_0_7;
#line 1127 "interval.m"
              }
#line 1111 "interval.m"
            /* direct tailcall eliminated */
#line 1111 "interval.m"
            {
#line 1111 "interval.m"
              MR_Word backend_libs__interval__HeadVar__1__tmp_copy_1 = backend_libs__interval__Args_25;
#line 1111 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_0__tmp_copy_3 = backend_libs__interval__STATE_VARIABLE_VarSet_39_39;
#line 1111 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_0__tmp_copy_5 = backend_libs__interval__STATE_VARIABLE_VarTypes_40_40;
#line 1111 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0__tmp_copy_7 = backend_libs__interval__STATE_VARIABLE_VarRename_41_41;
#line 1111 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_0__tmp_copy_9 = backend_libs__interval__STATE_VARIABLE_VoidRename_42_42;

#line 1111 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VoidRename_0_9 = backend_libs__interval__STATE_VARIABLE_VoidRename_0__tmp_copy_9;
#line 1111 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarRename_0_7 = backend_libs__interval__STATE_VARIABLE_VarRename_0__tmp_copy_7;
#line 1111 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarTypes_0_5 = backend_libs__interval__STATE_VARIABLE_VarTypes_0__tmp_copy_5;
#line 1111 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarSet_0_3 = backend_libs__interval__STATE_VARIABLE_VarSet_0__tmp_copy_3;
#line 1111 "interval.m"
              backend_libs__interval__HeadVar__1_1 = backend_libs__interval__HeadVar__1__tmp_copy_1;
#line 1111 "interval.m"
            }
#line 1111 "interval.m"
            continue;
#line 1108 "interval.m"
          }
#line 1106 "interval.m"
      }
#line 1106 "interval.m"
      break;
#line 1106 "interval.m"
    }
#line 1101 "interval.m"
}

#line 1050 "interval.m"
static void MR_CALL 
backend_libs__interval__make_inserted_goals_7_p_0(
#line 1050 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_1,
#line 1050 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_2,
#line 1050 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_3,
#line 1050 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_4,
#line 1050 "interval.m"
  MR_Word backend_libs__interval__HeadVar__5_5,
#line 1050 "interval.m"
  MR_Word backend_libs__interval__HeadVar__6_6,
#line 1050 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7)
#line 1050 "interval.m"
{
#line 1054 "interval.m"
  {
#line 1054 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1054 "interval.m"
    if ((backend_libs__interval__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1054 "interval.m"
      {
#line 1054 "interval.m"
        *backend_libs__interval__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1054 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_4 = backend_libs__interval__STATE_VARIABLE_VarRename_0_3;
#line 1054 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_2 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_1;
#line 1054 "interval.m"
      }
#line 1054 "interval.m"
    else
#line 1056 "interval.m"
      {
#line 1056 "interval.m"
        MR_Word backend_libs__interval__Spec_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__5_5, (MR_Integer) 0)));
#line 1056 "interval.m"
        MR_Word backend_libs__interval__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__5_5, (MR_Integer) 1)));
#line 1056 "interval.m"
        MR_Word backend_libs__interval__Goal_20;
#line 1056 "interval.m"
        MR_Word backend_libs__interval__Goals_21;
#line 1056 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_26_26;
#line 1056 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_27_27;
#line 1056 "interval.m"
        MR_Word backend_libs__interval__Goal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Spec_17, (MR_Integer) 0)));
#line 1056 "interval.m"
        MR_Word backend_libs__interval__VarsToExtract_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Spec_17, (MR_Integer) 1)));
#line 1056 "interval.m"
        MR_Word backend_libs__interval__GoalExpr0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_39, (MR_Integer) 0)));
#line 1056 "interval.m"
        MR_Word backend_libs__interval__GoalInfo0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_39, (MR_Integer) 1)));
#line 1090 "interval.m"
        MR_Word backend_libs__interval__V_43_43;
#line 1090 "interval.m"
        MR_Word backend_libs__interval__V_44_44;
#line 1090 "interval.m"
        MR_Word backend_libs__interval__V_45_45;
#line 1090 "interval.m"
        MR_Word backend_libs__interval__V_47_47;
#line 1090 "interval.m"
        MR_Word backend_libs__interval__V_48_48;
#line 1090 "interval.m"
        MR_Word backend_libs__interval__V_49_49;
#line 1090 "interval.m"
        MR_Word backend_libs__interval__ArgVars_50;
#line 1090 "interval.m"
        MR_Word backend_libs__interval__V_51_51;
#line 1090 "interval.m"
        MR_Word backend_libs__interval__V_53_53;
#line 1068 "interval.m"
        MR_Word backend_libs__interval__Unification0_46;
#line 1069 "interval.m"
        MR_Word backend_libs__interval__V_52_52;

#line 1068 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_41)) == (MR_mktag((MR_Integer) 1)));
#line 1068 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1068 "interval.m"
          {
#line 1068 "interval.m"
            backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 0)));
#line 1068 "interval.m"
            backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 1)));
#line 1068 "interval.m"
            backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 2)));
#line 1068 "interval.m"
            backend_libs__interval__Unification0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 3)));
#line 1068 "interval.m"
            backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 4)));
#line 1069 "interval.m"
            backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__Unification0_46)) == (MR_mktag((MR_Integer) 1)));
#line 1069 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1069 "interval.m"
              {
#line 1069 "interval.m"
                backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 0)));
#line 1069 "interval.m"
                backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 1)));
#line 1069 "interval.m"
                backend_libs__interval__ArgVars_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 2)));
#line 1069 "interval.m"
                backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 3)));
#line 1069 "interval.m"
                backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 4)));
#line 1069 "interval.m"
                backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 5)));
#line 1069 "interval.m"
              }
#line 1068 "interval.m"
          }
#line 1090 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1071 "interval.m"
          {
#line 1071 "interval.m"
            MR_Word backend_libs__interval__TypeInfo_65_87;
#line 1071 "interval.m"
            MR_Word backend_libs__interval__Unification1_54;
#line 1071 "interval.m"
            MR_Word backend_libs__interval__GoalExpr1_55;
#line 1071 "interval.m"
            MR_Word backend_libs__interval__GoalInfo1_56;
#line 1071 "interval.m"
            MR_Word backend_libs__interval__GoalInfo2_58;
#line 1071 "interval.m"
            MR_Word backend_libs__interval__Goal2_59;
#line 1071 "interval.m"
            MR_Word backend_libs__interval__VarSet0_60;
#line 1071 "interval.m"
            MR_Word backend_libs__interval__VarTypes0_61;
#line 1071 "interval.m"
            MR_Word backend_libs__interval__VarSet_62;
#line 1071 "interval.m"
            MR_Word backend_libs__interval__VarTypes_63;
#line 1071 "interval.m"
            MR_Word backend_libs__interval__NewRename_64;
#line 1071 "interval.m"
            MR_Word backend_libs__interval__VoidRename_65;
#line 1071 "interval.m"
            MR_Word backend_libs__interval__Goal3_66;
#line 1071 "interval.m"
            MR_Word backend_libs__interval__V_69_69;
#line 1071 "interval.m"
            MR_Word backend_libs__interval__V_70_70;

#line 1071 "interval.m"
            {
#line 1071 "interval.m"
              backend_libs__interval__Unification1_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 0) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 1071 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 1) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 1071 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 2) = ((MR_Box) (backend_libs__interval__ArgVars_50));
#line 1071 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 3) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 1071 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1071 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 5) = ((MR_Box) (backend_libs__interval__V_53_53));
#line 1071 "interval.m"
            }
#line 1072 "interval.m"
            {
#line 1072 "interval.m"
              backend_libs__interval__GoalExpr1_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 0) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 1072 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 1) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 1072 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 2) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 1072 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 3) = ((MR_Box) (backend_libs__interval__Unification1_54));
#line 1072 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 4) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 1072 "interval.m"
            }
#line 1073 "interval.m"
            {
#line 1073 "interval.m"
              hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, backend_libs__interval__GoalInfo0_42, &backend_libs__interval__GoalInfo1_56);
            }
#line 1077 "interval.m"
            if ((backend_libs__interval__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1079 "interval.m"
              backend_libs__interval__GoalInfo2_58 = backend_libs__interval__GoalInfo1_56;
#line 1077 "interval.m"
            else
#line 1075 "interval.m"
              {
#line 1075 "interval.m"
                MR_Word backend_libs__interval__Feature_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__6_6, (MR_Integer) 0)));

#line 1076 "interval.m"
                {
#line 1076 "interval.m"
                  hlds__hlds_goal__goal_info_add_feature_3_p_0(backend_libs__interval__Feature_57, backend_libs__interval__GoalInfo1_56, &backend_libs__interval__GoalInfo2_58);
                }
#line 1075 "interval.m"
              }
#line 1081 "interval.m"
            {
#line 1081 "interval.m"
              backend_libs__interval__Goal2_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_59, 0) = ((MR_Box) (backend_libs__interval__GoalExpr1_55));
#line 1081 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_59, 1) = ((MR_Box) (backend_libs__interval__GoalInfo2_58));
#line 1081 "interval.m"
            }
#line 1082 "interval.m"
            backend_libs__interval__VarSet0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_0_1, (MR_Integer) 0)));
#line 1082 "interval.m"
            backend_libs__interval__VarTypes0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_0_1, (MR_Integer) 1)));
#line 10379 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_65_87 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1084 "interval.m"
            {
#line 1084 "interval.m"
              backend_libs__interval__V_69_69 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_87, backend_libs__interval__TypeInfo_65_87);
            }
#line 1084 "interval.m"
            {
#line 1084 "interval.m"
              backend_libs__interval__V_70_70 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_87, backend_libs__interval__TypeInfo_65_87);
            }
#line 1083 "interval.m"
            {
#line 1083 "interval.m"
              backend_libs__interval__create_shadow_vars_10_p_0(backend_libs__interval__ArgVars_50, backend_libs__interval__VarsToExtract_40, backend_libs__interval__VarSet0_60, &backend_libs__interval__VarSet_62, backend_libs__interval__VarTypes0_61, &backend_libs__interval__VarTypes_63, backend_libs__interval__V_69_69, &backend_libs__interval__NewRename_64, backend_libs__interval__V_70_70, &backend_libs__interval__VoidRename_65);
            }
#line 1085 "interval.m"
            {
#line 1085 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1085 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_26_26, 0) = ((MR_Box) (backend_libs__interval__VarSet_62));
#line 1085 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_26_26, 1) = ((MR_Box) (backend_libs__interval__VarTypes_63));
#line 1085 "interval.m"
            }
#line 1086 "interval.m"
            {
#line 1086 "interval.m"
              mercury__map__old_merge_3_p_0(backend_libs__interval__TypeInfo_65_87, backend_libs__interval__TypeInfo_65_87, backend_libs__interval__STATE_VARIABLE_VarRename_0_3, backend_libs__interval__NewRename_64, &backend_libs__interval__STATE_VARIABLE_VarRename_27_27);
            }
#line 1088 "interval.m"
            {
#line 1088 "interval.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__STATE_VARIABLE_VarRename_27_27, backend_libs__interval__Goal2_59, &backend_libs__interval__Goal3_66);
            }
#line 1089 "interval.m"
            {
#line 1089 "interval.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__VoidRename_65, backend_libs__interval__Goal3_66, &backend_libs__interval__Goal_20);
            }
#line 1071 "interval.m"
          }
#line 1090 "interval.m"
        else
#line 1091 "interval.m"
          {
#line 1091 "interval.m"
            {
#line 1091 "interval.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.make_inserted_goal\'/7", (MR_String) "not a deconstruct");
#line 1091 "interval.m"
              return;
            }
#line 1091 "interval.m"
          }
#line 1058 "interval.m"
        {
#line 1058 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_26_26, backend_libs__interval__STATE_VARIABLE_VarInfo_2, backend_libs__interval__STATE_VARIABLE_VarRename_27_27, backend_libs__interval__STATE_VARIABLE_VarRename_4, backend_libs__interval__Specs_18, backend_libs__interval__HeadVar__6_6, &backend_libs__interval__Goals_21);
        }
#line 1056 "interval.m"
        {
#line 1056 "interval.m"
          MR_Word base;
#line 1056 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "interval.m"
          *backend_libs__interval__HeadVar__7_7 = base;
#line 1056 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Goal_20));
#line 1056 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__Goals_21));
#line 1056 "interval.m"
        }
#line 1056 "interval.m"
      }
#line 1054 "interval.m"
  }
#line 1050 "interval.m"
}

#line 1039 "interval.m"
static void MR_CALL 
backend_libs__interval__insert_goals_after_7_p_0(
#line 1039 "interval.m"
  MR_Word backend_libs__interval__BranchesGoal_8,
#line 1039 "interval.m"
  MR_Word * backend_libs__interval__Goal_9,
#line 1039 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_17,
#line 1039 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_18,
#line 1039 "interval.m"
  MR_Word * backend_libs__interval__VarRename_11,
#line 1039 "interval.m"
  MR_Word backend_libs__interval__Inserts_12,
#line 1039 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_13)
#line 1039 "interval.m"
{
#line 1044 "interval.m"
  {
#line 1044 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1044 "interval.m"
    MR_Word backend_libs__interval__TypeInfo_22_22 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1044 "interval.m"
    MR_Word backend_libs__interval__InsertGoals_14;
#line 1044 "interval.m"
    MR_Word backend_libs__interval__BranchesGoalInfo_16;
#line 1044 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 1044 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 1047 "interval.m"
    MR_Word backend_libs__interval__V_15_15;

#line 1045 "interval.m"
    {
#line 1045 "interval.m"
      backend_libs__interval__V_20_20 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_22_22, backend_libs__interval__TypeInfo_22_22);
    }
#line 1045 "interval.m"
    {
#line 1045 "interval.m"
      backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_0_17, backend_libs__interval__STATE_VARIABLE_VarInfo_18, backend_libs__interval__V_20_20, backend_libs__interval__VarRename_11, backend_libs__interval__Inserts_12, backend_libs__interval__MaybeFeature_13, &backend_libs__interval__InsertGoals_14);
    }
#line 1047 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__BranchesGoal_8, (MR_Integer) 0)));
#line 1047 "interval.m"
    backend_libs__interval__BranchesGoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__BranchesGoal_8, (MR_Integer) 1)));
#line 1048 "interval.m"
    {
#line 1048 "interval.m"
      backend_libs__interval__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 0) = ((MR_Box) (backend_libs__interval__BranchesGoal_8));
#line 1048 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 1) = ((MR_Box) (backend_libs__interval__InsertGoals_14));
#line 1048 "interval.m"
    }
#line 1048 "interval.m"
    {
#line 1048 "interval.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_21_21, backend_libs__interval__BranchesGoalInfo_16, backend_libs__interval__Goal_9);
#line 1048 "interval.m"
      return;
    }
#line 1044 "interval.m"
  }
#line 1039 "interval.m"
}

#line 1029 "interval.m"
static void MR_CALL 
backend_libs__interval__lookup_inserts_3_p_0(
#line 1029 "interval.m"
  MR_Word backend_libs__interval__InsertMap_4,
#line 1029 "interval.m"
  MR_Word backend_libs__interval__Anchor_5,
#line 1029 "interval.m"
  MR_Word * backend_libs__interval__Inserts_6)
#line 1029 "interval.m"
{
#line 1035 "interval.m"
  {
#line 1035 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1035 "interval.m"
    MR_Word backend_libs__interval__InsertsPrime_7;
#line 1033 "interval.m"
    MR_Box backend_libs__interval__conv0_InsertsPrime_7;

#line 1033 "interval.m"
    {
#line 1033 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval_scalar_common_1[4], backend_libs__interval__InsertMap_4, ((MR_Box) (backend_libs__interval__Anchor_5)), &backend_libs__interval__conv0_InsertsPrime_7);
    }
#line 1033 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1033 "interval.m"
      {
#line 1033 "interval.m"
        backend_libs__interval__InsertsPrime_7 = ((MR_Word) backend_libs__interval__conv0_InsertsPrime_7);
#line 1033 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1033 "interval.m"
      }
#line 1035 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1034 "interval.m"
      *backend_libs__interval__Inserts_6 = backend_libs__interval__InsertsPrime_7;
#line 1035 "interval.m"
    else
#line 1036 "interval.m"
      *backend_libs__interval__Inserts_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1035 "interval.m"
  }
#line 1029 "interval.m"
}

#line 879 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_goal_8_p_0(
#line 879 "interval.m"
  MR_Word backend_libs__interval__Goal0_9,
#line 879 "interval.m"
  MR_Word * backend_libs__interval__Goal_10,
#line 879 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_114,
#line 879 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_115,
#line 879 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_116,
#line 879 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_117,
#line 879 "interval.m"
  MR_Word backend_libs__interval__InsertMap_13,
#line 879 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_14)
#line 879 "interval.m"
{
#line 885 "interval.m"
  {
#line 885 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 885 "interval.m"
    MR_Word backend_libs__interval__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_9, (MR_Integer) 0)));
#line 885 "interval.m"
    MR_Word backend_libs__interval__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_9, (MR_Integer) 1)));

#line 893 "interval.m"
    if (((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) == (MR_mktag((MR_Integer) 0))))
#line 924 "interval.m"
      {
#line 924 "interval.m"
        MR_Word backend_libs__interval__NegGoal0_37 = (MR_Word) MR_body(((MR_Word) backend_libs__interval__GoalExpr0_15), (MR_Integer) 0);
#line 924 "interval.m"
        MR_Word backend_libs__interval__NegGoal_38;
#line 924 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_147_147;
#line 924 "interval.m"
        MR_Word backend_libs__interval__V_148_148;
#line 924 "interval.m"
        MR_Word backend_libs__interval__EndAnchor_177;
#line 924 "interval.m"
        MR_Word backend_libs__interval__Goal1_178;
#line 924 "interval.m"
        MR_Word backend_libs__interval__Inserts_179;
#line 925 "interval.m"
        MR_Word backend_libs__interval__V_39_39;
#line 928 "interval.m"
        MR_Word backend_libs__interval___StartAnchor_176;

#line 925 "interval.m"
        {
#line 925 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__NegGoal0_37, &backend_libs__interval__NegGoal_38, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_147_147, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, &backend_libs__interval__V_39_39, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
        }
#line 927 "interval.m"
        backend_libs__interval__V_148_148 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) backend_libs__interval__NegGoal_38);
#line 927 "interval.m"
        {
#line 927 "interval.m"
          backend_libs__interval__Goal1_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 927 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_178, 0) = ((MR_Box) (backend_libs__interval__V_148_148));
#line 927 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_178, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 927 "interval.m"
        }
#line 928 "interval.m"
        {
#line 928 "interval.m"
          backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 3, backend_libs__interval__Goal0_9, &backend_libs__interval___StartAnchor_176, &backend_libs__interval__EndAnchor_177);
        }
#line 929 "interval.m"
        {
#line 929 "interval.m"
          backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_177, &backend_libs__interval__Inserts_179);
        }
#line 931 "interval.m"
        {
#line 931 "interval.m"
          backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_178, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_147_147, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__Inserts_179, backend_libs__interval__MaybeFeature_14);
#line 931 "interval.m"
          return;
        }
#line 924 "interval.m"
      }
#line 893 "interval.m"
    else
#line 893 "interval.m"
    if (((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) == (MR_mktag((MR_Integer) 2))))
#line 1003 "interval.m"
      {
#line 1003 "interval.m"
        MR_Word backend_libs__interval__Builtin_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 1003 "interval.m"
        MR_Word backend_libs__interval__MustHaveMap_200;
#line 1003 "interval.m"
        MR_Word backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)));
#line 1003 "interval.m"
        MR_Integer backend_libs__interval__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 1003 "interval.m"
        MR_Word backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 1003 "interval.m"
        MR_Word backend_libs__interval__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 4)));
#line 1003 "interval.m"
        MR_Word backend_libs__interval__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 5)));

#line 1007 "interval.m"
        if ((backend_libs__interval__Builtin_98 == (MR_Integer) 0))
#line 1006 "interval.m"
          backend_libs__interval__MustHaveMap_200 = (MR_Integer) 0;
#line 1007 "interval.m"
        else
#line 1011 "interval.m"
          backend_libs__interval__MustHaveMap_200 = (MR_Integer) 1;
#line 1013 "interval.m"
        {
#line 1013 "interval.m"
          backend_libs__interval__record_decisions_at_call_site_9_p_0(backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__MustHaveMap_200, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
#line 1013 "interval.m"
          return;
        }
#line 1003 "interval.m"
      }
#line 893 "interval.m"
    else
#line 893 "interval.m"
    if (((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) == (MR_mktag((MR_Integer) 1))))
#line 1020 "interval.m"
      {
#line 1021 "interval.m"
        {
#line 1021 "interval.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10);
        }
#line 1020 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_115 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_114;
#line 1020 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_117 = backend_libs__interval__STATE_VARIABLE_VarRename_0_116;
#line 1020 "interval.m"
      }
#line 893 "interval.m"
    else
#line 893 "interval.m"
    if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1016 "interval.m"
      {
#line 1017 "interval.m"
        {
#line 1017 "interval.m"
          backend_libs__interval__record_decisions_at_call_site_9_p_0(backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, (MR_Integer) 0, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
#line 1017 "interval.m"
          return;
        }
#line 1016 "interval.m"
      }
#line 893 "interval.m"
    else
#line 893 "interval.m"
    if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 888 "interval.m"
      {
#line 888 "interval.m"
        MR_Word backend_libs__interval__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 888 "interval.m"
        MR_Word backend_libs__interval__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 888 "interval.m"
        MR_Word backend_libs__interval__Goals_19;
#line 888 "interval.m"
        MR_Word backend_libs__interval__GoalExpr_20;

#line 889 "interval.m"
        {
#line 889 "interval.m"
          backend_libs__interval__record_decisions_in_conj_9_p_0(backend_libs__interval__Goals0_18, &backend_libs__interval__Goals_19, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__ConjType_17, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
        }
#line 891 "interval.m"
        {
#line 891 "interval.m"
          backend_libs__interval__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 891 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 891 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_20, 1) = ((MR_Box) (backend_libs__interval__ConjType_17));
#line 891 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_20, 2) = ((MR_Box) (backend_libs__interval__Goals_19));
#line 891 "interval.m"
        }
#line 892 "interval.m"
        {
#line 892 "interval.m"
          MR_Word base;
#line 892 "interval.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 892 "interval.m"
          *backend_libs__interval__Goal_10 = base;
#line 892 "interval.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__GoalExpr_20));
#line 892 "interval.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 892 "interval.m"
        }
#line 888 "interval.m"
      }
#line 893 "interval.m"
    else
#line 893 "interval.m"
    if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 894 "interval.m"
      {
#line 894 "interval.m"
        MR_Word backend_libs__interval__StartAnchor_21;
#line 894 "interval.m"
        MR_Word backend_libs__interval__EndAnchor_22;
#line 894 "interval.m"
        MR_Word backend_libs__interval__Goals0_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));

#line 895 "interval.m"
        {
#line 895 "interval.m"
          backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 1, backend_libs__interval__Goal0_9, &backend_libs__interval__StartAnchor_21, &backend_libs__interval__EndAnchor_22);
        }
#line 908 "interval.m"
        if ((backend_libs__interval__Goals0_170 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "interval.m"
          {
#line 911 "interval.m"
            *backend_libs__interval__Goal_10 = backend_libs__interval__Goal0_9;
#line 909 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarInfo_115 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_114;
#line 909 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarRename_117 = backend_libs__interval__STATE_VARIABLE_VarRename_0_116;
#line 909 "interval.m"
          }
#line 908 "interval.m"
        else
#line 897 "interval.m"
          {
#line 897 "interval.m"
            MR_Word backend_libs__interval__FirstGoal0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals0_170, (MR_Integer) 0)));
#line 897 "interval.m"
            MR_Word backend_libs__interval__LaterGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals0_170, (MR_Integer) 1)));
#line 897 "interval.m"
            MR_Word backend_libs__interval__FirstGoal_25;
#line 897 "interval.m"
            MR_Word backend_libs__interval__StartInserts_27;
#line 897 "interval.m"
            MR_Word backend_libs__interval__LaterGoals_28;
#line 897 "interval.m"
            MR_Word backend_libs__interval__Goal1_29;
#line 897 "interval.m"
            MR_Word backend_libs__interval__Inserts_30;
#line 897 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_159_159;
#line 897 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_160_160;
#line 897 "interval.m"
            MR_Word backend_libs__interval__V_161_161;
#line 897 "interval.m"
            MR_Word backend_libs__interval__Goals_166;
#line 898 "interval.m"
            MR_Word backend_libs__interval__V_26_26;

#line 898 "interval.m"
            {
#line 898 "interval.m"
              backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__FirstGoal0_23, &backend_libs__interval__FirstGoal_25, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_159_159, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, &backend_libs__interval__V_26_26, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
            }
#line 900 "interval.m"
            {
#line 900 "interval.m"
              backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__StartAnchor_21, &backend_libs__interval__StartInserts_27);
            }
#line 901 "interval.m"
            {
#line 901 "interval.m"
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(backend_libs__interval__LaterGoals0_24, &backend_libs__interval__LaterGoals_28, backend_libs__interval__STATE_VARIABLE_VarInfo_159_159, &backend_libs__interval__STATE_VARIABLE_VarInfo_160_160, backend_libs__interval__StartInserts_27, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
            }
#line 903 "interval.m"
            {
#line 903 "interval.m"
              backend_libs__interval__Goals_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_166, 0) = ((MR_Box) (backend_libs__interval__FirstGoal_25));
#line 903 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_166, 1) = ((MR_Box) (backend_libs__interval__LaterGoals_28));
#line 903 "interval.m"
            }
#line 904 "interval.m"
            {
#line 904 "interval.m"
              backend_libs__interval__V_161_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "interval.m"
              MR_hl_field(MR_mktag(3), backend_libs__interval__V_161_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 904 "interval.m"
              MR_hl_field(MR_mktag(3), backend_libs__interval__V_161_161, 1) = ((MR_Box) (backend_libs__interval__Goals_166));
#line 904 "interval.m"
            }
#line 904 "interval.m"
            {
#line 904 "interval.m"
              backend_libs__interval__Goal1_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_29, 0) = ((MR_Box) (backend_libs__interval__V_161_161));
#line 904 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_29, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 904 "interval.m"
            }
#line 905 "interval.m"
            {
#line 905 "interval.m"
              backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_22, &backend_libs__interval__Inserts_30);
            }
#line 906 "interval.m"
            {
#line 906 "interval.m"
              backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_29, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_160_160, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__Inserts_30, backend_libs__interval__MaybeFeature_14);
#line 906 "interval.m"
              return;
            }
#line 897 "interval.m"
          }
#line 894 "interval.m"
      }
#line 893 "interval.m"
    else
#line 893 "interval.m"
    if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 988 "interval.m"
      {
#line 988 "interval.m"
        MR_Word backend_libs__interval__GenericCall_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 988 "interval.m"
        MR_Word backend_libs__interval__MustHaveMap_85;
#line 988 "interval.m"
        MR_Word backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 988 "interval.m"
        MR_Word backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 988 "interval.m"
        MR_Word backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 4)));
#line 988 "interval.m"
        MR_Word backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 5)));

#line 993 "interval.m"
        if (((MR_tag((MR_Word) backend_libs__interval__GenericCall_79)) == (MR_mktag((MR_Integer) 3))))
#line 992 "interval.m"
          backend_libs__interval__MustHaveMap_85 = (MR_Integer) 0;
#line 993 "interval.m"
        else
#line 998 "interval.m"
          backend_libs__interval__MustHaveMap_85 = (MR_Integer) 1;
#line 1000 "interval.m"
        {
#line 1000 "interval.m"
          backend_libs__interval__record_decisions_at_call_site_9_p_0(backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__MustHaveMap_85, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
#line 1000 "interval.m"
          return;
        }
#line 988 "interval.m"
      }
#line 893 "interval.m"
    else
#line 893 "interval.m"
    if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 934 "interval.m"
      {
#line 934 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_203_203;
#line 934 "interval.m"
        MR_Word backend_libs__interval__Vars0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 934 "interval.m"
        MR_Word backend_libs__interval__Cond0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 934 "interval.m"
        MR_Word backend_libs__interval__Then0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 934 "interval.m"
        MR_Word backend_libs__interval__Else0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 4)));
#line 934 "interval.m"
        MR_Word backend_libs__interval__Vars_44;
#line 934 "interval.m"
        MR_Word backend_libs__interval__Cond_45;
#line 934 "interval.m"
        MR_Word backend_libs__interval__Then_46;
#line 934 "interval.m"
        MR_Word backend_libs__interval__VarRenameElse_48;
#line 934 "interval.m"
        MR_Word backend_libs__interval__StartInsertGoals_49;
#line 934 "interval.m"
        MR_Word backend_libs__interval__Else1_50;
#line 934 "interval.m"
        MR_Word backend_libs__interval__ElseGoalInfo0_53;
#line 934 "interval.m"
        MR_Word backend_libs__interval__Else_54;
#line 934 "interval.m"
        MR_Word backend_libs__interval__EndInserts_55;
#line 934 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_135_135;
#line 934 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_136_136;
#line 934 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_137_137;
#line 934 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_138_138;
#line 934 "interval.m"
        MR_Word backend_libs__interval__V_139_139;
#line 934 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_140_140;
#line 934 "interval.m"
        MR_Word backend_libs__interval__V_141_141;
#line 934 "interval.m"
        MR_Word backend_libs__interval__V_142_142;
#line 934 "interval.m"
        MR_Word backend_libs__interval__V_144_144;
#line 934 "interval.m"
        MR_Word backend_libs__interval__StartAnchor_181;
#line 934 "interval.m"
        MR_Word backend_libs__interval__EndAnchor_182;
#line 934 "interval.m"
        MR_Word backend_libs__interval__StartInserts_183;
#line 934 "interval.m"
        MR_Word backend_libs__interval__Goal1_184;
#line 939 "interval.m"
        MR_Word backend_libs__interval__V_47_47;
#line 944 "interval.m"
        MR_Word backend_libs__interval__V_51_51;
#line 946 "interval.m"
        MR_Word backend_libs__interval__V_52_52;

#line 935 "interval.m"
        {
#line 935 "interval.m"
          backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 0, backend_libs__interval__Goal0_9, &backend_libs__interval__StartAnchor_181, &backend_libs__interval__EndAnchor_182);
        }
#line 936 "interval.m"
        {
#line 936 "interval.m"
          parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Vars0_40, &backend_libs__interval__Vars_44);
        }
#line 937 "interval.m"
        {
#line 937 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Cond0_41, &backend_libs__interval__Cond_45, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_135_135, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, &backend_libs__interval__STATE_VARIABLE_VarRename_136_136, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
        }
#line 939 "interval.m"
        {
#line 939 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Then0_42, &backend_libs__interval__Then_46, backend_libs__interval__STATE_VARIABLE_VarInfo_135_135, &backend_libs__interval__STATE_VARIABLE_VarInfo_137_137, backend_libs__interval__STATE_VARIABLE_VarRename_136_136, &backend_libs__interval__V_47_47, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
        }
#line 941 "interval.m"
        {
#line 941 "interval.m"
          backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__StartAnchor_181, &backend_libs__interval__StartInserts_183);
        }
#line 11037 "backend_libs.interval.c"
        backend_libs__interval__TypeInfo_203_203 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 942 "interval.m"
        {
#line 942 "interval.m"
          backend_libs__interval__V_139_139 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_203_203, backend_libs__interval__TypeInfo_203_203);
        }
#line 942 "interval.m"
        {
#line 942 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_137_137, &backend_libs__interval__STATE_VARIABLE_VarInfo_138_138, backend_libs__interval__V_139_139, &backend_libs__interval__VarRenameElse_48, backend_libs__interval__StartInserts_183, backend_libs__interval__MaybeFeature_14, &backend_libs__interval__StartInsertGoals_49);
        }
#line 944 "interval.m"
        {
#line 944 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Else0_43, &backend_libs__interval__Else1_50, backend_libs__interval__STATE_VARIABLE_VarInfo_138_138, &backend_libs__interval__STATE_VARIABLE_VarInfo_140_140, backend_libs__interval__VarRenameElse_48, &backend_libs__interval__V_51_51, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
        }
#line 946 "interval.m"
        backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Else0_43, (MR_Integer) 0)));
#line 946 "interval.m"
        backend_libs__interval__ElseGoalInfo0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Else0_43, (MR_Integer) 1)));
#line 947 "interval.m"
        {
#line 947 "interval.m"
          backend_libs__interval__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 0) = ((MR_Box) (backend_libs__interval__Else1_50));
#line 947 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "interval.m"
        }
#line 947 "interval.m"
        {
#line 947 "interval.m"
          backend_libs__interval__V_141_141 = mercury__list__append_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, backend_libs__interval__StartInsertGoals_49, backend_libs__interval__V_142_142);
        }
#line 947 "interval.m"
        {
#line 947 "interval.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_141_141, backend_libs__interval__ElseGoalInfo0_53, &backend_libs__interval__Else_54);
        }
#line 949 "interval.m"
        {
#line 949 "interval.m"
          backend_libs__interval__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 949 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 949 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 1) = ((MR_Box) (backend_libs__interval__Vars_44));
#line 949 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 2) = ((MR_Box) (backend_libs__interval__Cond_45));
#line 949 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 3) = ((MR_Box) (backend_libs__interval__Then_46));
#line 949 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 4) = ((MR_Box) (backend_libs__interval__Else_54));
#line 949 "interval.m"
        }
#line 949 "interval.m"
        {
#line 949 "interval.m"
          backend_libs__interval__Goal1_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 949 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_184, 0) = ((MR_Box) (backend_libs__interval__V_144_144));
#line 949 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_184, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 949 "interval.m"
        }
#line 950 "interval.m"
        {
#line 950 "interval.m"
          backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_182, &backend_libs__interval__EndInserts_55);
        }
#line 951 "interval.m"
        {
#line 951 "interval.m"
          backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_184, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_140_140, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__EndInserts_55, backend_libs__interval__MaybeFeature_14);
#line 951 "interval.m"
          return;
        }
#line 934 "interval.m"
      }
#line 893 "interval.m"
    else
#line 893 "interval.m"
    if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 954 "interval.m"
      {
#line 954 "interval.m"
        MR_Word backend_libs__interval__Reason0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 954 "interval.m"
        MR_Word backend_libs__interval__SubGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 954 "interval.m"
        MR_Word backend_libs__interval__Reason_58;
#line 976 "interval.m"
        MR_Word backend_libs__interval__V_130_130;
#line 976 "interval.m"
        MR_Word backend_libs__interval__V_77_77;

#line 959 "interval.m"
        if (((MR_tag((MR_Word) backend_libs__interval__Reason0_56)) == (MR_mktag((MR_Integer) 0))))
#line 956 "interval.m"
          {
#line 956 "interval.m"
            MR_Word backend_libs__interval__Vars0_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Reason0_56, (MR_Integer) 0)));
#line 956 "interval.m"
            MR_Word backend_libs__interval__Vars_186;

#line 957 "interval.m"
            {
#line 957 "interval.m"
              parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Vars0_185, &backend_libs__interval__Vars_186);
            }
#line 958 "interval.m"
            {
#line 958 "interval.m"
              backend_libs__interval__Reason_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 958 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__Reason_58, 0) = ((MR_Box) (backend_libs__interval__Vars_186));
#line 958 "interval.m"
            }
#line 956 "interval.m"
          }
#line 959 "interval.m"
        else
#line 959 "interval.m"
        if (((((MR_tag((MR_Word) backend_libs__interval__Reason0_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason0_56, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 960 "interval.m"
          {
#line 960 "interval.m"
            MR_Word backend_libs__interval__Kind_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason0_56, (MR_Integer) 2)));
#line 960 "interval.m"
            MR_Word backend_libs__interval__Var0_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason0_56, (MR_Integer) 1)));
#line 960 "interval.m"
            MR_Word backend_libs__interval__Var_188;

#line 961 "interval.m"
            {
#line 961 "interval.m"
              parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Var0_187, &backend_libs__interval__Var_188);
            }
#line 962 "interval.m"
            {
#line 962 "interval.m"
              backend_libs__interval__Reason_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 962 "interval.m"
              MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 962 "interval.m"
              MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, 1) = ((MR_Box) (backend_libs__interval__Var_188));
#line 962 "interval.m"
              MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, 2) = ((MR_Box) (backend_libs__interval__Kind_59));
#line 962 "interval.m"
            }
#line 960 "interval.m"
          }
#line 959 "interval.m"
        else
#line 974 "interval.m"
          backend_libs__interval__Reason_58 = backend_libs__interval__Reason0_56;
#line 976 "interval.m"
        backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 976 "interval.m"
        if (backend_libs__interval__succeeded)
#line 976 "interval.m"
          {
#line 976 "interval.m"
            backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, (MR_Integer) 1)));
#line 976 "interval.m"
            backend_libs__interval__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, (MR_Integer) 2)));
#line 976 "interval.m"
            backend_libs__interval__succeeded = (backend_libs__interval__V_130_130 == (MR_Integer) 1);
#line 976 "interval.m"
          }
#line 979 "interval.m"
        if (backend_libs__interval__succeeded)
#line 978 "interval.m"
          {
#line 978 "interval.m"
            *backend_libs__interval__Goal_10 = backend_libs__interval__Goal0_9;
#line 978 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarRename_117 = backend_libs__interval__STATE_VARIABLE_VarRename_0_116;
#line 978 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarInfo_115 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_114;
#line 978 "interval.m"
          }
#line 979 "interval.m"
        else
#line 983 "interval.m"
          {
#line 983 "interval.m"
            MR_Word backend_libs__interval__SubGoal_78;
#line 983 "interval.m"
            MR_Word backend_libs__interval__GoalExpr_193;

#line 982 "interval.m"
            {
#line 982 "interval.m"
              backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__SubGoal0_57, &backend_libs__interval__SubGoal_78, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
            }
#line 984 "interval.m"
            {
#line 984 "interval.m"
              backend_libs__interval__GoalExpr_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 984 "interval.m"
              MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 984 "interval.m"
              MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_193, 1) = ((MR_Box) (backend_libs__interval__Reason_58));
#line 984 "interval.m"
              MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_193, 2) = ((MR_Box) (backend_libs__interval__SubGoal_78));
#line 984 "interval.m"
            }
#line 985 "interval.m"
            {
#line 985 "interval.m"
              MR_Word base;
#line 985 "interval.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 985 "interval.m"
              *backend_libs__interval__Goal_10 = base;
#line 985 "interval.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__GoalExpr_193));
#line 985 "interval.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 985 "interval.m"
            }
#line 983 "interval.m"
          }
#line 954 "interval.m"
      }
#line 893 "interval.m"
    else
#line 893 "interval.m"
    if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1023 "interval.m"
      {
#line 1024 "interval.m"
        {
#line 1024 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.record_decisions_in_goal\'/8", (MR_String) "shorthand");
#line 1024 "interval.m"
          return;
        }
#line 1023 "interval.m"
      }
#line 893 "interval.m"
    else
#line 914 "interval.m"
      {
#line 914 "interval.m"
        MR_Word backend_libs__interval__Var0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 914 "interval.m"
        MR_Word backend_libs__interval__Det_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 914 "interval.m"
        MR_Word backend_libs__interval__Cases0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 914 "interval.m"
        MR_Word backend_libs__interval__Cases_34;
#line 914 "interval.m"
        MR_Word backend_libs__interval__Var_35;
#line 914 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_152_152;
#line 914 "interval.m"
        MR_Word backend_libs__interval__V_154_154;
#line 914 "interval.m"
        MR_Word backend_libs__interval__EndAnchor_173;
#line 914 "interval.m"
        MR_Word backend_libs__interval__Goal1_174;
#line 914 "interval.m"
        MR_Word backend_libs__interval__Inserts_175;
#line 919 "interval.m"
        MR_Word backend_libs__interval___StartAnchor_36;

#line 915 "interval.m"
        {
#line 915 "interval.m"
          backend_libs__interval__record_decisions_in_cases_7_p_0(backend_libs__interval__Cases0_33, &backend_libs__interval__Cases_34, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_152_152, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
        }
#line 917 "interval.m"
        {
#line 917 "interval.m"
          parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Var0_31, &backend_libs__interval__Var_35);
        }
#line 918 "interval.m"
        {
#line 918 "interval.m"
          backend_libs__interval__V_154_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 918 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 918 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 1) = ((MR_Box) (backend_libs__interval__Var_35));
#line 918 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 2) = ((MR_Box) (backend_libs__interval__Det_32));
#line 918 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 3) = ((MR_Box) (backend_libs__interval__Cases_34));
#line 918 "interval.m"
        }
#line 918 "interval.m"
        {
#line 918 "interval.m"
          backend_libs__interval__Goal1_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 918 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_174, 0) = ((MR_Box) (backend_libs__interval__V_154_154));
#line 918 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_174, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 918 "interval.m"
        }
#line 919 "interval.m"
        {
#line 919 "interval.m"
          backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 2, backend_libs__interval__Goal0_9, &backend_libs__interval___StartAnchor_36, &backend_libs__interval__EndAnchor_173);
        }
#line 920 "interval.m"
        {
#line 920 "interval.m"
          backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_173, &backend_libs__interval__Inserts_175);
        }
#line 921 "interval.m"
        {
#line 921 "interval.m"
          backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_174, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_152_152, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__Inserts_175, backend_libs__interval__MaybeFeature_14);
#line 921 "interval.m"
          return;
        }
#line 914 "interval.m"
      }
#line 885 "interval.m"
  }
#line 879 "interval.m"
}

#line 855 "interval.m"
static void MR_CALL 
backend_libs__interval__record_model_non_anchor_3_p_0(
#line 855 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 855 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 855 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9)
#line 855 "interval.m"
{
#line 858 "interval.m"
  {
#line 858 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 858 "interval.m"
    MR_Word backend_libs__interval__ModelNonAnchors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 858 "interval.m"
    MR_Word backend_libs__interval__ModelNonAnchors_7;
#line 859 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 859 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 859 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 859 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 859 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 859 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 859 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 859 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 859 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 859 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 859 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 859 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 859 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 859 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 859 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_27_27;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 861 "interval.m"
    MR_Word backend_libs__interval__V_36_36;

#line 860 "interval.m"
    {
#line 860 "interval.m"
      mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Anchor_4)), backend_libs__interval__ModelNonAnchors0_6, &backend_libs__interval__ModelNonAnchors_7);
    }
#line 861 "interval.m"
    backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 861 "interval.m"
    backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 861 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 861 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 861 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 861 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 861 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 861 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 861 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 861 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 861 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 861 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 861 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 861 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 861 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 861 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 861 "interval.m"
    {
#line 861 "interval.m"
      MR_Word base;
#line 861 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 861 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = base;
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_26_26));
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_27_27));
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__ModelNonAnchors_7));
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 861 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 861 "interval.m"
    }
#line 858 "interval.m"
  }
#line 855 "interval.m"
}

#line 838 "interval.m"
static void MR_CALL 
backend_libs__interval__require_access_3_p_0(
#line 838 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 838 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 838 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9)
#line 838 "interval.m"
{
#line 841 "interval.m"
  {
#line 841 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 841 "interval.m"
    MR_Word backend_libs__interval__AccessedLater0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 841 "interval.m"
    MR_Word backend_libs__interval__AccessedLater_7;
#line 842 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 842 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 842 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 842 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 842 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 842 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 842 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 842 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 842 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 842 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 842 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 842 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 842 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 842 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 842 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_27_27;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 844 "interval.m"
    MR_Word backend_libs__interval__V_28_28;

#line 843 "interval.m"
    {
#line 843 "interval.m"
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_4, backend_libs__interval__AccessedLater0_6, &backend_libs__interval__AccessedLater_7);
    }
#line 844 "interval.m"
    backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 844 "interval.m"
    backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 844 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 844 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 844 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 844 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 844 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 844 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 844 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 844 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 844 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 844 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 844 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 844 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 844 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 844 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 844 "interval.m"
    {
#line 844 "interval.m"
      MR_Word base;
#line 844 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 844 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = base;
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_26_26));
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_27_27));
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__AccessedLater_7));
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 844 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 844 "interval.m"
    }
#line 841 "interval.m"
  }
#line 838 "interval.m"
}

#line 830 "interval.m"
static void MR_CALL 
backend_libs__interval__require_flushed_3_p_0(
#line 830 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 830 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 830 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9)
#line 830 "interval.m"
{
#line 833 "interval.m"
  {
#line 833 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 833 "interval.m"
    MR_Word backend_libs__interval__FlushedLater0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 833 "interval.m"
    MR_Word backend_libs__interval__FlushedLater_7;
#line 834 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 834 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 834 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 834 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 834 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 834 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 834 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 834 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 834 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 834 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 834 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 834 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 834 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 834 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 834 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 836 "interval.m"
    MR_Word backend_libs__interval__V_27_27;

#line 835 "interval.m"
    {
#line 835 "interval.m"
      backend_libs__interval__FlushedLater_7 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__FlushedLater0_6, backend_libs__interval__Vars_4);
    }
#line 836 "interval.m"
    backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 836 "interval.m"
    backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 836 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 836 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 836 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 836 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 836 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 836 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 836 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 836 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 836 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 836 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 836 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 836 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 836 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 836 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 836 "interval.m"
    {
#line 836 "interval.m"
      MR_Word base;
#line 836 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 836 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = base;
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_26_26));
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__FlushedLater_7));
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 836 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 836 "interval.m"
    }
#line 833 "interval.m"
  }
#line 830 "interval.m"
}

#line 823 "interval.m"
static void MR_CALL 
backend_libs__interval__require_in_regs_3_p_0(
#line 823 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 823 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 823 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8)
#line 823 "interval.m"
{
#line 826 "interval.m"
  {
#line 826 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 826 "interval.m"
    MR_Word backend_libs__interval__CurIntervalId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 6)));
#line 827 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 0)));
#line 827 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 1)));
#line 827 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 2)));
#line 827 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 3)));
#line 827 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 4)));
#line 827 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 5)));
#line 827 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 7)));
#line 827 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 8)));
#line 827 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 9)));
#line 827 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 10)));
#line 827 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 11)));
#line 827 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 12)));
#line 827 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 13)));
#line 827 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 14)));
#line 827 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 15)));

#line 828 "interval.m"
    {
#line 828 "interval.m"
      backend_libs__interval__record_interval_vars_4_p_0(backend_libs__interval__CurIntervalId_6, backend_libs__interval__Vars_4, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_8);
#line 828 "interval.m"
      return;
    }
#line 826 "interval.m"
  }
#line 823 "interval.m"
}

#line 780 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_no_succ_3_p_0(
#line 780 "interval.m"
  MR_Word backend_libs__interval__Id_4,
#line 780 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 780 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10)
#line 780 "interval.m"
{
#line 783 "interval.m"
  {
#line 783 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 783 "interval.m"
    MR_Word backend_libs__interval__SuccMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 783 "interval.m"
    MR_Word backend_libs__interval__SuccMap_8;
#line 784 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 784 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 784 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 784 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 784 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 784 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 784 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 784 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 784 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 784 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 784 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 784 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 784 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 784 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 784 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 785 "interval.m"
    MR_Word backend_libs__interval___Succ0_7;
#line 785 "interval.m"
    MR_Box backend_libs__interval__conv0__Succ0_7;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_45_45;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 790 "interval.m"
    MR_Word backend_libs__interval__V_44_44;

#line 785 "interval.m"
    {
#line 785 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__SuccMap0_6, ((MR_Box) (backend_libs__interval__Id_4)), &backend_libs__interval__conv0__Succ0_7);
    }
#line 785 "interval.m"
    if (backend_libs__interval__succeeded)
#line 785 "interval.m"
      {
#line 785 "interval.m"
        backend_libs__interval___Succ0_7 = ((MR_Word) backend_libs__interval__conv0__Succ0_7);
#line 785 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 785 "interval.m"
      }
#line 787 "interval.m"
    if (backend_libs__interval__succeeded)
#line 786 "interval.m"
      {
#line 786 "interval.m"
        {
#line 786 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.record_interval_no_succ\'/3", (MR_String) "already in succ map");
#line 786 "interval.m"
          return;
        }
#line 786 "interval.m"
      }
#line 787 "interval.m"
    else
#line 788 "interval.m"
      {
#line 788 "interval.m"
        {
#line 788 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], ((MR_Box) (backend_libs__interval__Id_4)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), backend_libs__interval__SuccMap0_6, &backend_libs__interval__SuccMap_8);
        }
#line 788 "interval.m"
      }
#line 790 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 790 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 790 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 790 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 790 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 790 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 790 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 790 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 790 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 790 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 790 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 790 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 790 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 790 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 790 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 790 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 790 "interval.m"
    {
#line 790 "interval.m"
      MR_Word base;
#line 790 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 790 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_10 = base;
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__SuccMap_8));
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 790 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 790 "interval.m"
    }
#line 783 "interval.m"
  }
#line 780 "interval.m"
}

#line 768 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_succ_4_p_0(
#line 768 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 768 "interval.m"
  MR_Word backend_libs__interval__Succ_6,
#line 768 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 768 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12)
#line 768 "interval.m"
{
#line 771 "interval.m"
  {
#line 771 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 771 "interval.m"
    MR_Word backend_libs__interval__SuccMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 771 "interval.m"
    MR_Word backend_libs__interval__SuccMap_10;
#line 772 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 772 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 772 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 772 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 772 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 772 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 772 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 772 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 772 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 772 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 772 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 772 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 772 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 772 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 772 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 775 "interval.m"
    MR_Word backend_libs__interval__Succ0_9;
#line 773 "interval.m"
    MR_Box backend_libs__interval__conv0_Succ0_9;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 778 "interval.m"
    MR_Word backend_libs__interval__V_45_45;

#line 773 "interval.m"
    {
#line 773 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__SuccMap0_8, ((MR_Box) (backend_libs__interval__Id_5)), &backend_libs__interval__conv0_Succ0_9);
    }
#line 773 "interval.m"
    if (backend_libs__interval__succeeded)
#line 773 "interval.m"
      {
#line 773 "interval.m"
        backend_libs__interval__Succ0_9 = ((MR_Word) backend_libs__interval__conv0_Succ0_9);
#line 773 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 773 "interval.m"
      }
#line 775 "interval.m"
    if (backend_libs__interval__succeeded)
#line 774 "interval.m"
      {
#line 774 "interval.m"
        MR_Word backend_libs__interval__V_13_13;

#line 774 "interval.m"
        {
#line 774 "interval.m"
          backend_libs__interval__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_13_13, 0) = ((MR_Box) (backend_libs__interval__Succ_6));
#line 774 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_13_13, 1) = ((MR_Box) (backend_libs__interval__Succ0_9));
#line 774 "interval.m"
        }
#line 774 "interval.m"
        {
#line 774 "interval.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__V_13_13)), backend_libs__interval__SuccMap0_8, &backend_libs__interval__SuccMap_10);
        }
#line 774 "interval.m"
      }
#line 775 "interval.m"
    else
#line 776 "interval.m"
      {
#line 776 "interval.m"
        MR_Word backend_libs__interval__V_14_14;

#line 776 "interval.m"
        {
#line 776 "interval.m"
          backend_libs__interval__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_14_14, 0) = ((MR_Box) (backend_libs__interval__Succ_6));
#line 776 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 776 "interval.m"
        }
#line 776 "interval.m"
        {
#line 776 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__V_14_14)), backend_libs__interval__SuccMap0_8, &backend_libs__interval__SuccMap_10);
        }
#line 776 "interval.m"
      }
#line 778 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 778 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 778 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 778 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 778 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 778 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 778 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 778 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 778 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 778 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 778 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 778 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 778 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 778 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 778 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 778 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 778 "interval.m"
    {
#line 778 "interval.m"
      MR_Word base;
#line 778 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 778 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_12 = base;
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__SuccMap_10));
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 778 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 778 "interval.m"
    }
#line 771 "interval.m"
  }
#line 768 "interval.m"
}

#line 760 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_start_4_p_0(
#line 760 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 760 "interval.m"
  MR_Word backend_libs__interval__Start_6,
#line 760 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 760 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11)
#line 760 "interval.m"
{
#line 763 "interval.m"
  {
#line 763 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 763 "interval.m"
    MR_Word backend_libs__interval__StartMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 763 "interval.m"
    MR_Word backend_libs__interval__StartMap_9;
#line 764 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 764 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 764 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 764 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 764 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 764 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 764 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 764 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 764 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 764 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 764 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 764 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 764 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 764 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 764 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 766 "interval.m"
    MR_Word backend_libs__interval__V_39_39;

#line 765 "interval.m"
    {
#line 765 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__Start_6)), backend_libs__interval__StartMap0_8, &backend_libs__interval__StartMap_9);
    }
#line 766 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 766 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 766 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 766 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 766 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 766 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 766 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 766 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 766 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 766 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 766 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 766 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 766 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 766 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 766 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 766 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 766 "interval.m"
    {
#line 766 "interval.m"
      MR_Word base;
#line 766 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 766 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_11 = base;
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__StartMap_9));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 766 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 766 "interval.m"
    }
#line 763 "interval.m"
  }
#line 760 "interval.m"
}

#line 752 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_end_4_p_0(
#line 752 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 752 "interval.m"
  MR_Word backend_libs__interval__End_6,
#line 752 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 752 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11)
#line 752 "interval.m"
{
#line 755 "interval.m"
  {
#line 755 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 755 "interval.m"
    MR_Word backend_libs__interval__EndMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 755 "interval.m"
    MR_Word backend_libs__interval__EndMap_9;
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 756 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 758 "interval.m"
    MR_Word backend_libs__interval__V_40_40;

#line 757 "interval.m"
    {
#line 757 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__End_6)), backend_libs__interval__EndMap0_8, &backend_libs__interval__EndMap_9);
    }
#line 758 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 758 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 758 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 758 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 758 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 758 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 758 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 758 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 758 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 758 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 758 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 758 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 758 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 758 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 758 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 758 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 758 "interval.m"
    {
#line 758 "interval.m"
      MR_Word base;
#line 758 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 758 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_11 = base;
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__EndMap_9));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 758 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 758 "interval.m"
    }
#line 755 "interval.m"
  }
#line 752 "interval.m"
}

#line 731 "interval.m"
static void MR_CALL 
backend_libs__interval__record_branch_end_info_3_p_0(
#line 731 "interval.m"
  MR_Word backend_libs__interval__GoalId_4,
#line 731 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 731 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13)
#line 731 "interval.m"
{
#line 734 "interval.m"
  {
#line 734 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 734 "interval.m"
    MR_Word backend_libs__interval__FlushedLater_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 734 "interval.m"
    MR_Word backend_libs__interval__AccessedLater_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 734 "interval.m"
    MR_Word backend_libs__interval__CurInterval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 734 "interval.m"
    MR_Word backend_libs__interval__BranchEndMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 734 "interval.m"
    MR_Word backend_libs__interval__BranchEndInfo_10;
#line 734 "interval.m"
    MR_Word backend_libs__interval__BranchEndMap_11;
#line 735 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 735 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 735 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 735 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 735 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 735 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 735 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 735 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 735 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 735 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 735 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 735 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 741 "interval.m"
    MR_Word backend_libs__interval__V_79_79;

#line 739 "interval.m"
    {
#line 739 "interval.m"
      backend_libs__interval__BranchEndInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 739 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__BranchEndInfo_10, 0) = ((MR_Box) (backend_libs__interval__FlushedLater_6));
#line 739 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__BranchEndInfo_10, 1) = ((MR_Box) (backend_libs__interval__AccessedLater_7));
#line 739 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__BranchEndInfo_10, 2) = ((MR_Box) (backend_libs__interval__CurInterval_8));
#line 739 "interval.m"
    }
#line 740 "interval.m"
    {
#line 740 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ((MR_Box) (backend_libs__interval__GoalId_4)), ((MR_Box) (backend_libs__interval__BranchEndInfo_10)), backend_libs__interval__BranchEndMap0_9, &backend_libs__interval__BranchEndMap_11);
    }
#line 741 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 741 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 741 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 741 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 741 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 741 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 741 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 741 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 741 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 741 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 741 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 741 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 741 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 741 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 741 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 741 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 741 "interval.m"
    {
#line 741 "interval.m"
      MR_Word base;
#line 741 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 741 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_13 = base;
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__BranchEndMap_11));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_84_84));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_85_85));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_86_86));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_87_87));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_88_88));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_89_89));
#line 741 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_90_90));
#line 741 "interval.m"
    }
#line 734 "interval.m"
  }
#line 731 "interval.m"
}

#line 719 "interval.m"
static void MR_CALL 
backend_libs__interval__new_interval_id_3_p_0(
#line 719 "interval.m"
  MR_Word * backend_libs__interval__Id_4,
#line 719 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 719 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12)
#line 719 "interval.m"
{
#line 722 "interval.m"
  {
#line 722 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 722 "interval.m"
    MR_Word backend_libs__interval__Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__IntervalVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 722 "interval.m"
    MR_Integer backend_libs__interval__Num_8;
#line 722 "interval.m"
    MR_Word backend_libs__interval__Counter_9;
#line 722 "interval.m"
    MR_Word backend_libs__interval__IntervalVars_10;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_54_54;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_55_55;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_56_56;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_57_57;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_60_60;

#line 725 "interval.m"
    {
#line 725 "interval.m"
      mercury__counter__allocate_3_p_0(&backend_libs__interval__Num_8, backend_libs__interval__Counter0_6, &backend_libs__interval__Counter_9);
    }
#line 726 "interval.m"
    *backend_libs__interval__Id_4 = (MR_Word) backend_libs__interval__Num_8;
#line 727 "interval.m"
    {
#line 727 "interval.m"
      backend_libs__interval__V_13_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 727 "interval.m"
    {
#line 727 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (*backend_libs__interval__Id_4)), ((MR_Box) (backend_libs__interval__V_13_13)), backend_libs__interval__IntervalVars0_7, &backend_libs__interval__IntervalVars_10);
    }
#line 728 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 728 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 728 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 728 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 728 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 728 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 728 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 728 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 728 "interval.m"
    backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 728 "interval.m"
    backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 728 "interval.m"
    backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 728 "interval.m"
    backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 728 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 728 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 728 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 728 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 729 "interval.m"
    {
#line 729 "interval.m"
      MR_Word base;
#line 729 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 729 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_12 = base;
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_50_50));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_52_52));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__Counter_9));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_54_54));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_55_55));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_56_56));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_57_57));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_58_58));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_59_59));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__IntervalVars_10));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_61_61));
#line 729 "interval.m"
    }
#line 722 "interval.m"
  }
#line 719 "interval.m"
}

#line 713 "interval.m"
static void MR_CALL 
backend_libs__interval__set_cur_interval_3_p_0(
#line 713 "interval.m"
  MR_Word backend_libs__interval__CurInterval_4,
#line 713 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 713 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7)
#line 713 "interval.m"
{
#line 717 "interval.m"
  {
#line 717 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0)));
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1)));
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2)));
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3)));
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4)));
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5)));
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7)));
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 8)));
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9)));
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10)));
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11)));
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12)));
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13)));
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14)));
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15)));
#line 717 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6)));

#line 717 "interval.m"
    {
#line 717 "interval.m"
      MR_Word base;
#line 717 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 717 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_7 = base;
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__CurInterval_4));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_16_16));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_17_17));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_18_18));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 717 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_24_24));
#line 717 "interval.m"
    }
#line 717 "interval.m"
  }
#line 713 "interval.m"
}

#line 709 "interval.m"
static void MR_CALL 
backend_libs__interval__get_cur_interval_2_p_0(
#line 709 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 709 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3)
#line 709 "interval.m"
{
#line 711 "interval.m"
  {
#line 711 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 0)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 1)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 2)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 3)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 4)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 5)));
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_10_10;
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_11_11;
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_12_12;
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 711 "interval.m"
    MR_Word backend_libs__interval__V_18_18;

#line 711 "interval.m"
    *backend_libs__interval__HeadVar__1_1 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 6)));
#line 711 "interval.m"
    backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 7)));
#line 711 "interval.m"
    backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 8)));
#line 711 "interval.m"
    backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 9)));
#line 711 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 10)));
#line 711 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 11)));
#line 711 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 12)));
#line 711 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 13)));
#line 711 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 14)));
#line 711 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 15)));
#line 711 "interval.m"
  }
#line 709 "interval.m"
}

#line 699 "interval.m"
static void MR_CALL 
backend_libs__interval__gather_interval_vars_4_p_0(
#line 699 "interval.m"
  MR_Word backend_libs__interval__IntervalVarMap_5,
#line 699 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6,
#line 699 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_0_9,
#line 699 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_10)
#line 699 "interval.m"
{
#line 702 "interval.m"
  {
#line 702 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 702 "interval.m"
    MR_Word backend_libs__interval__IntervalVars_8;
#line 703 "interval.m"
    MR_Box backend_libs__interval__conv0_IntervalVars_8;

#line 703 "interval.m"
    {
#line 703 "interval.m"
      mercury__map__lookup_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__IntervalVarMap_5, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv0_IntervalVars_8);
    }
#line 703 "interval.m"
    backend_libs__interval__IntervalVars_8 = ((MR_Word) backend_libs__interval__conv0_IntervalVars_8);
#line 704 "interval.m"
    {
#line 704 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_10 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_0_9, backend_libs__interval__IntervalVars_8);
    }
#line 702 "interval.m"
  }
#line 699 "interval.m"
}

#line 679 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1(
#line 679 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 679 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 679 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 679 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 679 "interval.m"
{
#line 679 "interval.m"
  {
#line 679 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 679 "interval.m"
    MR_Word backend_libs__interval__conv0_STATE_VARIABLE_OpenIntervalVars_10;

#line 679 "interval.m"
    {
#line 679 "interval.m"
      backend_libs__interval__gather_interval_vars_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2), &backend_libs__interval__conv0_STATE_VARIABLE_OpenIntervalVars_10);
    }
#line 679 "interval.m"
    *backend_libs__interval__wrapper_arg_3 = ((MR_Box) (backend_libs__interval__conv0_STATE_VARIABLE_OpenIntervalVars_10));
#line 679 "interval.m"
  }
#line 679 "interval.m"
}

#line 672 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(
#line 672 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 672 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17,
#line 672 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_18)
#line 672 "interval.m"
{
#line 675 "interval.m"
  {
#line 675 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 675 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_87_87;
#line 675 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_88_88;
#line 675 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 9)));
#line 675 "interval.m"
    MR_Word backend_libs__interval__IntervalVarMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 14)));
#line 675 "interval.m"
    MR_Word backend_libs__interval__CurOpenIntervals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 8)));
#line 675 "interval.m"
    MR_Word backend_libs__interval__CurOpenIntervalVars_9;
#line 675 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowMap_16;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 676 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 0)));
#line 676 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 1)));
#line 676 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 2)));
#line 676 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 3)));
#line 676 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 4)));
#line 676 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 5)));
#line 676 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 6)));
#line 676 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 7)));
#line 676 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 10)));
#line 676 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 11)));
#line 676 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 12)));
#line 676 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 13)));
#line 676 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 15)));
#line 679 "interval.m"
    MR_Box backend_libs__interval__conv1_CurOpenIntervalVars_9;
#line 691 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowInfo0_10;
#line 681 "interval.m"
    MR_Box backend_libs__interval__conv2_AnchorFollowInfo0_10;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 697 "interval.m"
    MR_Word backend_libs__interval__V_77_77;

#line 679 "interval.m"
    {
#line 679 "interval.m"
      backend_libs__interval__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 679 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 0) = ((MR_Box) (&backend_libs__interval_scalar_common_4[1]));
#line 679 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 1) = ((MR_Box) (backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1));
#line 679 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 679 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 3) = ((MR_Box) (backend_libs__interval__IntervalVarMap_7));
#line 679 "interval.m"
    }
#line 13404 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 680 "interval.m"
    {
#line 680 "interval.m"
      backend_libs__interval__V_20_20 = parse_tree__set_of_var__init_0_f_0(backend_libs__interval__TypeCtorInfo_87_87);
    }
#line 13411 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_88_88 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 679 "interval.m"
    {
#line 679 "interval.m"
      mercury__set__fold_4_p_0(backend_libs__interval__TypeCtorInfo_88_88, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__V_19_19, backend_libs__interval__CurOpenIntervals_8, ((MR_Box) (backend_libs__interval__V_20_20)), &backend_libs__interval__conv1_CurOpenIntervalVars_9);
    }
#line 679 "interval.m"
    backend_libs__interval__CurOpenIntervalVars_9 = ((MR_Word) backend_libs__interval__conv1_CurOpenIntervalVars_9);
#line 681 "interval.m"
    {
#line 681 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, backend_libs__interval__AnchorFollowMap0_6, ((MR_Box) (backend_libs__interval__Anchor_4)), &backend_libs__interval__conv2_AnchorFollowInfo0_10);
    }
#line 681 "interval.m"
    if (backend_libs__interval__succeeded)
#line 681 "interval.m"
      {
#line 681 "interval.m"
        backend_libs__interval__AnchorFollowInfo0_10 = ((MR_Word) backend_libs__interval__conv2_AnchorFollowInfo0_10);
#line 681 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 681 "interval.m"
      }
#line 691 "interval.m"
    if (backend_libs__interval__succeeded)
#line 683 "interval.m"
      {
#line 683 "interval.m"
        MR_Word backend_libs__interval__OpenIntervalVars0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo0_10, (MR_Integer) 0)));
#line 683 "interval.m"
        MR_Word backend_libs__interval__OpenIntervals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo0_10, (MR_Integer) 1)));
#line 683 "interval.m"
        MR_Word backend_libs__interval__OpenIntervalVars_13;
#line 683 "interval.m"
        MR_Word backend_libs__interval__OpenIntervals_14;
#line 683 "interval.m"
        MR_Word backend_libs__interval__AnchorFollowInfo_15;

#line 684 "interval.m"
        {
#line 684 "interval.m"
          backend_libs__interval__OpenIntervalVars_13 = parse_tree__set_of_var__union_2_f_0(backend_libs__interval__TypeCtorInfo_87_87, backend_libs__interval__OpenIntervalVars0_11, backend_libs__interval__CurOpenIntervalVars_9);
        }
#line 686 "interval.m"
        {
#line 686 "interval.m"
          backend_libs__interval__OpenIntervals_14 = mercury__set__union_2_f_0(backend_libs__interval__TypeCtorInfo_88_88, backend_libs__interval__OpenIntervals0_12, backend_libs__interval__CurOpenIntervals_8);
        }
#line 687 "interval.m"
        {
#line 687 "interval.m"
          backend_libs__interval__AnchorFollowInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 687 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_15, 0) = ((MR_Box) (backend_libs__interval__OpenIntervalVars_13));
#line 687 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_15, 1) = ((MR_Box) (backend_libs__interval__OpenIntervals_14));
#line 687 "interval.m"
        }
#line 689 "interval.m"
        {
#line 689 "interval.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, ((MR_Box) (backend_libs__interval__Anchor_4)), ((MR_Box) (backend_libs__interval__AnchorFollowInfo_15)), backend_libs__interval__AnchorFollowMap0_6, &backend_libs__interval__AnchorFollowMap_16);
        }
#line 683 "interval.m"
      }
#line 691 "interval.m"
    else
#line 693 "interval.m"
      {
#line 693 "interval.m"
        MR_Word backend_libs__interval__AnchorFollowInfo_22;

#line 692 "interval.m"
        {
#line 692 "interval.m"
          backend_libs__interval__AnchorFollowInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 692 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_22, 0) = ((MR_Box) (backend_libs__interval__CurOpenIntervalVars_9));
#line 692 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_22, 1) = ((MR_Box) (backend_libs__interval__CurOpenIntervals_8));
#line 692 "interval.m"
        }
#line 694 "interval.m"
        {
#line 694 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, ((MR_Box) (backend_libs__interval__Anchor_4)), ((MR_Box) (backend_libs__interval__AnchorFollowInfo_22)), backend_libs__interval__AnchorFollowMap0_6, &backend_libs__interval__AnchorFollowMap_16);
        }
#line 693 "interval.m"
      }
#line 697 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 0)));
#line 697 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 1)));
#line 697 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 2)));
#line 697 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 3)));
#line 697 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 4)));
#line 697 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 5)));
#line 697 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 6)));
#line 697 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 7)));
#line 697 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 8)));
#line 697 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 9)));
#line 697 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 10)));
#line 697 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 11)));
#line 697 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 12)));
#line 697 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 13)));
#line 697 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 14)));
#line 697 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 15)));
#line 697 "interval.m"
    {
#line 697 "interval.m"
      MR_Word base;
#line 697 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 697 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_18 = base;
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__AnchorFollowMap_16));
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 697 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 697 "interval.m"
    }
#line 675 "interval.m"
  }
#line 672 "interval.m"
}

#line 666 "interval.m"
static void MR_CALL 
backend_libs__interval__one_open_interval_3_p_0(
#line 666 "interval.m"
  MR_Word backend_libs__interval__IntervalId_4,
#line 666 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 666 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7)
#line 666 "interval.m"
{
#line 669 "interval.m"
  {
#line 669 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_9_9;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_10_10;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_11_11;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_12_12;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_22_22;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_23_23;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_24_24;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_25_25;
#line 670 "interval.m"
    MR_Word backend_libs__interval__V_18_18;

#line 670 "interval.m"
    {
#line 670 "interval.m"
      backend_libs__interval__V_9_9 = mercury__set__make_singleton_set_1_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (backend_libs__interval__IntervalId_4)));
    }
#line 670 "interval.m"
    backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0)));
#line 670 "interval.m"
    backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1)));
#line 670 "interval.m"
    backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2)));
#line 670 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3)));
#line 670 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4)));
#line 670 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5)));
#line 670 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6)));
#line 670 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7)));
#line 670 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 8)));
#line 670 "interval.m"
    backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9)));
#line 670 "interval.m"
    backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10)));
#line 670 "interval.m"
    backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11)));
#line 670 "interval.m"
    backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12)));
#line 670 "interval.m"
    backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13)));
#line 670 "interval.m"
    backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14)));
#line 670 "interval.m"
    backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15)));
#line 670 "interval.m"
    {
#line 670 "interval.m"
      MR_Word base;
#line 670 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 670 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_7 = base;
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_15_15));
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_16_16));
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_17_17));
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_24_24));
#line 670 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_25_25));
#line 670 "interval.m"
    }
#line 669 "interval.m"
  }
#line 666 "interval.m"
}

#line 661 "interval.m"
static void MR_CALL 
backend_libs__interval__no_open_intervals_2_p_0(
#line 661 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4,
#line 661 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_5)
#line 661 "interval.m"
{
#line 663 "interval.m"
  {
#line 663 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 663 "interval.m"
    MR_Word backend_libs__interval__V_7_7;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_8_8;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_9_9;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_10_10;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_11_11;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_12_12;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_18_18;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_22_22;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_23_23;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_16_16;

#line 664 "interval.m"
    {
#line 664 "interval.m"
      backend_libs__interval__V_7_7 = mercury__set__init_0_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0);
    }
#line 664 "interval.m"
    backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 0)));
#line 664 "interval.m"
    backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 1)));
#line 664 "interval.m"
    backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 2)));
#line 664 "interval.m"
    backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 3)));
#line 664 "interval.m"
    backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 4)));
#line 664 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 5)));
#line 664 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 6)));
#line 664 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 7)));
#line 664 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 8)));
#line 664 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 9)));
#line 664 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 10)));
#line 664 "interval.m"
    backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 11)));
#line 664 "interval.m"
    backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 12)));
#line 664 "interval.m"
    backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 13)));
#line 664 "interval.m"
    backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 14)));
#line 664 "interval.m"
    backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 15)));
#line 664 "interval.m"
    {
#line 664 "interval.m"
      MR_Word base;
#line 664 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 664 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_5 = base;
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_8_8));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_15_15));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_7_7));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_17_17));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_18_18));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 664 "interval.m"
    }
#line 663 "interval.m"
  }
#line 661 "interval.m"
}

#line 655 "interval.m"
static void MR_CALL 
backend_libs__interval__set_open_intervals_3_p_0(
#line 655 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_4,
#line 655 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 655 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7)
#line 655 "interval.m"
{
#line 659 "interval.m"
  {
#line 659 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0)));
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1)));
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2)));
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3)));
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4)));
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5)));
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6)));
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7)));
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9)));
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10)));
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11)));
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12)));
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13)));
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14)));
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15)));
#line 659 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 8)));

#line 659 "interval.m"
    {
#line 659 "interval.m"
      MR_Word base;
#line 659 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 659 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_7 = base;
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_15_15));
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_16_16));
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__OpenIntervals_4));
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_18_18));
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 659 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_24_24));
#line 659 "interval.m"
    }
#line 659 "interval.m"
  }
#line 655 "interval.m"
}

#line 650 "interval.m"
static void MR_CALL 
backend_libs__interval__get_open_intervals_2_p_0(
#line 650 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3,
#line 650 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_4)
#line 650 "interval.m"
{
#line 653 "interval.m"
  {
#line 653 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 0)));
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 1)));
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 2)));
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 3)));
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 4)));
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 5)));
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 6)));
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 7)));
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_18_18;
#line 653 "interval.m"
    MR_Word backend_libs__interval__V_19_19;

#line 653 "interval.m"
    *backend_libs__interval__OpenIntervals_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 8)));
#line 653 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 9)));
#line 653 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 10)));
#line 653 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 11)));
#line 653 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 12)));
#line 653 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 13)));
#line 653 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 14)));
#line 653 "interval.m"
    backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 15)));
#line 653 "interval.m"
  }
#line 650 "interval.m"
}

#line 617 "interval.m"
static void MR_CALL 
backend_libs__interval__reached_cond_then_3_p_0(
#line 617 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_4,
#line 617 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 617 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13)
#line 617 "interval.m"
{
#line 620 "interval.m"
  {
#line 620 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 620 "interval.m"
    MR_Word backend_libs__interval__GoalId_6;
#line 620 "interval.m"
    MR_Word backend_libs__interval__ThenStartId_7;
#line 620 "interval.m"
    MR_Word backend_libs__interval__CondThenAnchor_8;
#line 620 "interval.m"
    MR_Word backend_libs__interval__CondTailId_9;
#line 620 "interval.m"
    MR_Word backend_libs__interval__OpenIntervals0_10;
#line 620 "interval.m"
    MR_Word backend_libs__interval__OpenIntervals_11;
#line 620 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14;
#line 620 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_15_15;
#line 620 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_16_16;
#line 620 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17;
#line 620 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18;
#line 620 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19;
#line 620 "interval.m"
    MR_Word backend_libs__interval__CurInterval_26;
#line 620 "interval.m"
    MR_Word backend_libs__interval__CondEndMap0_27;
#line 620 "interval.m"
    MR_Word backend_libs__interval__CondEndMap_28;
#line 747 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 747 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 747 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 747 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 747 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 747 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 747 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 747 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 747 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 747 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 747 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 747 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 747 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 747 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 750 "interval.m"
    MR_Word backend_libs__interval__V_60_60;
#line 750 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 750 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 750 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 750 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 750 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 750 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 750 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 750 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 750 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 750 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 750 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 750 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 750 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 750 "interval.m"
    MR_Word backend_libs__interval__V_65_65;

#line 621 "interval.m"
    {
#line 621 "interval.m"
      backend_libs__interval__GoalId_6 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_4);
    }
#line 747 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 747 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 747 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 747 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 747 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 747 "interval.m"
    backend_libs__interval__CondEndMap0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 747 "interval.m"
    backend_libs__interval__CurInterval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 747 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 747 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 747 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 747 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 747 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 747 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 747 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 747 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 747 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 749 "interval.m"
    {
#line 749 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (backend_libs__interval__GoalId_6)), ((MR_Box) (backend_libs__interval__CurInterval_26)), backend_libs__interval__CondEndMap0_27, &backend_libs__interval__CondEndMap_28);
    }
#line 750 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 750 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 750 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 750 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 750 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 750 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 750 "interval.m"
    backend_libs__interval__ThenStartId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 750 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 750 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 750 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 750 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 750 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 750 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 750 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 750 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 750 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 750 "interval.m"
    {
#line 750 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 0) = ((MR_Box) (backend_libs__interval__V_60_60));
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 1) = ((MR_Box) (backend_libs__interval__V_61_61));
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 2) = ((MR_Box) (backend_libs__interval__V_62_62));
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 3) = ((MR_Box) (backend_libs__interval__V_63_63));
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 4) = ((MR_Box) (backend_libs__interval__V_64_64));
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 5) = ((MR_Box) (backend_libs__interval__CondEndMap_28));
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 6) = ((MR_Box) (backend_libs__interval__ThenStartId_7));
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 7) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 8) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 9) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 10) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 11) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 12) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 13) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 14) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 750 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 15) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 750 "interval.m"
    }
#line 626 "interval.m"
    {
#line 626 "interval.m"
      backend_libs__interval__CondThenAnchor_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 626 "interval.m"
      MR_hl_field(MR_mktag(2), backend_libs__interval__CondThenAnchor_8, 0) = ((MR_Box) (backend_libs__interval__GoalId_6));
#line 626 "interval.m"
    }
#line 624 "interval.m"
    {
#line 624 "interval.m"
      backend_libs__interval__record_interval_start_4_p_0(backend_libs__interval__ThenStartId_7, backend_libs__interval__CondThenAnchor_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_15_15);
    }
#line 625 "interval.m"
    {
#line 625 "interval.m"
      backend_libs__interval__new_interval_id_3_p_0(&backend_libs__interval__CondTailId_9, backend_libs__interval__STATE_VARIABLE_IntervalInfo_15_15, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_16_16);
    }
#line 627 "interval.m"
    {
#line 627 "interval.m"
      backend_libs__interval__record_interval_end_4_p_0(backend_libs__interval__CondTailId_9, backend_libs__interval__CondThenAnchor_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_16_16, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17);
    }
#line 628 "interval.m"
    {
#line 628 "interval.m"
      backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__CondTailId_9, backend_libs__interval__ThenStartId_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18);
    }
#line 629 "interval.m"
    {
#line 629 "interval.m"
      backend_libs__interval__set_cur_interval_3_p_0(backend_libs__interval__CondTailId_9, backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19);
    }
#line 630 "interval.m"
    {
#line 630 "interval.m"
      backend_libs__interval__get_open_intervals_2_p_0(backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, &backend_libs__interval__OpenIntervals0_10);
    }
#line 631 "interval.m"
    {
#line 631 "interval.m"
      mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (backend_libs__interval__CondTailId_9)), backend_libs__interval__OpenIntervals0_10, &backend_libs__interval__OpenIntervals_11);
    }
#line 632 "interval.m"
    {
#line 632 "interval.m"
      backend_libs__interval__set_open_intervals_3_p_0(backend_libs__interval__OpenIntervals_11, backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_13);
#line 632 "interval.m"
      return;
    }
#line 620 "interval.m"
  }
#line 617 "interval.m"
}

#line 590 "interval.m"
static void MR_CALL 
backend_libs__interval__enter_branch_tail_4_p_0(
#line 590 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_5,
#line 590 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 590 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 590 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10)
#line 590 "interval.m"
{
#line 593 "interval.m"
  {
#line 593 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 593 "interval.m"
    MR_Word backend_libs__interval__BranchTailId_8;
#line 593 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11;
#line 593 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_12_12;
#line 593 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_13_13;
#line 593 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14;
#line 593 "interval.m"
    MR_Word backend_libs__interval__Counter0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 593 "interval.m"
    MR_Word backend_libs__interval__IntervalVars0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 593 "interval.m"
    MR_Integer backend_libs__interval__Num_22;
#line 593 "interval.m"
    MR_Word backend_libs__interval__Counter_23;
#line 593 "interval.m"
    MR_Word backend_libs__interval__IntervalVars_24;
#line 593 "interval.m"
    MR_Word backend_libs__interval__V_25_25;
#line 593 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 593 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 593 "interval.m"
    MR_Word backend_libs__interval__V_60_60;
#line 593 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 593 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 593 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 593 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 593 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 593 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 593 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 593 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 593 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 593 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 593 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 723 "interval.m"
    MR_Word backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_72_72;

#line 725 "interval.m"
    {
#line 725 "interval.m"
      mercury__counter__allocate_3_p_0(&backend_libs__interval__Num_22, backend_libs__interval__Counter0_20, &backend_libs__interval__Counter_23);
    }
#line 726 "interval.m"
    backend_libs__interval__BranchTailId_8 = (MR_Word) backend_libs__interval__Num_22;
#line 727 "interval.m"
    {
#line 727 "interval.m"
      backend_libs__interval__V_25_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 727 "interval.m"
    {
#line 727 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__BranchTailId_8)), ((MR_Box) (backend_libs__interval__V_25_25)), backend_libs__interval__IntervalVars0_21, &backend_libs__interval__IntervalVars_24);
    }
#line 728 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 728 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 728 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 728 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 728 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 728 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 728 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 728 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 728 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 728 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 728 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 728 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 728 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 728 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 728 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 728 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 729 "interval.m"
    {
#line 729 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 0) = ((MR_Box) (backend_libs__interval__V_58_58));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 1) = ((MR_Box) (backend_libs__interval__V_59_59));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 2) = ((MR_Box) (backend_libs__interval__V_60_60));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 3) = ((MR_Box) (backend_libs__interval__V_61_61));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 4) = ((MR_Box) (backend_libs__interval__V_62_62));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 5) = ((MR_Box) (backend_libs__interval__V_63_63));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 6) = ((MR_Box) (backend_libs__interval__V_64_64));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 7) = ((MR_Box) (backend_libs__interval__Counter_23));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 8) = ((MR_Box) (backend_libs__interval__V_66_66));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 9) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 10) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 11) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 12) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 13) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 14) = ((MR_Box) (backend_libs__interval__IntervalVars_24));
#line 729 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 15) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 729 "interval.m"
    }
#line 595 "interval.m"
    {
#line 595 "interval.m"
      backend_libs__interval__record_interval_end_4_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__EndAnchor_5, backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_12_12);
    }
#line 596 "interval.m"
    {
#line 596 "interval.m"
      backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__AfterId_6, backend_libs__interval__STATE_VARIABLE_IntervalInfo_12_12, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_13_13);
    }
#line 597 "interval.m"
    {
#line 597 "interval.m"
      backend_libs__interval__set_cur_interval_3_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_13_13, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14);
    }
#line 598 "interval.m"
    {
#line 598 "interval.m"
      backend_libs__interval__one_open_interval_3_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, backend_libs__interval__STATE_VARIABLE_IntervalInfo_10);
#line 598 "interval.m"
      return;
    }
#line 593 "interval.m"
  }
#line 590 "interval.m"
}

#line 522 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_cases_10_p_0(
#line 522 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 522 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 522 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_2,
#line 522 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_3,
#line 522 "interval.m"
  MR_Word backend_libs__interval__BeforeId_4,
#line 522 "interval.m"
  MR_Word backend_libs__interval__AfterId_5,
#line 522 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__6_6,
#line 522 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 522 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8,
#line 522 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_9,
#line 522 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_10)
#line 522 "interval.m"
{
#line 527 "interval.m"
  {
#line 527 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 527 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 527 "interval.m"
      {
#line 527 "interval.m"
        *backend_libs__interval__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_Acc_10 = backend_libs__interval__STATE_VARIABLE_Acc_0_9;
#line 527 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_IntervalInfo_8 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7;
#line 527 "interval.m"
      }
#line 527 "interval.m"
    else
#line 530 "interval.m"
      {
#line 530 "interval.m"
        MR_Word backend_libs__interval__Case_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 530 "interval.m"
        MR_Word backend_libs__interval__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 530 "interval.m"
        MR_Word backend_libs__interval__OpenIntervals_27;
#line 530 "interval.m"
        MR_Word backend_libs__interval__OpenIntervalsList_28;
#line 530 "interval.m"
        MR_Word backend_libs__interval__Goal_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case_21, (MR_Integer) 2)));
#line 530 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 530 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39;
#line 530 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_40_40;
#line 530 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_42_42;
#line 530 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_43_43;
#line 531 "interval.m"
        MR_Word backend_libs__interval___MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case_21, (MR_Integer) 0)));
#line 531 "interval.m"
        MR_Word backend_libs__interval___OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case_21, (MR_Integer) 1)));

#line 532 "interval.m"
        {
#line 532 "interval.m"
          backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_3, backend_libs__interval__AfterId_5, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
        }
#line 533 "interval.m"
        {
#line 533 "interval.m"
          backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Goal_33, backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, backend_libs__interval__STATE_VARIABLE_Acc_0_9, &backend_libs__interval__STATE_VARIABLE_Acc_40_40);
        }
#line 534 "interval.m"
        {
#line 534 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, backend_libs__interval__StartAnchor_2, backend_libs__interval__BeforeId_4, &backend_libs__interval__OpenIntervals_27, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_42_42, backend_libs__interval__STATE_VARIABLE_Acc_40_40, &backend_libs__interval__STATE_VARIABLE_Acc_43_43);
        }
#line 536 "interval.m"
        {
#line 536 "interval.m"
          backend_libs__interval__build_interval_info_in_cases_10_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Cases_22, backend_libs__interval__StartAnchor_2, backend_libs__interval__EndAnchor_3, backend_libs__interval__BeforeId_4, backend_libs__interval__AfterId_5, &backend_libs__interval__OpenIntervalsList_28, backend_libs__interval__STATE_VARIABLE_IntervalInfo_42_42, backend_libs__interval__STATE_VARIABLE_IntervalInfo_8, backend_libs__interval__STATE_VARIABLE_Acc_43_43, backend_libs__interval__STATE_VARIABLE_Acc_10);
        }
#line 530 "interval.m"
        {
#line 530 "interval.m"
          MR_Word base;
#line 530 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "interval.m"
          *backend_libs__interval__HeadVar__6_6 = base;
#line 530 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__OpenIntervals_27));
#line 530 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__OpenIntervalsList_28));
#line 530 "interval.m"
        }
#line 530 "interval.m"
      }
#line 527 "interval.m"
  }
#line 522 "interval.m"
}

#line 506 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_disj_11_p_0(
#line 506 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 506 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 506 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_2,
#line 506 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_3,
#line 506 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_4,
#line 506 "interval.m"
  MR_Word backend_libs__interval__BeforeId_5,
#line 506 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 506 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7,
#line 506 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 506 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9,
#line 506 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_10,
#line 506 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_11)
#line 506 "interval.m"
{
#line 511 "interval.m"
  {
#line 511 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 511 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 511 "interval.m"
      {
#line 511 "interval.m"
        {
#line 511 "interval.m"
          *backend_libs__interval__HeadVar__7_7 = mercury__set__init_0_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0);
        }
#line 511 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_Acc_11 = backend_libs__interval__STATE_VARIABLE_Acc_0_10;
#line 511 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8;
#line 511 "interval.m"
      }
#line 511 "interval.m"
    else
#line 514 "interval.m"
      {
#line 514 "interval.m"
        MR_Word backend_libs__interval__Goal_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 514 "interval.m"
        MR_Word backend_libs__interval__Goals_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 514 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 514 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39;
#line 514 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_40_40;
#line 514 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41;
#line 514 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_42_42;
#line 519 "interval.m"
        MR_Word backend_libs__interval___OpenIntervals_33;

#line 515 "interval.m"
        {
#line 515 "interval.m"
          backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_4, backend_libs__interval__AfterId_6, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
        }
#line 516 "interval.m"
        {
#line 516 "interval.m"
          backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Goal_23, backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, backend_libs__interval__STATE_VARIABLE_Acc_0_10, &backend_libs__interval__STATE_VARIABLE_Acc_40_40);
        }
#line 517 "interval.m"
        {
#line 517 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(backend_libs__interval__MaybeNeedsFlush_2, backend_libs__interval__StartAnchor_3, backend_libs__interval__BeforeId_5, backend_libs__interval__HeadVar__7_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, backend_libs__interval__STATE_VARIABLE_Acc_40_40, &backend_libs__interval__STATE_VARIABLE_Acc_42_42);
        }
#line 519 "interval.m"
        {
#line 519 "interval.m"
          backend_libs__interval__build_interval_info_in_disj_11_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Goals_24, (MR_Integer) 0, backend_libs__interval__StartAnchor_3, backend_libs__interval__EndAnchor_4, backend_libs__interval__BeforeId_5, backend_libs__interval__AfterId_6, &backend_libs__interval___OpenIntervals_33, backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, backend_libs__interval__STATE_VARIABLE_IntervalInfo_9, backend_libs__interval__STATE_VARIABLE_Acc_42_42, backend_libs__interval__STATE_VARIABLE_Acc_11);
        }
#line 514 "interval.m"
      }
#line 511 "interval.m"
  }
#line 506 "interval.m"
}

#line 423 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(
#line 423 "interval.m"
  MR_Word backend_libs__interval__ModuleInfo_1,
#line 423 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 423 "interval.m"
{
#line 426 "interval.m"
  while (MR_TRUE)
#line 426 "interval.m"
    {
#line 426 "interval.m"
      /* tailcall optimized into a loop */
#line 426 "interval.m"
      {
#line 426 "interval.m"
        MR_bool backend_libs__interval__succeeded;

#line 426 "interval.m"
        if ((backend_libs__interval__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 426 "interval.m"
          backend_libs__interval__succeeded = MR_TRUE;
#line 426 "interval.m"
        else
#line 427 "interval.m"
          {
#line 427 "interval.m"
            MR_Word backend_libs__interval__ArgMode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 427 "interval.m"
            MR_Word backend_libs__interval__ArgsModes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 427 "interval.m"
            MR_Word backend_libs__interval__InitCell_7;
#line 427 "interval.m"
            MR_Word backend_libs__interval__InitArg_8;
#line 427 "interval.m"
            MR_Word backend_libs__interval__FinalCell_9;
#line 427 "interval.m"
            MR_Word backend_libs__interval__FinalArg_10;
#line 427 "interval.m"
            MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__ArgMode_5, (MR_Integer) 0)));
#line 427 "interval.m"
            MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__ArgMode_5, (MR_Integer) 1)));
#line 427 "interval.m"
            MR_Word backend_libs__interval__V_13_13;
#line 427 "interval.m"
            MR_Word backend_libs__interval__V_14_14;

#line 428 "interval.m"
            backend_libs__interval__InitCell_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_11_11, (MR_Integer) 0)));
#line 428 "interval.m"
            backend_libs__interval__InitArg_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_11_11, (MR_Integer) 1)));
#line 428 "interval.m"
            backend_libs__interval__FinalCell_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_12_12, (MR_Integer) 0)));
#line 428 "interval.m"
            backend_libs__interval__FinalArg_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_12_12, (MR_Integer) 1)));
#line 429 "interval.m"
            {
#line 429 "interval.m"
              backend_libs__interval__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 429 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__V_13_13, 0) = ((MR_Box) (backend_libs__interval__InitCell_7));
#line 429 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__V_13_13, 1) = ((MR_Box) (backend_libs__interval__FinalCell_9));
#line 429 "interval.m"
            }
#line 429 "interval.m"
            {
#line 429 "interval.m"
              backend_libs__interval__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__V_13_13);
            }
#line 427 "interval.m"
            if (backend_libs__interval__succeeded)
#line 427 "interval.m"
              {
#line 430 "interval.m"
                {
#line 430 "interval.m"
                  backend_libs__interval__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 430 "interval.m"
                  MR_hl_field(MR_mktag(0), backend_libs__interval__V_14_14, 0) = ((MR_Box) (backend_libs__interval__InitArg_8));
#line 430 "interval.m"
                  MR_hl_field(MR_mktag(0), backend_libs__interval__V_14_14, 1) = ((MR_Box) (backend_libs__interval__FinalArg_10));
#line 430 "interval.m"
                }
#line 430 "interval.m"
                {
#line 430 "interval.m"
                  backend_libs__interval__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__V_14_14);
                }
#line 427 "interval.m"
                if (backend_libs__interval__succeeded)
#line 427 "interval.m"
                  {
#line 431 "interval.m"
                    {
#line 431 "interval.m"
                      backend_libs__interval__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__FinalCell_9);
                    }
#line 427 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 427 "interval.m"
                      {
#line 432 "interval.m"
                        {
#line 432 "interval.m"
                          backend_libs__interval__succeeded = check_hlds__inst_match__inst_is_not_partly_unique_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__FinalArg_10);
                        }
#line 427 "interval.m"
                        if (backend_libs__interval__succeeded)
#line 433 "interval.m"
                          {
#line 433 "interval.m"
                            /* direct tailcall eliminated */
#line 433 "interval.m"
                            {
#line 433 "interval.m"
                              MR_Word backend_libs__interval__HeadVar__2__tmp_copy_2 = backend_libs__interval__ArgsModes_6;

#line 433 "interval.m"
                              backend_libs__interval__HeadVar__2_2 = backend_libs__interval__HeadVar__2__tmp_copy_2;
#line 433 "interval.m"
                            }
#line 433 "interval.m"
                            continue;
#line 433 "interval.m"
                          }
#line 427 "interval.m"
                      }
#line 427 "interval.m"
                  }
#line 427 "interval.m"
              }
#line 427 "interval.m"
          }
#line 426 "interval.m"
        return backend_libs__interval__succeeded;
#line 426 "interval.m"
      }
#line 426 "interval.m"
      break;
#line 426 "interval.m"
    }
#line 423 "interval.m"
}

#line 182 "interval.m"
MR_Integer MR_CALL 
backend_libs__interval__interval_id_to_int_1_f_0(
#line 182 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1)
#line 182 "interval.m"
{
#line 1340 "interval.m"
  {
#line 1340 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1340 "interval.m"
    MR_Integer backend_libs__interval__Num_3 = (MR_Integer) backend_libs__interval__HeadVar__1_1;

#line 1340 "interval.m"
    return backend_libs__interval__Num_3;
#line 1340 "interval.m"
  }
#line 182 "interval.m"
}

#line 1338 "interval.m"
static void MR_CALL 
backend_libs__interval__write_int_list_3_p_0_1(
#line 1338 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1338 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1338 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1338 "interval.m"
{
#line 1338 "interval.m"
  {
#line 1338 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1338 "interval.m"
    {
#line 1338 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1338 "interval.m"
      return;
    }
#line 1338 "interval.m"
  }
#line 1338 "interval.m"
}

#line 180 "interval.m"
void MR_CALL 
backend_libs__interval__write_int_list_3_p_0(
#line 180 "interval.m"
  MR_Word backend_libs__interval__List_4)
#line 180 "interval.m"
{
#line 1337 "interval.m"
  {
#line 1337 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1338 "interval.m"
    {
#line 1338 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__List_4, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[14]);
#line 1338 "interval.m"
      return;
    }
#line 1337 "interval.m"
  }
#line 180 "interval.m"
}

#line 1266 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_2(
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
      backend_libs__interval__dump_anchor_follow_3_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
#line 1266 "interval.m"
      return;
    }
#line 1266 "interval.m"
  }
#line 1266 "interval.m"
}

#line 1262 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_1(
#line 1262 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1262 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1262 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1262 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1262 "interval.m"
{
#line 1262 "interval.m"
  {
#line 1262 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1262 "interval.m"
    {
#line 1262 "interval.m"
      backend_libs__interval__dump_interval_info_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__interval__wrapper_arg_1));
#line 1262 "interval.m"
      return;
    }
#line 1262 "interval.m"
  }
#line 1262 "interval.m"
}

#line 178 "interval.m"
void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0(
#line 178 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_4)
#line 178 "interval.m"
{
#line 1254 "interval.m"
  {
#line 1254 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_108_108 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_109_109 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_115_115;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__StartIds_6;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__EndIds_7;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__VarsIds_8;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__SuccIds_9;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__IntervalIds0_10;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__IntervalIds_11;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__AnchorFollows_12;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_18_18;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_22_22;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_54_54;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_55_55;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_56_56;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_57_57;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_60_60;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 1258 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 1262 "interval.m"
    MR_Box backend_libs__interval__conv0_STATE_VARIABLE_IO_27_27;
#line 1264 "interval.m"
    MR_Word backend_libs__interval__V_93_93;
#line 1264 "interval.m"
    MR_Word backend_libs__interval__V_94_94;
#line 1264 "interval.m"
    MR_Word backend_libs__interval__V_95_95;
#line 1264 "interval.m"
    MR_Word backend_libs__interval__V_96_96;
#line 1264 "interval.m"
    MR_Word backend_libs__interval__V_97_97;
#line 1264 "interval.m"
    MR_Word backend_libs__interval__V_98_98;
#line 1264 "interval.m"
    MR_Word backend_libs__interval__V_99_99;
#line 1264 "interval.m"
    MR_Word backend_libs__interval__V_100_100;
#line 1264 "interval.m"
    MR_Word backend_libs__interval__V_101_101;
#line 1264 "interval.m"
    MR_Word backend_libs__interval__V_102_102;
#line 1264 "interval.m"
    MR_Word backend_libs__interval__V_103_103;
#line 1264 "interval.m"
    MR_Word backend_libs__interval__V_104_104;
#line 1264 "interval.m"
    MR_Word backend_libs__interval__V_105_105;
#line 1264 "interval.m"
    MR_Word backend_libs__interval__V_106_106;
#line 1264 "interval.m"
    MR_Word backend_libs__interval__V_107_107;
#line 1266 "interval.m"
    MR_Box backend_libs__interval__conv1_STATE_VARIABLE_IO_14;

#line 1255 "interval.m"
    {
#line 1255 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__TypeCtorInfo_109_109, backend_libs__interval__V_15_15, &backend_libs__interval__StartIds_6);
    }
#line 1256 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1256 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1256 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1256 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1256 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1256 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1256 "interval.m"
    backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1256 "interval.m"
    backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1256 "interval.m"
    backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1256 "interval.m"
    backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1256 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1256 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1256 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1256 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1256 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1256 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1256 "interval.m"
    {
#line 1256 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__TypeCtorInfo_109_109, backend_libs__interval__V_16_16, &backend_libs__interval__EndIds_7);
    }
#line 1257 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1257 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1257 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1257 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1257 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1257 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1257 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1257 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1257 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1257 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1257 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1257 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1257 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1257 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1257 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1257 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1257 "interval.m"
    {
#line 1257 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__V_17_17, &backend_libs__interval__VarsIds_8);
    }
#line 1258 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1258 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1258 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1258 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1258 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1258 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1258 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1258 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1258 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1258 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1258 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1258 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1258 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1258 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1258 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1258 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1258 "interval.m"
    {
#line 1258 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__V_18_18, &backend_libs__interval__SuccIds_9);
    }
#line 1259 "interval.m"
    {
#line 1259 "interval.m"
      backend_libs__interval__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_22_22, 0) = ((MR_Box) (backend_libs__interval__SuccIds_9));
#line 1259 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1259 "interval.m"
    }
#line 1259 "interval.m"
    {
#line 1259 "interval.m"
      backend_libs__interval__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 0) = ((MR_Box) (backend_libs__interval__VarsIds_8));
#line 1259 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 1) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 1259 "interval.m"
    }
#line 1259 "interval.m"
    {
#line 1259 "interval.m"
      backend_libs__interval__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_20_20, 0) = ((MR_Box) (backend_libs__interval__EndIds_7));
#line 1259 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_20_20, 1) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 1259 "interval.m"
    }
#line 1259 "interval.m"
    {
#line 1259 "interval.m"
      backend_libs__interval__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_19_19, 0) = ((MR_Box) (backend_libs__interval__StartIds_6));
#line 1259 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_19_19, 1) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 1259 "interval.m"
    }
#line 1259 "interval.m"
    {
#line 1259 "interval.m"
      mercury__list__condense_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__V_19_19, &backend_libs__interval__IntervalIds0_10);
    }
#line 1260 "interval.m"
    {
#line 1260 "interval.m"
      mercury__list__sort_and_remove_dups_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__IntervalIds0_10, &backend_libs__interval__IntervalIds_11);
    }
#line 1261 "interval.m"
    {
#line 1261 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "INTERVALS:\n");
    }
#line 1262 "interval.m"
    {
#line 1262 "interval.m"
      backend_libs__interval__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1262 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 0) = ((MR_Box) (&backend_libs__interval_scalar_common_4[0]));
#line 1262 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 1) = ((MR_Box) (backend_libs__interval__dump_interval_info_3_p_0_1));
#line 1262 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1262 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 3) = ((MR_Box) (backend_libs__interval__IntervalInfo_4));
#line 1262 "interval.m"
    }
#line 15375 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_115_115 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1262 "interval.m"
    {
#line 1262 "interval.m"
      mercury__list__foldl_4_p_2(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__TypeCtorInfo_115_115, backend_libs__interval__V_26_26, backend_libs__interval__IntervalIds_11, ((MR_Box) ((MR_Integer) 0)), &backend_libs__interval__conv0_STATE_VARIABLE_IO_27_27);
    }
#line 1264 "interval.m"
    backend_libs__interval__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1264 "interval.m"
    backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1264 "interval.m"
    backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1264 "interval.m"
    backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1264 "interval.m"
    backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1264 "interval.m"
    backend_libs__interval__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1264 "interval.m"
    backend_libs__interval__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1264 "interval.m"
    backend_libs__interval__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1264 "interval.m"
    backend_libs__interval__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1264 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1264 "interval.m"
    backend_libs__interval__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1264 "interval.m"
    backend_libs__interval__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1264 "interval.m"
    backend_libs__interval__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1264 "interval.m"
    backend_libs__interval__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1264 "interval.m"
    backend_libs__interval__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1264 "interval.m"
    backend_libs__interval__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1264 "interval.m"
    {
#line 1264 "interval.m"
      mercury__map__to_assoc_list_2_p_0(backend_libs__interval__TypeCtorInfo_109_109, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, backend_libs__interval__V_28_28, &backend_libs__interval__AnchorFollows_12);
    }
#line 1265 "interval.m"
    {
#line 1265 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\nANCHOR FOLLOW:\n");
    }
#line 1266 "interval.m"
    {
#line 1266 "interval.m"
      mercury__list__foldl_4_p_2((MR_Word) &backend_libs__interval_scalar_common_2[0], backend_libs__interval__TypeCtorInfo_115_115, (MR_Word) &backend_libs__interval_scalar_common_2[13], backend_libs__interval__AnchorFollows_12, ((MR_Box) ((MR_Integer) 0)), &backend_libs__interval__conv1_STATE_VARIABLE_IO_14);
    }
#line 1254 "interval.m"
  }
#line 178 "interval.m"
}

#line 175 "interval.m"
void MR_CALL 
backend_libs__interval__apply_headvar_correction_4_p_0(
#line 175 "interval.m"
  MR_Word backend_libs__interval__HeadVarSet_5,
#line 175 "interval.m"
  MR_Word backend_libs__interval__RenameMap_6,
#line 175 "interval.m"
  MR_Word backend_libs__interval__Goal0_7,
#line 175 "interval.m"
  MR_Word * backend_libs__interval__Goal_8)
#line 175 "interval.m"
{
#line 1217 "interval.m"
  {
#line 1217 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1217 "interval.m"
    MR_Word backend_libs__interval__TypeInfo_13_13;
#line 1217 "interval.m"
    MR_Word backend_libs__interval__HeadVars_9;
#line 1217 "interval.m"
    MR_Word backend_libs__interval__Subst_10;
#line 1217 "interval.m"
    MR_Word backend_libs__interval__V_11_11;

#line 1218 "interval.m"
    {
#line 1218 "interval.m"
      backend_libs__interval__HeadVars_9 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVarSet_5);
    }
#line 15465 "backend_libs.interval.c"
    backend_libs__interval__TypeInfo_13_13 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1219 "interval.m"
    {
#line 1219 "interval.m"
      backend_libs__interval__V_11_11 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_13_13, backend_libs__interval__TypeInfo_13_13);
    }
#line 1219 "interval.m"
    {
#line 1219 "interval.m"
      backend_libs__interval__build_headvar_subst_4_p_0(backend_libs__interval__HeadVars_9, backend_libs__interval__RenameMap_6, backend_libs__interval__V_11_11, &backend_libs__interval__Subst_10);
    }
#line 1220 "interval.m"
    {
#line 1220 "interval.m"
      backend_libs__interval__succeeded = mercury__map__is_empty_1_p_0(backend_libs__interval__TypeInfo_13_13, backend_libs__interval__TypeInfo_13_13, backend_libs__interval__Subst_10);
    }
#line 1222 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1221 "interval.m"
      *backend_libs__interval__Goal_8 = backend_libs__interval__Goal0_7;
#line 1222 "interval.m"
    else
#line 1223 "interval.m"
      {
#line 1223 "interval.m"
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__Subst_10, backend_libs__interval__Goal0_7, backend_libs__interval__Goal_8);
#line 1223 "interval.m"
        return;
      }
#line 1217 "interval.m"
  }
#line 175 "interval.m"
}

#line 161 "interval.m"
void MR_CALL 
backend_libs__interval__make_inserted_goal_9_p_0(
#line 161 "interval.m"
  MR_Word backend_libs__interval__VarSet0_10,
#line 161 "interval.m"
  MR_Word * backend_libs__interval__VarSet_11,
#line 161 "interval.m"
  MR_Word backend_libs__interval__VarTypes0_12,
#line 161 "interval.m"
  MR_Word * backend_libs__interval__VarTypes_13,
#line 161 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_RenameMap_0_20,
#line 161 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_RenameMap_21,
#line 161 "interval.m"
  MR_Word backend_libs__interval__InsertSpec_15,
#line 161 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_16,
#line 161 "interval.m"
  MR_Word * backend_libs__interval__Goal_17)
#line 161 "interval.m"
{
#line 1095 "interval.m"
  {
#line 1095 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1095 "interval.m"
    MR_Word backend_libs__interval__Info0_18;
#line 1095 "interval.m"
    MR_Word backend_libs__interval__Info_19;
#line 1095 "interval.m"
    MR_Word backend_libs__interval__Goal0_32;
#line 1095 "interval.m"
    MR_Word backend_libs__interval__VarsToExtract_33;
#line 1095 "interval.m"
    MR_Word backend_libs__interval__GoalExpr0_34;
#line 1095 "interval.m"
    MR_Word backend_libs__interval__GoalInfo0_35;
#line 1090 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 1090 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 1090 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 1090 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 1090 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 1090 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 1090 "interval.m"
    MR_Word backend_libs__interval__ArgVars_43;
#line 1090 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 1090 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 1068 "interval.m"
    MR_Word backend_libs__interval__Unification0_39;
#line 1069 "interval.m"
    MR_Word backend_libs__interval__V_45_45;

#line 1096 "interval.m"
    {
#line 1096 "interval.m"
      backend_libs__interval__Info0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1096 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, 0) = ((MR_Box) (backend_libs__interval__VarSet0_10));
#line 1096 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, 1) = ((MR_Box) (backend_libs__interval__VarTypes0_12));
#line 1096 "interval.m"
    }
#line 1065 "interval.m"
    backend_libs__interval__Goal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__InsertSpec_15, (MR_Integer) 0)));
#line 1065 "interval.m"
    backend_libs__interval__VarsToExtract_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__InsertSpec_15, (MR_Integer) 1)));
#line 1066 "interval.m"
    backend_libs__interval__GoalExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_32, (MR_Integer) 0)));
#line 1066 "interval.m"
    backend_libs__interval__GoalInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_32, (MR_Integer) 1)));
#line 1068 "interval.m"
    backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_34)) == (MR_mktag((MR_Integer) 1)));
#line 1068 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1068 "interval.m"
      {
#line 1068 "interval.m"
        backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 0)));
#line 1068 "interval.m"
        backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 1)));
#line 1068 "interval.m"
        backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 2)));
#line 1068 "interval.m"
        backend_libs__interval__Unification0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 3)));
#line 1068 "interval.m"
        backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 4)));
#line 1069 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__Unification0_39)) == (MR_mktag((MR_Integer) 1)));
#line 1069 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1069 "interval.m"
          {
#line 1069 "interval.m"
            backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 0)));
#line 1069 "interval.m"
            backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 1)));
#line 1069 "interval.m"
            backend_libs__interval__ArgVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 2)));
#line 1069 "interval.m"
            backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 3)));
#line 1069 "interval.m"
            backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 4)));
#line 1069 "interval.m"
            backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 5)));
#line 1069 "interval.m"
          }
#line 1068 "interval.m"
      }
#line 1090 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1071 "interval.m"
      {
#line 1071 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_65_80;
#line 1071 "interval.m"
        MR_Word backend_libs__interval__Unification1_47;
#line 1071 "interval.m"
        MR_Word backend_libs__interval__GoalExpr1_48;
#line 1071 "interval.m"
        MR_Word backend_libs__interval__GoalInfo1_49;
#line 1071 "interval.m"
        MR_Word backend_libs__interval__GoalInfo2_51;
#line 1071 "interval.m"
        MR_Word backend_libs__interval__Goal2_52;
#line 1071 "interval.m"
        MR_Word backend_libs__interval__VarSet0_53;
#line 1071 "interval.m"
        MR_Word backend_libs__interval__VarTypes0_54;
#line 1071 "interval.m"
        MR_Word backend_libs__interval__VarSet_55;
#line 1071 "interval.m"
        MR_Word backend_libs__interval__VarTypes_56;
#line 1071 "interval.m"
        MR_Word backend_libs__interval__NewRename_57;
#line 1071 "interval.m"
        MR_Word backend_libs__interval__VoidRename_58;
#line 1071 "interval.m"
        MR_Word backend_libs__interval__Goal3_59;
#line 1071 "interval.m"
        MR_Word backend_libs__interval__V_62_62;
#line 1071 "interval.m"
        MR_Word backend_libs__interval__V_63_63;

#line 1071 "interval.m"
        {
#line 1071 "interval.m"
          backend_libs__interval__Unification1_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 0) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 1071 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 1) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 1071 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 2) = ((MR_Box) (backend_libs__interval__ArgVars_43));
#line 1071 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 3) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 1071 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1071 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 5) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 1071 "interval.m"
        }
#line 1072 "interval.m"
        {
#line 1072 "interval.m"
          backend_libs__interval__GoalExpr1_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1072 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 0) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 1072 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 1) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 1072 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 2) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 1072 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 3) = ((MR_Box) (backend_libs__interval__Unification1_47));
#line 1072 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 4) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 1072 "interval.m"
        }
#line 1073 "interval.m"
        {
#line 1073 "interval.m"
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, backend_libs__interval__GoalInfo0_35, &backend_libs__interval__GoalInfo1_49);
        }
#line 1077 "interval.m"
        if ((backend_libs__interval__MaybeFeature_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1079 "interval.m"
          backend_libs__interval__GoalInfo2_51 = backend_libs__interval__GoalInfo1_49;
#line 1077 "interval.m"
        else
#line 1075 "interval.m"
          {
#line 1075 "interval.m"
            MR_Word backend_libs__interval__Feature_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeFeature_16, (MR_Integer) 0)));

#line 1076 "interval.m"
            {
#line 1076 "interval.m"
              hlds__hlds_goal__goal_info_add_feature_3_p_0(backend_libs__interval__Feature_50, backend_libs__interval__GoalInfo1_49, &backend_libs__interval__GoalInfo2_51);
            }
#line 1075 "interval.m"
          }
#line 1081 "interval.m"
        {
#line 1081 "interval.m"
          backend_libs__interval__Goal2_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1081 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_52, 0) = ((MR_Box) (backend_libs__interval__GoalExpr1_48));
#line 1081 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_52, 1) = ((MR_Box) (backend_libs__interval__GoalInfo2_51));
#line 1081 "interval.m"
        }
#line 1082 "interval.m"
        backend_libs__interval__VarSet0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, (MR_Integer) 0)));
#line 1082 "interval.m"
        backend_libs__interval__VarTypes0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, (MR_Integer) 1)));
#line 15724 "backend_libs.interval.c"
        backend_libs__interval__TypeInfo_65_80 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1084 "interval.m"
        {
#line 1084 "interval.m"
          backend_libs__interval__V_62_62 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_80, backend_libs__interval__TypeInfo_65_80);
        }
#line 1084 "interval.m"
        {
#line 1084 "interval.m"
          backend_libs__interval__V_63_63 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_80, backend_libs__interval__TypeInfo_65_80);
        }
#line 1083 "interval.m"
        {
#line 1083 "interval.m"
          backend_libs__interval__create_shadow_vars_10_p_0(backend_libs__interval__ArgVars_43, backend_libs__interval__VarsToExtract_33, backend_libs__interval__VarSet0_53, &backend_libs__interval__VarSet_55, backend_libs__interval__VarTypes0_54, &backend_libs__interval__VarTypes_56, backend_libs__interval__V_62_62, &backend_libs__interval__NewRename_57, backend_libs__interval__V_63_63, &backend_libs__interval__VoidRename_58);
        }
#line 1085 "interval.m"
        {
#line 1085 "interval.m"
          backend_libs__interval__Info_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1085 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, 0) = ((MR_Box) (backend_libs__interval__VarSet_55));
#line 1085 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, 1) = ((MR_Box) (backend_libs__interval__VarTypes_56));
#line 1085 "interval.m"
        }
#line 1086 "interval.m"
        {
#line 1086 "interval.m"
          mercury__map__old_merge_3_p_0(backend_libs__interval__TypeInfo_65_80, backend_libs__interval__TypeInfo_65_80, backend_libs__interval__STATE_VARIABLE_RenameMap_0_20, backend_libs__interval__NewRename_57, backend_libs__interval__STATE_VARIABLE_RenameMap_21);
        }
#line 1088 "interval.m"
        {
#line 1088 "interval.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*backend_libs__interval__STATE_VARIABLE_RenameMap_21, backend_libs__interval__Goal2_52, &backend_libs__interval__Goal3_59);
        }
#line 1089 "interval.m"
        {
#line 1089 "interval.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__VoidRename_58, backend_libs__interval__Goal3_59, backend_libs__interval__Goal_17);
        }
#line 1071 "interval.m"
      }
#line 1090 "interval.m"
    else
#line 1091 "interval.m"
      {
#line 1091 "interval.m"
        {
#line 1091 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.make_inserted_goal\'/7", (MR_String) "not a deconstruct");
#line 1091 "interval.m"
          return;
        }
#line 1091 "interval.m"
      }
#line 1099 "interval.m"
    *backend_libs__interval__VarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, (MR_Integer) 0)));
#line 1099 "interval.m"
    *backend_libs__interval__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, (MR_Integer) 1)));
#line 1095 "interval.m"
  }
#line 161 "interval.m"
}

#line 156 "interval.m"
void MR_CALL 
backend_libs__interval__record_decisions_in_goal_10_p_0(
#line 156 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_Goal_0_21,
#line 156 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_Goal_22,
#line 156 "interval.m"
  MR_Word backend_libs__interval__VarSet0_12,
#line 156 "interval.m"
  MR_Word * backend_libs__interval__VarSet_13,
#line 156 "interval.m"
  MR_Word backend_libs__interval__VarTypes0_14,
#line 156 "interval.m"
  MR_Word * backend_libs__interval__VarTypes_15,
#line 156 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_23,
#line 156 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_24,
#line 156 "interval.m"
  MR_Word backend_libs__interval__InsertMap_17,
#line 156 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_18)
#line 156 "interval.m"
{
#line 873 "interval.m"
  {
#line 873 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 873 "interval.m"
    MR_Word backend_libs__interval__Info0_19;
#line 873 "interval.m"
    MR_Word backend_libs__interval__Info_20;

#line 874 "interval.m"
    {
#line 874 "interval.m"
      backend_libs__interval__Info0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 874 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_19, 0) = ((MR_Box) (backend_libs__interval__VarSet0_12));
#line 874 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_19, 1) = ((MR_Box) (backend_libs__interval__VarTypes0_14));
#line 874 "interval.m"
    }
#line 875 "interval.m"
    {
#line 875 "interval.m"
      backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__STATE_VARIABLE_Goal_0_21, backend_libs__interval__STATE_VARIABLE_Goal_22, backend_libs__interval__Info0_19, &backend_libs__interval__Info_20, backend_libs__interval__STATE_VARIABLE_VarRename_0_23, backend_libs__interval__STATE_VARIABLE_VarRename_24, backend_libs__interval__InsertMap_17, backend_libs__interval__MaybeFeature_18);
    }
#line 877 "interval.m"
    *backend_libs__interval__VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_20, (MR_Integer) 0)));
#line 877 "interval.m"
    *backend_libs__interval__VarTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_20, (MR_Integer) 1)));
#line 873 "interval.m"
  }
#line 156 "interval.m"
}

#line 151 "interval.m"
void MR_CALL 
backend_libs__interval__delete_interval_vars_5_p_0(
#line 151 "interval.m"
  MR_Word backend_libs__interval__Id_6,
#line 151 "interval.m"
  MR_Word backend_libs__interval__ToDeleteVars_7,
#line 151 "interval.m"
  MR_Word * backend_libs__interval__DeletedVars_8,
#line 151 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18,
#line 151 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_19)
#line 151 "interval.m"
{
#line 803 "interval.m"
  {
#line 803 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 803 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_86_86 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 803 "interval.m"
    MR_Word backend_libs__interval__TypeInfo_87_87 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 803 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_88_88;
#line 803 "interval.m"
    MR_Word backend_libs__interval__VarsMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 14)));
#line 803 "interval.m"
    MR_Word backend_libs__interval__Vars0_11;
#line 803 "interval.m"
    MR_Word backend_libs__interval__Vars_12;
#line 803 "interval.m"
    MR_Word backend_libs__interval__VarsMap_13;
#line 803 "interval.m"
    MR_Word backend_libs__interval__DeleteMap0_14;
#line 803 "interval.m"
    MR_Word backend_libs__interval__DeleteMap_17;
#line 803 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20;
#line 804 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 0)));
#line 804 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 1)));
#line 804 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 2)));
#line 804 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 3)));
#line 804 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 4)));
#line 804 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 5)));
#line 804 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 6)));
#line 804 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 7)));
#line 804 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 8)));
#line 804 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 9)));
#line 804 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 10)));
#line 804 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 11)));
#line 804 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 12)));
#line 804 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 13)));
#line 804 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 15)));
#line 805 "interval.m"
    MR_Box backend_libs__interval__conv0_Vars0_11;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_45_45;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 817 "interval.m"
    MR_Word backend_libs__interval__Deletions0_15;
#line 814 "interval.m"
    MR_Box backend_libs__interval__conv1_Deletions0_15;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 821 "interval.m"
    MR_Word backend_libs__interval__V_85_85;

#line 805 "interval.m"
    {
#line 805 "interval.m"
      mercury__map__lookup_3_p_0(backend_libs__interval__TypeCtorInfo_86_86, backend_libs__interval__TypeInfo_87_87, backend_libs__interval__VarsMap0_10, ((MR_Box) (backend_libs__interval__Id_6)), &backend_libs__interval__conv0_Vars0_11);
    }
#line 805 "interval.m"
    backend_libs__interval__Vars0_11 = ((MR_Word) backend_libs__interval__conv0_Vars0_11);
#line 15993 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 806 "interval.m"
    {
#line 806 "interval.m"
      *backend_libs__interval__DeletedVars_8 = parse_tree__set_of_var__intersect_2_f_0(backend_libs__interval__TypeCtorInfo_88_88, backend_libs__interval__Vars0_11, backend_libs__interval__ToDeleteVars_7);
    }
#line 807 "interval.m"
    {
#line 807 "interval.m"
      backend_libs__interval__Vars_12 = parse_tree__set_of_var__difference_2_f_0(backend_libs__interval__TypeCtorInfo_88_88, backend_libs__interval__Vars0_11, *backend_libs__interval__DeletedVars_8);
    }
#line 808 "interval.m"
    {
#line 808 "interval.m"
      mercury__map__det_update_4_p_0(backend_libs__interval__TypeCtorInfo_86_86, backend_libs__interval__TypeInfo_87_87, ((MR_Box) (backend_libs__interval__Id_6)), ((MR_Box) (backend_libs__interval__Vars_12)), backend_libs__interval__VarsMap0_10, &backend_libs__interval__VarsMap_13);
    }
#line 809 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 0)));
#line 809 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 1)));
#line 809 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 2)));
#line 809 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 3)));
#line 809 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 4)));
#line 809 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 5)));
#line 809 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 6)));
#line 809 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 7)));
#line 809 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 8)));
#line 809 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 9)));
#line 809 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 10)));
#line 809 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 11)));
#line 809 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 12)));
#line 809 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 13)));
#line 809 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 14)));
#line 809 "interval.m"
    backend_libs__interval__DeleteMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 15)));
#line 809 "interval.m"
    {
#line 809 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 0) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 1) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 2) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 3) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 4) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 5) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 6) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 7) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 8) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 9) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 10) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 11) = ((MR_Box) (backend_libs__interval__V_50_50));
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 12) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 13) = ((MR_Box) (backend_libs__interval__V_52_52));
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 14) = ((MR_Box) (backend_libs__interval__VarsMap_13));
#line 809 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 15) = ((MR_Box) (backend_libs__interval__DeleteMap0_14));
#line 809 "interval.m"
    }
#line 814 "interval.m"
    {
#line 814 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0(backend_libs__interval__TypeCtorInfo_86_86, (MR_Word) &backend_libs__interval_scalar_common_1[2], backend_libs__interval__DeleteMap0_14, ((MR_Box) (backend_libs__interval__Id_6)), &backend_libs__interval__conv1_Deletions0_15);
    }
#line 814 "interval.m"
    if (backend_libs__interval__succeeded)
#line 814 "interval.m"
      {
#line 814 "interval.m"
        backend_libs__interval__Deletions0_15 = ((MR_Word) backend_libs__interval__conv1_Deletions0_15);
#line 814 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 814 "interval.m"
      }
#line 817 "interval.m"
    if (backend_libs__interval__succeeded)
#line 815 "interval.m"
      {
#line 815 "interval.m"
        MR_Word backend_libs__interval__Deletions_16;

#line 815 "interval.m"
        {
#line 815 "interval.m"
          backend_libs__interval__Deletions_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 815 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_16, 0) = ((MR_Box) (*backend_libs__interval__DeletedVars_8));
#line 815 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_16, 1) = ((MR_Box) (backend_libs__interval__Deletions0_15));
#line 815 "interval.m"
        }
#line 816 "interval.m"
        {
#line 816 "interval.m"
          mercury__map__det_update_4_p_0(backend_libs__interval__TypeCtorInfo_86_86, (MR_Word) &backend_libs__interval_scalar_common_1[2], ((MR_Box) (backend_libs__interval__Id_6)), ((MR_Box) (backend_libs__interval__Deletions_16)), backend_libs__interval__DeleteMap0_14, &backend_libs__interval__DeleteMap_17);
        }
#line 815 "interval.m"
      }
#line 817 "interval.m"
    else
#line 818 "interval.m"
      {
#line 818 "interval.m"
        MR_Word backend_libs__interval__Deletions_23;

#line 818 "interval.m"
        {
#line 818 "interval.m"
          backend_libs__interval__Deletions_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 818 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_23, 0) = ((MR_Box) (*backend_libs__interval__DeletedVars_8));
#line 818 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 818 "interval.m"
        }
#line 819 "interval.m"
        {
#line 819 "interval.m"
          mercury__map__det_insert_4_p_0(backend_libs__interval__TypeCtorInfo_86_86, (MR_Word) &backend_libs__interval_scalar_common_1[2], ((MR_Box) (backend_libs__interval__Id_6)), ((MR_Box) (backend_libs__interval__Deletions_23)), backend_libs__interval__DeleteMap0_14, &backend_libs__interval__DeleteMap_17);
        }
#line 818 "interval.m"
      }
#line 821 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 0)));
#line 821 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 1)));
#line 821 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 2)));
#line 821 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 3)));
#line 821 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 4)));
#line 821 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 5)));
#line 821 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 6)));
#line 821 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 7)));
#line 821 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 8)));
#line 821 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 9)));
#line 821 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 10)));
#line 821 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 11)));
#line 821 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 12)));
#line 821 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 13)));
#line 821 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 14)));
#line 821 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 15)));
#line 821 "interval.m"
    {
#line 821 "interval.m"
      MR_Word base;
#line 821 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 821 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_19 = base;
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_84_84));
#line 821 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__DeleteMap_17));
#line 821 "interval.m"
    }
#line 803 "interval.m"
  }
#line 151 "interval.m"
}

#line 148 "interval.m"
void MR_CALL 
backend_libs__interval__record_interval_vars_4_p_0(
#line 148 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 148 "interval.m"
  MR_Word backend_libs__interval__NewVars_6,
#line 148 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 148 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13)
#line 148 "interval.m"
{
#line 792 "interval.m"
  {
#line 792 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 792 "interval.m"
    MR_Word backend_libs__interval__VarsMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 792 "interval.m"
    MR_Word backend_libs__interval__VarsMap_11;
#line 793 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 793 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 793 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 793 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 793 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 793 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 793 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 793 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 793 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 793 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 793 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 793 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 793 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 793 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 793 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__Vars0_9;
#line 794 "interval.m"
    MR_Box backend_libs__interval__conv0_Vars0_9;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 801 "interval.m"
    MR_Word backend_libs__interval__V_45_45;

#line 794 "interval.m"
    {
#line 794 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__VarsMap0_8, ((MR_Box) (backend_libs__interval__Id_5)), &backend_libs__interval__conv0_Vars0_9);
    }
#line 794 "interval.m"
    if (backend_libs__interval__succeeded)
#line 794 "interval.m"
      {
#line 794 "interval.m"
        backend_libs__interval__Vars0_9 = ((MR_Word) backend_libs__interval__conv0_Vars0_9);
#line 794 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 794 "interval.m"
      }
#line 797 "interval.m"
    if (backend_libs__interval__succeeded)
#line 795 "interval.m"
      {
#line 795 "interval.m"
        MR_Word backend_libs__interval__Vars_10;

#line 795 "interval.m"
        {
#line 795 "interval.m"
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__NewVars_6, backend_libs__interval__Vars0_9, &backend_libs__interval__Vars_10);
        }
#line 796 "interval.m"
        {
#line 796 "interval.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__Vars_10)), backend_libs__interval__VarsMap0_8, &backend_libs__interval__VarsMap_11);
        }
#line 795 "interval.m"
      }
#line 797 "interval.m"
    else
#line 798 "interval.m"
      {
#line 798 "interval.m"
        MR_Word backend_libs__interval__Vars_15;

#line 798 "interval.m"
        {
#line 798 "interval.m"
          backend_libs__interval__Vars_15 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__NewVars_6);
        }
#line 799 "interval.m"
        {
#line 799 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__Vars_15)), backend_libs__interval__VarsMap0_8, &backend_libs__interval__VarsMap_11);
        }
#line 798 "interval.m"
      }
#line 801 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 801 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 801 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 801 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 801 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 801 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 801 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 801 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 801 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 801 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 801 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 801 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 801 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 801 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 801 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 801 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 801 "interval.m"
    {
#line 801 "interval.m"
      MR_Word base;
#line 801 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 801 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_13 = base;
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__VarsMap_11));
#line 801 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 801 "interval.m"
    }
#line 792 "interval.m"
  }
#line 148 "interval.m"
}

#line 353 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_2(
#line 353 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 353 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 353 "interval.m"
{
#line 353 "interval.m"
  {
#line 353 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 353 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 353 "interval.m"
    MR_Word backend_libs__interval__conv1_HeadVar__2_2;

#line 353 "interval.m"
    {
#line 353 "interval.m"
      backend_libs__interval__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 353 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv1_HeadVar__2_2));
#line 353 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 353 "interval.m"
  }
#line 353 "interval.m"
}

#line 352 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_1(
#line 352 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 352 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 352 "interval.m"
{
#line 352 "interval.m"
  {
#line 352 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 352 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 352 "interval.m"
    MR_Word backend_libs__interval__conv0_HeadVar__2_2;

#line 352 "interval.m"
    {
#line 352 "interval.m"
      backend_libs__interval__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 352 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__2_2));
#line 352 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 352 "interval.m"
  }
#line 352 "interval.m"
}

#line 145 "interval.m"
void MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0(
#line 145 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361,
#line 145 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 145 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112,
#line 145 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_113,
#line 145 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_114,
#line 145 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_115)
#line 145 "interval.m"
{
#line 208 "interval.m"
  while (MR_TRUE)
#line 208 "interval.m"
    {
#line 208 "interval.m"
      /* tailcall optimized into a loop */
#line 208 "interval.m"
      {
#line 208 "interval.m"
        MR_bool backend_libs__interval__succeeded;
#line 208 "interval.m"
        MR_Word backend_libs__interval__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 208 "interval.m"
        MR_Word backend_libs__interval__GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));

#line 212 "interval.m"
        if (((MR_tag((MR_Word) backend_libs__interval__GoalExpr_6)) == (MR_mktag((MR_Integer) 0))))
#line 248 "interval.m"
          {
#line 248 "interval.m"
            MR_Word backend_libs__interval__SubGoal_24 = (MR_Word) MR_body(((MR_Word) backend_libs__interval__GoalExpr_6), (MR_Integer) 0);
#line 248 "interval.m"
            MR_Word backend_libs__interval__V_196_196;
#line 248 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_198_198;
#line 248 "interval.m"
            MR_Box backend_libs__interval__STATE_VARIABLE_Acc_199_199;
#line 248 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_200_200;
#line 248 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_201_201;
#line 248 "interval.m"
            MR_Box backend_libs__interval__STATE_VARIABLE_Acc_202_202;
#line 248 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_204_204;
#line 248 "interval.m"
            MR_Word backend_libs__interval__StartAnchor_241;
#line 248 "interval.m"
            MR_Word backend_libs__interval__EndAnchor_242;
#line 248 "interval.m"
            MR_Word backend_libs__interval__BeforeId_243;
#line 248 "interval.m"
            MR_Word backend_libs__interval__AfterId_244;
#line 248 "interval.m"
            MR_Word backend_libs__interval__MaybeResumeVars_245;
#line 248 "interval.m"
            MR_Word backend_libs__interval__OpenIntervals_246;

#line 249 "interval.m"
            {
#line 249 "interval.m"
              backend_libs__interval__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 249 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__V_196_196, 0) = ((MR_Box) (backend_libs__interval__SubGoal_24));
#line 249 "interval.m"
            }
#line 249 "interval.m"
            {
#line 249 "interval.m"
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(backend_libs__interval__GoalInfo_7, backend_libs__interval__V_196_196, (MR_Integer) 3, &backend_libs__interval__StartAnchor_241, &backend_libs__interval__EndAnchor_242, &backend_libs__interval__BeforeId_243, &backend_libs__interval__AfterId_244, &backend_libs__interval__MaybeResumeVars_245, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_198_198, backend_libs__interval__STATE_VARIABLE_Acc_0_114, &backend_libs__interval__STATE_VARIABLE_Acc_199_199);
            }
#line 252 "interval.m"
            {
#line 252 "interval.m"
              backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_242, backend_libs__interval__AfterId_244, backend_libs__interval__STATE_VARIABLE_IntervalInfo_198_198, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_200_200);
            }
#line 253 "interval.m"
            {
#line 253 "interval.m"
              backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__SubGoal_24, backend_libs__interval__STATE_VARIABLE_IntervalInfo_200_200, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_201_201, backend_libs__interval__STATE_VARIABLE_Acc_199_199, &backend_libs__interval__STATE_VARIABLE_Acc_202_202);
            }
#line 254 "interval.m"
            {
#line 254 "interval.m"
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, backend_libs__interval__StartAnchor_241, backend_libs__interval__BeforeId_243, &backend_libs__interval__OpenIntervals_246, backend_libs__interval__STATE_VARIABLE_IntervalInfo_201_201, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_204_204, backend_libs__interval__STATE_VARIABLE_Acc_202_202, backend_libs__interval__STATE_VARIABLE_Acc_115);
            }
#line 256 "interval.m"
            {
#line 256 "interval.m"
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__StartAnchor_241, backend_libs__interval__BeforeId_243, backend_libs__interval__MaybeResumeVars_245, backend_libs__interval__OpenIntervals_246, backend_libs__interval__STATE_VARIABLE_IntervalInfo_204_204, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
#line 256 "interval.m"
              return;
            }
#line 248 "interval.m"
          }
#line 212 "interval.m"
        else
#line 212 "interval.m"
        if (((MR_tag((MR_Word) backend_libs__interval__GoalExpr_6)) == (MR_mktag((MR_Integer) 2))))
#line 322 "interval.m"
          {
#line 322 "interval.m"
            MR_Word backend_libs__interval__PredId_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)));
#line 322 "interval.m"
            MR_Integer backend_libs__interval__ProcId_67 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 322 "interval.m"
            MR_Word backend_libs__interval__Builtin_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 322 "interval.m"
            MR_Word backend_libs__interval__ProcInfo_72;
#line 322 "interval.m"
            MR_Word backend_libs__interval__ArgVars_255 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 322 "interval.m"
            MR_Word backend_libs__interval__IntParams_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 322 "interval.m"
            MR_Word backend_libs__interval__ModuleInfo_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 0)));
#line 322 "interval.m"
            MR_Word backend_libs__interval__VarTypes_259;
#line 322 "interval.m"
            MR_Word backend_libs__interval__InputArgs_260;
#line 322 "interval.m"
            MR_Word backend_libs__interval__Inputs_261;
#line 322 "interval.m"
            MR_Word backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));
#line 322 "interval.m"
            MR_Word backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 5)));
#line 323 "interval.m"
            MR_Word backend_libs__interval__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 323 "interval.m"
            MR_Word backend_libs__interval__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 323 "interval.m"
            MR_Word backend_libs__interval__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 323 "interval.m"
            MR_Word backend_libs__interval__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 323 "interval.m"
            MR_Word backend_libs__interval__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 323 "interval.m"
            MR_Word backend_libs__interval__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 323 "interval.m"
            MR_Word backend_libs__interval__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 323 "interval.m"
            MR_Word backend_libs__interval__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 323 "interval.m"
            MR_Word backend_libs__interval__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 323 "interval.m"
            MR_Word backend_libs__interval__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 323 "interval.m"
            MR_Word backend_libs__interval__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 323 "interval.m"
            MR_Word backend_libs__interval__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 323 "interval.m"
            MR_Word backend_libs__interval__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 323 "interval.m"
            MR_Word backend_libs__interval__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 323 "interval.m"
            MR_Word backend_libs__interval__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 324 "interval.m"
            MR_Word backend_libs__interval__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 1)));
#line 324 "interval.m"
            MR_Word backend_libs__interval__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 2)));
#line 325 "interval.m"
            MR_Word backend_libs__interval___PredInfo_71;
#line 327 "interval.m"
            MR_Word backend_libs__interval__V_323_323;
#line 327 "interval.m"
            MR_Word backend_libs__interval__V_324_324;
#line 328 "interval.m"
            MR_Word backend_libs__interval__V_73_73;
#line 328 "interval.m"
            MR_Word backend_libs__interval__V_74_74;

#line 325 "interval.m"
            {
#line 325 "interval.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(backend_libs__interval__ModuleInfo_258, backend_libs__interval__PredId_66, backend_libs__interval__ProcId_67, &backend_libs__interval___PredInfo_71, &backend_libs__interval__ProcInfo_72);
            }
#line 327 "interval.m"
            backend_libs__interval__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 0)));
#line 327 "interval.m"
            backend_libs__interval__VarTypes_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 1)));
#line 327 "interval.m"
            backend_libs__interval__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 2)));
#line 328 "interval.m"
            {
#line 328 "interval.m"
              hlds__arg_info__partition_proc_call_args_7_p_0(backend_libs__interval__ProcInfo_72, backend_libs__interval__VarTypes_259, backend_libs__interval__ModuleInfo_258, backend_libs__interval__ArgVars_255, &backend_libs__interval__InputArgs_260, &backend_libs__interval__V_73_73, &backend_libs__interval__V_74_74);
            }
#line 330 "interval.m"
            {
#line 330 "interval.m"
              mercury__set__to_sorted_list_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], backend_libs__interval__InputArgs_260, &backend_libs__interval__Inputs_261);
            }
#line 335 "interval.m"
            if ((backend_libs__interval__Builtin_68 == (MR_Integer) 0))
#line 332 "interval.m"
              {
#line 332 "interval.m"
                MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_161_161;

#line 333 "interval.m"
                {
#line 333 "interval.m"
                  backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__Inputs_261, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_161_161);
                }
#line 334 "interval.m"
                {
#line 334 "interval.m"
                  backend_libs__interval__require_access_3_p_0(backend_libs__interval__Inputs_261, backend_libs__interval__STATE_VARIABLE_IntervalInfo_161_161, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                }
#line 332 "interval.m"
                *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 332 "interval.m"
              }
#line 335 "interval.m"
            else
#line 338 "interval.m"
              {
#line 338 "interval.m"
                MR_Word backend_libs__interval__MaybeNeedAcrossCall_253;

#line 339 "interval.m"
                {
#line 339 "interval.m"
                  hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo_7, &backend_libs__interval__MaybeNeedAcrossCall_253);
                }
#line 341 "interval.m"
                {
#line 341 "interval.m"
                  backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__Inputs_261, backend_libs__interval__MaybeNeedAcrossCall_253, backend_libs__interval__GoalInfo_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
#line 341 "interval.m"
                  return;
                }
#line 338 "interval.m"
              }
#line 322 "interval.m"
          }
#line 212 "interval.m"
        else
#line 212 "interval.m"
        if (((MR_tag((MR_Word) backend_libs__interval__GoalExpr_6)) == (MR_mktag((MR_Integer) 1))))
#line 370 "interval.m"
          {
#line 370 "interval.m"
            MR_Word backend_libs__interval__Unification_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 370 "interval.m"
            MR_Word backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)));
#line 370 "interval.m"
            MR_Word backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 370 "interval.m"
            MR_Word backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 370 "interval.m"
            MR_Word backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));

#line 392 "interval.m"
            if (((MR_tag((MR_Word) backend_libs__interval__Unification_90)) == (MR_mktag((MR_Integer) 2))))
#line 406 "interval.m"
              {
#line 406 "interval.m"
                MR_Word backend_libs__interval__ToVar_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__Unification_90, (MR_Integer) 0)));
#line 406 "interval.m"
                MR_Word backend_libs__interval__FromVar_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 406 "interval.m"
                MR_Word backend_libs__interval__V_130_130;
#line 406 "interval.m"
                MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_131_131;
#line 406 "interval.m"
                MR_Word backend_libs__interval__V_133_133;
#line 406 "interval.m"
                MR_Word backend_libs__interval__V_135_135;

#line 407 "interval.m"
                {
#line 407 "interval.m"
                  backend_libs__interval__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_130_130, 0) = ((MR_Box) (backend_libs__interval__FromVar_105));
#line 407 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 407 "interval.m"
                }
#line 407 "interval.m"
                {
#line 407 "interval.m"
                  backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__V_130_130, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_131_131);
                }
#line 408 "interval.m"
                {
#line 408 "interval.m"
                  backend_libs__interval__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_135_135, 0) = ((MR_Box) (backend_libs__interval__ToVar_104));
#line 408 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "interval.m"
                }
#line 408 "interval.m"
                {
#line 408 "interval.m"
                  backend_libs__interval__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_133_133, 0) = ((MR_Box) (backend_libs__interval__FromVar_105));
#line 408 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_133_133, 1) = ((MR_Box) (backend_libs__interval__V_135_135));
#line 408 "interval.m"
                }
#line 408 "interval.m"
                {
#line 408 "interval.m"
                  backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_133_133, backend_libs__interval__STATE_VARIABLE_IntervalInfo_131_131, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                }
#line 406 "interval.m"
                *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 406 "interval.m"
              }
#line 392 "interval.m"
            else
#line 392 "interval.m"
            if (((MR_tag((MR_Word) backend_libs__interval__Unification_90)) == (MR_mktag((MR_Integer) 0))))
#line 373 "interval.m"
              {
#line 373 "interval.m"
                MR_Word backend_libs__interval__CellVar_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 0)));
#line 373 "interval.m"
                MR_Word backend_libs__interval__HowToConstruct_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 4)));
#line 373 "interval.m"
                MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_150_150;
#line 373 "interval.m"
                MR_Word backend_libs__interval__V_151_151;
#line 373 "interval.m"
                MR_Word backend_libs__interval__ArgVars_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 2)));
#line 372 "interval.m"
                MR_Word backend_libs__interval___ConsId_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 372 "interval.m"
                MR_Word backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 3)));
#line 372 "interval.m"
                MR_Word backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 5)));
#line 372 "interval.m"
                MR_Word backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 6)));

#line 377 "interval.m"
                if ((backend_libs__interval__HowToConstruct_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 383 "interval.m"
                  {
#line 383 "interval.m"
                  }
#line 377 "interval.m"
                else
#line 377 "interval.m"
                if ((backend_libs__interval__HowToConstruct_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 382 "interval.m"
                  {
#line 382 "interval.m"
                  }
#line 377 "interval.m"
                else
#line 377 "interval.m"
                if (((MR_tag((MR_Word) backend_libs__interval__HowToConstruct_95)) == (MR_mktag((MR_Integer) 2))))
#line 379 "interval.m"
                  {
#line 380 "interval.m"
                    {
#line 380 "interval.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "construct in region");
#line 380 "interval.m"
                      return;
                    }
#line 379 "interval.m"
                  }
#line 377 "interval.m"
                else
#line 375 "interval.m"
                  {
#line 376 "interval.m"
                    {
#line 376 "interval.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "reuse");
#line 376 "interval.m"
                      return;
                    }
#line 375 "interval.m"
                  }
#line 386 "interval.m"
                {
#line 386 "interval.m"
                  backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__ArgVars_273, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_150_150);
                }
#line 387 "interval.m"
                {
#line 387 "interval.m"
                  backend_libs__interval__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_151_151, 0) = ((MR_Box) (backend_libs__interval__CellVar_92));
#line 387 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_151_151, 1) = ((MR_Box) (backend_libs__interval__ArgVars_273));
#line 387 "interval.m"
                }
#line 387 "interval.m"
                {
#line 387 "interval.m"
                  backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_151_151, backend_libs__interval__STATE_VARIABLE_IntervalInfo_150_150, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                }
#line 373 "interval.m"
                *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 373 "interval.m"
              }
#line 392 "interval.m"
            else
#line 392 "interval.m"
            if (((MR_tag((MR_Word) backend_libs__interval__Unification_90)) == (MR_mktag((MR_Integer) 1))))
#line 394 "interval.m"
              {
#line 394 "interval.m"
                MR_Word backend_libs__interval__ConsId_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 394 "interval.m"
                MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137;
#line 394 "interval.m"
                MR_Word backend_libs__interval__V_139_139;
#line 394 "interval.m"
                MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_140_140;
#line 394 "interval.m"
                MR_Word backend_libs__interval__V_142_142;
#line 394 "interval.m"
                MR_Word backend_libs__interval__ArgVars_274 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 2)));
#line 394 "interval.m"
                MR_Word backend_libs__interval__ArgModes_275 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 3)));
#line 394 "interval.m"
                MR_Word backend_libs__interval__IntParams_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 394 "interval.m"
                MR_Word backend_libs__interval__ModuleInfo_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_276, (MR_Integer) 0)));
#line 394 "interval.m"
                MR_Word backend_libs__interval__CellVar_278 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 0)));
#line 393 "interval.m"
                MR_Word backend_libs__interval__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 4)));
#line 393 "interval.m"
                MR_Word backend_libs__interval__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 5)));
#line 395 "interval.m"
                MR_Word backend_libs__interval__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 395 "interval.m"
                MR_Word backend_libs__interval__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 395 "interval.m"
                MR_Word backend_libs__interval__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 395 "interval.m"
                MR_Word backend_libs__interval__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 395 "interval.m"
                MR_Word backend_libs__interval__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 395 "interval.m"
                MR_Word backend_libs__interval__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 395 "interval.m"
                MR_Word backend_libs__interval__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 395 "interval.m"
                MR_Word backend_libs__interval__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 395 "interval.m"
                MR_Word backend_libs__interval__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 395 "interval.m"
                MR_Word backend_libs__interval__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 395 "interval.m"
                MR_Word backend_libs__interval__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 395 "interval.m"
                MR_Word backend_libs__interval__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 395 "interval.m"
                MR_Word backend_libs__interval__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 395 "interval.m"
                MR_Word backend_libs__interval__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 395 "interval.m"
                MR_Word backend_libs__interval__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 396 "interval.m"
                MR_Word backend_libs__interval__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_276, (MR_Integer) 1)));
#line 396 "interval.m"
                MR_Word backend_libs__interval__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_276, (MR_Integer) 2)));

#line 397 "interval.m"
                {
#line 397 "interval.m"
                  backend_libs__interval__succeeded = backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(backend_libs__interval__ModuleInfo_277, backend_libs__interval__ArgModes_275);
                }
#line 400 "interval.m"
                if (backend_libs__interval__succeeded)
#line 399 "interval.m"
                  {
#line 399 "interval.m"
                    backend_libs__interval__use_cell_8_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__CellVar_278, backend_libs__interval__ArgVars_274, backend_libs__interval__ConsId_100, backend_libs__interval__HeadVar__1_1, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
                  }
#line 400 "interval.m"
                else
#line 401 "interval.m"
                  {
#line 401 "interval.m"
                    *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 401 "interval.m"
                    backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112;
#line 401 "interval.m"
                  }
#line 403 "interval.m"
                {
#line 403 "interval.m"
                  backend_libs__interval__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_139_139, 0) = ((MR_Box) (backend_libs__interval__CellVar_278));
#line 403 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 403 "interval.m"
                }
#line 403 "interval.m"
                {
#line 403 "interval.m"
                  backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__V_139_139, backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_140_140);
                }
#line 404 "interval.m"
                {
#line 404 "interval.m"
                  backend_libs__interval__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 0) = ((MR_Box) (backend_libs__interval__CellVar_278));
#line 404 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 1) = ((MR_Box) (backend_libs__interval__ArgVars_274));
#line 404 "interval.m"
                }
#line 404 "interval.m"
                {
#line 404 "interval.m"
                  backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_142_142, backend_libs__interval__STATE_VARIABLE_IntervalInfo_140_140, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
#line 404 "interval.m"
                  return;
                }
#line 394 "interval.m"
              }
#line 392 "interval.m"
            else
#line 392 "interval.m"
            if (((((MR_tag((MR_Word) backend_libs__interval__Unification_90)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Unification_90, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 414 "interval.m"
              {
#line 415 "interval.m"
                {
#line 415 "interval.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "complicated_unify");
#line 415 "interval.m"
                  return;
                }
#line 414 "interval.m"
              }
#line 392 "interval.m"
            else
#line 410 "interval.m"
              {
#line 410 "interval.m"
                MR_Word backend_libs__interval__Var1_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 410 "interval.m"
                MR_Word backend_libs__interval__Var2_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Unification_90, (MR_Integer) 2)));
#line 410 "interval.m"
                MR_Word backend_libs__interval__V_122_122;
#line 410 "interval.m"
                MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_123_123;
#line 410 "interval.m"
                MR_Word backend_libs__interval__V_124_124;

#line 411 "interval.m"
                {
#line 411 "interval.m"
                  backend_libs__interval__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_124_124, 0) = ((MR_Box) (backend_libs__interval__Var2_107));
#line 411 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 411 "interval.m"
                }
#line 411 "interval.m"
                {
#line 411 "interval.m"
                  backend_libs__interval__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 411 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_122_122, 0) = ((MR_Box) (backend_libs__interval__Var1_106));
#line 411 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_122_122, 1) = ((MR_Box) (backend_libs__interval__V_124_124));
#line 411 "interval.m"
                }
#line 411 "interval.m"
                {
#line 411 "interval.m"
                  backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__V_122_122, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_123_123);
                }
#line 412 "interval.m"
                {
#line 412 "interval.m"
                  backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_122_122, backend_libs__interval__STATE_VARIABLE_IntervalInfo_123_123, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                }
#line 410 "interval.m"
                *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 410 "interval.m"
              }
#line 370 "interval.m"
          }
#line 212 "interval.m"
        else
#line 212 "interval.m"
        if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 346 "interval.m"
          {
#line 346 "interval.m"
            MR_Word backend_libs__interval__TypeCtorInfo_366_366;
#line 346 "interval.m"
            MR_Word backend_libs__interval__TypeInfo_367_367;
#line 346 "interval.m"
            MR_Word backend_libs__interval__Args_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));
#line 346 "interval.m"
            MR_Word backend_libs__interval__ExtraArgs_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 5)));
#line 346 "interval.m"
            MR_Word backend_libs__interval__ExtraVars_80;
#line 346 "interval.m"
            MR_Word backend_libs__interval__InputArgVarSet_81;
#line 346 "interval.m"
            MR_Word backend_libs__interval__InputArgVars_84;
#line 346 "interval.m"
            MR_Word backend_libs__interval__InputVars_85;
#line 346 "interval.m"
            MR_Word backend_libs__interval__ArgVars_264;
#line 346 "interval.m"
            MR_Word backend_libs__interval__IntParams_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 346 "interval.m"
            MR_Word backend_libs__interval__ModuleInfo_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 0)));
#line 346 "interval.m"
            MR_Word backend_libs__interval__VarTypes_268;
#line 346 "interval.m"
            MR_Word backend_libs__interval__PredId_269 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 346 "interval.m"
            MR_Integer backend_libs__interval__ProcId_270 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 346 "interval.m"
            MR_Word backend_libs__interval__ProcInfo_272;
#line 345 "interval.m"
            MR_Word backend_libs__interval___Attributes_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 345 "interval.m"
            MR_Word backend_libs__interval___MaybeTraceRuntimeCond_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 6)));
#line 345 "interval.m"
            MR_Word backend_libs__interval___PragmaCode_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 7)));
#line 347 "interval.m"
            MR_Word backend_libs__interval__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 347 "interval.m"
            MR_Word backend_libs__interval__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 347 "interval.m"
            MR_Word backend_libs__interval__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 347 "interval.m"
            MR_Word backend_libs__interval__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 347 "interval.m"
            MR_Word backend_libs__interval__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 347 "interval.m"
            MR_Word backend_libs__interval__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 347 "interval.m"
            MR_Word backend_libs__interval__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 347 "interval.m"
            MR_Word backend_libs__interval__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 347 "interval.m"
            MR_Word backend_libs__interval__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 347 "interval.m"
            MR_Word backend_libs__interval__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 347 "interval.m"
            MR_Word backend_libs__interval__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 347 "interval.m"
            MR_Word backend_libs__interval__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 347 "interval.m"
            MR_Word backend_libs__interval__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 347 "interval.m"
            MR_Word backend_libs__interval__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 347 "interval.m"
            MR_Word backend_libs__interval__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 348 "interval.m"
            MR_Word backend_libs__interval__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 1)));
#line 348 "interval.m"
            MR_Word backend_libs__interval__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 2)));
#line 349 "interval.m"
            MR_Word backend_libs__interval___PredInfo_262;
#line 351 "interval.m"
            MR_Word backend_libs__interval__V_342_342;
#line 351 "interval.m"
            MR_Word backend_libs__interval__V_343_343;
#line 354 "interval.m"
            MR_Word backend_libs__interval__V_82_82;
#line 354 "interval.m"
            MR_Word backend_libs__interval__V_83_83;
#line 365 "interval.m"
            MR_Word backend_libs__interval__MaybeNeedAcrossCall_263;
#line 361 "interval.m"
            MR_Word backend_libs__interval__V_86_86;

#line 349 "interval.m"
            {
#line 349 "interval.m"
              hlds__hlds_module__module_info_pred_proc_info_5_p_0(backend_libs__interval__ModuleInfo_267, backend_libs__interval__PredId_269, backend_libs__interval__ProcId_270, &backend_libs__interval___PredInfo_262, &backend_libs__interval__ProcInfo_272);
            }
#line 351 "interval.m"
            backend_libs__interval__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 0)));
#line 351 "interval.m"
            backend_libs__interval__VarTypes_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 1)));
#line 351 "interval.m"
            backend_libs__interval__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 2)));
#line 17206 "backend_libs.interval.c"
            backend_libs__interval__TypeCtorInfo_366_366 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 17208 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_367_367 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 352 "interval.m"
            {
#line 352 "interval.m"
              backend_libs__interval__ArgVars_264 = mercury__list__map_2_f_0(backend_libs__interval__TypeCtorInfo_366_366, backend_libs__interval__TypeInfo_367_367, (MR_Word) &backend_libs__interval_scalar_common_2[11], backend_libs__interval__Args_76);
            }
#line 353 "interval.m"
            {
#line 353 "interval.m"
              backend_libs__interval__ExtraVars_80 = mercury__list__map_2_f_0(backend_libs__interval__TypeCtorInfo_366_366, backend_libs__interval__TypeInfo_367_367, (MR_Word) &backend_libs__interval_scalar_common_2[12], backend_libs__interval__ExtraArgs_77);
            }
#line 354 "interval.m"
            {
#line 354 "interval.m"
              hlds__arg_info__partition_proc_call_args_7_p_0(backend_libs__interval__ProcInfo_272, backend_libs__interval__VarTypes_268, backend_libs__interval__ModuleInfo_267, backend_libs__interval__ArgVars_264, &backend_libs__interval__InputArgVarSet_81, &backend_libs__interval__V_82_82, &backend_libs__interval__V_83_83);
            }
#line 356 "interval.m"
            {
#line 356 "interval.m"
              mercury__set__to_sorted_list_2_p_0(backend_libs__interval__TypeInfo_367_367, backend_libs__interval__InputArgVarSet_81, &backend_libs__interval__InputArgVars_84);
            }
#line 357 "interval.m"
            {
#line 357 "interval.m"
              mercury__list__append_3_p_1(backend_libs__interval__TypeInfo_367_367, backend_libs__interval__InputArgVars_84, backend_libs__interval__ExtraVars_80, &backend_libs__interval__InputVars_85);
            }
#line 359 "interval.m"
            {
#line 359 "interval.m"
              backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo_7, &backend_libs__interval__MaybeNeedAcrossCall_263);
            }
#line 360 "interval.m"
            if (backend_libs__interval__succeeded)
#line 360 "interval.m"
              {
#line 361 "interval.m"
                backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__MaybeNeedAcrossCall_263)) == (MR_mktag((MR_Integer) 1)));
#line 361 "interval.m"
                if (backend_libs__interval__succeeded)
#line 361 "interval.m"
                  backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeNeedAcrossCall_263, (MR_Integer) 0)));
#line 360 "interval.m"
              }
#line 365 "interval.m"
            if (backend_libs__interval__succeeded)
#line 363 "interval.m"
              {
#line 363 "interval.m"
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__InputVars_85, backend_libs__interval__MaybeNeedAcrossCall_263, backend_libs__interval__GoalInfo_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
#line 363 "interval.m"
                return;
              }
#line 365 "interval.m"
            else
#line 366 "interval.m"
              {
#line 366 "interval.m"
                MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_157_157;

#line 366 "interval.m"
                {
#line 366 "interval.m"
                  backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__InputVars_85, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_157_157);
                }
#line 367 "interval.m"
                {
#line 367 "interval.m"
                  backend_libs__interval__require_access_3_p_0(backend_libs__interval__InputVars_85, backend_libs__interval__STATE_VARIABLE_IntervalInfo_157_157, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                }
#line 366 "interval.m"
                *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 366 "interval.m"
              }
#line 346 "interval.m"
          }
#line 212 "interval.m"
        else
#line 212 "interval.m"
        if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 210 "interval.m"
          {
#line 210 "interval.m"
            MR_Word backend_libs__interval__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 210 "interval.m"
            MR_Word backend_libs__interval__ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));

#line 211 "interval.m"
            {
#line 211 "interval.m"
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Goals_11, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
#line 211 "interval.m"
              return;
            }
#line 210 "interval.m"
          }
#line 212 "interval.m"
        else
#line 212 "interval.m"
        if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 213 "interval.m"
          {
#line 213 "interval.m"
            MR_Word backend_libs__interval__Goals_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));

#line 224 "interval.m"
            if ((backend_libs__interval__Goals_234 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "interval.m"
              {
#line 233 "interval.m"
                {
#line 233 "interval.m"
                  backend_libs__interval__no_open_intervals_2_p_0(backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                }
#line 225 "interval.m"
                *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 225 "interval.m"
              }
#line 224 "interval.m"
            else
#line 215 "interval.m"
              {
#line 215 "interval.m"
                MR_Word backend_libs__interval__FirstDisjunct_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_234, (MR_Integer) 0)));
#line 215 "interval.m"
                MR_Word backend_libs__interval__StartAnchor_14;
#line 215 "interval.m"
                MR_Word backend_libs__interval__EndAnchor_15;
#line 215 "interval.m"
                MR_Word backend_libs__interval__BeforeId_16;
#line 215 "interval.m"
                MR_Word backend_libs__interval__AfterId_17;
#line 215 "interval.m"
                MR_Word backend_libs__interval__MaybeResumeVars_18;
#line 215 "interval.m"
                MR_Word backend_libs__interval__OpenIntervals_19;
#line 215 "interval.m"
                MR_Word backend_libs__interval__V_223_223;
#line 215 "interval.m"
                MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_225_225;
#line 215 "interval.m"
                MR_Box backend_libs__interval__STATE_VARIABLE_Acc_226_226;
#line 215 "interval.m"
                MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_228_228;
#line 215 "interval.m"
                MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_234, (MR_Integer) 1)));

#line 216 "interval.m"
                {
#line 216 "interval.m"
                  backend_libs__interval__V_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 216 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_223_223, 0) = ((MR_Box) (backend_libs__interval__FirstDisjunct_12));
#line 216 "interval.m"
                }
#line 216 "interval.m"
                {
#line 216 "interval.m"
                  backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(backend_libs__interval__GoalInfo_7, backend_libs__interval__V_223_223, (MR_Integer) 1, &backend_libs__interval__StartAnchor_14, &backend_libs__interval__EndAnchor_15, &backend_libs__interval__BeforeId_16, &backend_libs__interval__AfterId_17, &backend_libs__interval__MaybeResumeVars_18, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_225_225, backend_libs__interval__STATE_VARIABLE_Acc_0_114, &backend_libs__interval__STATE_VARIABLE_Acc_226_226);
                }
#line 219 "interval.m"
                {
#line 219 "interval.m"
                  backend_libs__interval__build_interval_info_in_disj_11_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Goals_234, (MR_Integer) 1, backend_libs__interval__StartAnchor_14, backend_libs__interval__EndAnchor_15, backend_libs__interval__BeforeId_16, backend_libs__interval__AfterId_17, &backend_libs__interval__OpenIntervals_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_225_225, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_228_228, backend_libs__interval__STATE_VARIABLE_Acc_226_226, backend_libs__interval__STATE_VARIABLE_Acc_115);
                }
#line 222 "interval.m"
                {
#line 222 "interval.m"
                  backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__StartAnchor_14, backend_libs__interval__BeforeId_16, backend_libs__interval__MaybeResumeVars_18, backend_libs__interval__OpenIntervals_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_228_228, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
#line 222 "interval.m"
                  return;
                }
#line 215 "interval.m"
              }
#line 213 "interval.m"
          }
#line 212 "interval.m"
        else
#line 212 "interval.m"
        if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 289 "interval.m"
          {
#line 289 "interval.m"
            MR_Word backend_libs__interval__TypeInfo_363_363;
#line 289 "interval.m"
            MR_Word backend_libs__interval__GenericCall_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 289 "interval.m"
            MR_Word backend_libs__interval__ArgVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 289 "interval.m"
            MR_Word backend_libs__interval__ArgModes_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 289 "interval.m"
            MR_Word backend_libs__interval__MaybeArgRegs_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));
#line 289 "interval.m"
            MR_Word backend_libs__interval__MaybeNeedAcrossCall_38;
#line 289 "interval.m"
            MR_Word backend_libs__interval__IntParams_39;
#line 289 "interval.m"
            MR_Word backend_libs__interval__ModuleInfo_40;
#line 289 "interval.m"
            MR_Word backend_libs__interval__VarTypes_41;
#line 289 "interval.m"
            MR_Word backend_libs__interval__ArgTypes_42;
#line 289 "interval.m"
            MR_Word backend_libs__interval__ArgRegTypes_43;
#line 289 "interval.m"
            MR_Word backend_libs__interval__InputArgsR_44;
#line 289 "interval.m"
            MR_Word backend_libs__interval__InputArgsF_45;
#line 289 "interval.m"
            MR_Word backend_libs__interval__InputArgs_48;
#line 288 "interval.m"
            MR_Word backend_libs__interval___Detism_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 5)));
#line 291 "interval.m"
            MR_Word backend_libs__interval__V_287_287;
#line 291 "interval.m"
            MR_Word backend_libs__interval__V_288_288;
#line 291 "interval.m"
            MR_Word backend_libs__interval__V_289_289;
#line 291 "interval.m"
            MR_Word backend_libs__interval__V_290_290;
#line 291 "interval.m"
            MR_Word backend_libs__interval__V_291_291;
#line 291 "interval.m"
            MR_Word backend_libs__interval__V_292_292;
#line 291 "interval.m"
            MR_Word backend_libs__interval__V_293_293;
#line 291 "interval.m"
            MR_Word backend_libs__interval__V_294_294;
#line 291 "interval.m"
            MR_Word backend_libs__interval__V_295_295;
#line 291 "interval.m"
            MR_Word backend_libs__interval__V_296_296;
#line 291 "interval.m"
            MR_Word backend_libs__interval__V_297_297;
#line 291 "interval.m"
            MR_Word backend_libs__interval__V_298_298;
#line 291 "interval.m"
            MR_Word backend_libs__interval__V_299_299;
#line 291 "interval.m"
            MR_Word backend_libs__interval__V_300_300;
#line 291 "interval.m"
            MR_Word backend_libs__interval__V_301_301;
#line 292 "interval.m"
            MR_Word backend_libs__interval__V_303_303;
#line 297 "interval.m"
            MR_Word backend_libs__interval___OutputArgsR_46;
#line 297 "interval.m"
            MR_Word backend_libs__interval___OutputArgsF_47;

#line 290 "interval.m"
            {
#line 290 "interval.m"
              hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo_7, &backend_libs__interval__MaybeNeedAcrossCall_38);
            }
#line 291 "interval.m"
            backend_libs__interval__IntParams_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 291 "interval.m"
            backend_libs__interval__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 291 "interval.m"
            backend_libs__interval__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 291 "interval.m"
            backend_libs__interval__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 291 "interval.m"
            backend_libs__interval__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 291 "interval.m"
            backend_libs__interval__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 291 "interval.m"
            backend_libs__interval__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 291 "interval.m"
            backend_libs__interval__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 291 "interval.m"
            backend_libs__interval__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 291 "interval.m"
            backend_libs__interval__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 291 "interval.m"
            backend_libs__interval__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 291 "interval.m"
            backend_libs__interval__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 291 "interval.m"
            backend_libs__interval__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 291 "interval.m"
            backend_libs__interval__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 291 "interval.m"
            backend_libs__interval__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 291 "interval.m"
            backend_libs__interval__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 292 "interval.m"
            backend_libs__interval__ModuleInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_39, (MR_Integer) 0)));
#line 292 "interval.m"
            backend_libs__interval__VarTypes_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_39, (MR_Integer) 1)));
#line 292 "interval.m"
            backend_libs__interval__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_39, (MR_Integer) 2)));
#line 294 "interval.m"
            {
#line 294 "interval.m"
              parse_tree__prog_data__lookup_var_types_3_p_0(backend_libs__interval__VarTypes_41, backend_libs__interval__ArgVars_34, &backend_libs__interval__ArgTypes_42);
            }
#line 295 "interval.m"
            {
#line 295 "interval.m"
              hlds__arg_info__generic_call_arg_reg_types_6_p_0(backend_libs__interval__ModuleInfo_40, backend_libs__interval__VarTypes_41, backend_libs__interval__GenericCall_33, backend_libs__interval__ArgVars_34, backend_libs__interval__MaybeArgRegs_36, &backend_libs__interval__ArgRegTypes_43);
            }
#line 297 "interval.m"
            {
#line 297 "interval.m"
              hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(backend_libs__interval__ModuleInfo_40, backend_libs__interval__ArgVars_34, backend_libs__interval__ArgModes_35, backend_libs__interval__ArgTypes_42, backend_libs__interval__ArgRegTypes_43, &backend_libs__interval__InputArgsR_44, &backend_libs__interval__InputArgsF_45, &backend_libs__interval___OutputArgsR_46, &backend_libs__interval___OutputArgsF_47);
            }
#line 17515 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_363_363 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 300 "interval.m"
            {
#line 300 "interval.m"
              mercury__list__append_3_p_1(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__InputArgsR_44, backend_libs__interval__InputArgsF_45, &backend_libs__interval__InputArgs_48);
            }
#line 307 "interval.m"
            if (((MR_tag((MR_Word) backend_libs__interval__GenericCall_33)) == (MR_mktag((MR_Integer) 3))))
#line 304 "interval.m"
              {
#line 304 "interval.m"
                MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_167_167;

#line 305 "interval.m"
                {
#line 305 "interval.m"
                  backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__InputArgs_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_167_167);
                }
#line 306 "interval.m"
                {
#line 306 "interval.m"
                  backend_libs__interval__require_access_3_p_0(backend_libs__interval__InputArgs_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_167_167, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                }
#line 304 "interval.m"
                *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 304 "interval.m"
              }
#line 307 "interval.m"
            else
#line 311 "interval.m"
              {
#line 311 "interval.m"
                MR_Word backend_libs__interval__Globals_59;
#line 311 "interval.m"
                MR_Word backend_libs__interval__GenericVarsArgInfos_61;
#line 311 "interval.m"
                MR_Word backend_libs__interval__GenericVars_64;
#line 311 "interval.m"
                MR_Word backend_libs__interval__Inputs_65;
#line 311 "interval.m"
                MR_Integer backend_libs__interval__V_163_163;
#line 311 "interval.m"
                MR_Integer backend_libs__interval__V_164_164;
#line 313 "interval.m"
                MR_Word backend_libs__interval__V_60_60;
#line 313 "interval.m"
                MR_Integer backend_libs__interval__V_62_62;
#line 313 "interval.m"
                MR_Word backend_libs__interval__V_63_63;

#line 312 "interval.m"
                {
#line 312 "interval.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__interval__ModuleInfo_40, &backend_libs__interval__Globals_59);
                }
#line 314 "interval.m"
                {
#line 314 "interval.m"
                  backend_libs__interval__V_163_163 = mercury__list__length_1_f_0(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__InputArgsR_44);
                }
#line 314 "interval.m"
                {
#line 314 "interval.m"
                  backend_libs__interval__V_164_164 = mercury__list__length_1_f_0(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__InputArgsF_45);
                }
#line 313 "interval.m"
                {
#line 313 "interval.m"
                  ll_backend__call_gen__generic_call_info_8_p_0(backend_libs__interval__Globals_59, backend_libs__interval__GenericCall_33, backend_libs__interval__V_163_163, backend_libs__interval__V_164_164, &backend_libs__interval__V_60_60, &backend_libs__interval__GenericVarsArgInfos_61, &backend_libs__interval__V_62_62, &backend_libs__interval__V_63_63);
                }
#line 316 "interval.m"
                {
#line 316 "interval.m"
                  mercury__assoc_list__keys_2_p_0(backend_libs__interval__TypeInfo_363_363, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, backend_libs__interval__GenericVarsArgInfos_61, &backend_libs__interval__GenericVars_64);
                }
#line 317 "interval.m"
                {
#line 317 "interval.m"
                  mercury__list__append_3_p_1(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__GenericVars_64, backend_libs__interval__InputArgs_48, &backend_libs__interval__Inputs_65);
                }
#line 318 "interval.m"
                {
#line 318 "interval.m"
                  backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__Inputs_65, backend_libs__interval__MaybeNeedAcrossCall_38, backend_libs__interval__GoalInfo_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
#line 318 "interval.m"
                  return;
                }
#line 311 "interval.m"
              }
#line 289 "interval.m"
          }
#line 212 "interval.m"
        else
#line 212 "interval.m"
        if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 259 "interval.m"
          {
#line 259 "interval.m"
            MR_Word backend_libs__interval__Cond_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 259 "interval.m"
            MR_Word backend_libs__interval__Then_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 259 "interval.m"
            MR_Word backend_libs__interval__Else_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));
#line 259 "interval.m"
            MR_Word backend_libs__interval__CondOpenIntervals_29;
#line 259 "interval.m"
            MR_Word backend_libs__interval__V_175_175;
#line 259 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_177_177;
#line 259 "interval.m"
            MR_Box backend_libs__interval__STATE_VARIABLE_Acc_178_178;
#line 259 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_179_179;
#line 259 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_180_180;
#line 259 "interval.m"
            MR_Box backend_libs__interval__STATE_VARIABLE_Acc_181_181;
#line 259 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_182_182;
#line 259 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_183_183;
#line 259 "interval.m"
            MR_Box backend_libs__interval__STATE_VARIABLE_Acc_184_184;
#line 259 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_186_186;
#line 259 "interval.m"
            MR_Box backend_libs__interval__STATE_VARIABLE_Acc_187_187;
#line 259 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_188_188;
#line 259 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_189_189;
#line 259 "interval.m"
            MR_Box backend_libs__interval__STATE_VARIABLE_Acc_190_190;
#line 259 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_192_192;
#line 259 "interval.m"
            MR_Word backend_libs__interval__StartAnchor_247;
#line 259 "interval.m"
            MR_Word backend_libs__interval__EndAnchor_248;
#line 259 "interval.m"
            MR_Word backend_libs__interval__BeforeId_249;
#line 259 "interval.m"
            MR_Word backend_libs__interval__AfterId_250;
#line 259 "interval.m"
            MR_Word backend_libs__interval__MaybeResumeVars_251;
#line 259 "interval.m"
            MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 271 "interval.m"
            MR_Word backend_libs__interval___ElseOpenIntervals_30;

#line 260 "interval.m"
            {
#line 260 "interval.m"
              backend_libs__interval__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 260 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__V_175_175, 0) = ((MR_Box) (backend_libs__interval__Cond_26));
#line 260 "interval.m"
            }
#line 260 "interval.m"
            {
#line 260 "interval.m"
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(backend_libs__interval__GoalInfo_7, backend_libs__interval__V_175_175, (MR_Integer) 0, &backend_libs__interval__StartAnchor_247, &backend_libs__interval__EndAnchor_248, &backend_libs__interval__BeforeId_249, &backend_libs__interval__AfterId_250, &backend_libs__interval__MaybeResumeVars_251, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_177_177, backend_libs__interval__STATE_VARIABLE_Acc_0_114, &backend_libs__interval__STATE_VARIABLE_Acc_178_178);
            }
#line 263 "interval.m"
            {
#line 263 "interval.m"
              backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_248, backend_libs__interval__AfterId_250, backend_libs__interval__STATE_VARIABLE_IntervalInfo_177_177, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_179_179);
            }
#line 264 "interval.m"
            {
#line 264 "interval.m"
              backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Then_27, backend_libs__interval__STATE_VARIABLE_IntervalInfo_179_179, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_180_180, backend_libs__interval__STATE_VARIABLE_Acc_178_178, &backend_libs__interval__STATE_VARIABLE_Acc_181_181);
            }
#line 265 "interval.m"
            {
#line 265 "interval.m"
              backend_libs__interval__reached_cond_then_3_p_0(backend_libs__interval__GoalInfo_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_180_180, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_182_182);
            }
#line 266 "interval.m"
            {
#line 266 "interval.m"
              backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Cond_26, backend_libs__interval__STATE_VARIABLE_IntervalInfo_182_182, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_183_183, backend_libs__interval__STATE_VARIABLE_Acc_181_181, &backend_libs__interval__STATE_VARIABLE_Acc_184_184);
            }
#line 267 "interval.m"
            {
#line 267 "interval.m"
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, backend_libs__interval__StartAnchor_247, backend_libs__interval__BeforeId_249, &backend_libs__interval__CondOpenIntervals_29, backend_libs__interval__STATE_VARIABLE_IntervalInfo_183_183, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_186_186, backend_libs__interval__STATE_VARIABLE_Acc_184_184, &backend_libs__interval__STATE_VARIABLE_Acc_187_187);
            }
#line 269 "interval.m"
            {
#line 269 "interval.m"
              backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_248, backend_libs__interval__AfterId_250, backend_libs__interval__STATE_VARIABLE_IntervalInfo_186_186, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_188_188);
            }
#line 270 "interval.m"
            {
#line 270 "interval.m"
              backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Else_28, backend_libs__interval__STATE_VARIABLE_IntervalInfo_188_188, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_189_189, backend_libs__interval__STATE_VARIABLE_Acc_187_187, &backend_libs__interval__STATE_VARIABLE_Acc_190_190);
            }
#line 271 "interval.m"
            {
#line 271 "interval.m"
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, backend_libs__interval__StartAnchor_247, backend_libs__interval__BeforeId_249, &backend_libs__interval___ElseOpenIntervals_30, backend_libs__interval__STATE_VARIABLE_IntervalInfo_189_189, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_192_192, backend_libs__interval__STATE_VARIABLE_Acc_190_190, backend_libs__interval__STATE_VARIABLE_Acc_115);
            }
#line 273 "interval.m"
            {
#line 273 "interval.m"
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__StartAnchor_247, backend_libs__interval__BeforeId_249, backend_libs__interval__MaybeResumeVars_251, backend_libs__interval__CondOpenIntervals_29, backend_libs__interval__STATE_VARIABLE_IntervalInfo_192_192, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
#line 273 "interval.m"
              return;
            }
#line 259 "interval.m"
          }
#line 212 "interval.m"
        else
#line 212 "interval.m"
        if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 276 "interval.m"
          {
#line 276 "interval.m"
            MR_Word backend_libs__interval__Reason_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 276 "interval.m"
            MR_Word backend_libs__interval__SubGoal_252 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 282 "interval.m"
            MR_Word backend_libs__interval__TermVar_32;
#line 277 "interval.m"
            MR_Word backend_libs__interval__V_169_169;

#line 277 "interval.m"
            backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__Reason_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_31, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 277 "interval.m"
            if (backend_libs__interval__succeeded)
#line 277 "interval.m"
              {
#line 277 "interval.m"
                backend_libs__interval__TermVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_31, (MR_Integer) 1)));
#line 277 "interval.m"
                backend_libs__interval__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_31, (MR_Integer) 2)));
#line 277 "interval.m"
                backend_libs__interval__succeeded = (backend_libs__interval__V_169_169 == (MR_Integer) 1);
#line 277 "interval.m"
              }
#line 282 "interval.m"
            if (backend_libs__interval__succeeded)
#line 281 "interval.m"
              {
#line 281 "interval.m"
                MR_Word backend_libs__interval__V_170_170;

#line 281 "interval.m"
                {
#line 281 "interval.m"
                  backend_libs__interval__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 281 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_170_170, 0) = ((MR_Box) (backend_libs__interval__TermVar_32));
#line 281 "interval.m"
                  MR_hl_field(MR_mktag(1), backend_libs__interval__V_170_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "interval.m"
                }
#line 281 "interval.m"
                {
#line 281 "interval.m"
                  backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_170_170, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                }
#line 281 "interval.m"
                *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 281 "interval.m"
              }
#line 282 "interval.m"
            else
#line 285 "interval.m"
              {
#line 285 "interval.m"
                /* direct tailcall eliminated */
#line 285 "interval.m"
                {
#line 285 "interval.m"
                  MR_Word backend_libs__interval__HeadVar__1__tmp_copy_1 = backend_libs__interval__SubGoal_252;

#line 285 "interval.m"
                  backend_libs__interval__HeadVar__1_1 = backend_libs__interval__HeadVar__1__tmp_copy_1;
#line 285 "interval.m"
                }
#line 285 "interval.m"
                continue;
#line 285 "interval.m"
              }
#line 276 "interval.m"
          }
#line 212 "interval.m"
        else
#line 212 "interval.m"
        if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 418 "interval.m"
          {
#line 420 "interval.m"
            {
#line 420 "interval.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "shorthand");
#line 420 "interval.m"
              return;
            }
#line 418 "interval.m"
          }
#line 212 "interval.m"
        else
#line 236 "interval.m"
          {
#line 236 "interval.m"
            MR_Word backend_libs__interval__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 236 "interval.m"
            MR_Word backend_libs__interval__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 236 "interval.m"
            MR_Word backend_libs__interval__OpenIntervalsList_23;
#line 236 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_210_210;
#line 236 "interval.m"
            MR_Box backend_libs__interval__STATE_VARIABLE_Acc_211_211;
#line 236 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_212_212;
#line 236 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_215_215;
#line 236 "interval.m"
            MR_Word backend_libs__interval__V_216_216;
#line 236 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_217_217;
#line 236 "interval.m"
            MR_Word backend_libs__interval__StartAnchor_235;
#line 236 "interval.m"
            MR_Word backend_libs__interval__EndAnchor_236;
#line 236 "interval.m"
            MR_Word backend_libs__interval__BeforeId_237;
#line 236 "interval.m"
            MR_Word backend_libs__interval__AfterId_238;
#line 236 "interval.m"
            MR_Word backend_libs__interval__MaybeResumeVars_239;
#line 236 "interval.m"
            MR_Word backend_libs__interval__OpenIntervals_240;
#line 236 "interval.m"
            MR_Word backend_libs__interval___Det_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));

#line 237 "interval.m"
            {
#line 237 "interval.m"
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(backend_libs__interval__GoalInfo_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, &backend_libs__interval__StartAnchor_235, &backend_libs__interval__EndAnchor_236, &backend_libs__interval__BeforeId_237, &backend_libs__interval__AfterId_238, &backend_libs__interval__MaybeResumeVars_239, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_210_210, backend_libs__interval__STATE_VARIABLE_Acc_0_114, &backend_libs__interval__STATE_VARIABLE_Acc_211_211);
            }
#line 240 "interval.m"
            {
#line 240 "interval.m"
              backend_libs__interval__build_interval_info_in_cases_10_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Cases_22, backend_libs__interval__StartAnchor_235, backend_libs__interval__EndAnchor_236, backend_libs__interval__BeforeId_237, backend_libs__interval__AfterId_238, &backend_libs__interval__OpenIntervalsList_23, backend_libs__interval__STATE_VARIABLE_IntervalInfo_210_210, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_212_212, backend_libs__interval__STATE_VARIABLE_Acc_211_211, backend_libs__interval__STATE_VARIABLE_Acc_115);
            }
#line 242 "interval.m"
            {
#line 242 "interval.m"
              backend_libs__interval__OpenIntervals_240 = mercury__set__union_list_1_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, backend_libs__interval__OpenIntervalsList_23);
            }
#line 243 "interval.m"
            {
#line 243 "interval.m"
              backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__StartAnchor_235, backend_libs__interval__BeforeId_237, backend_libs__interval__MaybeResumeVars_239, backend_libs__interval__OpenIntervals_240, backend_libs__interval__STATE_VARIABLE_IntervalInfo_212_212, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_215_215);
            }
#line 245 "interval.m"
            {
#line 245 "interval.m"
              backend_libs__interval__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__V_216_216, 0) = ((MR_Box) (backend_libs__interval__Var_20));
#line 245 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__V_216_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "interval.m"
            }
#line 245 "interval.m"
            {
#line 245 "interval.m"
              backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__V_216_216, backend_libs__interval__STATE_VARIABLE_IntervalInfo_215_215, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_217_217);
            }
#line 246 "interval.m"
            {
#line 246 "interval.m"
              backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_216_216, backend_libs__interval__STATE_VARIABLE_IntervalInfo_217_217, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
#line 246 "interval.m"
              return;
            }
#line 236 "interval.m"
          }
#line 208 "interval.m"
      }
#line 208 "interval.m"
      break;
#line 208 "interval.m"
    }
#line 145 "interval.m"
}

#line 140 "interval.m"
void MR_CALL 
backend_libs__interval__use_cell_8_p_0(
#line 140 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_9,
#line 140 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 140 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 140 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3,
#line 140 "interval.m"
  MR_Word backend_libs__interval__HeadVar__4_4,
#line 140 "interval.m"
  MR_Word backend_libs__interval__HeadVar__5_5,
#line 140 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__6_6,
#line 140 "interval.m"
  MR_Box backend_libs__interval__HeadVar__7_7,
#line 140 "interval.m"
  MR_Box * backend_libs__interval__HeadVar__8_8)
#line 140 "interval.m"
{
#line 17932 "backend_libs.interval.c"
  {
#line 17934 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;
#line 17936 "backend_libs.interval.c"
    void MR_CALL (* backend_libs__interval__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17938 "backend_libs.interval.c"
    MR_Box backend_libs__interval__conv1_HeadVar__6_6;

#line 17941 "backend_libs.interval.c"
    {
#line 17943 "backend_libs.interval.c"
      backend_libs__interval__func_0(((MR_Box) backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_9), ((MR_Box) (backend_libs__interval__HeadVar__1_1)), ((MR_Box) (backend_libs__interval__HeadVar__2_2)), ((MR_Box) (backend_libs__interval__HeadVar__3_3)), ((MR_Box) (backend_libs__interval__HeadVar__4_4)), ((MR_Box) (backend_libs__interval__HeadVar__5_5)), &backend_libs__interval__conv1_HeadVar__6_6, backend_libs__interval__HeadVar__7_7, backend_libs__interval__HeadVar__8_8);
    }
#line 17946 "backend_libs.interval.c"
    *backend_libs__interval__HeadVar__6_6 = ((MR_Word) backend_libs__interval__conv1_HeadVar__6_6);
#line 17948 "backend_libs.interval.c"
  }
#line 140 "interval.m"
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
