/*
** Automatically generated from `interval.m'
** by the Mercury compiler,
** version rotd-2013-03-26, configured for x86_64-apple-darwin12.2.1.
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
#include "tree_bitset.mih"
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




#line 149 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 152 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_backend_libs__interval__type_ctor_info_anchor_follow_info_0;

#line 155 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 158 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 161 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 164 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 167 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0;

#line 170 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1;

#line 173 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_2[2];

#line 176 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2;

#line 179 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_3[1];

#line 182 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3;

#line 185 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_4[2];

#line 188 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4;

#line 191 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_5[1];

#line 194 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5;

#line 197 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_0[2];

#line 200 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1[1];

#line 203 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2[1];

#line 206 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3[2];

#line 209 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_0[4];

#line 212 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0[6];

#line 215 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0[6];

#line 218 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 221 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_follow_info_0_0[2];

#line 224 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0;

#line 227 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0[1];

#line 230 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0[1];

#line 233 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0[1];

#line 236 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0[1];

#line 239 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0;

#line 242 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1;

#line 245 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2;

#line 248 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3;

#line 251 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4;

#line 254 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_branch_construct_0[5];

#line 257 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0[5];

#line 260 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0[5];

#line 263 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_branch_end_info_0_0[3];

#line 266 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_branch_end_info_0_0[3];

#line 269 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0;

#line 272 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0[1];

#line 275 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_branch_end_info_0[1];

#line 278 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_branch_end_info_0[1];

#line 281 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_end_info_0[1];

#line 284 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 287 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 290 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_insert_spec_0_0[2];

#line 293 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0;

#line 296 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0[1];

#line 299 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0[1];

#line 302 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0[1];

#line 305 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0[1];

#line 308 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0[1];

#line 311 "backend_libs.interval.c"
static const MR_NotagFunctorDesc backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0;

#line 314 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0;

#line 317 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0;

#line 320 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0;

#line 323 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0;

#line 326 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0;

#line 329 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0;

#line 332 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 335 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 338 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 341 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 344 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 347 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_info_0_0[16];

#line 350 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_info_0_0[16];

#line 353 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0;

#line 356 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0[1];

#line 359 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0[1];

#line 362 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0[1];

#line 365 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0[1];

#line 368 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 371 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0[3];

#line 374 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0[3];

#line 377 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0;

#line 380 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0[1];

#line 383 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0[1];

#line 386 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0[1];

#line 389 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0[1];

#line 392 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 395 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_var_info_0_0[2];

#line 398 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_var_info_0_0[2];

#line 401 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0;

#line 404 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0[1];

#line 407 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_var_info_0[1];

#line 410 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_var_info_0[1];

#line 413 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_var_info_0[1];

#line 416 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0;

#line 419 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1;

#line 422 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_maybe_needs_flush_0[2];

#line 425 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0[2];

#line 428 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0[2];

#line 431 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 434 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0;

#line 437 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1;

#line 440 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_resume_save_status_0[2];

#line 443 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0[2];

#line 446 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0[2];

#line 449 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_save_point_0_0[2];

#line 452 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0;

#line 455 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0[1];

#line 458 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0[1];

#line 461 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0[1];

#line 464 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0[1];

#line 467 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0;

#line 470 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1;

#line 473 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_save_point_type_0[2];

#line 476 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0[2];

#line 479 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0[2];

#line 482 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1[1];

#line 485 "backend_libs.interval.c"
static const MR_TypeClassMethod backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1[1];

#line 488 "backend_libs.interval.c"
static const MR_TypeClassId backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1;

#line 491 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0_10001(
#line 494 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 496 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 499 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_0_0_10001(
#line 502 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 504 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 506 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 509 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0_10001(
#line 512 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 514 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 517 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0_10001(
#line 520 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 522 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 524 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 527 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0_10001(
#line 530 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 532 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 535 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0_10001(
#line 538 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 540 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 542 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 545 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_end_info_0_0_10001(
#line 548 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 550 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 553 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0_10001(
#line 556 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 558 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 560 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 563 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0_10001(
#line 566 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 568 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 571 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0_10001(
#line 574 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 576 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 578 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 581 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0_10001(
#line 584 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 586 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 589 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0_10001(
#line 592 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 594 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 596 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 599 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0_10001(
#line 602 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 604 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 607 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0_10001(
#line 610 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 612 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 614 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 617 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0_10001(
#line 620 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 622 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 625 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0_10001(
#line 628 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 630 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 632 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 635 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0_10001(
#line 638 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 640 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 643 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0_10001(
#line 646 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 648 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 650 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 653 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0_10001(
#line 656 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 658 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 661 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0_10001(
#line 664 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 666 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 668 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 671 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0_10001(
#line 674 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 676 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 679 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0_10001(
#line 682 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 684 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 686 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 689 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0_10001(
#line 692 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 694 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 697 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0_10001(
#line 700 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 702 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 704 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 707 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0_10001(
#line 710 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 712 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 715 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0_10001(
#line 718 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 720 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 722 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 725 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0_10001(
#line 728 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 730 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 733 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_0_0_10001(
#line 736 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 738 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 740 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 743 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0_10001(
#line 746 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 748 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 751 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0_10001(
#line 754 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 756 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 758 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 1183 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(
#line 1183 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1183 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1183 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1183 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1183 "interval.m"
  MR_Word backend_libs__interval__Inserts_6,
#line 1183 "interval.m"
  MR_Word backend_libs__interval__InsertMap_7,
#line 1183 "interval.m"
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

#line 1328 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1328__1_2_p_0(
#line 1328 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_31,
#line 1328 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_32);

#line 1315 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_deletion__1315__1_2_p_0(
#line 1315 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_16,
#line 1315 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_17);

#line 1297 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1297__1_2_p_0(
#line 1297 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_154,
#line 1297 "interval.m"
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

#line 1337 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_4(
#line 1337 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1337 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1333 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_3(
#line 1333 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1333 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);

#line 1337 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_2(
#line 1337 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1337 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1328 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_1(
#line 1328 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1328 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1328 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2);

#line 1320 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0(
#line 1320 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1);

#line 1337 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_2(
#line 1337 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1337 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1315 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_1(
#line 1315 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1315 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1315 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2);

#line 1312 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0(
#line 1312 "interval.m"
  MR_Word backend_libs__interval__Vars_4);

#line 1306 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_3(
#line 1306 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1306 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1306 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1306 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1297 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_2(
#line 1297 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1297 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1297 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2);

#line 1275 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_1(
#line 1275 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1275 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);

#line 1267 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0(
#line 1267 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_5,
#line 1267 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6);

#line 1240 "interval.m"
static void MR_CALL 
backend_libs__interval__construct_anchors_4_p_0(
#line 1240 "interval.m"
  MR_Word backend_libs__interval__Construct_5,
#line 1240 "interval.m"
  MR_Word backend_libs__interval__Goal_6,
#line 1240 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_7,
#line 1240 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_8);

#line 1225 "interval.m"
static void MR_CALL 
backend_libs__interval__build_headvar_subst_4_p_0(
#line 1225 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1225 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 1225 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_Subst_0_3,
#line 1225 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_Subst_4);

#line 1200 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_cases_7_p_0(
#line 1200 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1200 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1200 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1200 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1200 "interval.m"
  MR_Word backend_libs__interval__VarRename0_5,
#line 1200 "interval.m"
  MR_Word backend_libs__interval__InsertMap_6,
#line 1200 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_7);

#line 1162 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_conj_9_p_0(
#line 1162 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1162 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1162 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1162 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1162 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_5,
#line 1162 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_6,
#line 1162 "interval.m"
  MR_Word backend_libs__interval__ConjType_7,
#line 1162 "interval.m"
  MR_Word backend_libs__interval__InsertMap_8,
#line 1162 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_9);

#line 1131 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_at_call_site_9_p_0(
#line 1131 "interval.m"
  MR_Word backend_libs__interval__Goal0_10,
#line 1131 "interval.m"
  MR_Word * backend_libs__interval__Goal_11,
#line 1131 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_25,
#line 1131 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_26,
#line 1131 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_27,
#line 1131 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_28,
#line 1131 "interval.m"
  MR_Word backend_libs__interval__MustHaveMap_14,
#line 1131 "interval.m"
  MR_Word backend_libs__interval__InsertMap_15,
#line 1131 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_16);

#line 1100 "interval.m"
static void MR_CALL 
backend_libs__interval__create_shadow_vars_10_p_0(
#line 1100 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1100 "interval.m"
  MR_Word backend_libs__interval__VarsToExtract_2,
#line 1100 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_0_3,
#line 1100 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarSet_4,
#line 1100 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_0_5,
#line 1100 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarTypes_6,
#line 1100 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_7,
#line 1100 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_8,
#line 1100 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_0_9,
#line 1100 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VoidRename_10);

#line 1049 "interval.m"
static void MR_CALL 
backend_libs__interval__make_inserted_goals_7_p_0(
#line 1049 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_1,
#line 1049 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_2,
#line 1049 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_3,
#line 1049 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_4,
#line 1049 "interval.m"
  MR_Word backend_libs__interval__HeadVar__5_5,
#line 1049 "interval.m"
  MR_Word backend_libs__interval__HeadVar__6_6,
#line 1049 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7);

#line 1038 "interval.m"
static void MR_CALL 
backend_libs__interval__insert_goals_after_7_p_0(
#line 1038 "interval.m"
  MR_Word backend_libs__interval__BranchesGoal_8,
#line 1038 "interval.m"
  MR_Word * backend_libs__interval__Goal_9,
#line 1038 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_17,
#line 1038 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_18,
#line 1038 "interval.m"
  MR_Word * backend_libs__interval__VarRename_11,
#line 1038 "interval.m"
  MR_Word backend_libs__interval__Inserts_12,
#line 1038 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_13);

#line 1028 "interval.m"
static void MR_CALL 
backend_libs__interval__lookup_inserts_3_p_0(
#line 1028 "interval.m"
  MR_Word backend_libs__interval__InsertMap_4,
#line 1028 "interval.m"
  MR_Word backend_libs__interval__Anchor_5,
#line 1028 "interval.m"
  MR_Word * backend_libs__interval__Inserts_6);

#line 879 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_goal_8_p_0(
#line 879 "interval.m"
  MR_Word backend_libs__interval__Goal0_9,
#line 879 "interval.m"
  MR_Word * backend_libs__interval__Goal_10,
#line 879 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_112,
#line 879 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_113,
#line 879 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_114,
#line 879 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_115,
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

#line 1337 "interval.m"
static void MR_CALL 
backend_libs__interval__write_int_list_3_p_0_1(
#line 1337 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1337 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1265 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_2(
#line 1265 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1265 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1265 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1265 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1261 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_1(
#line 1261 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1261 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1261 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1261 "interval.m"
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
    ((MR_Box) (&backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0)),
    ((MR_Box) (&backend_libs__interval__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&backend_libs__interval__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    ((MR_Box) (&backend_libs__interval__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
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



#line 1840 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1848 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0
  }
};

#line 1857 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1865 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1873 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_PseudoTypeInfo) &backend_libs__interval__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1882 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__tree_bitset__pti_tree_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1890 "backend_libs.interval.c"
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

#line 1905 "backend_libs.interval.c"
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

#line 1920 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_2[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1926 "backend_libs.interval.c"
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

#line 1941 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_3[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1946 "backend_libs.interval.c"
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

#line 1961 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_4[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1967 "backend_libs.interval.c"
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

#line 1982 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_5[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1987 "backend_libs.interval.c"
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

#line 2002 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_0[2] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1
};

#line 2008 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2
};

#line 2013 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3
};

#line 2018 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3[2] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5
};

#line 2024 "backend_libs.interval.c"
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

#line 2048 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0[6] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0
};

#line 2058 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2068 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____anchor_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____anchor_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "anchor",
  {
    backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0
  },
  {
    backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0
};

#line 2089 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2097 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_follow_info_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2103 "backend_libs.interval.c"
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

#line 2118 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0
};

#line 2123 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0
  }
};

#line 2132 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0
};

#line 2137 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0[1] = {
  (MR_Integer) 0
};

#line 2142 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____anchor_follow_info_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____anchor_follow_info_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "anchor_follow_info",
  {
    backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0
  },
  {
    backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0
};

#line 2163 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0 = {
  (MR_String) "branch_ite",
  (MR_Integer) 0
};

#line 2169 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1 = {
  (MR_String) "branch_disj",
  (MR_Integer) 1
};

#line 2175 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2 = {
  (MR_String) "branch_switch",
  (MR_Integer) 2
};

#line 2181 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3 = {
  (MR_String) "branch_neg",
  (MR_Integer) 3
};

#line 2187 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4 = {
  (MR_String) "branch_par_conj",
  (MR_Integer) 4
};

#line 2193 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_branch_construct_0[5] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4
};

#line 2202 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0[5] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2
};

#line 2211 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2220 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____branch_construct_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____branch_construct_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "branch_construct",
  {
    backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0
  },
  {
    backend_libs__interval__backend_libs__interval__enum_value_ordered_branch_construct_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0
};

#line 2241 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_branch_end_info_0_0[3] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2248 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_branch_end_info_0_0[3] = {
  (MR_String) "flushed_after_branch",
  (MR_String) "accessed_after_branch",
  (MR_String) "interval_after_branch"
};

#line 2255 "backend_libs.interval.c"
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

#line 2270 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0
};

#line 2275 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_branch_end_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0
  }
};

#line 2284 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_branch_end_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0
};

#line 2289 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_end_info_0[1] = {
  (MR_Integer) 0
};

#line 2294 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____branch_end_info_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____branch_end_info_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "branch_end_info",
  {
    backend_libs__interval__backend_libs__interval__du_name_ordered_branch_end_info_0
  },
  {
    backend_libs__interval__backend_libs__interval__du_ptag_ordered_branch_end_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_branch_end_info_0
};

#line 2315 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2323 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_TypeInfo) &backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2332 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_insert_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__interval____Unify____insert_map_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____insert_map_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "insert_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2353 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_insert_spec_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2359 "backend_libs.interval.c"
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

#line 2374 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0
};

#line 2379 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0
  }
};

#line 2388 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0
};

#line 2393 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0[1] = {
  (MR_Integer) 0
};

#line 2398 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____insert_spec_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____insert_spec_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "insert_spec",
  {
    backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0
  },
  {
    backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0
};

#line 2419 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0[1] = {
  (MR_Integer) 0
};

#line 2424 "backend_libs.interval.c"
static const MR_NotagFunctorDesc backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0 = {
  (MR_String) "interval_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2431 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (backend_libs__interval____Unify____interval_id_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_id_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_id",
  {
    &backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0
  },
  {
    &backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0
};

#line 2452 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0
  }
};

#line 2461 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0
  }
};

#line 2470 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2479 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0
  }
};

#line 2488 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2496 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2505 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2513 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2522 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2531 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2539 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2548 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_info_0_0[16] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_params_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
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
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2568 "backend_libs.interval.c"
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

#line 2588 "backend_libs.interval.c"
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

#line 2603 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0
};

#line 2608 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0
  }
};

#line 2617 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0
};

#line 2622 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0[1] = {
  (MR_Integer) 0
};

#line 2627 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____interval_info_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_info_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_info",
  {
    backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0
  },
  {
    backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0
};

#line 2648 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2657 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2664 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0[3] = {
  (MR_String) "ip_module_info",
  (MR_String) "ip_var_types",
  (MR_String) "ip_at_most_zero_calls"
};

#line 2671 "backend_libs.interval.c"
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

#line 2686 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0
};

#line 2691 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0
  }
};

#line 2700 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0
};

#line 2705 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0[1] = {
  (MR_Integer) 0
};

#line 2710 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_params_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____interval_params_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_params_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_params",
  {
    backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0
  },
  {
    backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0
};

#line 2731 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2739 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_var_info_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2745 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_var_info_0_0[2] = {
  (MR_String) "ivi_varset",
  (MR_String) "ivi_vartypes"
};

#line 2751 "backend_libs.interval.c"
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

#line 2766 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0
};

#line 2771 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0
  }
};

#line 2780 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_var_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0
};

#line 2785 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2790 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_interval_var_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____interval_var_info_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____interval_var_info_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "interval_var_info",
  {
    backend_libs__interval__backend_libs__interval__du_name_ordered_interval_var_info_0
  },
  {
    backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_var_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_interval_var_info_0
};

#line 2811 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0 = {
  (MR_String) "needs_flush",
  (MR_Integer) 0
};

#line 2817 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1 = {
  (MR_String) "doesnt_need_flush",
  (MR_Integer) 1
};

#line 2823 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_maybe_needs_flush_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1
};

#line 2829 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0
};

#line 2835 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2841 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_maybe_needs_flush_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____maybe_needs_flush_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____maybe_needs_flush_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "maybe_needs_flush",
  {
    backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0
  },
  {
    backend_libs__interval__backend_libs__interval__enum_value_ordered_maybe_needs_flush_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0
};

#line 2862 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2871 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_rename_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__interval____Unify____rename_map_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____rename_map_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "rename_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2892 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0 = {
  (MR_String) "has_resume_save",
  (MR_Integer) 0
};

#line 2898 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1 = {
  (MR_String) "has_no_resume_save",
  (MR_Integer) 1
};

#line 2904 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_resume_save_status_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1
};

#line 2910 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0
};

#line 2916 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2922 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____resume_save_status_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____resume_save_status_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "resume_save_status",
  {
    backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0
  },
  {
    backend_libs__interval__backend_libs__interval__enum_value_ordered_resume_save_status_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0
};

#line 2943 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_save_point_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 2949 "backend_libs.interval.c"
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

#line 2964 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0
};

#line 2969 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0
  }
};

#line 2978 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0
};

#line 2983 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0[1] = {
  (MR_Integer) 0
};

#line 2988 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__interval____Unify____save_point_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____save_point_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "save_point",
  {
    backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0
  },
  {
    backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0
};

#line 3009 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0 = {
  (MR_String) "save_point_call_site",
  (MR_Integer) 0
};

#line 3015 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1 = {
  (MR_String) "save_point_resume_point",
  (MR_Integer) 1
};

#line 3021 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_save_point_type_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1
};

#line 3027 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1
};

#line 3033 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3039 "backend_libs.interval.c"
const MR_TypeCtorInfo_Struct backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__interval____Unify____save_point_type_0_0_10001)),
  ((MR_Box) (backend_libs__interval____Compare____save_point_type_0_0_10001)),
  (MR_String) "backend_libs.interval",
  (MR_String) "save_point_type",
  {
    backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0
  },
  {
    backend_libs__interval__backend_libs__interval__enum_value_ordered_save_point_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0
};

#line 3060 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1[1] = {
  (MR_String) "T"
};

#line 3065 "backend_libs.interval.c"
static const MR_TypeClassMethod backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1[1] = {
  {
    (MR_String) "use_cell",
    (MR_Integer) 8,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 3074 "backend_libs.interval.c"
static const MR_TypeClassId backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1 = {
  (MR_String) "backend_libs.interval",
  (MR_String) "build_interval_info_acc",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1,
  backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1
};

#line 3085 "backend_libs.interval.c"
const MR_TypeClassDeclStruct backend_libs__interval__backend_libs__interval__type_class_decl_build_interval_info_acc_1 = {
  &backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3093 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0_10001(
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
      backend_libs__interval__succeeded = backend_libs__interval____Unify____anchor_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3112 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3114 "backend_libs.interval.c"
  }
#line 3116 "backend_libs.interval.c"
}

#line 3119 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_0_0_10001(
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
      backend_libs__interval____Compare____anchor_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3140 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3142 "backend_libs.interval.c"
  }
#line 3144 "backend_libs.interval.c"
}

#line 3147 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0_10001(
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
      backend_libs__interval__succeeded = backend_libs__interval____Unify____anchor_follow_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3166 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3168 "backend_libs.interval.c"
  }
#line 3170 "backend_libs.interval.c"
}

#line 3173 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0_10001(
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
      backend_libs__interval____Compare____anchor_follow_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3194 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3196 "backend_libs.interval.c"
  }
#line 3198 "backend_libs.interval.c"
}

#line 3201 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0_10001(
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
      backend_libs__interval__succeeded = backend_libs__interval____Unify____branch_construct_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3220 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3222 "backend_libs.interval.c"
  }
#line 3224 "backend_libs.interval.c"
}

#line 3227 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0_10001(
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
      backend_libs__interval____Compare____branch_construct_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3248 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3250 "backend_libs.interval.c"
  }
#line 3252 "backend_libs.interval.c"
}

#line 3255 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_end_info_0_0_10001(
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
      backend_libs__interval__succeeded = backend_libs__interval____Unify____branch_end_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3274 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3276 "backend_libs.interval.c"
  }
#line 3278 "backend_libs.interval.c"
}

#line 3281 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0_10001(
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
      backend_libs__interval____Compare____branch_end_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3302 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3304 "backend_libs.interval.c"
  }
#line 3306 "backend_libs.interval.c"
}

#line 3309 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0_10001(
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
      backend_libs__interval__succeeded = backend_libs__interval____Unify____insert_map_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3328 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3330 "backend_libs.interval.c"
  }
#line 3332 "backend_libs.interval.c"
}

#line 3335 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0_10001(
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
      backend_libs__interval____Compare____insert_map_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3356 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3358 "backend_libs.interval.c"
  }
#line 3360 "backend_libs.interval.c"
}

#line 3363 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0_10001(
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
      backend_libs__interval__succeeded = backend_libs__interval____Unify____insert_spec_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3382 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3384 "backend_libs.interval.c"
  }
#line 3386 "backend_libs.interval.c"
}

#line 3389 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0_10001(
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
      backend_libs__interval____Compare____insert_spec_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3410 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3412 "backend_libs.interval.c"
  }
#line 3414 "backend_libs.interval.c"
}

#line 3417 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0_10001(
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
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_id_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3436 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3438 "backend_libs.interval.c"
  }
#line 3440 "backend_libs.interval.c"
}

#line 3443 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0_10001(
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
      backend_libs__interval____Compare____interval_id_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3464 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3466 "backend_libs.interval.c"
  }
#line 3468 "backend_libs.interval.c"
}

#line 3471 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0_10001(
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
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3490 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3492 "backend_libs.interval.c"
  }
#line 3494 "backend_libs.interval.c"
}

#line 3497 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0_10001(
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
      backend_libs__interval____Compare____interval_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3518 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3520 "backend_libs.interval.c"
  }
#line 3522 "backend_libs.interval.c"
}

#line 3525 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0_10001(
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
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_params_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3544 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3546 "backend_libs.interval.c"
  }
#line 3548 "backend_libs.interval.c"
}

#line 3551 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0_10001(
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
      backend_libs__interval____Compare____interval_params_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3572 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3574 "backend_libs.interval.c"
  }
#line 3576 "backend_libs.interval.c"
}

#line 3579 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0_10001(
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
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_var_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3598 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3600 "backend_libs.interval.c"
  }
#line 3602 "backend_libs.interval.c"
}

#line 3605 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0_10001(
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
      backend_libs__interval____Compare____interval_var_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3626 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3628 "backend_libs.interval.c"
  }
#line 3630 "backend_libs.interval.c"
}

#line 3633 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0_10001(
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
      backend_libs__interval__succeeded = backend_libs__interval____Unify____maybe_needs_flush_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3652 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3654 "backend_libs.interval.c"
  }
#line 3656 "backend_libs.interval.c"
}

#line 3659 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0_10001(
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
      backend_libs__interval____Compare____maybe_needs_flush_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3680 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3682 "backend_libs.interval.c"
  }
#line 3684 "backend_libs.interval.c"
}

#line 3687 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0_10001(
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
      backend_libs__interval__succeeded = backend_libs__interval____Unify____rename_map_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3706 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3708 "backend_libs.interval.c"
  }
#line 3710 "backend_libs.interval.c"
}

#line 3713 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0_10001(
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
      backend_libs__interval____Compare____rename_map_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3734 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3736 "backend_libs.interval.c"
  }
#line 3738 "backend_libs.interval.c"
}

#line 3741 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0_10001(
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
      backend_libs__interval__succeeded = backend_libs__interval____Unify____resume_save_status_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3760 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3762 "backend_libs.interval.c"
  }
#line 3764 "backend_libs.interval.c"
}

#line 3767 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0_10001(
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
      backend_libs__interval____Compare____resume_save_status_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3788 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3790 "backend_libs.interval.c"
  }
#line 3792 "backend_libs.interval.c"
}

#line 3795 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0_10001(
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
      backend_libs__interval__succeeded = backend_libs__interval____Unify____save_point_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3814 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3816 "backend_libs.interval.c"
  }
#line 3818 "backend_libs.interval.c"
}

#line 3821 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_0_0_10001(
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
      backend_libs__interval____Compare____save_point_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3842 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3844 "backend_libs.interval.c"
  }
#line 3846 "backend_libs.interval.c"
}

#line 3849 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0_10001(
#line 3852 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3854 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3856 "backend_libs.interval.c"
{
#line 3858 "backend_libs.interval.c"
  {
#line 3860 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3863 "backend_libs.interval.c"
    {
#line 3865 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____save_point_type_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3868 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3870 "backend_libs.interval.c"
  }
#line 3872 "backend_libs.interval.c"
}

#line 3875 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0_10001(
#line 3878 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3880 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3882 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3884 "backend_libs.interval.c"
{
#line 3886 "backend_libs.interval.c"
  {
#line 3888 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3891 "backend_libs.interval.c"
    {
#line 3893 "backend_libs.interval.c"
      backend_libs__interval____Compare____save_point_type_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3896 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3898 "backend_libs.interval.c"
  }
#line 3900 "backend_libs.interval.c"
}

#line 1183 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(
#line 1183 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1183 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1183 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1183 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1183 "interval.m"
  MR_Word backend_libs__interval__Inserts_6,
#line 1183 "interval.m"
  MR_Word backend_libs__interval__InsertMap_7,
#line 1183 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_8)
#line 1183 "interval.m"
{
#line 1188 "interval.m"
  {
#line 1188 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1188 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1188 "interval.m"
      {
#line 1188 "interval.m"
        *backend_libs__interval__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1188 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_4 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_3;
#line 1188 "interval.m"
      }
#line 1188 "interval.m"
    else
#line 1190 "interval.m"
      {
#line 1190 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_40_40 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1190 "interval.m"
        MR_Word backend_libs__interval__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1190 "interval.m"
        MR_Word backend_libs__interval__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1190 "interval.m"
        MR_Word backend_libs__interval__Goal_18;
#line 1190 "interval.m"
        MR_Word backend_libs__interval__Goals_19;
#line 1190 "interval.m"
        MR_Word backend_libs__interval__VarRename1_25;
#line 1190 "interval.m"
        MR_Word backend_libs__interval__InsertGoals_26;
#line 1190 "interval.m"
        MR_Word backend_libs__interval__GoalInfo0_28;
#line 1190 "interval.m"
        MR_Word backend_libs__interval__Goal1_29;
#line 1190 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_33_33;
#line 1190 "interval.m"
        MR_Word backend_libs__interval__V_34_34;
#line 1190 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_35_35;
#line 1190 "interval.m"
        MR_Word backend_libs__interval__V_36_36;
#line 1190 "interval.m"
        MR_Word backend_libs__interval__V_37_37;
#line 1193 "interval.m"
        MR_Word backend_libs__interval__V_27_27;
#line 1194 "interval.m"
        MR_Word backend_libs__interval__V_30_30;

#line 1191 "interval.m"
        {
#line 1191 "interval.m"
          backend_libs__interval__V_34_34 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_40_40, backend_libs__interval__TypeInfo_40_40);
        }
#line 1191 "interval.m"
        {
#line 1191 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_0_3, &backend_libs__interval__STATE_VARIABLE_VarInfo_33_33, backend_libs__interval__V_34_34, &backend_libs__interval__VarRename1_25, backend_libs__interval__Inserts_6, backend_libs__interval__MaybeFeature_8, &backend_libs__interval__InsertGoals_26);
        }
#line 1193 "interval.m"
        backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_16, (MR_Integer) 0)));
#line 1193 "interval.m"
        backend_libs__interval__GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_16, (MR_Integer) 1)));
#line 1194 "interval.m"
        {
#line 1194 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Goal0_16, &backend_libs__interval__Goal1_29, backend_libs__interval__STATE_VARIABLE_VarInfo_33_33, &backend_libs__interval__STATE_VARIABLE_VarInfo_35_35, backend_libs__interval__VarRename1_25, &backend_libs__interval__V_30_30, backend_libs__interval__InsertMap_7, backend_libs__interval__MaybeFeature_8);
        }
#line 1196 "interval.m"
        {
#line 1196 "interval.m"
          backend_libs__interval__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1196 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_37_37, 0) = ((MR_Box) (backend_libs__interval__Goal1_29));
#line 1196 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1196 "interval.m"
        }
#line 1196 "interval.m"
        {
#line 1196 "interval.m"
          backend_libs__interval__V_36_36 = mercury__list__append_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, backend_libs__interval__InsertGoals_26, backend_libs__interval__V_37_37);
        }
#line 1196 "interval.m"
        {
#line 1196 "interval.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_36_36, backend_libs__interval__GoalInfo0_28, &backend_libs__interval__Goal_18);
        }
#line 1197 "interval.m"
        {
#line 1197 "interval.m"
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
#line 1190 "interval.m"
      }
#line 1188 "interval.m"
  }
#line 1183 "interval.m"
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
#line 614 "interval.m"
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
#line 588 "interval.m"
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

#line 448 "interval.m"
        {
#line 448 "interval.m"
          backend_libs__interval__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_35_35, 0) = ((MR_Box) (backend_libs__interval__NondetLiveVars_16));
#line 448 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 448 "interval.m"
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
#line 488 "interval.m"
    *backend_libs__interval__STATE_VARIABLE_Acc_29 = backend_libs__interval__STATE_VARIABLE_Acc_0_28;
#line 443 "interval.m"
  }
#line 437 "interval.m"
}

#line 1328 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1328__1_2_p_0(
#line 1328 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_31,
#line 1328 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_32)
#line 1328 "interval.m"
{
#line 1328 "interval.m"
  {
#line 1328 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1328 "interval.m"
    {
#line 1328 "interval.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVar__1_31, backend_libs__interval__HeadVar__2_32);
#line 1328 "interval.m"
      return;
    }
#line 1328 "interval.m"
  }
#line 1328 "interval.m"
}

#line 1315 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_deletion__1315__1_2_p_0(
#line 1315 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_16,
#line 1315 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_17)
#line 1315 "interval.m"
{
#line 1315 "interval.m"
  {
#line 1315 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1315 "interval.m"
    {
#line 1315 "interval.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVar__1_16, backend_libs__interval__HeadVar__2_17);
#line 1315 "interval.m"
      return;
    }
#line 1315 "interval.m"
  }
#line 1315 "interval.m"
}

#line 1297 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1297__1_2_p_0(
#line 1297 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_154,
#line 1297 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_155)
#line 1297 "interval.m"
{
#line 1297 "interval.m"
  {
#line 1297 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1297 "interval.m"
    {
#line 1297 "interval.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVar__1_154, backend_libs__interval__HeadVar__2_155);
#line 1297 "interval.m"
      return;
    }
#line 1297 "interval.m"
  }
#line 1297 "interval.m"
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
#line 5629 "backend_libs.interval.c"
  {
#line 5631 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 5634 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 5636 "backend_libs.interval.c"
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
#line 5665 "backend_libs.interval.c"
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
#line 5691 "backend_libs.interval.c"
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

#line 5765 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_3_3 == backend_libs__interval__V_5_5);
#line 58 "interval.m"
        if (backend_libs__interval__succeeded)
#line 58 "interval.m"
          {
#line 5771 "backend_libs.interval.c"
            backend_libs__interval__V_10_10 = (MR_Integer) backend_libs__interval__V_4_4;
#line 5773 "backend_libs.interval.c"
            backend_libs__interval__V_11_11 = (MR_Integer) backend_libs__interval__V_6_6;
#line 5775 "backend_libs.interval.c"
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
#line 5829 "backend_libs.interval.c"
  {
#line 5831 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 5834 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 5836 "backend_libs.interval.c"
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
#line 5944 "backend_libs.interval.c"
  {
#line 5946 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 5949 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 5951 "backend_libs.interval.c"
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
#line 5980 "backend_libs.interval.c"
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
#line 6002 "backend_libs.interval.c"
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

#line 6069 "backend_libs.interval.c"
        {
#line 6071 "backend_libs.interval.c"
          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[7], ((MR_Box) (backend_libs__interval__V_3_3)), ((MR_Box) (backend_libs__interval__V_5_5)));
        }
#line 866 "interval.m"
        if (backend_libs__interval__succeeded)
#line 866 "interval.m"
          {
#line 6078 "backend_libs.interval.c"
            backend_libs__interval__TypeCtorInfo_10_10 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 6080 "backend_libs.interval.c"
            {
#line 6082 "backend_libs.interval.c"
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
#line 6120 "backend_libs.interval.c"
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
#line 6146 "backend_libs.interval.c"
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
#line 6166 "backend_libs.interval.c"
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

#line 6244 "backend_libs.interval.c"
        {
#line 6246 "backend_libs.interval.c"
          backend_libs__interval__succeeded = hlds__hlds_module____Unify____module_info_0_0(backend_libs__interval__V_3_3, backend_libs__interval__V_6_6);
        }
#line 107 "interval.m"
        if (backend_libs__interval__succeeded)
#line 107 "interval.m"
          {
#line 6253 "backend_libs.interval.c"
            backend_libs__interval__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0;
#line 6255 "backend_libs.interval.c"
            {
#line 6257 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeCtorInfo_12_12, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_7_7)));
            }
#line 107 "interval.m"
            if (backend_libs__interval__succeeded)
#line 6262 "backend_libs.interval.c"
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
#line 6299 "backend_libs.interval.c"
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
#line 6377 "backend_libs.interval.c"
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
#line 6397 "backend_libs.interval.c"
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
#line 6417 "backend_libs.interval.c"
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
#line 6437 "backend_libs.interval.c"
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
#line 6457 "backend_libs.interval.c"
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
#line 6477 "backend_libs.interval.c"
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
#line 6501 "backend_libs.interval.c"
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
#line 6521 "backend_libs.interval.c"
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
#line 6541 "backend_libs.interval.c"
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
#line 6561 "backend_libs.interval.c"
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
#line 6581 "backend_libs.interval.c"
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
#line 6601 "backend_libs.interval.c"
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
#line 6621 "backend_libs.interval.c"
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
#line 6641 "backend_libs.interval.c"
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
#line 6661 "backend_libs.interval.c"
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

#line 6840 "backend_libs.interval.c"
        {
#line 6842 "backend_libs.interval.c"
          backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_params_0_0(backend_libs__interval__V_3_3, backend_libs__interval__V_19_19);
        }
#line 114 "interval.m"
        if (backend_libs__interval__succeeded)
#line 114 "interval.m"
          {
#line 6849 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_37_37 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 6851 "backend_libs.interval.c"
            {
#line 6853 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_37_37, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_20_20)));
            }
#line 114 "interval.m"
            if (backend_libs__interval__succeeded)
#line 114 "interval.m"
              {
#line 6860 "backend_libs.interval.c"
                backend_libs__interval__TypeInfo_38_38 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 6862 "backend_libs.interval.c"
                {
#line 6864 "backend_libs.interval.c"
                  backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_38_38, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_21_21)));
                }
#line 114 "interval.m"
                if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                  {
#line 6871 "backend_libs.interval.c"
                    backend_libs__interval__TypeInfo_39_39 = (MR_Word) &backend_libs__interval_scalar_common_2[2];
#line 6873 "backend_libs.interval.c"
                    {
#line 6875 "backend_libs.interval.c"
                      backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_39_39, ((MR_Box) (backend_libs__interval__V_6_6)), ((MR_Box) (backend_libs__interval__V_22_22)));
                    }
#line 114 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                      {
#line 6882 "backend_libs.interval.c"
                        backend_libs__interval__TypeInfo_40_40 = (MR_Word) &backend_libs__interval_scalar_common_2[3];
#line 6884 "backend_libs.interval.c"
                        {
#line 6886 "backend_libs.interval.c"
                          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_40_40, ((MR_Box) (backend_libs__interval__V_7_7)), ((MR_Box) (backend_libs__interval__V_23_23)));
                        }
#line 114 "interval.m"
                        if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                          {
#line 6893 "backend_libs.interval.c"
                            backend_libs__interval__TypeInfo_41_41 = (MR_Word) &backend_libs__interval_scalar_common_2[4];
#line 6895 "backend_libs.interval.c"
                            {
#line 6897 "backend_libs.interval.c"
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

#line 6923 "backend_libs.interval.c"
                                    backend_libs__interval__succeeded = (backend_libs__interval__V_51_51 == backend_libs__interval__V_52_52);
#line 83 "interval.m"
                                  }
#line 114 "interval.m"
                                if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                  {
#line 6931 "backend_libs.interval.c"
                                    {
#line 6933 "backend_libs.interval.c"
                                      backend_libs__interval__succeeded = mercury__counter____Unify____counter_0_0(backend_libs__interval__V_10_10, backend_libs__interval__V_26_26);
                                    }
#line 114 "interval.m"
                                    if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                      {
#line 6940 "backend_libs.interval.c"
                                        backend_libs__interval__TypeInfo_43_43 = (MR_Word) &backend_libs__interval_scalar_common_1[5];
#line 6942 "backend_libs.interval.c"
                                        {
#line 6944 "backend_libs.interval.c"
                                          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_43_43, ((MR_Box) (backend_libs__interval__V_11_11)), ((MR_Box) (backend_libs__interval__V_27_27)));
                                        }
#line 114 "interval.m"
                                        if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                          {
#line 6951 "backend_libs.interval.c"
                                            backend_libs__interval__TypeInfo_44_44 = (MR_Word) &backend_libs__interval_scalar_common_2[5];
#line 6953 "backend_libs.interval.c"
                                            {
#line 6955 "backend_libs.interval.c"
                                              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_44_44, ((MR_Box) (backend_libs__interval__V_12_12)), ((MR_Box) (backend_libs__interval__V_28_28)));
                                            }
#line 114 "interval.m"
                                            if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                              {
#line 6962 "backend_libs.interval.c"
                                                backend_libs__interval__TypeInfo_45_45 = (MR_Word) &backend_libs__interval_scalar_common_1[6];
#line 6964 "backend_libs.interval.c"
                                                {
#line 6966 "backend_libs.interval.c"
                                                  backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_45_45, ((MR_Box) (backend_libs__interval__V_13_13)), ((MR_Box) (backend_libs__interval__V_29_29)));
                                                }
#line 114 "interval.m"
                                                if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                                  {
#line 6973 "backend_libs.interval.c"
                                                    backend_libs__interval__TypeInfo_46_46 = (MR_Word) &backend_libs__interval_scalar_common_2[6];
#line 6975 "backend_libs.interval.c"
                                                    {
#line 6977 "backend_libs.interval.c"
                                                      backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_46_46, ((MR_Box) (backend_libs__interval__V_14_14)), ((MR_Box) (backend_libs__interval__V_30_30)));
                                                    }
#line 114 "interval.m"
                                                    if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                                      {
#line 6984 "backend_libs.interval.c"
                                                        backend_libs__interval__TypeInfo_47_47 = (MR_Word) &backend_libs__interval_scalar_common_2[6];
#line 6986 "backend_libs.interval.c"
                                                        {
#line 6988 "backend_libs.interval.c"
                                                          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_47_47, ((MR_Box) (backend_libs__interval__V_15_15)), ((MR_Box) (backend_libs__interval__V_31_31)));
                                                        }
#line 114 "interval.m"
                                                        if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                                          {
#line 6995 "backend_libs.interval.c"
                                                            backend_libs__interval__TypeInfo_48_48 = (MR_Word) &backend_libs__interval_scalar_common_2[7];
#line 6997 "backend_libs.interval.c"
                                                            {
#line 6999 "backend_libs.interval.c"
                                                              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_48_48, ((MR_Box) (backend_libs__interval__V_16_16)), ((MR_Box) (backend_libs__interval__V_32_32)));
                                                            }
#line 114 "interval.m"
                                                            if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                                              {
#line 7006 "backend_libs.interval.c"
                                                                backend_libs__interval__TypeInfo_49_49 = (MR_Word) &backend_libs__interval_scalar_common_2[8];
#line 7008 "backend_libs.interval.c"
                                                                {
#line 7010 "backend_libs.interval.c"
                                                                  backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_49_49, ((MR_Box) (backend_libs__interval__V_17_17)), ((MR_Box) (backend_libs__interval__V_33_33)));
                                                                }
#line 114 "interval.m"
                                                                if (backend_libs__interval__succeeded)
#line 114 "interval.m"
                                                                  {
#line 7017 "backend_libs.interval.c"
                                                                    backend_libs__interval__TypeInfo_50_50 = (MR_Word) &backend_libs__interval_scalar_common_2[9];
#line 7019 "backend_libs.interval.c"
                                                                    {
#line 7021 "backend_libs.interval.c"
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
#line 7087 "backend_libs.interval.c"
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

#line 7145 "backend_libs.interval.c"
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
#line 7180 "backend_libs.interval.c"
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
#line 7202 "backend_libs.interval.c"
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

#line 7269 "backend_libs.interval.c"
        {
#line 7271 "backend_libs.interval.c"
          backend_libs__interval__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(backend_libs__interval__V_3_3, backend_libs__interval__V_5_5);
        }
#line 93 "interval.m"
        if (backend_libs__interval__succeeded)
#line 93 "interval.m"
          {
#line 7278 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_10_10 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 7280 "backend_libs.interval.c"
            {
#line 7282 "backend_libs.interval.c"
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
#line 7382 "backend_libs.interval.c"
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
#line 7408 "backend_libs.interval.c"
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
#line 7428 "backend_libs.interval.c"
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

#line 7510 "backend_libs.interval.c"
        {
#line 7512 "backend_libs.interval.c"
          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__V_3_3)), ((MR_Box) (backend_libs__interval__V_6_6)));
        }
#line 86 "interval.m"
        if (backend_libs__interval__succeeded)
#line 86 "interval.m"
          {
#line 7519 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_12_12 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 7521 "backend_libs.interval.c"
            {
#line 7523 "backend_libs.interval.c"
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

#line 7549 "backend_libs.interval.c"
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
#line 7607 "backend_libs.interval.c"
  {
#line 7609 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 7612 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 7614 "backend_libs.interval.c"
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
#line 7643 "backend_libs.interval.c"
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
#line 7665 "backend_libs.interval.c"
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

#line 7732 "backend_libs.interval.c"
        {
#line 7734 "backend_libs.interval.c"
          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__V_3_3)), ((MR_Box) (backend_libs__interval__V_5_5)));
        }
#line 101 "interval.m"
        if (backend_libs__interval__succeeded)
#line 101 "interval.m"
          {
#line 7741 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_10_10 = (MR_Word) &backend_libs__interval_scalar_common_1[5];
#line 7743 "backend_libs.interval.c"
            {
#line 7745 "backend_libs.interval.c"
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
#line 7783 "backend_libs.interval.c"
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
#line 7803 "backend_libs.interval.c"
              *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
            else
#line 75 "interval.m"
              if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7809 "backend_libs.interval.c"
                *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
              else
#line 75 "interval.m"
                if (((((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7815 "backend_libs.interval.c"
                  *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
                else
#line 7819 "backend_libs.interval.c"
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
#line 7839 "backend_libs.interval.c"
                *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
              else
#line 75 "interval.m"
                if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 7845 "backend_libs.interval.c"
                  *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
                else
#line 75 "interval.m"
                  if (((((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7851 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
                  else
#line 7855 "backend_libs.interval.c"
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
#line 7870 "backend_libs.interval.c"
                *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
              else
#line 75 "interval.m"
                if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7876 "backend_libs.interval.c"
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
#line 7900 "backend_libs.interval.c"
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
#line 7932 "backend_libs.interval.c"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
                    else
#line 75 "interval.m"
                      if (((((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 7938 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
                      else
#line 7942 "backend_libs.interval.c"
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
#line 7957 "backend_libs.interval.c"
                  *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
                else
#line 75 "interval.m"
                  if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7963 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
                  else
#line 75 "interval.m"
                    if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7969 "backend_libs.interval.c"
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
#line 7997 "backend_libs.interval.c"
                          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 75 "interval.m"
                        else
#line 8001 "backend_libs.interval.c"
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
#line 8018 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
                  else
#line 75 "interval.m"
                    if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8024 "backend_libs.interval.c"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
                    else
#line 75 "interval.m"
                      if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8030 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
                      else
#line 75 "interval.m"
                        if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8036 "backend_libs.interval.c"
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
#line 8060 "backend_libs.interval.c"
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
#line 8090 "backend_libs.interval.c"
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
#line 8103 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
                  else
#line 75 "interval.m"
                    if ((backend_libs__interval__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 8109 "backend_libs.interval.c"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
                    else
#line 75 "interval.m"
                      if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 8115 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
                      else
#line 75 "interval.m"
                        if (((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 8121 "backend_libs.interval.c"
                          *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 75 "interval.m"
                        else
#line 75 "interval.m"
                          if (((((MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 8127 "backend_libs.interval.c"
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
#line 8239 "backend_libs.interval.c"
                  backend_libs__interval__succeeded = (backend_libs__interval__V_7_7 == backend_libs__interval__V_9_9);
#line 75 "interval.m"
                  if (backend_libs__interval__succeeded)
#line 75 "interval.m"
                    {
#line 8245 "backend_libs.interval.c"
                      backend_libs__interval__V_27_27 = (MR_Integer) backend_libs__interval__V_8_8;
#line 8247 "backend_libs.interval.c"
                      backend_libs__interval__V_28_28 = (MR_Integer) backend_libs__interval__V_10_10;
#line 8249 "backend_libs.interval.c"
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
#line 8280 "backend_libs.interval.c"
                    backend_libs__interval__V_31_31 = (MR_Integer) backend_libs__interval__V_11_11;
#line 8282 "backend_libs.interval.c"
                    backend_libs__interval__V_32_32 = (MR_Integer) backend_libs__interval__V_12_12;
#line 8284 "backend_libs.interval.c"
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
#line 8319 "backend_libs.interval.c"
                      backend_libs__interval__succeeded = (backend_libs__interval__V_13_13 == backend_libs__interval__V_15_15);
#line 75 "interval.m"
                      if (backend_libs__interval__succeeded)
#line 75 "interval.m"
                        {
#line 8325 "backend_libs.interval.c"
                          backend_libs__interval__V_25_25 = (MR_Integer) backend_libs__interval__V_14_14;
#line 8327 "backend_libs.interval.c"
                          backend_libs__interval__V_26_26 = (MR_Integer) backend_libs__interval__V_16_16;
#line 8329 "backend_libs.interval.c"
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
#line 8358 "backend_libs.interval.c"
                      backend_libs__interval__V_29_29 = (MR_Integer) backend_libs__interval__V_17_17;
#line 8360 "backend_libs.interval.c"
                      backend_libs__interval__V_30_30 = (MR_Integer) backend_libs__interval__V_18_18;
#line 8362 "backend_libs.interval.c"
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

#line 1337 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_4(
#line 1337 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1337 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1337 "interval.m"
{
#line 1337 "interval.m"
  {
#line 1337 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1337 "interval.m"
    {
#line 1337 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1337 "interval.m"
      return;
    }
#line 1337 "interval.m"
  }
#line 1337 "interval.m"
}

#line 1333 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_3(
#line 1333 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1333 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 1333 "interval.m"
{
#line 1333 "interval.m"
  {
#line 1333 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 1333 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1333 "interval.m"
    MR_Integer backend_libs__interval__conv1_Num_3;

#line 1333 "interval.m"
    {
#line 1333 "interval.m"
      backend_libs__interval__conv1_Num_3 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 1333 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv1_Num_3));
#line 1333 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 1333 "interval.m"
  }
#line 1333 "interval.m"
}

#line 1337 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_2(
#line 1337 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1337 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1337 "interval.m"
{
#line 1337 "interval.m"
  {
#line 1337 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1337 "interval.m"
    {
#line 1337 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1337 "interval.m"
      return;
    }
#line 1337 "interval.m"
  }
#line 1337 "interval.m"
}

#line 1328 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_1(
#line 1328 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1328 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1328 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2)
#line 1328 "interval.m"
{
#line 1328 "interval.m"
  {
#line 1328 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1328 "interval.m"
    MR_Integer backend_libs__interval__conv0_HeadVar__2_32;

#line 1328 "interval.m"
    {
#line 1328 "interval.m"
      backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1328__1_2_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1), &backend_libs__interval__conv0_HeadVar__2_32);
    }
#line 1328 "interval.m"
    *backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__2_32));
#line 1328 "interval.m"
  }
#line 1328 "interval.m"
}

#line 1320 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0(
#line 1320 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1)
#line 1320 "interval.m"
{
#line 1323 "interval.m"
  {
#line 1323 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1323 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_36_36;
#line 1323 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_37_37;
#line 1323 "interval.m"
    MR_Word backend_libs__interval__Anchor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1323 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1323 "interval.m"
    MR_Word backend_libs__interval__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_5, (MR_Integer) 0)));
#line 1323 "interval.m"
    MR_Word backend_libs__interval__Intervals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_5, (MR_Integer) 1)));
#line 1323 "interval.m"
    MR_Word backend_libs__interval__VarNums_9;
#line 1323 "interval.m"
    MR_Word backend_libs__interval__IntervalList_10;
#line 1323 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 1323 "interval.m"
    MR_Word backend_libs__interval__V_25_25;

#line 1325 "interval.m"
    {
#line 1325 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1326 "interval.m"
    {
#line 1326 "interval.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Anchor_4)));
    }
#line 1327 "interval.m"
    {
#line 1327 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) " =>\n");
    }
#line 1328 "interval.m"
    {
#line 1328 "interval.m"
      backend_libs__interval__V_19_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_7);
    }
#line 8549 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1328 "interval.m"
    {
#line 1328 "interval.m"
      mercury__list__map_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], backend_libs__interval__TypeCtorInfo_36_36, (MR_Word) &backend_libs__interval_scalar_common_2[20], backend_libs__interval__V_19_19, &backend_libs__interval__VarNums_9);
    }
#line 1329 "interval.m"
    {
#line 1329 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "vars [");
    }
#line 1337 "interval.m"
    {
#line 1337 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__VarNums_9, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[21]);
    }
#line 1331 "interval.m"
    {
#line 1331 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "]\nintervals: ");
    }
#line 8571 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_37_37 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 1332 "interval.m"
    {
#line 1332 "interval.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__interval__TypeCtorInfo_37_37, backend_libs__interval__Intervals_8, &backend_libs__interval__IntervalList_10);
    }
#line 1333 "interval.m"
    {
#line 1333 "interval.m"
      backend_libs__interval__V_25_25 = mercury__list__map_2_f_0(backend_libs__interval__TypeCtorInfo_37_37, backend_libs__interval__TypeCtorInfo_36_36, (MR_Word) &backend_libs__interval_scalar_common_2[22], backend_libs__interval__IntervalList_10);
    }
#line 1337 "interval.m"
    {
#line 1337 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__V_25_25, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[23]);
    }
#line 1334 "interval.m"
    {
#line 1334 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1334 "interval.m"
      return;
    }
#line 1323 "interval.m"
  }
#line 1320 "interval.m"
}

#line 1337 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_2(
#line 1337 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1337 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1337 "interval.m"
{
#line 1337 "interval.m"
  {
#line 1337 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1337 "interval.m"
    {
#line 1337 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1337 "interval.m"
      return;
    }
#line 1337 "interval.m"
  }
#line 1337 "interval.m"
}

#line 1315 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_1(
#line 1315 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1315 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1315 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2)
#line 1315 "interval.m"
{
#line 1315 "interval.m"
  {
#line 1315 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1315 "interval.m"
    MR_Integer backend_libs__interval__conv0_HeadVar__2_17;

#line 1315 "interval.m"
    {
#line 1315 "interval.m"
      backend_libs__interval__IntroducedFrom__pred__dump_deletion__1315__1_2_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1), &backend_libs__interval__conv0_HeadVar__2_17);
    }
#line 1315 "interval.m"
    *backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__2_17));
#line 1315 "interval.m"
  }
#line 1315 "interval.m"
}

#line 1312 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0(
#line 1312 "interval.m"
  MR_Word backend_libs__interval__Vars_4)
#line 1312 "interval.m"
{
#line 1314 "interval.m"
  {
#line 1314 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1314 "interval.m"
    MR_Word backend_libs__interval__VarNums_6;
#line 1314 "interval.m"
    MR_Word backend_libs__interval__V_10_10;

#line 1315 "interval.m"
    {
#line 1315 "interval.m"
      backend_libs__interval__V_10_10 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_4);
    }
#line 1315 "interval.m"
    {
#line 1315 "interval.m"
      mercury__list__map_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__interval_scalar_common_2[18], backend_libs__interval__V_10_10, &backend_libs__interval__VarNums_6);
    }
#line 1316 "interval.m"
    {
#line 1316 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) " [");
    }
#line 1337 "interval.m"
    {
#line 1337 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__VarNums_6, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[19]);
    }
#line 1318 "interval.m"
    {
#line 1318 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "]");
#line 1318 "interval.m"
      return;
    }
#line 1314 "interval.m"
  }
#line 1312 "interval.m"
}

#line 1306 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_3(
#line 1306 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1306 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1306 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1306 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1306 "interval.m"
{
#line 1306 "interval.m"
  {
#line 1306 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1306 "interval.m"
    {
#line 1306 "interval.m"
      backend_libs__interval__dump_deletion_3_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
#line 1306 "interval.m"
      return;
    }
#line 1306 "interval.m"
  }
#line 1306 "interval.m"
}

#line 1297 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_2(
#line 1297 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1297 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1297 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2)
#line 1297 "interval.m"
{
#line 1297 "interval.m"
  {
#line 1297 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1297 "interval.m"
    MR_Integer backend_libs__interval__conv5_HeadVar__2_155;

#line 1297 "interval.m"
    {
#line 1297 "interval.m"
      backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1297__1_2_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1), &backend_libs__interval__conv5_HeadVar__2_155);
    }
#line 1297 "interval.m"
    *backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv5_HeadVar__2_155));
#line 1297 "interval.m"
  }
#line 1297 "interval.m"
}

#line 1275 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_1(
#line 1275 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1275 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 1275 "interval.m"
{
#line 1275 "interval.m"
  {
#line 1275 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 1275 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1275 "interval.m"
    MR_Integer backend_libs__interval__conv1_Num_3;

#line 1275 "interval.m"
    {
#line 1275 "interval.m"
      backend_libs__interval__conv1_Num_3 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 1275 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv1_Num_3));
#line 1275 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 1275 "interval.m"
  }
#line 1275 "interval.m"
}

#line 1267 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0(
#line 1267 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_5,
#line 1267 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6)
#line 1267 "interval.m"
{
#line 1270 "interval.m"
  {
#line 1270 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1270 "interval.m"
    MR_Integer backend_libs__interval__V_19_19;
#line 1279 "interval.m"
    MR_Word backend_libs__interval__SuccIds_8;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_23_23;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 1274 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 1274 "interval.m"
    MR_Box backend_libs__interval__conv0_SuccIds_8;
#line 1286 "interval.m"
    MR_Word backend_libs__interval__Start_10;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_93_93;
#line 1282 "interval.m"
    MR_Word backend_libs__interval__V_94_94;
#line 1282 "interval.m"
    MR_Box backend_libs__interval__conv2_Start_10;
#line 1293 "interval.m"
    MR_Word backend_libs__interval__End_11;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_95_95;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_96_96;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_97_97;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_98_98;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_99_99;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_100_100;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_101_101;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_102_102;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_103_103;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_104_104;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_105_105;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_106_106;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_107_107;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_108_108;
#line 1289 "interval.m"
    MR_Word backend_libs__interval__V_109_109;
#line 1289 "interval.m"
    MR_Box backend_libs__interval__conv3_End_11;
#line 1301 "interval.m"
    MR_Word backend_libs__interval__Vars_12;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_110_110;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_111_111;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_112_112;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_113_113;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_114_114;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_115_115;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_116_116;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_117_117;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_118_118;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_119_119;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_120_120;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_121_121;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_122_122;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_123_123;
#line 1296 "interval.m"
    MR_Word backend_libs__interval__V_124_124;
#line 1296 "interval.m"
    MR_Box backend_libs__interval__conv4_Vars_12;
#line 1308 "interval.m"
    MR_Word backend_libs__interval__Deletions_14;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_125_125;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_126_126;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_127_127;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_128_128;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_129_129;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_130_130;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_131_131;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_132_132;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_133_133;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_134_134;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_135_135;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_136_136;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_137_137;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_138_138;
#line 1304 "interval.m"
    MR_Word backend_libs__interval__V_139_139;
#line 1304 "interval.m"
    MR_Box backend_libs__interval__conv6_Deletions_14;

#line 1271 "interval.m"
    {
#line 1271 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\ninterval ");
    }
#line 1272 "interval.m"
    {
#line 1272 "interval.m"
      backend_libs__interval__V_19_19 = backend_libs__interval__interval_id_to_int_1_f_0(backend_libs__interval__IntervalId_6);
    }
#line 1272 "interval.m"
    {
#line 1272 "interval.m"
      mercury__io__write_int_3_p_0(backend_libs__interval__V_19_19);
    }
#line 1273 "interval.m"
    {
#line 1273 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 1274 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1274 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1274 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1274 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1274 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1274 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1274 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1274 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1274 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1274 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1274 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1274 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1274 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1274 "interval.m"
    backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1274 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1274 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1274 "interval.m"
    {
#line 1274 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__V_23_23, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv0_SuccIds_8);
    }
#line 1274 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1274 "interval.m"
      {
#line 1274 "interval.m"
        backend_libs__interval__SuccIds_8 = ((MR_Word) backend_libs__interval__conv0_SuccIds_8);
#line 1274 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1274 "interval.m"
      }
#line 1279 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1275 "interval.m"
      {
#line 1275 "interval.m"
        MR_Word backend_libs__interval__SuccNums_9;

#line 1275 "interval.m"
        {
#line 1275 "interval.m"
          backend_libs__interval__SuccNums_9 = mercury__list__map_2_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__interval_scalar_common_2[15], backend_libs__interval__SuccIds_8);
        }
#line 1276 "interval.m"
        {
#line 1276 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "succ [");
        }
#line 1277 "interval.m"
        {
#line 1277 "interval.m"
          backend_libs__interval__write_int_list_3_p_0(backend_libs__interval__SuccNums_9);
        }
#line 1278 "interval.m"
        {
#line 1278 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n");
        }
#line 1275 "interval.m"
      }
#line 1279 "interval.m"
    else
#line 1280 "interval.m"
      {
#line 1280 "interval.m"
        {
#line 1280 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no succ\n");
        }
#line 1280 "interval.m"
      }
#line 1282 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1282 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1282 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1282 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1282 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1282 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1282 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1282 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1282 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1282 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1282 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1282 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1282 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1282 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1282 "interval.m"
    backend_libs__interval__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1282 "interval.m"
    backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1282 "interval.m"
    {
#line 1282 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, backend_libs__interval__V_32_32, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv2_Start_10);
    }
#line 1282 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1282 "interval.m"
      {
#line 1282 "interval.m"
        backend_libs__interval__Start_10 = ((MR_Word) backend_libs__interval__conv2_Start_10);
#line 1282 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1282 "interval.m"
      }
#line 1286 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1283 "interval.m"
      {
#line 1283 "interval.m"
        {
#line 1283 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "start ");
        }
#line 1284 "interval.m"
        {
#line 1284 "interval.m"
          mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Start_10)));
        }
#line 1285 "interval.m"
        {
#line 1285 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1283 "interval.m"
      }
#line 1286 "interval.m"
    else
#line 1287 "interval.m"
      {
#line 1287 "interval.m"
        {
#line 1287 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no start\n");
        }
#line 1287 "interval.m"
      }
#line 1289 "interval.m"
    backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1289 "interval.m"
    backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1289 "interval.m"
    backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1289 "interval.m"
    backend_libs__interval__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1289 "interval.m"
    backend_libs__interval__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1289 "interval.m"
    backend_libs__interval__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1289 "interval.m"
    backend_libs__interval__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1289 "interval.m"
    backend_libs__interval__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1289 "interval.m"
    backend_libs__interval__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1289 "interval.m"
    backend_libs__interval__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1289 "interval.m"
    backend_libs__interval__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1289 "interval.m"
    backend_libs__interval__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1289 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1289 "interval.m"
    backend_libs__interval__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1289 "interval.m"
    backend_libs__interval__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1289 "interval.m"
    backend_libs__interval__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1289 "interval.m"
    {
#line 1289 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, backend_libs__interval__V_40_40, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv3_End_11);
    }
#line 1289 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1289 "interval.m"
      {
#line 1289 "interval.m"
        backend_libs__interval__End_11 = ((MR_Word) backend_libs__interval__conv3_End_11);
#line 1289 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1289 "interval.m"
      }
#line 1293 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1290 "interval.m"
      {
#line 1290 "interval.m"
        {
#line 1290 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "end ");
        }
#line 1291 "interval.m"
        {
#line 1291 "interval.m"
          mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__End_11)));
        }
#line 1292 "interval.m"
        {
#line 1292 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1290 "interval.m"
      }
#line 1293 "interval.m"
    else
#line 1294 "interval.m"
      {
#line 1294 "interval.m"
        {
#line 1294 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no end\n");
        }
#line 1294 "interval.m"
      }
#line 1296 "interval.m"
    backend_libs__interval__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1296 "interval.m"
    backend_libs__interval__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1296 "interval.m"
    backend_libs__interval__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1296 "interval.m"
    backend_libs__interval__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1296 "interval.m"
    backend_libs__interval__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1296 "interval.m"
    backend_libs__interval__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1296 "interval.m"
    backend_libs__interval__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1296 "interval.m"
    backend_libs__interval__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1296 "interval.m"
    backend_libs__interval__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1296 "interval.m"
    backend_libs__interval__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1296 "interval.m"
    backend_libs__interval__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1296 "interval.m"
    backend_libs__interval__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1296 "interval.m"
    backend_libs__interval__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1296 "interval.m"
    backend_libs__interval__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1296 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1296 "interval.m"
    backend_libs__interval__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1296 "interval.m"
    {
#line 1296 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__V_48_48, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv4_Vars_12);
    }
#line 1296 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1296 "interval.m"
      {
#line 1296 "interval.m"
        backend_libs__interval__Vars_12 = ((MR_Word) backend_libs__interval__conv4_Vars_12);
#line 1296 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1296 "interval.m"
      }
#line 1301 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1297 "interval.m"
      {
#line 1297 "interval.m"
        MR_Word backend_libs__interval__VarNums_13;
#line 1297 "interval.m"
        MR_Word backend_libs__interval__V_50_50;

#line 1297 "interval.m"
        {
#line 1297 "interval.m"
          backend_libs__interval__V_50_50 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_12);
        }
#line 1297 "interval.m"
        {
#line 1297 "interval.m"
          mercury__list__map_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__interval_scalar_common_2[16], backend_libs__interval__V_50_50, &backend_libs__interval__VarNums_13);
        }
#line 1298 "interval.m"
        {
#line 1298 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "vars [");
        }
#line 1299 "interval.m"
        {
#line 1299 "interval.m"
          backend_libs__interval__write_int_list_3_p_0(backend_libs__interval__VarNums_13);
        }
#line 1300 "interval.m"
        {
#line 1300 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n");
        }
#line 1297 "interval.m"
      }
#line 1301 "interval.m"
    else
#line 1302 "interval.m"
      {
#line 1302 "interval.m"
        {
#line 1302 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no vars\n");
        }
#line 1302 "interval.m"
      }
#line 1304 "interval.m"
    backend_libs__interval__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1304 "interval.m"
    backend_libs__interval__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1304 "interval.m"
    backend_libs__interval__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1304 "interval.m"
    backend_libs__interval__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1304 "interval.m"
    backend_libs__interval__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1304 "interval.m"
    backend_libs__interval__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1304 "interval.m"
    backend_libs__interval__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1304 "interval.m"
    backend_libs__interval__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1304 "interval.m"
    backend_libs__interval__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1304 "interval.m"
    backend_libs__interval__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1304 "interval.m"
    backend_libs__interval__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1304 "interval.m"
    backend_libs__interval__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1304 "interval.m"
    backend_libs__interval__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1304 "interval.m"
    backend_libs__interval__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1304 "interval.m"
    backend_libs__interval__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1304 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1304 "interval.m"
    {
#line 1304 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[2], backend_libs__interval__V_58_58, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv6_Deletions_14);
    }
#line 1304 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1304 "interval.m"
      {
#line 1304 "interval.m"
        backend_libs__interval__Deletions_14 = ((MR_Word) backend_libs__interval__conv6_Deletions_14);
#line 1304 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1304 "interval.m"
      }
#line 1308 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1305 "interval.m"
      {
#line 1306 "interval.m"
        MR_Box backend_libs__interval__conv7_STATE_VARIABLE_IO_62_62;

#line 1305 "interval.m"
        {
#line 1305 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "deletions");
        }
#line 1306 "interval.m"
        {
#line 1306 "interval.m"
          mercury__list__foldl_4_p_2((MR_Word) &backend_libs__interval_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &backend_libs__interval_scalar_common_2[17], backend_libs__interval__Deletions_14, ((MR_Box) ((MR_Integer) 0)), &backend_libs__interval__conv7_STATE_VARIABLE_IO_62_62);
        }
#line 1307 "interval.m"
        {
#line 1307 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 1307 "interval.m"
          return;
        }
#line 1305 "interval.m"
      }
#line 1308 "interval.m"
    else
#line 1307 "interval.m"
      {
#line 1307 "interval.m"
      }
#line 1270 "interval.m"
  }
#line 1267 "interval.m"
}

#line 1240 "interval.m"
static void MR_CALL 
backend_libs__interval__construct_anchors_4_p_0(
#line 1240 "interval.m"
  MR_Word backend_libs__interval__Construct_5,
#line 1240 "interval.m"
  MR_Word backend_libs__interval__Goal_6,
#line 1240 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_7,
#line 1240 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_8)
#line 1240 "interval.m"
{
#line 1243 "interval.m"
  {
#line 1243 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1243 "interval.m"
    MR_Word backend_libs__interval__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_6, (MR_Integer) 1)));
#line 1243 "interval.m"
    MR_Word backend_libs__interval__GoalId_11;
#line 1244 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_6, (MR_Integer) 0)));

#line 1245 "interval.m"
    {
#line 1245 "interval.m"
      backend_libs__interval__GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_10);
    }
#line 1246 "interval.m"
    {
#line 1246 "interval.m"
      MR_Word base;
#line 1246 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "interval.m"
      *backend_libs__interval__StartAnchor_7 = base;
#line 1246 "interval.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Construct_5));
#line 1246 "interval.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__GoalId_11));
#line 1246 "interval.m"
    }
#line 1247 "interval.m"
    {
#line 1247 "interval.m"
      MR_Word base;
#line 1247 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1247 "interval.m"
      *backend_libs__interval__EndAnchor_8 = base;
#line 1247 "interval.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1247 "interval.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (backend_libs__interval__Construct_5));
#line 1247 "interval.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (backend_libs__interval__GoalId_11));
#line 1247 "interval.m"
    }
#line 1243 "interval.m"
  }
#line 1240 "interval.m"
}

#line 1225 "interval.m"
static void MR_CALL 
backend_libs__interval__build_headvar_subst_4_p_0(
#line 1225 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1225 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 1225 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_Subst_0_3,
#line 1225 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_Subst_4)
#line 1225 "interval.m"
{
#line 1228 "interval.m"
  while (MR_TRUE)
#line 1228 "interval.m"
    {
#line 1228 "interval.m"
      /* tailcall optimized into a loop */
#line 1228 "interval.m"
      {
#line 1228 "interval.m"
        MR_bool backend_libs__interval__succeeded;

#line 1228 "interval.m"
        if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1228 "interval.m"
          *backend_libs__interval__STATE_VARIABLE_Subst_4 = backend_libs__interval__STATE_VARIABLE_Subst_0_3;
#line 1228 "interval.m"
        else
#line 1229 "interval.m"
          {
#line 1229 "interval.m"
            MR_Word backend_libs__interval__HeadVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1229 "interval.m"
            MR_Word backend_libs__interval__HeadVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1229 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_Subst_17_17;
#line 1233 "interval.m"
            MR_Word backend_libs__interval__Replacement_13;
#line 1230 "interval.m"
            MR_Word backend_libs__interval__TypeInfo_19_19 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1230 "interval.m"
            MR_Box backend_libs__interval__conv0_Replacement_13;

#line 1230 "interval.m"
            {
#line 1230 "interval.m"
              backend_libs__interval__succeeded = mercury__map__search_3_p_0(backend_libs__interval__TypeInfo_19_19, backend_libs__interval__TypeInfo_19_19, backend_libs__interval__HeadVar__2_2, ((MR_Box) (backend_libs__interval__HeadVar_9)), &backend_libs__interval__conv0_Replacement_13);
            }
#line 1230 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1230 "interval.m"
              {
#line 1230 "interval.m"
                backend_libs__interval__Replacement_13 = ((MR_Word) backend_libs__interval__conv0_Replacement_13);
#line 1230 "interval.m"
                backend_libs__interval__succeeded = MR_TRUE;
#line 1230 "interval.m"
              }
#line 1233 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1231 "interval.m"
              {
#line 1231 "interval.m"
                MR_Word backend_libs__interval__TypeInfo_20_20 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1231 "interval.m"
                MR_Word backend_libs__interval__STATE_VARIABLE_Subst_16_16;

#line 1231 "interval.m"
                {
#line 1231 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_20_20, backend_libs__interval__TypeInfo_20_20, ((MR_Box) (backend_libs__interval__Replacement_13)), ((MR_Box) (backend_libs__interval__HeadVar_9)), backend_libs__interval__STATE_VARIABLE_Subst_0_3, &backend_libs__interval__STATE_VARIABLE_Subst_16_16);
                }
#line 1232 "interval.m"
                {
#line 1232 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_20_20, backend_libs__interval__TypeInfo_20_20, ((MR_Box) (backend_libs__interval__HeadVar_9)), ((MR_Box) (backend_libs__interval__Replacement_13)), backend_libs__interval__STATE_VARIABLE_Subst_16_16, &backend_libs__interval__STATE_VARIABLE_Subst_17_17);
                }
#line 1231 "interval.m"
              }
#line 1233 "interval.m"
            else
#line 1232 "interval.m"
              backend_libs__interval__STATE_VARIABLE_Subst_17_17 = backend_libs__interval__STATE_VARIABLE_Subst_0_3;
#line 1236 "interval.m"
            /* direct tailcall eliminated */
#line 1236 "interval.m"
            {
#line 1236 "interval.m"
              MR_Word backend_libs__interval__HeadVar__1__tmp_copy_1 = backend_libs__interval__HeadVars_10;
#line 1236 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_Subst_0__tmp_copy_3 = backend_libs__interval__STATE_VARIABLE_Subst_17_17;

#line 1236 "interval.m"
              backend_libs__interval__STATE_VARIABLE_Subst_0_3 = backend_libs__interval__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 1236 "interval.m"
              backend_libs__interval__HeadVar__1_1 = backend_libs__interval__HeadVar__1__tmp_copy_1;
#line 1236 "interval.m"
            }
#line 1236 "interval.m"
            continue;
#line 1229 "interval.m"
          }
#line 1228 "interval.m"
      }
#line 1228 "interval.m"
      break;
#line 1228 "interval.m"
    }
#line 1225 "interval.m"
}

#line 1200 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_cases_7_p_0(
#line 1200 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1200 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1200 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1200 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1200 "interval.m"
  MR_Word backend_libs__interval__VarRename0_5,
#line 1200 "interval.m"
  MR_Word backend_libs__interval__InsertMap_6,
#line 1200 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_7)
#line 1200 "interval.m"
{
#line 1204 "interval.m"
  {
#line 1204 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1204 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1204 "interval.m"
      {
#line 1204 "interval.m"
        *backend_libs__interval__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1204 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_4 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_3;
#line 1204 "interval.m"
      }
#line 1204 "interval.m"
    else
#line 1206 "interval.m"
      {
#line 1206 "interval.m"
        MR_Word backend_libs__interval__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1206 "interval.m"
        MR_Word backend_libs__interval__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1206 "interval.m"
        MR_Word backend_libs__interval__Case_16;
#line 1206 "interval.m"
        MR_Word backend_libs__interval__Cases_17;
#line 1206 "interval.m"
        MR_Word backend_libs__interval__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case0_14, (MR_Integer) 0)));
#line 1206 "interval.m"
        MR_Word backend_libs__interval__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case0_14, (MR_Integer) 1)));
#line 1206 "interval.m"
        MR_Word backend_libs__interval__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case0_14, (MR_Integer) 2)));
#line 1206 "interval.m"
        MR_Word backend_libs__interval__Goal_25;
#line 1206 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_29_29;
#line 1208 "interval.m"
        MR_Word backend_libs__interval__V_26_26;

#line 1208 "interval.m"
        {
#line 1208 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Goal0_24, &backend_libs__interval__Goal_25, backend_libs__interval__STATE_VARIABLE_VarInfo_0_3, &backend_libs__interval__STATE_VARIABLE_VarInfo_29_29, backend_libs__interval__VarRename0_5, &backend_libs__interval__V_26_26, backend_libs__interval__InsertMap_6, backend_libs__interval__MaybeFeature_7);
        }
#line 1210 "interval.m"
        {
#line 1210 "interval.m"
          backend_libs__interval__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1210 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Case_16, 0) = ((MR_Box) (backend_libs__interval__MainConsId_22));
#line 1210 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Case_16, 1) = ((MR_Box) (backend_libs__interval__OtherConsIds_23));
#line 1210 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Case_16, 2) = ((MR_Box) (backend_libs__interval__Goal_25));
#line 1210 "interval.m"
        }
#line 1211 "interval.m"
        {
#line 1211 "interval.m"
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
#line 1206 "interval.m"
      }
#line 1204 "interval.m"
  }
#line 1200 "interval.m"
}

#line 1162 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_conj_9_p_0(
#line 1162 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1162 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1162 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1162 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1162 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_5,
#line 1162 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_6,
#line 1162 "interval.m"
  MR_Word backend_libs__interval__ConjType_7,
#line 1162 "interval.m"
  MR_Word backend_libs__interval__InsertMap_8,
#line 1162 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_9)
#line 1162 "interval.m"
{
#line 1167 "interval.m"
  {
#line 1167 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1167 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1167 "interval.m"
      {
#line 1167 "interval.m"
        *backend_libs__interval__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1167 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_6 = backend_libs__interval__STATE_VARIABLE_VarRename_0_5;
#line 1167 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_4 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_3;
#line 1167 "interval.m"
      }
#line 1167 "interval.m"
    else
#line 1169 "interval.m"
      {
#line 1169 "interval.m"
        MR_Word backend_libs__interval__Goal0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1169 "interval.m"
        MR_Word backend_libs__interval__Goals0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1169 "interval.m"
        MR_Word backend_libs__interval__Goal_27;
#line 1169 "interval.m"
        MR_Word backend_libs__interval__TailGoals_28;
#line 1169 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_36_36;
#line 1169 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_37_37;
#line 1179 "interval.m"
        MR_Word backend_libs__interval__SubGoals_30;
#line 1175 "interval.m"
        MR_Word backend_libs__interval__InnerConjType_29;
#line 1175 "interval.m"
        MR_Word backend_libs__interval__V_40_40;
#line 1175 "interval.m"
        MR_Word backend_libs__interval__V_31_31;

#line 1170 "interval.m"
        {
#line 1170 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Goal0_19, &backend_libs__interval__Goal_27, backend_libs__interval__STATE_VARIABLE_VarInfo_0_3, &backend_libs__interval__STATE_VARIABLE_VarInfo_36_36, backend_libs__interval__STATE_VARIABLE_VarRename_0_5, &backend_libs__interval__STATE_VARIABLE_VarRename_37_37, backend_libs__interval__InsertMap_8, backend_libs__interval__MaybeFeature_9);
        }
#line 1172 "interval.m"
        {
#line 1172 "interval.m"
          backend_libs__interval__record_decisions_in_conj_9_p_0(backend_libs__interval__Goals0_20, &backend_libs__interval__TailGoals_28, backend_libs__interval__STATE_VARIABLE_VarInfo_36_36, backend_libs__interval__STATE_VARIABLE_VarInfo_4, backend_libs__interval__STATE_VARIABLE_VarRename_37_37, backend_libs__interval__STATE_VARIABLE_VarRename_6, backend_libs__interval__ConjType_7, backend_libs__interval__InsertMap_8, backend_libs__interval__MaybeFeature_9);
        }
#line 1175 "interval.m"
        backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_27, (MR_Integer) 0)));
#line 1175 "interval.m"
        backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_27, (MR_Integer) 1)));
#line 1175 "interval.m"
        backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__V_40_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__V_40_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1175 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1175 "interval.m"
          {
#line 1175 "interval.m"
            backend_libs__interval__InnerConjType_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__V_40_40, (MR_Integer) 1)));
#line 1175 "interval.m"
            backend_libs__interval__SubGoals_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__V_40_40, (MR_Integer) 2)));
#line 1176 "interval.m"
            backend_libs__interval__succeeded = (backend_libs__interval__ConjType_7 == backend_libs__interval__InnerConjType_29);
#line 1175 "interval.m"
          }
#line 1179 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1178 "interval.m"
          {
#line 1178 "interval.m"
            {
#line 1178 "interval.m"
              *backend_libs__interval__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, backend_libs__interval__SubGoals_30, backend_libs__interval__TailGoals_28);
            }
#line 1178 "interval.m"
          }
#line 1179 "interval.m"
        else
#line 1180 "interval.m"
          {
#line 1180 "interval.m"
            MR_Word base;
#line 1180 "interval.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "interval.m"
            *backend_libs__interval__HeadVar__2_2 = base;
#line 1180 "interval.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Goal_27));
#line 1180 "interval.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__TailGoals_28));
#line 1180 "interval.m"
          }
#line 1169 "interval.m"
      }
#line 1167 "interval.m"
  }
#line 1162 "interval.m"
}

#line 1131 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_at_call_site_9_p_0(
#line 1131 "interval.m"
  MR_Word backend_libs__interval__Goal0_10,
#line 1131 "interval.m"
  MR_Word * backend_libs__interval__Goal_11,
#line 1131 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_25,
#line 1131 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_26,
#line 1131 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_27,
#line 1131 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_28,
#line 1131 "interval.m"
  MR_Word backend_libs__interval__MustHaveMap_14,
#line 1131 "interval.m"
  MR_Word backend_libs__interval__InsertMap_15,
#line 1131 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_16)
#line 1131 "interval.m"
{
#line 1137 "interval.m"
  {
#line 1137 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1137 "interval.m"
    MR_Word backend_libs__interval__GoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_10, (MR_Integer) 1)));
#line 1137 "interval.m"
    MR_Word backend_libs__interval__Goal1_19;
#line 1138 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_10, (MR_Integer) 0)));
#line 1142 "interval.m"
    MR_Word backend_libs__interval__MaybeNeedAcrossCall_20;
#line 1143 "interval.m"
    MR_Word backend_libs__interval___NeedAcrossCall_21;

#line 1139 "interval.m"
    {
#line 1139 "interval.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__STATE_VARIABLE_VarRename_0_27, backend_libs__interval__Goal0_10, &backend_libs__interval__Goal1_19);
    }
#line 1141 "interval.m"
    {
#line 1141 "interval.m"
      backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo0_18, &backend_libs__interval__MaybeNeedAcrossCall_20);
    }
#line 1142 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1142 "interval.m"
      {
#line 1143 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__MaybeNeedAcrossCall_20)) == (MR_mktag((MR_Integer) 1)));
#line 1143 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1143 "interval.m"
          backend_libs__interval___NeedAcrossCall_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeNeedAcrossCall_20, (MR_Integer) 0)));
#line 1142 "interval.m"
      }
#line 1150 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1145 "interval.m"
      {
#line 1145 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_22_54;
#line 1145 "interval.m"
        MR_Word backend_libs__interval__GoalId_22;
#line 1145 "interval.m"
        MR_Word backend_libs__interval__Anchor_23;
#line 1145 "interval.m"
        MR_Word backend_libs__interval__Inserts_24;
#line 1145 "interval.m"
        MR_Word backend_libs__interval__InsertGoals_48;
#line 1145 "interval.m"
        MR_Word backend_libs__interval__BranchesGoalInfo_50;
#line 1145 "interval.m"
        MR_Word backend_libs__interval__V_52_52;
#line 1145 "interval.m"
        MR_Word backend_libs__interval__V_53_53;
#line 1034 "interval.m"
        MR_Word backend_libs__interval__InsertsPrime_37;
#line 1032 "interval.m"
        MR_Box backend_libs__interval__conv0_InsertsPrime_37;
#line 1046 "interval.m"
        MR_Word backend_libs__interval__V_49_49;

#line 1145 "interval.m"
        {
#line 1145 "interval.m"
          backend_libs__interval__GoalId_22 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo0_18);
        }
#line 1146 "interval.m"
        {
#line 1146 "interval.m"
          backend_libs__interval__Anchor_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__Anchor_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1146 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__Anchor_23, 1) = ((MR_Box) (backend_libs__interval__GoalId_22));
#line 1146 "interval.m"
        }
#line 1032 "interval.m"
        {
#line 1032 "interval.m"
          backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval_scalar_common_1[4], backend_libs__interval__InsertMap_15, ((MR_Box) (backend_libs__interval__Anchor_23)), &backend_libs__interval__conv0_InsertsPrime_37);
        }
#line 1032 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1032 "interval.m"
          {
#line 1032 "interval.m"
            backend_libs__interval__InsertsPrime_37 = ((MR_Word) backend_libs__interval__conv0_InsertsPrime_37);
#line 1032 "interval.m"
            backend_libs__interval__succeeded = MR_TRUE;
#line 1032 "interval.m"
          }
#line 1034 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1033 "interval.m"
          backend_libs__interval__Inserts_24 = backend_libs__interval__InsertsPrime_37;
#line 1034 "interval.m"
        else
#line 1035 "interval.m"
          backend_libs__interval__Inserts_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 9970 "backend_libs.interval.c"
        backend_libs__interval__TypeInfo_22_54 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1044 "interval.m"
        {
#line 1044 "interval.m"
          backend_libs__interval__V_52_52 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_22_54, backend_libs__interval__TypeInfo_22_54);
        }
#line 1044 "interval.m"
        {
#line 1044 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_0_25, backend_libs__interval__STATE_VARIABLE_VarInfo_26, backend_libs__interval__V_52_52, backend_libs__interval__STATE_VARIABLE_VarRename_28, backend_libs__interval__Inserts_24, backend_libs__interval__MaybeFeature_16, &backend_libs__interval__InsertGoals_48);
        }
#line 1046 "interval.m"
        backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_19, (MR_Integer) 0)));
#line 1046 "interval.m"
        backend_libs__interval__BranchesGoalInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_19, (MR_Integer) 1)));
#line 1047 "interval.m"
        {
#line 1047 "interval.m"
          backend_libs__interval__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_53_53, 0) = ((MR_Box) (backend_libs__interval__Goal1_19));
#line 1047 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_53_53, 1) = ((MR_Box) (backend_libs__interval__InsertGoals_48));
#line 1047 "interval.m"
        }
#line 1047 "interval.m"
        {
#line 1047 "interval.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_53_53, backend_libs__interval__BranchesGoalInfo_50, backend_libs__interval__Goal_11);
#line 1047 "interval.m"
          return;
        }
#line 1145 "interval.m"
      }
#line 1150 "interval.m"
    else
#line 1154 "interval.m"
      {
#line 1154 "interval.m"
        if ((backend_libs__interval__MustHaveMap_14 == (MR_Integer) 0))
#line 1153 "interval.m"
          *backend_libs__interval__Goal_11 = backend_libs__interval__Goal1_19;
#line 1154 "interval.m"
        else
#line 1155 "interval.m"
          {
#line 1156 "interval.m"
            {
#line 1156 "interval.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.record_decisions_at_call_site\'/9", (MR_String) "no save map");
#line 1156 "interval.m"
              return;
            }
#line 1155 "interval.m"
          }
#line 1156 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_28 = backend_libs__interval__STATE_VARIABLE_VarRename_0_27;
#line 1156 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_26 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_25;
#line 1154 "interval.m"
      }
#line 1137 "interval.m"
  }
#line 1131 "interval.m"
}

#line 1100 "interval.m"
static void MR_CALL 
backend_libs__interval__create_shadow_vars_10_p_0(
#line 1100 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1100 "interval.m"
  MR_Word backend_libs__interval__VarsToExtract_2,
#line 1100 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_0_3,
#line 1100 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarSet_4,
#line 1100 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_0_5,
#line 1100 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarTypes_6,
#line 1100 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_7,
#line 1100 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_8,
#line 1100 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_0_9,
#line 1100 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VoidRename_10)
#line 1100 "interval.m"
{
#line 1105 "interval.m"
  while (MR_TRUE)
#line 1105 "interval.m"
    {
#line 1105 "interval.m"
      /* tailcall optimized into a loop */
#line 1105 "interval.m"
      {
#line 1105 "interval.m"
        MR_bool backend_libs__interval__succeeded;

#line 1105 "interval.m"
        if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1105 "interval.m"
          {
#line 1105 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VoidRename_10 = backend_libs__interval__STATE_VARIABLE_VoidRename_0_9;
#line 1105 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarRename_8 = backend_libs__interval__STATE_VARIABLE_VarRename_0_7;
#line 1105 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarTypes_6 = backend_libs__interval__STATE_VARIABLE_VarTypes_0_5;
#line 1105 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarSet_4 = backend_libs__interval__STATE_VARIABLE_VarSet_0_3;
#line 1105 "interval.m"
          }
#line 1105 "interval.m"
        else
#line 1107 "interval.m"
          {
#line 1107 "interval.m"
            MR_Word backend_libs__interval__TypeCtorInfo_32_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1107 "interval.m"
            MR_Word backend_libs__interval__Arg_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1107 "interval.m"
            MR_Word backend_libs__interval__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1107 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_39_39;
#line 1107 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_40_40;
#line 1107 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_41_41;
#line 1107 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_42_42;
#line 1107 "interval.m"
            MR_String backend_libs__interval__Name_61;
#line 1107 "interval.m"
            MR_Word backend_libs__interval__Shadow_62;
#line 1107 "interval.m"
            MR_Word backend_libs__interval__Type_63;

#line 1119 "interval.m"
            {
#line 1119 "interval.m"
              mercury__varset__lookup_name_3_p_0(backend_libs__interval__TypeCtorInfo_32_68, backend_libs__interval__STATE_VARIABLE_VarSet_0_3, backend_libs__interval__Arg_24, &backend_libs__interval__Name_61);
            }
#line 1120 "interval.m"
            {
#line 1120 "interval.m"
              mercury__varset__new_named_var_4_p_0(backend_libs__interval__TypeCtorInfo_32_68, backend_libs__interval__Name_61, &backend_libs__interval__Shadow_62, backend_libs__interval__STATE_VARIABLE_VarSet_0_3, &backend_libs__interval__STATE_VARIABLE_VarSet_39_39);
            }
#line 1121 "interval.m"
            {
#line 1121 "interval.m"
              parse_tree__prog_data__lookup_var_type_3_p_0(backend_libs__interval__STATE_VARIABLE_VarTypes_0_5, backend_libs__interval__Arg_24, &backend_libs__interval__Type_63);
            }
#line 1122 "interval.m"
            {
#line 1122 "interval.m"
              parse_tree__prog_data__add_var_type_4_p_0(backend_libs__interval__Shadow_62, backend_libs__interval__Type_63, backend_libs__interval__STATE_VARIABLE_VarTypes_0_5, &backend_libs__interval__STATE_VARIABLE_VarTypes_40_40);
            }
#line 1123 "interval.m"
            {
#line 1123 "interval.m"
              backend_libs__interval__succeeded = parse_tree__set_of_var__member_2_p_0(backend_libs__interval__TypeCtorInfo_32_68, backend_libs__interval__VarsToExtract_2, backend_libs__interval__Arg_24);
            }
#line 1125 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1124 "interval.m"
              {
#line 1124 "interval.m"
                MR_Word backend_libs__interval__TypeInfo_33_69 = (MR_Word) &backend_libs__interval_scalar_common_1[0];

#line 1124 "interval.m"
                {
#line 1124 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_33_69, backend_libs__interval__TypeInfo_33_69, ((MR_Box) (backend_libs__interval__Arg_24)), ((MR_Box) (backend_libs__interval__Shadow_62)), backend_libs__interval__STATE_VARIABLE_VarRename_0_7, &backend_libs__interval__STATE_VARIABLE_VarRename_41_41);
                }
#line 1124 "interval.m"
                backend_libs__interval__STATE_VARIABLE_VoidRename_42_42 = backend_libs__interval__STATE_VARIABLE_VoidRename_0_9;
#line 1124 "interval.m"
              }
#line 1125 "interval.m"
            else
#line 1126 "interval.m"
              {
#line 1126 "interval.m"
                MR_Word backend_libs__interval__TypeInfo_34_70 = (MR_Word) &backend_libs__interval_scalar_common_1[0];

#line 1126 "interval.m"
                {
#line 1126 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_34_70, backend_libs__interval__TypeInfo_34_70, ((MR_Box) (backend_libs__interval__Arg_24)), ((MR_Box) (backend_libs__interval__Shadow_62)), backend_libs__interval__STATE_VARIABLE_VoidRename_0_9, &backend_libs__interval__STATE_VARIABLE_VoidRename_42_42);
                }
#line 1126 "interval.m"
                backend_libs__interval__STATE_VARIABLE_VarRename_41_41 = backend_libs__interval__STATE_VARIABLE_VarRename_0_7;
#line 1126 "interval.m"
              }
#line 1110 "interval.m"
            /* direct tailcall eliminated */
#line 1110 "interval.m"
            {
#line 1110 "interval.m"
              MR_Word backend_libs__interval__HeadVar__1__tmp_copy_1 = backend_libs__interval__Args_25;
#line 1110 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_0__tmp_copy_3 = backend_libs__interval__STATE_VARIABLE_VarSet_39_39;
#line 1110 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_0__tmp_copy_5 = backend_libs__interval__STATE_VARIABLE_VarTypes_40_40;
#line 1110 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0__tmp_copy_7 = backend_libs__interval__STATE_VARIABLE_VarRename_41_41;
#line 1110 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_0__tmp_copy_9 = backend_libs__interval__STATE_VARIABLE_VoidRename_42_42;

#line 1110 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VoidRename_0_9 = backend_libs__interval__STATE_VARIABLE_VoidRename_0__tmp_copy_9;
#line 1110 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarRename_0_7 = backend_libs__interval__STATE_VARIABLE_VarRename_0__tmp_copy_7;
#line 1110 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarTypes_0_5 = backend_libs__interval__STATE_VARIABLE_VarTypes_0__tmp_copy_5;
#line 1110 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarSet_0_3 = backend_libs__interval__STATE_VARIABLE_VarSet_0__tmp_copy_3;
#line 1110 "interval.m"
              backend_libs__interval__HeadVar__1_1 = backend_libs__interval__HeadVar__1__tmp_copy_1;
#line 1110 "interval.m"
            }
#line 1110 "interval.m"
            continue;
#line 1107 "interval.m"
          }
#line 1105 "interval.m"
      }
#line 1105 "interval.m"
      break;
#line 1105 "interval.m"
    }
#line 1100 "interval.m"
}

#line 1049 "interval.m"
static void MR_CALL 
backend_libs__interval__make_inserted_goals_7_p_0(
#line 1049 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_1,
#line 1049 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_2,
#line 1049 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_3,
#line 1049 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_4,
#line 1049 "interval.m"
  MR_Word backend_libs__interval__HeadVar__5_5,
#line 1049 "interval.m"
  MR_Word backend_libs__interval__HeadVar__6_6,
#line 1049 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7)
#line 1049 "interval.m"
{
#line 1053 "interval.m"
  {
#line 1053 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1053 "interval.m"
    if ((backend_libs__interval__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1053 "interval.m"
      {
#line 1053 "interval.m"
        *backend_libs__interval__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1053 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_4 = backend_libs__interval__STATE_VARIABLE_VarRename_0_3;
#line 1053 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_2 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_1;
#line 1053 "interval.m"
      }
#line 1053 "interval.m"
    else
#line 1055 "interval.m"
      {
#line 1055 "interval.m"
        MR_Word backend_libs__interval__Spec_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__5_5, (MR_Integer) 0)));
#line 1055 "interval.m"
        MR_Word backend_libs__interval__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__5_5, (MR_Integer) 1)));
#line 1055 "interval.m"
        MR_Word backend_libs__interval__Goal_20;
#line 1055 "interval.m"
        MR_Word backend_libs__interval__Goals_21;
#line 1055 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_26_26;
#line 1055 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_27_27;
#line 1055 "interval.m"
        MR_Word backend_libs__interval__Goal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Spec_17, (MR_Integer) 0)));
#line 1055 "interval.m"
        MR_Word backend_libs__interval__VarsToExtract_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Spec_17, (MR_Integer) 1)));
#line 1055 "interval.m"
        MR_Word backend_libs__interval__GoalExpr0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_39, (MR_Integer) 0)));
#line 1055 "interval.m"
        MR_Word backend_libs__interval__GoalInfo0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_39, (MR_Integer) 1)));
#line 1089 "interval.m"
        MR_Word backend_libs__interval__V_43_43;
#line 1089 "interval.m"
        MR_Word backend_libs__interval__V_44_44;
#line 1089 "interval.m"
        MR_Word backend_libs__interval__V_45_45;
#line 1089 "interval.m"
        MR_Word backend_libs__interval__V_47_47;
#line 1089 "interval.m"
        MR_Word backend_libs__interval__V_48_48;
#line 1089 "interval.m"
        MR_Word backend_libs__interval__V_49_49;
#line 1089 "interval.m"
        MR_Word backend_libs__interval__ArgVars_50;
#line 1089 "interval.m"
        MR_Word backend_libs__interval__V_51_51;
#line 1089 "interval.m"
        MR_Word backend_libs__interval__V_53_53;
#line 1067 "interval.m"
        MR_Word backend_libs__interval__Unification0_46;
#line 1068 "interval.m"
        MR_Word backend_libs__interval__V_52_52;

#line 1067 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_41)) == (MR_mktag((MR_Integer) 1)));
#line 1067 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1067 "interval.m"
          {
#line 1067 "interval.m"
            backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 0)));
#line 1067 "interval.m"
            backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 1)));
#line 1067 "interval.m"
            backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 2)));
#line 1067 "interval.m"
            backend_libs__interval__Unification0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 3)));
#line 1067 "interval.m"
            backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 4)));
#line 1068 "interval.m"
            backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__Unification0_46)) == (MR_mktag((MR_Integer) 1)));
#line 1068 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1068 "interval.m"
              {
#line 1068 "interval.m"
                backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 0)));
#line 1068 "interval.m"
                backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 1)));
#line 1068 "interval.m"
                backend_libs__interval__ArgVars_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 2)));
#line 1068 "interval.m"
                backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 3)));
#line 1068 "interval.m"
                backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 4)));
#line 1068 "interval.m"
                backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 5)));
#line 1068 "interval.m"
              }
#line 1067 "interval.m"
          }
#line 1089 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1070 "interval.m"
          {
#line 1070 "interval.m"
            MR_Word backend_libs__interval__TypeInfo_65_87;
#line 1070 "interval.m"
            MR_Word backend_libs__interval__Unification1_54;
#line 1070 "interval.m"
            MR_Word backend_libs__interval__GoalExpr1_55;
#line 1070 "interval.m"
            MR_Word backend_libs__interval__GoalInfo1_56;
#line 1070 "interval.m"
            MR_Word backend_libs__interval__GoalInfo2_58;
#line 1070 "interval.m"
            MR_Word backend_libs__interval__Goal2_59;
#line 1070 "interval.m"
            MR_Word backend_libs__interval__VarSet0_60;
#line 1070 "interval.m"
            MR_Word backend_libs__interval__VarTypes0_61;
#line 1070 "interval.m"
            MR_Word backend_libs__interval__VarSet_62;
#line 1070 "interval.m"
            MR_Word backend_libs__interval__VarTypes_63;
#line 1070 "interval.m"
            MR_Word backend_libs__interval__NewRename_64;
#line 1070 "interval.m"
            MR_Word backend_libs__interval__VoidRename_65;
#line 1070 "interval.m"
            MR_Word backend_libs__interval__Goal3_66;
#line 1070 "interval.m"
            MR_Word backend_libs__interval__V_69_69;
#line 1070 "interval.m"
            MR_Word backend_libs__interval__V_70_70;

#line 1070 "interval.m"
            {
#line 1070 "interval.m"
              backend_libs__interval__Unification1_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 0) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 1070 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 1) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 1070 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 2) = ((MR_Box) (backend_libs__interval__ArgVars_50));
#line 1070 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 3) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 1070 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1070 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 5) = ((MR_Box) (backend_libs__interval__V_53_53));
#line 1070 "interval.m"
            }
#line 1071 "interval.m"
            {
#line 1071 "interval.m"
              backend_libs__interval__GoalExpr1_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 0) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 1071 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 1) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 1071 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 2) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 1071 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 3) = ((MR_Box) (backend_libs__interval__Unification1_54));
#line 1071 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 4) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 1071 "interval.m"
            }
#line 1072 "interval.m"
            {
#line 1072 "interval.m"
              hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, backend_libs__interval__GoalInfo0_42, &backend_libs__interval__GoalInfo1_56);
            }
#line 1076 "interval.m"
            if ((backend_libs__interval__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1078 "interval.m"
              backend_libs__interval__GoalInfo2_58 = backend_libs__interval__GoalInfo1_56;
#line 1076 "interval.m"
            else
#line 1074 "interval.m"
              {
#line 1074 "interval.m"
                MR_Word backend_libs__interval__Feature_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__6_6, (MR_Integer) 0)));

#line 1075 "interval.m"
                {
#line 1075 "interval.m"
                  hlds__hlds_goal__goal_info_add_feature_3_p_0(backend_libs__interval__Feature_57, backend_libs__interval__GoalInfo1_56, &backend_libs__interval__GoalInfo2_58);
                }
#line 1074 "interval.m"
              }
#line 1080 "interval.m"
            {
#line 1080 "interval.m"
              backend_libs__interval__Goal2_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_59, 0) = ((MR_Box) (backend_libs__interval__GoalExpr1_55));
#line 1080 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_59, 1) = ((MR_Box) (backend_libs__interval__GoalInfo2_58));
#line 1080 "interval.m"
            }
#line 1081 "interval.m"
            backend_libs__interval__VarSet0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_0_1, (MR_Integer) 0)));
#line 1081 "interval.m"
            backend_libs__interval__VarTypes0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_0_1, (MR_Integer) 1)));
#line 10436 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_65_87 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1082 "interval.m"
            {
#line 1082 "interval.m"
              backend_libs__interval__V_69_69 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_87, backend_libs__interval__TypeInfo_65_87);
            }
#line 1082 "interval.m"
            {
#line 1082 "interval.m"
              backend_libs__interval__V_70_70 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_87, backend_libs__interval__TypeInfo_65_87);
            }
#line 1082 "interval.m"
            {
#line 1082 "interval.m"
              backend_libs__interval__create_shadow_vars_10_p_0(backend_libs__interval__ArgVars_50, backend_libs__interval__VarsToExtract_40, backend_libs__interval__VarSet0_60, &backend_libs__interval__VarSet_62, backend_libs__interval__VarTypes0_61, &backend_libs__interval__VarTypes_63, backend_libs__interval__V_69_69, &backend_libs__interval__NewRename_64, backend_libs__interval__V_70_70, &backend_libs__interval__VoidRename_65);
            }
#line 1084 "interval.m"
            {
#line 1084 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1084 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_26_26, 0) = ((MR_Box) (backend_libs__interval__VarSet_62));
#line 1084 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_26_26, 1) = ((MR_Box) (backend_libs__interval__VarTypes_63));
#line 1084 "interval.m"
            }
#line 1085 "interval.m"
            {
#line 1085 "interval.m"
              mercury__map__old_merge_3_p_0(backend_libs__interval__TypeInfo_65_87, backend_libs__interval__TypeInfo_65_87, backend_libs__interval__STATE_VARIABLE_VarRename_0_3, backend_libs__interval__NewRename_64, &backend_libs__interval__STATE_VARIABLE_VarRename_27_27);
            }
#line 1087 "interval.m"
            {
#line 1087 "interval.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__STATE_VARIABLE_VarRename_27_27, backend_libs__interval__Goal2_59, &backend_libs__interval__Goal3_66);
            }
#line 1088 "interval.m"
            {
#line 1088 "interval.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__VoidRename_65, backend_libs__interval__Goal3_66, &backend_libs__interval__Goal_20);
            }
#line 1070 "interval.m"
          }
#line 1089 "interval.m"
        else
#line 1090 "interval.m"
          {
#line 1090 "interval.m"
            {
#line 1090 "interval.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.make_inserted_goal\'/7", (MR_String) "not a deconstruct");
#line 1090 "interval.m"
              return;
            }
#line 1090 "interval.m"
          }
#line 1057 "interval.m"
        {
#line 1057 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_26_26, backend_libs__interval__STATE_VARIABLE_VarInfo_2, backend_libs__interval__STATE_VARIABLE_VarRename_27_27, backend_libs__interval__STATE_VARIABLE_VarRename_4, backend_libs__interval__Specs_18, backend_libs__interval__HeadVar__6_6, &backend_libs__interval__Goals_21);
        }
#line 1055 "interval.m"
        {
#line 1055 "interval.m"
          MR_Word base;
#line 1055 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "interval.m"
          *backend_libs__interval__HeadVar__7_7 = base;
#line 1055 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Goal_20));
#line 1055 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__Goals_21));
#line 1055 "interval.m"
        }
#line 1055 "interval.m"
      }
#line 1053 "interval.m"
  }
#line 1049 "interval.m"
}

#line 1038 "interval.m"
static void MR_CALL 
backend_libs__interval__insert_goals_after_7_p_0(
#line 1038 "interval.m"
  MR_Word backend_libs__interval__BranchesGoal_8,
#line 1038 "interval.m"
  MR_Word * backend_libs__interval__Goal_9,
#line 1038 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_17,
#line 1038 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_18,
#line 1038 "interval.m"
  MR_Word * backend_libs__interval__VarRename_11,
#line 1038 "interval.m"
  MR_Word backend_libs__interval__Inserts_12,
#line 1038 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_13)
#line 1038 "interval.m"
{
#line 1043 "interval.m"
  {
#line 1043 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1043 "interval.m"
    MR_Word backend_libs__interval__TypeInfo_22_22 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1043 "interval.m"
    MR_Word backend_libs__interval__InsertGoals_14;
#line 1043 "interval.m"
    MR_Word backend_libs__interval__BranchesGoalInfo_16;
#line 1043 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 1043 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 1046 "interval.m"
    MR_Word backend_libs__interval__V_15_15;

#line 1044 "interval.m"
    {
#line 1044 "interval.m"
      backend_libs__interval__V_20_20 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_22_22, backend_libs__interval__TypeInfo_22_22);
    }
#line 1044 "interval.m"
    {
#line 1044 "interval.m"
      backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_0_17, backend_libs__interval__STATE_VARIABLE_VarInfo_18, backend_libs__interval__V_20_20, backend_libs__interval__VarRename_11, backend_libs__interval__Inserts_12, backend_libs__interval__MaybeFeature_13, &backend_libs__interval__InsertGoals_14);
    }
#line 1046 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__BranchesGoal_8, (MR_Integer) 0)));
#line 1046 "interval.m"
    backend_libs__interval__BranchesGoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__BranchesGoal_8, (MR_Integer) 1)));
#line 1047 "interval.m"
    {
#line 1047 "interval.m"
      backend_libs__interval__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 0) = ((MR_Box) (backend_libs__interval__BranchesGoal_8));
#line 1047 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 1) = ((MR_Box) (backend_libs__interval__InsertGoals_14));
#line 1047 "interval.m"
    }
#line 1047 "interval.m"
    {
#line 1047 "interval.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_21_21, backend_libs__interval__BranchesGoalInfo_16, backend_libs__interval__Goal_9);
#line 1047 "interval.m"
      return;
    }
#line 1043 "interval.m"
  }
#line 1038 "interval.m"
}

#line 1028 "interval.m"
static void MR_CALL 
backend_libs__interval__lookup_inserts_3_p_0(
#line 1028 "interval.m"
  MR_Word backend_libs__interval__InsertMap_4,
#line 1028 "interval.m"
  MR_Word backend_libs__interval__Anchor_5,
#line 1028 "interval.m"
  MR_Word * backend_libs__interval__Inserts_6)
#line 1028 "interval.m"
{
#line 1034 "interval.m"
  {
#line 1034 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1034 "interval.m"
    MR_Word backend_libs__interval__InsertsPrime_7;
#line 1032 "interval.m"
    MR_Box backend_libs__interval__conv0_InsertsPrime_7;

#line 1032 "interval.m"
    {
#line 1032 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval_scalar_common_1[4], backend_libs__interval__InsertMap_4, ((MR_Box) (backend_libs__interval__Anchor_5)), &backend_libs__interval__conv0_InsertsPrime_7);
    }
#line 1032 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1032 "interval.m"
      {
#line 1032 "interval.m"
        backend_libs__interval__InsertsPrime_7 = ((MR_Word) backend_libs__interval__conv0_InsertsPrime_7);
#line 1032 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1032 "interval.m"
      }
#line 1034 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1033 "interval.m"
      *backend_libs__interval__Inserts_6 = backend_libs__interval__InsertsPrime_7;
#line 1034 "interval.m"
    else
#line 1035 "interval.m"
      *backend_libs__interval__Inserts_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1034 "interval.m"
  }
#line 1028 "interval.m"
}

#line 879 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_goal_8_p_0(
#line 879 "interval.m"
  MR_Word backend_libs__interval__Goal0_9,
#line 879 "interval.m"
  MR_Word * backend_libs__interval__Goal_10,
#line 879 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_112,
#line 879 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_113,
#line 879 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_114,
#line 879 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_115,
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
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_145_145;
#line 924 "interval.m"
        MR_Word backend_libs__interval__V_146_146;
#line 924 "interval.m"
        MR_Word backend_libs__interval__EndAnchor_175;
#line 924 "interval.m"
        MR_Word backend_libs__interval__Goal1_176;
#line 924 "interval.m"
        MR_Word backend_libs__interval__Inserts_177;
#line 925 "interval.m"
        MR_Word backend_libs__interval__V_39_39;
#line 928 "interval.m"
        MR_Word backend_libs__interval___StartAnchor_174;

#line 925 "interval.m"
        {
#line 925 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__NegGoal0_37, &backend_libs__interval__NegGoal_38, backend_libs__interval__STATE_VARIABLE_VarInfo_0_112, &backend_libs__interval__STATE_VARIABLE_VarInfo_145_145, backend_libs__interval__STATE_VARIABLE_VarRename_0_114, &backend_libs__interval__V_39_39, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
        }
#line 927 "interval.m"
        backend_libs__interval__V_146_146 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) backend_libs__interval__NegGoal_38);
#line 927 "interval.m"
        {
#line 927 "interval.m"
          backend_libs__interval__Goal1_176 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 927 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_176, 0) = ((MR_Box) (backend_libs__interval__V_146_146));
#line 927 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_176, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 927 "interval.m"
        }
#line 928 "interval.m"
        {
#line 928 "interval.m"
          backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 3, backend_libs__interval__Goal0_9, &backend_libs__interval___StartAnchor_174, &backend_libs__interval__EndAnchor_175);
        }
#line 929 "interval.m"
        {
#line 929 "interval.m"
          backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_175, &backend_libs__interval__Inserts_177);
        }
#line 931 "interval.m"
        {
#line 931 "interval.m"
          backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_176, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_145_145, backend_libs__interval__STATE_VARIABLE_VarInfo_113, backend_libs__interval__STATE_VARIABLE_VarRename_115, backend_libs__interval__Inserts_177, backend_libs__interval__MaybeFeature_14);
#line 931 "interval.m"
          return;
        }
#line 924 "interval.m"
      }
#line 893 "interval.m"
    else
#line 893 "interval.m"
      if (((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) == (MR_mktag((MR_Integer) 2))))
#line 1002 "interval.m"
        {
#line 1002 "interval.m"
          MR_Word backend_libs__interval__Builtin_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 1002 "interval.m"
          MR_Word backend_libs__interval__MustHaveMap_198;
#line 1002 "interval.m"
          MR_Word backend_libs__interval__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)));
#line 1002 "interval.m"
          MR_Integer backend_libs__interval__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 1002 "interval.m"
          MR_Word backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 1002 "interval.m"
          MR_Word backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 4)));
#line 1002 "interval.m"
          MR_Word backend_libs__interval__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 5)));

#line 1006 "interval.m"
          if ((backend_libs__interval__Builtin_96 == (MR_Integer) 0))
#line 1005 "interval.m"
            backend_libs__interval__MustHaveMap_198 = (MR_Integer) 0;
#line 1006 "interval.m"
          else
#line 1010 "interval.m"
            backend_libs__interval__MustHaveMap_198 = (MR_Integer) 1;
#line 1012 "interval.m"
          {
#line 1012 "interval.m"
            backend_libs__interval__record_decisions_at_call_site_9_p_0(backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_0_112, backend_libs__interval__STATE_VARIABLE_VarInfo_113, backend_libs__interval__STATE_VARIABLE_VarRename_0_114, backend_libs__interval__STATE_VARIABLE_VarRename_115, backend_libs__interval__MustHaveMap_198, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
#line 1012 "interval.m"
            return;
          }
#line 1002 "interval.m"
        }
#line 893 "interval.m"
      else
#line 893 "interval.m"
        if (((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) == (MR_mktag((MR_Integer) 1))))
#line 1019 "interval.m"
          {
#line 1020 "interval.m"
            {
#line 1020 "interval.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__STATE_VARIABLE_VarRename_0_114, backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10);
            }
#line 1020 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarInfo_113 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_112;
#line 1020 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarRename_115 = backend_libs__interval__STATE_VARIABLE_VarRename_0_114;
#line 1019 "interval.m"
          }
#line 893 "interval.m"
        else
#line 893 "interval.m"
          if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1015 "interval.m"
            {
#line 1016 "interval.m"
              {
#line 1016 "interval.m"
                backend_libs__interval__record_decisions_at_call_site_9_p_0(backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_0_112, backend_libs__interval__STATE_VARIABLE_VarInfo_113, backend_libs__interval__STATE_VARIABLE_VarRename_0_114, backend_libs__interval__STATE_VARIABLE_VarRename_115, (MR_Integer) 0, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
#line 1016 "interval.m"
                return;
              }
#line 1015 "interval.m"
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
                  backend_libs__interval__record_decisions_in_conj_9_p_0(backend_libs__interval__Goals0_18, &backend_libs__interval__Goals_19, backend_libs__interval__STATE_VARIABLE_VarInfo_0_112, backend_libs__interval__STATE_VARIABLE_VarInfo_113, backend_libs__interval__STATE_VARIABLE_VarRename_0_114, backend_libs__interval__STATE_VARIABLE_VarRename_115, backend_libs__interval__ConjType_17, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
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
                  MR_Word backend_libs__interval__Goals0_168 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));

#line 895 "interval.m"
                  {
#line 895 "interval.m"
                    backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 1, backend_libs__interval__Goal0_9, &backend_libs__interval__StartAnchor_21, &backend_libs__interval__EndAnchor_22);
                  }
#line 908 "interval.m"
                  if ((backend_libs__interval__Goals0_168 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 909 "interval.m"
                    {
#line 911 "interval.m"
                      *backend_libs__interval__Goal_10 = backend_libs__interval__Goal0_9;
#line 911 "interval.m"
                      *backend_libs__interval__STATE_VARIABLE_VarInfo_113 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_112;
#line 911 "interval.m"
                      *backend_libs__interval__STATE_VARIABLE_VarRename_115 = backend_libs__interval__STATE_VARIABLE_VarRename_0_114;
#line 909 "interval.m"
                    }
#line 908 "interval.m"
                  else
#line 897 "interval.m"
                    {
#line 897 "interval.m"
                      MR_Word backend_libs__interval__FirstGoal0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals0_168, (MR_Integer) 0)));
#line 897 "interval.m"
                      MR_Word backend_libs__interval__LaterGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals0_168, (MR_Integer) 1)));
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
                      MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_157_157;
#line 897 "interval.m"
                      MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_158_158;
#line 897 "interval.m"
                      MR_Word backend_libs__interval__V_159_159;
#line 897 "interval.m"
                      MR_Word backend_libs__interval__Goals_164;
#line 898 "interval.m"
                      MR_Word backend_libs__interval__V_26_26;

#line 898 "interval.m"
                      {
#line 898 "interval.m"
                        backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__FirstGoal0_23, &backend_libs__interval__FirstGoal_25, backend_libs__interval__STATE_VARIABLE_VarInfo_0_112, &backend_libs__interval__STATE_VARIABLE_VarInfo_157_157, backend_libs__interval__STATE_VARIABLE_VarRename_0_114, &backend_libs__interval__V_26_26, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                      }
#line 900 "interval.m"
                      {
#line 900 "interval.m"
                        backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__StartAnchor_21, &backend_libs__interval__StartInserts_27);
                      }
#line 901 "interval.m"
                      {
#line 901 "interval.m"
                        backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(backend_libs__interval__LaterGoals0_24, &backend_libs__interval__LaterGoals_28, backend_libs__interval__STATE_VARIABLE_VarInfo_157_157, &backend_libs__interval__STATE_VARIABLE_VarInfo_158_158, backend_libs__interval__StartInserts_27, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                      }
#line 903 "interval.m"
                      {
#line 903 "interval.m"
                        backend_libs__interval__Goals_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "interval.m"
                        MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_164, 0) = ((MR_Box) (backend_libs__interval__FirstGoal_25));
#line 903 "interval.m"
                        MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_164, 1) = ((MR_Box) (backend_libs__interval__LaterGoals_28));
#line 903 "interval.m"
                      }
#line 904 "interval.m"
                      {
#line 904 "interval.m"
                        backend_libs__interval__V_159_159 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "interval.m"
                        MR_hl_field(MR_mktag(3), backend_libs__interval__V_159_159, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 904 "interval.m"
                        MR_hl_field(MR_mktag(3), backend_libs__interval__V_159_159, 1) = ((MR_Box) (backend_libs__interval__Goals_164));
#line 904 "interval.m"
                      }
#line 904 "interval.m"
                      {
#line 904 "interval.m"
                        backend_libs__interval__Goal1_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 904 "interval.m"
                        MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_29, 0) = ((MR_Box) (backend_libs__interval__V_159_159));
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
                        backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_29, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_158_158, backend_libs__interval__STATE_VARIABLE_VarInfo_113, backend_libs__interval__STATE_VARIABLE_VarRename_115, backend_libs__interval__Inserts_30, backend_libs__interval__MaybeFeature_14);
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
#line 987 "interval.m"
                  {
#line 987 "interval.m"
                    MR_Word backend_libs__interval__GenericCall_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 987 "interval.m"
                    MR_Word backend_libs__interval__MustHaveMap_83;
#line 987 "interval.m"
                    MR_Word backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 987 "interval.m"
                    MR_Word backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 987 "interval.m"
                    MR_Word backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 4)));
#line 987 "interval.m"
                    MR_Word backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 5)));

#line 992 "interval.m"
                    if (((MR_tag((MR_Word) backend_libs__interval__GenericCall_77)) == (MR_mktag((MR_Integer) 3))))
#line 991 "interval.m"
                      backend_libs__interval__MustHaveMap_83 = (MR_Integer) 0;
#line 992 "interval.m"
                    else
#line 997 "interval.m"
                      backend_libs__interval__MustHaveMap_83 = (MR_Integer) 1;
#line 999 "interval.m"
                    {
#line 999 "interval.m"
                      backend_libs__interval__record_decisions_at_call_site_9_p_0(backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_0_112, backend_libs__interval__STATE_VARIABLE_VarInfo_113, backend_libs__interval__STATE_VARIABLE_VarRename_0_114, backend_libs__interval__STATE_VARIABLE_VarRename_115, backend_libs__interval__MustHaveMap_83, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
#line 999 "interval.m"
                      return;
                    }
#line 987 "interval.m"
                  }
#line 893 "interval.m"
                else
#line 893 "interval.m"
                  if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 934 "interval.m"
                    {
#line 934 "interval.m"
                      MR_Word backend_libs__interval__TypeInfo_201_201;
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
                      MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_133_133;
#line 934 "interval.m"
                      MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_134_134;
#line 934 "interval.m"
                      MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_135_135;
#line 934 "interval.m"
                      MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_136_136;
#line 934 "interval.m"
                      MR_Word backend_libs__interval__V_137_137;
#line 934 "interval.m"
                      MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_138_138;
#line 934 "interval.m"
                      MR_Word backend_libs__interval__V_139_139;
#line 934 "interval.m"
                      MR_Word backend_libs__interval__V_140_140;
#line 934 "interval.m"
                      MR_Word backend_libs__interval__V_142_142;
#line 934 "interval.m"
                      MR_Word backend_libs__interval__StartAnchor_179;
#line 934 "interval.m"
                      MR_Word backend_libs__interval__EndAnchor_180;
#line 934 "interval.m"
                      MR_Word backend_libs__interval__StartInserts_181;
#line 934 "interval.m"
                      MR_Word backend_libs__interval__Goal1_182;
#line 939 "interval.m"
                      MR_Word backend_libs__interval__V_47_47;
#line 944 "interval.m"
                      MR_Word backend_libs__interval__V_51_51;
#line 946 "interval.m"
                      MR_Word backend_libs__interval__V_52_52;

#line 935 "interval.m"
                      {
#line 935 "interval.m"
                        backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 0, backend_libs__interval__Goal0_9, &backend_libs__interval__StartAnchor_179, &backend_libs__interval__EndAnchor_180);
                      }
#line 936 "interval.m"
                      {
#line 936 "interval.m"
                        parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_114, backend_libs__interval__Vars0_40, &backend_libs__interval__Vars_44);
                      }
#line 937 "interval.m"
                      {
#line 937 "interval.m"
                        backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Cond0_41, &backend_libs__interval__Cond_45, backend_libs__interval__STATE_VARIABLE_VarInfo_0_112, &backend_libs__interval__STATE_VARIABLE_VarInfo_133_133, backend_libs__interval__STATE_VARIABLE_VarRename_0_114, &backend_libs__interval__STATE_VARIABLE_VarRename_134_134, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                      }
#line 939 "interval.m"
                      {
#line 939 "interval.m"
                        backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Then0_42, &backend_libs__interval__Then_46, backend_libs__interval__STATE_VARIABLE_VarInfo_133_133, &backend_libs__interval__STATE_VARIABLE_VarInfo_135_135, backend_libs__interval__STATE_VARIABLE_VarRename_134_134, &backend_libs__interval__V_47_47, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                      }
#line 941 "interval.m"
                      {
#line 941 "interval.m"
                        backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__StartAnchor_179, &backend_libs__interval__StartInserts_181);
                      }
#line 11094 "backend_libs.interval.c"
                      backend_libs__interval__TypeInfo_201_201 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 942 "interval.m"
                      {
#line 942 "interval.m"
                        backend_libs__interval__V_137_137 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_201_201, backend_libs__interval__TypeInfo_201_201);
                      }
#line 942 "interval.m"
                      {
#line 942 "interval.m"
                        backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_135_135, &backend_libs__interval__STATE_VARIABLE_VarInfo_136_136, backend_libs__interval__V_137_137, &backend_libs__interval__VarRenameElse_48, backend_libs__interval__StartInserts_181, backend_libs__interval__MaybeFeature_14, &backend_libs__interval__StartInsertGoals_49);
                      }
#line 944 "interval.m"
                      {
#line 944 "interval.m"
                        backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Else0_43, &backend_libs__interval__Else1_50, backend_libs__interval__STATE_VARIABLE_VarInfo_136_136, &backend_libs__interval__STATE_VARIABLE_VarInfo_138_138, backend_libs__interval__VarRenameElse_48, &backend_libs__interval__V_51_51, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                      }
#line 946 "interval.m"
                      backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Else0_43, (MR_Integer) 0)));
#line 946 "interval.m"
                      backend_libs__interval__ElseGoalInfo0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Else0_43, (MR_Integer) 1)));
#line 947 "interval.m"
                      {
#line 947 "interval.m"
                        backend_libs__interval__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "interval.m"
                        MR_hl_field(MR_mktag(1), backend_libs__interval__V_140_140, 0) = ((MR_Box) (backend_libs__interval__Else1_50));
#line 947 "interval.m"
                        MR_hl_field(MR_mktag(1), backend_libs__interval__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 947 "interval.m"
                      }
#line 947 "interval.m"
                      {
#line 947 "interval.m"
                        backend_libs__interval__V_139_139 = mercury__list__append_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, backend_libs__interval__StartInsertGoals_49, backend_libs__interval__V_140_140);
                      }
#line 947 "interval.m"
                      {
#line 947 "interval.m"
                        hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_139_139, backend_libs__interval__ElseGoalInfo0_53, &backend_libs__interval__Else_54);
                      }
#line 949 "interval.m"
                      {
#line 949 "interval.m"
                        backend_libs__interval__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 949 "interval.m"
                        MR_hl_field(MR_mktag(3), backend_libs__interval__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 949 "interval.m"
                        MR_hl_field(MR_mktag(3), backend_libs__interval__V_142_142, 1) = ((MR_Box) (backend_libs__interval__Vars_44));
#line 949 "interval.m"
                        MR_hl_field(MR_mktag(3), backend_libs__interval__V_142_142, 2) = ((MR_Box) (backend_libs__interval__Cond_45));
#line 949 "interval.m"
                        MR_hl_field(MR_mktag(3), backend_libs__interval__V_142_142, 3) = ((MR_Box) (backend_libs__interval__Then_46));
#line 949 "interval.m"
                        MR_hl_field(MR_mktag(3), backend_libs__interval__V_142_142, 4) = ((MR_Box) (backend_libs__interval__Else_54));
#line 949 "interval.m"
                      }
#line 949 "interval.m"
                      {
#line 949 "interval.m"
                        backend_libs__interval__Goal1_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 949 "interval.m"
                        MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_182, 0) = ((MR_Box) (backend_libs__interval__V_142_142));
#line 949 "interval.m"
                        MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_182, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 949 "interval.m"
                      }
#line 950 "interval.m"
                      {
#line 950 "interval.m"
                        backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_180, &backend_libs__interval__EndInserts_55);
                      }
#line 951 "interval.m"
                      {
#line 951 "interval.m"
                        backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_182, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_138_138, backend_libs__interval__STATE_VARIABLE_VarInfo_113, backend_libs__interval__STATE_VARIABLE_VarRename_115, backend_libs__interval__EndInserts_55, backend_libs__interval__MaybeFeature_14);
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
#line 975 "interval.m"
                        MR_Word backend_libs__interval__V_128_128;
#line 975 "interval.m"
                        MR_Word backend_libs__interval__V_75_75;

#line 959 "interval.m"
                        if (((MR_tag((MR_Word) backend_libs__interval__Reason0_56)) == (MR_mktag((MR_Integer) 0))))
#line 956 "interval.m"
                          {
#line 956 "interval.m"
                            MR_Word backend_libs__interval__Vars0_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Reason0_56, (MR_Integer) 0)));
#line 956 "interval.m"
                            MR_Word backend_libs__interval__Vars_184;

#line 957 "interval.m"
                            {
#line 957 "interval.m"
                              parse_tree__prog_data__rename_var_list_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_114, backend_libs__interval__Vars0_183, &backend_libs__interval__Vars_184);
                            }
#line 958 "interval.m"
                            {
#line 958 "interval.m"
                              backend_libs__interval__Reason_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 958 "interval.m"
                              MR_hl_field(MR_mktag(0), backend_libs__interval__Reason_58, 0) = ((MR_Box) (backend_libs__interval__Vars_184));
#line 958 "interval.m"
                            }
#line 956 "interval.m"
                          }
#line 959 "interval.m"
                        else
#line 959 "interval.m"
                          if (((((MR_tag((MR_Word) backend_libs__interval__Reason0_56)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason0_56, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 960 "interval.m"
                            {
#line 960 "interval.m"
                              MR_Word backend_libs__interval__Kind_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason0_56, (MR_Integer) 2)));
#line 960 "interval.m"
                              MR_Word backend_libs__interval__Var0_185 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason0_56, (MR_Integer) 1)));
#line 960 "interval.m"
                              MR_Word backend_libs__interval__Var_186;

#line 961 "interval.m"
                              {
#line 961 "interval.m"
                                parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_114, backend_libs__interval__Var0_185, &backend_libs__interval__Var_186);
                              }
#line 962 "interval.m"
                              {
#line 962 "interval.m"
                                backend_libs__interval__Reason_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 962 "interval.m"
                                MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 962 "interval.m"
                                MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, 1) = ((MR_Box) (backend_libs__interval__Var_186));
#line 962 "interval.m"
                                MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, 2) = ((MR_Box) (backend_libs__interval__Kind_59));
#line 962 "interval.m"
                              }
#line 960 "interval.m"
                            }
#line 959 "interval.m"
                          else
#line 973 "interval.m"
                            backend_libs__interval__Reason_58 = backend_libs__interval__Reason0_56;
#line 975 "interval.m"
                        backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 975 "interval.m"
                        if (backend_libs__interval__succeeded)
#line 975 "interval.m"
                          {
#line 975 "interval.m"
                            backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, (MR_Integer) 1)));
#line 975 "interval.m"
                            backend_libs__interval__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, (MR_Integer) 2)));
#line 975 "interval.m"
                            backend_libs__interval__succeeded = (backend_libs__interval__V_128_128 == (MR_Integer) 1);
#line 975 "interval.m"
                          }
#line 978 "interval.m"
                        if (backend_libs__interval__succeeded)
#line 977 "interval.m"
                          {
#line 977 "interval.m"
                            *backend_libs__interval__Goal_10 = backend_libs__interval__Goal0_9;
#line 977 "interval.m"
                            *backend_libs__interval__STATE_VARIABLE_VarRename_115 = backend_libs__interval__STATE_VARIABLE_VarRename_0_114;
#line 977 "interval.m"
                            *backend_libs__interval__STATE_VARIABLE_VarInfo_113 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_112;
#line 977 "interval.m"
                          }
#line 978 "interval.m"
                        else
#line 982 "interval.m"
                          {
#line 982 "interval.m"
                            MR_Word backend_libs__interval__SubGoal_76;
#line 982 "interval.m"
                            MR_Word backend_libs__interval__GoalExpr_191;

#line 981 "interval.m"
                            {
#line 981 "interval.m"
                              backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__SubGoal0_57, &backend_libs__interval__SubGoal_76, backend_libs__interval__STATE_VARIABLE_VarInfo_0_112, backend_libs__interval__STATE_VARIABLE_VarInfo_113, backend_libs__interval__STATE_VARIABLE_VarRename_0_114, backend_libs__interval__STATE_VARIABLE_VarRename_115, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                            }
#line 983 "interval.m"
                            {
#line 983 "interval.m"
                              backend_libs__interval__GoalExpr_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 983 "interval.m"
                              MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 983 "interval.m"
                              MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_191, 1) = ((MR_Box) (backend_libs__interval__Reason_58));
#line 983 "interval.m"
                              MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_191, 2) = ((MR_Box) (backend_libs__interval__SubGoal_76));
#line 983 "interval.m"
                            }
#line 984 "interval.m"
                            {
#line 984 "interval.m"
                              MR_Word base;
#line 984 "interval.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 984 "interval.m"
                              *backend_libs__interval__Goal_10 = base;
#line 984 "interval.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__GoalExpr_191));
#line 984 "interval.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 984 "interval.m"
                            }
#line 982 "interval.m"
                          }
#line 954 "interval.m"
                      }
#line 893 "interval.m"
                    else
#line 893 "interval.m"
                      if (((((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1022 "interval.m"
                        {
#line 1023 "interval.m"
                          {
#line 1023 "interval.m"
                            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.record_decisions_in_goal\'/8", (MR_String) "shorthand");
#line 1023 "interval.m"
                            return;
                          }
#line 1022 "interval.m"
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
                          MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_150_150;
#line 914 "interval.m"
                          MR_Word backend_libs__interval__V_152_152;
#line 914 "interval.m"
                          MR_Word backend_libs__interval__EndAnchor_171;
#line 914 "interval.m"
                          MR_Word backend_libs__interval__Goal1_172;
#line 914 "interval.m"
                          MR_Word backend_libs__interval__Inserts_173;
#line 919 "interval.m"
                          MR_Word backend_libs__interval___StartAnchor_36;

#line 915 "interval.m"
                          {
#line 915 "interval.m"
                            backend_libs__interval__record_decisions_in_cases_7_p_0(backend_libs__interval__Cases0_33, &backend_libs__interval__Cases_34, backend_libs__interval__STATE_VARIABLE_VarInfo_0_112, &backend_libs__interval__STATE_VARIABLE_VarInfo_150_150, backend_libs__interval__STATE_VARIABLE_VarRename_0_114, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                          }
#line 917 "interval.m"
                          {
#line 917 "interval.m"
                            parse_tree__prog_data__rename_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_114, backend_libs__interval__Var0_31, &backend_libs__interval__Var_35);
                          }
#line 918 "interval.m"
                          {
#line 918 "interval.m"
                            backend_libs__interval__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 918 "interval.m"
                            MR_hl_field(MR_mktag(3), backend_libs__interval__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 918 "interval.m"
                            MR_hl_field(MR_mktag(3), backend_libs__interval__V_152_152, 1) = ((MR_Box) (backend_libs__interval__Var_35));
#line 918 "interval.m"
                            MR_hl_field(MR_mktag(3), backend_libs__interval__V_152_152, 2) = ((MR_Box) (backend_libs__interval__Det_32));
#line 918 "interval.m"
                            MR_hl_field(MR_mktag(3), backend_libs__interval__V_152_152, 3) = ((MR_Box) (backend_libs__interval__Cases_34));
#line 918 "interval.m"
                          }
#line 918 "interval.m"
                          {
#line 918 "interval.m"
                            backend_libs__interval__Goal1_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 918 "interval.m"
                            MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_172, 0) = ((MR_Box) (backend_libs__interval__V_152_152));
#line 918 "interval.m"
                            MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_172, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 918 "interval.m"
                          }
#line 919 "interval.m"
                          {
#line 919 "interval.m"
                            backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 2, backend_libs__interval__Goal0_9, &backend_libs__interval___StartAnchor_36, &backend_libs__interval__EndAnchor_171);
                          }
#line 920 "interval.m"
                          {
#line 920 "interval.m"
                            backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_171, &backend_libs__interval__Inserts_173);
                          }
#line 921 "interval.m"
                          {
#line 921 "interval.m"
                            backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_172, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_150_150, backend_libs__interval__STATE_VARIABLE_VarInfo_113, backend_libs__interval__STATE_VARIABLE_VarRename_115, backend_libs__interval__Inserts_173, backend_libs__interval__MaybeFeature_14);
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
#line 13461 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 679 "interval.m"
    {
#line 679 "interval.m"
      backend_libs__interval__V_20_20 = parse_tree__set_of_var__init_0_f_0(backend_libs__interval__TypeCtorInfo_87_87);
    }
#line 13468 "backend_libs.interval.c"
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
#line 1339 "interval.m"
  {
#line 1339 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1339 "interval.m"
    MR_Integer backend_libs__interval__Num_3 = (MR_Integer) backend_libs__interval__HeadVar__1_1;

#line 1339 "interval.m"
    return backend_libs__interval__Num_3;
#line 1339 "interval.m"
  }
#line 182 "interval.m"
}

#line 1337 "interval.m"
static void MR_CALL 
backend_libs__interval__write_int_list_3_p_0_1(
#line 1337 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1337 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1337 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1337 "interval.m"
{
#line 1337 "interval.m"
  {
#line 1337 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1337 "interval.m"
    {
#line 1337 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
#line 1337 "interval.m"
      return;
    }
#line 1337 "interval.m"
  }
#line 1337 "interval.m"
}

#line 180 "interval.m"
void MR_CALL 
backend_libs__interval__write_int_list_3_p_0(
#line 180 "interval.m"
  MR_Word backend_libs__interval__List_4)
#line 180 "interval.m"
{
#line 1336 "interval.m"
  {
#line 1336 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1337 "interval.m"
    {
#line 1337 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__List_4, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[14]);
#line 1337 "interval.m"
      return;
    }
#line 1336 "interval.m"
  }
#line 180 "interval.m"
}

#line 1265 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_2(
#line 1265 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1265 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1265 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1265 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1265 "interval.m"
{
#line 1265 "interval.m"
  {
#line 1265 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1265 "interval.m"
    {
#line 1265 "interval.m"
      backend_libs__interval__dump_anchor_follow_3_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
#line 1265 "interval.m"
      return;
    }
#line 1265 "interval.m"
  }
#line 1265 "interval.m"
}

#line 1261 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_1(
#line 1261 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1261 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1261 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1261 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1261 "interval.m"
{
#line 1261 "interval.m"
  {
#line 1261 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1261 "interval.m"
    {
#line 1261 "interval.m"
      backend_libs__interval__dump_interval_info_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__interval__wrapper_arg_1));
#line 1261 "interval.m"
      return;
    }
#line 1261 "interval.m"
  }
#line 1261 "interval.m"
}

#line 178 "interval.m"
void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0(
#line 178 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_4)
#line 178 "interval.m"
{
#line 1253 "interval.m"
  {
#line 1253 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_108_108 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_109_109 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_115_115;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__StartIds_6;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__EndIds_7;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__VarsIds_8;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__SuccIds_9;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__IntervalIds0_10;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__IntervalIds_11;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__AnchorFollows_12;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1253 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__V_18_18;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__V_22_22;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 1253 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1254 "interval.m"
    MR_Word backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_54_54;
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_55_55;
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_56_56;
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_57_57;
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_60_60;
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 1255 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 1256 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 1257 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 1261 "interval.m"
    MR_Box backend_libs__interval__conv0_STATE_VARIABLE_IO_27_27;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_93_93;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_94_94;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_95_95;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_96_96;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_97_97;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_98_98;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_99_99;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_100_100;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_101_101;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_102_102;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_103_103;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_104_104;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_105_105;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_106_106;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_107_107;
#line 1265 "interval.m"
    MR_Box backend_libs__interval__conv1_STATE_VARIABLE_IO_14;

#line 1254 "interval.m"
    {
#line 1254 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__TypeCtorInfo_109_109, backend_libs__interval__V_15_15, &backend_libs__interval__StartIds_6);
    }
#line 1255 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1255 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1255 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1255 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1255 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1255 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1255 "interval.m"
    backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1255 "interval.m"
    backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1255 "interval.m"
    backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1255 "interval.m"
    backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1255 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1255 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1255 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1255 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1255 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1255 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1255 "interval.m"
    {
#line 1255 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__TypeCtorInfo_109_109, backend_libs__interval__V_16_16, &backend_libs__interval__EndIds_7);
    }
#line 1256 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1256 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1256 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1256 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1256 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1256 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1256 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1256 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1256 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1256 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1256 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1256 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1256 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1256 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1256 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1256 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1256 "interval.m"
    {
#line 1256 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__V_17_17, &backend_libs__interval__VarsIds_8);
    }
#line 1257 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1257 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1257 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1257 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1257 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1257 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1257 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1257 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1257 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1257 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1257 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1257 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1257 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1257 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1257 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1257 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1257 "interval.m"
    {
#line 1257 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__V_18_18, &backend_libs__interval__SuccIds_9);
    }
#line 1258 "interval.m"
    {
#line 1258 "interval.m"
      backend_libs__interval__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_22_22, 0) = ((MR_Box) (backend_libs__interval__SuccIds_9));
#line 1258 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1258 "interval.m"
    }
#line 1258 "interval.m"
    {
#line 1258 "interval.m"
      backend_libs__interval__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 0) = ((MR_Box) (backend_libs__interval__VarsIds_8));
#line 1258 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 1) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 1258 "interval.m"
    }
#line 1258 "interval.m"
    {
#line 1258 "interval.m"
      backend_libs__interval__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_20_20, 0) = ((MR_Box) (backend_libs__interval__EndIds_7));
#line 1258 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_20_20, 1) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 1258 "interval.m"
    }
#line 1258 "interval.m"
    {
#line 1258 "interval.m"
      backend_libs__interval__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_19_19, 0) = ((MR_Box) (backend_libs__interval__StartIds_6));
#line 1258 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_19_19, 1) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 1258 "interval.m"
    }
#line 1258 "interval.m"
    {
#line 1258 "interval.m"
      mercury__list__condense_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__V_19_19, &backend_libs__interval__IntervalIds0_10);
    }
#line 1259 "interval.m"
    {
#line 1259 "interval.m"
      mercury__list__sort_and_remove_dups_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__IntervalIds0_10, &backend_libs__interval__IntervalIds_11);
    }
#line 1260 "interval.m"
    {
#line 1260 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "INTERVALS:\n");
    }
#line 1261 "interval.m"
    {
#line 1261 "interval.m"
      backend_libs__interval__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1261 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 0) = ((MR_Box) (&backend_libs__interval_scalar_common_4[0]));
#line 1261 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 1) = ((MR_Box) (backend_libs__interval__dump_interval_info_3_p_0_1));
#line 1261 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1261 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 3) = ((MR_Box) (backend_libs__interval__IntervalInfo_4));
#line 1261 "interval.m"
    }
#line 15432 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_115_115 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1261 "interval.m"
    {
#line 1261 "interval.m"
      mercury__list__foldl_4_p_2(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__TypeCtorInfo_115_115, backend_libs__interval__V_26_26, backend_libs__interval__IntervalIds_11, ((MR_Box) ((MR_Integer) 0)), &backend_libs__interval__conv0_STATE_VARIABLE_IO_27_27);
    }
#line 1263 "interval.m"
    backend_libs__interval__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1263 "interval.m"
    backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1263 "interval.m"
    backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1263 "interval.m"
    backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1263 "interval.m"
    backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1263 "interval.m"
    backend_libs__interval__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1263 "interval.m"
    backend_libs__interval__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1263 "interval.m"
    backend_libs__interval__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1263 "interval.m"
    backend_libs__interval__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1263 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1263 "interval.m"
    backend_libs__interval__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1263 "interval.m"
    backend_libs__interval__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1263 "interval.m"
    backend_libs__interval__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1263 "interval.m"
    backend_libs__interval__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1263 "interval.m"
    backend_libs__interval__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1263 "interval.m"
    backend_libs__interval__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1263 "interval.m"
    {
#line 1263 "interval.m"
      mercury__map__to_assoc_list_2_p_0(backend_libs__interval__TypeCtorInfo_109_109, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, backend_libs__interval__V_28_28, &backend_libs__interval__AnchorFollows_12);
    }
#line 1264 "interval.m"
    {
#line 1264 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\nANCHOR FOLLOW:\n");
    }
#line 1265 "interval.m"
    {
#line 1265 "interval.m"
      mercury__list__foldl_4_p_2((MR_Word) &backend_libs__interval_scalar_common_2[0], backend_libs__interval__TypeCtorInfo_115_115, (MR_Word) &backend_libs__interval_scalar_common_2[13], backend_libs__interval__AnchorFollows_12, ((MR_Box) ((MR_Integer) 0)), &backend_libs__interval__conv1_STATE_VARIABLE_IO_14);
    }
#line 1253 "interval.m"
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
#line 1216 "interval.m"
  {
#line 1216 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1216 "interval.m"
    MR_Word backend_libs__interval__TypeInfo_13_13;
#line 1216 "interval.m"
    MR_Word backend_libs__interval__HeadVars_9;
#line 1216 "interval.m"
    MR_Word backend_libs__interval__Subst_10;
#line 1216 "interval.m"
    MR_Word backend_libs__interval__V_11_11;

#line 1217 "interval.m"
    {
#line 1217 "interval.m"
      backend_libs__interval__HeadVars_9 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVarSet_5);
    }
#line 15522 "backend_libs.interval.c"
    backend_libs__interval__TypeInfo_13_13 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1218 "interval.m"
    {
#line 1218 "interval.m"
      backend_libs__interval__V_11_11 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_13_13, backend_libs__interval__TypeInfo_13_13);
    }
#line 1218 "interval.m"
    {
#line 1218 "interval.m"
      backend_libs__interval__build_headvar_subst_4_p_0(backend_libs__interval__HeadVars_9, backend_libs__interval__RenameMap_6, backend_libs__interval__V_11_11, &backend_libs__interval__Subst_10);
    }
#line 1219 "interval.m"
    {
#line 1219 "interval.m"
      backend_libs__interval__succeeded = mercury__map__is_empty_1_p_0(backend_libs__interval__TypeInfo_13_13, backend_libs__interval__TypeInfo_13_13, backend_libs__interval__Subst_10);
    }
#line 1221 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1220 "interval.m"
      *backend_libs__interval__Goal_8 = backend_libs__interval__Goal0_7;
#line 1221 "interval.m"
    else
#line 1222 "interval.m"
      {
#line 1222 "interval.m"
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__Subst_10, backend_libs__interval__Goal0_7, backend_libs__interval__Goal_8);
#line 1222 "interval.m"
        return;
      }
#line 1216 "interval.m"
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
#line 1094 "interval.m"
  {
#line 1094 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1094 "interval.m"
    MR_Word backend_libs__interval__Info0_18;
#line 1094 "interval.m"
    MR_Word backend_libs__interval__Info_19;
#line 1094 "interval.m"
    MR_Word backend_libs__interval__Goal0_32;
#line 1094 "interval.m"
    MR_Word backend_libs__interval__VarsToExtract_33;
#line 1094 "interval.m"
    MR_Word backend_libs__interval__GoalExpr0_34;
#line 1094 "interval.m"
    MR_Word backend_libs__interval__GoalInfo0_35;
#line 1089 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 1089 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 1089 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 1089 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 1089 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 1089 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 1089 "interval.m"
    MR_Word backend_libs__interval__ArgVars_43;
#line 1089 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 1089 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 1067 "interval.m"
    MR_Word backend_libs__interval__Unification0_39;
#line 1068 "interval.m"
    MR_Word backend_libs__interval__V_45_45;

#line 1095 "interval.m"
    {
#line 1095 "interval.m"
      backend_libs__interval__Info0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1095 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, 0) = ((MR_Box) (backend_libs__interval__VarSet0_10));
#line 1095 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, 1) = ((MR_Box) (backend_libs__interval__VarTypes0_12));
#line 1095 "interval.m"
    }
#line 1064 "interval.m"
    backend_libs__interval__Goal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__InsertSpec_15, (MR_Integer) 0)));
#line 1064 "interval.m"
    backend_libs__interval__VarsToExtract_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__InsertSpec_15, (MR_Integer) 1)));
#line 1065 "interval.m"
    backend_libs__interval__GoalExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_32, (MR_Integer) 0)));
#line 1065 "interval.m"
    backend_libs__interval__GoalInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_32, (MR_Integer) 1)));
#line 1067 "interval.m"
    backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_34)) == (MR_mktag((MR_Integer) 1)));
#line 1067 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1067 "interval.m"
      {
#line 1067 "interval.m"
        backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 0)));
#line 1067 "interval.m"
        backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 1)));
#line 1067 "interval.m"
        backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 2)));
#line 1067 "interval.m"
        backend_libs__interval__Unification0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 3)));
#line 1067 "interval.m"
        backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 4)));
#line 1068 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__Unification0_39)) == (MR_mktag((MR_Integer) 1)));
#line 1068 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1068 "interval.m"
          {
#line 1068 "interval.m"
            backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 0)));
#line 1068 "interval.m"
            backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 1)));
#line 1068 "interval.m"
            backend_libs__interval__ArgVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 2)));
#line 1068 "interval.m"
            backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 3)));
#line 1068 "interval.m"
            backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 4)));
#line 1068 "interval.m"
            backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 5)));
#line 1068 "interval.m"
          }
#line 1067 "interval.m"
      }
#line 1089 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1070 "interval.m"
      {
#line 1070 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_65_80;
#line 1070 "interval.m"
        MR_Word backend_libs__interval__Unification1_47;
#line 1070 "interval.m"
        MR_Word backend_libs__interval__GoalExpr1_48;
#line 1070 "interval.m"
        MR_Word backend_libs__interval__GoalInfo1_49;
#line 1070 "interval.m"
        MR_Word backend_libs__interval__GoalInfo2_51;
#line 1070 "interval.m"
        MR_Word backend_libs__interval__Goal2_52;
#line 1070 "interval.m"
        MR_Word backend_libs__interval__VarSet0_53;
#line 1070 "interval.m"
        MR_Word backend_libs__interval__VarTypes0_54;
#line 1070 "interval.m"
        MR_Word backend_libs__interval__VarSet_55;
#line 1070 "interval.m"
        MR_Word backend_libs__interval__VarTypes_56;
#line 1070 "interval.m"
        MR_Word backend_libs__interval__NewRename_57;
#line 1070 "interval.m"
        MR_Word backend_libs__interval__VoidRename_58;
#line 1070 "interval.m"
        MR_Word backend_libs__interval__Goal3_59;
#line 1070 "interval.m"
        MR_Word backend_libs__interval__V_62_62;
#line 1070 "interval.m"
        MR_Word backend_libs__interval__V_63_63;

#line 1070 "interval.m"
        {
#line 1070 "interval.m"
          backend_libs__interval__Unification1_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1070 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 0) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 1070 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 1) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 1070 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 2) = ((MR_Box) (backend_libs__interval__ArgVars_43));
#line 1070 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 3) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 1070 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1070 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 5) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 1070 "interval.m"
        }
#line 1071 "interval.m"
        {
#line 1071 "interval.m"
          backend_libs__interval__GoalExpr1_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 0) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 1071 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 1) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 1071 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 2) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 1071 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 3) = ((MR_Box) (backend_libs__interval__Unification1_47));
#line 1071 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 4) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 1071 "interval.m"
        }
#line 1072 "interval.m"
        {
#line 1072 "interval.m"
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, backend_libs__interval__GoalInfo0_35, &backend_libs__interval__GoalInfo1_49);
        }
#line 1076 "interval.m"
        if ((backend_libs__interval__MaybeFeature_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1078 "interval.m"
          backend_libs__interval__GoalInfo2_51 = backend_libs__interval__GoalInfo1_49;
#line 1076 "interval.m"
        else
#line 1074 "interval.m"
          {
#line 1074 "interval.m"
            MR_Word backend_libs__interval__Feature_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeFeature_16, (MR_Integer) 0)));

#line 1075 "interval.m"
            {
#line 1075 "interval.m"
              hlds__hlds_goal__goal_info_add_feature_3_p_0(backend_libs__interval__Feature_50, backend_libs__interval__GoalInfo1_49, &backend_libs__interval__GoalInfo2_51);
            }
#line 1074 "interval.m"
          }
#line 1080 "interval.m"
        {
#line 1080 "interval.m"
          backend_libs__interval__Goal2_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1080 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_52, 0) = ((MR_Box) (backend_libs__interval__GoalExpr1_48));
#line 1080 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_52, 1) = ((MR_Box) (backend_libs__interval__GoalInfo2_51));
#line 1080 "interval.m"
        }
#line 1081 "interval.m"
        backend_libs__interval__VarSet0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, (MR_Integer) 0)));
#line 1081 "interval.m"
        backend_libs__interval__VarTypes0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, (MR_Integer) 1)));
#line 15781 "backend_libs.interval.c"
        backend_libs__interval__TypeInfo_65_80 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1082 "interval.m"
        {
#line 1082 "interval.m"
          backend_libs__interval__V_62_62 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_80, backend_libs__interval__TypeInfo_65_80);
        }
#line 1082 "interval.m"
        {
#line 1082 "interval.m"
          backend_libs__interval__V_63_63 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_80, backend_libs__interval__TypeInfo_65_80);
        }
#line 1082 "interval.m"
        {
#line 1082 "interval.m"
          backend_libs__interval__create_shadow_vars_10_p_0(backend_libs__interval__ArgVars_43, backend_libs__interval__VarsToExtract_33, backend_libs__interval__VarSet0_53, &backend_libs__interval__VarSet_55, backend_libs__interval__VarTypes0_54, &backend_libs__interval__VarTypes_56, backend_libs__interval__V_62_62, &backend_libs__interval__NewRename_57, backend_libs__interval__V_63_63, &backend_libs__interval__VoidRename_58);
        }
#line 1084 "interval.m"
        {
#line 1084 "interval.m"
          backend_libs__interval__Info_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1084 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, 0) = ((MR_Box) (backend_libs__interval__VarSet_55));
#line 1084 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, 1) = ((MR_Box) (backend_libs__interval__VarTypes_56));
#line 1084 "interval.m"
        }
#line 1085 "interval.m"
        {
#line 1085 "interval.m"
          mercury__map__old_merge_3_p_0(backend_libs__interval__TypeInfo_65_80, backend_libs__interval__TypeInfo_65_80, backend_libs__interval__STATE_VARIABLE_RenameMap_0_20, backend_libs__interval__NewRename_57, backend_libs__interval__STATE_VARIABLE_RenameMap_21);
        }
#line 1087 "interval.m"
        {
#line 1087 "interval.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*backend_libs__interval__STATE_VARIABLE_RenameMap_21, backend_libs__interval__Goal2_52, &backend_libs__interval__Goal3_59);
        }
#line 1088 "interval.m"
        {
#line 1088 "interval.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__VoidRename_58, backend_libs__interval__Goal3_59, backend_libs__interval__Goal_17);
        }
#line 1070 "interval.m"
      }
#line 1089 "interval.m"
    else
#line 1090 "interval.m"
      {
#line 1090 "interval.m"
        {
#line 1090 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.make_inserted_goal\'/7", (MR_String) "not a deconstruct");
#line 1090 "interval.m"
          return;
        }
#line 1090 "interval.m"
      }
#line 1098 "interval.m"
    *backend_libs__interval__VarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, (MR_Integer) 0)));
#line 1098 "interval.m"
    *backend_libs__interval__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, (MR_Integer) 1)));
#line 1094 "interval.m"
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
#line 16050 "backend_libs.interval.c"
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
#line 334 "interval.m"
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
#line 408 "interval.m"
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
#line 387 "interval.m"
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
#line 412 "interval.m"
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
#line 17263 "backend_libs.interval.c"
                  backend_libs__interval__TypeCtorInfo_366_366 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 17265 "backend_libs.interval.c"
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
#line 367 "interval.m"
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
#line 233 "interval.m"
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
#line 17572 "backend_libs.interval.c"
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
#line 306 "interval.m"
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
#line 313 "interval.m"
                            {
#line 313 "interval.m"
                              backend_libs__interval__V_163_163 = mercury__list__length_1_f_0(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__InputArgsR_44);
                            }
#line 313 "interval.m"
                            {
#line 313 "interval.m"
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
                            backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__Reason_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_31, (MR_Integer) 0)))) == (MR_Integer) 4)));
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
#line 17989 "backend_libs.interval.c"
  {
#line 17991 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;
#line 17993 "backend_libs.interval.c"
    void MR_CALL (* backend_libs__interval__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 17995 "backend_libs.interval.c"
    MR_Box backend_libs__interval__conv1_HeadVar__6_6;

#line 17998 "backend_libs.interval.c"
    {
#line 18000 "backend_libs.interval.c"
      backend_libs__interval__func_0(((MR_Box) backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_9), ((MR_Box) (backend_libs__interval__HeadVar__1_1)), ((MR_Box) (backend_libs__interval__HeadVar__2_2)), ((MR_Box) (backend_libs__interval__HeadVar__3_3)), ((MR_Box) (backend_libs__interval__HeadVar__4_4)), ((MR_Box) (backend_libs__interval__HeadVar__5_5)), &backend_libs__interval__conv1_HeadVar__6_6, backend_libs__interval__HeadVar__7_7, backend_libs__interval__HeadVar__8_8);
    }
#line 18003 "backend_libs.interval.c"
    *backend_libs__interval__HeadVar__6_6 = ((MR_Word) backend_libs__interval__conv1_HeadVar__6_6);
#line 18005 "backend_libs.interval.c"
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
