/*
** Automatically generated from `interval.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.inst_test.mih"
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
#include "parse_tree.maybe_error.mih"
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




#line 160 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 163 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_backend_libs__interval__type_ctor_info_anchor_follow_info_0;

#line 166 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 169 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 172 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 175 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 178 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0;

#line 181 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1;

#line 184 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_2[2];

#line 187 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2;

#line 190 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_3[1];

#line 193 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3;

#line 196 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_4[2];

#line 199 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4;

#line 202 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_5[1];

#line 205 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5;

#line 208 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_0[2];

#line 211 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1[1];

#line 214 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2[1];

#line 217 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3[2];

#line 220 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_0[4];

#line 223 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0[6];

#line 226 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0[6];

#line 229 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 232 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_follow_info_0_0[2];

#line 235 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0;

#line 238 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0[1];

#line 241 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0[1];

#line 244 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0[1];

#line 247 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0[1];

#line 250 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0;

#line 253 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1;

#line 256 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2;

#line 259 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3;

#line 262 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4;

#line 265 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_branch_construct_0[5];

#line 268 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0[5];

#line 271 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0[5];

#line 274 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_branch_end_info_0_0[3];

#line 277 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_branch_end_info_0_0[3];

#line 280 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0;

#line 283 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0[1];

#line 286 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_branch_end_info_0[1];

#line 289 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_branch_end_info_0[1];

#line 292 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_end_info_0[1];

#line 295 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 298 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0;

#line 301 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_insert_spec_0_0[2];

#line 304 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0;

#line 307 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0[1];

#line 310 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0[1];

#line 313 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0[1];

#line 316 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0[1];

#line 319 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0[1];

#line 322 "backend_libs.interval.c"
static const MR_NotagFunctorDesc backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0;

#line 325 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0;

#line 328 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0;

#line 331 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0;

#line 334 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0;

#line 337 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0;

#line 340 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0;

#line 343 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 346 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0;

#line 349 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 352 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 355 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 358 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_info_0_0[16];

#line 361 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_info_0_0[16];

#line 364 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0;

#line 367 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0[1];

#line 370 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0[1];

#line 373 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0[1];

#line 376 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0[1];

#line 379 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 382 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0[3];

#line 385 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0[3];

#line 388 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0;

#line 391 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0[1];

#line 394 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0[1];

#line 397 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0[1];

#line 400 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0[1];

#line 403 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 406 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_var_info_0_0[2];

#line 409 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_var_info_0_0[2];

#line 412 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0;

#line 415 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0[1];

#line 418 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_var_info_0[1];

#line 421 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_var_info_0[1];

#line 424 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_var_info_0[1];

#line 427 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0;

#line 430 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1;

#line 433 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_maybe_needs_flush_0[2];

#line 436 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0[2];

#line 439 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0[2];

#line 442 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 445 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0;

#line 448 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1;

#line 451 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_resume_save_status_0[2];

#line 454 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0[2];

#line 457 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0[2];

#line 460 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_save_point_0_0[2];

#line 463 "backend_libs.interval.c"
static const MR_DuFunctorDesc backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0;

#line 466 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0[1];

#line 469 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0[1];

#line 472 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0[1];

#line 475 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0[1];

#line 478 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0;

#line 481 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1;

#line 484 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_save_point_type_0[2];

#line 487 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0[2];

#line 490 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0[2];

#line 493 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1[1];

#line 496 "backend_libs.interval.c"
static const MR_TypeClassMethod backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1[1];

#line 499 "backend_libs.interval.c"
static const MR_TypeClassId backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1;

#line 502 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0_10001(
#line 505 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 507 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 510 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_0_0_10001(
#line 513 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 515 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 517 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 520 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0_10001(
#line 523 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 525 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 528 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0_10001(
#line 531 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 533 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 535 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 538 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0_10001(
#line 541 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 543 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 546 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0_10001(
#line 549 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 551 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 553 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 556 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_end_info_0_0_10001(
#line 559 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 561 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 564 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0_10001(
#line 567 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 569 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 571 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 574 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0_10001(
#line 577 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 579 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 582 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0_10001(
#line 585 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 587 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 589 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 592 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0_10001(
#line 595 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 597 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 600 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0_10001(
#line 603 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 605 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 607 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 610 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0_10001(
#line 613 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 615 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 618 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0_10001(
#line 621 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 623 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 625 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 628 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0_10001(
#line 631 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 633 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 636 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0_10001(
#line 639 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 641 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 643 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 646 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0_10001(
#line 649 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 651 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 654 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0_10001(
#line 657 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 659 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 661 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 664 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0_10001(
#line 667 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 669 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 672 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0_10001(
#line 675 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 677 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 679 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 682 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0_10001(
#line 685 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 687 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 690 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0_10001(
#line 693 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 695 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 697 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 700 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0_10001(
#line 703 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 705 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 708 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0_10001(
#line 711 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 713 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 715 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 718 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0_10001(
#line 721 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 723 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 726 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0_10001(
#line 729 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 731 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 733 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 736 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0_10001(
#line 739 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 741 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 744 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_0_0_10001(
#line 747 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 749 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 751 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 754 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0_10001(
#line 757 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 759 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2);

#line 762 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0_10001(
#line 765 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 767 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 769 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3);

#line 1189 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(
#line 1189 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1189 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1189 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1189 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1189 "interval.m"
  MR_Word backend_libs__interval__Inserts_6,
#line 1189 "interval.m"
  MR_Word backend_libs__interval__InsertMap_7,
#line 1189 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_8);

#line 639 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(
#line 639 "interval.m"
  MR_Word backend_libs__interval__StartArchor_9,
#line 639 "interval.m"
  MR_Word backend_libs__interval__BeforeId_10,
#line 639 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeVars_11,
#line 639 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_12,
#line 639 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15,
#line 639 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_16);

#line 605 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(
#line 605 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_9,
#line 605 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_10,
#line 605 "interval.m"
  MR_Word backend_libs__interval__BeforeId_11,
#line 605 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_12,
#line 605 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16,
#line 605 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_17,
#line 605 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_18,
#line 605 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_19);

#line 547 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(
#line 547 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_13,
#line 547 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeGoal_14,
#line 547 "interval.m"
  MR_Word backend_libs__interval__Construct_15,
#line 547 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_16,
#line 547 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_17,
#line 547 "interval.m"
  MR_Word * backend_libs__interval__BeforeIntervalId_18,
#line 547 "interval.m"
  MR_Word * backend_libs__interval__AfterIntervalId_19,
#line 547 "interval.m"
  MR_Word * backend_libs__interval__MaybeResumeVars_20,
#line 547 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_34,
#line 547 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_35,
#line 547 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_36,
#line 547 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_37);

#line 498 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(
#line 498 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27,
#line 498 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 498 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3,
#line 498 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_4,
#line 498 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_5,
#line 498 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_6);

#line 442 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 442 "interval.m"
  MR_Word backend_libs__interval__Inputs_8,
#line 442 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedAcrossCall_9,
#line 442 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_10,
#line 442 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26,
#line 442 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_27,
#line 442 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_28,
#line 442 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_29);

#line 1336 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1336__1_2_p_0(
#line 1336 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_31,
#line 1336 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_32);

#line 1323 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_deletion__1323__1_2_p_0(
#line 1323 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_16,
#line 1323 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_17);

#line 1303 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1303__1_2_p_0(
#line 1303 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_154,
#line 1303 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_155);

#line 871 "interval.m"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0(
#line 871 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 871 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 871 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3);

#line 871 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0(
#line 871 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 871 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2);

#line 1345 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_4(
#line 1345 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1345 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1341 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_3(
#line 1341 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1341 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);

#line 1345 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_2(
#line 1345 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1345 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1336 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_1(
#line 1336 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1336 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1336 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2);

#line 1328 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0(
#line 1328 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1);

#line 1345 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_2(
#line 1345 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1345 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1323 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_1(
#line 1323 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1323 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1323 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2);

#line 1320 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0(
#line 1320 "interval.m"
  MR_Word backend_libs__interval__Vars_4);

#line 1314 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_3(
#line 1314 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1314 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1314 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1314 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1303 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_2(
#line 1303 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1303 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1303 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2);

#line 1281 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_1(
#line 1281 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1281 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);

#line 1273 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0(
#line 1273 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_5,
#line 1273 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6);

#line 1246 "interval.m"
static void MR_CALL 
backend_libs__interval__construct_anchors_4_p_0(
#line 1246 "interval.m"
  MR_Word backend_libs__interval__Construct_5,
#line 1246 "interval.m"
  MR_Word backend_libs__interval__Goal_6,
#line 1246 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_7,
#line 1246 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_8);

#line 1231 "interval.m"
static void MR_CALL 
backend_libs__interval__build_headvar_subst_4_p_0(
#line 1231 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1231 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 1231 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_Subst_0_3,
#line 1231 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_Subst_4);

#line 1206 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_cases_7_p_0(
#line 1206 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1206 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1206 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1206 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1206 "interval.m"
  MR_Word backend_libs__interval__VarRename0_5,
#line 1206 "interval.m"
  MR_Word backend_libs__interval__InsertMap_6,
#line 1206 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_7);

#line 1168 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_conj_9_p_0(
#line 1168 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1168 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1168 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1168 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1168 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_5,
#line 1168 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_6,
#line 1168 "interval.m"
  MR_Word backend_libs__interval__ConjType_7,
#line 1168 "interval.m"
  MR_Word backend_libs__interval__InsertMap_8,
#line 1168 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_9);

#line 1137 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_at_call_site_9_p_0(
#line 1137 "interval.m"
  MR_Word backend_libs__interval__Goal0_10,
#line 1137 "interval.m"
  MR_Word * backend_libs__interval__Goal_11,
#line 1137 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_25,
#line 1137 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_26,
#line 1137 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_27,
#line 1137 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_28,
#line 1137 "interval.m"
  MR_Word backend_libs__interval__MustHaveMap_14,
#line 1137 "interval.m"
  MR_Word backend_libs__interval__InsertMap_15,
#line 1137 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_16);

#line 1106 "interval.m"
static void MR_CALL 
backend_libs__interval__create_shadow_vars_10_p_0(
#line 1106 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1106 "interval.m"
  MR_Word backend_libs__interval__VarsToExtract_2,
#line 1106 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_0_3,
#line 1106 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarSet_4,
#line 1106 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_0_5,
#line 1106 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarTypes_6,
#line 1106 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_7,
#line 1106 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_8,
#line 1106 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_0_9,
#line 1106 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VoidRename_10);

#line 1055 "interval.m"
static void MR_CALL 
backend_libs__interval__make_inserted_goals_7_p_0(
#line 1055 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_1,
#line 1055 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_2,
#line 1055 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_3,
#line 1055 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_4,
#line 1055 "interval.m"
  MR_Word backend_libs__interval__HeadVar__5_5,
#line 1055 "interval.m"
  MR_Word backend_libs__interval__HeadVar__6_6,
#line 1055 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7);

#line 1044 "interval.m"
static void MR_CALL 
backend_libs__interval__insert_goals_after_7_p_0(
#line 1044 "interval.m"
  MR_Word backend_libs__interval__BranchesGoal_8,
#line 1044 "interval.m"
  MR_Word * backend_libs__interval__Goal_9,
#line 1044 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_17,
#line 1044 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_18,
#line 1044 "interval.m"
  MR_Word * backend_libs__interval__VarRename_11,
#line 1044 "interval.m"
  MR_Word backend_libs__interval__Inserts_12,
#line 1044 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_13);

#line 1034 "interval.m"
static void MR_CALL 
backend_libs__interval__lookup_inserts_3_p_0(
#line 1034 "interval.m"
  MR_Word backend_libs__interval__InsertMap_4,
#line 1034 "interval.m"
  MR_Word backend_libs__interval__Anchor_5,
#line 1034 "interval.m"
  MR_Word * backend_libs__interval__Inserts_6);

#line 884 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_goal_8_p_0(
#line 884 "interval.m"
  MR_Word backend_libs__interval__Goal0_9,
#line 884 "interval.m"
  MR_Word * backend_libs__interval__Goal_10,
#line 884 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_114,
#line 884 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_115,
#line 884 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_116,
#line 884 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_117,
#line 884 "interval.m"
  MR_Word backend_libs__interval__InsertMap_13,
#line 884 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_14);

#line 860 "interval.m"
static void MR_CALL 
backend_libs__interval__record_model_non_anchor_3_p_0(
#line 860 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 860 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 860 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9);

#line 843 "interval.m"
static void MR_CALL 
backend_libs__interval__require_access_3_p_0(
#line 843 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 843 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 843 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9);

#line 835 "interval.m"
static void MR_CALL 
backend_libs__interval__require_flushed_3_p_0(
#line 835 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 835 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 835 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9);

#line 828 "interval.m"
static void MR_CALL 
backend_libs__interval__require_in_regs_3_p_0(
#line 828 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 828 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 828 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8);

#line 785 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_no_succ_3_p_0(
#line 785 "interval.m"
  MR_Word backend_libs__interval__Id_4,
#line 785 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 785 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10);

#line 773 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_succ_4_p_0(
#line 773 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 773 "interval.m"
  MR_Word backend_libs__interval__Succ_6,
#line 773 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 773 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12);

#line 765 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_start_4_p_0(
#line 765 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 765 "interval.m"
  MR_Word backend_libs__interval__Start_6,
#line 765 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 765 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11);

#line 757 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_end_4_p_0(
#line 757 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 757 "interval.m"
  MR_Word backend_libs__interval__End_6,
#line 757 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 757 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11);

#line 736 "interval.m"
static void MR_CALL 
backend_libs__interval__record_branch_end_info_3_p_0(
#line 736 "interval.m"
  MR_Word backend_libs__interval__GoalId_4,
#line 736 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 736 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13);

#line 724 "interval.m"
static void MR_CALL 
backend_libs__interval__new_interval_id_3_p_0(
#line 724 "interval.m"
  MR_Word * backend_libs__interval__Id_4,
#line 724 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 724 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12);

#line 718 "interval.m"
static void MR_CALL 
backend_libs__interval__set_cur_interval_3_p_0(
#line 718 "interval.m"
  MR_Word backend_libs__interval__CurInterval_4,
#line 718 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 718 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7);

#line 714 "interval.m"
static void MR_CALL 
backend_libs__interval__get_cur_interval_2_p_0(
#line 714 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 714 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3);

#line 704 "interval.m"
static void MR_CALL 
backend_libs__interval__gather_interval_vars_4_p_0(
#line 704 "interval.m"
  MR_Word backend_libs__interval__IntervalVarMap_5,
#line 704 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6,
#line 704 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_0_9,
#line 704 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_10);

#line 684 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1(
#line 684 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 684 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 684 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 684 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 677 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(
#line 677 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 677 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17,
#line 677 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_18);

#line 671 "interval.m"
static void MR_CALL 
backend_libs__interval__one_open_interval_3_p_0(
#line 671 "interval.m"
  MR_Word backend_libs__interval__IntervalId_4,
#line 671 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 671 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7);

#line 666 "interval.m"
static void MR_CALL 
backend_libs__interval__no_open_intervals_2_p_0(
#line 666 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4,
#line 666 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_5);

#line 660 "interval.m"
static void MR_CALL 
backend_libs__interval__set_open_intervals_3_p_0(
#line 660 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_4,
#line 660 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 660 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7);

#line 655 "interval.m"
static void MR_CALL 
backend_libs__interval__get_open_intervals_2_p_0(
#line 655 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3,
#line 655 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_4);

#line 622 "interval.m"
static void MR_CALL 
backend_libs__interval__reached_cond_then_3_p_0(
#line 622 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_4,
#line 622 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 622 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13);

#line 595 "interval.m"
static void MR_CALL 
backend_libs__interval__enter_branch_tail_4_p_0(
#line 595 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_5,
#line 595 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 595 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 595 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10);

#line 527 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_cases_10_p_0(
#line 527 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 527 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 527 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_2,
#line 527 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_3,
#line 527 "interval.m"
  MR_Word backend_libs__interval__BeforeId_4,
#line 527 "interval.m"
  MR_Word backend_libs__interval__AfterId_5,
#line 527 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__6_6,
#line 527 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 527 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8,
#line 527 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_9,
#line 527 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_10);

#line 511 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_disj_11_p_0(
#line 511 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 511 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 511 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_2,
#line 511 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_3,
#line 511 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_4,
#line 511 "interval.m"
  MR_Word backend_libs__interval__BeforeId_5,
#line 511 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 511 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7,
#line 511 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 511 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9,
#line 511 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_10,
#line 511 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_11);

#line 428 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(
#line 428 "interval.m"
  MR_Word backend_libs__interval__ModuleInfo_1,
#line 428 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2);

#line 1345 "interval.m"
static void MR_CALL 
backend_libs__interval__write_int_list_3_p_0_1(
#line 1345 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1345 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1271 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_2(
#line 1271 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1271 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1271 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1271 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 1267 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_1(
#line 1267 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1267 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1267 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1267 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3);

#line 358 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_2(
#line 358 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 358 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1);

#line 357 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_1(
#line 357 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 357 "interval.m"
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



#line 1849 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1857 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__pair__pti_pair_2__plain_backend_libs__interval__type_ctor_info_anchor_0__plain_backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0
  }
};

#line 1866 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1874 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1882 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__interval__tree234__pti_tree234_2__plain_backend_libs__interval__type_ctor_info_interval_id_0__plain_sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1891 "backend_libs.interval.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__interval__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1899 "backend_libs.interval.c"
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

#line 1914 "backend_libs.interval.c"
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

#line 1929 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_2[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1935 "backend_libs.interval.c"
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

#line 1950 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_3[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1955 "backend_libs.interval.c"
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

#line 1970 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_4[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_construct_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1976 "backend_libs.interval.c"
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

#line 1991 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_0_5[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 1996 "backend_libs.interval.c"
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

#line 2011 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_0[2] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1
};

#line 2017 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_1[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2
};

#line 2022 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_2[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3
};

#line 2027 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_0_3[2] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5
};

#line 2033 "backend_libs.interval.c"
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

#line 2057 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_0[6] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_4,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_2,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_5,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_3,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_1,
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_0_0
};

#line 2067 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_0[6] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2077 "backend_libs.interval.c"
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

#line 2094 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2102 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_anchor_follow_info_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2108 "backend_libs.interval.c"
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

#line 2123 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0
};

#line 2128 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_anchor_follow_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_anchor_follow_info_0_0
  }
};

#line 2137 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_anchor_follow_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_anchor_follow_info_0_0
};

#line 2142 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_anchor_follow_info_0[1] = {
  (MR_Integer) 0
};

#line 2147 "backend_libs.interval.c"
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

#line 2164 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0 = {
  (MR_String) "branch_ite",
  (MR_Integer) 0
};

#line 2170 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1 = {
  (MR_String) "branch_disj",
  (MR_Integer) 1
};

#line 2176 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2 = {
  (MR_String) "branch_switch",
  (MR_Integer) 2
};

#line 2182 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3 = {
  (MR_String) "branch_neg",
  (MR_Integer) 3
};

#line 2188 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4 = {
  (MR_String) "branch_par_conj",
  (MR_Integer) 4
};

#line 2194 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_branch_construct_0[5] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4
};

#line 2203 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_branch_construct_0[5] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_3,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_4,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_branch_construct_0_2
};

#line 2212 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_construct_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2221 "backend_libs.interval.c"
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

#line 2238 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_branch_end_info_0_0[3] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
};

#line 2245 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_branch_end_info_0_0[3] = {
  (MR_String) "flushed_after_branch",
  (MR_String) "accessed_after_branch",
  (MR_String) "interval_after_branch"
};

#line 2252 "backend_libs.interval.c"
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

#line 2267 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0
};

#line 2272 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_branch_end_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_branch_end_info_0_0
  }
};

#line 2281 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_branch_end_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_branch_end_info_0_0
};

#line 2286 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_branch_end_info_0[1] = {
  (MR_Integer) 0
};

#line 2291 "backend_libs.interval.c"
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

#line 2308 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2316 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_TypeInfo) &backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_insert_spec_0
  }
};

#line 2325 "backend_libs.interval.c"
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

#line 2342 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_insert_spec_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2348 "backend_libs.interval.c"
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

#line 2363 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0
};

#line 2368 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_insert_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_insert_spec_0_0
  }
};

#line 2377 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_insert_spec_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_insert_spec_0_0
};

#line 2382 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_insert_spec_0[1] = {
  (MR_Integer) 0
};

#line 2387 "backend_libs.interval.c"
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

#line 2404 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_id_0[1] = {
  (MR_Integer) 0
};

#line 2409 "backend_libs.interval.c"
static const MR_NotagFunctorDesc backend_libs__interval__backend_libs__interval__notag_functor_desc_interval_id_0 = {
  (MR_String) "interval_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2416 "backend_libs.interval.c"
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

#line 2433 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_resume_save_status_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0
  }
};

#line 2442 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_branch_end_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0
  }
};

#line 2451 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2460 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_anchor_0backend_libs__interval__type_ctor_info_anchor_follow_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0
  }
};

#line 2469 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__set_ordlist__ti_set_ordlist_1backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2477 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0backend_libs__interval__type_ctor_info_anchor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0
  }
};

#line 2486 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2494 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__list__ti_list_1backend_libs__interval__type_ctor_info_interval_id_0
  }
};

#line 2503 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2512 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__interval__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2520 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2backend_libs__interval__type_ctor_info_interval_id_0list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0,
    (MR_TypeInfo) &backend_libs__interval__list__ti_list_1sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2529 "backend_libs.interval.c"
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

#line 2549 "backend_libs.interval.c"
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

#line 2569 "backend_libs.interval.c"
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

#line 2584 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0
};

#line 2589 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_info_0_0
  }
};

#line 2598 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_info_0_0
};

#line 2603 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_info_0[1] = {
  (MR_Integer) 0
};

#line 2608 "backend_libs.interval.c"
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

#line 2625 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 2634 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_params_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2641 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_params_0_0[3] = {
  (MR_String) "ip_module_info",
  (MR_String) "ip_var_types",
  (MR_String) "ip_at_most_zero_calls"
};

#line 2648 "backend_libs.interval.c"
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

#line 2663 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0
};

#line 2668 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_params_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_params_0_0
  }
};

#line 2677 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_params_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_params_0_0
};

#line 2682 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_params_0[1] = {
  (MR_Integer) 0
};

#line 2687 "backend_libs.interval.c"
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

#line 2704 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2712 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_interval_var_info_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0
};

#line 2718 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__field_names_interval_var_info_0_0[2] = {
  (MR_String) "ivi_varset",
  (MR_String) "ivi_vartypes"
};

#line 2724 "backend_libs.interval.c"
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

#line 2739 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0
};

#line 2744 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_interval_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_interval_var_info_0_0
  }
};

#line 2753 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_interval_var_info_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_interval_var_info_0_0
};

#line 2758 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_interval_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2763 "backend_libs.interval.c"
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

#line 2780 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0 = {
  (MR_String) "needs_flush",
  (MR_Integer) 0
};

#line 2786 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1 = {
  (MR_String) "doesnt_need_flush",
  (MR_Integer) 1
};

#line 2792 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_maybe_needs_flush_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1
};

#line 2798 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_maybe_needs_flush_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_maybe_needs_flush_0_0
};

#line 2804 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_maybe_needs_flush_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2810 "backend_libs.interval.c"
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

#line 2827 "backend_libs.interval.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__interval__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &backend_libs__interval__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2836 "backend_libs.interval.c"
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

#line 2853 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0 = {
  (MR_String) "has_resume_save",
  (MR_Integer) 0
};

#line 2859 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1 = {
  (MR_String) "has_no_resume_save",
  (MR_Integer) 1
};

#line 2865 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_resume_save_status_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1
};

#line 2871 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_resume_save_status_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_1,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_resume_save_status_0_0
};

#line 2877 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_resume_save_status_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2883 "backend_libs.interval.c"
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

#line 2900 "backend_libs.interval.c"
static const MR_PseudoTypeInfo backend_libs__interval__backend_libs__interval__field_types_save_point_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__interval__backend_libs__interval__type_ctor_info_save_point_type_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0
};

#line 2906 "backend_libs.interval.c"
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

#line 2921 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0
};

#line 2926 "backend_libs.interval.c"
static const MR_DuPtagLayout backend_libs__interval__backend_libs__interval__du_ptag_ordered_save_point_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__interval__backend_libs__interval__du_stag_ordered_save_point_0_0
  }
};

#line 2935 "backend_libs.interval.c"
static const MR_DuFunctorDescPtr backend_libs__interval__backend_libs__interval__du_name_ordered_save_point_0[1] = {
  &backend_libs__interval__backend_libs__interval__du_functor_desc_save_point_0_0
};

#line 2940 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_0[1] = {
  (MR_Integer) 0
};

#line 2945 "backend_libs.interval.c"
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

#line 2962 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0 = {
  (MR_String) "save_point_call_site",
  (MR_Integer) 0
};

#line 2968 "backend_libs.interval.c"
static const MR_EnumFunctorDesc backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1 = {
  (MR_String) "save_point_resume_point",
  (MR_Integer) 1
};

#line 2974 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_value_ordered_save_point_type_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1
};

#line 2980 "backend_libs.interval.c"
static const MR_EnumFunctorDescPtr backend_libs__interval__backend_libs__interval__enum_name_ordered_save_point_type_0[2] = {
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_0,
  &backend_libs__interval__backend_libs__interval__enum_functor_desc_save_point_type_0_1
};

#line 2986 "backend_libs.interval.c"
static const MR_Integer backend_libs__interval__backend_libs__interval__functor_number_map_save_point_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2992 "backend_libs.interval.c"
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

#line 3009 "backend_libs.interval.c"
static const MR_ConstString backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1[1] = {
  (MR_String) "T"
};

#line 3014 "backend_libs.interval.c"
static const MR_TypeClassMethod backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1[1] = {
  {
    (MR_String) "use_cell",
    (MR_Integer) 8,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 3023 "backend_libs.interval.c"
static const MR_TypeClassId backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1 = {
  (MR_String) "backend_libs.interval",
  (MR_String) "build_interval_info_acc",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  backend_libs__interval__backend_libs__interval__type_class_id_var_names_build_interval_info_acc_1,
  backend_libs__interval__backend_libs__interval__type_class_id_method_ids_build_interval_info_acc_1
};

#line 3034 "backend_libs.interval.c"
const MR_TypeClassDeclStruct backend_libs__interval__backend_libs__interval__type_class_decl_build_interval_info_acc_1 = {
  &backend_libs__interval__backend_libs__interval__type_class_id_build_interval_info_acc_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3042 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0_10001(
#line 3045 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3047 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3049 "backend_libs.interval.c"
{
#line 3051 "backend_libs.interval.c"
  {
#line 3053 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3056 "backend_libs.interval.c"
    {
#line 3058 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____anchor_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3061 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3063 "backend_libs.interval.c"
  }
#line 3065 "backend_libs.interval.c"
}

#line 3068 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_0_0_10001(
#line 3071 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3073 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3075 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3077 "backend_libs.interval.c"
{
#line 3079 "backend_libs.interval.c"
  {
#line 3081 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3084 "backend_libs.interval.c"
    {
#line 3086 "backend_libs.interval.c"
      backend_libs__interval____Compare____anchor_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3089 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3091 "backend_libs.interval.c"
  }
#line 3093 "backend_libs.interval.c"
}

#line 3096 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0_10001(
#line 3099 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3101 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3103 "backend_libs.interval.c"
{
#line 3105 "backend_libs.interval.c"
  {
#line 3107 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3110 "backend_libs.interval.c"
    {
#line 3112 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____anchor_follow_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3115 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3117 "backend_libs.interval.c"
  }
#line 3119 "backend_libs.interval.c"
}

#line 3122 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0_10001(
#line 3125 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3127 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3129 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3131 "backend_libs.interval.c"
{
#line 3133 "backend_libs.interval.c"
  {
#line 3135 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3138 "backend_libs.interval.c"
    {
#line 3140 "backend_libs.interval.c"
      backend_libs__interval____Compare____anchor_follow_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3143 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3145 "backend_libs.interval.c"
  }
#line 3147 "backend_libs.interval.c"
}

#line 3150 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0_10001(
#line 3153 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3155 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3157 "backend_libs.interval.c"
{
#line 3159 "backend_libs.interval.c"
  {
#line 3161 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3164 "backend_libs.interval.c"
    {
#line 3166 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____branch_construct_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3169 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3171 "backend_libs.interval.c"
  }
#line 3173 "backend_libs.interval.c"
}

#line 3176 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0_10001(
#line 3179 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3181 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3183 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3185 "backend_libs.interval.c"
{
#line 3187 "backend_libs.interval.c"
  {
#line 3189 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3192 "backend_libs.interval.c"
    {
#line 3194 "backend_libs.interval.c"
      backend_libs__interval____Compare____branch_construct_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3197 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3199 "backend_libs.interval.c"
  }
#line 3201 "backend_libs.interval.c"
}

#line 3204 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____branch_end_info_0_0_10001(
#line 3207 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3209 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3211 "backend_libs.interval.c"
{
#line 3213 "backend_libs.interval.c"
  {
#line 3215 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3218 "backend_libs.interval.c"
    {
#line 3220 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____branch_end_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3223 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3225 "backend_libs.interval.c"
  }
#line 3227 "backend_libs.interval.c"
}

#line 3230 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0_10001(
#line 3233 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3235 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3237 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3239 "backend_libs.interval.c"
{
#line 3241 "backend_libs.interval.c"
  {
#line 3243 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3246 "backend_libs.interval.c"
    {
#line 3248 "backend_libs.interval.c"
      backend_libs__interval____Compare____branch_end_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3251 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3253 "backend_libs.interval.c"
  }
#line 3255 "backend_libs.interval.c"
}

#line 3258 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0_10001(
#line 3261 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3263 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3265 "backend_libs.interval.c"
{
#line 3267 "backend_libs.interval.c"
  {
#line 3269 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3272 "backend_libs.interval.c"
    {
#line 3274 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____insert_map_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3277 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3279 "backend_libs.interval.c"
  }
#line 3281 "backend_libs.interval.c"
}

#line 3284 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0_10001(
#line 3287 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3289 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3291 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3293 "backend_libs.interval.c"
{
#line 3295 "backend_libs.interval.c"
  {
#line 3297 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3300 "backend_libs.interval.c"
    {
#line 3302 "backend_libs.interval.c"
      backend_libs__interval____Compare____insert_map_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3305 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3307 "backend_libs.interval.c"
  }
#line 3309 "backend_libs.interval.c"
}

#line 3312 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0_10001(
#line 3315 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3317 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3319 "backend_libs.interval.c"
{
#line 3321 "backend_libs.interval.c"
  {
#line 3323 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3326 "backend_libs.interval.c"
    {
#line 3328 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____insert_spec_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3331 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3333 "backend_libs.interval.c"
  }
#line 3335 "backend_libs.interval.c"
}

#line 3338 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0_10001(
#line 3341 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3343 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3345 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3347 "backend_libs.interval.c"
{
#line 3349 "backend_libs.interval.c"
  {
#line 3351 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3354 "backend_libs.interval.c"
    {
#line 3356 "backend_libs.interval.c"
      backend_libs__interval____Compare____insert_spec_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3359 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3361 "backend_libs.interval.c"
  }
#line 3363 "backend_libs.interval.c"
}

#line 3366 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0_10001(
#line 3369 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3371 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3373 "backend_libs.interval.c"
{
#line 3375 "backend_libs.interval.c"
  {
#line 3377 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3380 "backend_libs.interval.c"
    {
#line 3382 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_id_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3385 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3387 "backend_libs.interval.c"
  }
#line 3389 "backend_libs.interval.c"
}

#line 3392 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0_10001(
#line 3395 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3397 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3399 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3401 "backend_libs.interval.c"
{
#line 3403 "backend_libs.interval.c"
  {
#line 3405 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3408 "backend_libs.interval.c"
    {
#line 3410 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_id_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3413 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3415 "backend_libs.interval.c"
  }
#line 3417 "backend_libs.interval.c"
}

#line 3420 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0_10001(
#line 3423 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3425 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3427 "backend_libs.interval.c"
{
#line 3429 "backend_libs.interval.c"
  {
#line 3431 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3434 "backend_libs.interval.c"
    {
#line 3436 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3439 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3441 "backend_libs.interval.c"
  }
#line 3443 "backend_libs.interval.c"
}

#line 3446 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0_10001(
#line 3449 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3451 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3453 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3455 "backend_libs.interval.c"
{
#line 3457 "backend_libs.interval.c"
  {
#line 3459 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3462 "backend_libs.interval.c"
    {
#line 3464 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3467 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3469 "backend_libs.interval.c"
  }
#line 3471 "backend_libs.interval.c"
}

#line 3474 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0_10001(
#line 3477 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3479 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3481 "backend_libs.interval.c"
{
#line 3483 "backend_libs.interval.c"
  {
#line 3485 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3488 "backend_libs.interval.c"
    {
#line 3490 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_params_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3493 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3495 "backend_libs.interval.c"
  }
#line 3497 "backend_libs.interval.c"
}

#line 3500 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0_10001(
#line 3503 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3505 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3507 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3509 "backend_libs.interval.c"
{
#line 3511 "backend_libs.interval.c"
  {
#line 3513 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3516 "backend_libs.interval.c"
    {
#line 3518 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_params_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3521 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3523 "backend_libs.interval.c"
  }
#line 3525 "backend_libs.interval.c"
}

#line 3528 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0_10001(
#line 3531 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3533 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3535 "backend_libs.interval.c"
{
#line 3537 "backend_libs.interval.c"
  {
#line 3539 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3542 "backend_libs.interval.c"
    {
#line 3544 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_var_info_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3547 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3549 "backend_libs.interval.c"
  }
#line 3551 "backend_libs.interval.c"
}

#line 3554 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0_10001(
#line 3557 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3559 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3561 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3563 "backend_libs.interval.c"
{
#line 3565 "backend_libs.interval.c"
  {
#line 3567 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3570 "backend_libs.interval.c"
    {
#line 3572 "backend_libs.interval.c"
      backend_libs__interval____Compare____interval_var_info_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3575 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3577 "backend_libs.interval.c"
  }
#line 3579 "backend_libs.interval.c"
}

#line 3582 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0_10001(
#line 3585 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3587 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3589 "backend_libs.interval.c"
{
#line 3591 "backend_libs.interval.c"
  {
#line 3593 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3596 "backend_libs.interval.c"
    {
#line 3598 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____maybe_needs_flush_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3601 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3603 "backend_libs.interval.c"
  }
#line 3605 "backend_libs.interval.c"
}

#line 3608 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0_10001(
#line 3611 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3613 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3615 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3617 "backend_libs.interval.c"
{
#line 3619 "backend_libs.interval.c"
  {
#line 3621 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3624 "backend_libs.interval.c"
    {
#line 3626 "backend_libs.interval.c"
      backend_libs__interval____Compare____maybe_needs_flush_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3629 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3631 "backend_libs.interval.c"
  }
#line 3633 "backend_libs.interval.c"
}

#line 3636 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0_10001(
#line 3639 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3641 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3643 "backend_libs.interval.c"
{
#line 3645 "backend_libs.interval.c"
  {
#line 3647 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3650 "backend_libs.interval.c"
    {
#line 3652 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____rename_map_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3655 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3657 "backend_libs.interval.c"
  }
#line 3659 "backend_libs.interval.c"
}

#line 3662 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0_10001(
#line 3665 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3667 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3669 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3671 "backend_libs.interval.c"
{
#line 3673 "backend_libs.interval.c"
  {
#line 3675 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3678 "backend_libs.interval.c"
    {
#line 3680 "backend_libs.interval.c"
      backend_libs__interval____Compare____rename_map_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3683 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3685 "backend_libs.interval.c"
  }
#line 3687 "backend_libs.interval.c"
}

#line 3690 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0_10001(
#line 3693 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3695 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3697 "backend_libs.interval.c"
{
#line 3699 "backend_libs.interval.c"
  {
#line 3701 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3704 "backend_libs.interval.c"
    {
#line 3706 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____resume_save_status_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3709 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3711 "backend_libs.interval.c"
  }
#line 3713 "backend_libs.interval.c"
}

#line 3716 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0_10001(
#line 3719 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3721 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3723 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3725 "backend_libs.interval.c"
{
#line 3727 "backend_libs.interval.c"
  {
#line 3729 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3732 "backend_libs.interval.c"
    {
#line 3734 "backend_libs.interval.c"
      backend_libs__interval____Compare____resume_save_status_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3737 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3739 "backend_libs.interval.c"
  }
#line 3741 "backend_libs.interval.c"
}

#line 3744 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0_10001(
#line 3747 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3749 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3751 "backend_libs.interval.c"
{
#line 3753 "backend_libs.interval.c"
  {
#line 3755 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3758 "backend_libs.interval.c"
    {
#line 3760 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____save_point_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3763 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3765 "backend_libs.interval.c"
  }
#line 3767 "backend_libs.interval.c"
}

#line 3770 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_0_0_10001(
#line 3773 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3775 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3777 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3779 "backend_libs.interval.c"
{
#line 3781 "backend_libs.interval.c"
  {
#line 3783 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3786 "backend_libs.interval.c"
    {
#line 3788 "backend_libs.interval.c"
      backend_libs__interval____Compare____save_point_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3791 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3793 "backend_libs.interval.c"
  }
#line 3795 "backend_libs.interval.c"
}

#line 3798 "backend_libs.interval.c"
static MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0_10001(
#line 3801 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 3803 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2)
#line 3805 "backend_libs.interval.c"
{
#line 3807 "backend_libs.interval.c"
  {
#line 3809 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded;

#line 3812 "backend_libs.interval.c"
    {
#line 3814 "backend_libs.interval.c"
      backend_libs__interval__succeeded = backend_libs__interval____Unify____save_point_type_0_0(((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2));
    }
#line 3817 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 3819 "backend_libs.interval.c"
  }
#line 3821 "backend_libs.interval.c"
}

#line 3824 "backend_libs.interval.c"
static void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0_10001(
#line 3827 "backend_libs.interval.c"
  MR_Box * backend_libs__interval__wrapper_arg_1,
#line 3829 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 3831 "backend_libs.interval.c"
  MR_Box backend_libs__interval__wrapper_arg_3)
#line 3833 "backend_libs.interval.c"
{
#line 3835 "backend_libs.interval.c"
  {
#line 3837 "backend_libs.interval.c"
    MR_Word backend_libs__interval__conv0_HeadVar__1_1;

#line 3840 "backend_libs.interval.c"
    {
#line 3842 "backend_libs.interval.c"
      backend_libs__interval____Compare____save_point_type_0_0(&backend_libs__interval__conv0_HeadVar__1_1, ((MR_Word) backend_libs__interval__wrapper_arg_2), ((MR_Word) backend_libs__interval__wrapper_arg_3));
    }
#line 3845 "backend_libs.interval.c"
    *backend_libs__interval__wrapper_arg_1 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__1_1));
#line 3847 "backend_libs.interval.c"
  }
#line 3849 "backend_libs.interval.c"
}

#line 1189 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(
#line 1189 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1189 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1189 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1189 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1189 "interval.m"
  MR_Word backend_libs__interval__Inserts_6,
#line 1189 "interval.m"
  MR_Word backend_libs__interval__InsertMap_7,
#line 1189 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_8)
#line 1189 "interval.m"
{
#line 1194 "interval.m"
  {
#line 1194 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1194 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1194 "interval.m"
      {
#line 1194 "interval.m"
        *backend_libs__interval__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1194 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_4 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_3;
#line 1194 "interval.m"
      }
#line 1194 "interval.m"
    else
#line 1196 "interval.m"
      {
#line 1196 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_40_40 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1196 "interval.m"
        MR_Word backend_libs__interval__Goal0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1196 "interval.m"
        MR_Word backend_libs__interval__Goals0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1196 "interval.m"
        MR_Word backend_libs__interval__Goal_18;
#line 1196 "interval.m"
        MR_Word backend_libs__interval__Goals_19;
#line 1196 "interval.m"
        MR_Word backend_libs__interval__VarRename1_25;
#line 1196 "interval.m"
        MR_Word backend_libs__interval__InsertGoals_26;
#line 1196 "interval.m"
        MR_Word backend_libs__interval__GoalInfo0_28;
#line 1196 "interval.m"
        MR_Word backend_libs__interval__Goal1_29;
#line 1196 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_33_33;
#line 1196 "interval.m"
        MR_Word backend_libs__interval__V_34_34;
#line 1196 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_35_35;
#line 1196 "interval.m"
        MR_Word backend_libs__interval__V_36_36;
#line 1196 "interval.m"
        MR_Word backend_libs__interval__V_37_37;
#line 1199 "interval.m"
        MR_Word backend_libs__interval__V_27_27;
#line 1200 "interval.m"
        MR_Word backend_libs__interval__V_30_30;

#line 1197 "interval.m"
        {
#line 1197 "interval.m"
          backend_libs__interval__V_34_34 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_40_40, backend_libs__interval__TypeInfo_40_40);
        }
#line 1197 "interval.m"
        {
#line 1197 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_0_3, &backend_libs__interval__STATE_VARIABLE_VarInfo_33_33, backend_libs__interval__V_34_34, &backend_libs__interval__VarRename1_25, backend_libs__interval__Inserts_6, backend_libs__interval__MaybeFeature_8, &backend_libs__interval__InsertGoals_26);
        }
#line 1199 "interval.m"
        backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_16, (MR_Integer) 0)));
#line 1199 "interval.m"
        backend_libs__interval__GoalInfo0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_16, (MR_Integer) 1)));
#line 1200 "interval.m"
        {
#line 1200 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Goal0_16, &backend_libs__interval__Goal1_29, backend_libs__interval__STATE_VARIABLE_VarInfo_33_33, &backend_libs__interval__STATE_VARIABLE_VarInfo_35_35, backend_libs__interval__VarRename1_25, &backend_libs__interval__V_30_30, backend_libs__interval__InsertMap_7, backend_libs__interval__MaybeFeature_8);
        }
#line 1202 "interval.m"
        {
#line 1202 "interval.m"
          backend_libs__interval__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_37_37, 0) = ((MR_Box) (backend_libs__interval__Goal1_29));
#line 1202 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1202 "interval.m"
        }
#line 1202 "interval.m"
        {
#line 1202 "interval.m"
          backend_libs__interval__V_36_36 = mercury__list__append_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, backend_libs__interval__InsertGoals_26, backend_libs__interval__V_37_37);
        }
#line 1202 "interval.m"
        {
#line 1202 "interval.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_36_36, backend_libs__interval__GoalInfo0_28, &backend_libs__interval__Goal_18);
        }
#line 1203 "interval.m"
        {
#line 1203 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(backend_libs__interval__Goals0_17, &backend_libs__interval__Goals_19, backend_libs__interval__STATE_VARIABLE_VarInfo_35_35, backend_libs__interval__STATE_VARIABLE_VarInfo_4, backend_libs__interval__Inserts_6, backend_libs__interval__InsertMap_7, backend_libs__interval__MaybeFeature_8);
        }
#line 1195 "interval.m"
        {
#line 1195 "interval.m"
          MR_Word base;
#line 1195 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1195 "interval.m"
          *backend_libs__interval__HeadVar__2_2 = base;
#line 1195 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Goal_18));
#line 1195 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__Goals_19));
#line 1195 "interval.m"
        }
#line 1196 "interval.m"
      }
#line 1194 "interval.m"
  }
#line 1189 "interval.m"
}

#line 639 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(
#line 639 "interval.m"
  MR_Word backend_libs__interval__StartArchor_9,
#line 639 "interval.m"
  MR_Word backend_libs__interval__BeforeId_10,
#line 639 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeVars_11,
#line 639 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_12,
#line 639 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15,
#line 639 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_16)
#line 639 "interval.m"
{
#line 644 "interval.m"
  {
#line 644 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 644 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17;
#line 644 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18;
#line 644 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19;
#line 644 "interval.m"
    MR_Word backend_libs__interval__EndMap0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 12)));
#line 644 "interval.m"
    MR_Word backend_libs__interval__EndMap_27;
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 0)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 1)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 2)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 3)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 4)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 5)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 6)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 7)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 8)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 9)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 10)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 11)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 13)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 14)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 15)));
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_45_45;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_54_54;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_55_55;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_57_57;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_56_56;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_73_73;

#line 762 "interval.m"
    {
#line 762 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__BeforeId_10)), ((MR_Box) (backend_libs__interval__StartArchor_9)), backend_libs__interval__EndMap0_26, &backend_libs__interval__EndMap_27);
    }
#line 763 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 0)));
#line 763 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 1)));
#line 763 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 2)));
#line 763 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 3)));
#line 763 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 4)));
#line 763 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 5)));
#line 763 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 6)));
#line 763 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 7)));
#line 763 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 8)));
#line 763 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 9)));
#line 763 "interval.m"
    backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 10)));
#line 763 "interval.m"
    backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 11)));
#line 763 "interval.m"
    backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 12)));
#line 763 "interval.m"
    backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 13)));
#line 763 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 14)));
#line 763 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_15, (MR_Integer) 15)));
#line 763 "interval.m"
    {
#line 763 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 0) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 1) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 2) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 3) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 4) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 5) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 6) = ((MR_Box) (backend_libs__interval__V_50_50));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 7) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 8) = ((MR_Box) (backend_libs__interval__V_52_52));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 9) = ((MR_Box) (backend_libs__interval__V_53_53));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 10) = ((MR_Box) (backend_libs__interval__V_54_54));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 11) = ((MR_Box) (backend_libs__interval__V_55_55));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 12) = ((MR_Box) (backend_libs__interval__EndMap_27));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 13) = ((MR_Box) (backend_libs__interval__V_57_57));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 14) = ((MR_Box) (backend_libs__interval__V_58_58));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, 15) = ((MR_Box) (backend_libs__interval__V_59_59));
#line 763 "interval.m"
    }
#line 649 "interval.m"
    if ((backend_libs__interval__MaybeResumeVars_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 650 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17;
#line 649 "interval.m"
    else
#line 647 "interval.m"
      {
#line 647 "interval.m"
        MR_Word backend_libs__interval__ResumeVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeResumeVars_11, (MR_Integer) 0)));

#line 648 "interval.m"
        {
#line 648 "interval.m"
          backend_libs__interval__require_flushed_3_p_0(backend_libs__interval__ResumeVars_14, backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18);
        }
#line 647 "interval.m"
      }
#line 722 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 0)));
#line 722 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 1)));
#line 722 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 2)));
#line 722 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 3)));
#line 722 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 4)));
#line 722 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 5)));
#line 722 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 6)));
#line 722 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 7)));
#line 722 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 8)));
#line 722 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 9)));
#line 722 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 10)));
#line 722 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 11)));
#line 722 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 12)));
#line 722 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 13)));
#line 722 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 14)));
#line 722 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, (MR_Integer) 15)));
#line 722 "interval.m"
    {
#line 722 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 0) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 1) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 2) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 3) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 4) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 5) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 6) = ((MR_Box) (backend_libs__interval__BeforeId_10));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 7) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 8) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 9) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 10) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 11) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 12) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 13) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 14) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, 15) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 722 "interval.m"
    }
#line 653 "interval.m"
    {
#line 653 "interval.m"
      backend_libs__interval__set_open_intervals_3_p_0(backend_libs__interval__OpenIntervals_12, backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_16);
    }
#line 644 "interval.m"
  }
#line 639 "interval.m"
}

#line 605 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(
#line 605 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_9,
#line 605 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_10,
#line 605 "interval.m"
  MR_Word backend_libs__interval__BeforeId_11,
#line 605 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_12,
#line 605 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16,
#line 605 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_17,
#line 605 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_18,
#line 605 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_19)
#line 605 "interval.m"
{
#line 610 "interval.m"
  {
#line 610 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 610 "interval.m"
    MR_Word backend_libs__interval__BranchStartId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 6)));
#line 610 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20;
#line 610 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21;
#line 610 "interval.m"
    MR_Word backend_libs__interval__StartMap0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 11)));
#line 610 "interval.m"
    MR_Word backend_libs__interval__StartMap_46;
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 0)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 1)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 2)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 3)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 4)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 5)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 7)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 8)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 9)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 10)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 12)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 13)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 14)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 15)));
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_93_93;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_94_94;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_95_95;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_96_96;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_97_97;

#line 770 "interval.m"
    {
#line 770 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__BranchStartId_15)), ((MR_Box) (backend_libs__interval__StartAnchor_10)), backend_libs__interval__StartMap0_45, &backend_libs__interval__StartMap_46);
    }
#line 771 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 0)));
#line 771 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 1)));
#line 771 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 2)));
#line 771 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 3)));
#line 771 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 4)));
#line 771 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 5)));
#line 771 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 6)));
#line 771 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 7)));
#line 771 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 8)));
#line 771 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 9)));
#line 771 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 10)));
#line 771 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 11)));
#line 771 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 12)));
#line 771 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 13)));
#line 771 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 14)));
#line 771 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_16, (MR_Integer) 15)));
#line 771 "interval.m"
    {
#line 771 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 0) = ((MR_Box) (backend_libs__interval__V_63_63));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 1) = ((MR_Box) (backend_libs__interval__V_64_64));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 2) = ((MR_Box) (backend_libs__interval__V_65_65));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 3) = ((MR_Box) (backend_libs__interval__V_66_66));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 4) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 5) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 6) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 7) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 8) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 9) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 10) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 11) = ((MR_Box) (backend_libs__interval__StartMap_46));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 12) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 13) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 14) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 15) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 771 "interval.m"
    }
#line 613 "interval.m"
    {
#line 613 "interval.m"
      backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__BeforeId_11, backend_libs__interval__BranchStartId_15, backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21);
    }
#line 658 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 0)));
#line 658 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 1)));
#line 658 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 2)));
#line 658 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 3)));
#line 658 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 4)));
#line 658 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 5)));
#line 658 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 6)));
#line 658 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 7)));
#line 658 "interval.m"
    *backend_libs__interval__OpenIntervals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 8)));
#line 658 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 9)));
#line 658 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 10)));
#line 658 "interval.m"
    backend_libs__interval__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 11)));
#line 658 "interval.m"
    backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 12)));
#line 658 "interval.m"
    backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 13)));
#line 658 "interval.m"
    backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 14)));
#line 658 "interval.m"
    backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, (MR_Integer) 15)));
#line 617 "interval.m"
#line 617 "interval.m"
    switch (backend_libs__interval__MaybeNeedsFlush_9) {
#line 617 "interval.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 617 "interval.m"
      case (MR_Integer) 1:
#line 616 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_IntervalInfo_17 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21;
#line 617 "interval.m"
        break;
#line 617 "interval.m"
      case (MR_Integer) 0:
#line 619 "interval.m"
        {
#line 619 "interval.m"
          backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(backend_libs__interval__StartAnchor_10, backend_libs__interval__STATE_VARIABLE_IntervalInfo_21_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_17);
        }
#line 617 "interval.m"
        break;
#line 617 "interval.m"
    }
#line 610 "interval.m"
    *backend_libs__interval__STATE_VARIABLE_Acc_19 = backend_libs__interval__STATE_VARIABLE_Acc_0_18;
#line 610 "interval.m"
  }
#line 605 "interval.m"
}

#line 547 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(
#line 547 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_13,
#line 547 "interval.m"
  MR_Word backend_libs__interval__MaybeResumeGoal_14,
#line 547 "interval.m"
  MR_Word backend_libs__interval__Construct_15,
#line 547 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_16,
#line 547 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_17,
#line 547 "interval.m"
  MR_Word * backend_libs__interval__BeforeIntervalId_18,
#line 547 "interval.m"
  MR_Word * backend_libs__interval__AfterIntervalId_19,
#line 547 "interval.m"
  MR_Word * backend_libs__interval__MaybeResumeVars_20,
#line 547 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_34,
#line 547 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_35,
#line 547 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_36,
#line 547 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_37)
#line 547 "interval.m"
{
#line 555 "interval.m"
  {
#line 555 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 555 "interval.m"
    MR_Word backend_libs__interval__GoalId_23;
#line 555 "interval.m"
    MR_Word backend_libs__interval__HasResumeSave_29;
#line 555 "interval.m"
    MR_Word backend_libs__interval__CodeModel_33;
#line 555 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 555 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40;
#line 555 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41;
#line 555 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 555 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46;
#line 555 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47;
#line 555 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48;
#line 555 "interval.m"
    MR_Word backend_libs__interval__BranchResumeMap0_59;
#line 555 "interval.m"
    MR_Word backend_libs__interval__BranchResumeMap_60;
#line 558 "interval.m"
    MR_Word backend_libs__interval__ResumeVars_27;
#line 559 "interval.m"
    MR_Word backend_libs__interval__ResumeGoalInfo_25;
#line 559 "interval.m"
    MR_Word backend_libs__interval__ResumePoint_26;
#line 559 "interval.m"
    MR_Word backend_libs__interval__ResumeLocs_28;
#line 559 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 559 "interval.m"
    MR_Word backend_libs__interval___ResumeGoalExpr_24;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 855 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 858 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 571 "interval.m"
    MR_Word backend_libs__interval__StoreMap_30;

#line 556 "interval.m"
    {
#line 556 "interval.m"
      backend_libs__interval__GoalId_23 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_13);
    }
#line 557 "interval.m"
    {
#line 557 "interval.m"
      backend_libs__interval__record_branch_end_info_3_p_0(backend_libs__interval__GoalId_23, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_34, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
    }
#line 559 "interval.m"
    backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__MaybeResumeGoal_14)) == (MR_mktag((MR_Integer) 1)));
#line 559 "interval.m"
    if (backend_libs__interval__succeeded)
#line 559 "interval.m"
      {
#line 559 "interval.m"
        backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeResumeGoal_14, (MR_Integer) 0)));
#line 559 "interval.m"
        backend_libs__interval___ResumeGoalExpr_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_39_39, (MR_Integer) 0)));
#line 559 "interval.m"
        backend_libs__interval__ResumeGoalInfo_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_39_39, (MR_Integer) 1)));
#line 560 "interval.m"
        {
#line 560 "interval.m"
          backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_resume_point_2_p_0(backend_libs__interval__ResumeGoalInfo_25, &backend_libs__interval__ResumePoint_26);
        }
#line 559 "interval.m"
        if (backend_libs__interval__succeeded)
#line 559 "interval.m"
          {
#line 561 "interval.m"
            backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__ResumePoint_26)) == (MR_mktag((MR_Integer) 1)));
#line 561 "interval.m"
            if (backend_libs__interval__succeeded)
#line 561 "interval.m"
              {
#line 561 "interval.m"
                backend_libs__interval__ResumeVars_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__ResumePoint_26, (MR_Integer) 0)));
#line 561 "interval.m"
                backend_libs__interval__ResumeLocs_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__ResumePoint_26, (MR_Integer) 1)));
#line 562 "interval.m"
                backend_libs__interval__succeeded = (backend_libs__interval__ResumeLocs_28 == (MR_Integer) 0);
#line 562 "interval.m"
                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 561 "interval.m"
              }
#line 559 "interval.m"
          }
#line 559 "interval.m"
      }
#line 558 "interval.m"
    if (backend_libs__interval__succeeded)
#line 564 "interval.m"
      {
#line 564 "interval.m"
        backend_libs__interval__HasResumeSave_29 = (MR_Integer) 0;
#line 565 "interval.m"
        {
#line 565 "interval.m"
          MR_Word base;
#line 565 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 565 "interval.m"
          *backend_libs__interval__MaybeResumeVars_20 = base;
#line 565 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__ResumeVars_27));
#line 565 "interval.m"
        }
#line 564 "interval.m"
      }
#line 558 "interval.m"
    else
#line 567 "interval.m"
      {
#line 567 "interval.m"
        backend_libs__interval__HasResumeSave_29 = (MR_Integer) 1;
#line 568 "interval.m"
        *backend_libs__interval__MaybeResumeVars_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 567 "interval.m"
      }
#line 855 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 0)));
#line 855 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 1)));
#line 855 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 2)));
#line 855 "interval.m"
    backend_libs__interval__BranchResumeMap0_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 3)));
#line 855 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 4)));
#line 855 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 5)));
#line 855 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 6)));
#line 855 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 7)));
#line 855 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 8)));
#line 855 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 9)));
#line 855 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 10)));
#line 855 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 11)));
#line 855 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 12)));
#line 855 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 13)));
#line 855 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 14)));
#line 855 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 15)));
#line 856 "interval.m"
    {
#line 856 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_resume_save_status_0, ((MR_Box) (backend_libs__interval__GoalId_23)), ((MR_Box) (backend_libs__interval__HasResumeSave_29)), backend_libs__interval__BranchResumeMap0_59, &backend_libs__interval__BranchResumeMap_60);
    }
#line 858 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 0)));
#line 858 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 1)));
#line 858 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 2)));
#line 858 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 3)));
#line 858 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 4)));
#line 858 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 5)));
#line 858 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 6)));
#line 858 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 7)));
#line 858 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 8)));
#line 858 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 9)));
#line 858 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 10)));
#line 858 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 11)));
#line 858 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 12)));
#line 858 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 13)));
#line 858 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 14)));
#line 858 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, (MR_Integer) 15)));
#line 858 "interval.m"
    {
#line 858 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 0) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 1) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 2) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 3) = ((MR_Box) (backend_libs__interval__BranchResumeMap_60));
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 4) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 5) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 6) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 7) = ((MR_Box) (backend_libs__interval__V_84_84));
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 8) = ((MR_Box) (backend_libs__interval__V_85_85));
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 9) = ((MR_Box) (backend_libs__interval__V_86_86));
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 10) = ((MR_Box) (backend_libs__interval__V_87_87));
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 11) = ((MR_Box) (backend_libs__interval__V_88_88));
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 12) = ((MR_Box) (backend_libs__interval__V_89_89));
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 13) = ((MR_Box) (backend_libs__interval__V_90_90));
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 14) = ((MR_Box) (backend_libs__interval__V_91_91));
#line 858 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, 15) = ((MR_Box) (backend_libs__interval__V_92_92));
#line 858 "interval.m"
    }
#line 571 "interval.m"
    {
#line 571 "interval.m"
      backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_store_map_2_p_0(backend_libs__interval__GoalInfo_13, &backend_libs__interval__StoreMap_30);
    }
#line 571 "interval.m"
    if (backend_libs__interval__succeeded)
#line 572 "interval.m"
      {
#line 572 "interval.m"
        MR_Word backend_libs__interval__StoreMapVarList_31;
#line 572 "interval.m"
        MR_Word backend_libs__interval__StoreMapVars_32;

#line 572 "interval.m"
        {
#line 572 "interval.m"
          mercury__map__sorted_keys_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], (MR_Word) &hlds__hlds_llds__hlds__hlds_llds__type_ctor_info_abs_locn_0, backend_libs__interval__StoreMap_30, &backend_libs__interval__StoreMapVarList_31);
        }
#line 573 "interval.m"
        {
#line 573 "interval.m"
          backend_libs__interval__StoreMapVars_32 = parse_tree__set_of_var__sorted_list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__StoreMapVarList_31);
        }
#line 574 "interval.m"
        {
#line 574 "interval.m"
          backend_libs__interval__require_flushed_3_p_0(backend_libs__interval__StoreMapVars_32, backend_libs__interval__STATE_VARIABLE_IntervalInfo_40_40, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41);
        }
#line 572 "interval.m"
      }
#line 571 "interval.m"
    else
#line 576 "interval.m"
      {
#line 576 "interval.m"
        {
#line 576 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.reached_branch_end\'/12", (MR_String) "no store map");
#line 576 "interval.m"
          return;
        }
#line 576 "interval.m"
      }
#line 578 "interval.m"
    {
#line 578 "interval.m"
      MR_Word base;
#line 578 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 578 "interval.m"
      *backend_libs__interval__EndAnchor_17 = base;
#line 578 "interval.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 578 "interval.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (backend_libs__interval__Construct_15));
#line 578 "interval.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (backend_libs__interval__GoalId_23));
#line 578 "interval.m"
    }
#line 579 "interval.m"
    {
#line 579 "interval.m"
      MR_Word base;
#line 579 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "interval.m"
      *backend_libs__interval__StartAnchor_16 = base;
#line 579 "interval.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Construct_15));
#line 579 "interval.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__GoalId_23));
#line 579 "interval.m"
    }
#line 580 "interval.m"
    {
#line 580 "interval.m"
      backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(*backend_libs__interval__EndAnchor_17, backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45);
    }
#line 581 "interval.m"
    {
#line 581 "interval.m"
      backend_libs__interval__CodeModel_33 = hlds__code_model__goal_info_get_code_model_1_f_0(backend_libs__interval__GoalInfo_13);
    }
#line 585 "interval.m"
#line 585 "interval.m"
    switch (backend_libs__interval__CodeModel_33) {
#line 585 "interval.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 585 "interval.m"
      case (MR_Integer) 0:
#line 586 "interval.m"
        backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 585 "interval.m"
        break;
#line 585 "interval.m"
      case (MR_Integer) 2:
#line 584 "interval.m"
        {
#line 584 "interval.m"
          backend_libs__interval__record_model_non_anchor_3_p_0(*backend_libs__interval__EndAnchor_17, backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46);
        }
#line 585 "interval.m"
        break;
#line 585 "interval.m"
      case (MR_Integer) 1:
#line 587 "interval.m"
        backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 585 "interval.m"
        break;
#line 585 "interval.m"
    }
#line 590 "interval.m"
    {
#line 590 "interval.m"
      backend_libs__interval__no_open_intervals_2_p_0(backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47);
    }
#line 591 "interval.m"
    {
#line 591 "interval.m"
      backend_libs__interval__get_cur_interval_2_p_0(backend_libs__interval__AfterIntervalId_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47);
    }
#line 592 "interval.m"
    {
#line 592 "interval.m"
      backend_libs__interval__record_interval_start_4_p_0(*backend_libs__interval__AfterIntervalId_19, *backend_libs__interval__EndAnchor_17, backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48);
    }
#line 593 "interval.m"
    {
#line 593 "interval.m"
      backend_libs__interval__new_interval_id_3_p_0(backend_libs__interval__BeforeIntervalId_18, backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_35);
    }
#line 555 "interval.m"
    *backend_libs__interval__STATE_VARIABLE_Acc_37 = backend_libs__interval__STATE_VARIABLE_Acc_0_36;
#line 555 "interval.m"
  }
#line 547 "interval.m"
}

#line 498 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(
#line 498 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27,
#line 498 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 498 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3,
#line 498 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_4,
#line 498 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_5,
#line 498 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_6)
#line 498 "interval.m"
{
#line 502 "interval.m"
  {
#line 502 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 502 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 502 "interval.m"
      {
#line 502 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_Acc_6 = backend_libs__interval__STATE_VARIABLE_Acc_0_5;
#line 502 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_IntervalInfo_4 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3;
#line 502 "interval.m"
      }
#line 502 "interval.m"
    else
#line 503 "interval.m"
      {
#line 503 "interval.m"
        MR_Word backend_libs__interval__Goal_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 503 "interval.m"
        MR_Word backend_libs__interval__Goals_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 503 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_23_23;
#line 503 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_24_24;

#line 508 "interval.m"
        {
#line 508 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27, backend_libs__interval__Goals_15, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_3, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_23_23, backend_libs__interval__STATE_VARIABLE_Acc_0_5, &backend_libs__interval__STATE_VARIABLE_Acc_24_24);
        }
#line 509 "interval.m"
        {
#line 509 "interval.m"
          backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_27, backend_libs__interval__Goal_14, backend_libs__interval__STATE_VARIABLE_IntervalInfo_23_23, backend_libs__interval__STATE_VARIABLE_IntervalInfo_4, backend_libs__interval__STATE_VARIABLE_Acc_24_24, backend_libs__interval__STATE_VARIABLE_Acc_6);
        }
#line 503 "interval.m"
      }
#line 502 "interval.m"
  }
#line 498 "interval.m"
}

#line 442 "interval.m"
static void MR_CALL 
backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(
#line 442 "interval.m"
  MR_Word backend_libs__interval__Inputs_8,
#line 442 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedAcrossCall_9,
#line 442 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_10,
#line 442 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26,
#line 442 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_27,
#line 442 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_28,
#line 442 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_29)
#line 442 "interval.m"
{
#line 448 "interval.m"
  {
#line 448 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 491 "interval.m"
    if ((backend_libs__interval__MaybeNeedAcrossCall_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "interval.m"
      {
#line 493 "interval.m"
        {
#line 493 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_at_call\'/7", (MR_String) "no need across call");
#line 493 "interval.m"
          return;
        }
#line 492 "interval.m"
      }
#line 491 "interval.m"
    else
#line 450 "interval.m"
      {
#line 450 "interval.m"
        MR_Word backend_libs__interval__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 450 "interval.m"
        MR_Word backend_libs__interval__NeedAcrossCall_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeNeedAcrossCall_9, (MR_Integer) 0)));
#line 450 "interval.m"
        MR_Word backend_libs__interval__ForwardVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__NeedAcrossCall_13, (MR_Integer) 0)));
#line 450 "interval.m"
        MR_Word backend_libs__interval__ResumeVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__NeedAcrossCall_13, (MR_Integer) 1)));
#line 450 "interval.m"
        MR_Word backend_libs__interval__NondetLiveVars_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__NeedAcrossCall_13, (MR_Integer) 2)));
#line 450 "interval.m"
        MR_Word backend_libs__interval__VarsOnStack0_17;
#line 450 "interval.m"
        MR_Word backend_libs__interval__GoalId_18;
#line 450 "interval.m"
        MR_Word backend_libs__interval__CallAnchor_19;
#line 450 "interval.m"
        MR_Word backend_libs__interval__AfterCallId_20;
#line 450 "interval.m"
        MR_Word backend_libs__interval__BeforeCallId_21;
#line 450 "interval.m"
        MR_Word backend_libs__interval__InstMapDelta_22;
#line 450 "interval.m"
        MR_Word backend_libs__interval__IntParams_23;
#line 450 "interval.m"
        MR_Word backend_libs__interval__VarsOnStack_24;
#line 450 "interval.m"
        MR_Word backend_libs__interval__CodeModel_25;
#line 450 "interval.m"
        MR_Word backend_libs__interval__V_33_33;
#line 450 "interval.m"
        MR_Word backend_libs__interval__V_34_34;
#line 450 "interval.m"
        MR_Word backend_libs__interval__V_35_35;
#line 450 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_37_37;
#line 450 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 450 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39;
#line 450 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41;
#line 450 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_43_43;
#line 450 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44;
#line 450 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45;
#line 450 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46;
#line 450 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47;
#line 450 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48;
#line 716 "interval.m"
        MR_Word backend_libs__interval__V_70_70;
#line 716 "interval.m"
        MR_Word backend_libs__interval__V_71_71;
#line 716 "interval.m"
        MR_Word backend_libs__interval__V_72_72;
#line 716 "interval.m"
        MR_Word backend_libs__interval__V_73_73;
#line 716 "interval.m"
        MR_Word backend_libs__interval__V_74_74;
#line 716 "interval.m"
        MR_Word backend_libs__interval__V_75_75;
#line 716 "interval.m"
        MR_Word backend_libs__interval__V_76_76;
#line 716 "interval.m"
        MR_Word backend_libs__interval__V_77_77;
#line 716 "interval.m"
        MR_Word backend_libs__interval__V_78_78;
#line 716 "interval.m"
        MR_Word backend_libs__interval__V_79_79;
#line 716 "interval.m"
        MR_Word backend_libs__interval__V_80_80;
#line 716 "interval.m"
        MR_Word backend_libs__interval__V_81_81;
#line 716 "interval.m"
        MR_Word backend_libs__interval__V_82_82;
#line 716 "interval.m"
        MR_Word backend_libs__interval__V_83_83;
#line 716 "interval.m"
        MR_Word backend_libs__interval__V_84_84;
#line 462 "interval.m"
        MR_Word backend_libs__interval__V_50_50;
#line 462 "interval.m"
        MR_Word backend_libs__interval__V_51_51;
#line 462 "interval.m"
        MR_Word backend_libs__interval__V_52_52;
#line 462 "interval.m"
        MR_Word backend_libs__interval__V_53_53;
#line 462 "interval.m"
        MR_Word backend_libs__interval__V_54_54;
#line 462 "interval.m"
        MR_Word backend_libs__interval__V_55_55;
#line 462 "interval.m"
        MR_Word backend_libs__interval__V_56_56;
#line 462 "interval.m"
        MR_Word backend_libs__interval__V_57_57;
#line 462 "interval.m"
        MR_Word backend_libs__interval__V_58_58;
#line 462 "interval.m"
        MR_Word backend_libs__interval__V_59_59;
#line 462 "interval.m"
        MR_Word backend_libs__interval__V_60_60;
#line 462 "interval.m"
        MR_Word backend_libs__interval__V_61_61;
#line 462 "interval.m"
        MR_Word backend_libs__interval__V_62_62;
#line 462 "interval.m"
        MR_Word backend_libs__interval__V_63_63;
#line 462 "interval.m"
        MR_Word backend_libs__interval__V_64_64;

#line 454 "interval.m"
        {
#line 454 "interval.m"
          backend_libs__interval__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_35_35, 0) = ((MR_Box) (backend_libs__interval__NondetLiveVars_16));
#line 454 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 454 "interval.m"
        }
#line 453 "interval.m"
        {
#line 453 "interval.m"
          backend_libs__interval__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_34_34, 0) = ((MR_Box) (backend_libs__interval__ResumeVars_15));
#line 453 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_34_34, 1) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 453 "interval.m"
        }
#line 453 "interval.m"
        {
#line 453 "interval.m"
          backend_libs__interval__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_33_33, 0) = ((MR_Box) (backend_libs__interval__ForwardVars_14));
#line 453 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_33_33, 1) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 453 "interval.m"
        }
#line 453 "interval.m"
        {
#line 453 "interval.m"
          backend_libs__interval__VarsOnStack0_17 = parse_tree__set_of_var__union_list_1_f_0(backend_libs__interval__TypeCtorInfo_68_68, backend_libs__interval__V_33_33);
        }
#line 455 "interval.m"
        {
#line 455 "interval.m"
          backend_libs__interval__GoalId_18 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_10);
        }
#line 456 "interval.m"
        {
#line 456 "interval.m"
          backend_libs__interval__CallAnchor_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__CallAnchor_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 456 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__CallAnchor_19, 1) = ((MR_Box) (backend_libs__interval__GoalId_18));
#line 456 "interval.m"
        }
#line 716 "interval.m"
        backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 0)));
#line 716 "interval.m"
        backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 1)));
#line 716 "interval.m"
        backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 2)));
#line 716 "interval.m"
        backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 3)));
#line 716 "interval.m"
        backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 4)));
#line 716 "interval.m"
        backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 5)));
#line 716 "interval.m"
        backend_libs__interval__AfterCallId_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 6)));
#line 716 "interval.m"
        backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 7)));
#line 716 "interval.m"
        backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 8)));
#line 716 "interval.m"
        backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 9)));
#line 716 "interval.m"
        backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 10)));
#line 716 "interval.m"
        backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 11)));
#line 716 "interval.m"
        backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 12)));
#line 716 "interval.m"
        backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 13)));
#line 716 "interval.m"
        backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 14)));
#line 716 "interval.m"
        backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, (MR_Integer) 15)));
#line 458 "interval.m"
        {
#line 458 "interval.m"
          backend_libs__interval__new_interval_id_3_p_0(&backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_26, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_37_37);
        }
#line 459 "interval.m"
        {
#line 459 "interval.m"
          backend_libs__interval__record_interval_start_4_p_0(backend_libs__interval__AfterCallId_20, backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_37_37, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
        }
#line 460 "interval.m"
        {
#line 460 "interval.m"
          backend_libs__interval__record_interval_end_4_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39);
        }
#line 461 "interval.m"
        {
#line 461 "interval.m"
          backend_libs__interval__InstMapDelta_22 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(backend_libs__interval__GoalInfo_10);
        }
#line 462 "interval.m"
        backend_libs__interval__IntParams_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 0)));
#line 462 "interval.m"
        backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 1)));
#line 462 "interval.m"
        backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 2)));
#line 462 "interval.m"
        backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 3)));
#line 462 "interval.m"
        backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 4)));
#line 462 "interval.m"
        backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 5)));
#line 462 "interval.m"
        backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 6)));
#line 462 "interval.m"
        backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 7)));
#line 462 "interval.m"
        backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 8)));
#line 462 "interval.m"
        backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 9)));
#line 462 "interval.m"
        backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 10)));
#line 462 "interval.m"
        backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 11)));
#line 462 "interval.m"
        backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 12)));
#line 462 "interval.m"
        backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 13)));
#line 462 "interval.m"
        backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 14)));
#line 462 "interval.m"
        backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, (MR_Integer) 15)));
#line 464 "interval.m"
        {
#line 464 "interval.m"
          backend_libs__interval__succeeded = hlds__instmap__instmap_delta_is_reachable_1_p_0(backend_libs__interval__InstMapDelta_22);
        }
#line 465 "interval.m"
        if (!(backend_libs__interval__succeeded))
#line 465 "interval.m"
          {
#line 465 "interval.m"
            MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_23, (MR_Integer) 2)));
#line 465 "interval.m"
            MR_Word backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_23, (MR_Integer) 0)));
#line 465 "interval.m"
            MR_Word backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_23, (MR_Integer) 1)));

#line 465 "interval.m"
            backend_libs__interval__succeeded = (backend_libs__interval__V_40_40 == (MR_Integer) 0);
#line 465 "interval.m"
          }
#line 463 "interval.m"
        if (backend_libs__interval__succeeded)
#line 468 "interval.m"
          {
#line 468 "interval.m"
            {
#line 468 "interval.m"
              backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__AfterCallId_20, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41);
            }
#line 469 "interval.m"
            backend_libs__interval__VarsOnStack_24 = backend_libs__interval__VarsOnStack0_17;
#line 468 "interval.m"
          }
#line 463 "interval.m"
        else
#line 473 "interval.m"
          {
#line 473 "interval.m"
            {
#line 473 "interval.m"
              backend_libs__interval__record_interval_no_succ_3_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41);
            }
#line 474 "interval.m"
            {
#line 474 "interval.m"
              backend_libs__interval__VarsOnStack_24 = parse_tree__set_of_var__init_0_f_0(backend_libs__interval__TypeCtorInfo_68_68);
            }
#line 473 "interval.m"
          }
#line 476 "interval.m"
        {
#line 476 "interval.m"
          backend_libs__interval__set_cur_interval_3_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_43_43);
        }
#line 477 "interval.m"
        {
#line 477 "interval.m"
          backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_43_43, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44);
        }
#line 478 "interval.m"
        {
#line 478 "interval.m"
          backend_libs__interval__CodeModel_25 = hlds__code_model__goal_info_get_code_model_1_f_0(backend_libs__interval__GoalInfo_10);
        }
#line 482 "interval.m"
#line 482 "interval.m"
        switch (backend_libs__interval__CodeModel_25) {
#line 482 "interval.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 482 "interval.m"
          case (MR_Integer) 0:
#line 483 "interval.m"
            backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44;
#line 482 "interval.m"
            break;
#line 482 "interval.m"
          case (MR_Integer) 2:
#line 481 "interval.m"
            {
#line 481 "interval.m"
              backend_libs__interval__record_model_non_anchor_3_p_0(backend_libs__interval__CallAnchor_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45);
            }
#line 482 "interval.m"
            break;
#line 482 "interval.m"
          case (MR_Integer) 1:
#line 484 "interval.m"
            backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_44_44;
#line 482 "interval.m"
            break;
#line 482 "interval.m"
        }
#line 487 "interval.m"
        {
#line 487 "interval.m"
          backend_libs__interval__one_open_interval_3_p_0(backend_libs__interval__BeforeCallId_21, backend_libs__interval__STATE_VARIABLE_IntervalInfo_45_45, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46);
        }
#line 488 "interval.m"
        {
#line 488 "interval.m"
          backend_libs__interval__require_flushed_3_p_0(backend_libs__interval__VarsOnStack_24, backend_libs__interval__STATE_VARIABLE_IntervalInfo_46_46, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47);
        }
#line 489 "interval.m"
        {
#line 489 "interval.m"
          backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__Inputs_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_47_47, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48);
        }
#line 490 "interval.m"
        {
#line 490 "interval.m"
          backend_libs__interval__require_access_3_p_0(backend_libs__interval__Inputs_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_48_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_27);
        }
#line 450 "interval.m"
      }
#line 448 "interval.m"
    *backend_libs__interval__STATE_VARIABLE_Acc_29 = backend_libs__interval__STATE_VARIABLE_Acc_0_28;
#line 448 "interval.m"
  }
#line 442 "interval.m"
}

#line 1336 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1336__1_2_p_0(
#line 1336 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_31,
#line 1336 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_32)
#line 1336 "interval.m"
{
#line 1336 "interval.m"
  {
#line 1336 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1336 "interval.m"
    {
#line 1336 "interval.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVar__1_31, backend_libs__interval__HeadVar__2_32);
    }
#line 1336 "interval.m"
  }
#line 1336 "interval.m"
}

#line 1323 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_deletion__1323__1_2_p_0(
#line 1323 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_16,
#line 1323 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_17)
#line 1323 "interval.m"
{
#line 1323 "interval.m"
  {
#line 1323 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1323 "interval.m"
    {
#line 1323 "interval.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVar__1_16, backend_libs__interval__HeadVar__2_17);
    }
#line 1323 "interval.m"
  }
#line 1323 "interval.m"
}

#line 1303 "interval.m"
static void MR_CALL 
backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1303__1_2_p_0(
#line 1303 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_154,
#line 1303 "interval.m"
  MR_Integer * backend_libs__interval__HeadVar__2_155)
#line 1303 "interval.m"
{
#line 1303 "interval.m"
  {
#line 1303 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1303 "interval.m"
    {
#line 1303 "interval.m"
      mercury__term__var_to_int_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVar__1_154, backend_libs__interval__HeadVar__2_155);
    }
#line 1303 "interval.m"
  }
#line 1303 "interval.m"
}

#line 56 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____save_point_type_0_0(
#line 56 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 56 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 56 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 56 "interval.m"
{
#line 56 "interval.m"
  {
#line 56 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 56 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar1_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 56 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar2_5 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 56 "interval.m"
    {
#line 56 "interval.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__Cast_HeadVar1_4, backend_libs__interval__Cast_HeadVar2_5);
    }
#line 56 "interval.m"
  }
#line 56 "interval.m"
}

#line 56 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_type_0_0(
#line 56 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_1,
#line 56 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 56 "interval.m"
{
#line 5599 "backend_libs.interval.c"
  {
#line 5601 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 5604 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 5606 "backend_libs.interval.c"
  }
#line 56 "interval.m"
}

#line 60 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____save_point_0_0(
#line 60 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 60 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 60 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 60 "interval.m"
{
#line 60 "interval.m"
  {
#line 60 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 60 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 60 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 60 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 60 "interval.m"
    if (backend_libs__interval__succeeded)
#line 5635 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 60 "interval.m"
    else
#line 60 "interval.m"
      {
#line 60 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 60 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 60 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 60 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 60 "interval.m"
        MR_Word backend_libs__interval__V_8_8;
#line 60 "interval.m"
        MR_Integer backend_libs__interval__V_13_13 = (MR_Integer) backend_libs__interval__V_4_4;
#line 60 "interval.m"
        MR_Integer backend_libs__interval__V_14_14 = (MR_Integer) backend_libs__interval__V_6_6;

#line 60 "interval.m"
        {
#line 60 "interval.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__interval__V_8_8, backend_libs__interval__V_13_13, backend_libs__interval__V_14_14);
        }
#line 5661 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_8_8 == (MR_Integer) 0);
#line 60 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 60 "interval.m"
        if (backend_libs__interval__succeeded)
#line 60 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_8_8;
#line 60 "interval.m"
        else
#line 60 "interval.m"
          {
#line 60 "interval.m"
            MR_Integer backend_libs__interval__V_15_15 = (MR_Integer) backend_libs__interval__V_5_5;
#line 60 "interval.m"
            MR_Integer backend_libs__interval__V_16_16 = (MR_Integer) backend_libs__interval__V_7_7;

#line 60 "interval.m"
            {
#line 60 "interval.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_15_15, backend_libs__interval__V_16_16);
            }
#line 60 "interval.m"
          }
#line 60 "interval.m"
      }
#line 60 "interval.m"
  }
#line 60 "interval.m"
}

#line 60 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____save_point_0_0(
#line 60 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 60 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 60 "interval.m"
{
#line 60 "interval.m"
  {
#line 60 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 60 "interval.m"
    MR_Integer backend_libs__interval__CastX_7 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 60 "interval.m"
    MR_Integer backend_libs__interval__CastY_8 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 60 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_7 == backend_libs__interval__CastY_8);
#line 60 "interval.m"
    if (backend_libs__interval__succeeded)
#line 60 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 60 "interval.m"
    else
#line 60 "interval.m"
      {
#line 60 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 60 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 60 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 60 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 60 "interval.m"
        MR_Integer backend_libs__interval__V_10_10;
#line 60 "interval.m"
        MR_Integer backend_libs__interval__V_11_11;

#line 5733 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_3_3 == backend_libs__interval__V_5_5);
#line 60 "interval.m"
        if (backend_libs__interval__succeeded)
#line 60 "interval.m"
          {
#line 5739 "backend_libs.interval.c"
            backend_libs__interval__V_10_10 = (MR_Integer) backend_libs__interval__V_4_4;
#line 5741 "backend_libs.interval.c"
            backend_libs__interval__V_11_11 = (MR_Integer) backend_libs__interval__V_6_6;
#line 5743 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_10_10 == backend_libs__interval__V_11_11);
#line 60 "interval.m"
          }
#line 60 "interval.m"
      }
#line 60 "interval.m"
    return backend_libs__interval__succeeded;
#line 60 "interval.m"
  }
#line 60 "interval.m"
}

#line 73 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____resume_save_status_0_0(
#line 73 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 73 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 73 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 73 "interval.m"
{
#line 73 "interval.m"
  {
#line 73 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 73 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar1_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 73 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar2_5 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 73 "interval.m"
    {
#line 73 "interval.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__Cast_HeadVar1_4, backend_libs__interval__Cast_HeadVar2_5);
    }
#line 73 "interval.m"
  }
#line 73 "interval.m"
}

#line 73 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____resume_save_status_0_0(
#line 73 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_1,
#line 73 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 73 "interval.m"
{
#line 5795 "backend_libs.interval.c"
  {
#line 5797 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 5800 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 5802 "backend_libs.interval.c"
  }
#line 73 "interval.m"
}

#line 156 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____rename_map_0_0(
#line 156 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 156 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 156 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 156 "interval.m"
{
#line 156 "interval.m"
  {
#line 156 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 156 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar1_4 = backend_libs__interval__HeadVar__2_2;
#line 156 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar2_5 = backend_libs__interval__HeadVar__3_3;

#line 156 "interval.m"
    {
#line 156 "interval.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[11], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__interval__Cast_HeadVar2_5)));
    }
#line 156 "interval.m"
  }
#line 156 "interval.m"
}

#line 156 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____rename_map_0_0(
#line 156 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 156 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 156 "interval.m"
{
#line 156 "interval.m"
  {
#line 156 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 156 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar1_3 = backend_libs__interval__HeadVar__1_1;
#line 156 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar2_4 = backend_libs__interval__HeadVar__2_2;

#line 156 "interval.m"
    {
#line 156 "interval.m"
      backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_2[11], ((MR_Box) (backend_libs__interval__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__interval__Cast_HeadVar2_4)));
    }
#line 156 "interval.m"
    return backend_libs__interval__succeeded;
#line 156 "interval.m"
  }
#line 156 "interval.m"
}

#line 137 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____maybe_needs_flush_0_0(
#line 137 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 137 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 137 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 137 "interval.m"
{
#line 137 "interval.m"
  {
#line 137 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 137 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar1_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 137 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar2_5 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 137 "interval.m"
    {
#line 137 "interval.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__Cast_HeadVar1_4, backend_libs__interval__Cast_HeadVar2_5);
    }
#line 137 "interval.m"
  }
#line 137 "interval.m"
}

#line 137 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____maybe_needs_flush_0_0(
#line 137 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_1,
#line 137 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 137 "interval.m"
{
#line 5906 "backend_libs.interval.c"
  {
#line 5908 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 5911 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 5913 "backend_libs.interval.c"
  }
#line 137 "interval.m"
}

#line 871 "interval.m"
static void MR_CALL 
backend_libs__interval____Compare____interval_var_info_0_0(
#line 871 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 871 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 871 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 871 "interval.m"
{
#line 871 "interval.m"
  {
#line 871 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 871 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 871 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 871 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 871 "interval.m"
    if (backend_libs__interval__succeeded)
#line 5942 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 871 "interval.m"
    else
#line 871 "interval.m"
      {
#line 871 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 871 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 871 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 871 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 871 "interval.m"
        MR_Word backend_libs__interval__V_8_8;

#line 871 "interval.m"
        {
#line 871 "interval.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[7], &backend_libs__interval__V_8_8, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
        }
#line 5964 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_8_8 == (MR_Integer) 0);
#line 871 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 871 "interval.m"
        if (backend_libs__interval__succeeded)
#line 871 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_8_8;
#line 871 "interval.m"
        else
#line 871 "interval.m"
          {
#line 871 "interval.m"
            {
#line 871 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[10], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_7_7)));
            }
#line 871 "interval.m"
          }
#line 871 "interval.m"
      }
#line 871 "interval.m"
  }
#line 871 "interval.m"
}

#line 871 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval____Unify____interval_var_info_0_0(
#line 871 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 871 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 871 "interval.m"
{
#line 871 "interval.m"
  {
#line 871 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 871 "interval.m"
    MR_Integer backend_libs__interval__CastX_7 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 871 "interval.m"
    MR_Integer backend_libs__interval__CastY_8 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 871 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_7 == backend_libs__interval__CastY_8);
#line 871 "interval.m"
    if (backend_libs__interval__succeeded)
#line 871 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 871 "interval.m"
    else
#line 871 "interval.m"
      {
#line 871 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_10_10;
#line 871 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 871 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 871 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 871 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 6029 "backend_libs.interval.c"
        {
#line 6031 "backend_libs.interval.c"
          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[7], ((MR_Box) (backend_libs__interval__V_3_3)), ((MR_Box) (backend_libs__interval__V_5_5)));
        }
#line 871 "interval.m"
        if (backend_libs__interval__succeeded)
#line 871 "interval.m"
          {
#line 6038 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_10_10 = (MR_Word) &backend_libs__interval_scalar_common_2[10];
#line 6040 "backend_libs.interval.c"
            {
#line 6042 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_10_10, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
            }
#line 871 "interval.m"
          }
#line 871 "interval.m"
      }
#line 871 "interval.m"
    return backend_libs__interval__succeeded;
#line 871 "interval.m"
  }
#line 871 "interval.m"
}

#line 109 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____interval_params_0_0(
#line 109 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 109 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 109 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 109 "interval.m"
{
#line 109 "interval.m"
  {
#line 109 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 109 "interval.m"
    MR_Integer backend_libs__interval__CastX_12 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 109 "interval.m"
    MR_Integer backend_libs__interval__CastY_13 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 109 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_12 == backend_libs__interval__CastY_13);
#line 109 "interval.m"
    if (backend_libs__interval__succeeded)
#line 6080 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 109 "interval.m"
    else
#line 109 "interval.m"
      {
#line 109 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 109 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 109 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 109 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 109 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 109 "interval.m"
        MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 2)));
#line 109 "interval.m"
        MR_Word backend_libs__interval__V_10_10;

#line 109 "interval.m"
        {
#line 109 "interval.m"
          hlds__hlds_module____Compare____module_info_0_0(&backend_libs__interval__V_10_10, backend_libs__interval__V_4_4, backend_libs__interval__V_7_7);
        }
#line 6106 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_10_10 == (MR_Integer) 0);
#line 109 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 109 "interval.m"
        if (backend_libs__interval__succeeded)
#line 109 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_10_10;
#line 109 "interval.m"
        else
#line 109 "interval.m"
          {
#line 109 "interval.m"
            MR_Word backend_libs__interval__V_11_11;

#line 109 "interval.m"
            {
#line 109 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[10], &backend_libs__interval__V_11_11, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_8_8)));
            }
#line 6126 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_11_11 == (MR_Integer) 0);
#line 109 "interval.m"
            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 109 "interval.m"
            if (backend_libs__interval__succeeded)
#line 109 "interval.m"
              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_11_11;
#line 109 "interval.m"
            else
#line 109 "interval.m"
              {
#line 109 "interval.m"
                MR_Integer backend_libs__interval__V_17_17 = (MR_Integer) backend_libs__interval__V_6_6;
#line 109 "interval.m"
                MR_Integer backend_libs__interval__V_18_18 = (MR_Integer) backend_libs__interval__V_9_9;

#line 109 "interval.m"
                {
#line 109 "interval.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_17_17, backend_libs__interval__V_18_18);
                }
#line 109 "interval.m"
              }
#line 109 "interval.m"
          }
#line 109 "interval.m"
      }
#line 109 "interval.m"
  }
#line 109 "interval.m"
}

#line 109 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____interval_params_0_0(
#line 109 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 109 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 109 "interval.m"
{
#line 109 "interval.m"
  {
#line 109 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 109 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 109 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 109 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 109 "interval.m"
    if (backend_libs__interval__succeeded)
#line 109 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 109 "interval.m"
    else
#line 109 "interval.m"
      {
#line 109 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_12_12;
#line 109 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 109 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 109 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 2)));
#line 109 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 109 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 109 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));

#line 6202 "backend_libs.interval.c"
        {
#line 6204 "backend_libs.interval.c"
          backend_libs__interval__succeeded = hlds__hlds_module____Unify____module_info_0_0(backend_libs__interval__V_3_3, backend_libs__interval__V_6_6);
        }
#line 109 "interval.m"
        if (backend_libs__interval__succeeded)
#line 109 "interval.m"
          {
#line 6211 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_12_12 = (MR_Word) &backend_libs__interval_scalar_common_2[10];
#line 6213 "backend_libs.interval.c"
            {
#line 6215 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_12_12, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_7_7)));
            }
#line 109 "interval.m"
            if (backend_libs__interval__succeeded)
#line 6220 "backend_libs.interval.c"
              backend_libs__interval__succeeded = (backend_libs__interval__V_5_5 == backend_libs__interval__V_8_8);
#line 109 "interval.m"
          }
#line 109 "interval.m"
      }
#line 109 "interval.m"
    return backend_libs__interval__succeeded;
#line 109 "interval.m"
  }
#line 109 "interval.m"
}

#line 116 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____interval_info_0_0(
#line 116 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 116 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 116 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 116 "interval.m"
{
#line 116 "interval.m"
  {
#line 116 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 116 "interval.m"
    MR_Integer backend_libs__interval__CastX_51 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 116 "interval.m"
    MR_Integer backend_libs__interval__CastY_52 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 116 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_51 == backend_libs__interval__CastY_52);
#line 116 "interval.m"
    if (backend_libs__interval__succeeded)
#line 6257 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 116 "interval.m"
    else
#line 116 "interval.m"
      {
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 3)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 4)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 5)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 6)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 7)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 8)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 9)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 10)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 11)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 12)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 13)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 14)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 15)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 2)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 3)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 4)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 5)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 6)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 7)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 8)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 9)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 10)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 11)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 12)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 13)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 14)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 15)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_36_36;

#line 116 "interval.m"
        {
#line 116 "interval.m"
          backend_libs__interval____Compare____interval_params_0_0(&backend_libs__interval__V_36_36, backend_libs__interval__V_4_4, backend_libs__interval__V_20_20);
        }
#line 6335 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_36_36 == (MR_Integer) 0);
#line 116 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 116 "interval.m"
        if (backend_libs__interval__succeeded)
#line 116 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_36_36;
#line 116 "interval.m"
        else
#line 116 "interval.m"
          {
#line 116 "interval.m"
            MR_Word backend_libs__interval__V_37_37;

#line 116 "interval.m"
            {
#line 116 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], &backend_libs__interval__V_37_37, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_21_21)));
            }
#line 6355 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_37_37 == (MR_Integer) 0);
#line 116 "interval.m"
            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 116 "interval.m"
            if (backend_libs__interval__succeeded)
#line 116 "interval.m"
              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_37_37;
#line 116 "interval.m"
            else
#line 116 "interval.m"
              {
#line 116 "interval.m"
                MR_Word backend_libs__interval__V_38_38;

#line 116 "interval.m"
                {
#line 116 "interval.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], &backend_libs__interval__V_38_38, ((MR_Box) (backend_libs__interval__V_6_6)), ((MR_Box) (backend_libs__interval__V_22_22)));
                }
#line 6375 "backend_libs.interval.c"
                backend_libs__interval__succeeded = (backend_libs__interval__V_38_38 == (MR_Integer) 0);
#line 116 "interval.m"
                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 116 "interval.m"
                if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                  *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_38_38;
#line 116 "interval.m"
                else
#line 116 "interval.m"
                  {
#line 116 "interval.m"
                    MR_Word backend_libs__interval__V_39_39;

#line 116 "interval.m"
                    {
#line 116 "interval.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[2], &backend_libs__interval__V_39_39, ((MR_Box) (backend_libs__interval__V_7_7)), ((MR_Box) (backend_libs__interval__V_23_23)));
                    }
#line 6395 "backend_libs.interval.c"
                    backend_libs__interval__succeeded = (backend_libs__interval__V_39_39 == (MR_Integer) 0);
#line 116 "interval.m"
                    backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 116 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                      *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_39_39;
#line 116 "interval.m"
                    else
#line 116 "interval.m"
                      {
#line 116 "interval.m"
                        MR_Word backend_libs__interval__V_40_40;

#line 116 "interval.m"
                        {
#line 116 "interval.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[3], &backend_libs__interval__V_40_40, ((MR_Box) (backend_libs__interval__V_8_8)), ((MR_Box) (backend_libs__interval__V_24_24)));
                        }
#line 6415 "backend_libs.interval.c"
                        backend_libs__interval__succeeded = (backend_libs__interval__V_40_40 == (MR_Integer) 0);
#line 116 "interval.m"
                        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 116 "interval.m"
                        if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_40_40;
#line 116 "interval.m"
                        else
#line 116 "interval.m"
                          {
#line 116 "interval.m"
                            MR_Word backend_libs__interval__V_41_41;

#line 116 "interval.m"
                            {
#line 116 "interval.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[4], &backend_libs__interval__V_41_41, ((MR_Box) (backend_libs__interval__V_9_9)), ((MR_Box) (backend_libs__interval__V_25_25)));
                            }
#line 6435 "backend_libs.interval.c"
                            backend_libs__interval__succeeded = (backend_libs__interval__V_41_41 == (MR_Integer) 0);
#line 116 "interval.m"
                            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 116 "interval.m"
                            if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_41_41;
#line 116 "interval.m"
                            else
#line 116 "interval.m"
                              {
#line 116 "interval.m"
                                MR_Word backend_libs__interval__V_42_42;
#line 116 "interval.m"
                                MR_Integer backend_libs__interval__V_69_69 = (MR_Integer) backend_libs__interval__V_10_10;
#line 116 "interval.m"
                                MR_Integer backend_libs__interval__V_70_70 = (MR_Integer) backend_libs__interval__V_26_26;

#line 116 "interval.m"
                                {
#line 116 "interval.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__interval__V_42_42, backend_libs__interval__V_69_69, backend_libs__interval__V_70_70);
                                }
#line 6459 "backend_libs.interval.c"
                                backend_libs__interval__succeeded = (backend_libs__interval__V_42_42 == (MR_Integer) 0);
#line 116 "interval.m"
                                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 116 "interval.m"
                                if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                  *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_42_42;
#line 116 "interval.m"
                                else
#line 116 "interval.m"
                                  {
#line 116 "interval.m"
                                    MR_Word backend_libs__interval__V_43_43;

#line 116 "interval.m"
                                    {
#line 116 "interval.m"
                                      mercury__counter____Compare____counter_0_0(&backend_libs__interval__V_43_43, backend_libs__interval__V_11_11, backend_libs__interval__V_27_27);
                                    }
#line 6479 "backend_libs.interval.c"
                                    backend_libs__interval__succeeded = (backend_libs__interval__V_43_43 == (MR_Integer) 0);
#line 116 "interval.m"
                                    backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 116 "interval.m"
                                    if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                      *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_43_43;
#line 116 "interval.m"
                                    else
#line 116 "interval.m"
                                      {
#line 116 "interval.m"
                                        MR_Word backend_libs__interval__V_44_44;

#line 116 "interval.m"
                                        {
#line 116 "interval.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[5], &backend_libs__interval__V_44_44, ((MR_Box) (backend_libs__interval__V_12_12)), ((MR_Box) (backend_libs__interval__V_28_28)));
                                        }
#line 6499 "backend_libs.interval.c"
                                        backend_libs__interval__succeeded = (backend_libs__interval__V_44_44 == (MR_Integer) 0);
#line 116 "interval.m"
                                        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 116 "interval.m"
                                        if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_44_44;
#line 116 "interval.m"
                                        else
#line 116 "interval.m"
                                          {
#line 116 "interval.m"
                                            MR_Word backend_libs__interval__V_45_45;

#line 116 "interval.m"
                                            {
#line 116 "interval.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[5], &backend_libs__interval__V_45_45, ((MR_Box) (backend_libs__interval__V_13_13)), ((MR_Box) (backend_libs__interval__V_29_29)));
                                            }
#line 6519 "backend_libs.interval.c"
                                            backend_libs__interval__succeeded = (backend_libs__interval__V_45_45 == (MR_Integer) 0);
#line 116 "interval.m"
                                            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 116 "interval.m"
                                            if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_45_45;
#line 116 "interval.m"
                                            else
#line 116 "interval.m"
                                              {
#line 116 "interval.m"
                                                MR_Word backend_libs__interval__V_46_46;

#line 116 "interval.m"
                                                {
#line 116 "interval.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[6], &backend_libs__interval__V_46_46, ((MR_Box) (backend_libs__interval__V_14_14)), ((MR_Box) (backend_libs__interval__V_30_30)));
                                                }
#line 6539 "backend_libs.interval.c"
                                                backend_libs__interval__succeeded = (backend_libs__interval__V_46_46 == (MR_Integer) 0);
#line 116 "interval.m"
                                                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 116 "interval.m"
                                                if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                                  *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_46_46;
#line 116 "interval.m"
                                                else
#line 116 "interval.m"
                                                  {
#line 116 "interval.m"
                                                    MR_Word backend_libs__interval__V_47_47;

#line 116 "interval.m"
                                                    {
#line 116 "interval.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[6], &backend_libs__interval__V_47_47, ((MR_Box) (backend_libs__interval__V_15_15)), ((MR_Box) (backend_libs__interval__V_31_31)));
                                                    }
#line 6559 "backend_libs.interval.c"
                                                    backend_libs__interval__succeeded = (backend_libs__interval__V_47_47 == (MR_Integer) 0);
#line 116 "interval.m"
                                                    backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 116 "interval.m"
                                                    if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                                      *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_47_47;
#line 116 "interval.m"
                                                    else
#line 116 "interval.m"
                                                      {
#line 116 "interval.m"
                                                        MR_Word backend_libs__interval__V_48_48;

#line 116 "interval.m"
                                                        {
#line 116 "interval.m"
                                                          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[6], &backend_libs__interval__V_48_48, ((MR_Box) (backend_libs__interval__V_16_16)), ((MR_Box) (backend_libs__interval__V_32_32)));
                                                        }
#line 6579 "backend_libs.interval.c"
                                                        backend_libs__interval__succeeded = (backend_libs__interval__V_48_48 == (MR_Integer) 0);
#line 116 "interval.m"
                                                        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 116 "interval.m"
                                                        if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                                          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_48_48;
#line 116 "interval.m"
                                                        else
#line 116 "interval.m"
                                                          {
#line 116 "interval.m"
                                                            MR_Word backend_libs__interval__V_49_49;

#line 116 "interval.m"
                                                            {
#line 116 "interval.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[7], &backend_libs__interval__V_49_49, ((MR_Box) (backend_libs__interval__V_17_17)), ((MR_Box) (backend_libs__interval__V_33_33)));
                                                            }
#line 6599 "backend_libs.interval.c"
                                                            backend_libs__interval__succeeded = (backend_libs__interval__V_49_49 == (MR_Integer) 0);
#line 116 "interval.m"
                                                            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 116 "interval.m"
                                                            if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                                              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_49_49;
#line 116 "interval.m"
                                                            else
#line 116 "interval.m"
                                                              {
#line 116 "interval.m"
                                                                MR_Word backend_libs__interval__V_50_50;

#line 116 "interval.m"
                                                                {
#line 116 "interval.m"
                                                                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[8], &backend_libs__interval__V_50_50, ((MR_Box) (backend_libs__interval__V_18_18)), ((MR_Box) (backend_libs__interval__V_34_34)));
                                                                }
#line 6619 "backend_libs.interval.c"
                                                                backend_libs__interval__succeeded = (backend_libs__interval__V_50_50 == (MR_Integer) 0);
#line 116 "interval.m"
                                                                backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 116 "interval.m"
                                                                if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                                                  *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_50_50;
#line 116 "interval.m"
                                                                else
#line 116 "interval.m"
                                                                  {
#line 116 "interval.m"
                                                                    {
#line 116 "interval.m"
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[9], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__V_19_19)), ((MR_Box) (backend_libs__interval__V_35_35)));
                                                                    }
#line 116 "interval.m"
                                                                  }
#line 116 "interval.m"
                                                              }
#line 116 "interval.m"
                                                          }
#line 116 "interval.m"
                                                      }
#line 116 "interval.m"
                                                  }
#line 116 "interval.m"
                                              }
#line 116 "interval.m"
                                          }
#line 116 "interval.m"
                                      }
#line 116 "interval.m"
                                  }
#line 116 "interval.m"
                              }
#line 116 "interval.m"
                          }
#line 116 "interval.m"
                      }
#line 116 "interval.m"
                  }
#line 116 "interval.m"
              }
#line 116 "interval.m"
          }
#line 116 "interval.m"
      }
#line 116 "interval.m"
  }
#line 116 "interval.m"
}

#line 116 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____interval_info_0_0(
#line 116 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 116 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 116 "interval.m"
{
#line 116 "interval.m"
  {
#line 116 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 116 "interval.m"
    MR_Integer backend_libs__interval__CastX_35 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 116 "interval.m"
    MR_Integer backend_libs__interval__CastY_36 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 116 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_35 == backend_libs__interval__CastY_36);
#line 116 "interval.m"
    if (backend_libs__interval__succeeded)
#line 116 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 116 "interval.m"
    else
#line 116 "interval.m"
      {
#line 116 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_37_37;
#line 116 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_38_38;
#line 116 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_39_39;
#line 116 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_40_40;
#line 116 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_41_41;
#line 116 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_43_43;
#line 116 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_44_44;
#line 116 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_45_45;
#line 116 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_46_46;
#line 116 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_47_47;
#line 116 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_48_48;
#line 116 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_49_49;
#line 116 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_50_50;
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 2)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 3)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 4)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 5)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 6)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 7)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 8)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 9)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 10)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 11)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 12)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 13)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 14)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 15)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 3)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 4)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 5)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 6)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 7)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 8)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 9)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 10)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 11)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 12)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 13)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 14)));
#line 116 "interval.m"
        MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 15)));
#line 85 "interval.m"
        MR_Integer backend_libs__interval__CastX_53;
#line 85 "interval.m"
        MR_Integer backend_libs__interval__CastY_54;

#line 6796 "backend_libs.interval.c"
        {
#line 6798 "backend_libs.interval.c"
          backend_libs__interval__succeeded = backend_libs__interval____Unify____interval_params_0_0(backend_libs__interval__V_3_3, backend_libs__interval__V_19_19);
        }
#line 116 "interval.m"
        if (backend_libs__interval__succeeded)
#line 116 "interval.m"
          {
#line 6805 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_37_37 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 6807 "backend_libs.interval.c"
            {
#line 6809 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_37_37, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_20_20)));
            }
#line 116 "interval.m"
            if (backend_libs__interval__succeeded)
#line 116 "interval.m"
              {
#line 6816 "backend_libs.interval.c"
                backend_libs__interval__TypeInfo_38_38 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 6818 "backend_libs.interval.c"
                {
#line 6820 "backend_libs.interval.c"
                  backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_38_38, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_21_21)));
                }
#line 116 "interval.m"
                if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                  {
#line 6827 "backend_libs.interval.c"
                    backend_libs__interval__TypeInfo_39_39 = (MR_Word) &backend_libs__interval_scalar_common_2[2];
#line 6829 "backend_libs.interval.c"
                    {
#line 6831 "backend_libs.interval.c"
                      backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_39_39, ((MR_Box) (backend_libs__interval__V_6_6)), ((MR_Box) (backend_libs__interval__V_22_22)));
                    }
#line 116 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                      {
#line 6838 "backend_libs.interval.c"
                        backend_libs__interval__TypeInfo_40_40 = (MR_Word) &backend_libs__interval_scalar_common_2[3];
#line 6840 "backend_libs.interval.c"
                        {
#line 6842 "backend_libs.interval.c"
                          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_40_40, ((MR_Box) (backend_libs__interval__V_7_7)), ((MR_Box) (backend_libs__interval__V_23_23)));
                        }
#line 116 "interval.m"
                        if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                          {
#line 6849 "backend_libs.interval.c"
                            backend_libs__interval__TypeInfo_41_41 = (MR_Word) &backend_libs__interval_scalar_common_2[4];
#line 6851 "backend_libs.interval.c"
                            {
#line 6853 "backend_libs.interval.c"
                              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_41_41, ((MR_Box) (backend_libs__interval__V_8_8)), ((MR_Box) (backend_libs__interval__V_24_24)));
                            }
#line 116 "interval.m"
                            if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                              {
#line 85 "interval.m"
                                backend_libs__interval__CastX_53 = (MR_Integer) backend_libs__interval__V_9_9;
#line 85 "interval.m"
                                backend_libs__interval__CastY_54 = (MR_Integer) backend_libs__interval__V_25_25;
#line 85 "interval.m"
                                backend_libs__interval__succeeded = (backend_libs__interval__CastX_53 == backend_libs__interval__CastY_54);
#line 85 "interval.m"
                                if (backend_libs__interval__succeeded)
#line 85 "interval.m"
                                  backend_libs__interval__succeeded = MR_TRUE;
#line 85 "interval.m"
                                else
#line 85 "interval.m"
                                  {
#line 85 "interval.m"
                                    MR_Integer backend_libs__interval__V_51_51 = (MR_Integer) backend_libs__interval__V_9_9;
#line 85 "interval.m"
                                    MR_Integer backend_libs__interval__V_52_52 = (MR_Integer) backend_libs__interval__V_25_25;

#line 6879 "backend_libs.interval.c"
                                    backend_libs__interval__succeeded = (backend_libs__interval__V_51_51 == backend_libs__interval__V_52_52);
#line 85 "interval.m"
                                  }
#line 116 "interval.m"
                                if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                  {
#line 6887 "backend_libs.interval.c"
                                    {
#line 6889 "backend_libs.interval.c"
                                      backend_libs__interval__succeeded = mercury__counter____Unify____counter_0_0(backend_libs__interval__V_10_10, backend_libs__interval__V_26_26);
                                    }
#line 116 "interval.m"
                                    if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                      {
#line 6896 "backend_libs.interval.c"
                                        backend_libs__interval__TypeInfo_43_43 = (MR_Word) &backend_libs__interval_scalar_common_1[5];
#line 6898 "backend_libs.interval.c"
                                        {
#line 6900 "backend_libs.interval.c"
                                          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_43_43, ((MR_Box) (backend_libs__interval__V_11_11)), ((MR_Box) (backend_libs__interval__V_27_27)));
                                        }
#line 116 "interval.m"
                                        if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                          {
#line 6907 "backend_libs.interval.c"
                                            backend_libs__interval__TypeInfo_44_44 = (MR_Word) &backend_libs__interval_scalar_common_2[5];
#line 6909 "backend_libs.interval.c"
                                            {
#line 6911 "backend_libs.interval.c"
                                              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_44_44, ((MR_Box) (backend_libs__interval__V_12_12)), ((MR_Box) (backend_libs__interval__V_28_28)));
                                            }
#line 116 "interval.m"
                                            if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                              {
#line 6918 "backend_libs.interval.c"
                                                backend_libs__interval__TypeInfo_45_45 = (MR_Word) &backend_libs__interval_scalar_common_1[6];
#line 6920 "backend_libs.interval.c"
                                                {
#line 6922 "backend_libs.interval.c"
                                                  backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_45_45, ((MR_Box) (backend_libs__interval__V_13_13)), ((MR_Box) (backend_libs__interval__V_29_29)));
                                                }
#line 116 "interval.m"
                                                if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                                  {
#line 6929 "backend_libs.interval.c"
                                                    backend_libs__interval__TypeInfo_46_46 = (MR_Word) &backend_libs__interval_scalar_common_2[6];
#line 6931 "backend_libs.interval.c"
                                                    {
#line 6933 "backend_libs.interval.c"
                                                      backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_46_46, ((MR_Box) (backend_libs__interval__V_14_14)), ((MR_Box) (backend_libs__interval__V_30_30)));
                                                    }
#line 116 "interval.m"
                                                    if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                                      {
#line 6940 "backend_libs.interval.c"
                                                        backend_libs__interval__TypeInfo_47_47 = (MR_Word) &backend_libs__interval_scalar_common_2[6];
#line 6942 "backend_libs.interval.c"
                                                        {
#line 6944 "backend_libs.interval.c"
                                                          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_47_47, ((MR_Box) (backend_libs__interval__V_15_15)), ((MR_Box) (backend_libs__interval__V_31_31)));
                                                        }
#line 116 "interval.m"
                                                        if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                                          {
#line 6951 "backend_libs.interval.c"
                                                            backend_libs__interval__TypeInfo_48_48 = (MR_Word) &backend_libs__interval_scalar_common_2[7];
#line 6953 "backend_libs.interval.c"
                                                            {
#line 6955 "backend_libs.interval.c"
                                                              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_48_48, ((MR_Box) (backend_libs__interval__V_16_16)), ((MR_Box) (backend_libs__interval__V_32_32)));
                                                            }
#line 116 "interval.m"
                                                            if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                                              {
#line 6962 "backend_libs.interval.c"
                                                                backend_libs__interval__TypeInfo_49_49 = (MR_Word) &backend_libs__interval_scalar_common_2[8];
#line 6964 "backend_libs.interval.c"
                                                                {
#line 6966 "backend_libs.interval.c"
                                                                  backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_49_49, ((MR_Box) (backend_libs__interval__V_17_17)), ((MR_Box) (backend_libs__interval__V_33_33)));
                                                                }
#line 116 "interval.m"
                                                                if (backend_libs__interval__succeeded)
#line 116 "interval.m"
                                                                  {
#line 6973 "backend_libs.interval.c"
                                                                    backend_libs__interval__TypeInfo_50_50 = (MR_Word) &backend_libs__interval_scalar_common_2[9];
#line 6975 "backend_libs.interval.c"
                                                                    {
#line 6977 "backend_libs.interval.c"
                                                                      backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_50_50, ((MR_Box) (backend_libs__interval__V_18_18)), ((MR_Box) (backend_libs__interval__V_34_34)));
                                                                    }
#line 116 "interval.m"
                                                                  }
#line 116 "interval.m"
                                                              }
#line 116 "interval.m"
                                                          }
#line 116 "interval.m"
                                                      }
#line 116 "interval.m"
                                                  }
#line 116 "interval.m"
                                              }
#line 116 "interval.m"
                                          }
#line 116 "interval.m"
                                      }
#line 116 "interval.m"
                                  }
#line 116 "interval.m"
                              }
#line 116 "interval.m"
                          }
#line 116 "interval.m"
                      }
#line 116 "interval.m"
                  }
#line 116 "interval.m"
              }
#line 116 "interval.m"
          }
#line 116 "interval.m"
      }
#line 116 "interval.m"
    return backend_libs__interval__succeeded;
#line 116 "interval.m"
  }
#line 116 "interval.m"
}

#line 85 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____interval_id_0_0(
#line 85 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 85 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 85 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 85 "interval.m"
{
#line 85 "interval.m"
  {
#line 85 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 85 "interval.m"
    MR_Integer backend_libs__interval__CastX_6 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 85 "interval.m"
    MR_Integer backend_libs__interval__CastY_7 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 85 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_6 == backend_libs__interval__CastY_7);
#line 85 "interval.m"
    if (backend_libs__interval__succeeded)
#line 7043 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 85 "interval.m"
    else
#line 85 "interval.m"
      {
#line 85 "interval.m"
        MR_Integer backend_libs__interval__V_4_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 85 "interval.m"
        MR_Integer backend_libs__interval__V_5_5 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 85 "interval.m"
        {
#line 85 "interval.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_4_4, backend_libs__interval__V_5_5);
        }
#line 85 "interval.m"
      }
#line 85 "interval.m"
  }
#line 85 "interval.m"
}

#line 85 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____interval_id_0_0(
#line 85 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 85 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 85 "interval.m"
{
#line 85 "interval.m"
  {
#line 85 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 85 "interval.m"
    MR_Integer backend_libs__interval__CastX_5 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 85 "interval.m"
    MR_Integer backend_libs__interval__CastY_6 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 85 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_5 == backend_libs__interval__CastY_6);
#line 85 "interval.m"
    if (backend_libs__interval__succeeded)
#line 85 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 85 "interval.m"
    else
#line 85 "interval.m"
      {
#line 85 "interval.m"
        MR_Integer backend_libs__interval__V_3_3 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 85 "interval.m"
        MR_Integer backend_libs__interval__V_4_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 7099 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_3_3 == backend_libs__interval__V_4_4);
#line 85 "interval.m"
      }
#line 85 "interval.m"
    return backend_libs__interval__succeeded;
#line 85 "interval.m"
  }
#line 85 "interval.m"
}

#line 95 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____insert_spec_0_0(
#line 95 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 95 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 95 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 95 "interval.m"
{
#line 95 "interval.m"
  {
#line 95 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 95 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 95 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 95 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 95 "interval.m"
    if (backend_libs__interval__succeeded)
#line 7134 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 95 "interval.m"
    else
#line 95 "interval.m"
      {
#line 95 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 95 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 95 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 95 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 95 "interval.m"
        MR_Word backend_libs__interval__V_8_8;

#line 95 "interval.m"
        {
#line 95 "interval.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&backend_libs__interval__V_8_8, backend_libs__interval__V_4_4, backend_libs__interval__V_6_6);
        }
#line 7156 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_8_8 == (MR_Integer) 0);
#line 95 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 95 "interval.m"
        if (backend_libs__interval__succeeded)
#line 95 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_8_8;
#line 95 "interval.m"
        else
#line 95 "interval.m"
          {
#line 95 "interval.m"
            {
#line 95 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_7_7)));
            }
#line 95 "interval.m"
          }
#line 95 "interval.m"
      }
#line 95 "interval.m"
  }
#line 95 "interval.m"
}

#line 95 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____insert_spec_0_0(
#line 95 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 95 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 95 "interval.m"
{
#line 95 "interval.m"
  {
#line 95 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 95 "interval.m"
    MR_Integer backend_libs__interval__CastX_7 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 95 "interval.m"
    MR_Integer backend_libs__interval__CastY_8 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 95 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_7 == backend_libs__interval__CastY_8);
#line 95 "interval.m"
    if (backend_libs__interval__succeeded)
#line 95 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 95 "interval.m"
    else
#line 95 "interval.m"
      {
#line 95 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_10_10;
#line 95 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 95 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 95 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 95 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 7221 "backend_libs.interval.c"
        {
#line 7223 "backend_libs.interval.c"
          backend_libs__interval__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(backend_libs__interval__V_3_3, backend_libs__interval__V_5_5);
        }
#line 95 "interval.m"
        if (backend_libs__interval__succeeded)
#line 95 "interval.m"
          {
#line 7230 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_10_10 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 7232 "backend_libs.interval.c"
            {
#line 7234 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_10_10, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
            }
#line 95 "interval.m"
          }
#line 95 "interval.m"
      }
#line 95 "interval.m"
    return backend_libs__interval__succeeded;
#line 95 "interval.m"
  }
#line 95 "interval.m"
}

#line 101 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____insert_map_0_0(
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
    MR_Word backend_libs__interval__Cast_HeadVar1_4 = backend_libs__interval__HeadVar__2_2;
#line 101 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar2_5 = backend_libs__interval__HeadVar__3_3;

#line 101 "interval.m"
    {
#line 101 "interval.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_2[1], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__interval__Cast_HeadVar2_5)));
    }
#line 101 "interval.m"
  }
#line 101 "interval.m"
}

#line 101 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____insert_map_0_0(
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
    MR_Word backend_libs__interval__Cast_HeadVar1_3 = backend_libs__interval__HeadVar__1_1;
#line 101 "interval.m"
    MR_Word backend_libs__interval__Cast_HeadVar2_4 = backend_libs__interval__HeadVar__2_2;

#line 101 "interval.m"
    {
#line 101 "interval.m"
      backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_2[1], ((MR_Box) (backend_libs__interval__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__interval__Cast_HeadVar2_4)));
    }
#line 101 "interval.m"
    return backend_libs__interval__succeeded;
#line 101 "interval.m"
  }
#line 101 "interval.m"
}

#line 88 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____branch_end_info_0_0(
#line 88 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 88 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 88 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 88 "interval.m"
{
#line 88 "interval.m"
  {
#line 88 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 88 "interval.m"
    MR_Integer backend_libs__interval__CastX_12 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 88 "interval.m"
    MR_Integer backend_libs__interval__CastY_13 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 88 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_12 == backend_libs__interval__CastY_13);
#line 88 "interval.m"
    if (backend_libs__interval__succeeded)
#line 7332 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 88 "interval.m"
    else
#line 88 "interval.m"
      {
#line 88 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 88 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 88 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 88 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 88 "interval.m"
        MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 2)));
#line 88 "interval.m"
        MR_Word backend_libs__interval__V_10_10;

#line 88 "interval.m"
        {
#line 88 "interval.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], &backend_libs__interval__V_10_10, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_7_7)));
        }
#line 7358 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_10_10 == (MR_Integer) 0);
#line 88 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 88 "interval.m"
        if (backend_libs__interval__succeeded)
#line 88 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_10_10;
#line 88 "interval.m"
        else
#line 88 "interval.m"
          {
#line 88 "interval.m"
            MR_Word backend_libs__interval__V_11_11;

#line 88 "interval.m"
            {
#line 88 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], &backend_libs__interval__V_11_11, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_8_8)));
            }
#line 7378 "backend_libs.interval.c"
            backend_libs__interval__succeeded = (backend_libs__interval__V_11_11 == (MR_Integer) 0);
#line 88 "interval.m"
            backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 88 "interval.m"
            if (backend_libs__interval__succeeded)
#line 88 "interval.m"
              *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_11_11;
#line 88 "interval.m"
            else
#line 88 "interval.m"
              {
#line 88 "interval.m"
                MR_Integer backend_libs__interval__V_17_17 = (MR_Integer) backend_libs__interval__V_6_6;
#line 88 "interval.m"
                MR_Integer backend_libs__interval__V_18_18 = (MR_Integer) backend_libs__interval__V_9_9;

#line 88 "interval.m"
                {
#line 88 "interval.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_17_17, backend_libs__interval__V_18_18);
                }
#line 88 "interval.m"
              }
#line 88 "interval.m"
          }
#line 88 "interval.m"
      }
#line 88 "interval.m"
  }
#line 88 "interval.m"
}

#line 88 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____branch_end_info_0_0(
#line 88 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 88 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 88 "interval.m"
{
#line 88 "interval.m"
  {
#line 88 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 88 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 88 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 88 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 88 "interval.m"
    if (backend_libs__interval__succeeded)
#line 88 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 88 "interval.m"
    else
#line 88 "interval.m"
      {
#line 88 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_12_12;
#line 88 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 88 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 88 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 2)));
#line 88 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 88 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 88 "interval.m"
        MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 85 "interval.m"
        MR_Integer backend_libs__interval__CastX_15;
#line 85 "interval.m"
        MR_Integer backend_libs__interval__CastY_16;

#line 7458 "backend_libs.interval.c"
        {
#line 7460 "backend_libs.interval.c"
          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__V_3_3)), ((MR_Box) (backend_libs__interval__V_6_6)));
        }
#line 88 "interval.m"
        if (backend_libs__interval__succeeded)
#line 88 "interval.m"
          {
#line 7467 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_12_12 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 7469 "backend_libs.interval.c"
            {
#line 7471 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_12_12, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_7_7)));
            }
#line 88 "interval.m"
            if (backend_libs__interval__succeeded)
#line 88 "interval.m"
              {
#line 85 "interval.m"
                backend_libs__interval__CastX_15 = (MR_Integer) backend_libs__interval__V_5_5;
#line 85 "interval.m"
                backend_libs__interval__CastY_16 = (MR_Integer) backend_libs__interval__V_8_8;
#line 85 "interval.m"
                backend_libs__interval__succeeded = (backend_libs__interval__CastX_15 == backend_libs__interval__CastY_16);
#line 85 "interval.m"
                if (backend_libs__interval__succeeded)
#line 85 "interval.m"
                  backend_libs__interval__succeeded = MR_TRUE;
#line 85 "interval.m"
                else
#line 85 "interval.m"
                  {
#line 85 "interval.m"
                    MR_Integer backend_libs__interval__V_13_13 = (MR_Integer) backend_libs__interval__V_5_5;
#line 85 "interval.m"
                    MR_Integer backend_libs__interval__V_14_14 = (MR_Integer) backend_libs__interval__V_8_8;

#line 7497 "backend_libs.interval.c"
                    backend_libs__interval__succeeded = (backend_libs__interval__V_13_13 == backend_libs__interval__V_14_14);
#line 85 "interval.m"
                  }
#line 88 "interval.m"
              }
#line 88 "interval.m"
          }
#line 88 "interval.m"
      }
#line 88 "interval.m"
    return backend_libs__interval__succeeded;
#line 88 "interval.m"
  }
#line 88 "interval.m"
}

#line 66 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____branch_construct_0_0(
#line 66 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 66 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 66 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 66 "interval.m"
{
#line 66 "interval.m"
  {
#line 66 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 66 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar1_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 66 "interval.m"
    MR_Integer backend_libs__interval__Cast_HeadVar2_5 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 66 "interval.m"
    {
#line 66 "interval.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__Cast_HeadVar1_4, backend_libs__interval__Cast_HeadVar2_5);
    }
#line 66 "interval.m"
  }
#line 66 "interval.m"
}

#line 66 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____branch_construct_0_0(
#line 66 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_1,
#line 66 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 66 "interval.m"
{
#line 7553 "backend_libs.interval.c"
  {
#line 7555 "backend_libs.interval.c"
    MR_bool backend_libs__interval__succeeded = (backend_libs__interval__HeadVar__2_1 == backend_libs__interval__HeadVar__2_2);

#line 7558 "backend_libs.interval.c"
    return backend_libs__interval__succeeded;
#line 7560 "backend_libs.interval.c"
  }
#line 66 "interval.m"
}

#line 103 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____anchor_follow_info_0_0(
#line 103 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 103 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 103 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 103 "interval.m"
{
#line 103 "interval.m"
  {
#line 103 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 103 "interval.m"
    MR_Integer backend_libs__interval__CastX_9 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 103 "interval.m"
    MR_Integer backend_libs__interval__CastY_10 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 103 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_9 == backend_libs__interval__CastY_10);
#line 103 "interval.m"
    if (backend_libs__interval__succeeded)
#line 7589 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 103 "interval.m"
    else
#line 103 "interval.m"
      {
#line 103 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 103 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 103 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 103 "interval.m"
        MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 103 "interval.m"
        MR_Word backend_libs__interval__V_8_8;

#line 103 "interval.m"
        {
#line 103 "interval.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], &backend_libs__interval__V_8_8, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
        }
#line 7611 "backend_libs.interval.c"
        backend_libs__interval__succeeded = (backend_libs__interval__V_8_8 == (MR_Integer) 0);
#line 103 "interval.m"
        backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 103 "interval.m"
        if (backend_libs__interval__succeeded)
#line 103 "interval.m"
          *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_8_8;
#line 103 "interval.m"
        else
#line 103 "interval.m"
          {
#line 103 "interval.m"
            {
#line 103 "interval.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[5], backend_libs__interval__HeadVar__1_1, ((MR_Box) (backend_libs__interval__V_5_5)), ((MR_Box) (backend_libs__interval__V_7_7)));
            }
#line 103 "interval.m"
          }
#line 103 "interval.m"
      }
#line 103 "interval.m"
  }
#line 103 "interval.m"
}

#line 103 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_follow_info_0_0(
#line 103 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 103 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 103 "interval.m"
{
#line 103 "interval.m"
  {
#line 103 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 103 "interval.m"
    MR_Integer backend_libs__interval__CastX_7 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 103 "interval.m"
    MR_Integer backend_libs__interval__CastY_8 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 103 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_7 == backend_libs__interval__CastY_8);
#line 103 "interval.m"
    if (backend_libs__interval__succeeded)
#line 103 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 103 "interval.m"
    else
#line 103 "interval.m"
      {
#line 103 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_10_10;
#line 103 "interval.m"
        MR_Word backend_libs__interval__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 103 "interval.m"
        MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 103 "interval.m"
        MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 103 "interval.m"
        MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 7676 "backend_libs.interval.c"
        {
#line 7678 "backend_libs.interval.c"
          backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__V_3_3)), ((MR_Box) (backend_libs__interval__V_5_5)));
        }
#line 103 "interval.m"
        if (backend_libs__interval__succeeded)
#line 103 "interval.m"
          {
#line 7685 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_10_10 = (MR_Word) &backend_libs__interval_scalar_common_1[5];
#line 7687 "backend_libs.interval.c"
            {
#line 7689 "backend_libs.interval.c"
              backend_libs__interval__succeeded = mercury__builtin__unify_2_p_0(backend_libs__interval__TypeInfo_10_10, ((MR_Box) (backend_libs__interval__V_4_4)), ((MR_Box) (backend_libs__interval__V_6_6)));
            }
#line 103 "interval.m"
          }
#line 103 "interval.m"
      }
#line 103 "interval.m"
    return backend_libs__interval__succeeded;
#line 103 "interval.m"
  }
#line 103 "interval.m"
}

#line 77 "interval.m"
void MR_CALL 
backend_libs__interval____Compare____anchor_0_0(
#line 77 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 77 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 77 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3)
#line 77 "interval.m"
{
#line 77 "interval.m"
  {
#line 77 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 77 "interval.m"
    MR_Integer backend_libs__interval__CastX_78 = (MR_Integer) backend_libs__interval__HeadVar__2_2;
#line 77 "interval.m"
    MR_Integer backend_libs__interval__CastY_79 = (MR_Integer) backend_libs__interval__HeadVar__3_3;

#line 77 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_78 == backend_libs__interval__CastY_79);
#line 77 "interval.m"
    if (backend_libs__interval__succeeded)
#line 7727 "backend_libs.interval.c"
      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "interval.m"
    else
#line 77 "interval.m"
#line 77 "interval.m"
      switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) {
#line 77 "interval.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
        case (MR_Integer) 0:
#line 77 "interval.m"
#line 77 "interval.m"
          switch (MR_unmkbody(backend_libs__interval__HeadVar__2_2)) {
#line 77 "interval.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
            case (MR_Integer) 0:
#line 77 "interval.m"
#line 77 "interval.m"
              switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) {
#line 77 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                case (MR_Integer) 0:
#line 77 "interval.m"
#line 77 "interval.m"
                  switch (MR_unmkbody(backend_libs__interval__HeadVar__3_3)) {
#line 77 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                    case (MR_Integer) 0:
#line 77 "interval.m"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "interval.m"
                      break;
#line 77 "interval.m"
                    case (MR_Integer) 1:
#line 77 "interval.m"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "interval.m"
                      break;
#line 77 "interval.m"
                  }
#line 77 "interval.m"
                  break;
#line 77 "interval.m"
                case (MR_Integer) 1:
#line 7775 "backend_libs.interval.c"
                  *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "interval.m"
                  break;
#line 77 "interval.m"
                case (MR_Integer) 2:
#line 7781 "backend_libs.interval.c"
                  *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "interval.m"
                  break;
#line 77 "interval.m"
                case (MR_Integer) 3:
#line 77 "interval.m"
#line 77 "interval.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                    case (MR_Integer) 0:
#line 7794 "backend_libs.interval.c"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "interval.m"
                      break;
#line 77 "interval.m"
                    case (MR_Integer) 1:
#line 7800 "backend_libs.interval.c"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "interval.m"
                      break;
#line 77 "interval.m"
                  }
#line 77 "interval.m"
                  break;
#line 77 "interval.m"
              }
#line 77 "interval.m"
              break;
#line 77 "interval.m"
            case (MR_Integer) 1:
#line 77 "interval.m"
#line 77 "interval.m"
              switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) {
#line 77 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                case (MR_Integer) 0:
#line 77 "interval.m"
#line 77 "interval.m"
                  switch (MR_unmkbody(backend_libs__interval__HeadVar__3_3)) {
#line 77 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                    case (MR_Integer) 0:
#line 77 "interval.m"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "interval.m"
                      break;
#line 77 "interval.m"
                    case (MR_Integer) 1:
#line 77 "interval.m"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "interval.m"
                      break;
#line 77 "interval.m"
                  }
#line 77 "interval.m"
                  break;
#line 77 "interval.m"
                case (MR_Integer) 1:
#line 7844 "backend_libs.interval.c"
                  *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "interval.m"
                  break;
#line 77 "interval.m"
                case (MR_Integer) 2:
#line 7850 "backend_libs.interval.c"
                  *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "interval.m"
                  break;
#line 77 "interval.m"
                case (MR_Integer) 3:
#line 77 "interval.m"
#line 77 "interval.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                    case (MR_Integer) 0:
#line 7863 "backend_libs.interval.c"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "interval.m"
                      break;
#line 77 "interval.m"
                    case (MR_Integer) 1:
#line 7869 "backend_libs.interval.c"
                      *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "interval.m"
                      break;
#line 77 "interval.m"
                  }
#line 77 "interval.m"
                  break;
#line 77 "interval.m"
              }
#line 77 "interval.m"
              break;
#line 77 "interval.m"
          }
#line 77 "interval.m"
          break;
#line 77 "interval.m"
        case (MR_Integer) 1:
#line 77 "interval.m"
          {
#line 77 "interval.m"
            MR_Word backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 77 "interval.m"
            MR_Word backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "interval.m"
#line 77 "interval.m"
            switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) {
#line 77 "interval.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
              case (MR_Integer) 0:
#line 77 "interval.m"
#line 77 "interval.m"
                switch (MR_unmkbody(backend_libs__interval__HeadVar__3_3)) {
#line 77 "interval.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                  case (MR_Integer) 0:
#line 7908 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                  case (MR_Integer) 1:
#line 7914 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                }
#line 77 "interval.m"
                break;
#line 77 "interval.m"
              case (MR_Integer) 1:
#line 77 "interval.m"
                {
#line 77 "interval.m"
                  MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 77 "interval.m"
                  MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 77 "interval.m"
                  MR_Word backend_libs__interval__V_24_24;
#line 77 "interval.m"
                  MR_Integer backend_libs__interval__V_96_96 = (MR_Integer) backend_libs__interval__V_89_89;
#line 77 "interval.m"
                  MR_Integer backend_libs__interval__V_97_97 = (MR_Integer) backend_libs__interval__V_22_22;

#line 77 "interval.m"
                  {
#line 77 "interval.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__interval__V_24_24, backend_libs__interval__V_96_96, backend_libs__interval__V_97_97);
                  }
#line 7942 "backend_libs.interval.c"
                  backend_libs__interval__succeeded = (backend_libs__interval__V_24_24 == (MR_Integer) 0);
#line 77 "interval.m"
                  backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 77 "interval.m"
                  if (backend_libs__interval__succeeded)
#line 77 "interval.m"
                    *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_24_24;
#line 77 "interval.m"
                  else
#line 77 "interval.m"
                    {
#line 77 "interval.m"
                      MR_Integer backend_libs__interval__V_98_98 = (MR_Integer) backend_libs__interval__V_88_88;
#line 77 "interval.m"
                      MR_Integer backend_libs__interval__V_99_99 = (MR_Integer) backend_libs__interval__V_23_23;

#line 77 "interval.m"
                      {
#line 77 "interval.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_98_98, backend_libs__interval__V_99_99);
                      }
#line 77 "interval.m"
                    }
#line 77 "interval.m"
                }
#line 77 "interval.m"
                break;
#line 77 "interval.m"
              case (MR_Integer) 2:
#line 7972 "backend_libs.interval.c"
                *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "interval.m"
                break;
#line 77 "interval.m"
              case (MR_Integer) 3:
#line 77 "interval.m"
#line 77 "interval.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "interval.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                  case (MR_Integer) 0:
#line 7985 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                  case (MR_Integer) 1:
#line 7991 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                }
#line 77 "interval.m"
                break;
#line 77 "interval.m"
            }
#line 77 "interval.m"
          }
#line 77 "interval.m"
          break;
#line 77 "interval.m"
        case (MR_Integer) 2:
#line 77 "interval.m"
          {
#line 77 "interval.m"
            MR_Word backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "interval.m"
#line 77 "interval.m"
            switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) {
#line 77 "interval.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
              case (MR_Integer) 0:
#line 77 "interval.m"
#line 77 "interval.m"
                switch (MR_unmkbody(backend_libs__interval__HeadVar__3_3)) {
#line 77 "interval.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                  case (MR_Integer) 0:
#line 8026 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                  case (MR_Integer) 1:
#line 8032 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                }
#line 77 "interval.m"
                break;
#line 77 "interval.m"
              case (MR_Integer) 1:
#line 8042 "backend_libs.interval.c"
                *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "interval.m"
                break;
#line 77 "interval.m"
              case (MR_Integer) 2:
#line 77 "interval.m"
                {
#line 77 "interval.m"
                  MR_Word backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)));
#line 77 "interval.m"
                  MR_Integer backend_libs__interval__V_102_102 = (MR_Integer) backend_libs__interval__V_91_91;
#line 77 "interval.m"
                  MR_Integer backend_libs__interval__V_103_103 = (MR_Integer) backend_libs__interval__V_41_41;

#line 77 "interval.m"
                  {
#line 77 "interval.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_102_102, backend_libs__interval__V_103_103);
                  }
#line 77 "interval.m"
                }
#line 77 "interval.m"
                break;
#line 77 "interval.m"
              case (MR_Integer) 3:
#line 77 "interval.m"
#line 77 "interval.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "interval.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                  case (MR_Integer) 0:
#line 8075 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                  case (MR_Integer) 1:
#line 8081 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                }
#line 77 "interval.m"
                break;
#line 77 "interval.m"
            }
#line 77 "interval.m"
          }
#line 77 "interval.m"
          break;
#line 77 "interval.m"
        case (MR_Integer) 3:
#line 77 "interval.m"
#line 77 "interval.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)))) {
#line 77 "interval.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
            case (MR_Integer) 0:
#line 77 "interval.m"
              {
#line 77 "interval.m"
                MR_Word backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 77 "interval.m"
                MR_Word backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 77 "interval.m"
#line 77 "interval.m"
                switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) {
#line 77 "interval.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                  case (MR_Integer) 0:
#line 77 "interval.m"
#line 77 "interval.m"
                    switch (MR_unmkbody(backend_libs__interval__HeadVar__3_3)) {
#line 77 "interval.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                      case (MR_Integer) 0:
#line 8125 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "interval.m"
                        break;
#line 77 "interval.m"
                      case (MR_Integer) 1:
#line 8131 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "interval.m"
                        break;
#line 77 "interval.m"
                    }
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                  case (MR_Integer) 1:
#line 8141 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                  case (MR_Integer) 2:
#line 8147 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                  case (MR_Integer) 3:
#line 77 "interval.m"
#line 77 "interval.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "interval.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                      case (MR_Integer) 0:
#line 77 "interval.m"
                        {
#line 77 "interval.m"
                          MR_Word backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 77 "interval.m"
                          MR_Word backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 2)));
#line 77 "interval.m"
                          MR_Word backend_libs__interval__V_62_62;
#line 77 "interval.m"
                          MR_Integer backend_libs__interval__V_92_92 = (MR_Integer) backend_libs__interval__V_87_87;
#line 77 "interval.m"
                          MR_Integer backend_libs__interval__V_93_93 = (MR_Integer) backend_libs__interval__V_60_60;

#line 77 "interval.m"
                          {
#line 77 "interval.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__interval__V_62_62, backend_libs__interval__V_92_92, backend_libs__interval__V_93_93);
                          }
#line 8178 "backend_libs.interval.c"
                          backend_libs__interval__succeeded = (backend_libs__interval__V_62_62 == (MR_Integer) 0);
#line 77 "interval.m"
                          backend_libs__interval__succeeded = !(backend_libs__interval__succeeded);
#line 77 "interval.m"
                          if (backend_libs__interval__succeeded)
#line 77 "interval.m"
                            *backend_libs__interval__HeadVar__1_1 = backend_libs__interval__V_62_62;
#line 77 "interval.m"
                          else
#line 77 "interval.m"
                            {
#line 77 "interval.m"
                              MR_Integer backend_libs__interval__V_94_94 = (MR_Integer) backend_libs__interval__V_86_86;
#line 77 "interval.m"
                              MR_Integer backend_libs__interval__V_95_95 = (MR_Integer) backend_libs__interval__V_61_61;

#line 77 "interval.m"
                              {
#line 77 "interval.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_94_94, backend_libs__interval__V_95_95);
                              }
#line 77 "interval.m"
                            }
#line 77 "interval.m"
                        }
#line 77 "interval.m"
                        break;
#line 77 "interval.m"
                      case (MR_Integer) 1:
#line 8208 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "interval.m"
                        break;
#line 77 "interval.m"
                    }
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                }
#line 77 "interval.m"
              }
#line 77 "interval.m"
              break;
#line 77 "interval.m"
            case (MR_Integer) 1:
#line 77 "interval.m"
              {
#line 77 "interval.m"
                MR_Word backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));

#line 77 "interval.m"
#line 77 "interval.m"
                switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__3_3)) {
#line 77 "interval.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                  case (MR_Integer) 0:
#line 77 "interval.m"
#line 77 "interval.m"
                    switch (MR_unmkbody(backend_libs__interval__HeadVar__3_3)) {
#line 77 "interval.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                      case (MR_Integer) 0:
#line 8243 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "interval.m"
                        break;
#line 77 "interval.m"
                      case (MR_Integer) 1:
#line 8249 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "interval.m"
                        break;
#line 77 "interval.m"
                    }
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                  case (MR_Integer) 1:
#line 8259 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                  case (MR_Integer) 2:
#line 8265 "backend_libs.interval.c"
                    *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                  case (MR_Integer) 3:
#line 77 "interval.m"
#line 77 "interval.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "interval.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
                      case (MR_Integer) 0:
#line 8278 "backend_libs.interval.c"
                        *backend_libs__interval__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "interval.m"
                        break;
#line 77 "interval.m"
                      case (MR_Integer) 1:
#line 77 "interval.m"
                        {
#line 77 "interval.m"
                          MR_Word backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__3_3, (MR_Integer) 1)));
#line 77 "interval.m"
                          MR_Integer backend_libs__interval__V_100_100 = (MR_Integer) backend_libs__interval__V_90_90;
#line 77 "interval.m"
                          MR_Integer backend_libs__interval__V_101_101 = (MR_Integer) backend_libs__interval__V_77_77;

#line 77 "interval.m"
                          {
#line 77 "interval.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__interval__HeadVar__1_1, backend_libs__interval__V_100_100, backend_libs__interval__V_101_101);
                          }
#line 77 "interval.m"
                        }
#line 77 "interval.m"
                        break;
#line 77 "interval.m"
                    }
#line 77 "interval.m"
                    break;
#line 77 "interval.m"
                }
#line 77 "interval.m"
              }
#line 77 "interval.m"
              break;
#line 77 "interval.m"
          }
#line 77 "interval.m"
          break;
#line 77 "interval.m"
      }
#line 77 "interval.m"
  }
#line 77 "interval.m"
}

#line 77 "interval.m"
MR_bool MR_CALL 
backend_libs__interval____Unify____anchor_0_0(
#line 77 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 77 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 77 "interval.m"
{
#line 77 "interval.m"
  {
#line 77 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 77 "interval.m"
    MR_Integer backend_libs__interval__CastX_19 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 77 "interval.m"
    MR_Integer backend_libs__interval__CastY_20 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 77 "interval.m"
    backend_libs__interval__succeeded = (backend_libs__interval__CastX_19 == backend_libs__interval__CastY_20);
#line 77 "interval.m"
    if (backend_libs__interval__succeeded)
#line 77 "interval.m"
      backend_libs__interval__succeeded = MR_TRUE;
#line 77 "interval.m"
    else
#line 77 "interval.m"
#line 77 "interval.m"
      switch (MR_tag((MR_Word) backend_libs__interval__HeadVar__1_1)) {
#line 77 "interval.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
        case (MR_Integer) 0:
#line 77 "interval.m"
#line 77 "interval.m"
          switch (MR_unmkbody(backend_libs__interval__HeadVar__1_1)) {
#line 77 "interval.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
            case (MR_Integer) 0:
#line 77 "interval.m"
              {
#line 77 "interval.m"
                MR_Integer backend_libs__interval__CastX_3 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 77 "interval.m"
                MR_Integer backend_libs__interval__CastY_4 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 77 "interval.m"
                backend_libs__interval__succeeded = (backend_libs__interval__CastY_4 == backend_libs__interval__CastX_3);
#line 77 "interval.m"
              }
#line 77 "interval.m"
              break;
#line 77 "interval.m"
            case (MR_Integer) 1:
#line 77 "interval.m"
              {
#line 77 "interval.m"
                MR_Integer backend_libs__interval__CastX_5 = (MR_Integer) backend_libs__interval__HeadVar__1_1;
#line 77 "interval.m"
                MR_Integer backend_libs__interval__CastY_6 = (MR_Integer) backend_libs__interval__HeadVar__2_2;

#line 77 "interval.m"
                backend_libs__interval__succeeded = (backend_libs__interval__CastY_6 == backend_libs__interval__CastX_5);
#line 77 "interval.m"
              }
#line 77 "interval.m"
              break;
#line 77 "interval.m"
          }
#line 77 "interval.m"
          break;
#line 77 "interval.m"
        case (MR_Integer) 1:
#line 77 "interval.m"
          {
#line 77 "interval.m"
            MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 77 "interval.m"
            MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 77 "interval.m"
            MR_Word backend_libs__interval__V_9_9;
#line 77 "interval.m"
            MR_Word backend_libs__interval__V_10_10;
#line 77 "interval.m"
            MR_Integer backend_libs__interval__V_27_27;
#line 77 "interval.m"
            MR_Integer backend_libs__interval__V_28_28;

#line 77 "interval.m"
            backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 77 "interval.m"
            if (backend_libs__interval__succeeded)
#line 77 "interval.m"
              {
#line 77 "interval.m"
                backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 77 "interval.m"
                backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 8422 "backend_libs.interval.c"
                backend_libs__interval__succeeded = (backend_libs__interval__V_7_7 == backend_libs__interval__V_9_9);
#line 77 "interval.m"
                if (backend_libs__interval__succeeded)
#line 77 "interval.m"
                  {
#line 8428 "backend_libs.interval.c"
                    backend_libs__interval__V_27_27 = (MR_Integer) backend_libs__interval__V_8_8;
#line 8430 "backend_libs.interval.c"
                    backend_libs__interval__V_28_28 = (MR_Integer) backend_libs__interval__V_10_10;
#line 8432 "backend_libs.interval.c"
                    backend_libs__interval__succeeded = (backend_libs__interval__V_27_27 == backend_libs__interval__V_28_28);
#line 77 "interval.m"
                  }
#line 77 "interval.m"
              }
#line 77 "interval.m"
          }
#line 77 "interval.m"
          break;
#line 77 "interval.m"
        case (MR_Integer) 2:
#line 77 "interval.m"
          {
#line 77 "interval.m"
            MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 77 "interval.m"
            MR_Word backend_libs__interval__V_12_12;
#line 77 "interval.m"
            MR_Integer backend_libs__interval__V_31_31;
#line 77 "interval.m"
            MR_Integer backend_libs__interval__V_32_32;

#line 77 "interval.m"
            backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 77 "interval.m"
            if (backend_libs__interval__succeeded)
#line 77 "interval.m"
              {
#line 77 "interval.m"
                backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 8463 "backend_libs.interval.c"
                backend_libs__interval__V_31_31 = (MR_Integer) backend_libs__interval__V_11_11;
#line 8465 "backend_libs.interval.c"
                backend_libs__interval__V_32_32 = (MR_Integer) backend_libs__interval__V_12_12;
#line 8467 "backend_libs.interval.c"
                backend_libs__interval__succeeded = (backend_libs__interval__V_31_31 == backend_libs__interval__V_32_32);
#line 77 "interval.m"
              }
#line 77 "interval.m"
          }
#line 77 "interval.m"
          break;
#line 77 "interval.m"
        case (MR_Integer) 3:
#line 77 "interval.m"
#line 77 "interval.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)))) {
#line 77 "interval.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 77 "interval.m"
            case (MR_Integer) 0:
#line 77 "interval.m"
              {
#line 77 "interval.m"
                MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 77 "interval.m"
                MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__1_1, (MR_Integer) 2)));
#line 77 "interval.m"
                MR_Word backend_libs__interval__V_15_15;
#line 77 "interval.m"
                MR_Word backend_libs__interval__V_16_16;
#line 77 "interval.m"
                MR_Integer backend_libs__interval__V_25_25;
#line 77 "interval.m"
                MR_Integer backend_libs__interval__V_26_26;

#line 77 "interval.m"
                backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 77 "interval.m"
                if (backend_libs__interval__succeeded)
#line 77 "interval.m"
                  {
#line 77 "interval.m"
                    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 77 "interval.m"
                    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 2)));
#line 8509 "backend_libs.interval.c"
                    backend_libs__interval__succeeded = (backend_libs__interval__V_13_13 == backend_libs__interval__V_15_15);
#line 77 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 77 "interval.m"
                      {
#line 8515 "backend_libs.interval.c"
                        backend_libs__interval__V_25_25 = (MR_Integer) backend_libs__interval__V_14_14;
#line 8517 "backend_libs.interval.c"
                        backend_libs__interval__V_26_26 = (MR_Integer) backend_libs__interval__V_16_16;
#line 8519 "backend_libs.interval.c"
                        backend_libs__interval__succeeded = (backend_libs__interval__V_25_25 == backend_libs__interval__V_26_26);
#line 77 "interval.m"
                      }
#line 77 "interval.m"
                  }
#line 77 "interval.m"
              }
#line 77 "interval.m"
              break;
#line 77 "interval.m"
            case (MR_Integer) 1:
#line 77 "interval.m"
              {
#line 77 "interval.m"
                MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 77 "interval.m"
                MR_Word backend_libs__interval__V_18_18;
#line 77 "interval.m"
                MR_Integer backend_libs__interval__V_29_29;
#line 77 "interval.m"
                MR_Integer backend_libs__interval__V_30_30;

#line 77 "interval.m"
                backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 77 "interval.m"
                if (backend_libs__interval__succeeded)
#line 77 "interval.m"
                  {
#line 77 "interval.m"
                    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 8550 "backend_libs.interval.c"
                    backend_libs__interval__V_29_29 = (MR_Integer) backend_libs__interval__V_17_17;
#line 8552 "backend_libs.interval.c"
                    backend_libs__interval__V_30_30 = (MR_Integer) backend_libs__interval__V_18_18;
#line 8554 "backend_libs.interval.c"
                    backend_libs__interval__succeeded = (backend_libs__interval__V_29_29 == backend_libs__interval__V_30_30);
#line 77 "interval.m"
                  }
#line 77 "interval.m"
              }
#line 77 "interval.m"
              break;
#line 77 "interval.m"
          }
#line 77 "interval.m"
          break;
#line 77 "interval.m"
      }
#line 77 "interval.m"
    return backend_libs__interval__succeeded;
#line 77 "interval.m"
  }
#line 77 "interval.m"
}

#line 142 "interval.m"
void MR_CALL 
backend_libs__interval__use_cell_8_p_0(
#line 142 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_9,
#line 142 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 142 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 142 "interval.m"
  MR_Word backend_libs__interval__HeadVar__3_3,
#line 142 "interval.m"
  MR_Word backend_libs__interval__HeadVar__4_4,
#line 142 "interval.m"
  MR_Word backend_libs__interval__HeadVar__5_5,
#line 142 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__6_6,
#line 142 "interval.m"
  MR_Box backend_libs__interval__HeadVar__7_7,
#line 142 "interval.m"
  MR_Box * backend_libs__interval__HeadVar__8_8)
#line 142 "interval.m"
{
#line 142 "interval.m"
  {
#line 142 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 142 "interval.m"
    void MR_CALL (* backend_libs__interval__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_9, (MR_Integer) 0)), (MR_Integer) 5)));
#line 142 "interval.m"
    MR_Box backend_libs__interval__conv1_HeadVar__6_6;

#line 142 "interval.m"
    {
#line 142 "interval.m"
      backend_libs__interval__func_0(((MR_Box) backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_9), ((MR_Box) (backend_libs__interval__HeadVar__1_1)), ((MR_Box) (backend_libs__interval__HeadVar__2_2)), ((MR_Box) (backend_libs__interval__HeadVar__3_3)), ((MR_Box) (backend_libs__interval__HeadVar__4_4)), ((MR_Box) (backend_libs__interval__HeadVar__5_5)), &backend_libs__interval__conv1_HeadVar__6_6, backend_libs__interval__HeadVar__7_7, backend_libs__interval__HeadVar__8_8);
    }
#line 142 "interval.m"
    *backend_libs__interval__HeadVar__6_6 = ((MR_Word) backend_libs__interval__conv1_HeadVar__6_6);
#line 142 "interval.m"
  }
#line 142 "interval.m"
}

#line 1345 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_4(
#line 1345 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1345 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1345 "interval.m"
{
#line 1345 "interval.m"
  {
#line 1345 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1345 "interval.m"
    {
#line 1345 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
    }
#line 1345 "interval.m"
  }
#line 1345 "interval.m"
}

#line 1341 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_3(
#line 1341 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1341 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 1341 "interval.m"
{
#line 1341 "interval.m"
  {
#line 1341 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 1341 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1341 "interval.m"
    MR_Integer backend_libs__interval__conv1_Num_3;

#line 1341 "interval.m"
    {
#line 1341 "interval.m"
      backend_libs__interval__conv1_Num_3 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 1341 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv1_Num_3));
#line 1341 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 1341 "interval.m"
  }
#line 1341 "interval.m"
}

#line 1345 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_2(
#line 1345 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1345 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1345 "interval.m"
{
#line 1345 "interval.m"
  {
#line 1345 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1345 "interval.m"
    {
#line 1345 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
    }
#line 1345 "interval.m"
  }
#line 1345 "interval.m"
}

#line 1336 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0_1(
#line 1336 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1336 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1336 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2)
#line 1336 "interval.m"
{
#line 1336 "interval.m"
  {
#line 1336 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1336 "interval.m"
    MR_Integer backend_libs__interval__conv0_HeadVar__2_32;

#line 1336 "interval.m"
    {
#line 1336 "interval.m"
      backend_libs__interval__IntroducedFrom__pred__dump_anchor_follow__1336__1_2_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1), &backend_libs__interval__conv0_HeadVar__2_32);
    }
#line 1336 "interval.m"
    *backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__2_32));
#line 1336 "interval.m"
  }
#line 1336 "interval.m"
}

#line 1328 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_anchor_follow_3_p_0(
#line 1328 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1)
#line 1328 "interval.m"
{
#line 1331 "interval.m"
  {
#line 1331 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1331 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_36_36;
#line 1331 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_37_37;
#line 1331 "interval.m"
    MR_Word backend_libs__interval__Anchor_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1331 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1331 "interval.m"
    MR_Word backend_libs__interval__Vars_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_5, (MR_Integer) 0)));
#line 1331 "interval.m"
    MR_Word backend_libs__interval__Intervals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_5, (MR_Integer) 1)));
#line 1331 "interval.m"
    MR_Word backend_libs__interval__VarNums_9;
#line 1331 "interval.m"
    MR_Word backend_libs__interval__IntervalList_10;
#line 1331 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 1331 "interval.m"
    MR_Word backend_libs__interval__V_25_25;

#line 1333 "interval.m"
    {
#line 1333 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1334 "interval.m"
    {
#line 1334 "interval.m"
      mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Anchor_4)));
    }
#line 1335 "interval.m"
    {
#line 1335 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) " =>\n");
    }
#line 1336 "interval.m"
    {
#line 1336 "interval.m"
      backend_libs__interval__V_19_19 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_7);
    }
#line 8789 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_36_36 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1336 "interval.m"
    {
#line 1336 "interval.m"
      mercury__list__map_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], backend_libs__interval__TypeCtorInfo_36_36, (MR_Word) &backend_libs__interval_scalar_common_2[21], backend_libs__interval__V_19_19, &backend_libs__interval__VarNums_9);
    }
#line 1337 "interval.m"
    {
#line 1337 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "vars [");
    }
#line 1345 "interval.m"
    {
#line 1345 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__VarNums_9, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[22]);
    }
#line 1339 "interval.m"
    {
#line 1339 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "]\nintervals: ");
    }
#line 8811 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_37_37 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 1340 "interval.m"
    {
#line 1340 "interval.m"
      mercury__set__to_sorted_list_2_p_0(backend_libs__interval__TypeCtorInfo_37_37, backend_libs__interval__Intervals_8, &backend_libs__interval__IntervalList_10);
    }
#line 1341 "interval.m"
    {
#line 1341 "interval.m"
      backend_libs__interval__V_25_25 = mercury__list__map_2_f_0(backend_libs__interval__TypeCtorInfo_37_37, backend_libs__interval__TypeCtorInfo_36_36, (MR_Word) &backend_libs__interval_scalar_common_2[23], backend_libs__interval__IntervalList_10);
    }
#line 1345 "interval.m"
    {
#line 1345 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__V_25_25, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[24]);
    }
#line 1342 "interval.m"
    {
#line 1342 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 1331 "interval.m"
  }
#line 1328 "interval.m"
}

#line 1345 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_2(
#line 1345 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1345 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1345 "interval.m"
{
#line 1345 "interval.m"
  {
#line 1345 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1345 "interval.m"
    {
#line 1345 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
    }
#line 1345 "interval.m"
  }
#line 1345 "interval.m"
}

#line 1323 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0_1(
#line 1323 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1323 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1323 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2)
#line 1323 "interval.m"
{
#line 1323 "interval.m"
  {
#line 1323 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1323 "interval.m"
    MR_Integer backend_libs__interval__conv0_HeadVar__2_17;

#line 1323 "interval.m"
    {
#line 1323 "interval.m"
      backend_libs__interval__IntroducedFrom__pred__dump_deletion__1323__1_2_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1), &backend_libs__interval__conv0_HeadVar__2_17);
    }
#line 1323 "interval.m"
    *backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__2_17));
#line 1323 "interval.m"
  }
#line 1323 "interval.m"
}

#line 1320 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_deletion_3_p_0(
#line 1320 "interval.m"
  MR_Word backend_libs__interval__Vars_4)
#line 1320 "interval.m"
{
#line 1322 "interval.m"
  {
#line 1322 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1322 "interval.m"
    MR_Word backend_libs__interval__VarNums_6;
#line 1322 "interval.m"
    MR_Word backend_libs__interval__V_10_10;

#line 1323 "interval.m"
    {
#line 1323 "interval.m"
      backend_libs__interval__V_10_10 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_4);
    }
#line 1323 "interval.m"
    {
#line 1323 "interval.m"
      mercury__list__map_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__interval_scalar_common_2[19], backend_libs__interval__V_10_10, &backend_libs__interval__VarNums_6);
    }
#line 1324 "interval.m"
    {
#line 1324 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) " [");
    }
#line 1345 "interval.m"
    {
#line 1345 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__VarNums_6, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[20]);
    }
#line 1326 "interval.m"
    {
#line 1326 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "]");
    }
#line 1322 "interval.m"
  }
#line 1320 "interval.m"
}

#line 1314 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_3(
#line 1314 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1314 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1314 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1314 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1314 "interval.m"
{
#line 1314 "interval.m"
  {
#line 1314 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1314 "interval.m"
    {
#line 1314 "interval.m"
      backend_libs__interval__dump_deletion_3_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 1314 "interval.m"
  }
#line 1314 "interval.m"
}

#line 1303 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_2(
#line 1303 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1303 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1303 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_2)
#line 1303 "interval.m"
{
#line 1303 "interval.m"
  {
#line 1303 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1303 "interval.m"
    MR_Integer backend_libs__interval__conv5_HeadVar__2_155;

#line 1303 "interval.m"
    {
#line 1303 "interval.m"
      backend_libs__interval__IntroducedFrom__pred__dump_interval_info_id__1303__1_2_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1), &backend_libs__interval__conv5_HeadVar__2_155);
    }
#line 1303 "interval.m"
    *backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv5_HeadVar__2_155));
#line 1303 "interval.m"
  }
#line 1303 "interval.m"
}

#line 1281 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0_1(
#line 1281 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1281 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 1281 "interval.m"
{
#line 1281 "interval.m"
  {
#line 1281 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 1281 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 1281 "interval.m"
    MR_Integer backend_libs__interval__conv1_Num_3;

#line 1281 "interval.m"
    {
#line 1281 "interval.m"
      backend_libs__interval__conv1_Num_3 = backend_libs__interval__interval_id_to_int_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 1281 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv1_Num_3));
#line 1281 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 1281 "interval.m"
  }
#line 1281 "interval.m"
}

#line 1273 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_id_4_p_0(
#line 1273 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_5,
#line 1273 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6)
#line 1273 "interval.m"
{
#line 1276 "interval.m"
  {
#line 1276 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1276 "interval.m"
    MR_Integer backend_libs__interval__V_19_19;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__SuccIds_8;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_23_23;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 1280 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 1280 "interval.m"
    MR_Box backend_libs__interval__conv0_SuccIds_8;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__Start_10;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_93_93;
#line 1288 "interval.m"
    MR_Word backend_libs__interval__V_94_94;
#line 1288 "interval.m"
    MR_Box backend_libs__interval__conv2_Start_10;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__End_11;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_95_95;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_96_96;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_97_97;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_98_98;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_99_99;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_100_100;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_101_101;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_102_102;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_103_103;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_104_104;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_105_105;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_106_106;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_107_107;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_108_108;
#line 1295 "interval.m"
    MR_Word backend_libs__interval__V_109_109;
#line 1295 "interval.m"
    MR_Box backend_libs__interval__conv3_End_11;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__Vars_12;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_110_110;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_111_111;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_112_112;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_113_113;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_114_114;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_115_115;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_116_116;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_117_117;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_118_118;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_119_119;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_120_120;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_121_121;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_122_122;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_123_123;
#line 1302 "interval.m"
    MR_Word backend_libs__interval__V_124_124;
#line 1302 "interval.m"
    MR_Box backend_libs__interval__conv4_Vars_12;
#line 1310 "interval.m"
    MR_Word backend_libs__interval__Deletions_14;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_125_125;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_126_126;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_127_127;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_128_128;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_129_129;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_130_130;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_131_131;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_132_132;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_133_133;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_134_134;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_135_135;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_136_136;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_137_137;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_138_138;
#line 1311 "interval.m"
    MR_Word backend_libs__interval__V_139_139;
#line 1311 "interval.m"
    MR_Box backend_libs__interval__conv6_Deletions_14;

#line 1277 "interval.m"
    {
#line 1277 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\ninterval ");
    }
#line 1278 "interval.m"
    {
#line 1278 "interval.m"
      backend_libs__interval__V_19_19 = backend_libs__interval__interval_id_to_int_1_f_0(backend_libs__interval__IntervalId_6);
    }
#line 1278 "interval.m"
    {
#line 1278 "interval.m"
      mercury__io__write_int_3_p_0(backend_libs__interval__V_19_19);
    }
#line 1279 "interval.m"
    {
#line 1279 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) ": ");
    }
#line 1280 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1280 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1280 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1280 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1280 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1280 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1280 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1280 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1280 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1280 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1280 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1280 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1280 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1280 "interval.m"
    backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1280 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1280 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1280 "interval.m"
    {
#line 1280 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__V_23_23, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv0_SuccIds_8);
    }
#line 1280 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1280 "interval.m"
      {
#line 1280 "interval.m"
        backend_libs__interval__SuccIds_8 = ((MR_Word) backend_libs__interval__conv0_SuccIds_8);
#line 1280 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1280 "interval.m"
      }
#line 1280 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1281 "interval.m"
      {
#line 1281 "interval.m"
        MR_Word backend_libs__interval__SuccNums_9;

#line 1281 "interval.m"
        {
#line 1281 "interval.m"
          backend_libs__interval__SuccNums_9 = mercury__list__map_2_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__interval_scalar_common_2[16], backend_libs__interval__SuccIds_8);
        }
#line 1282 "interval.m"
        {
#line 1282 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "succ [");
        }
#line 1283 "interval.m"
        {
#line 1283 "interval.m"
          backend_libs__interval__write_int_list_3_p_0(backend_libs__interval__SuccNums_9);
        }
#line 1284 "interval.m"
        {
#line 1284 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n");
        }
#line 1281 "interval.m"
      }
#line 1280 "interval.m"
    else
#line 1286 "interval.m"
      {
#line 1286 "interval.m"
        {
#line 1286 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no succ\n");
        }
#line 1286 "interval.m"
      }
#line 1288 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1288 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1288 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1288 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1288 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1288 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1288 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1288 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1288 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1288 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1288 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1288 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1288 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1288 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1288 "interval.m"
    backend_libs__interval__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1288 "interval.m"
    backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1288 "interval.m"
    {
#line 1288 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, backend_libs__interval__V_32_32, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv2_Start_10);
    }
#line 1288 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1288 "interval.m"
      {
#line 1288 "interval.m"
        backend_libs__interval__Start_10 = ((MR_Word) backend_libs__interval__conv2_Start_10);
#line 1288 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1288 "interval.m"
      }
#line 1288 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1289 "interval.m"
      {
#line 1289 "interval.m"
        {
#line 1289 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "start ");
        }
#line 1290 "interval.m"
        {
#line 1290 "interval.m"
          mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Start_10)));
        }
#line 1291 "interval.m"
        {
#line 1291 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1289 "interval.m"
      }
#line 1288 "interval.m"
    else
#line 1293 "interval.m"
      {
#line 1293 "interval.m"
        {
#line 1293 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no start\n");
        }
#line 1293 "interval.m"
      }
#line 1295 "interval.m"
    backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1295 "interval.m"
    backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1295 "interval.m"
    backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1295 "interval.m"
    backend_libs__interval__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1295 "interval.m"
    backend_libs__interval__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1295 "interval.m"
    backend_libs__interval__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1295 "interval.m"
    backend_libs__interval__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1295 "interval.m"
    backend_libs__interval__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1295 "interval.m"
    backend_libs__interval__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1295 "interval.m"
    backend_libs__interval__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1295 "interval.m"
    backend_libs__interval__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1295 "interval.m"
    backend_libs__interval__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1295 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1295 "interval.m"
    backend_libs__interval__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1295 "interval.m"
    backend_libs__interval__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1295 "interval.m"
    backend_libs__interval__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1295 "interval.m"
    {
#line 1295 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, backend_libs__interval__V_40_40, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv3_End_11);
    }
#line 1295 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1295 "interval.m"
      {
#line 1295 "interval.m"
        backend_libs__interval__End_11 = ((MR_Word) backend_libs__interval__conv3_End_11);
#line 1295 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1295 "interval.m"
      }
#line 1295 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1296 "interval.m"
      {
#line 1296 "interval.m"
        {
#line 1296 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "end ");
        }
#line 1297 "interval.m"
        {
#line 1297 "interval.m"
          mercury__io__write_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__End_11)));
        }
#line 1298 "interval.m"
        {
#line 1298 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1296 "interval.m"
      }
#line 1295 "interval.m"
    else
#line 1300 "interval.m"
      {
#line 1300 "interval.m"
        {
#line 1300 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no end\n");
        }
#line 1300 "interval.m"
      }
#line 1302 "interval.m"
    backend_libs__interval__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1302 "interval.m"
    backend_libs__interval__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1302 "interval.m"
    backend_libs__interval__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1302 "interval.m"
    backend_libs__interval__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1302 "interval.m"
    backend_libs__interval__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1302 "interval.m"
    backend_libs__interval__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1302 "interval.m"
    backend_libs__interval__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1302 "interval.m"
    backend_libs__interval__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1302 "interval.m"
    backend_libs__interval__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1302 "interval.m"
    backend_libs__interval__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1302 "interval.m"
    backend_libs__interval__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1302 "interval.m"
    backend_libs__interval__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1302 "interval.m"
    backend_libs__interval__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1302 "interval.m"
    backend_libs__interval__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1302 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1302 "interval.m"
    backend_libs__interval__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1302 "interval.m"
    {
#line 1302 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__V_48_48, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv4_Vars_12);
    }
#line 1302 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1302 "interval.m"
      {
#line 1302 "interval.m"
        backend_libs__interval__Vars_12 = ((MR_Word) backend_libs__interval__conv4_Vars_12);
#line 1302 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1302 "interval.m"
      }
#line 1302 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1303 "interval.m"
      {
#line 1303 "interval.m"
        MR_Word backend_libs__interval__VarNums_13;
#line 1303 "interval.m"
        MR_Word backend_libs__interval__V_50_50;

#line 1303 "interval.m"
        {
#line 1303 "interval.m"
          backend_libs__interval__V_50_50 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_12);
        }
#line 1303 "interval.m"
        {
#line 1303 "interval.m"
          mercury__list__map_3_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__interval_scalar_common_2[17], backend_libs__interval__V_50_50, &backend_libs__interval__VarNums_13);
        }
#line 1304 "interval.m"
        {
#line 1304 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "vars [");
        }
#line 1305 "interval.m"
        {
#line 1305 "interval.m"
          backend_libs__interval__write_int_list_3_p_0(backend_libs__interval__VarNums_13);
        }
#line 1306 "interval.m"
        {
#line 1306 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n");
        }
#line 1303 "interval.m"
      }
#line 1302 "interval.m"
    else
#line 1308 "interval.m"
      {
#line 1308 "interval.m"
        {
#line 1308 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "no vars\n");
        }
#line 1308 "interval.m"
      }
#line 1311 "interval.m"
    backend_libs__interval__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 0)));
#line 1311 "interval.m"
    backend_libs__interval__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 1)));
#line 1311 "interval.m"
    backend_libs__interval__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 2)));
#line 1311 "interval.m"
    backend_libs__interval__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 3)));
#line 1311 "interval.m"
    backend_libs__interval__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 4)));
#line 1311 "interval.m"
    backend_libs__interval__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 5)));
#line 1311 "interval.m"
    backend_libs__interval__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 6)));
#line 1311 "interval.m"
    backend_libs__interval__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 7)));
#line 1311 "interval.m"
    backend_libs__interval__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 8)));
#line 1311 "interval.m"
    backend_libs__interval__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 9)));
#line 1311 "interval.m"
    backend_libs__interval__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 10)));
#line 1311 "interval.m"
    backend_libs__interval__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 11)));
#line 1311 "interval.m"
    backend_libs__interval__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 12)));
#line 1311 "interval.m"
    backend_libs__interval__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 13)));
#line 1311 "interval.m"
    backend_libs__interval__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 14)));
#line 1311 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_5, (MR_Integer) 15)));
#line 1311 "interval.m"
    {
#line 1311 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[2], backend_libs__interval__V_58_58, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv6_Deletions_14);
    }
#line 1311 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1311 "interval.m"
      {
#line 1311 "interval.m"
        backend_libs__interval__Deletions_14 = ((MR_Word) backend_libs__interval__conv6_Deletions_14);
#line 1311 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1311 "interval.m"
      }
#line 1310 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1313 "interval.m"
      {
#line 1314 "interval.m"
        MR_Box backend_libs__interval__conv7_STATE_VARIABLE_IO_62_62;

#line 1313 "interval.m"
        {
#line 1313 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "deletions");
        }
#line 1314 "interval.m"
        {
#line 1314 "interval.m"
          mercury__list__foldl_4_p_2((MR_Word) &backend_libs__interval_scalar_common_1[1], (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &backend_libs__interval_scalar_common_2[18], backend_libs__interval__Deletions_14, ((MR_Box) ((MR_Integer) 0)), &backend_libs__interval__conv7_STATE_VARIABLE_IO_62_62);
        }
#line 1315 "interval.m"
        {
#line 1315 "interval.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 1313 "interval.m"
      }
#line 1310 "interval.m"
    else
#line 1310 "interval.m"
      {
#line 1310 "interval.m"
      }
#line 1276 "interval.m"
  }
#line 1273 "interval.m"
}

#line 1246 "interval.m"
static void MR_CALL 
backend_libs__interval__construct_anchors_4_p_0(
#line 1246 "interval.m"
  MR_Word backend_libs__interval__Construct_5,
#line 1246 "interval.m"
  MR_Word backend_libs__interval__Goal_6,
#line 1246 "interval.m"
  MR_Word * backend_libs__interval__StartAnchor_7,
#line 1246 "interval.m"
  MR_Word * backend_libs__interval__EndAnchor_8)
#line 1246 "interval.m"
{
#line 1249 "interval.m"
  {
#line 1249 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1249 "interval.m"
    MR_Word backend_libs__interval__GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_6, (MR_Integer) 1)));
#line 1249 "interval.m"
    MR_Word backend_libs__interval__GoalId_11;
#line 1250 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_6, (MR_Integer) 0)));

#line 1251 "interval.m"
    {
#line 1251 "interval.m"
      backend_libs__interval__GoalId_11 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_10);
    }
#line 1252 "interval.m"
    {
#line 1252 "interval.m"
      MR_Word base;
#line 1252 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "interval.m"
      *backend_libs__interval__StartAnchor_7 = base;
#line 1252 "interval.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Construct_5));
#line 1252 "interval.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__GoalId_11));
#line 1252 "interval.m"
    }
#line 1253 "interval.m"
    {
#line 1253 "interval.m"
      MR_Word base;
#line 1253 "interval.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1253 "interval.m"
      *backend_libs__interval__EndAnchor_8 = base;
#line 1253 "interval.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1253 "interval.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (backend_libs__interval__Construct_5));
#line 1253 "interval.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (backend_libs__interval__GoalId_11));
#line 1253 "interval.m"
    }
#line 1249 "interval.m"
  }
#line 1246 "interval.m"
}

#line 1231 "interval.m"
static void MR_CALL 
backend_libs__interval__build_headvar_subst_4_p_0(
#line 1231 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1231 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2,
#line 1231 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_Subst_0_3,
#line 1231 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_Subst_4)
#line 1231 "interval.m"
{
#line 1234 "interval.m"
  while (MR_TRUE)
#line 1234 "interval.m"
    {
#line 1234 "interval.m"
      /* tailcall optimized into a loop */
#line 1234 "interval.m"
      {
#line 1234 "interval.m"
        MR_bool backend_libs__interval__succeeded;

#line 1234 "interval.m"
        if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1234 "interval.m"
          *backend_libs__interval__STATE_VARIABLE_Subst_4 = backend_libs__interval__STATE_VARIABLE_Subst_0_3;
#line 1234 "interval.m"
        else
#line 1235 "interval.m"
          {
#line 1235 "interval.m"
            MR_Word backend_libs__interval__HeadVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1235 "interval.m"
            MR_Word backend_libs__interval__HeadVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1235 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_Subst_17_17;
#line 1236 "interval.m"
            MR_Word backend_libs__interval__Replacement_13;
#line 1236 "interval.m"
            MR_Word backend_libs__interval__TypeInfo_19_19 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1236 "interval.m"
            MR_Box backend_libs__interval__conv0_Replacement_13;

#line 1236 "interval.m"
            {
#line 1236 "interval.m"
              backend_libs__interval__succeeded = mercury__map__search_3_p_0(backend_libs__interval__TypeInfo_19_19, backend_libs__interval__TypeInfo_19_19, backend_libs__interval__HeadVar__2_2, ((MR_Box) (backend_libs__interval__HeadVar_9)), &backend_libs__interval__conv0_Replacement_13);
            }
#line 1236 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1236 "interval.m"
              {
#line 1236 "interval.m"
                backend_libs__interval__Replacement_13 = ((MR_Word) backend_libs__interval__conv0_Replacement_13);
#line 1236 "interval.m"
                backend_libs__interval__succeeded = MR_TRUE;
#line 1236 "interval.m"
              }
#line 1236 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1237 "interval.m"
              {
#line 1237 "interval.m"
                MR_Word backend_libs__interval__TypeInfo_20_20 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1237 "interval.m"
                MR_Word backend_libs__interval__STATE_VARIABLE_Subst_16_16;

#line 1237 "interval.m"
                {
#line 1237 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_20_20, backend_libs__interval__TypeInfo_20_20, ((MR_Box) (backend_libs__interval__Replacement_13)), ((MR_Box) (backend_libs__interval__HeadVar_9)), backend_libs__interval__STATE_VARIABLE_Subst_0_3, &backend_libs__interval__STATE_VARIABLE_Subst_16_16);
                }
#line 1238 "interval.m"
                {
#line 1238 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_20_20, backend_libs__interval__TypeInfo_20_20, ((MR_Box) (backend_libs__interval__HeadVar_9)), ((MR_Box) (backend_libs__interval__Replacement_13)), backend_libs__interval__STATE_VARIABLE_Subst_16_16, &backend_libs__interval__STATE_VARIABLE_Subst_17_17);
                }
#line 1237 "interval.m"
              }
#line 1236 "interval.m"
            else
#line 1236 "interval.m"
              backend_libs__interval__STATE_VARIABLE_Subst_17_17 = backend_libs__interval__STATE_VARIABLE_Subst_0_3;
#line 1242 "interval.m"
            /* direct tailcall eliminated */
#line 1242 "interval.m"
            {
#line 1242 "interval.m"
              MR_Word backend_libs__interval__HeadVar__1__tmp_copy_1 = backend_libs__interval__HeadVars_10;
#line 1242 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_Subst_0__tmp_copy_3 = backend_libs__interval__STATE_VARIABLE_Subst_17_17;

#line 1242 "interval.m"
              backend_libs__interval__STATE_VARIABLE_Subst_0_3 = backend_libs__interval__STATE_VARIABLE_Subst_0__tmp_copy_3;
#line 1242 "interval.m"
              backend_libs__interval__HeadVar__1_1 = backend_libs__interval__HeadVar__1__tmp_copy_1;
#line 1242 "interval.m"
            }
#line 1242 "interval.m"
            continue;
#line 1235 "interval.m"
          }
#line 1234 "interval.m"
      }
#line 1234 "interval.m"
      break;
#line 1234 "interval.m"
    }
#line 1231 "interval.m"
}

#line 1206 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_cases_7_p_0(
#line 1206 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1206 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1206 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1206 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1206 "interval.m"
  MR_Word backend_libs__interval__VarRename0_5,
#line 1206 "interval.m"
  MR_Word backend_libs__interval__InsertMap_6,
#line 1206 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_7)
#line 1206 "interval.m"
{
#line 1210 "interval.m"
  {
#line 1210 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1210 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1210 "interval.m"
      {
#line 1210 "interval.m"
        *backend_libs__interval__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1210 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_4 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_3;
#line 1210 "interval.m"
      }
#line 1210 "interval.m"
    else
#line 1212 "interval.m"
      {
#line 1212 "interval.m"
        MR_Word backend_libs__interval__Case0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1212 "interval.m"
        MR_Word backend_libs__interval__Cases0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1212 "interval.m"
        MR_Word backend_libs__interval__Case_16;
#line 1212 "interval.m"
        MR_Word backend_libs__interval__Cases_17;
#line 1212 "interval.m"
        MR_Word backend_libs__interval__MainConsId_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case0_14, (MR_Integer) 0)));
#line 1212 "interval.m"
        MR_Word backend_libs__interval__OtherConsIds_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case0_14, (MR_Integer) 1)));
#line 1212 "interval.m"
        MR_Word backend_libs__interval__Goal0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case0_14, (MR_Integer) 2)));
#line 1212 "interval.m"
        MR_Word backend_libs__interval__Goal_25;
#line 1212 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_29_29;
#line 1214 "interval.m"
        MR_Word backend_libs__interval__V_26_26;

#line 1214 "interval.m"
        {
#line 1214 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Goal0_24, &backend_libs__interval__Goal_25, backend_libs__interval__STATE_VARIABLE_VarInfo_0_3, &backend_libs__interval__STATE_VARIABLE_VarInfo_29_29, backend_libs__interval__VarRename0_5, &backend_libs__interval__V_26_26, backend_libs__interval__InsertMap_6, backend_libs__interval__MaybeFeature_7);
        }
#line 1216 "interval.m"
        {
#line 1216 "interval.m"
          backend_libs__interval__Case_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Case_16, 0) = ((MR_Box) (backend_libs__interval__MainConsId_22));
#line 1216 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Case_16, 1) = ((MR_Box) (backend_libs__interval__OtherConsIds_23));
#line 1216 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Case_16, 2) = ((MR_Box) (backend_libs__interval__Goal_25));
#line 1216 "interval.m"
        }
#line 1217 "interval.m"
        {
#line 1217 "interval.m"
          backend_libs__interval__record_decisions_in_cases_7_p_0(backend_libs__interval__Cases0_15, &backend_libs__interval__Cases_17, backend_libs__interval__STATE_VARIABLE_VarInfo_29_29, backend_libs__interval__STATE_VARIABLE_VarInfo_4, backend_libs__interval__VarRename0_5, backend_libs__interval__InsertMap_6, backend_libs__interval__MaybeFeature_7);
        }
#line 1211 "interval.m"
        {
#line 1211 "interval.m"
          MR_Word base;
#line 1211 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "interval.m"
          *backend_libs__interval__HeadVar__2_2 = base;
#line 1211 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Case_16));
#line 1211 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__Cases_17));
#line 1211 "interval.m"
        }
#line 1212 "interval.m"
      }
#line 1210 "interval.m"
  }
#line 1206 "interval.m"
}

#line 1168 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_conj_9_p_0(
#line 1168 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1168 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__2_2,
#line 1168 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_3,
#line 1168 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_4,
#line 1168 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_5,
#line 1168 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_6,
#line 1168 "interval.m"
  MR_Word backend_libs__interval__ConjType_7,
#line 1168 "interval.m"
  MR_Word backend_libs__interval__InsertMap_8,
#line 1168 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_9)
#line 1168 "interval.m"
{
#line 1173 "interval.m"
  {
#line 1173 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1173 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1173 "interval.m"
      {
#line 1173 "interval.m"
        *backend_libs__interval__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1173 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_6 = backend_libs__interval__STATE_VARIABLE_VarRename_0_5;
#line 1173 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_4 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_3;
#line 1173 "interval.m"
      }
#line 1173 "interval.m"
    else
#line 1175 "interval.m"
      {
#line 1175 "interval.m"
        MR_Word backend_libs__interval__Goal0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1175 "interval.m"
        MR_Word backend_libs__interval__Goals0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1175 "interval.m"
        MR_Word backend_libs__interval__Goal_27;
#line 1175 "interval.m"
        MR_Word backend_libs__interval__TailGoals_28;
#line 1175 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_36_36;
#line 1175 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_37_37;
#line 1180 "interval.m"
        MR_Word backend_libs__interval__SubGoals_30;
#line 1181 "interval.m"
        MR_Word backend_libs__interval__InnerConjType_29;
#line 1181 "interval.m"
        MR_Word backend_libs__interval__V_40_40;
#line 1181 "interval.m"
        MR_Word backend_libs__interval__V_31_31;

#line 1176 "interval.m"
        {
#line 1176 "interval.m"
          backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Goal0_19, &backend_libs__interval__Goal_27, backend_libs__interval__STATE_VARIABLE_VarInfo_0_3, &backend_libs__interval__STATE_VARIABLE_VarInfo_36_36, backend_libs__interval__STATE_VARIABLE_VarRename_0_5, &backend_libs__interval__STATE_VARIABLE_VarRename_37_37, backend_libs__interval__InsertMap_8, backend_libs__interval__MaybeFeature_9);
        }
#line 1178 "interval.m"
        {
#line 1178 "interval.m"
          backend_libs__interval__record_decisions_in_conj_9_p_0(backend_libs__interval__Goals0_20, &backend_libs__interval__TailGoals_28, backend_libs__interval__STATE_VARIABLE_VarInfo_36_36, backend_libs__interval__STATE_VARIABLE_VarInfo_4, backend_libs__interval__STATE_VARIABLE_VarRename_37_37, backend_libs__interval__STATE_VARIABLE_VarRename_6, backend_libs__interval__ConjType_7, backend_libs__interval__InsertMap_8, backend_libs__interval__MaybeFeature_9);
        }
#line 1181 "interval.m"
        backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_27, (MR_Integer) 0)));
#line 1181 "interval.m"
        backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal_27, (MR_Integer) 1)));
#line 1181 "interval.m"
        backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__V_40_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__V_40_40, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1181 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1181 "interval.m"
          {
#line 1181 "interval.m"
            backend_libs__interval__InnerConjType_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__V_40_40, (MR_Integer) 1)));
#line 1181 "interval.m"
            backend_libs__interval__SubGoals_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__V_40_40, (MR_Integer) 2)));
#line 1182 "interval.m"
            backend_libs__interval__succeeded = (backend_libs__interval__ConjType_7 == backend_libs__interval__InnerConjType_29);
#line 1181 "interval.m"
          }
#line 1180 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1184 "interval.m"
          {
#line 1184 "interval.m"
            {
#line 1184 "interval.m"
              *backend_libs__interval__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, backend_libs__interval__SubGoals_30, backend_libs__interval__TailGoals_28);
            }
#line 1184 "interval.m"
          }
#line 1180 "interval.m"
        else
#line 1186 "interval.m"
          {
#line 1186 "interval.m"
            MR_Word base;
#line 1186 "interval.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "interval.m"
            *backend_libs__interval__HeadVar__2_2 = base;
#line 1186 "interval.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Goal_27));
#line 1186 "interval.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__TailGoals_28));
#line 1186 "interval.m"
          }
#line 1175 "interval.m"
      }
#line 1173 "interval.m"
  }
#line 1168 "interval.m"
}

#line 1137 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_at_call_site_9_p_0(
#line 1137 "interval.m"
  MR_Word backend_libs__interval__Goal0_10,
#line 1137 "interval.m"
  MR_Word * backend_libs__interval__Goal_11,
#line 1137 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_25,
#line 1137 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_26,
#line 1137 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_27,
#line 1137 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_28,
#line 1137 "interval.m"
  MR_Word backend_libs__interval__MustHaveMap_14,
#line 1137 "interval.m"
  MR_Word backend_libs__interval__InsertMap_15,
#line 1137 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_16)
#line 1137 "interval.m"
{
#line 1143 "interval.m"
  {
#line 1143 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1143 "interval.m"
    MR_Word backend_libs__interval__GoalInfo0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_10, (MR_Integer) 1)));
#line 1143 "interval.m"
    MR_Word backend_libs__interval__Goal1_19;
#line 1144 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_10, (MR_Integer) 0)));
#line 1148 "interval.m"
    MR_Word backend_libs__interval__MaybeNeedAcrossCall_20;
#line 1149 "interval.m"
    MR_Word backend_libs__interval___NeedAcrossCall_21;

#line 1145 "interval.m"
    {
#line 1145 "interval.m"
      hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__STATE_VARIABLE_VarRename_0_27, backend_libs__interval__Goal0_10, &backend_libs__interval__Goal1_19);
    }
#line 1147 "interval.m"
    {
#line 1147 "interval.m"
      backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo0_18, &backend_libs__interval__MaybeNeedAcrossCall_20);
    }
#line 1148 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1148 "interval.m"
      {
#line 1149 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__MaybeNeedAcrossCall_20)) == (MR_mktag((MR_Integer) 1)));
#line 1149 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1149 "interval.m"
          backend_libs__interval___NeedAcrossCall_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeNeedAcrossCall_20, (MR_Integer) 0)));
#line 1148 "interval.m"
      }
#line 1146 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1151 "interval.m"
      {
#line 1151 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_22_54;
#line 1151 "interval.m"
        MR_Word backend_libs__interval__GoalId_22;
#line 1151 "interval.m"
        MR_Word backend_libs__interval__Anchor_23;
#line 1151 "interval.m"
        MR_Word backend_libs__interval__Inserts_24;
#line 1151 "interval.m"
        MR_Word backend_libs__interval__InsertGoals_48;
#line 1151 "interval.m"
        MR_Word backend_libs__interval__BranchesGoalInfo_50;
#line 1151 "interval.m"
        MR_Word backend_libs__interval__V_52_52;
#line 1151 "interval.m"
        MR_Word backend_libs__interval__V_53_53;
#line 1038 "interval.m"
        MR_Word backend_libs__interval__InsertsPrime_37;
#line 1038 "interval.m"
        MR_Box backend_libs__interval__conv0_InsertsPrime_37;
#line 1052 "interval.m"
        MR_Word backend_libs__interval__V_49_49;

#line 1151 "interval.m"
        {
#line 1151 "interval.m"
          backend_libs__interval__GoalId_22 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo0_18);
        }
#line 1152 "interval.m"
        {
#line 1152 "interval.m"
          backend_libs__interval__Anchor_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__Anchor_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1152 "interval.m"
          MR_hl_field(MR_mktag(3), backend_libs__interval__Anchor_23, 1) = ((MR_Box) (backend_libs__interval__GoalId_22));
#line 1152 "interval.m"
        }
#line 1038 "interval.m"
        {
#line 1038 "interval.m"
          backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval_scalar_common_1[4], backend_libs__interval__InsertMap_15, ((MR_Box) (backend_libs__interval__Anchor_23)), &backend_libs__interval__conv0_InsertsPrime_37);
        }
#line 1038 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1038 "interval.m"
          {
#line 1038 "interval.m"
            backend_libs__interval__InsertsPrime_37 = ((MR_Word) backend_libs__interval__conv0_InsertsPrime_37);
#line 1038 "interval.m"
            backend_libs__interval__succeeded = MR_TRUE;
#line 1038 "interval.m"
          }
#line 1038 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1039 "interval.m"
          backend_libs__interval__Inserts_24 = backend_libs__interval__InsertsPrime_37;
#line 1038 "interval.m"
        else
#line 1041 "interval.m"
          backend_libs__interval__Inserts_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10200 "backend_libs.interval.c"
        backend_libs__interval__TypeInfo_22_54 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1050 "interval.m"
        {
#line 1050 "interval.m"
          backend_libs__interval__V_52_52 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_22_54, backend_libs__interval__TypeInfo_22_54);
        }
#line 1050 "interval.m"
        {
#line 1050 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_0_25, backend_libs__interval__STATE_VARIABLE_VarInfo_26, backend_libs__interval__V_52_52, backend_libs__interval__STATE_VARIABLE_VarRename_28, backend_libs__interval__Inserts_24, backend_libs__interval__MaybeFeature_16, &backend_libs__interval__InsertGoals_48);
        }
#line 1052 "interval.m"
        backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_19, (MR_Integer) 0)));
#line 1052 "interval.m"
        backend_libs__interval__BranchesGoalInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_19, (MR_Integer) 1)));
#line 1053 "interval.m"
        {
#line 1053 "interval.m"
          backend_libs__interval__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_53_53, 0) = ((MR_Box) (backend_libs__interval__Goal1_19));
#line 1053 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_53_53, 1) = ((MR_Box) (backend_libs__interval__InsertGoals_48));
#line 1053 "interval.m"
        }
#line 1053 "interval.m"
        {
#line 1053 "interval.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_53_53, backend_libs__interval__BranchesGoalInfo_50, backend_libs__interval__Goal_11);
        }
#line 1151 "interval.m"
      }
#line 1146 "interval.m"
    else
#line 1160 "interval.m"
      {
#line 1160 "interval.m"
#line 1160 "interval.m"
        switch (backend_libs__interval__MustHaveMap_14) {
#line 1160 "interval.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1160 "interval.m"
          case (MR_Integer) 0:
#line 1159 "interval.m"
            *backend_libs__interval__Goal_11 = backend_libs__interval__Goal1_19;
#line 1160 "interval.m"
            break;
#line 1160 "interval.m"
          case (MR_Integer) 1:
#line 1161 "interval.m"
            {
#line 1162 "interval.m"
              {
#line 1162 "interval.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.record_decisions_at_call_site\'/9", (MR_String) "no save map");
#line 1162 "interval.m"
                return;
              }
#line 1161 "interval.m"
            }
#line 1160 "interval.m"
            break;
#line 1160 "interval.m"
        }
#line 1160 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_28 = backend_libs__interval__STATE_VARIABLE_VarRename_0_27;
#line 1160 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_26 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_25;
#line 1160 "interval.m"
      }
#line 1143 "interval.m"
  }
#line 1137 "interval.m"
}

#line 1106 "interval.m"
static void MR_CALL 
backend_libs__interval__create_shadow_vars_10_p_0(
#line 1106 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 1106 "interval.m"
  MR_Word backend_libs__interval__VarsToExtract_2,
#line 1106 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_0_3,
#line 1106 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarSet_4,
#line 1106 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_0_5,
#line 1106 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarTypes_6,
#line 1106 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_7,
#line 1106 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_8,
#line 1106 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_0_9,
#line 1106 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VoidRename_10)
#line 1106 "interval.m"
{
#line 1111 "interval.m"
  while (MR_TRUE)
#line 1111 "interval.m"
    {
#line 1111 "interval.m"
      /* tailcall optimized into a loop */
#line 1111 "interval.m"
      {
#line 1111 "interval.m"
        MR_bool backend_libs__interval__succeeded;

#line 1111 "interval.m"
        if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1111 "interval.m"
          {
#line 1111 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VoidRename_10 = backend_libs__interval__STATE_VARIABLE_VoidRename_0_9;
#line 1111 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarRename_8 = backend_libs__interval__STATE_VARIABLE_VarRename_0_7;
#line 1111 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarTypes_6 = backend_libs__interval__STATE_VARIABLE_VarTypes_0_5;
#line 1111 "interval.m"
            *backend_libs__interval__STATE_VARIABLE_VarSet_4 = backend_libs__interval__STATE_VARIABLE_VarSet_0_3;
#line 1111 "interval.m"
          }
#line 1111 "interval.m"
        else
#line 1113 "interval.m"
          {
#line 1113 "interval.m"
            MR_Word backend_libs__interval__TypeCtorInfo_32_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1113 "interval.m"
            MR_Word backend_libs__interval__Arg_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 1113 "interval.m"
            MR_Word backend_libs__interval__Args_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 1113 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_39_39;
#line 1113 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_40_40;
#line 1113 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_41_41;
#line 1113 "interval.m"
            MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_42_42;
#line 1113 "interval.m"
            MR_String backend_libs__interval__Name_61;
#line 1113 "interval.m"
            MR_Word backend_libs__interval__Shadow_62;
#line 1113 "interval.m"
            MR_Word backend_libs__interval__Type_63;

#line 1125 "interval.m"
            {
#line 1125 "interval.m"
              mercury__varset__lookup_name_3_p_0(backend_libs__interval__TypeCtorInfo_32_68, backend_libs__interval__STATE_VARIABLE_VarSet_0_3, backend_libs__interval__Arg_24, &backend_libs__interval__Name_61);
            }
#line 1126 "interval.m"
            {
#line 1126 "interval.m"
              mercury__varset__new_named_var_4_p_0(backend_libs__interval__TypeCtorInfo_32_68, backend_libs__interval__Name_61, &backend_libs__interval__Shadow_62, backend_libs__interval__STATE_VARIABLE_VarSet_0_3, &backend_libs__interval__STATE_VARIABLE_VarSet_39_39);
            }
#line 1127 "interval.m"
            {
#line 1127 "interval.m"
              hlds__vartypes__lookup_var_type_3_p_0(backend_libs__interval__STATE_VARIABLE_VarTypes_0_5, backend_libs__interval__Arg_24, &backend_libs__interval__Type_63);
            }
#line 1128 "interval.m"
            {
#line 1128 "interval.m"
              hlds__vartypes__add_var_type_4_p_0(backend_libs__interval__Shadow_62, backend_libs__interval__Type_63, backend_libs__interval__STATE_VARIABLE_VarTypes_0_5, &backend_libs__interval__STATE_VARIABLE_VarTypes_40_40);
            }
#line 1129 "interval.m"
            {
#line 1129 "interval.m"
              backend_libs__interval__succeeded = parse_tree__set_of_var__member_2_p_0(backend_libs__interval__TypeCtorInfo_32_68, backend_libs__interval__VarsToExtract_2, backend_libs__interval__Arg_24);
            }
#line 1129 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1130 "interval.m"
              {
#line 1130 "interval.m"
                MR_Word backend_libs__interval__TypeInfo_33_69 = (MR_Word) &backend_libs__interval_scalar_common_1[0];

#line 1130 "interval.m"
                {
#line 1130 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_33_69, backend_libs__interval__TypeInfo_33_69, ((MR_Box) (backend_libs__interval__Arg_24)), ((MR_Box) (backend_libs__interval__Shadow_62)), backend_libs__interval__STATE_VARIABLE_VarRename_0_7, &backend_libs__interval__STATE_VARIABLE_VarRename_41_41);
                }
#line 1130 "interval.m"
                backend_libs__interval__STATE_VARIABLE_VoidRename_42_42 = backend_libs__interval__STATE_VARIABLE_VoidRename_0_9;
#line 1130 "interval.m"
              }
#line 1129 "interval.m"
            else
#line 1132 "interval.m"
              {
#line 1132 "interval.m"
                MR_Word backend_libs__interval__TypeInfo_34_70 = (MR_Word) &backend_libs__interval_scalar_common_1[0];

#line 1132 "interval.m"
                {
#line 1132 "interval.m"
                  mercury__map__det_insert_4_p_0(backend_libs__interval__TypeInfo_34_70, backend_libs__interval__TypeInfo_34_70, ((MR_Box) (backend_libs__interval__Arg_24)), ((MR_Box) (backend_libs__interval__Shadow_62)), backend_libs__interval__STATE_VARIABLE_VoidRename_0_9, &backend_libs__interval__STATE_VARIABLE_VoidRename_42_42);
                }
#line 1132 "interval.m"
                backend_libs__interval__STATE_VARIABLE_VarRename_41_41 = backend_libs__interval__STATE_VARIABLE_VarRename_0_7;
#line 1132 "interval.m"
              }
#line 1116 "interval.m"
            /* direct tailcall eliminated */
#line 1116 "interval.m"
            {
#line 1116 "interval.m"
              MR_Word backend_libs__interval__HeadVar__1__tmp_copy_1 = backend_libs__interval__Args_25;
#line 1116 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarSet_0__tmp_copy_3 = backend_libs__interval__STATE_VARIABLE_VarSet_39_39;
#line 1116 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarTypes_0__tmp_copy_5 = backend_libs__interval__STATE_VARIABLE_VarTypes_40_40;
#line 1116 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0__tmp_copy_7 = backend_libs__interval__STATE_VARIABLE_VarRename_41_41;
#line 1116 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VoidRename_0__tmp_copy_9 = backend_libs__interval__STATE_VARIABLE_VoidRename_42_42;

#line 1116 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VoidRename_0_9 = backend_libs__interval__STATE_VARIABLE_VoidRename_0__tmp_copy_9;
#line 1116 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarRename_0_7 = backend_libs__interval__STATE_VARIABLE_VarRename_0__tmp_copy_7;
#line 1116 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarTypes_0_5 = backend_libs__interval__STATE_VARIABLE_VarTypes_0__tmp_copy_5;
#line 1116 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarSet_0_3 = backend_libs__interval__STATE_VARIABLE_VarSet_0__tmp_copy_3;
#line 1116 "interval.m"
              backend_libs__interval__HeadVar__1_1 = backend_libs__interval__HeadVar__1__tmp_copy_1;
#line 1116 "interval.m"
            }
#line 1116 "interval.m"
            continue;
#line 1113 "interval.m"
          }
#line 1111 "interval.m"
      }
#line 1111 "interval.m"
      break;
#line 1111 "interval.m"
    }
#line 1106 "interval.m"
}

#line 1055 "interval.m"
static void MR_CALL 
backend_libs__interval__make_inserted_goals_7_p_0(
#line 1055 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_1,
#line 1055 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_2,
#line 1055 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_3,
#line 1055 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_4,
#line 1055 "interval.m"
  MR_Word backend_libs__interval__HeadVar__5_5,
#line 1055 "interval.m"
  MR_Word backend_libs__interval__HeadVar__6_6,
#line 1055 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7)
#line 1055 "interval.m"
{
#line 1059 "interval.m"
  {
#line 1059 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1059 "interval.m"
    if ((backend_libs__interval__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1059 "interval.m"
      {
#line 1059 "interval.m"
        *backend_libs__interval__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1059 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarRename_4 = backend_libs__interval__STATE_VARIABLE_VarRename_0_3;
#line 1059 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_VarInfo_2 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_1;
#line 1059 "interval.m"
      }
#line 1059 "interval.m"
    else
#line 1061 "interval.m"
      {
#line 1061 "interval.m"
        MR_Word backend_libs__interval__Spec_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__5_5, (MR_Integer) 0)));
#line 1061 "interval.m"
        MR_Word backend_libs__interval__Specs_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__5_5, (MR_Integer) 1)));
#line 1061 "interval.m"
        MR_Word backend_libs__interval__Goal_20;
#line 1061 "interval.m"
        MR_Word backend_libs__interval__Goals_21;
#line 1061 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_26_26;
#line 1061 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_27_27;
#line 1061 "interval.m"
        MR_Word backend_libs__interval__Goal0_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Spec_17, (MR_Integer) 0)));
#line 1061 "interval.m"
        MR_Word backend_libs__interval__VarsToExtract_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Spec_17, (MR_Integer) 1)));
#line 1061 "interval.m"
        MR_Word backend_libs__interval__GoalExpr0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_39, (MR_Integer) 0)));
#line 1061 "interval.m"
        MR_Word backend_libs__interval__GoalInfo0_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_39, (MR_Integer) 1)));
#line 1072 "interval.m"
        MR_Word backend_libs__interval__V_43_43;
#line 1072 "interval.m"
        MR_Word backend_libs__interval__V_44_44;
#line 1072 "interval.m"
        MR_Word backend_libs__interval__V_45_45;
#line 1072 "interval.m"
        MR_Word backend_libs__interval__V_47_47;
#line 1072 "interval.m"
        MR_Word backend_libs__interval__V_48_48;
#line 1072 "interval.m"
        MR_Word backend_libs__interval__V_49_49;
#line 1072 "interval.m"
        MR_Word backend_libs__interval__ArgVars_50;
#line 1072 "interval.m"
        MR_Word backend_libs__interval__V_51_51;
#line 1072 "interval.m"
        MR_Word backend_libs__interval__V_53_53;
#line 1073 "interval.m"
        MR_Word backend_libs__interval__Unification0_46;
#line 1074 "interval.m"
        MR_Word backend_libs__interval__V_52_52;

#line 1073 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_41)) == (MR_mktag((MR_Integer) 1)));
#line 1073 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1073 "interval.m"
          {
#line 1073 "interval.m"
            backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 0)));
#line 1073 "interval.m"
            backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 1)));
#line 1073 "interval.m"
            backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 2)));
#line 1073 "interval.m"
            backend_libs__interval__Unification0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 3)));
#line 1073 "interval.m"
            backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_41, (MR_Integer) 4)));
#line 1074 "interval.m"
            backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__Unification0_46)) == (MR_mktag((MR_Integer) 1)));
#line 1074 "interval.m"
            if (backend_libs__interval__succeeded)
#line 1074 "interval.m"
              {
#line 1074 "interval.m"
                backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 0)));
#line 1074 "interval.m"
                backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 1)));
#line 1074 "interval.m"
                backend_libs__interval__ArgVars_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 2)));
#line 1074 "interval.m"
                backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 3)));
#line 1074 "interval.m"
                backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 4)));
#line 1074 "interval.m"
                backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_46, (MR_Integer) 5)));
#line 1074 "interval.m"
              }
#line 1073 "interval.m"
          }
#line 1072 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1076 "interval.m"
          {
#line 1076 "interval.m"
            MR_Word backend_libs__interval__TypeInfo_65_87;
#line 1076 "interval.m"
            MR_Word backend_libs__interval__Unification1_54;
#line 1076 "interval.m"
            MR_Word backend_libs__interval__GoalExpr1_55;
#line 1076 "interval.m"
            MR_Word backend_libs__interval__GoalInfo1_56;
#line 1076 "interval.m"
            MR_Word backend_libs__interval__GoalInfo2_58;
#line 1076 "interval.m"
            MR_Word backend_libs__interval__Goal2_59;
#line 1076 "interval.m"
            MR_Word backend_libs__interval__VarSet0_60;
#line 1076 "interval.m"
            MR_Word backend_libs__interval__VarTypes0_61;
#line 1076 "interval.m"
            MR_Word backend_libs__interval__VarSet_62;
#line 1076 "interval.m"
            MR_Word backend_libs__interval__VarTypes_63;
#line 1076 "interval.m"
            MR_Word backend_libs__interval__NewRename_64;
#line 1076 "interval.m"
            MR_Word backend_libs__interval__VoidRename_65;
#line 1076 "interval.m"
            MR_Word backend_libs__interval__Goal3_66;
#line 1076 "interval.m"
            MR_Word backend_libs__interval__V_69_69;
#line 1076 "interval.m"
            MR_Word backend_libs__interval__V_70_70;

#line 1076 "interval.m"
            {
#line 1076 "interval.m"
              backend_libs__interval__Unification1_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 0) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 1076 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 1) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 1076 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 2) = ((MR_Box) (backend_libs__interval__ArgVars_50));
#line 1076 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 3) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 1076 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1076 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_54, 5) = ((MR_Box) (backend_libs__interval__V_53_53));
#line 1076 "interval.m"
            }
#line 1077 "interval.m"
            {
#line 1077 "interval.m"
              backend_libs__interval__GoalExpr1_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 0) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 1077 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 1) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 1077 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 2) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 1077 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 3) = ((MR_Box) (backend_libs__interval__Unification1_54));
#line 1077 "interval.m"
              MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_55, 4) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 1077 "interval.m"
            }
#line 1078 "interval.m"
            {
#line 1078 "interval.m"
              hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, backend_libs__interval__GoalInfo0_42, &backend_libs__interval__GoalInfo1_56);
            }
#line 1082 "interval.m"
            if ((backend_libs__interval__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1084 "interval.m"
              backend_libs__interval__GoalInfo2_58 = backend_libs__interval__GoalInfo1_56;
#line 1082 "interval.m"
            else
#line 1080 "interval.m"
              {
#line 1080 "interval.m"
                MR_Word backend_libs__interval__Feature_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__6_6, (MR_Integer) 0)));

#line 1081 "interval.m"
                {
#line 1081 "interval.m"
                  hlds__hlds_goal__goal_info_add_feature_3_p_0(backend_libs__interval__Feature_57, backend_libs__interval__GoalInfo1_56, &backend_libs__interval__GoalInfo2_58);
                }
#line 1080 "interval.m"
              }
#line 1086 "interval.m"
            {
#line 1086 "interval.m"
              backend_libs__interval__Goal2_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1086 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_59, 0) = ((MR_Box) (backend_libs__interval__GoalExpr1_55));
#line 1086 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_59, 1) = ((MR_Box) (backend_libs__interval__GoalInfo2_58));
#line 1086 "interval.m"
            }
#line 1087 "interval.m"
            backend_libs__interval__VarSet0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_0_1, (MR_Integer) 0)));
#line 1087 "interval.m"
            backend_libs__interval__VarTypes0_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_0_1, (MR_Integer) 1)));
#line 10675 "backend_libs.interval.c"
            backend_libs__interval__TypeInfo_65_87 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1089 "interval.m"
            {
#line 1089 "interval.m"
              backend_libs__interval__V_69_69 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_87, backend_libs__interval__TypeInfo_65_87);
            }
#line 1089 "interval.m"
            {
#line 1089 "interval.m"
              backend_libs__interval__V_70_70 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_87, backend_libs__interval__TypeInfo_65_87);
            }
#line 1088 "interval.m"
            {
#line 1088 "interval.m"
              backend_libs__interval__create_shadow_vars_10_p_0(backend_libs__interval__ArgVars_50, backend_libs__interval__VarsToExtract_40, backend_libs__interval__VarSet0_60, &backend_libs__interval__VarSet_62, backend_libs__interval__VarTypes0_61, &backend_libs__interval__VarTypes_63, backend_libs__interval__V_69_69, &backend_libs__interval__NewRename_64, backend_libs__interval__V_70_70, &backend_libs__interval__VoidRename_65);
            }
#line 1090 "interval.m"
            {
#line 1090 "interval.m"
              backend_libs__interval__STATE_VARIABLE_VarInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1090 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_26_26, 0) = ((MR_Box) (backend_libs__interval__VarSet_62));
#line 1090 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_VarInfo_26_26, 1) = ((MR_Box) (backend_libs__interval__VarTypes_63));
#line 1090 "interval.m"
            }
#line 1091 "interval.m"
            {
#line 1091 "interval.m"
              mercury__map__old_merge_3_p_0(backend_libs__interval__TypeInfo_65_87, backend_libs__interval__TypeInfo_65_87, backend_libs__interval__STATE_VARIABLE_VarRename_0_3, backend_libs__interval__NewRename_64, &backend_libs__interval__STATE_VARIABLE_VarRename_27_27);
            }
#line 1093 "interval.m"
            {
#line 1093 "interval.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__STATE_VARIABLE_VarRename_27_27, backend_libs__interval__Goal2_59, &backend_libs__interval__Goal3_66);
            }
#line 1094 "interval.m"
            {
#line 1094 "interval.m"
              hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__VoidRename_65, backend_libs__interval__Goal3_66, &backend_libs__interval__Goal_20);
            }
#line 1076 "interval.m"
          }
#line 1072 "interval.m"
        else
#line 1096 "interval.m"
          {
#line 1096 "interval.m"
            {
#line 1096 "interval.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.make_inserted_goal\'/7", (MR_String) "not a deconstruct");
#line 1096 "interval.m"
              return;
            }
#line 1096 "interval.m"
          }
#line 1063 "interval.m"
        {
#line 1063 "interval.m"
          backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_26_26, backend_libs__interval__STATE_VARIABLE_VarInfo_2, backend_libs__interval__STATE_VARIABLE_VarRename_27_27, backend_libs__interval__STATE_VARIABLE_VarRename_4, backend_libs__interval__Specs_18, backend_libs__interval__HeadVar__6_6, &backend_libs__interval__Goals_21);
        }
#line 1061 "interval.m"
        {
#line 1061 "interval.m"
          MR_Word base;
#line 1061 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "interval.m"
          *backend_libs__interval__HeadVar__7_7 = base;
#line 1061 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__Goal_20));
#line 1061 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__Goals_21));
#line 1061 "interval.m"
        }
#line 1061 "interval.m"
      }
#line 1059 "interval.m"
  }
#line 1055 "interval.m"
}

#line 1044 "interval.m"
static void MR_CALL 
backend_libs__interval__insert_goals_after_7_p_0(
#line 1044 "interval.m"
  MR_Word backend_libs__interval__BranchesGoal_8,
#line 1044 "interval.m"
  MR_Word * backend_libs__interval__Goal_9,
#line 1044 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_17,
#line 1044 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_18,
#line 1044 "interval.m"
  MR_Word * backend_libs__interval__VarRename_11,
#line 1044 "interval.m"
  MR_Word backend_libs__interval__Inserts_12,
#line 1044 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_13)
#line 1044 "interval.m"
{
#line 1049 "interval.m"
  {
#line 1049 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1049 "interval.m"
    MR_Word backend_libs__interval__TypeInfo_22_22 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1049 "interval.m"
    MR_Word backend_libs__interval__InsertGoals_14;
#line 1049 "interval.m"
    MR_Word backend_libs__interval__BranchesGoalInfo_16;
#line 1049 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 1049 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 1052 "interval.m"
    MR_Word backend_libs__interval__V_15_15;

#line 1050 "interval.m"
    {
#line 1050 "interval.m"
      backend_libs__interval__V_20_20 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_22_22, backend_libs__interval__TypeInfo_22_22);
    }
#line 1050 "interval.m"
    {
#line 1050 "interval.m"
      backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_0_17, backend_libs__interval__STATE_VARIABLE_VarInfo_18, backend_libs__interval__V_20_20, backend_libs__interval__VarRename_11, backend_libs__interval__Inserts_12, backend_libs__interval__MaybeFeature_13, &backend_libs__interval__InsertGoals_14);
    }
#line 1052 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__BranchesGoal_8, (MR_Integer) 0)));
#line 1052 "interval.m"
    backend_libs__interval__BranchesGoalInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__BranchesGoal_8, (MR_Integer) 1)));
#line 1053 "interval.m"
    {
#line 1053 "interval.m"
      backend_libs__interval__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 0) = ((MR_Box) (backend_libs__interval__BranchesGoal_8));
#line 1053 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 1) = ((MR_Box) (backend_libs__interval__InsertGoals_14));
#line 1053 "interval.m"
    }
#line 1053 "interval.m"
    {
#line 1053 "interval.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_21_21, backend_libs__interval__BranchesGoalInfo_16, backend_libs__interval__Goal_9);
    }
#line 1049 "interval.m"
  }
#line 1044 "interval.m"
}

#line 1034 "interval.m"
static void MR_CALL 
backend_libs__interval__lookup_inserts_3_p_0(
#line 1034 "interval.m"
  MR_Word backend_libs__interval__InsertMap_4,
#line 1034 "interval.m"
  MR_Word backend_libs__interval__Anchor_5,
#line 1034 "interval.m"
  MR_Word * backend_libs__interval__Inserts_6)
#line 1034 "interval.m"
{
#line 1038 "interval.m"
  {
#line 1038 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1038 "interval.m"
    MR_Word backend_libs__interval__InsertsPrime_7;
#line 1038 "interval.m"
    MR_Box backend_libs__interval__conv0_InsertsPrime_7;

#line 1038 "interval.m"
    {
#line 1038 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval_scalar_common_1[4], backend_libs__interval__InsertMap_4, ((MR_Box) (backend_libs__interval__Anchor_5)), &backend_libs__interval__conv0_InsertsPrime_7);
    }
#line 1038 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1038 "interval.m"
      {
#line 1038 "interval.m"
        backend_libs__interval__InsertsPrime_7 = ((MR_Word) backend_libs__interval__conv0_InsertsPrime_7);
#line 1038 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 1038 "interval.m"
      }
#line 1038 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1039 "interval.m"
      *backend_libs__interval__Inserts_6 = backend_libs__interval__InsertsPrime_7;
#line 1038 "interval.m"
    else
#line 1041 "interval.m"
      *backend_libs__interval__Inserts_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1038 "interval.m"
  }
#line 1034 "interval.m"
}

#line 884 "interval.m"
static void MR_CALL 
backend_libs__interval__record_decisions_in_goal_8_p_0(
#line 884 "interval.m"
  MR_Word backend_libs__interval__Goal0_9,
#line 884 "interval.m"
  MR_Word * backend_libs__interval__Goal_10,
#line 884 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_0_114,
#line 884 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarInfo_115,
#line 884 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_116,
#line 884 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_117,
#line 884 "interval.m"
  MR_Word backend_libs__interval__InsertMap_13,
#line 884 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_14)
#line 884 "interval.m"
{
#line 890 "interval.m"
  {
#line 890 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 890 "interval.m"
    MR_Word backend_libs__interval__GoalExpr0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_9, (MR_Integer) 0)));
#line 890 "interval.m"
    MR_Word backend_libs__interval__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_9, (MR_Integer) 1)));

#line 898 "interval.m"
#line 898 "interval.m"
    switch (MR_tag((MR_Word) backend_libs__interval__GoalExpr0_15)) {
#line 898 "interval.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 898 "interval.m"
      case (MR_Integer) 0:
#line 929 "interval.m"
        {
#line 929 "interval.m"
          MR_Word backend_libs__interval__NegGoal0_37 = (MR_Word) MR_body(((MR_Word) backend_libs__interval__GoalExpr0_15), (MR_Integer) 0);
#line 929 "interval.m"
          MR_Word backend_libs__interval__NegGoal_38;
#line 929 "interval.m"
          MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_147_147;
#line 929 "interval.m"
          MR_Word backend_libs__interval__V_148_148;
#line 929 "interval.m"
          MR_Word backend_libs__interval__EndAnchor_177;
#line 929 "interval.m"
          MR_Word backend_libs__interval__Goal1_178;
#line 929 "interval.m"
          MR_Word backend_libs__interval__Inserts_179;
#line 930 "interval.m"
          MR_Word backend_libs__interval__V_39_39;
#line 933 "interval.m"
          MR_Word backend_libs__interval___StartAnchor_176;

#line 930 "interval.m"
          {
#line 930 "interval.m"
            backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__NegGoal0_37, &backend_libs__interval__NegGoal_38, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_147_147, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, &backend_libs__interval__V_39_39, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
          }
#line 932 "interval.m"
          backend_libs__interval__V_148_148 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) backend_libs__interval__NegGoal_38);
#line 932 "interval.m"
          {
#line 932 "interval.m"
            backend_libs__interval__Goal1_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 932 "interval.m"
            MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_178, 0) = ((MR_Box) (backend_libs__interval__V_148_148));
#line 932 "interval.m"
            MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_178, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 932 "interval.m"
          }
#line 933 "interval.m"
          {
#line 933 "interval.m"
            backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 3, backend_libs__interval__Goal0_9, &backend_libs__interval___StartAnchor_176, &backend_libs__interval__EndAnchor_177);
          }
#line 934 "interval.m"
          {
#line 934 "interval.m"
            backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_177, &backend_libs__interval__Inserts_179);
          }
#line 936 "interval.m"
          {
#line 936 "interval.m"
            backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_178, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_147_147, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__Inserts_179, backend_libs__interval__MaybeFeature_14);
          }
#line 929 "interval.m"
        }
#line 898 "interval.m"
        break;
#line 898 "interval.m"
      case (MR_Integer) 1:
#line 1025 "interval.m"
        {
#line 1026 "interval.m"
          {
#line 1026 "interval.m"
            hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10);
          }
#line 1025 "interval.m"
          *backend_libs__interval__STATE_VARIABLE_VarInfo_115 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_114;
#line 1025 "interval.m"
          *backend_libs__interval__STATE_VARIABLE_VarRename_117 = backend_libs__interval__STATE_VARIABLE_VarRename_0_116;
#line 1025 "interval.m"
        }
#line 898 "interval.m"
        break;
#line 898 "interval.m"
      case (MR_Integer) 2:
#line 1008 "interval.m"
        {
#line 1008 "interval.m"
          MR_Word backend_libs__interval__Builtin_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 1008 "interval.m"
          MR_Word backend_libs__interval__MustHaveMap_200;
#line 1008 "interval.m"
          MR_Word backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)));
#line 1008 "interval.m"
          MR_Integer backend_libs__interval__V_96_96 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 1008 "interval.m"
          MR_Word backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 1008 "interval.m"
          MR_Word backend_libs__interval__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 4)));
#line 1008 "interval.m"
          MR_Word backend_libs__interval__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr0_15, (MR_Integer) 5)));

#line 1012 "interval.m"
#line 1012 "interval.m"
          switch (backend_libs__interval__Builtin_98) {
#line 1012 "interval.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1012 "interval.m"
            case (MR_Integer) 0:
#line 1011 "interval.m"
              backend_libs__interval__MustHaveMap_200 = (MR_Integer) 0;
#line 1012 "interval.m"
              break;
#line 1012 "interval.m"
            case (MR_Integer) 2:
#line 1012 "interval.m"
            case (MR_Integer) 1:
#line 1016 "interval.m"
              backend_libs__interval__MustHaveMap_200 = (MR_Integer) 1;
#line 1012 "interval.m"
              break;
#line 1012 "interval.m"
          }
#line 1018 "interval.m"
          {
#line 1018 "interval.m"
            backend_libs__interval__record_decisions_at_call_site_9_p_0(backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__MustHaveMap_200, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
          }
#line 1008 "interval.m"
        }
#line 898 "interval.m"
        break;
#line 898 "interval.m"
      case (MR_Integer) 3:
#line 898 "interval.m"
#line 898 "interval.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 0)))) {
#line 898 "interval.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 898 "interval.m"
          case (MR_Integer) 0:
#line 993 "interval.m"
            {
#line 993 "interval.m"
              MR_Word backend_libs__interval__GenericCall_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 993 "interval.m"
              MR_Word backend_libs__interval__MustHaveMap_85;
#line 993 "interval.m"
              MR_Word backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 993 "interval.m"
              MR_Word backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 993 "interval.m"
              MR_Word backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 4)));
#line 993 "interval.m"
              MR_Word backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 5)));

#line 998 "interval.m"
#line 998 "interval.m"
              switch (MR_tag((MR_Word) backend_libs__interval__GenericCall_79)) {
#line 998 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 998 "interval.m"
                case (MR_Integer) 0:
#line 998 "interval.m"
                case (MR_Integer) 1:
#line 998 "interval.m"
                case (MR_Integer) 2:
#line 1003 "interval.m"
                  backend_libs__interval__MustHaveMap_85 = (MR_Integer) 1;
#line 998 "interval.m"
                  break;
#line 998 "interval.m"
                case (MR_Integer) 3:
#line 997 "interval.m"
                  backend_libs__interval__MustHaveMap_85 = (MR_Integer) 0;
#line 998 "interval.m"
                  break;
#line 998 "interval.m"
              }
#line 1005 "interval.m"
              {
#line 1005 "interval.m"
                backend_libs__interval__record_decisions_at_call_site_9_p_0(backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__MustHaveMap_85, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 993 "interval.m"
            }
#line 898 "interval.m"
            break;
#line 898 "interval.m"
          case (MR_Integer) 1:
#line 1021 "interval.m"
            {
#line 1022 "interval.m"
              {
#line 1022 "interval.m"
                backend_libs__interval__record_decisions_at_call_site_9_p_0(backend_libs__interval__Goal0_9, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, (MR_Integer) 0, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 1021 "interval.m"
            }
#line 898 "interval.m"
            break;
#line 898 "interval.m"
          case (MR_Integer) 2:
#line 893 "interval.m"
            {
#line 893 "interval.m"
              MR_Word backend_libs__interval__ConjType_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 893 "interval.m"
              MR_Word backend_libs__interval__Goals0_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 893 "interval.m"
              MR_Word backend_libs__interval__Goals_19;
#line 893 "interval.m"
              MR_Word backend_libs__interval__GoalExpr_20;

#line 894 "interval.m"
              {
#line 894 "interval.m"
                backend_libs__interval__record_decisions_in_conj_9_p_0(backend_libs__interval__Goals0_18, &backend_libs__interval__Goals_19, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__ConjType_17, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 896 "interval.m"
              {
#line 896 "interval.m"
                backend_libs__interval__GoalExpr_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 896 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 896 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_20, 1) = ((MR_Box) (backend_libs__interval__ConjType_17));
#line 896 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_20, 2) = ((MR_Box) (backend_libs__interval__Goals_19));
#line 896 "interval.m"
              }
#line 897 "interval.m"
              {
#line 897 "interval.m"
                MR_Word base;
#line 897 "interval.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 897 "interval.m"
                *backend_libs__interval__Goal_10 = base;
#line 897 "interval.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__GoalExpr_20));
#line 897 "interval.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 897 "interval.m"
              }
#line 893 "interval.m"
            }
#line 898 "interval.m"
            break;
#line 898 "interval.m"
          case (MR_Integer) 3:
#line 899 "interval.m"
            {
#line 899 "interval.m"
              MR_Word backend_libs__interval__StartAnchor_21;
#line 899 "interval.m"
              MR_Word backend_libs__interval__EndAnchor_22;
#line 899 "interval.m"
              MR_Word backend_libs__interval__Goals0_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));

#line 900 "interval.m"
              {
#line 900 "interval.m"
                backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 1, backend_libs__interval__Goal0_9, &backend_libs__interval__StartAnchor_21, &backend_libs__interval__EndAnchor_22);
              }
#line 913 "interval.m"
              if ((backend_libs__interval__Goals0_170 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "interval.m"
                {
#line 916 "interval.m"
                  *backend_libs__interval__Goal_10 = backend_libs__interval__Goal0_9;
#line 914 "interval.m"
                  *backend_libs__interval__STATE_VARIABLE_VarInfo_115 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_114;
#line 914 "interval.m"
                  *backend_libs__interval__STATE_VARIABLE_VarRename_117 = backend_libs__interval__STATE_VARIABLE_VarRename_0_116;
#line 914 "interval.m"
                }
#line 913 "interval.m"
              else
#line 902 "interval.m"
                {
#line 902 "interval.m"
                  MR_Word backend_libs__interval__FirstGoal0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals0_170, (MR_Integer) 0)));
#line 902 "interval.m"
                  MR_Word backend_libs__interval__LaterGoals0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals0_170, (MR_Integer) 1)));
#line 902 "interval.m"
                  MR_Word backend_libs__interval__FirstGoal_25;
#line 902 "interval.m"
                  MR_Word backend_libs__interval__StartInserts_27;
#line 902 "interval.m"
                  MR_Word backend_libs__interval__LaterGoals_28;
#line 902 "interval.m"
                  MR_Word backend_libs__interval__Goal1_29;
#line 902 "interval.m"
                  MR_Word backend_libs__interval__Inserts_30;
#line 902 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_159_159;
#line 902 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_160_160;
#line 902 "interval.m"
                  MR_Word backend_libs__interval__V_161_161;
#line 902 "interval.m"
                  MR_Word backend_libs__interval__Goals_166;
#line 903 "interval.m"
                  MR_Word backend_libs__interval__V_26_26;

#line 903 "interval.m"
                  {
#line 903 "interval.m"
                    backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__FirstGoal0_23, &backend_libs__interval__FirstGoal_25, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_159_159, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, &backend_libs__interval__V_26_26, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                  }
#line 905 "interval.m"
                  {
#line 905 "interval.m"
                    backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__StartAnchor_21, &backend_libs__interval__StartInserts_27);
                  }
#line 906 "interval.m"
                  {
#line 906 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_114_100_95_100_101_99_105_115_105_111_110_115_95_105_110_95_100_105_115_106_95_95_91_53_93_95_48_8_p_0(backend_libs__interval__LaterGoals0_24, &backend_libs__interval__LaterGoals_28, backend_libs__interval__STATE_VARIABLE_VarInfo_159_159, &backend_libs__interval__STATE_VARIABLE_VarInfo_160_160, backend_libs__interval__StartInserts_27, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                  }
#line 908 "interval.m"
                  {
#line 908 "interval.m"
                    backend_libs__interval__Goals_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 908 "interval.m"
                    MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_166, 0) = ((MR_Box) (backend_libs__interval__FirstGoal_25));
#line 908 "interval.m"
                    MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_166, 1) = ((MR_Box) (backend_libs__interval__LaterGoals_28));
#line 908 "interval.m"
                  }
#line 909 "interval.m"
                  {
#line 909 "interval.m"
                    backend_libs__interval__V_161_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "interval.m"
                    MR_hl_field(MR_mktag(3), backend_libs__interval__V_161_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 909 "interval.m"
                    MR_hl_field(MR_mktag(3), backend_libs__interval__V_161_161, 1) = ((MR_Box) (backend_libs__interval__Goals_166));
#line 909 "interval.m"
                  }
#line 909 "interval.m"
                  {
#line 909 "interval.m"
                    backend_libs__interval__Goal1_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 909 "interval.m"
                    MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_29, 0) = ((MR_Box) (backend_libs__interval__V_161_161));
#line 909 "interval.m"
                    MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_29, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 909 "interval.m"
                  }
#line 910 "interval.m"
                  {
#line 910 "interval.m"
                    backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_22, &backend_libs__interval__Inserts_30);
                  }
#line 911 "interval.m"
                  {
#line 911 "interval.m"
                    backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_29, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_160_160, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__Inserts_30, backend_libs__interval__MaybeFeature_14);
                  }
#line 902 "interval.m"
                }
#line 899 "interval.m"
            }
#line 898 "interval.m"
            break;
#line 898 "interval.m"
          case (MR_Integer) 4:
#line 919 "interval.m"
            {
#line 919 "interval.m"
              MR_Word backend_libs__interval__Var0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 919 "interval.m"
              MR_Word backend_libs__interval__Det_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 919 "interval.m"
              MR_Word backend_libs__interval__Cases0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 919 "interval.m"
              MR_Word backend_libs__interval__Cases_34;
#line 919 "interval.m"
              MR_Word backend_libs__interval__Var_35;
#line 919 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_152_152;
#line 919 "interval.m"
              MR_Word backend_libs__interval__V_154_154;
#line 919 "interval.m"
              MR_Word backend_libs__interval__EndAnchor_173;
#line 919 "interval.m"
              MR_Word backend_libs__interval__Goal1_174;
#line 919 "interval.m"
              MR_Word backend_libs__interval__Inserts_175;
#line 924 "interval.m"
              MR_Word backend_libs__interval___StartAnchor_36;

#line 920 "interval.m"
              {
#line 920 "interval.m"
                backend_libs__interval__record_decisions_in_cases_7_p_0(backend_libs__interval__Cases0_33, &backend_libs__interval__Cases_34, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_152_152, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 922 "interval.m"
              {
#line 922 "interval.m"
                parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Var0_31, &backend_libs__interval__Var_35);
              }
#line 923 "interval.m"
              {
#line 923 "interval.m"
                backend_libs__interval__V_154_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 923 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 923 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 1) = ((MR_Box) (backend_libs__interval__Var_35));
#line 923 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 2) = ((MR_Box) (backend_libs__interval__Det_32));
#line 923 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_154_154, 3) = ((MR_Box) (backend_libs__interval__Cases_34));
#line 923 "interval.m"
              }
#line 923 "interval.m"
              {
#line 923 "interval.m"
                backend_libs__interval__Goal1_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 923 "interval.m"
                MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_174, 0) = ((MR_Box) (backend_libs__interval__V_154_154));
#line 923 "interval.m"
                MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_174, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 923 "interval.m"
              }
#line 924 "interval.m"
              {
#line 924 "interval.m"
                backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 2, backend_libs__interval__Goal0_9, &backend_libs__interval___StartAnchor_36, &backend_libs__interval__EndAnchor_173);
              }
#line 925 "interval.m"
              {
#line 925 "interval.m"
                backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_173, &backend_libs__interval__Inserts_175);
              }
#line 926 "interval.m"
              {
#line 926 "interval.m"
                backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_174, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_152_152, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__Inserts_175, backend_libs__interval__MaybeFeature_14);
              }
#line 919 "interval.m"
            }
#line 898 "interval.m"
            break;
#line 898 "interval.m"
          case (MR_Integer) 5:
#line 959 "interval.m"
            {
#line 959 "interval.m"
              MR_Word backend_libs__interval__Reason0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 959 "interval.m"
              MR_Word backend_libs__interval__SubGoal0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 959 "interval.m"
              MR_Word backend_libs__interval__Reason_58;
#line 981 "interval.m"
              MR_Word backend_libs__interval__V_130_130;
#line 981 "interval.m"
              MR_Word backend_libs__interval__V_77_77;

#line 964 "interval.m"
#line 964 "interval.m"
              switch (MR_tag((MR_Word) backend_libs__interval__Reason0_56)) {
#line 964 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 964 "interval.m"
                case (MR_Integer) 0:
#line 961 "interval.m"
                  {
#line 961 "interval.m"
                    MR_Word backend_libs__interval__Vars0_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Reason0_56, (MR_Integer) 0)));
#line 961 "interval.m"
                    MR_Word backend_libs__interval__Vars_186;

#line 962 "interval.m"
                    {
#line 962 "interval.m"
                      parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Vars0_185, &backend_libs__interval__Vars_186);
                    }
#line 963 "interval.m"
                    {
#line 963 "interval.m"
                      backend_libs__interval__Reason_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 963 "interval.m"
                      MR_hl_field(MR_mktag(0), backend_libs__interval__Reason_58, 0) = ((MR_Box) (backend_libs__interval__Vars_186));
#line 963 "interval.m"
                    }
#line 961 "interval.m"
                  }
#line 964 "interval.m"
                  break;
#line 964 "interval.m"
                case (MR_Integer) 1:
#line 964 "interval.m"
                case (MR_Integer) 2:
#line 979 "interval.m"
                  backend_libs__interval__Reason_58 = backend_libs__interval__Reason0_56;
#line 964 "interval.m"
                  break;
#line 964 "interval.m"
                case (MR_Integer) 3:
#line 964 "interval.m"
#line 964 "interval.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason0_56, (MR_Integer) 0)))) {
#line 964 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 964 "interval.m"
                    case (MR_Integer) 0:
#line 964 "interval.m"
                    case (MR_Integer) 1:
#line 964 "interval.m"
                    case (MR_Integer) 2:
#line 964 "interval.m"
                    case (MR_Integer) 3:
#line 964 "interval.m"
                    case (MR_Integer) 4:
#line 964 "interval.m"
                    case (MR_Integer) 6:
#line 964 "interval.m"
                    case (MR_Integer) 7:
#line 979 "interval.m"
                      backend_libs__interval__Reason_58 = backend_libs__interval__Reason0_56;
#line 964 "interval.m"
                      break;
#line 964 "interval.m"
                    case (MR_Integer) 5:
#line 965 "interval.m"
                      {
#line 965 "interval.m"
                        MR_Word backend_libs__interval__Kind_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason0_56, (MR_Integer) 2)));
#line 965 "interval.m"
                        MR_Word backend_libs__interval__Var0_187 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason0_56, (MR_Integer) 1)));
#line 965 "interval.m"
                        MR_Word backend_libs__interval__Var_188;

#line 966 "interval.m"
                        {
#line 966 "interval.m"
                          parse_tree__prog_rename__rename_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Var0_187, &backend_libs__interval__Var_188);
                        }
#line 967 "interval.m"
                        {
#line 967 "interval.m"
                          backend_libs__interval__Reason_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 967 "interval.m"
                          MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 967 "interval.m"
                          MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, 1) = ((MR_Box) (backend_libs__interval__Var_188));
#line 967 "interval.m"
                          MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, 2) = ((MR_Box) (backend_libs__interval__Kind_59));
#line 967 "interval.m"
                        }
#line 965 "interval.m"
                      }
#line 964 "interval.m"
                      break;
#line 964 "interval.m"
                  }
#line 964 "interval.m"
                  break;
#line 964 "interval.m"
              }
#line 981 "interval.m"
              backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 981 "interval.m"
              if (backend_libs__interval__succeeded)
#line 981 "interval.m"
                {
#line 981 "interval.m"
                  backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, (MR_Integer) 1)));
#line 981 "interval.m"
                  backend_libs__interval__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_58, (MR_Integer) 2)));
#line 981 "interval.m"
                  backend_libs__interval__succeeded = (backend_libs__interval__V_130_130 == (MR_Integer) 1);
#line 981 "interval.m"
                }
#line 981 "interval.m"
              if (backend_libs__interval__succeeded)
#line 983 "interval.m"
                {
#line 983 "interval.m"
                  *backend_libs__interval__Goal_10 = backend_libs__interval__Goal0_9;
#line 983 "interval.m"
                  *backend_libs__interval__STATE_VARIABLE_VarRename_117 = backend_libs__interval__STATE_VARIABLE_VarRename_0_116;
#line 983 "interval.m"
                  *backend_libs__interval__STATE_VARIABLE_VarInfo_115 = backend_libs__interval__STATE_VARIABLE_VarInfo_0_114;
#line 983 "interval.m"
                }
#line 981 "interval.m"
              else
#line 988 "interval.m"
                {
#line 988 "interval.m"
                  MR_Word backend_libs__interval__SubGoal_78;
#line 988 "interval.m"
                  MR_Word backend_libs__interval__GoalExpr_193;

#line 987 "interval.m"
                  {
#line 987 "interval.m"
                    backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__SubGoal0_57, &backend_libs__interval__SubGoal_78, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
                  }
#line 989 "interval.m"
                  {
#line 989 "interval.m"
                    backend_libs__interval__GoalExpr_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 989 "interval.m"
                    MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 989 "interval.m"
                    MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_193, 1) = ((MR_Box) (backend_libs__interval__Reason_58));
#line 989 "interval.m"
                    MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_193, 2) = ((MR_Box) (backend_libs__interval__SubGoal_78));
#line 989 "interval.m"
                  }
#line 990 "interval.m"
                  {
#line 990 "interval.m"
                    MR_Word base;
#line 990 "interval.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 990 "interval.m"
                    *backend_libs__interval__Goal_10 = base;
#line 990 "interval.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__GoalExpr_193));
#line 990 "interval.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 990 "interval.m"
                  }
#line 988 "interval.m"
                }
#line 959 "interval.m"
            }
#line 898 "interval.m"
            break;
#line 898 "interval.m"
          case (MR_Integer) 6:
#line 939 "interval.m"
            {
#line 939 "interval.m"
              MR_Word backend_libs__interval__TypeInfo_203_203;
#line 939 "interval.m"
              MR_Word backend_libs__interval__Vars0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 1)));
#line 939 "interval.m"
              MR_Word backend_libs__interval__Cond0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 2)));
#line 939 "interval.m"
              MR_Word backend_libs__interval__Then0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 3)));
#line 939 "interval.m"
              MR_Word backend_libs__interval__Else0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr0_15, (MR_Integer) 4)));
#line 939 "interval.m"
              MR_Word backend_libs__interval__Vars_44;
#line 939 "interval.m"
              MR_Word backend_libs__interval__Cond_45;
#line 939 "interval.m"
              MR_Word backend_libs__interval__Then_46;
#line 939 "interval.m"
              MR_Word backend_libs__interval__VarRenameElse_48;
#line 939 "interval.m"
              MR_Word backend_libs__interval__StartInsertGoals_49;
#line 939 "interval.m"
              MR_Word backend_libs__interval__Else1_50;
#line 939 "interval.m"
              MR_Word backend_libs__interval__ElseGoalInfo0_53;
#line 939 "interval.m"
              MR_Word backend_libs__interval__Else_54;
#line 939 "interval.m"
              MR_Word backend_libs__interval__EndInserts_55;
#line 939 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_135_135;
#line 939 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_136_136;
#line 939 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_137_137;
#line 939 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_138_138;
#line 939 "interval.m"
              MR_Word backend_libs__interval__V_139_139;
#line 939 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_VarInfo_140_140;
#line 939 "interval.m"
              MR_Word backend_libs__interval__V_141_141;
#line 939 "interval.m"
              MR_Word backend_libs__interval__V_142_142;
#line 939 "interval.m"
              MR_Word backend_libs__interval__V_144_144;
#line 939 "interval.m"
              MR_Word backend_libs__interval__StartAnchor_181;
#line 939 "interval.m"
              MR_Word backend_libs__interval__EndAnchor_182;
#line 939 "interval.m"
              MR_Word backend_libs__interval__StartInserts_183;
#line 939 "interval.m"
              MR_Word backend_libs__interval__Goal1_184;
#line 944 "interval.m"
              MR_Word backend_libs__interval__V_47_47;
#line 949 "interval.m"
              MR_Word backend_libs__interval__V_51_51;
#line 951 "interval.m"
              MR_Word backend_libs__interval__V_52_52;

#line 940 "interval.m"
              {
#line 940 "interval.m"
                backend_libs__interval__construct_anchors_4_p_0((MR_Integer) 0, backend_libs__interval__Goal0_9, &backend_libs__interval__StartAnchor_181, &backend_libs__interval__EndAnchor_182);
              }
#line 941 "interval.m"
              {
#line 941 "interval.m"
                parse_tree__prog_rename__rename_var_list_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, backend_libs__interval__Vars0_40, &backend_libs__interval__Vars_44);
              }
#line 942 "interval.m"
              {
#line 942 "interval.m"
                backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Cond0_41, &backend_libs__interval__Cond_45, backend_libs__interval__STATE_VARIABLE_VarInfo_0_114, &backend_libs__interval__STATE_VARIABLE_VarInfo_135_135, backend_libs__interval__STATE_VARIABLE_VarRename_0_116, &backend_libs__interval__STATE_VARIABLE_VarRename_136_136, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 944 "interval.m"
              {
#line 944 "interval.m"
                backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Then0_42, &backend_libs__interval__Then_46, backend_libs__interval__STATE_VARIABLE_VarInfo_135_135, &backend_libs__interval__STATE_VARIABLE_VarInfo_137_137, backend_libs__interval__STATE_VARIABLE_VarRename_136_136, &backend_libs__interval__V_47_47, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 946 "interval.m"
              {
#line 946 "interval.m"
                backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__StartAnchor_181, &backend_libs__interval__StartInserts_183);
              }
#line 11630 "backend_libs.interval.c"
              backend_libs__interval__TypeInfo_203_203 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 947 "interval.m"
              {
#line 947 "interval.m"
                backend_libs__interval__V_139_139 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_203_203, backend_libs__interval__TypeInfo_203_203);
              }
#line 947 "interval.m"
              {
#line 947 "interval.m"
                backend_libs__interval__make_inserted_goals_7_p_0(backend_libs__interval__STATE_VARIABLE_VarInfo_137_137, &backend_libs__interval__STATE_VARIABLE_VarInfo_138_138, backend_libs__interval__V_139_139, &backend_libs__interval__VarRenameElse_48, backend_libs__interval__StartInserts_183, backend_libs__interval__MaybeFeature_14, &backend_libs__interval__StartInsertGoals_49);
              }
#line 949 "interval.m"
              {
#line 949 "interval.m"
                backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__Else0_43, &backend_libs__interval__Else1_50, backend_libs__interval__STATE_VARIABLE_VarInfo_138_138, &backend_libs__interval__STATE_VARIABLE_VarInfo_140_140, backend_libs__interval__VarRenameElse_48, &backend_libs__interval__V_51_51, backend_libs__interval__InsertMap_13, backend_libs__interval__MaybeFeature_14);
              }
#line 951 "interval.m"
              backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Else0_43, (MR_Integer) 0)));
#line 951 "interval.m"
              backend_libs__interval__ElseGoalInfo0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Else0_43, (MR_Integer) 1)));
#line 952 "interval.m"
              {
#line 952 "interval.m"
                backend_libs__interval__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "interval.m"
                MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 0) = ((MR_Box) (backend_libs__interval__Else1_50));
#line 952 "interval.m"
                MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 952 "interval.m"
              }
#line 952 "interval.m"
              {
#line 952 "interval.m"
                backend_libs__interval__V_141_141 = mercury__list__append_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, backend_libs__interval__StartInsertGoals_49, backend_libs__interval__V_142_142);
              }
#line 952 "interval.m"
              {
#line 952 "interval.m"
                hlds__hlds_goal__conj_list_to_goal_3_p_0(backend_libs__interval__V_141_141, backend_libs__interval__ElseGoalInfo0_53, &backend_libs__interval__Else_54);
              }
#line 954 "interval.m"
              {
#line 954 "interval.m"
                backend_libs__interval__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 954 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 954 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 1) = ((MR_Box) (backend_libs__interval__Vars_44));
#line 954 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 2) = ((MR_Box) (backend_libs__interval__Cond_45));
#line 954 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 3) = ((MR_Box) (backend_libs__interval__Then_46));
#line 954 "interval.m"
                MR_hl_field(MR_mktag(3), backend_libs__interval__V_144_144, 4) = ((MR_Box) (backend_libs__interval__Else_54));
#line 954 "interval.m"
              }
#line 954 "interval.m"
              {
#line 954 "interval.m"
                backend_libs__interval__Goal1_184 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 954 "interval.m"
                MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_184, 0) = ((MR_Box) (backend_libs__interval__V_144_144));
#line 954 "interval.m"
                MR_hl_field(MR_mktag(0), backend_libs__interval__Goal1_184, 1) = ((MR_Box) (backend_libs__interval__GoalInfo0_16));
#line 954 "interval.m"
              }
#line 955 "interval.m"
              {
#line 955 "interval.m"
                backend_libs__interval__lookup_inserts_3_p_0(backend_libs__interval__InsertMap_13, backend_libs__interval__EndAnchor_182, &backend_libs__interval__EndInserts_55);
              }
#line 956 "interval.m"
              {
#line 956 "interval.m"
                backend_libs__interval__insert_goals_after_7_p_0(backend_libs__interval__Goal1_184, backend_libs__interval__Goal_10, backend_libs__interval__STATE_VARIABLE_VarInfo_140_140, backend_libs__interval__STATE_VARIABLE_VarInfo_115, backend_libs__interval__STATE_VARIABLE_VarRename_117, backend_libs__interval__EndInserts_55, backend_libs__interval__MaybeFeature_14);
              }
#line 939 "interval.m"
            }
#line 898 "interval.m"
            break;
#line 898 "interval.m"
          case (MR_Integer) 7:
#line 1028 "interval.m"
            {
#line 1029 "interval.m"
              {
#line 1029 "interval.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.record_decisions_in_goal\'/8", (MR_String) "shorthand");
#line 1029 "interval.m"
                return;
              }
#line 1028 "interval.m"
            }
#line 898 "interval.m"
            break;
#line 898 "interval.m"
        }
#line 898 "interval.m"
        break;
#line 898 "interval.m"
    }
#line 890 "interval.m"
  }
#line 884 "interval.m"
}

#line 860 "interval.m"
static void MR_CALL 
backend_libs__interval__record_model_non_anchor_3_p_0(
#line 860 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 860 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 860 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9)
#line 860 "interval.m"
{
#line 863 "interval.m"
  {
#line 863 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 863 "interval.m"
    MR_Word backend_libs__interval__ModelNonAnchors0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 863 "interval.m"
    MR_Word backend_libs__interval__ModelNonAnchors_7;
#line 864 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 864 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 864 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 864 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 864 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 864 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 864 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 864 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 864 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 864 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 864 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 864 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 864 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 864 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 864 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_27_27;
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 866 "interval.m"
    MR_Word backend_libs__interval__V_36_36;

#line 865 "interval.m"
    {
#line 865 "interval.m"
      mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Anchor_4)), backend_libs__interval__ModelNonAnchors0_6, &backend_libs__interval__ModelNonAnchors_7);
    }
#line 866 "interval.m"
    backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 866 "interval.m"
    backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 866 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 866 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 866 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 866 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 866 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 866 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 866 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 866 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 866 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 866 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 866 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 866 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 866 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 866 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 866 "interval.m"
    {
#line 866 "interval.m"
      MR_Word base;
#line 866 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 866 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = base;
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_26_26));
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_27_27));
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__ModelNonAnchors_7));
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 866 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 866 "interval.m"
    }
#line 863 "interval.m"
  }
#line 860 "interval.m"
}

#line 843 "interval.m"
static void MR_CALL 
backend_libs__interval__require_access_3_p_0(
#line 843 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 843 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 843 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9)
#line 843 "interval.m"
{
#line 846 "interval.m"
  {
#line 846 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 846 "interval.m"
    MR_Word backend_libs__interval__AccessedLater0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 846 "interval.m"
    MR_Word backend_libs__interval__AccessedLater_7;
#line 847 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 847 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 847 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 847 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 847 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 847 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 847 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 847 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 847 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 847 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 847 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 847 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 847 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 847 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 847 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_27_27;
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 849 "interval.m"
    MR_Word backend_libs__interval__V_28_28;

#line 848 "interval.m"
    {
#line 848 "interval.m"
      parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__Vars_4, backend_libs__interval__AccessedLater0_6, &backend_libs__interval__AccessedLater_7);
    }
#line 849 "interval.m"
    backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 849 "interval.m"
    backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 849 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 849 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 849 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 849 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 849 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 849 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 849 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 849 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 849 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 849 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 849 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 849 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 849 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 849 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 849 "interval.m"
    {
#line 849 "interval.m"
      MR_Word base;
#line 849 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 849 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = base;
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_26_26));
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_27_27));
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__AccessedLater_7));
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 849 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 849 "interval.m"
    }
#line 846 "interval.m"
  }
#line 843 "interval.m"
}

#line 835 "interval.m"
static void MR_CALL 
backend_libs__interval__require_flushed_3_p_0(
#line 835 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 835 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 835 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9)
#line 835 "interval.m"
{
#line 838 "interval.m"
  {
#line 838 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 838 "interval.m"
    MR_Word backend_libs__interval__FlushedLater0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 838 "interval.m"
    MR_Word backend_libs__interval__FlushedLater_7;
#line 839 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 839 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 839 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 839 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 839 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 839 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 839 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 839 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 839 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 839 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 839 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 839 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 839 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 839 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 839 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 841 "interval.m"
    MR_Word backend_libs__interval__V_27_27;

#line 840 "interval.m"
    {
#line 840 "interval.m"
      backend_libs__interval__FlushedLater_7 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__FlushedLater0_6, backend_libs__interval__Vars_4);
    }
#line 841 "interval.m"
    backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 0)));
#line 841 "interval.m"
    backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 1)));
#line 841 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 2)));
#line 841 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 3)));
#line 841 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 4)));
#line 841 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 5)));
#line 841 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 6)));
#line 841 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 7)));
#line 841 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 8)));
#line 841 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 9)));
#line 841 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 10)));
#line 841 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 11)));
#line 841 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 12)));
#line 841 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 13)));
#line 841 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 14)));
#line 841 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, (MR_Integer) 15)));
#line 841 "interval.m"
    {
#line 841 "interval.m"
      MR_Word base;
#line 841 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 841 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = base;
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_26_26));
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__FlushedLater_7));
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 841 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 841 "interval.m"
    }
#line 838 "interval.m"
  }
#line 835 "interval.m"
}

#line 828 "interval.m"
static void MR_CALL 
backend_libs__interval__require_in_regs_3_p_0(
#line 828 "interval.m"
  MR_Word backend_libs__interval__Vars_4,
#line 828 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 828 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8)
#line 828 "interval.m"
{
#line 831 "interval.m"
  {
#line 831 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 831 "interval.m"
    MR_Word backend_libs__interval__CurIntervalId_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 6)));
#line 832 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 0)));
#line 832 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 1)));
#line 832 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 2)));
#line 832 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 3)));
#line 832 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 4)));
#line 832 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 5)));
#line 832 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 7)));
#line 832 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 8)));
#line 832 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 9)));
#line 832 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 10)));
#line 832 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 11)));
#line 832 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 12)));
#line 832 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 13)));
#line 832 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 14)));
#line 832 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, (MR_Integer) 15)));

#line 833 "interval.m"
    {
#line 833 "interval.m"
      backend_libs__interval__record_interval_vars_4_p_0(backend_libs__interval__CurIntervalId_6, backend_libs__interval__Vars_4, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_8);
    }
#line 831 "interval.m"
  }
#line 828 "interval.m"
}

#line 785 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_no_succ_3_p_0(
#line 785 "interval.m"
  MR_Word backend_libs__interval__Id_4,
#line 785 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 785 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10)
#line 785 "interval.m"
{
#line 788 "interval.m"
  {
#line 788 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 788 "interval.m"
    MR_Word backend_libs__interval__SuccMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 788 "interval.m"
    MR_Word backend_libs__interval__SuccMap_8;
#line 789 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 789 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 789 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 789 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 789 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 789 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 789 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 789 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 789 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 789 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 789 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 789 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 789 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 789 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 789 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 790 "interval.m"
    MR_Word backend_libs__interval___Succ0_7;
#line 790 "interval.m"
    MR_Box backend_libs__interval__conv0__Succ0_7;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_45_45;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 795 "interval.m"
    MR_Word backend_libs__interval__V_44_44;

#line 790 "interval.m"
    {
#line 790 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__SuccMap0_6, ((MR_Box) (backend_libs__interval__Id_4)), &backend_libs__interval__conv0__Succ0_7);
    }
#line 790 "interval.m"
    if (backend_libs__interval__succeeded)
#line 790 "interval.m"
      {
#line 790 "interval.m"
        backend_libs__interval___Succ0_7 = ((MR_Word) backend_libs__interval__conv0__Succ0_7);
#line 790 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 790 "interval.m"
      }
#line 790 "interval.m"
    if (backend_libs__interval__succeeded)
#line 791 "interval.m"
      {
#line 791 "interval.m"
        {
#line 791 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.record_interval_no_succ\'/3", (MR_String) "already in succ map");
#line 791 "interval.m"
          return;
        }
#line 791 "interval.m"
      }
#line 790 "interval.m"
    else
#line 793 "interval.m"
      {
#line 793 "interval.m"
        {
#line 793 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], ((MR_Box) (backend_libs__interval__Id_4)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), backend_libs__interval__SuccMap0_6, &backend_libs__interval__SuccMap_8);
        }
#line 793 "interval.m"
      }
#line 795 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 795 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 795 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 795 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 795 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 795 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 795 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 795 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 795 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 795 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 795 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 795 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 795 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 795 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 795 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 795 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 795 "interval.m"
    {
#line 795 "interval.m"
      MR_Word base;
#line 795 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 795 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_10 = base;
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__SuccMap_8));
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 795 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 795 "interval.m"
    }
#line 788 "interval.m"
  }
#line 785 "interval.m"
}

#line 773 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_succ_4_p_0(
#line 773 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 773 "interval.m"
  MR_Word backend_libs__interval__Succ_6,
#line 773 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 773 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12)
#line 773 "interval.m"
{
#line 776 "interval.m"
  {
#line 776 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 776 "interval.m"
    MR_Word backend_libs__interval__SuccMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 776 "interval.m"
    MR_Word backend_libs__interval__SuccMap_10;
#line 777 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 777 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 777 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 777 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 777 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 777 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 777 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 777 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 777 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 777 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 777 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 777 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 777 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 777 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 777 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 778 "interval.m"
    MR_Word backend_libs__interval__Succ0_9;
#line 778 "interval.m"
    MR_Box backend_libs__interval__conv0_Succ0_9;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 783 "interval.m"
    MR_Word backend_libs__interval__V_45_45;

#line 778 "interval.m"
    {
#line 778 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__SuccMap0_8, ((MR_Box) (backend_libs__interval__Id_5)), &backend_libs__interval__conv0_Succ0_9);
    }
#line 778 "interval.m"
    if (backend_libs__interval__succeeded)
#line 778 "interval.m"
      {
#line 778 "interval.m"
        backend_libs__interval__Succ0_9 = ((MR_Word) backend_libs__interval__conv0_Succ0_9);
#line 778 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 778 "interval.m"
      }
#line 778 "interval.m"
    if (backend_libs__interval__succeeded)
#line 779 "interval.m"
      {
#line 779 "interval.m"
        MR_Word backend_libs__interval__V_13_13;

#line 779 "interval.m"
        {
#line 779 "interval.m"
          backend_libs__interval__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_13_13, 0) = ((MR_Box) (backend_libs__interval__Succ_6));
#line 779 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_13_13, 1) = ((MR_Box) (backend_libs__interval__Succ0_9));
#line 779 "interval.m"
        }
#line 779 "interval.m"
        {
#line 779 "interval.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__V_13_13)), backend_libs__interval__SuccMap0_8, &backend_libs__interval__SuccMap_10);
        }
#line 779 "interval.m"
      }
#line 778 "interval.m"
    else
#line 781 "interval.m"
      {
#line 781 "interval.m"
        MR_Word backend_libs__interval__V_14_14;

#line 781 "interval.m"
        {
#line 781 "interval.m"
          backend_libs__interval__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_14_14, 0) = ((MR_Box) (backend_libs__interval__Succ_6));
#line 781 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 781 "interval.m"
        }
#line 781 "interval.m"
        {
#line 781 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[3], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__V_14_14)), backend_libs__interval__SuccMap0_8, &backend_libs__interval__SuccMap_10);
        }
#line 781 "interval.m"
      }
#line 783 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 783 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 783 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 783 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 783 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 783 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 783 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 783 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 783 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 783 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 783 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 783 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 783 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 783 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 783 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 783 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 783 "interval.m"
    {
#line 783 "interval.m"
      MR_Word base;
#line 783 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 783 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_12 = base;
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__SuccMap_10));
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 783 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 783 "interval.m"
    }
#line 776 "interval.m"
  }
#line 773 "interval.m"
}

#line 765 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_start_4_p_0(
#line 765 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 765 "interval.m"
  MR_Word backend_libs__interval__Start_6,
#line 765 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 765 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11)
#line 765 "interval.m"
{
#line 768 "interval.m"
  {
#line 768 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 768 "interval.m"
    MR_Word backend_libs__interval__StartMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 768 "interval.m"
    MR_Word backend_libs__interval__StartMap_9;
#line 769 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 769 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 769 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 769 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 769 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 769 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 769 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 769 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 769 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 769 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 769 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 769 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 769 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 769 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 769 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 771 "interval.m"
    MR_Word backend_libs__interval__V_39_39;

#line 770 "interval.m"
    {
#line 770 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__Start_6)), backend_libs__interval__StartMap0_8, &backend_libs__interval__StartMap_9);
    }
#line 771 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 771 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 771 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 771 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 771 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 771 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 771 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 771 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 771 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 771 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 771 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 771 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 771 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 771 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 771 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 771 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 771 "interval.m"
    {
#line 771 "interval.m"
      MR_Word base;
#line 771 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 771 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_11 = base;
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__StartMap_9));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 771 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 771 "interval.m"
    }
#line 768 "interval.m"
  }
#line 765 "interval.m"
}

#line 757 "interval.m"
static void MR_CALL 
backend_libs__interval__record_interval_end_4_p_0(
#line 757 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 757 "interval.m"
  MR_Word backend_libs__interval__End_6,
#line 757 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10,
#line 757 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_11)
#line 757 "interval.m"
{
#line 760 "interval.m"
  {
#line 760 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 760 "interval.m"
    MR_Word backend_libs__interval__EndMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 760 "interval.m"
    MR_Word backend_libs__interval__EndMap_9;
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 761 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_29_29;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 763 "interval.m"
    MR_Word backend_libs__interval__V_40_40;

#line 762 "interval.m"
    {
#line 762 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__End_6)), backend_libs__interval__EndMap0_8, &backend_libs__interval__EndMap_9);
    }
#line 763 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 0)));
#line 763 "interval.m"
    backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 1)));
#line 763 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 2)));
#line 763 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 3)));
#line 763 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 4)));
#line 763 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 5)));
#line 763 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 6)));
#line 763 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 7)));
#line 763 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 8)));
#line 763 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 9)));
#line 763 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 10)));
#line 763 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 11)));
#line 763 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 12)));
#line 763 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 13)));
#line 763 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 14)));
#line 763 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_10, (MR_Integer) 15)));
#line 763 "interval.m"
    {
#line 763 "interval.m"
      MR_Word base;
#line 763 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 763 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_11 = base;
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_28_28));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_29_29));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_30_30));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__EndMap_9));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 763 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 763 "interval.m"
    }
#line 760 "interval.m"
  }
#line 757 "interval.m"
}

#line 736 "interval.m"
static void MR_CALL 
backend_libs__interval__record_branch_end_info_3_p_0(
#line 736 "interval.m"
  MR_Word backend_libs__interval__GoalId_4,
#line 736 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 736 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13)
#line 736 "interval.m"
{
#line 739 "interval.m"
  {
#line 739 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 739 "interval.m"
    MR_Word backend_libs__interval__FlushedLater_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 739 "interval.m"
    MR_Word backend_libs__interval__AccessedLater_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 739 "interval.m"
    MR_Word backend_libs__interval__CurInterval_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 739 "interval.m"
    MR_Word backend_libs__interval__BranchEndMap0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 739 "interval.m"
    MR_Word backend_libs__interval__BranchEndInfo_10;
#line 739 "interval.m"
    MR_Word backend_libs__interval__BranchEndMap_11;
#line 740 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 740 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 740 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 740 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 740 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 740 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 740 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 740 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 740 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 740 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 740 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 740 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 746 "interval.m"
    MR_Word backend_libs__interval__V_79_79;

#line 744 "interval.m"
    {
#line 744 "interval.m"
      backend_libs__interval__BranchEndInfo_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 744 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__BranchEndInfo_10, 0) = ((MR_Box) (backend_libs__interval__FlushedLater_6));
#line 744 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__BranchEndInfo_10, 1) = ((MR_Box) (backend_libs__interval__AccessedLater_7));
#line 744 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__BranchEndInfo_10, 2) = ((MR_Box) (backend_libs__interval__CurInterval_8));
#line 744 "interval.m"
    }
#line 745 "interval.m"
    {
#line 745 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_branch_end_info_0, ((MR_Box) (backend_libs__interval__GoalId_4)), ((MR_Box) (backend_libs__interval__BranchEndInfo_10)), backend_libs__interval__BranchEndMap0_9, &backend_libs__interval__BranchEndMap_11);
    }
#line 746 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 746 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 746 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 746 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 746 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 746 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 746 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 746 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 746 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 746 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 746 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 746 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 746 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 746 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 746 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 746 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 746 "interval.m"
    {
#line 746 "interval.m"
      MR_Word base;
#line 746 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 746 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_13 = base;
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__BranchEndMap_11));
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_84_84));
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_85_85));
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_86_86));
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_87_87));
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_88_88));
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_89_89));
#line 746 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_90_90));
#line 746 "interval.m"
    }
#line 739 "interval.m"
  }
#line 736 "interval.m"
}

#line 724 "interval.m"
static void MR_CALL 
backend_libs__interval__new_interval_id_3_p_0(
#line 724 "interval.m"
  MR_Word * backend_libs__interval__Id_4,
#line 724 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11,
#line 724 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_12)
#line 724 "interval.m"
{
#line 727 "interval.m"
  {
#line 727 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 727 "interval.m"
    MR_Word backend_libs__interval__Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 727 "interval.m"
    MR_Word backend_libs__interval__IntervalVars0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 727 "interval.m"
    MR_Integer backend_libs__interval__Num_8;
#line 727 "interval.m"
    MR_Word backend_libs__interval__Counter_9;
#line 727 "interval.m"
    MR_Word backend_libs__interval__IntervalVars_10;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_54_54;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_55_55;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_56_56;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_57_57;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 727 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 733 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 733 "interval.m"
    MR_Word backend_libs__interval__V_60_60;

#line 730 "interval.m"
    {
#line 730 "interval.m"
      mercury__counter__allocate_3_p_0(&backend_libs__interval__Num_8, backend_libs__interval__Counter0_6, &backend_libs__interval__Counter_9);
    }
#line 731 "interval.m"
    *backend_libs__interval__Id_4 = (MR_Word) backend_libs__interval__Num_8;
#line 732 "interval.m"
    {
#line 732 "interval.m"
      backend_libs__interval__V_13_13 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 732 "interval.m"
    {
#line 732 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (*backend_libs__interval__Id_4)), ((MR_Box) (backend_libs__interval__V_13_13)), backend_libs__interval__IntervalVars0_7, &backend_libs__interval__IntervalVars_10);
    }
#line 733 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 0)));
#line 733 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 1)));
#line 733 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 2)));
#line 733 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 3)));
#line 733 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 4)));
#line 733 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 5)));
#line 733 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 6)));
#line 733 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 7)));
#line 733 "interval.m"
    backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 8)));
#line 733 "interval.m"
    backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 9)));
#line 733 "interval.m"
    backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 10)));
#line 733 "interval.m"
    backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 11)));
#line 733 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 12)));
#line 733 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 13)));
#line 733 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 14)));
#line 733 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_11, (MR_Integer) 15)));
#line 734 "interval.m"
    {
#line 734 "interval.m"
      MR_Word base;
#line 734 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 734 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_12 = base;
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_50_50));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_52_52));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__Counter_9));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_54_54));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_55_55));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_56_56));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_57_57));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_58_58));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_59_59));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__IntervalVars_10));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_61_61));
#line 734 "interval.m"
    }
#line 727 "interval.m"
  }
#line 724 "interval.m"
}

#line 718 "interval.m"
static void MR_CALL 
backend_libs__interval__set_cur_interval_3_p_0(
#line 718 "interval.m"
  MR_Word backend_libs__interval__CurInterval_4,
#line 718 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 718 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7)
#line 718 "interval.m"
{
#line 722 "interval.m"
  {
#line 722 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 8)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15)));
#line 722 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6)));

#line 722 "interval.m"
    {
#line 722 "interval.m"
      MR_Word base;
#line 722 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 722 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_7 = base;
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__CurInterval_4));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_16_16));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_17_17));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_18_18));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 722 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_24_24));
#line 722 "interval.m"
    }
#line 722 "interval.m"
  }
#line 718 "interval.m"
}

#line 714 "interval.m"
static void MR_CALL 
backend_libs__interval__get_cur_interval_2_p_0(
#line 714 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__1_1,
#line 714 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3)
#line 714 "interval.m"
{
#line 716 "interval.m"
  {
#line 716 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 0)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 1)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 2)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 3)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 4)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 5)));
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_10_10;
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_11_11;
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_12_12;
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 716 "interval.m"
    MR_Word backend_libs__interval__V_18_18;

#line 716 "interval.m"
    *backend_libs__interval__HeadVar__1_1 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 6)));
#line 716 "interval.m"
    backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 7)));
#line 716 "interval.m"
    backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 8)));
#line 716 "interval.m"
    backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 9)));
#line 716 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 10)));
#line 716 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 11)));
#line 716 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 12)));
#line 716 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 13)));
#line 716 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 14)));
#line 716 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 15)));
#line 716 "interval.m"
  }
#line 714 "interval.m"
}

#line 704 "interval.m"
static void MR_CALL 
backend_libs__interval__gather_interval_vars_4_p_0(
#line 704 "interval.m"
  MR_Word backend_libs__interval__IntervalVarMap_5,
#line 704 "interval.m"
  MR_Word backend_libs__interval__IntervalId_6,
#line 704 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_0_9,
#line 704 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_10)
#line 704 "interval.m"
{
#line 707 "interval.m"
  {
#line 707 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 707 "interval.m"
    MR_Word backend_libs__interval__IntervalVars_8;
#line 708 "interval.m"
    MR_Box backend_libs__interval__conv0_IntervalVars_8;

#line 708 "interval.m"
    {
#line 708 "interval.m"
      mercury__map__lookup_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__IntervalVarMap_5, ((MR_Box) (backend_libs__interval__IntervalId_6)), &backend_libs__interval__conv0_IntervalVars_8);
    }
#line 708 "interval.m"
    backend_libs__interval__IntervalVars_8 = ((MR_Word) backend_libs__interval__conv0_IntervalVars_8);
#line 709 "interval.m"
    {
#line 709 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_10 = parse_tree__set_of_var__union_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__STATE_VARIABLE_OpenIntervalVars_0_9, backend_libs__interval__IntervalVars_8);
    }
#line 707 "interval.m"
  }
#line 704 "interval.m"
}

#line 684 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1(
#line 684 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 684 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 684 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 684 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 684 "interval.m"
{
#line 684 "interval.m"
  {
#line 684 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 684 "interval.m"
    MR_Word backend_libs__interval__conv0_STATE_VARIABLE_OpenIntervalVars_10;

#line 684 "interval.m"
    {
#line 684 "interval.m"
      backend_libs__interval__gather_interval_vars_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__interval__wrapper_arg_1), ((MR_Word) backend_libs__interval__wrapper_arg_2), &backend_libs__interval__conv0_STATE_VARIABLE_OpenIntervalVars_10);
    }
#line 684 "interval.m"
    *backend_libs__interval__wrapper_arg_3 = ((MR_Box) (backend_libs__interval__conv0_STATE_VARIABLE_OpenIntervalVars_10));
#line 684 "interval.m"
  }
#line 684 "interval.m"
}

#line 677 "interval.m"
static void MR_CALL 
backend_libs__interval__assign_open_intervals_to_anchor_3_p_0(
#line 677 "interval.m"
  MR_Word backend_libs__interval__Anchor_4,
#line 677 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17,
#line 677 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_18)
#line 677 "interval.m"
{
#line 680 "interval.m"
  {
#line 680 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 680 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_87_87;
#line 680 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_88_88;
#line 680 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 9)));
#line 680 "interval.m"
    MR_Word backend_libs__interval__IntervalVarMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 14)));
#line 680 "interval.m"
    MR_Word backend_libs__interval__CurOpenIntervals_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 8)));
#line 680 "interval.m"
    MR_Word backend_libs__interval__CurOpenIntervalVars_9;
#line 680 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowMap_16;
#line 680 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 680 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 681 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 0)));
#line 681 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 1)));
#line 681 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 2)));
#line 681 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 3)));
#line 681 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 4)));
#line 681 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 5)));
#line 681 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 6)));
#line 681 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 7)));
#line 681 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 10)));
#line 681 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 11)));
#line 681 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 12)));
#line 681 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 13)));
#line 681 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 15)));
#line 684 "interval.m"
    MR_Box backend_libs__interval__conv1_CurOpenIntervalVars_9;
#line 686 "interval.m"
    MR_Word backend_libs__interval__AnchorFollowInfo0_10;
#line 686 "interval.m"
    MR_Box backend_libs__interval__conv2_AnchorFollowInfo0_10;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 702 "interval.m"
    MR_Word backend_libs__interval__V_77_77;

#line 684 "interval.m"
    {
#line 684 "interval.m"
      backend_libs__interval__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 684 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 0) = ((MR_Box) (&backend_libs__interval_scalar_common_4[1]));
#line 684 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 1) = ((MR_Box) (backend_libs__interval__assign_open_intervals_to_anchor_3_p_0_1));
#line 684 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 684 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_19_19, 3) = ((MR_Box) (backend_libs__interval__IntervalVarMap_7));
#line 684 "interval.m"
    }
#line 13774 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_87_87 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 685 "interval.m"
    {
#line 685 "interval.m"
      backend_libs__interval__V_20_20 = parse_tree__set_of_var__init_0_f_0(backend_libs__interval__TypeCtorInfo_87_87);
    }
#line 13781 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_88_88 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 684 "interval.m"
    {
#line 684 "interval.m"
      mercury__set__fold_4_p_0(backend_libs__interval__TypeCtorInfo_88_88, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__V_19_19, backend_libs__interval__CurOpenIntervals_8, ((MR_Box) (backend_libs__interval__V_20_20)), &backend_libs__interval__conv1_CurOpenIntervalVars_9);
    }
#line 684 "interval.m"
    backend_libs__interval__CurOpenIntervalVars_9 = ((MR_Word) backend_libs__interval__conv1_CurOpenIntervalVars_9);
#line 686 "interval.m"
    {
#line 686 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, backend_libs__interval__AnchorFollowMap0_6, ((MR_Box) (backend_libs__interval__Anchor_4)), &backend_libs__interval__conv2_AnchorFollowInfo0_10);
    }
#line 686 "interval.m"
    if (backend_libs__interval__succeeded)
#line 686 "interval.m"
      {
#line 686 "interval.m"
        backend_libs__interval__AnchorFollowInfo0_10 = ((MR_Word) backend_libs__interval__conv2_AnchorFollowInfo0_10);
#line 686 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 686 "interval.m"
      }
#line 686 "interval.m"
    if (backend_libs__interval__succeeded)
#line 688 "interval.m"
      {
#line 688 "interval.m"
        MR_Word backend_libs__interval__OpenIntervalVars0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo0_10, (MR_Integer) 0)));
#line 688 "interval.m"
        MR_Word backend_libs__interval__OpenIntervals0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo0_10, (MR_Integer) 1)));
#line 688 "interval.m"
        MR_Word backend_libs__interval__OpenIntervalVars_13;
#line 688 "interval.m"
        MR_Word backend_libs__interval__OpenIntervals_14;
#line 688 "interval.m"
        MR_Word backend_libs__interval__AnchorFollowInfo_15;

#line 689 "interval.m"
        {
#line 689 "interval.m"
          backend_libs__interval__OpenIntervalVars_13 = parse_tree__set_of_var__union_2_f_0(backend_libs__interval__TypeCtorInfo_87_87, backend_libs__interval__OpenIntervalVars0_11, backend_libs__interval__CurOpenIntervalVars_9);
        }
#line 691 "interval.m"
        {
#line 691 "interval.m"
          backend_libs__interval__OpenIntervals_14 = mercury__set__union_2_f_0(backend_libs__interval__TypeCtorInfo_88_88, backend_libs__interval__OpenIntervals0_12, backend_libs__interval__CurOpenIntervals_8);
        }
#line 692 "interval.m"
        {
#line 692 "interval.m"
          backend_libs__interval__AnchorFollowInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 692 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_15, 0) = ((MR_Box) (backend_libs__interval__OpenIntervalVars_13));
#line 692 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_15, 1) = ((MR_Box) (backend_libs__interval__OpenIntervals_14));
#line 692 "interval.m"
        }
#line 694 "interval.m"
        {
#line 694 "interval.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, ((MR_Box) (backend_libs__interval__Anchor_4)), ((MR_Box) (backend_libs__interval__AnchorFollowInfo_15)), backend_libs__interval__AnchorFollowMap0_6, &backend_libs__interval__AnchorFollowMap_16);
        }
#line 688 "interval.m"
      }
#line 686 "interval.m"
    else
#line 698 "interval.m"
      {
#line 698 "interval.m"
        MR_Word backend_libs__interval__AnchorFollowInfo_22;

#line 697 "interval.m"
        {
#line 697 "interval.m"
          backend_libs__interval__AnchorFollowInfo_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 697 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_22, 0) = ((MR_Box) (backend_libs__interval__CurOpenIntervalVars_9));
#line 697 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__AnchorFollowInfo_22, 1) = ((MR_Box) (backend_libs__interval__CurOpenIntervals_8));
#line 697 "interval.m"
        }
#line 699 "interval.m"
        {
#line 699 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, ((MR_Box) (backend_libs__interval__Anchor_4)), ((MR_Box) (backend_libs__interval__AnchorFollowInfo_22)), backend_libs__interval__AnchorFollowMap0_6, &backend_libs__interval__AnchorFollowMap_16);
        }
#line 698 "interval.m"
      }
#line 702 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 0)));
#line 702 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 1)));
#line 702 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 2)));
#line 702 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 3)));
#line 702 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 4)));
#line 702 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 5)));
#line 702 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 6)));
#line 702 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 7)));
#line 702 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 8)));
#line 702 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 9)));
#line 702 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 10)));
#line 702 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 11)));
#line 702 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 12)));
#line 702 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 13)));
#line 702 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 14)));
#line 702 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_17, (MR_Integer) 15)));
#line 702 "interval.m"
    {
#line 702 "interval.m"
      MR_Word base;
#line 702 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 702 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_18 = base;
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__AnchorFollowMap_16));
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 702 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 702 "interval.m"
    }
#line 680 "interval.m"
  }
#line 677 "interval.m"
}

#line 671 "interval.m"
static void MR_CALL 
backend_libs__interval__one_open_interval_3_p_0(
#line 671 "interval.m"
  MR_Word backend_libs__interval__IntervalId_4,
#line 671 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 671 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7)
#line 671 "interval.m"
{
#line 674 "interval.m"
  {
#line 674 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 674 "interval.m"
    MR_Word backend_libs__interval__V_9_9;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_10_10;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_11_11;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_12_12;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_22_22;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_23_23;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_24_24;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_25_25;
#line 675 "interval.m"
    MR_Word backend_libs__interval__V_18_18;

#line 675 "interval.m"
    {
#line 675 "interval.m"
      backend_libs__interval__V_9_9 = mercury__set__make_singleton_set_1_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (backend_libs__interval__IntervalId_4)));
    }
#line 675 "interval.m"
    backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0)));
#line 675 "interval.m"
    backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1)));
#line 675 "interval.m"
    backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2)));
#line 675 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3)));
#line 675 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4)));
#line 675 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5)));
#line 675 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6)));
#line 675 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7)));
#line 675 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 8)));
#line 675 "interval.m"
    backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9)));
#line 675 "interval.m"
    backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10)));
#line 675 "interval.m"
    backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11)));
#line 675 "interval.m"
    backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12)));
#line 675 "interval.m"
    backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13)));
#line 675 "interval.m"
    backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14)));
#line 675 "interval.m"
    backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15)));
#line 675 "interval.m"
    {
#line 675 "interval.m"
      MR_Word base;
#line 675 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 675 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_7 = base;
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_15_15));
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_16_16));
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_17_17));
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_24_24));
#line 675 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_25_25));
#line 675 "interval.m"
    }
#line 674 "interval.m"
  }
#line 671 "interval.m"
}

#line 666 "interval.m"
static void MR_CALL 
backend_libs__interval__no_open_intervals_2_p_0(
#line 666 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4,
#line 666 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_5)
#line 666 "interval.m"
{
#line 668 "interval.m"
  {
#line 668 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 668 "interval.m"
    MR_Word backend_libs__interval__V_7_7;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_8_8;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_9_9;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_10_10;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_11_11;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_12_12;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_18_18;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_22_22;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_23_23;
#line 669 "interval.m"
    MR_Word backend_libs__interval__V_16_16;

#line 669 "interval.m"
    {
#line 669 "interval.m"
      backend_libs__interval__V_7_7 = mercury__set__init_0_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0);
    }
#line 669 "interval.m"
    backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 0)));
#line 669 "interval.m"
    backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 1)));
#line 669 "interval.m"
    backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 2)));
#line 669 "interval.m"
    backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 3)));
#line 669 "interval.m"
    backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 4)));
#line 669 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 5)));
#line 669 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 6)));
#line 669 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 7)));
#line 669 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 8)));
#line 669 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 9)));
#line 669 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 10)));
#line 669 "interval.m"
    backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 11)));
#line 669 "interval.m"
    backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 12)));
#line 669 "interval.m"
    backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 13)));
#line 669 "interval.m"
    backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 14)));
#line 669 "interval.m"
    backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_4, (MR_Integer) 15)));
#line 669 "interval.m"
    {
#line 669 "interval.m"
      MR_Word base;
#line 669 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 669 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_5 = base;
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_8_8));
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_15_15));
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_7_7));
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_17_17));
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_18_18));
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 669 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 669 "interval.m"
    }
#line 668 "interval.m"
  }
#line 666 "interval.m"
}

#line 660 "interval.m"
static void MR_CALL 
backend_libs__interval__set_open_intervals_3_p_0(
#line 660 "interval.m"
  MR_Word backend_libs__interval__OpenIntervals_4,
#line 660 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6,
#line 660 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_7)
#line 660 "interval.m"
{
#line 664 "interval.m"
  {
#line 664 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 0)));
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 1)));
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 2)));
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 3)));
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 4)));
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 5)));
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 6)));
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 7)));
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 9)));
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 10)));
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 11)));
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 12)));
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 13)));
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 14)));
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 15)));
#line 664 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_6, (MR_Integer) 8)));

#line 664 "interval.m"
    {
#line 664 "interval.m"
      MR_Word base;
#line 664 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 664 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_7 = base;
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_9_9));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_10_10));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_11_11));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_12_12));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_13_13));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_14_14));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_15_15));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_16_16));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__OpenIntervals_4));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_18_18));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_19_19));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_23_23));
#line 664 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_24_24));
#line 664 "interval.m"
    }
#line 664 "interval.m"
  }
#line 660 "interval.m"
}

#line 655 "interval.m"
static void MR_CALL 
backend_libs__interval__get_open_intervals_2_p_0(
#line 655 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_3,
#line 655 "interval.m"
  MR_Word * backend_libs__interval__OpenIntervals_4)
#line 655 "interval.m"
{
#line 658 "interval.m"
  {
#line 658 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 0)));
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 1)));
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 2)));
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 3)));
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 4)));
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 5)));
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 6)));
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 7)));
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_13_13;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_14_14;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_15_15;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_18_18;
#line 658 "interval.m"
    MR_Word backend_libs__interval__V_19_19;

#line 658 "interval.m"
    *backend_libs__interval__OpenIntervals_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 8)));
#line 658 "interval.m"
    backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 9)));
#line 658 "interval.m"
    backend_libs__interval__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 10)));
#line 658 "interval.m"
    backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 11)));
#line 658 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 12)));
#line 658 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 13)));
#line 658 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 14)));
#line 658 "interval.m"
    backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_3, (MR_Integer) 15)));
#line 658 "interval.m"
  }
#line 655 "interval.m"
}

#line 622 "interval.m"
static void MR_CALL 
backend_libs__interval__reached_cond_then_3_p_0(
#line 622 "interval.m"
  MR_Word backend_libs__interval__GoalInfo_4,
#line 622 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 622 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13)
#line 622 "interval.m"
{
#line 625 "interval.m"
  {
#line 625 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 625 "interval.m"
    MR_Word backend_libs__interval__GoalId_6;
#line 625 "interval.m"
    MR_Word backend_libs__interval__ThenStartId_7;
#line 625 "interval.m"
    MR_Word backend_libs__interval__CondThenAnchor_8;
#line 625 "interval.m"
    MR_Word backend_libs__interval__CondTailId_9;
#line 625 "interval.m"
    MR_Word backend_libs__interval__OpenIntervals0_10;
#line 625 "interval.m"
    MR_Word backend_libs__interval__OpenIntervals_11;
#line 625 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14;
#line 625 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_15_15;
#line 625 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_16_16;
#line 625 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17;
#line 625 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18;
#line 625 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19;
#line 625 "interval.m"
    MR_Word backend_libs__interval__CurInterval_26;
#line 625 "interval.m"
    MR_Word backend_libs__interval__CondEndMap0_27;
#line 625 "interval.m"
    MR_Word backend_libs__interval__CondEndMap_28;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_30_30;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 752 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 755 "interval.m"
    MR_Word backend_libs__interval__V_60_60;
#line 755 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 755 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 755 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 755 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 755 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 755 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 755 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 755 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 755 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 755 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 755 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 755 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 755 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 755 "interval.m"
    MR_Word backend_libs__interval__V_65_65;

#line 626 "interval.m"
    {
#line 626 "interval.m"
      backend_libs__interval__GoalId_6 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(backend_libs__interval__GoalInfo_4);
    }
#line 752 "interval.m"
    backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 752 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 752 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 752 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 752 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 752 "interval.m"
    backend_libs__interval__CondEndMap0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 752 "interval.m"
    backend_libs__interval__CurInterval_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 752 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 752 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 752 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 752 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 752 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 752 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 752 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 752 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 752 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 754 "interval.m"
    {
#line 754 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (backend_libs__interval__GoalId_6)), ((MR_Box) (backend_libs__interval__CurInterval_26)), backend_libs__interval__CondEndMap0_27, &backend_libs__interval__CondEndMap_28);
    }
#line 755 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 755 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 755 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 755 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 755 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 755 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 755 "interval.m"
    backend_libs__interval__ThenStartId_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 755 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 755 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 755 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 755 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 755 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 755 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 755 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 755 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 755 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 755 "interval.m"
    {
#line 755 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 0) = ((MR_Box) (backend_libs__interval__V_60_60));
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 1) = ((MR_Box) (backend_libs__interval__V_61_61));
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 2) = ((MR_Box) (backend_libs__interval__V_62_62));
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 3) = ((MR_Box) (backend_libs__interval__V_63_63));
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 4) = ((MR_Box) (backend_libs__interval__V_64_64));
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 5) = ((MR_Box) (backend_libs__interval__CondEndMap_28));
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 6) = ((MR_Box) (backend_libs__interval__ThenStartId_7));
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 7) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 8) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 9) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 10) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 11) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 12) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 13) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 14) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 755 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, 15) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 755 "interval.m"
    }
#line 631 "interval.m"
    {
#line 631 "interval.m"
      backend_libs__interval__CondThenAnchor_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 631 "interval.m"
      MR_hl_field(MR_mktag(2), backend_libs__interval__CondThenAnchor_8, 0) = ((MR_Box) (backend_libs__interval__GoalId_6));
#line 631 "interval.m"
    }
#line 629 "interval.m"
    {
#line 629 "interval.m"
      backend_libs__interval__record_interval_start_4_p_0(backend_libs__interval__ThenStartId_7, backend_libs__interval__CondThenAnchor_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_15_15);
    }
#line 630 "interval.m"
    {
#line 630 "interval.m"
      backend_libs__interval__new_interval_id_3_p_0(&backend_libs__interval__CondTailId_9, backend_libs__interval__STATE_VARIABLE_IntervalInfo_15_15, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_16_16);
    }
#line 632 "interval.m"
    {
#line 632 "interval.m"
      backend_libs__interval__record_interval_end_4_p_0(backend_libs__interval__CondTailId_9, backend_libs__interval__CondThenAnchor_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_16_16, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17);
    }
#line 633 "interval.m"
    {
#line 633 "interval.m"
      backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__CondTailId_9, backend_libs__interval__ThenStartId_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_17_17, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18);
    }
#line 634 "interval.m"
    {
#line 634 "interval.m"
      backend_libs__interval__set_cur_interval_3_p_0(backend_libs__interval__CondTailId_9, backend_libs__interval__STATE_VARIABLE_IntervalInfo_18_18, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19);
    }
#line 635 "interval.m"
    {
#line 635 "interval.m"
      backend_libs__interval__get_open_intervals_2_p_0(backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, &backend_libs__interval__OpenIntervals0_10);
    }
#line 636 "interval.m"
    {
#line 636 "interval.m"
      mercury__set__insert_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, ((MR_Box) (backend_libs__interval__CondTailId_9)), backend_libs__interval__OpenIntervals0_10, &backend_libs__interval__OpenIntervals_11);
    }
#line 637 "interval.m"
    {
#line 637 "interval.m"
      backend_libs__interval__set_open_intervals_3_p_0(backend_libs__interval__OpenIntervals_11, backend_libs__interval__STATE_VARIABLE_IntervalInfo_19_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_13);
    }
#line 625 "interval.m"
  }
#line 622 "interval.m"
}

#line 595 "interval.m"
static void MR_CALL 
backend_libs__interval__enter_branch_tail_4_p_0(
#line 595 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_5,
#line 595 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 595 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9,
#line 595 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_10)
#line 595 "interval.m"
{
#line 598 "interval.m"
  {
#line 598 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 598 "interval.m"
    MR_Word backend_libs__interval__BranchTailId_8;
#line 598 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11;
#line 598 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_12_12;
#line 598 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_13_13;
#line 598 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14;
#line 598 "interval.m"
    MR_Word backend_libs__interval__Counter0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 598 "interval.m"
    MR_Word backend_libs__interval__IntervalVars0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 598 "interval.m"
    MR_Integer backend_libs__interval__Num_22;
#line 598 "interval.m"
    MR_Word backend_libs__interval__Counter_23;
#line 598 "interval.m"
    MR_Word backend_libs__interval__IntervalVars_24;
#line 598 "interval.m"
    MR_Word backend_libs__interval__V_25_25;
#line 598 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 598 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 598 "interval.m"
    MR_Word backend_libs__interval__V_60_60;
#line 598 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 598 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 598 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 598 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 598 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 598 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 598 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 598 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 598 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 598 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 598 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 728 "interval.m"
    MR_Word backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 733 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 733 "interval.m"
    MR_Word backend_libs__interval__V_72_72;

#line 730 "interval.m"
    {
#line 730 "interval.m"
      mercury__counter__allocate_3_p_0(&backend_libs__interval__Num_22, backend_libs__interval__Counter0_20, &backend_libs__interval__Counter_23);
    }
#line 731 "interval.m"
    backend_libs__interval__BranchTailId_8 = (MR_Word) backend_libs__interval__Num_22;
#line 732 "interval.m"
    {
#line 732 "interval.m"
      backend_libs__interval__V_25_25 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
    }
#line 732 "interval.m"
    {
#line 732 "interval.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__BranchTailId_8)), ((MR_Box) (backend_libs__interval__V_25_25)), backend_libs__interval__IntervalVars0_21, &backend_libs__interval__IntervalVars_24);
    }
#line 733 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 0)));
#line 733 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 1)));
#line 733 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 2)));
#line 733 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 3)));
#line 733 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 4)));
#line 733 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 5)));
#line 733 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 6)));
#line 733 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 7)));
#line 733 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 8)));
#line 733 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 9)));
#line 733 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 10)));
#line 733 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 11)));
#line 733 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 12)));
#line 733 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 13)));
#line 733 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 14)));
#line 733 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_9, (MR_Integer) 15)));
#line 734 "interval.m"
    {
#line 734 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 0) = ((MR_Box) (backend_libs__interval__V_58_58));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 1) = ((MR_Box) (backend_libs__interval__V_59_59));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 2) = ((MR_Box) (backend_libs__interval__V_60_60));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 3) = ((MR_Box) (backend_libs__interval__V_61_61));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 4) = ((MR_Box) (backend_libs__interval__V_62_62));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 5) = ((MR_Box) (backend_libs__interval__V_63_63));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 6) = ((MR_Box) (backend_libs__interval__V_64_64));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 7) = ((MR_Box) (backend_libs__interval__Counter_23));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 8) = ((MR_Box) (backend_libs__interval__V_66_66));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 9) = ((MR_Box) (backend_libs__interval__V_67_67));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 10) = ((MR_Box) (backend_libs__interval__V_68_68));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 11) = ((MR_Box) (backend_libs__interval__V_69_69));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 12) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 13) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 14) = ((MR_Box) (backend_libs__interval__IntervalVars_24));
#line 734 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, 15) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 734 "interval.m"
    }
#line 600 "interval.m"
    {
#line 600 "interval.m"
      backend_libs__interval__record_interval_end_4_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__EndAnchor_5, backend_libs__interval__STATE_VARIABLE_IntervalInfo_11_11, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_12_12);
    }
#line 601 "interval.m"
    {
#line 601 "interval.m"
      backend_libs__interval__record_interval_succ_4_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__AfterId_6, backend_libs__interval__STATE_VARIABLE_IntervalInfo_12_12, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_13_13);
    }
#line 602 "interval.m"
    {
#line 602 "interval.m"
      backend_libs__interval__set_cur_interval_3_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_13_13, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14);
    }
#line 603 "interval.m"
    {
#line 603 "interval.m"
      backend_libs__interval__one_open_interval_3_p_0(backend_libs__interval__BranchTailId_8, backend_libs__interval__STATE_VARIABLE_IntervalInfo_14_14, backend_libs__interval__STATE_VARIABLE_IntervalInfo_10);
    }
#line 598 "interval.m"
  }
#line 595 "interval.m"
}

#line 527 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_cases_10_p_0(
#line 527 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 527 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 527 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_2,
#line 527 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_3,
#line 527 "interval.m"
  MR_Word backend_libs__interval__BeforeId_4,
#line 527 "interval.m"
  MR_Word backend_libs__interval__AfterId_5,
#line 527 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__6_6,
#line 527 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7,
#line 527 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_8,
#line 527 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_9,
#line 527 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_10)
#line 527 "interval.m"
{
#line 532 "interval.m"
  {
#line 532 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 532 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "interval.m"
      {
#line 532 "interval.m"
        *backend_libs__interval__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_Acc_10 = backend_libs__interval__STATE_VARIABLE_Acc_0_9;
#line 532 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_IntervalInfo_8 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7;
#line 532 "interval.m"
      }
#line 532 "interval.m"
    else
#line 535 "interval.m"
      {
#line 535 "interval.m"
        MR_Word backend_libs__interval__Case_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 535 "interval.m"
        MR_Word backend_libs__interval__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 535 "interval.m"
        MR_Word backend_libs__interval__OpenIntervals_27;
#line 535 "interval.m"
        MR_Word backend_libs__interval__OpenIntervalsList_28;
#line 535 "interval.m"
        MR_Word backend_libs__interval__Goal_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case_21, (MR_Integer) 2)));
#line 535 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 535 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39;
#line 535 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_40_40;
#line 535 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_42_42;
#line 535 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_43_43;
#line 536 "interval.m"
        MR_Word backend_libs__interval___MainConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case_21, (MR_Integer) 0)));
#line 536 "interval.m"
        MR_Word backend_libs__interval___OtherConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Case_21, (MR_Integer) 1)));

#line 537 "interval.m"
        {
#line 537 "interval.m"
          backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_3, backend_libs__interval__AfterId_5, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_7, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
        }
#line 538 "interval.m"
        {
#line 538 "interval.m"
          backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Goal_33, backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, backend_libs__interval__STATE_VARIABLE_Acc_0_9, &backend_libs__interval__STATE_VARIABLE_Acc_40_40);
        }
#line 539 "interval.m"
        {
#line 539 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, backend_libs__interval__StartAnchor_2, backend_libs__interval__BeforeId_4, &backend_libs__interval__OpenIntervals_27, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_42_42, backend_libs__interval__STATE_VARIABLE_Acc_40_40, &backend_libs__interval__STATE_VARIABLE_Acc_43_43);
        }
#line 541 "interval.m"
        {
#line 541 "interval.m"
          backend_libs__interval__build_interval_info_in_cases_10_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Cases_22, backend_libs__interval__StartAnchor_2, backend_libs__interval__EndAnchor_3, backend_libs__interval__BeforeId_4, backend_libs__interval__AfterId_5, &backend_libs__interval__OpenIntervalsList_28, backend_libs__interval__STATE_VARIABLE_IntervalInfo_42_42, backend_libs__interval__STATE_VARIABLE_IntervalInfo_8, backend_libs__interval__STATE_VARIABLE_Acc_43_43, backend_libs__interval__STATE_VARIABLE_Acc_10);
        }
#line 535 "interval.m"
        {
#line 535 "interval.m"
          MR_Word base;
#line 535 "interval.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "interval.m"
          *backend_libs__interval__HeadVar__6_6 = base;
#line 535 "interval.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__interval__OpenIntervals_27));
#line 535 "interval.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__interval__OpenIntervalsList_28));
#line 535 "interval.m"
        }
#line 535 "interval.m"
      }
#line 532 "interval.m"
  }
#line 527 "interval.m"
}

#line 511 "interval.m"
static void MR_CALL 
backend_libs__interval__build_interval_info_in_disj_11_p_0(
#line 511 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46,
#line 511 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 511 "interval.m"
  MR_Word backend_libs__interval__MaybeNeedsFlush_2,
#line 511 "interval.m"
  MR_Word backend_libs__interval__StartAnchor_3,
#line 511 "interval.m"
  MR_Word backend_libs__interval__EndAnchor_4,
#line 511 "interval.m"
  MR_Word backend_libs__interval__BeforeId_5,
#line 511 "interval.m"
  MR_Word backend_libs__interval__AfterId_6,
#line 511 "interval.m"
  MR_Word * backend_libs__interval__HeadVar__7_7,
#line 511 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8,
#line 511 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_9,
#line 511 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_10,
#line 511 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_11)
#line 511 "interval.m"
{
#line 516 "interval.m"
  {
#line 516 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 516 "interval.m"
    if ((backend_libs__interval__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 516 "interval.m"
      {
#line 516 "interval.m"
        {
#line 516 "interval.m"
          *backend_libs__interval__HeadVar__7_7 = mercury__set__init_0_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0);
        }
#line 516 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_Acc_11 = backend_libs__interval__STATE_VARIABLE_Acc_0_10;
#line 516 "interval.m"
        *backend_libs__interval__STATE_VARIABLE_IntervalInfo_9 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8;
#line 516 "interval.m"
      }
#line 516 "interval.m"
    else
#line 519 "interval.m"
      {
#line 519 "interval.m"
        MR_Word backend_libs__interval__Goal_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 519 "interval.m"
        MR_Word backend_libs__interval__Goals_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));
#line 519 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38;
#line 519 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39;
#line 519 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_40_40;
#line 519 "interval.m"
        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41;
#line 519 "interval.m"
        MR_Box backend_libs__interval__STATE_VARIABLE_Acc_42_42;
#line 524 "interval.m"
        MR_Word backend_libs__interval___OpenIntervals_33;

#line 520 "interval.m"
        {
#line 520 "interval.m"
          backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_4, backend_libs__interval__AfterId_6, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_8, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38);
        }
#line 521 "interval.m"
        {
#line 521 "interval.m"
          backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Goal_23, backend_libs__interval__STATE_VARIABLE_IntervalInfo_38_38, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, backend_libs__interval__STATE_VARIABLE_Acc_0_10, &backend_libs__interval__STATE_VARIABLE_Acc_40_40);
        }
#line 522 "interval.m"
        {
#line 522 "interval.m"
          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0(backend_libs__interval__MaybeNeedsFlush_2, backend_libs__interval__StartAnchor_3, backend_libs__interval__BeforeId_5, backend_libs__interval__HeadVar__7_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_39_39, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, backend_libs__interval__STATE_VARIABLE_Acc_40_40, &backend_libs__interval__STATE_VARIABLE_Acc_42_42);
        }
#line 524 "interval.m"
        {
#line 524 "interval.m"
          backend_libs__interval__build_interval_info_in_disj_11_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_46, backend_libs__interval__Goals_24, (MR_Integer) 0, backend_libs__interval__StartAnchor_3, backend_libs__interval__EndAnchor_4, backend_libs__interval__BeforeId_5, backend_libs__interval__AfterId_6, &backend_libs__interval___OpenIntervals_33, backend_libs__interval__STATE_VARIABLE_IntervalInfo_41_41, backend_libs__interval__STATE_VARIABLE_IntervalInfo_9, backend_libs__interval__STATE_VARIABLE_Acc_42_42, backend_libs__interval__STATE_VARIABLE_Acc_11);
        }
#line 519 "interval.m"
      }
#line 516 "interval.m"
  }
#line 511 "interval.m"
}

#line 428 "interval.m"
static MR_bool MR_CALL 
backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(
#line 428 "interval.m"
  MR_Word backend_libs__interval__ModuleInfo_1,
#line 428 "interval.m"
  MR_Word backend_libs__interval__HeadVar__2_2)
#line 428 "interval.m"
{
#line 431 "interval.m"
  while (MR_TRUE)
#line 431 "interval.m"
    {
#line 431 "interval.m"
      /* tailcall optimized into a loop */
#line 431 "interval.m"
      {
#line 431 "interval.m"
        MR_bool backend_libs__interval__succeeded;

#line 431 "interval.m"
        if ((backend_libs__interval__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "interval.m"
          backend_libs__interval__succeeded = MR_TRUE;
#line 431 "interval.m"
        else
#line 432 "interval.m"
          {
#line 432 "interval.m"
            MR_Word backend_libs__interval__ArgMode_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 0)));
#line 432 "interval.m"
            MR_Word backend_libs__interval__ArgsModes_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__HeadVar__2_2, (MR_Integer) 1)));
#line 432 "interval.m"
            MR_Word backend_libs__interval__InitCell_7;
#line 432 "interval.m"
            MR_Word backend_libs__interval__InitArg_8;
#line 432 "interval.m"
            MR_Word backend_libs__interval__FinalCell_9;
#line 432 "interval.m"
            MR_Word backend_libs__interval__FinalArg_10;
#line 432 "interval.m"
            MR_Word backend_libs__interval__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__ArgMode_5, (MR_Integer) 0)));
#line 432 "interval.m"
            MR_Word backend_libs__interval__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__ArgMode_5, (MR_Integer) 1)));
#line 432 "interval.m"
            MR_Word backend_libs__interval__V_13_13;
#line 432 "interval.m"
            MR_Word backend_libs__interval__V_14_14;

#line 433 "interval.m"
            backend_libs__interval__InitCell_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_11_11, (MR_Integer) 0)));
#line 433 "interval.m"
            backend_libs__interval__InitArg_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_11_11, (MR_Integer) 1)));
#line 433 "interval.m"
            backend_libs__interval__FinalCell_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_12_12, (MR_Integer) 0)));
#line 433 "interval.m"
            backend_libs__interval__FinalArg_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__V_12_12, (MR_Integer) 1)));
#line 434 "interval.m"
            {
#line 434 "interval.m"
              backend_libs__interval__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 434 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__V_13_13, 0) = ((MR_Box) (backend_libs__interval__InitCell_7));
#line 434 "interval.m"
              MR_hl_field(MR_mktag(0), backend_libs__interval__V_13_13, 1) = ((MR_Box) (backend_libs__interval__FinalCell_9));
#line 434 "interval.m"
            }
#line 434 "interval.m"
            {
#line 434 "interval.m"
              backend_libs__interval__succeeded = check_hlds__mode_util__mode_is_fully_input_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__V_13_13);
            }
#line 432 "interval.m"
            if (backend_libs__interval__succeeded)
#line 432 "interval.m"
              {
#line 435 "interval.m"
                {
#line 435 "interval.m"
                  backend_libs__interval__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 435 "interval.m"
                  MR_hl_field(MR_mktag(0), backend_libs__interval__V_14_14, 0) = ((MR_Box) (backend_libs__interval__InitArg_8));
#line 435 "interval.m"
                  MR_hl_field(MR_mktag(0), backend_libs__interval__V_14_14, 1) = ((MR_Box) (backend_libs__interval__FinalArg_10));
#line 435 "interval.m"
                }
#line 435 "interval.m"
                {
#line 435 "interval.m"
                  backend_libs__interval__succeeded = check_hlds__mode_util__mode_is_output_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__V_14_14);
                }
#line 432 "interval.m"
                if (backend_libs__interval__succeeded)
#line 432 "interval.m"
                  {
#line 436 "interval.m"
                    {
#line 436 "interval.m"
                      backend_libs__interval__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__FinalCell_9);
                    }
#line 432 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 432 "interval.m"
                      {
#line 437 "interval.m"
                        {
#line 437 "interval.m"
                          backend_libs__interval__succeeded = check_hlds__inst_test__inst_is_not_partly_unique_2_p_0(backend_libs__interval__ModuleInfo_1, backend_libs__interval__FinalArg_10);
                        }
#line 432 "interval.m"
                        if (backend_libs__interval__succeeded)
#line 438 "interval.m"
                          {
#line 438 "interval.m"
                            /* direct tailcall eliminated */
#line 438 "interval.m"
                            {
#line 438 "interval.m"
                              MR_Word backend_libs__interval__HeadVar__2__tmp_copy_2 = backend_libs__interval__ArgsModes_6;

#line 438 "interval.m"
                              backend_libs__interval__HeadVar__2_2 = backend_libs__interval__HeadVar__2__tmp_copy_2;
#line 438 "interval.m"
                            }
#line 438 "interval.m"
                            continue;
#line 438 "interval.m"
                          }
#line 432 "interval.m"
                      }
#line 432 "interval.m"
                  }
#line 432 "interval.m"
              }
#line 432 "interval.m"
          }
#line 431 "interval.m"
        return backend_libs__interval__succeeded;
#line 431 "interval.m"
      }
#line 431 "interval.m"
      break;
#line 431 "interval.m"
    }
#line 428 "interval.m"
}

#line 184 "interval.m"
MR_Integer MR_CALL 
backend_libs__interval__interval_id_to_int_1_f_0(
#line 184 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1)
#line 184 "interval.m"
{
#line 1347 "interval.m"
  {
#line 1347 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1347 "interval.m"
    MR_Integer backend_libs__interval__Num_3 = (MR_Integer) backend_libs__interval__HeadVar__1_1;

#line 1347 "interval.m"
    return backend_libs__interval__Num_3;
#line 1347 "interval.m"
  }
#line 184 "interval.m"
}

#line 1345 "interval.m"
static void MR_CALL 
backend_libs__interval__write_int_list_3_p_0_1(
#line 1345 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1345 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1345 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1345 "interval.m"
{
#line 1345 "interval.m"
  {
#line 1345 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1345 "interval.m"
    {
#line 1345 "interval.m"
      mercury__io__write_int_3_p_0(((MR_Integer) backend_libs__interval__wrapper_arg_1));
    }
#line 1345 "interval.m"
  }
#line 1345 "interval.m"
}

#line 182 "interval.m"
void MR_CALL 
backend_libs__interval__write_int_list_3_p_0(
#line 182 "interval.m"
  MR_Word backend_libs__interval__List_4)
#line 182 "interval.m"
{
#line 1344 "interval.m"
  {
#line 1344 "interval.m"
    MR_bool backend_libs__interval__succeeded;

#line 1345 "interval.m"
    {
#line 1345 "interval.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__interval__List_4, (MR_String) ", ", (MR_Word) &backend_libs__interval_scalar_common_2[15]);
    }
#line 1344 "interval.m"
  }
#line 182 "interval.m"
}

#line 1271 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_2(
#line 1271 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1271 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1271 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1271 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1271 "interval.m"
{
#line 1271 "interval.m"
  {
#line 1271 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1271 "interval.m"
    {
#line 1271 "interval.m"
      backend_libs__interval__dump_anchor_follow_3_p_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 1271 "interval.m"
  }
#line 1271 "interval.m"
}

#line 1267 "interval.m"
static void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0_1(
#line 1267 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 1267 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1,
#line 1267 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_2,
#line 1267 "interval.m"
  MR_Box * backend_libs__interval__wrapper_arg_3)
#line 1267 "interval.m"
{
#line 1267 "interval.m"
  {
#line 1267 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;

#line 1267 "interval.m"
    {
#line 1267 "interval.m"
      backend_libs__interval__dump_interval_info_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 1267 "interval.m"
  }
#line 1267 "interval.m"
}

#line 180 "interval.m"
void MR_CALL 
backend_libs__interval__dump_interval_info_3_p_0(
#line 180 "interval.m"
  MR_Word backend_libs__interval__IntervalInfo_4)
#line 180 "interval.m"
{
#line 1259 "interval.m"
  {
#line 1259 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_108_108 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_109_109 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_0;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_115_115;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__StartIds_6;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__EndIds_7;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__VarsIds_8;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__SuccIds_9;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__IntervalIds0_10;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__IntervalIds_11;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__AnchorFollows_12;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_16_16;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_17_17;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_18_18;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_19_19;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_20_20;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_21_21;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_22_22;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_26_26;
#line 1259 "interval.m"
    MR_Word backend_libs__interval__V_28_28;
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1260 "interval.m"
    MR_Word backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_54_54;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_55_55;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_56_56;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_57_57;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_58_58;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_59_59;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_60_60;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_61_61;
#line 1261 "interval.m"
    MR_Word backend_libs__interval__V_62_62;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_63_63;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_64_64;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_65_65;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_66_66;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_67_67;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_68_68;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_69_69;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 1262 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_85_85;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_86_86;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_87_87;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_88_88;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_89_89;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_90_90;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_91_91;
#line 1263 "interval.m"
    MR_Word backend_libs__interval__V_92_92;
#line 1267 "interval.m"
    MR_Box backend_libs__interval__conv0_STATE_VARIABLE_IO_27_27;
#line 1269 "interval.m"
    MR_Word backend_libs__interval__V_93_93;
#line 1269 "interval.m"
    MR_Word backend_libs__interval__V_94_94;
#line 1269 "interval.m"
    MR_Word backend_libs__interval__V_95_95;
#line 1269 "interval.m"
    MR_Word backend_libs__interval__V_96_96;
#line 1269 "interval.m"
    MR_Word backend_libs__interval__V_97_97;
#line 1269 "interval.m"
    MR_Word backend_libs__interval__V_98_98;
#line 1269 "interval.m"
    MR_Word backend_libs__interval__V_99_99;
#line 1269 "interval.m"
    MR_Word backend_libs__interval__V_100_100;
#line 1269 "interval.m"
    MR_Word backend_libs__interval__V_101_101;
#line 1269 "interval.m"
    MR_Word backend_libs__interval__V_102_102;
#line 1269 "interval.m"
    MR_Word backend_libs__interval__V_103_103;
#line 1269 "interval.m"
    MR_Word backend_libs__interval__V_104_104;
#line 1269 "interval.m"
    MR_Word backend_libs__interval__V_105_105;
#line 1269 "interval.m"
    MR_Word backend_libs__interval__V_106_106;
#line 1269 "interval.m"
    MR_Word backend_libs__interval__V_107_107;
#line 1271 "interval.m"
    MR_Box backend_libs__interval__conv1_STATE_VARIABLE_IO_14;

#line 1260 "interval.m"
    {
#line 1260 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__TypeCtorInfo_109_109, backend_libs__interval__V_15_15, &backend_libs__interval__StartIds_6);
    }
#line 1261 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1261 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1261 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1261 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1261 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1261 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1261 "interval.m"
    backend_libs__interval__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1261 "interval.m"
    backend_libs__interval__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1261 "interval.m"
    backend_libs__interval__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1261 "interval.m"
    backend_libs__interval__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1261 "interval.m"
    backend_libs__interval__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1261 "interval.m"
    backend_libs__interval__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1261 "interval.m"
    backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1261 "interval.m"
    backend_libs__interval__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1261 "interval.m"
    backend_libs__interval__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1261 "interval.m"
    backend_libs__interval__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1261 "interval.m"
    {
#line 1261 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__TypeCtorInfo_109_109, backend_libs__interval__V_16_16, &backend_libs__interval__EndIds_7);
    }
#line 1262 "interval.m"
    backend_libs__interval__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1262 "interval.m"
    backend_libs__interval__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1262 "interval.m"
    backend_libs__interval__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1262 "interval.m"
    backend_libs__interval__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1262 "interval.m"
    backend_libs__interval__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1262 "interval.m"
    backend_libs__interval__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1262 "interval.m"
    backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1262 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1262 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1262 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1262 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1262 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1262 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1262 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1262 "interval.m"
    backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1262 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1262 "interval.m"
    {
#line 1262 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__V_17_17, &backend_libs__interval__VarsIds_8);
    }
#line 1263 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1263 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1263 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1263 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1263 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1263 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1263 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1263 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1263 "interval.m"
    backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1263 "interval.m"
    backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1263 "interval.m"
    backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1263 "interval.m"
    backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1263 "interval.m"
    backend_libs__interval__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1263 "interval.m"
    backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1263 "interval.m"
    backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1263 "interval.m"
    backend_libs__interval__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1263 "interval.m"
    {
#line 1263 "interval.m"
      mercury__map__keys_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, (MR_Word) &backend_libs__interval_scalar_common_1[3], backend_libs__interval__V_18_18, &backend_libs__interval__SuccIds_9);
    }
#line 1264 "interval.m"
    {
#line 1264 "interval.m"
      backend_libs__interval__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_22_22, 0) = ((MR_Box) (backend_libs__interval__SuccIds_9));
#line 1264 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1264 "interval.m"
    }
#line 1264 "interval.m"
    {
#line 1264 "interval.m"
      backend_libs__interval__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 0) = ((MR_Box) (backend_libs__interval__VarsIds_8));
#line 1264 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_21_21, 1) = ((MR_Box) (backend_libs__interval__V_22_22));
#line 1264 "interval.m"
    }
#line 1264 "interval.m"
    {
#line 1264 "interval.m"
      backend_libs__interval__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_20_20, 0) = ((MR_Box) (backend_libs__interval__EndIds_7));
#line 1264 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_20_20, 1) = ((MR_Box) (backend_libs__interval__V_21_21));
#line 1264 "interval.m"
    }
#line 1264 "interval.m"
    {
#line 1264 "interval.m"
      backend_libs__interval__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_19_19, 0) = ((MR_Box) (backend_libs__interval__StartIds_6));
#line 1264 "interval.m"
      MR_hl_field(MR_mktag(1), backend_libs__interval__V_19_19, 1) = ((MR_Box) (backend_libs__interval__V_20_20));
#line 1264 "interval.m"
    }
#line 1264 "interval.m"
    {
#line 1264 "interval.m"
      mercury__list__condense_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__V_19_19, &backend_libs__interval__IntervalIds0_10);
    }
#line 1265 "interval.m"
    {
#line 1265 "interval.m"
      mercury__list__sort_and_remove_dups_2_p_0(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__IntervalIds0_10, &backend_libs__interval__IntervalIds_11);
    }
#line 1266 "interval.m"
    {
#line 1266 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "INTERVALS:\n");
    }
#line 1267 "interval.m"
    {
#line 1267 "interval.m"
      backend_libs__interval__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1267 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 0) = ((MR_Box) (&backend_libs__interval_scalar_common_4[0]));
#line 1267 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 1) = ((MR_Box) (backend_libs__interval__dump_interval_info_3_p_0_1));
#line 1267 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1267 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__V_26_26, 3) = ((MR_Box) (backend_libs__interval__IntervalInfo_4));
#line 1267 "interval.m"
    }
#line 15733 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_115_115 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 1267 "interval.m"
    {
#line 1267 "interval.m"
      mercury__list__foldl_4_p_2(backend_libs__interval__TypeCtorInfo_108_108, backend_libs__interval__TypeCtorInfo_115_115, backend_libs__interval__V_26_26, backend_libs__interval__IntervalIds_11, ((MR_Box) ((MR_Integer) 0)), &backend_libs__interval__conv0_STATE_VARIABLE_IO_27_27);
    }
#line 1269 "interval.m"
    backend_libs__interval__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 0)));
#line 1269 "interval.m"
    backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 1)));
#line 1269 "interval.m"
    backend_libs__interval__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 2)));
#line 1269 "interval.m"
    backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 3)));
#line 1269 "interval.m"
    backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 4)));
#line 1269 "interval.m"
    backend_libs__interval__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 5)));
#line 1269 "interval.m"
    backend_libs__interval__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 6)));
#line 1269 "interval.m"
    backend_libs__interval__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 7)));
#line 1269 "interval.m"
    backend_libs__interval__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 8)));
#line 1269 "interval.m"
    backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 9)));
#line 1269 "interval.m"
    backend_libs__interval__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 10)));
#line 1269 "interval.m"
    backend_libs__interval__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 11)));
#line 1269 "interval.m"
    backend_libs__interval__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 12)));
#line 1269 "interval.m"
    backend_libs__interval__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 13)));
#line 1269 "interval.m"
    backend_libs__interval__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 14)));
#line 1269 "interval.m"
    backend_libs__interval__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntervalInfo_4, (MR_Integer) 15)));
#line 1269 "interval.m"
    {
#line 1269 "interval.m"
      mercury__map__to_assoc_list_2_p_0(backend_libs__interval__TypeCtorInfo_109_109, (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_anchor_follow_info_0, backend_libs__interval__V_28_28, &backend_libs__interval__AnchorFollows_12);
    }
#line 1270 "interval.m"
    {
#line 1270 "interval.m"
      mercury__io__write_string_3_p_0((MR_String) "\nANCHOR FOLLOW:\n");
    }
#line 1271 "interval.m"
    {
#line 1271 "interval.m"
      mercury__list__foldl_4_p_2((MR_Word) &backend_libs__interval_scalar_common_2[0], backend_libs__interval__TypeCtorInfo_115_115, (MR_Word) &backend_libs__interval_scalar_common_2[14], backend_libs__interval__AnchorFollows_12, ((MR_Box) ((MR_Integer) 0)), &backend_libs__interval__conv1_STATE_VARIABLE_IO_14);
    }
#line 1259 "interval.m"
  }
#line 180 "interval.m"
}

#line 177 "interval.m"
void MR_CALL 
backend_libs__interval__apply_headvar_correction_4_p_0(
#line 177 "interval.m"
  MR_Word backend_libs__interval__HeadVarSet_5,
#line 177 "interval.m"
  MR_Word backend_libs__interval__RenameMap_6,
#line 177 "interval.m"
  MR_Word backend_libs__interval__Goal0_7,
#line 177 "interval.m"
  MR_Word * backend_libs__interval__Goal_8)
#line 177 "interval.m"
{
#line 1222 "interval.m"
  {
#line 1222 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1222 "interval.m"
    MR_Word backend_libs__interval__TypeInfo_13_13;
#line 1222 "interval.m"
    MR_Word backend_libs__interval__HeadVars_9;
#line 1222 "interval.m"
    MR_Word backend_libs__interval__Subst_10;
#line 1222 "interval.m"
    MR_Word backend_libs__interval__V_11_11;

#line 1223 "interval.m"
    {
#line 1223 "interval.m"
      backend_libs__interval__HeadVars_9 = parse_tree__set_of_var__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__HeadVarSet_5);
    }
#line 15823 "backend_libs.interval.c"
    backend_libs__interval__TypeInfo_13_13 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1224 "interval.m"
    {
#line 1224 "interval.m"
      backend_libs__interval__V_11_11 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_13_13, backend_libs__interval__TypeInfo_13_13);
    }
#line 1224 "interval.m"
    {
#line 1224 "interval.m"
      backend_libs__interval__build_headvar_subst_4_p_0(backend_libs__interval__HeadVars_9, backend_libs__interval__RenameMap_6, backend_libs__interval__V_11_11, &backend_libs__interval__Subst_10);
    }
#line 1225 "interval.m"
    {
#line 1225 "interval.m"
      backend_libs__interval__succeeded = mercury__map__is_empty_1_p_0(backend_libs__interval__TypeInfo_13_13, backend_libs__interval__TypeInfo_13_13, backend_libs__interval__Subst_10);
    }
#line 1225 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1226 "interval.m"
      *backend_libs__interval__Goal_8 = backend_libs__interval__Goal0_7;
#line 1225 "interval.m"
    else
#line 1228 "interval.m"
      {
#line 1228 "interval.m"
        hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__Subst_10, backend_libs__interval__Goal0_7, backend_libs__interval__Goal_8);
      }
#line 1222 "interval.m"
  }
#line 177 "interval.m"
}

#line 163 "interval.m"
void MR_CALL 
backend_libs__interval__make_inserted_goal_9_p_0(
#line 163 "interval.m"
  MR_Word backend_libs__interval__VarSet0_10,
#line 163 "interval.m"
  MR_Word * backend_libs__interval__VarSet_11,
#line 163 "interval.m"
  MR_Word backend_libs__interval__VarTypes0_12,
#line 163 "interval.m"
  MR_Word * backend_libs__interval__VarTypes_13,
#line 163 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_RenameMap_0_20,
#line 163 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_RenameMap_21,
#line 163 "interval.m"
  MR_Word backend_libs__interval__InsertSpec_15,
#line 163 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_16,
#line 163 "interval.m"
  MR_Word * backend_libs__interval__Goal_17)
#line 163 "interval.m"
{
#line 1100 "interval.m"
  {
#line 1100 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 1100 "interval.m"
    MR_Word backend_libs__interval__Info0_18;
#line 1100 "interval.m"
    MR_Word backend_libs__interval__Info_19;
#line 1100 "interval.m"
    MR_Word backend_libs__interval__Goal0_32;
#line 1100 "interval.m"
    MR_Word backend_libs__interval__VarsToExtract_33;
#line 1100 "interval.m"
    MR_Word backend_libs__interval__GoalExpr0_34;
#line 1100 "interval.m"
    MR_Word backend_libs__interval__GoalInfo0_35;
#line 1072 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 1072 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 1072 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 1072 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 1072 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 1072 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 1072 "interval.m"
    MR_Word backend_libs__interval__ArgVars_43;
#line 1072 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 1072 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 1073 "interval.m"
    MR_Word backend_libs__interval__Unification0_39;
#line 1074 "interval.m"
    MR_Word backend_libs__interval__V_45_45;

#line 1101 "interval.m"
    {
#line 1101 "interval.m"
      backend_libs__interval__Info0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1101 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, 0) = ((MR_Box) (backend_libs__interval__VarSet0_10));
#line 1101 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, 1) = ((MR_Box) (backend_libs__interval__VarTypes0_12));
#line 1101 "interval.m"
    }
#line 1070 "interval.m"
    backend_libs__interval__Goal0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__InsertSpec_15, (MR_Integer) 0)));
#line 1070 "interval.m"
    backend_libs__interval__VarsToExtract_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__InsertSpec_15, (MR_Integer) 1)));
#line 1071 "interval.m"
    backend_libs__interval__GoalExpr0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_32, (MR_Integer) 0)));
#line 1071 "interval.m"
    backend_libs__interval__GoalInfo0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Goal0_32, (MR_Integer) 1)));
#line 1073 "interval.m"
    backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__GoalExpr0_34)) == (MR_mktag((MR_Integer) 1)));
#line 1073 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1073 "interval.m"
      {
#line 1073 "interval.m"
        backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 0)));
#line 1073 "interval.m"
        backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 1)));
#line 1073 "interval.m"
        backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 2)));
#line 1073 "interval.m"
        backend_libs__interval__Unification0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 3)));
#line 1073 "interval.m"
        backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr0_34, (MR_Integer) 4)));
#line 1074 "interval.m"
        backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__Unification0_39)) == (MR_mktag((MR_Integer) 1)));
#line 1074 "interval.m"
        if (backend_libs__interval__succeeded)
#line 1074 "interval.m"
          {
#line 1074 "interval.m"
            backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 0)));
#line 1074 "interval.m"
            backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 1)));
#line 1074 "interval.m"
            backend_libs__interval__ArgVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 2)));
#line 1074 "interval.m"
            backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 3)));
#line 1074 "interval.m"
            backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 4)));
#line 1074 "interval.m"
            backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification0_39, (MR_Integer) 5)));
#line 1074 "interval.m"
          }
#line 1073 "interval.m"
      }
#line 1072 "interval.m"
    if (backend_libs__interval__succeeded)
#line 1076 "interval.m"
      {
#line 1076 "interval.m"
        MR_Word backend_libs__interval__TypeInfo_65_80;
#line 1076 "interval.m"
        MR_Word backend_libs__interval__Unification1_47;
#line 1076 "interval.m"
        MR_Word backend_libs__interval__GoalExpr1_48;
#line 1076 "interval.m"
        MR_Word backend_libs__interval__GoalInfo1_49;
#line 1076 "interval.m"
        MR_Word backend_libs__interval__GoalInfo2_51;
#line 1076 "interval.m"
        MR_Word backend_libs__interval__Goal2_52;
#line 1076 "interval.m"
        MR_Word backend_libs__interval__VarSet0_53;
#line 1076 "interval.m"
        MR_Word backend_libs__interval__VarTypes0_54;
#line 1076 "interval.m"
        MR_Word backend_libs__interval__VarSet_55;
#line 1076 "interval.m"
        MR_Word backend_libs__interval__VarTypes_56;
#line 1076 "interval.m"
        MR_Word backend_libs__interval__NewRename_57;
#line 1076 "interval.m"
        MR_Word backend_libs__interval__VoidRename_58;
#line 1076 "interval.m"
        MR_Word backend_libs__interval__Goal3_59;
#line 1076 "interval.m"
        MR_Word backend_libs__interval__V_62_62;
#line 1076 "interval.m"
        MR_Word backend_libs__interval__V_63_63;

#line 1076 "interval.m"
        {
#line 1076 "interval.m"
          backend_libs__interval__Unification1_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 0) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 1076 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 1) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 1076 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 2) = ((MR_Box) (backend_libs__interval__ArgVars_43));
#line 1076 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 3) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 1076 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 4) = ((MR_Box) ((MR_Integer) 1));
#line 1076 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Unification1_47, 5) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 1076 "interval.m"
        }
#line 1077 "interval.m"
        {
#line 1077 "interval.m"
          backend_libs__interval__GoalExpr1_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1077 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 0) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 1077 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 1) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 1077 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 2) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 1077 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 3) = ((MR_Box) (backend_libs__interval__Unification1_47));
#line 1077 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr1_48, 4) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 1077 "interval.m"
        }
#line 1078 "interval.m"
        {
#line 1078 "interval.m"
          hlds__hlds_goal__goal_info_set_determinism_3_p_0((MR_Integer) 0, backend_libs__interval__GoalInfo0_35, &backend_libs__interval__GoalInfo1_49);
        }
#line 1082 "interval.m"
        if ((backend_libs__interval__MaybeFeature_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1084 "interval.m"
          backend_libs__interval__GoalInfo2_51 = backend_libs__interval__GoalInfo1_49;
#line 1082 "interval.m"
        else
#line 1080 "interval.m"
          {
#line 1080 "interval.m"
            MR_Word backend_libs__interval__Feature_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeFeature_16, (MR_Integer) 0)));

#line 1081 "interval.m"
            {
#line 1081 "interval.m"
              hlds__hlds_goal__goal_info_add_feature_3_p_0(backend_libs__interval__Feature_50, backend_libs__interval__GoalInfo1_49, &backend_libs__interval__GoalInfo2_51);
            }
#line 1080 "interval.m"
          }
#line 1086 "interval.m"
        {
#line 1086 "interval.m"
          backend_libs__interval__Goal2_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1086 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_52, 0) = ((MR_Box) (backend_libs__interval__GoalExpr1_48));
#line 1086 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Goal2_52, 1) = ((MR_Box) (backend_libs__interval__GoalInfo2_51));
#line 1086 "interval.m"
        }
#line 1087 "interval.m"
        backend_libs__interval__VarSet0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, (MR_Integer) 0)));
#line 1087 "interval.m"
        backend_libs__interval__VarTypes0_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_18, (MR_Integer) 1)));
#line 16080 "backend_libs.interval.c"
        backend_libs__interval__TypeInfo_65_80 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 1089 "interval.m"
        {
#line 1089 "interval.m"
          backend_libs__interval__V_62_62 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_80, backend_libs__interval__TypeInfo_65_80);
        }
#line 1089 "interval.m"
        {
#line 1089 "interval.m"
          backend_libs__interval__V_63_63 = mercury__map__init_0_f_0(backend_libs__interval__TypeInfo_65_80, backend_libs__interval__TypeInfo_65_80);
        }
#line 1088 "interval.m"
        {
#line 1088 "interval.m"
          backend_libs__interval__create_shadow_vars_10_p_0(backend_libs__interval__ArgVars_43, backend_libs__interval__VarsToExtract_33, backend_libs__interval__VarSet0_53, &backend_libs__interval__VarSet_55, backend_libs__interval__VarTypes0_54, &backend_libs__interval__VarTypes_56, backend_libs__interval__V_62_62, &backend_libs__interval__NewRename_57, backend_libs__interval__V_63_63, &backend_libs__interval__VoidRename_58);
        }
#line 1090 "interval.m"
        {
#line 1090 "interval.m"
          backend_libs__interval__Info_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1090 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, 0) = ((MR_Box) (backend_libs__interval__VarSet_55));
#line 1090 "interval.m"
          MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, 1) = ((MR_Box) (backend_libs__interval__VarTypes_56));
#line 1090 "interval.m"
        }
#line 1091 "interval.m"
        {
#line 1091 "interval.m"
          mercury__map__old_merge_3_p_0(backend_libs__interval__TypeInfo_65_80, backend_libs__interval__TypeInfo_65_80, backend_libs__interval__STATE_VARIABLE_RenameMap_0_20, backend_libs__interval__NewRename_57, backend_libs__interval__STATE_VARIABLE_RenameMap_21);
        }
#line 1093 "interval.m"
        {
#line 1093 "interval.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(*backend_libs__interval__STATE_VARIABLE_RenameMap_21, backend_libs__interval__Goal2_52, &backend_libs__interval__Goal3_59);
        }
#line 1094 "interval.m"
        {
#line 1094 "interval.m"
          hlds__hlds_goal__rename_some_vars_in_goal_3_p_0(backend_libs__interval__VoidRename_58, backend_libs__interval__Goal3_59, backend_libs__interval__Goal_17);
        }
#line 1076 "interval.m"
      }
#line 1072 "interval.m"
    else
#line 1096 "interval.m"
      {
#line 1096 "interval.m"
        {
#line 1096 "interval.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.make_inserted_goal\'/7", (MR_String) "not a deconstruct");
#line 1096 "interval.m"
          return;
        }
#line 1096 "interval.m"
      }
#line 1104 "interval.m"
    *backend_libs__interval__VarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, (MR_Integer) 0)));
#line 1104 "interval.m"
    *backend_libs__interval__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_19, (MR_Integer) 1)));
#line 1100 "interval.m"
  }
#line 163 "interval.m"
}

#line 158 "interval.m"
void MR_CALL 
backend_libs__interval__record_decisions_in_goal_10_p_0(
#line 158 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_Goal_0_21,
#line 158 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_Goal_22,
#line 158 "interval.m"
  MR_Word backend_libs__interval__VarSet0_12,
#line 158 "interval.m"
  MR_Word * backend_libs__interval__VarSet_13,
#line 158 "interval.m"
  MR_Word backend_libs__interval__VarTypes0_14,
#line 158 "interval.m"
  MR_Word * backend_libs__interval__VarTypes_15,
#line 158 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_VarRename_0_23,
#line 158 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_VarRename_24,
#line 158 "interval.m"
  MR_Word backend_libs__interval__InsertMap_17,
#line 158 "interval.m"
  MR_Word backend_libs__interval__MaybeFeature_18)
#line 158 "interval.m"
{
#line 878 "interval.m"
  {
#line 878 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 878 "interval.m"
    MR_Word backend_libs__interval__Info0_19;
#line 878 "interval.m"
    MR_Word backend_libs__interval__Info_20;

#line 879 "interval.m"
    {
#line 879 "interval.m"
      backend_libs__interval__Info0_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 879 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_19, 0) = ((MR_Box) (backend_libs__interval__VarSet0_12));
#line 879 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__Info0_19, 1) = ((MR_Box) (backend_libs__interval__VarTypes0_14));
#line 879 "interval.m"
    }
#line 880 "interval.m"
    {
#line 880 "interval.m"
      backend_libs__interval__record_decisions_in_goal_8_p_0(backend_libs__interval__STATE_VARIABLE_Goal_0_21, backend_libs__interval__STATE_VARIABLE_Goal_22, backend_libs__interval__Info0_19, &backend_libs__interval__Info_20, backend_libs__interval__STATE_VARIABLE_VarRename_0_23, backend_libs__interval__STATE_VARIABLE_VarRename_24, backend_libs__interval__InsertMap_17, backend_libs__interval__MaybeFeature_18);
    }
#line 882 "interval.m"
    *backend_libs__interval__VarSet_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_20, (MR_Integer) 0)));
#line 882 "interval.m"
    *backend_libs__interval__VarTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Info_20, (MR_Integer) 1)));
#line 878 "interval.m"
  }
#line 158 "interval.m"
}

#line 153 "interval.m"
void MR_CALL 
backend_libs__interval__delete_interval_vars_5_p_0(
#line 153 "interval.m"
  MR_Word backend_libs__interval__Id_6,
#line 153 "interval.m"
  MR_Word backend_libs__interval__ToDeleteVars_7,
#line 153 "interval.m"
  MR_Word * backend_libs__interval__DeletedVars_8,
#line 153 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18,
#line 153 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_19)
#line 153 "interval.m"
{
#line 808 "interval.m"
  {
#line 808 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 808 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_86_86 = (MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0;
#line 808 "interval.m"
    MR_Word backend_libs__interval__TypeInfo_87_87 = (MR_Word) &backend_libs__interval_scalar_common_1[1];
#line 808 "interval.m"
    MR_Word backend_libs__interval__TypeCtorInfo_88_88;
#line 808 "interval.m"
    MR_Word backend_libs__interval__VarsMap0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 14)));
#line 808 "interval.m"
    MR_Word backend_libs__interval__Vars0_11;
#line 808 "interval.m"
    MR_Word backend_libs__interval__Vars_12;
#line 808 "interval.m"
    MR_Word backend_libs__interval__VarsMap_13;
#line 808 "interval.m"
    MR_Word backend_libs__interval__DeleteMap0_14;
#line 808 "interval.m"
    MR_Word backend_libs__interval__DeleteMap_17;
#line 808 "interval.m"
    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20;
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 0)));
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 1)));
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 2)));
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 3)));
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 4)));
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 5)));
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 6)));
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 7)));
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 8)));
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 9)));
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 10)));
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 11)));
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 12)));
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 13)));
#line 809 "interval.m"
    MR_Word backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 15)));
#line 810 "interval.m"
    MR_Box backend_libs__interval__conv0_Vars0_11;
#line 814 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 814 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 814 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 814 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 814 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 814 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 814 "interval.m"
    MR_Word backend_libs__interval__V_45_45;
#line 814 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 814 "interval.m"
    MR_Word backend_libs__interval__V_47_47;
#line 814 "interval.m"
    MR_Word backend_libs__interval__V_48_48;
#line 814 "interval.m"
    MR_Word backend_libs__interval__V_49_49;
#line 814 "interval.m"
    MR_Word backend_libs__interval__V_50_50;
#line 814 "interval.m"
    MR_Word backend_libs__interval__V_51_51;
#line 814 "interval.m"
    MR_Word backend_libs__interval__V_52_52;
#line 814 "interval.m"
    MR_Word backend_libs__interval__V_53_53;
#line 819 "interval.m"
    MR_Word backend_libs__interval__Deletions0_15;
#line 819 "interval.m"
    MR_Box backend_libs__interval__conv1_Deletions0_15;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_70_70;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_71_71;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_72_72;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_73_73;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_74_74;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_75_75;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_76_76;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_77_77;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_78_78;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_79_79;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_80_80;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_81_81;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_82_82;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_83_83;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_84_84;
#line 826 "interval.m"
    MR_Word backend_libs__interval__V_85_85;

#line 810 "interval.m"
    {
#line 810 "interval.m"
      mercury__map__lookup_3_p_0(backend_libs__interval__TypeCtorInfo_86_86, backend_libs__interval__TypeInfo_87_87, backend_libs__interval__VarsMap0_10, ((MR_Box) (backend_libs__interval__Id_6)), &backend_libs__interval__conv0_Vars0_11);
    }
#line 810 "interval.m"
    backend_libs__interval__Vars0_11 = ((MR_Word) backend_libs__interval__conv0_Vars0_11);
#line 16349 "backend_libs.interval.c"
    backend_libs__interval__TypeCtorInfo_88_88 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 811 "interval.m"
    {
#line 811 "interval.m"
      *backend_libs__interval__DeletedVars_8 = parse_tree__set_of_var__intersect_2_f_0(backend_libs__interval__TypeCtorInfo_88_88, backend_libs__interval__Vars0_11, backend_libs__interval__ToDeleteVars_7);
    }
#line 812 "interval.m"
    {
#line 812 "interval.m"
      backend_libs__interval__Vars_12 = parse_tree__set_of_var__difference_2_f_0(backend_libs__interval__TypeCtorInfo_88_88, backend_libs__interval__Vars0_11, *backend_libs__interval__DeletedVars_8);
    }
#line 813 "interval.m"
    {
#line 813 "interval.m"
      mercury__map__det_update_4_p_0(backend_libs__interval__TypeCtorInfo_86_86, backend_libs__interval__TypeInfo_87_87, ((MR_Box) (backend_libs__interval__Id_6)), ((MR_Box) (backend_libs__interval__Vars_12)), backend_libs__interval__VarsMap0_10, &backend_libs__interval__VarsMap_13);
    }
#line 814 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 0)));
#line 814 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 1)));
#line 814 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 2)));
#line 814 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 3)));
#line 814 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 4)));
#line 814 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 5)));
#line 814 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 6)));
#line 814 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 7)));
#line 814 "interval.m"
    backend_libs__interval__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 8)));
#line 814 "interval.m"
    backend_libs__interval__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 9)));
#line 814 "interval.m"
    backend_libs__interval__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 10)));
#line 814 "interval.m"
    backend_libs__interval__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 11)));
#line 814 "interval.m"
    backend_libs__interval__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 12)));
#line 814 "interval.m"
    backend_libs__interval__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 13)));
#line 814 "interval.m"
    backend_libs__interval__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 14)));
#line 814 "interval.m"
    backend_libs__interval__DeleteMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_18, (MR_Integer) 15)));
#line 814 "interval.m"
    {
#line 814 "interval.m"
      backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 0) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 1) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 2) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 3) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 4) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 5) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 6) = ((MR_Box) (backend_libs__interval__V_45_45));
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 7) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 8) = ((MR_Box) (backend_libs__interval__V_47_47));
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 9) = ((MR_Box) (backend_libs__interval__V_48_48));
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 10) = ((MR_Box) (backend_libs__interval__V_49_49));
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 11) = ((MR_Box) (backend_libs__interval__V_50_50));
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 12) = ((MR_Box) (backend_libs__interval__V_51_51));
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 13) = ((MR_Box) (backend_libs__interval__V_52_52));
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 14) = ((MR_Box) (backend_libs__interval__VarsMap_13));
#line 814 "interval.m"
      MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, 15) = ((MR_Box) (backend_libs__interval__DeleteMap0_14));
#line 814 "interval.m"
    }
#line 819 "interval.m"
    {
#line 819 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0(backend_libs__interval__TypeCtorInfo_86_86, (MR_Word) &backend_libs__interval_scalar_common_1[2], backend_libs__interval__DeleteMap0_14, ((MR_Box) (backend_libs__interval__Id_6)), &backend_libs__interval__conv1_Deletions0_15);
    }
#line 819 "interval.m"
    if (backend_libs__interval__succeeded)
#line 819 "interval.m"
      {
#line 819 "interval.m"
        backend_libs__interval__Deletions0_15 = ((MR_Word) backend_libs__interval__conv1_Deletions0_15);
#line 819 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 819 "interval.m"
      }
#line 819 "interval.m"
    if (backend_libs__interval__succeeded)
#line 820 "interval.m"
      {
#line 820 "interval.m"
        MR_Word backend_libs__interval__Deletions_16;

#line 820 "interval.m"
        {
#line 820 "interval.m"
          backend_libs__interval__Deletions_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_16, 0) = ((MR_Box) (*backend_libs__interval__DeletedVars_8));
#line 820 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_16, 1) = ((MR_Box) (backend_libs__interval__Deletions0_15));
#line 820 "interval.m"
        }
#line 821 "interval.m"
        {
#line 821 "interval.m"
          mercury__map__det_update_4_p_0(backend_libs__interval__TypeCtorInfo_86_86, (MR_Word) &backend_libs__interval_scalar_common_1[2], ((MR_Box) (backend_libs__interval__Id_6)), ((MR_Box) (backend_libs__interval__Deletions_16)), backend_libs__interval__DeleteMap0_14, &backend_libs__interval__DeleteMap_17);
        }
#line 820 "interval.m"
      }
#line 819 "interval.m"
    else
#line 823 "interval.m"
      {
#line 823 "interval.m"
        MR_Word backend_libs__interval__Deletions_23;

#line 823 "interval.m"
        {
#line 823 "interval.m"
          backend_libs__interval__Deletions_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 823 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_23, 0) = ((MR_Box) (*backend_libs__interval__DeletedVars_8));
#line 823 "interval.m"
          MR_hl_field(MR_mktag(1), backend_libs__interval__Deletions_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 823 "interval.m"
        }
#line 824 "interval.m"
        {
#line 824 "interval.m"
          mercury__map__det_insert_4_p_0(backend_libs__interval__TypeCtorInfo_86_86, (MR_Word) &backend_libs__interval_scalar_common_1[2], ((MR_Box) (backend_libs__interval__Id_6)), ((MR_Box) (backend_libs__interval__Deletions_23)), backend_libs__interval__DeleteMap0_14, &backend_libs__interval__DeleteMap_17);
        }
#line 823 "interval.m"
      }
#line 826 "interval.m"
    backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 0)));
#line 826 "interval.m"
    backend_libs__interval__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 1)));
#line 826 "interval.m"
    backend_libs__interval__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 2)));
#line 826 "interval.m"
    backend_libs__interval__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 3)));
#line 826 "interval.m"
    backend_libs__interval__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 4)));
#line 826 "interval.m"
    backend_libs__interval__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 5)));
#line 826 "interval.m"
    backend_libs__interval__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 6)));
#line 826 "interval.m"
    backend_libs__interval__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 7)));
#line 826 "interval.m"
    backend_libs__interval__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 8)));
#line 826 "interval.m"
    backend_libs__interval__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 9)));
#line 826 "interval.m"
    backend_libs__interval__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 10)));
#line 826 "interval.m"
    backend_libs__interval__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 11)));
#line 826 "interval.m"
    backend_libs__interval__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 12)));
#line 826 "interval.m"
    backend_libs__interval__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 13)));
#line 826 "interval.m"
    backend_libs__interval__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 14)));
#line 826 "interval.m"
    backend_libs__interval__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_20_20, (MR_Integer) 15)));
#line 826 "interval.m"
    {
#line 826 "interval.m"
      MR_Word base;
#line 826 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 826 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_19 = base;
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_70_70));
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_71_71));
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_72_72));
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_73_73));
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_74_74));
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_75_75));
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_76_76));
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_77_77));
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_78_78));
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_79_79));
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_80_80));
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_81_81));
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_82_82));
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_83_83));
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__V_84_84));
#line 826 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__DeleteMap_17));
#line 826 "interval.m"
    }
#line 808 "interval.m"
  }
#line 153 "interval.m"
}

#line 150 "interval.m"
void MR_CALL 
backend_libs__interval__record_interval_vars_4_p_0(
#line 150 "interval.m"
  MR_Word backend_libs__interval__Id_5,
#line 150 "interval.m"
  MR_Word backend_libs__interval__NewVars_6,
#line 150 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12,
#line 150 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_13)
#line 150 "interval.m"
{
#line 797 "interval.m"
  {
#line 797 "interval.m"
    MR_bool backend_libs__interval__succeeded;
#line 797 "interval.m"
    MR_Word backend_libs__interval__VarsMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 797 "interval.m"
    MR_Word backend_libs__interval__VarsMap_11;
#line 798 "interval.m"
    MR_Word backend_libs__interval__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 798 "interval.m"
    MR_Word backend_libs__interval__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 798 "interval.m"
    MR_Word backend_libs__interval__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 798 "interval.m"
    MR_Word backend_libs__interval__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 798 "interval.m"
    MR_Word backend_libs__interval__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 798 "interval.m"
    MR_Word backend_libs__interval__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 798 "interval.m"
    MR_Word backend_libs__interval__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 798 "interval.m"
    MR_Word backend_libs__interval__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 798 "interval.m"
    MR_Word backend_libs__interval__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 798 "interval.m"
    MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 798 "interval.m"
    MR_Word backend_libs__interval__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 798 "interval.m"
    MR_Word backend_libs__interval__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 798 "interval.m"
    MR_Word backend_libs__interval__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 798 "interval.m"
    MR_Word backend_libs__interval__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 798 "interval.m"
    MR_Word backend_libs__interval__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 799 "interval.m"
    MR_Word backend_libs__interval__Vars0_9;
#line 799 "interval.m"
    MR_Box backend_libs__interval__conv0_Vars0_9;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_31_31;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_32_32;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_33_33;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_34_34;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_35_35;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_36_36;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_37_37;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_38_38;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_39_39;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_40_40;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_41_41;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_42_42;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_43_43;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_44_44;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_46_46;
#line 806 "interval.m"
    MR_Word backend_libs__interval__V_45_45;

#line 799 "interval.m"
    {
#line 799 "interval.m"
      backend_libs__interval__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], backend_libs__interval__VarsMap0_8, ((MR_Box) (backend_libs__interval__Id_5)), &backend_libs__interval__conv0_Vars0_9);
    }
#line 799 "interval.m"
    if (backend_libs__interval__succeeded)
#line 799 "interval.m"
      {
#line 799 "interval.m"
        backend_libs__interval__Vars0_9 = ((MR_Word) backend_libs__interval__conv0_Vars0_9);
#line 799 "interval.m"
        backend_libs__interval__succeeded = MR_TRUE;
#line 799 "interval.m"
      }
#line 799 "interval.m"
    if (backend_libs__interval__succeeded)
#line 800 "interval.m"
      {
#line 800 "interval.m"
        MR_Word backend_libs__interval__Vars_10;

#line 800 "interval.m"
        {
#line 800 "interval.m"
          parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__NewVars_6, backend_libs__interval__Vars0_9, &backend_libs__interval__Vars_10);
        }
#line 801 "interval.m"
        {
#line 801 "interval.m"
          mercury__map__det_update_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__Vars_10)), backend_libs__interval__VarsMap0_8, &backend_libs__interval__VarsMap_11);
        }
#line 800 "interval.m"
      }
#line 799 "interval.m"
    else
#line 803 "interval.m"
      {
#line 803 "interval.m"
        MR_Word backend_libs__interval__Vars_15;

#line 803 "interval.m"
        {
#line 803 "interval.m"
          backend_libs__interval__Vars_15 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, backend_libs__interval__NewVars_6);
        }
#line 804 "interval.m"
        {
#line 804 "interval.m"
          mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, (MR_Word) &backend_libs__interval_scalar_common_1[1], ((MR_Box) (backend_libs__interval__Id_5)), ((MR_Box) (backend_libs__interval__Vars_15)), backend_libs__interval__VarsMap0_8, &backend_libs__interval__VarsMap_11);
        }
#line 803 "interval.m"
      }
#line 806 "interval.m"
    backend_libs__interval__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 0)));
#line 806 "interval.m"
    backend_libs__interval__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 1)));
#line 806 "interval.m"
    backend_libs__interval__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 2)));
#line 806 "interval.m"
    backend_libs__interval__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 3)));
#line 806 "interval.m"
    backend_libs__interval__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 4)));
#line 806 "interval.m"
    backend_libs__interval__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 5)));
#line 806 "interval.m"
    backend_libs__interval__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 6)));
#line 806 "interval.m"
    backend_libs__interval__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 7)));
#line 806 "interval.m"
    backend_libs__interval__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 8)));
#line 806 "interval.m"
    backend_libs__interval__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 9)));
#line 806 "interval.m"
    backend_libs__interval__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 10)));
#line 806 "interval.m"
    backend_libs__interval__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 11)));
#line 806 "interval.m"
    backend_libs__interval__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 12)));
#line 806 "interval.m"
    backend_libs__interval__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 13)));
#line 806 "interval.m"
    backend_libs__interval__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 14)));
#line 806 "interval.m"
    backend_libs__interval__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_12, (MR_Integer) 15)));
#line 806 "interval.m"
    {
#line 806 "interval.m"
      MR_Word base;
#line 806 "interval.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 16 * sizeof(MR_Word)), NULL, NULL);
#line 806 "interval.m"
      *backend_libs__interval__STATE_VARIABLE_IntervalInfo_13 = base;
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__interval__V_31_31));
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__interval__V_32_32));
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__interval__V_33_33));
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (backend_libs__interval__V_34_34));
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (backend_libs__interval__V_35_35));
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (backend_libs__interval__V_36_36));
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (backend_libs__interval__V_37_37));
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (backend_libs__interval__V_38_38));
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (backend_libs__interval__V_39_39));
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (backend_libs__interval__V_40_40));
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (backend_libs__interval__V_41_41));
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (backend_libs__interval__V_42_42));
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (backend_libs__interval__V_43_43));
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (backend_libs__interval__V_44_44));
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (backend_libs__interval__VarsMap_11));
#line 806 "interval.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (backend_libs__interval__V_46_46));
#line 806 "interval.m"
    }
#line 797 "interval.m"
  }
#line 150 "interval.m"
}

#line 358 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_2(
#line 358 "interval.m"
  MR_Box backend_libs__interval__closure_arg,
#line 358 "interval.m"
  MR_Box backend_libs__interval__wrapper_arg_1)
#line 358 "interval.m"
{
#line 358 "interval.m"
  {
#line 358 "interval.m"
    MR_Box backend_libs__interval__wrapper_arg_2;
#line 358 "interval.m"
    MR_Box backend_libs__interval__closure = backend_libs__interval__closure_arg;
#line 358 "interval.m"
    MR_Word backend_libs__interval__conv1_HeadVar__2_2;

#line 358 "interval.m"
    {
#line 358 "interval.m"
      backend_libs__interval__conv1_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 358 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv1_HeadVar__2_2));
#line 358 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 358 "interval.m"
  }
#line 358 "interval.m"
}

#line 357 "interval.m"
static MR_Box MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0_1(
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
    MR_Word backend_libs__interval__conv0_HeadVar__2_2;

#line 357 "interval.m"
    {
#line 357 "interval.m"
      backend_libs__interval__conv0_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) backend_libs__interval__wrapper_arg_1));
    }
#line 357 "interval.m"
    backend_libs__interval__wrapper_arg_2 = ((MR_Box) (backend_libs__interval__conv0_HeadVar__2_2));
#line 357 "interval.m"
    return backend_libs__interval__wrapper_arg_2;
#line 357 "interval.m"
  }
#line 357 "interval.m"
}

#line 147 "interval.m"
void MR_CALL 
backend_libs__interval__build_interval_info_in_goal_5_p_0(
#line 147 "interval.m"
  MR_Word backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361,
#line 147 "interval.m"
  MR_Word backend_libs__interval__HeadVar__1_1,
#line 147 "interval.m"
  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112,
#line 147 "interval.m"
  MR_Word * backend_libs__interval__STATE_VARIABLE_IntervalInfo_113,
#line 147 "interval.m"
  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_0_114,
#line 147 "interval.m"
  MR_Box * backend_libs__interval__STATE_VARIABLE_Acc_115)
#line 147 "interval.m"
{
#line 211 "interval.m"
  while (MR_TRUE)
#line 211 "interval.m"
    {
#line 211 "interval.m"
      /* tailcall optimized into a loop */
#line 211 "interval.m"
      {
#line 211 "interval.m"
        MR_bool backend_libs__interval__succeeded;
#line 211 "interval.m"
        MR_Word backend_libs__interval__GoalExpr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 0)));
#line 211 "interval.m"
        MR_Word backend_libs__interval__GoalInfo_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__HeadVar__1_1, (MR_Integer) 1)));

#line 215 "interval.m"
#line 215 "interval.m"
        switch (MR_tag((MR_Word) backend_libs__interval__GoalExpr_6)) {
#line 215 "interval.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 215 "interval.m"
          case (MR_Integer) 0:
#line 251 "interval.m"
            {
#line 251 "interval.m"
              MR_Word backend_libs__interval__SubGoal_24 = (MR_Word) MR_body(((MR_Word) backend_libs__interval__GoalExpr_6), (MR_Integer) 0);
#line 251 "interval.m"
              MR_Word backend_libs__interval__V_196_196;
#line 251 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_198_198;
#line 251 "interval.m"
              MR_Box backend_libs__interval__STATE_VARIABLE_Acc_199_199;
#line 251 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_200_200;
#line 251 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_201_201;
#line 251 "interval.m"
              MR_Box backend_libs__interval__STATE_VARIABLE_Acc_202_202;
#line 251 "interval.m"
              MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_204_204;
#line 251 "interval.m"
              MR_Word backend_libs__interval__StartAnchor_241;
#line 251 "interval.m"
              MR_Word backend_libs__interval__EndAnchor_242;
#line 251 "interval.m"
              MR_Word backend_libs__interval__BeforeId_243;
#line 251 "interval.m"
              MR_Word backend_libs__interval__AfterId_244;
#line 251 "interval.m"
              MR_Word backend_libs__interval__MaybeResumeVars_245;
#line 251 "interval.m"
              MR_Word backend_libs__interval__OpenIntervals_246;

#line 252 "interval.m"
              {
#line 252 "interval.m"
                backend_libs__interval__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 252 "interval.m"
                MR_hl_field(MR_mktag(1), backend_libs__interval__V_196_196, 0) = ((MR_Box) (backend_libs__interval__SubGoal_24));
#line 252 "interval.m"
              }
#line 252 "interval.m"
              {
#line 252 "interval.m"
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(backend_libs__interval__GoalInfo_7, backend_libs__interval__V_196_196, (MR_Integer) 3, &backend_libs__interval__StartAnchor_241, &backend_libs__interval__EndAnchor_242, &backend_libs__interval__BeforeId_243, &backend_libs__interval__AfterId_244, &backend_libs__interval__MaybeResumeVars_245, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_198_198, backend_libs__interval__STATE_VARIABLE_Acc_0_114, &backend_libs__interval__STATE_VARIABLE_Acc_199_199);
              }
#line 255 "interval.m"
              {
#line 255 "interval.m"
                backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_242, backend_libs__interval__AfterId_244, backend_libs__interval__STATE_VARIABLE_IntervalInfo_198_198, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_200_200);
              }
#line 256 "interval.m"
              {
#line 256 "interval.m"
                backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__SubGoal_24, backend_libs__interval__STATE_VARIABLE_IntervalInfo_200_200, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_201_201, backend_libs__interval__STATE_VARIABLE_Acc_199_199, &backend_libs__interval__STATE_VARIABLE_Acc_202_202);
              }
#line 257 "interval.m"
              {
#line 257 "interval.m"
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, backend_libs__interval__StartAnchor_241, backend_libs__interval__BeforeId_243, &backend_libs__interval__OpenIntervals_246, backend_libs__interval__STATE_VARIABLE_IntervalInfo_201_201, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_204_204, backend_libs__interval__STATE_VARIABLE_Acc_202_202, backend_libs__interval__STATE_VARIABLE_Acc_115);
              }
#line 259 "interval.m"
              {
#line 259 "interval.m"
                backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__StartAnchor_241, backend_libs__interval__BeforeId_243, backend_libs__interval__MaybeResumeVars_245, backend_libs__interval__OpenIntervals_246, backend_libs__interval__STATE_VARIABLE_IntervalInfo_204_204, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
              }
#line 251 "interval.m"
            }
#line 215 "interval.m"
            break;
#line 215 "interval.m"
          case (MR_Integer) 1:
#line 375 "interval.m"
            {
#line 375 "interval.m"
              MR_Word backend_libs__interval__Unification_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 375 "interval.m"
              MR_Word backend_libs__interval__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)));
#line 375 "interval.m"
              MR_Word backend_libs__interval__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 375 "interval.m"
              MR_Word backend_libs__interval__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 375 "interval.m"
              MR_Word backend_libs__interval__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));

#line 397 "interval.m"
#line 397 "interval.m"
              switch (MR_tag((MR_Word) backend_libs__interval__Unification_90)) {
#line 397 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 397 "interval.m"
                case (MR_Integer) 0:
#line 378 "interval.m"
                  {
#line 378 "interval.m"
                    MR_Word backend_libs__interval__CellVar_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 0)));
#line 378 "interval.m"
                    MR_Word backend_libs__interval__HowToConstruct_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 4)));
#line 378 "interval.m"
                    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_150_150;
#line 378 "interval.m"
                    MR_Word backend_libs__interval__V_151_151;
#line 378 "interval.m"
                    MR_Word backend_libs__interval__ArgVars_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 2)));
#line 377 "interval.m"
                    MR_Word backend_libs__interval___ConsId_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 377 "interval.m"
                    MR_Word backend_libs__interval__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 3)));
#line 377 "interval.m"
                    MR_Word backend_libs__interval__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 5)));
#line 377 "interval.m"
                    MR_Word backend_libs__interval__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__Unification_90, (MR_Integer) 6)));

#line 382 "interval.m"
#line 382 "interval.m"
                    switch (MR_tag((MR_Word) backend_libs__interval__HowToConstruct_95)) {
#line 382 "interval.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 382 "interval.m"
                      case (MR_Integer) 0:
#line 382 "interval.m"
#line 382 "interval.m"
                        switch (MR_unmkbody(backend_libs__interval__HowToConstruct_95)) {
#line 382 "interval.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 382 "interval.m"
                          case (MR_Integer) 0:
#line 387 "interval.m"
                            {
#line 387 "interval.m"
                            }
#line 382 "interval.m"
                            break;
#line 382 "interval.m"
                          case (MR_Integer) 1:
#line 388 "interval.m"
                            {
#line 388 "interval.m"
                            }
#line 382 "interval.m"
                            break;
#line 382 "interval.m"
                        }
#line 382 "interval.m"
                        break;
#line 382 "interval.m"
                      case (MR_Integer) 1:
#line 380 "interval.m"
                        {
#line 381 "interval.m"
                          {
#line 381 "interval.m"
                            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "reuse");
#line 381 "interval.m"
                            return;
                          }
#line 380 "interval.m"
                        }
#line 382 "interval.m"
                        break;
#line 382 "interval.m"
                      case (MR_Integer) 2:
#line 384 "interval.m"
                        {
#line 385 "interval.m"
                          {
#line 385 "interval.m"
                            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "construct in region");
#line 385 "interval.m"
                            return;
                          }
#line 384 "interval.m"
                        }
#line 382 "interval.m"
                        break;
#line 382 "interval.m"
                    }
#line 391 "interval.m"
                    {
#line 391 "interval.m"
                      backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__ArgVars_273, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_150_150);
                    }
#line 392 "interval.m"
                    {
#line 392 "interval.m"
                      backend_libs__interval__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_151_151, 0) = ((MR_Box) (backend_libs__interval__CellVar_92));
#line 392 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_151_151, 1) = ((MR_Box) (backend_libs__interval__ArgVars_273));
#line 392 "interval.m"
                    }
#line 392 "interval.m"
                    {
#line 392 "interval.m"
                      backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_151_151, backend_libs__interval__STATE_VARIABLE_IntervalInfo_150_150, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                    }
#line 378 "interval.m"
                    *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 378 "interval.m"
                  }
#line 397 "interval.m"
                  break;
#line 397 "interval.m"
                case (MR_Integer) 1:
#line 399 "interval.m"
                  {
#line 399 "interval.m"
                    MR_Word backend_libs__interval__ConsId_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137;
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_139_139;
#line 399 "interval.m"
                    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_140_140;
#line 399 "interval.m"
                    MR_Word backend_libs__interval__V_142_142;
#line 399 "interval.m"
                    MR_Word backend_libs__interval__ArgVars_274 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 2)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__ArgModes_275 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 3)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__IntParams_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__ModuleInfo_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_276, (MR_Integer) 0)));
#line 399 "interval.m"
                    MR_Word backend_libs__interval__CellVar_278 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 0)));
#line 398 "interval.m"
                    MR_Word backend_libs__interval__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 4)));
#line 398 "interval.m"
                    MR_Word backend_libs__interval__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Unification_90, (MR_Integer) 5)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 400 "interval.m"
                    MR_Word backend_libs__interval__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 401 "interval.m"
                    MR_Word backend_libs__interval__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_276, (MR_Integer) 1)));
#line 401 "interval.m"
                    MR_Word backend_libs__interval__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_276, (MR_Integer) 2)));

#line 402 "interval.m"
                    {
#line 402 "interval.m"
                      backend_libs__interval__succeeded = backend_libs__interval__shared_left_to_right_deconstruct_2_p_0(backend_libs__interval__ModuleInfo_277, backend_libs__interval__ArgModes_275);
                    }
#line 402 "interval.m"
                    if (backend_libs__interval__succeeded)
#line 404 "interval.m"
                      {
#line 404 "interval.m"
                        backend_libs__interval__use_cell_8_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__CellVar_278, backend_libs__interval__ArgVars_274, backend_libs__interval__ConsId_100, backend_libs__interval__HeadVar__1_1, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
                      }
#line 402 "interval.m"
                    else
#line 406 "interval.m"
                      {
#line 406 "interval.m"
                        *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 406 "interval.m"
                        backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137 = backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112;
#line 406 "interval.m"
                      }
#line 408 "interval.m"
                    {
#line 408 "interval.m"
                      backend_libs__interval__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_139_139, 0) = ((MR_Box) (backend_libs__interval__CellVar_278));
#line 408 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 408 "interval.m"
                    }
#line 408 "interval.m"
                    {
#line 408 "interval.m"
                      backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__V_139_139, backend_libs__interval__STATE_VARIABLE_IntervalInfo_137_137, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_140_140);
                    }
#line 409 "interval.m"
                    {
#line 409 "interval.m"
                      backend_libs__interval__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 0) = ((MR_Box) (backend_libs__interval__CellVar_278));
#line 409 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_142_142, 1) = ((MR_Box) (backend_libs__interval__ArgVars_274));
#line 409 "interval.m"
                    }
#line 409 "interval.m"
                    {
#line 409 "interval.m"
                      backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_142_142, backend_libs__interval__STATE_VARIABLE_IntervalInfo_140_140, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                    }
#line 399 "interval.m"
                  }
#line 397 "interval.m"
                  break;
#line 397 "interval.m"
                case (MR_Integer) 2:
#line 411 "interval.m"
                  {
#line 411 "interval.m"
                    MR_Word backend_libs__interval__ToVar_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__Unification_90, (MR_Integer) 0)));
#line 411 "interval.m"
                    MR_Word backend_libs__interval__FromVar_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 411 "interval.m"
                    MR_Word backend_libs__interval__V_130_130;
#line 411 "interval.m"
                    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_131_131;
#line 411 "interval.m"
                    MR_Word backend_libs__interval__V_133_133;
#line 411 "interval.m"
                    MR_Word backend_libs__interval__V_135_135;

#line 412 "interval.m"
                    {
#line 412 "interval.m"
                      backend_libs__interval__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 412 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_130_130, 0) = ((MR_Box) (backend_libs__interval__FromVar_105));
#line 412 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 412 "interval.m"
                    }
#line 412 "interval.m"
                    {
#line 412 "interval.m"
                      backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__V_130_130, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_131_131);
                    }
#line 413 "interval.m"
                    {
#line 413 "interval.m"
                      backend_libs__interval__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_135_135, 0) = ((MR_Box) (backend_libs__interval__ToVar_104));
#line 413 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 413 "interval.m"
                    }
#line 413 "interval.m"
                    {
#line 413 "interval.m"
                      backend_libs__interval__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 413 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_133_133, 0) = ((MR_Box) (backend_libs__interval__FromVar_105));
#line 413 "interval.m"
                      MR_hl_field(MR_mktag(1), backend_libs__interval__V_133_133, 1) = ((MR_Box) (backend_libs__interval__V_135_135));
#line 413 "interval.m"
                    }
#line 413 "interval.m"
                    {
#line 413 "interval.m"
                      backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_133_133, backend_libs__interval__STATE_VARIABLE_IntervalInfo_131_131, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                    }
#line 411 "interval.m"
                    *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 411 "interval.m"
                  }
#line 397 "interval.m"
                  break;
#line 397 "interval.m"
                case (MR_Integer) 3:
#line 397 "interval.m"
#line 397 "interval.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Unification_90, (MR_Integer) 0)))) {
#line 397 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 397 "interval.m"
                    case (MR_Integer) 0:
#line 415 "interval.m"
                      {
#line 415 "interval.m"
                        MR_Word backend_libs__interval__Var1_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Unification_90, (MR_Integer) 1)));
#line 415 "interval.m"
                        MR_Word backend_libs__interval__Var2_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Unification_90, (MR_Integer) 2)));
#line 415 "interval.m"
                        MR_Word backend_libs__interval__V_122_122;
#line 415 "interval.m"
                        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_123_123;
#line 415 "interval.m"
                        MR_Word backend_libs__interval__V_124_124;

#line 416 "interval.m"
                        {
#line 416 "interval.m"
                          backend_libs__interval__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "interval.m"
                          MR_hl_field(MR_mktag(1), backend_libs__interval__V_124_124, 0) = ((MR_Box) (backend_libs__interval__Var2_107));
#line 416 "interval.m"
                          MR_hl_field(MR_mktag(1), backend_libs__interval__V_124_124, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 416 "interval.m"
                        }
#line 416 "interval.m"
                        {
#line 416 "interval.m"
                          backend_libs__interval__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "interval.m"
                          MR_hl_field(MR_mktag(1), backend_libs__interval__V_122_122, 0) = ((MR_Box) (backend_libs__interval__Var1_106));
#line 416 "interval.m"
                          MR_hl_field(MR_mktag(1), backend_libs__interval__V_122_122, 1) = ((MR_Box) (backend_libs__interval__V_124_124));
#line 416 "interval.m"
                        }
#line 416 "interval.m"
                        {
#line 416 "interval.m"
                          backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__V_122_122, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_123_123);
                        }
#line 417 "interval.m"
                        {
#line 417 "interval.m"
                          backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_122_122, backend_libs__interval__STATE_VARIABLE_IntervalInfo_123_123, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                        }
#line 415 "interval.m"
                        *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 415 "interval.m"
                      }
#line 397 "interval.m"
                      break;
#line 397 "interval.m"
                    case (MR_Integer) 1:
#line 419 "interval.m"
                      {
#line 420 "interval.m"
                        {
#line 420 "interval.m"
                          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "complicated_unify");
#line 420 "interval.m"
                          return;
                        }
#line 419 "interval.m"
                      }
#line 397 "interval.m"
                      break;
#line 397 "interval.m"
                  }
#line 397 "interval.m"
                  break;
#line 397 "interval.m"
              }
#line 375 "interval.m"
            }
#line 215 "interval.m"
            break;
#line 215 "interval.m"
          case (MR_Integer) 2:
#line 327 "interval.m"
            {
#line 327 "interval.m"
              MR_Word backend_libs__interval__PredId_66 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)));
#line 327 "interval.m"
              MR_Integer backend_libs__interval__ProcId_67 = ((MR_Integer) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__Builtin_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__ProcInfo_72;
#line 327 "interval.m"
              MR_Word backend_libs__interval__ArgVars_255 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__IntParams_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__ModuleInfo_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 0)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__VarTypes_259;
#line 327 "interval.m"
              MR_Word backend_libs__interval__InputArgs_260;
#line 327 "interval.m"
              MR_Word backend_libs__interval__Inputs_261;
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));
#line 327 "interval.m"
              MR_Word backend_libs__interval__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__interval__GoalExpr_6, (MR_Integer) 5)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_313_313 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_314_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 328 "interval.m"
              MR_Word backend_libs__interval__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 329 "interval.m"
              MR_Word backend_libs__interval__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 1)));
#line 329 "interval.m"
              MR_Word backend_libs__interval__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 2)));
#line 330 "interval.m"
              MR_Word backend_libs__interval___PredInfo_71;
#line 332 "interval.m"
              MR_Word backend_libs__interval__V_323_323;
#line 332 "interval.m"
              MR_Word backend_libs__interval__V_324_324;
#line 333 "interval.m"
              MR_Word backend_libs__interval__V_73_73;
#line 333 "interval.m"
              MR_Word backend_libs__interval__V_74_74;

#line 330 "interval.m"
              {
#line 330 "interval.m"
                hlds__hlds_module__module_info_pred_proc_info_5_p_0(backend_libs__interval__ModuleInfo_258, backend_libs__interval__PredId_66, backend_libs__interval__ProcId_67, &backend_libs__interval___PredInfo_71, &backend_libs__interval__ProcInfo_72);
              }
#line 332 "interval.m"
              backend_libs__interval__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 0)));
#line 332 "interval.m"
              backend_libs__interval__VarTypes_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 1)));
#line 332 "interval.m"
              backend_libs__interval__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_257, (MR_Integer) 2)));
#line 333 "interval.m"
              {
#line 333 "interval.m"
                hlds__arg_info__partition_proc_call_args_7_p_0(backend_libs__interval__ProcInfo_72, backend_libs__interval__VarTypes_259, backend_libs__interval__ModuleInfo_258, backend_libs__interval__ArgVars_255, &backend_libs__interval__InputArgs_260, &backend_libs__interval__V_73_73, &backend_libs__interval__V_74_74);
              }
#line 335 "interval.m"
              {
#line 335 "interval.m"
                mercury__set__to_sorted_list_2_p_0((MR_Word) &backend_libs__interval_scalar_common_1[0], backend_libs__interval__InputArgs_260, &backend_libs__interval__Inputs_261);
              }
#line 340 "interval.m"
#line 340 "interval.m"
              switch (backend_libs__interval__Builtin_68) {
#line 340 "interval.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 340 "interval.m"
                case (MR_Integer) 0:
#line 337 "interval.m"
                  {
#line 337 "interval.m"
                    MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_161_161;

#line 338 "interval.m"
                    {
#line 338 "interval.m"
                      backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__Inputs_261, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_161_161);
                    }
#line 339 "interval.m"
                    {
#line 339 "interval.m"
                      backend_libs__interval__require_access_3_p_0(backend_libs__interval__Inputs_261, backend_libs__interval__STATE_VARIABLE_IntervalInfo_161_161, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                    }
#line 337 "interval.m"
                    *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 337 "interval.m"
                  }
#line 340 "interval.m"
                  break;
#line 340 "interval.m"
                case (MR_Integer) 2:
#line 340 "interval.m"
                case (MR_Integer) 1:
#line 343 "interval.m"
                  {
#line 343 "interval.m"
                    MR_Word backend_libs__interval__MaybeNeedAcrossCall_253;

#line 344 "interval.m"
                    {
#line 344 "interval.m"
                      hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo_7, &backend_libs__interval__MaybeNeedAcrossCall_253);
                    }
#line 346 "interval.m"
                    {
#line 346 "interval.m"
                      backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__Inputs_261, backend_libs__interval__MaybeNeedAcrossCall_253, backend_libs__interval__GoalInfo_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
                    }
#line 343 "interval.m"
                  }
#line 340 "interval.m"
                  break;
#line 340 "interval.m"
              }
#line 327 "interval.m"
            }
#line 215 "interval.m"
            break;
#line 215 "interval.m"
          case (MR_Integer) 3:
#line 215 "interval.m"
#line 215 "interval.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 0)))) {
#line 215 "interval.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 215 "interval.m"
              case (MR_Integer) 0:
#line 294 "interval.m"
                {
#line 294 "interval.m"
                  MR_Word backend_libs__interval__TypeInfo_363_363;
#line 294 "interval.m"
                  MR_Word backend_libs__interval__GenericCall_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 294 "interval.m"
                  MR_Word backend_libs__interval__ArgVars_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 294 "interval.m"
                  MR_Word backend_libs__interval__ArgModes_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 294 "interval.m"
                  MR_Word backend_libs__interval__MaybeArgRegs_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));
#line 294 "interval.m"
                  MR_Word backend_libs__interval__MaybeNeedAcrossCall_38;
#line 294 "interval.m"
                  MR_Word backend_libs__interval__IntParams_39;
#line 294 "interval.m"
                  MR_Word backend_libs__interval__ModuleInfo_40;
#line 294 "interval.m"
                  MR_Word backend_libs__interval__VarTypes_41;
#line 294 "interval.m"
                  MR_Word backend_libs__interval__ArgTypes_42;
#line 294 "interval.m"
                  MR_Word backend_libs__interval__ArgRegTypes_43;
#line 294 "interval.m"
                  MR_Word backend_libs__interval__InputArgsR_44;
#line 294 "interval.m"
                  MR_Word backend_libs__interval__InputArgsF_45;
#line 294 "interval.m"
                  MR_Word backend_libs__interval__InputArgs_48;
#line 293 "interval.m"
                  MR_Word backend_libs__interval___Detism_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 5)));
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_287_287;
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_288_288;
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_289_289;
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_290_290;
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_291_291;
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_292_292;
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_293_293;
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_294_294;
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_295_295;
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_296_296;
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_297_297;
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_298_298;
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_299_299;
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_300_300;
#line 296 "interval.m"
                  MR_Word backend_libs__interval__V_301_301;
#line 297 "interval.m"
                  MR_Word backend_libs__interval__V_303_303;
#line 302 "interval.m"
                  MR_Word backend_libs__interval___OutputArgsR_46;
#line 302 "interval.m"
                  MR_Word backend_libs__interval___OutputArgsF_47;

#line 295 "interval.m"
                  {
#line 295 "interval.m"
                    hlds__hlds_llds__goal_info_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo_7, &backend_libs__interval__MaybeNeedAcrossCall_38);
                  }
#line 296 "interval.m"
                  backend_libs__interval__IntParams_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 296 "interval.m"
                  backend_libs__interval__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 296 "interval.m"
                  backend_libs__interval__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 296 "interval.m"
                  backend_libs__interval__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 296 "interval.m"
                  backend_libs__interval__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 296 "interval.m"
                  backend_libs__interval__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 296 "interval.m"
                  backend_libs__interval__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 296 "interval.m"
                  backend_libs__interval__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 296 "interval.m"
                  backend_libs__interval__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 296 "interval.m"
                  backend_libs__interval__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 296 "interval.m"
                  backend_libs__interval__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 296 "interval.m"
                  backend_libs__interval__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 296 "interval.m"
                  backend_libs__interval__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 296 "interval.m"
                  backend_libs__interval__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 296 "interval.m"
                  backend_libs__interval__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 296 "interval.m"
                  backend_libs__interval__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 297 "interval.m"
                  backend_libs__interval__ModuleInfo_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_39, (MR_Integer) 0)));
#line 297 "interval.m"
                  backend_libs__interval__VarTypes_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_39, (MR_Integer) 1)));
#line 297 "interval.m"
                  backend_libs__interval__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_39, (MR_Integer) 2)));
#line 299 "interval.m"
                  {
#line 299 "interval.m"
                    hlds__vartypes__lookup_var_types_3_p_0(backend_libs__interval__VarTypes_41, backend_libs__interval__ArgVars_34, &backend_libs__interval__ArgTypes_42);
                  }
#line 300 "interval.m"
                  {
#line 300 "interval.m"
                    hlds__arg_info__generic_call_arg_reg_types_6_p_0(backend_libs__interval__ModuleInfo_40, backend_libs__interval__VarTypes_41, backend_libs__interval__GenericCall_33, backend_libs__interval__ArgVars_34, backend_libs__interval__MaybeArgRegs_36, &backend_libs__interval__ArgRegTypes_43);
                  }
#line 302 "interval.m"
                  {
#line 302 "interval.m"
                    hlds__arg_info__compute_in_and_out_vars_sep_regs_9_p_0(backend_libs__interval__ModuleInfo_40, backend_libs__interval__ArgVars_34, backend_libs__interval__ArgModes_35, backend_libs__interval__ArgTypes_42, backend_libs__interval__ArgRegTypes_43, &backend_libs__interval__InputArgsR_44, &backend_libs__interval__InputArgsF_45, &backend_libs__interval___OutputArgsR_46, &backend_libs__interval___OutputArgsF_47);
                  }
#line 17654 "backend_libs.interval.c"
                  backend_libs__interval__TypeInfo_363_363 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 305 "interval.m"
                  {
#line 305 "interval.m"
                    mercury__list__append_3_p_1(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__InputArgsR_44, backend_libs__interval__InputArgsF_45, &backend_libs__interval__InputArgs_48);
                  }
#line 312 "interval.m"
#line 312 "interval.m"
                  switch (MR_tag((MR_Word) backend_libs__interval__GenericCall_33)) {
#line 312 "interval.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 312 "interval.m"
                    case (MR_Integer) 0:
#line 312 "interval.m"
                    case (MR_Integer) 1:
#line 312 "interval.m"
                    case (MR_Integer) 2:
#line 316 "interval.m"
                      {
#line 316 "interval.m"
                        MR_Word backend_libs__interval__Globals_59;
#line 316 "interval.m"
                        MR_Word backend_libs__interval__GenericVarsArgInfos_61;
#line 316 "interval.m"
                        MR_Word backend_libs__interval__GenericVars_64;
#line 316 "interval.m"
                        MR_Word backend_libs__interval__Inputs_65;
#line 316 "interval.m"
                        MR_Integer backend_libs__interval__V_163_163;
#line 316 "interval.m"
                        MR_Integer backend_libs__interval__V_164_164;
#line 318 "interval.m"
                        MR_Word backend_libs__interval__V_60_60;
#line 318 "interval.m"
                        MR_Integer backend_libs__interval__V_62_62;
#line 318 "interval.m"
                        MR_Word backend_libs__interval__V_63_63;

#line 317 "interval.m"
                        {
#line 317 "interval.m"
                          hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__interval__ModuleInfo_40, &backend_libs__interval__Globals_59);
                        }
#line 319 "interval.m"
                        {
#line 319 "interval.m"
                          backend_libs__interval__V_163_163 = mercury__list__length_1_f_0(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__InputArgsR_44);
                        }
#line 319 "interval.m"
                        {
#line 319 "interval.m"
                          backend_libs__interval__V_164_164 = mercury__list__length_1_f_0(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__InputArgsF_45);
                        }
#line 318 "interval.m"
                        {
#line 318 "interval.m"
                          ll_backend__call_gen__generic_call_info_8_p_0(backend_libs__interval__Globals_59, backend_libs__interval__GenericCall_33, backend_libs__interval__V_163_163, backend_libs__interval__V_164_164, &backend_libs__interval__V_60_60, &backend_libs__interval__GenericVarsArgInfos_61, &backend_libs__interval__V_62_62, &backend_libs__interval__V_63_63);
                        }
#line 321 "interval.m"
                        {
#line 321 "interval.m"
                          mercury__assoc_list__keys_2_p_0(backend_libs__interval__TypeInfo_363_363, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, backend_libs__interval__GenericVarsArgInfos_61, &backend_libs__interval__GenericVars_64);
                        }
#line 322 "interval.m"
                        {
#line 322 "interval.m"
                          mercury__list__append_3_p_1(backend_libs__interval__TypeInfo_363_363, backend_libs__interval__GenericVars_64, backend_libs__interval__InputArgs_48, &backend_libs__interval__Inputs_65);
                        }
#line 323 "interval.m"
                        {
#line 323 "interval.m"
                          backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__Inputs_65, backend_libs__interval__MaybeNeedAcrossCall_38, backend_libs__interval__GoalInfo_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
                        }
#line 316 "interval.m"
                      }
#line 312 "interval.m"
                      break;
#line 312 "interval.m"
                    case (MR_Integer) 3:
#line 309 "interval.m"
                      {
#line 309 "interval.m"
                        MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_167_167;

#line 310 "interval.m"
                        {
#line 310 "interval.m"
                          backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__InputArgs_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_167_167);
                        }
#line 311 "interval.m"
                        {
#line 311 "interval.m"
                          backend_libs__interval__require_access_3_p_0(backend_libs__interval__InputArgs_48, backend_libs__interval__STATE_VARIABLE_IntervalInfo_167_167, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                        }
#line 309 "interval.m"
                        *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 309 "interval.m"
                      }
#line 312 "interval.m"
                      break;
#line 312 "interval.m"
                  }
#line 294 "interval.m"
                }
#line 215 "interval.m"
                break;
#line 215 "interval.m"
              case (MR_Integer) 1:
#line 351 "interval.m"
                {
#line 351 "interval.m"
                  MR_Word backend_libs__interval__TypeCtorInfo_366_366;
#line 351 "interval.m"
                  MR_Word backend_libs__interval__TypeInfo_367_367;
#line 351 "interval.m"
                  MR_Word backend_libs__interval__Args_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__ExtraArgs_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 5)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__ExtraVars_80;
#line 351 "interval.m"
                  MR_Word backend_libs__interval__InputArgVarSet_81;
#line 351 "interval.m"
                  MR_Word backend_libs__interval__InputArgVars_84;
#line 351 "interval.m"
                  MR_Word backend_libs__interval__InputVars_85;
#line 351 "interval.m"
                  MR_Word backend_libs__interval__ArgVars_264;
#line 351 "interval.m"
                  MR_Word backend_libs__interval__IntParams_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 0)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__ModuleInfo_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 0)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__VarTypes_268;
#line 351 "interval.m"
                  MR_Word backend_libs__interval__PredId_269 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 351 "interval.m"
                  MR_Integer backend_libs__interval__ProcId_270 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 351 "interval.m"
                  MR_Word backend_libs__interval__ProcInfo_272;
#line 350 "interval.m"
                  MR_Word backend_libs__interval___Attributes_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 350 "interval.m"
                  MR_Word backend_libs__interval___MaybeTraceRuntimeCond_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 6)));
#line 350 "interval.m"
                  MR_Word backend_libs__interval___PragmaCode_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 7)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 1)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 2)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 3)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 4)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 5)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 6)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 7)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 8)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_333_333 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 9)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_334_334 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 10)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 11)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 12)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 13)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 14)));
#line 352 "interval.m"
                  MR_Word backend_libs__interval__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, (MR_Integer) 15)));
#line 353 "interval.m"
                  MR_Word backend_libs__interval__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 1)));
#line 353 "interval.m"
                  MR_Word backend_libs__interval__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 2)));
#line 354 "interval.m"
                  MR_Word backend_libs__interval___PredInfo_262;
#line 356 "interval.m"
                  MR_Word backend_libs__interval__V_342_342;
#line 356 "interval.m"
                  MR_Word backend_libs__interval__V_343_343;
#line 359 "interval.m"
                  MR_Word backend_libs__interval__V_82_82;
#line 359 "interval.m"
                  MR_Word backend_libs__interval__V_83_83;
#line 363 "interval.m"
                  MR_Word backend_libs__interval__MaybeNeedAcrossCall_263;
#line 366 "interval.m"
                  MR_Word backend_libs__interval__V_86_86;

#line 354 "interval.m"
                  {
#line 354 "interval.m"
                    hlds__hlds_module__module_info_pred_proc_info_5_p_0(backend_libs__interval__ModuleInfo_267, backend_libs__interval__PredId_269, backend_libs__interval__ProcId_270, &backend_libs__interval___PredInfo_262, &backend_libs__interval__ProcInfo_272);
                  }
#line 356 "interval.m"
                  backend_libs__interval__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 0)));
#line 356 "interval.m"
                  backend_libs__interval__VarTypes_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 1)));
#line 356 "interval.m"
                  backend_libs__interval__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__interval__IntParams_266, (MR_Integer) 2)));
#line 17861 "backend_libs.interval.c"
                  backend_libs__interval__TypeCtorInfo_366_366 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 17863 "backend_libs.interval.c"
                  backend_libs__interval__TypeInfo_367_367 = (MR_Word) &backend_libs__interval_scalar_common_1[0];
#line 357 "interval.m"
                  {
#line 357 "interval.m"
                    backend_libs__interval__ArgVars_264 = mercury__list__map_2_f_0(backend_libs__interval__TypeCtorInfo_366_366, backend_libs__interval__TypeInfo_367_367, (MR_Word) &backend_libs__interval_scalar_common_2[12], backend_libs__interval__Args_76);
                  }
#line 358 "interval.m"
                  {
#line 358 "interval.m"
                    backend_libs__interval__ExtraVars_80 = mercury__list__map_2_f_0(backend_libs__interval__TypeCtorInfo_366_366, backend_libs__interval__TypeInfo_367_367, (MR_Word) &backend_libs__interval_scalar_common_2[13], backend_libs__interval__ExtraArgs_77);
                  }
#line 359 "interval.m"
                  {
#line 359 "interval.m"
                    hlds__arg_info__partition_proc_call_args_7_p_0(backend_libs__interval__ProcInfo_272, backend_libs__interval__VarTypes_268, backend_libs__interval__ModuleInfo_267, backend_libs__interval__ArgVars_264, &backend_libs__interval__InputArgVarSet_81, &backend_libs__interval__V_82_82, &backend_libs__interval__V_83_83);
                  }
#line 361 "interval.m"
                  {
#line 361 "interval.m"
                    mercury__set__to_sorted_list_2_p_0(backend_libs__interval__TypeInfo_367_367, backend_libs__interval__InputArgVarSet_81, &backend_libs__interval__InputArgVars_84);
                  }
#line 362 "interval.m"
                  {
#line 362 "interval.m"
                    mercury__list__append_3_p_1(backend_libs__interval__TypeInfo_367_367, backend_libs__interval__InputArgVars_84, backend_libs__interval__ExtraVars_80, &backend_libs__interval__InputVars_85);
                  }
#line 364 "interval.m"
                  {
#line 364 "interval.m"
                    backend_libs__interval__succeeded = hlds__hlds_llds__goal_info_maybe_get_maybe_need_across_call_2_p_0(backend_libs__interval__GoalInfo_7, &backend_libs__interval__MaybeNeedAcrossCall_263);
                  }
#line 365 "interval.m"
                  if (backend_libs__interval__succeeded)
#line 365 "interval.m"
                    {
#line 366 "interval.m"
                      backend_libs__interval__succeeded = ((MR_tag((MR_Word) backend_libs__interval__MaybeNeedAcrossCall_263)) == (MR_mktag((MR_Integer) 1)));
#line 366 "interval.m"
                      if (backend_libs__interval__succeeded)
#line 366 "interval.m"
                        backend_libs__interval__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__MaybeNeedAcrossCall_263, (MR_Integer) 0)));
#line 365 "interval.m"
                    }
#line 363 "interval.m"
                  if (backend_libs__interval__succeeded)
#line 368 "interval.m"
                    {
#line 368 "interval.m"
                      backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_97_116_95_99_97_108_108_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__InputVars_85, backend_libs__interval__MaybeNeedAcrossCall_263, backend_libs__interval__GoalInfo_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
                    }
#line 363 "interval.m"
                  else
#line 371 "interval.m"
                    {
#line 371 "interval.m"
                      MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_157_157;

#line 371 "interval.m"
                      {
#line 371 "interval.m"
                        backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__InputVars_85, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_157_157);
                      }
#line 372 "interval.m"
                      {
#line 372 "interval.m"
                        backend_libs__interval__require_access_3_p_0(backend_libs__interval__InputVars_85, backend_libs__interval__STATE_VARIABLE_IntervalInfo_157_157, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                      }
#line 371 "interval.m"
                      *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 371 "interval.m"
                    }
#line 351 "interval.m"
                }
#line 215 "interval.m"
                break;
#line 215 "interval.m"
              case (MR_Integer) 2:
#line 213 "interval.m"
                {
#line 213 "interval.m"
                  MR_Word backend_libs__interval__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 213 "interval.m"
                  MR_Word backend_libs__interval__ConjType_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));

#line 214 "interval.m"
                  {
#line 214 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_105_110_116_101_114_118_97_108_95_105_110_102_111_95_105_110_95_99_111_110_106_95_95_91_51_93_95_48_6_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Goals_11, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113, backend_libs__interval__STATE_VARIABLE_Acc_0_114, backend_libs__interval__STATE_VARIABLE_Acc_115);
                  }
#line 213 "interval.m"
                }
#line 215 "interval.m"
                break;
#line 215 "interval.m"
              case (MR_Integer) 3:
#line 216 "interval.m"
                {
#line 216 "interval.m"
                  MR_Word backend_libs__interval__Goals_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));

#line 227 "interval.m"
                  if ((backend_libs__interval__Goals_234 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "interval.m"
                    {
#line 236 "interval.m"
                      {
#line 236 "interval.m"
                        backend_libs__interval__no_open_intervals_2_p_0(backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                      }
#line 228 "interval.m"
                      *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 228 "interval.m"
                    }
#line 227 "interval.m"
                  else
#line 218 "interval.m"
                    {
#line 218 "interval.m"
                      MR_Word backend_libs__interval__FirstDisjunct_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_234, (MR_Integer) 0)));
#line 218 "interval.m"
                      MR_Word backend_libs__interval__StartAnchor_14;
#line 218 "interval.m"
                      MR_Word backend_libs__interval__EndAnchor_15;
#line 218 "interval.m"
                      MR_Word backend_libs__interval__BeforeId_16;
#line 218 "interval.m"
                      MR_Word backend_libs__interval__AfterId_17;
#line 218 "interval.m"
                      MR_Word backend_libs__interval__MaybeResumeVars_18;
#line 218 "interval.m"
                      MR_Word backend_libs__interval__OpenIntervals_19;
#line 218 "interval.m"
                      MR_Word backend_libs__interval__V_223_223;
#line 218 "interval.m"
                      MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_225_225;
#line 218 "interval.m"
                      MR_Box backend_libs__interval__STATE_VARIABLE_Acc_226_226;
#line 218 "interval.m"
                      MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_228_228;
#line 218 "interval.m"
                      MR_Word backend_libs__interval__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__interval__Goals_234, (MR_Integer) 1)));

#line 219 "interval.m"
                      {
#line 219 "interval.m"
                        backend_libs__interval__V_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 219 "interval.m"
                        MR_hl_field(MR_mktag(1), backend_libs__interval__V_223_223, 0) = ((MR_Box) (backend_libs__interval__FirstDisjunct_12));
#line 219 "interval.m"
                      }
#line 219 "interval.m"
                      {
#line 219 "interval.m"
                        backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(backend_libs__interval__GoalInfo_7, backend_libs__interval__V_223_223, (MR_Integer) 1, &backend_libs__interval__StartAnchor_14, &backend_libs__interval__EndAnchor_15, &backend_libs__interval__BeforeId_16, &backend_libs__interval__AfterId_17, &backend_libs__interval__MaybeResumeVars_18, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_225_225, backend_libs__interval__STATE_VARIABLE_Acc_0_114, &backend_libs__interval__STATE_VARIABLE_Acc_226_226);
                      }
#line 222 "interval.m"
                      {
#line 222 "interval.m"
                        backend_libs__interval__build_interval_info_in_disj_11_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Goals_234, (MR_Integer) 1, backend_libs__interval__StartAnchor_14, backend_libs__interval__EndAnchor_15, backend_libs__interval__BeforeId_16, backend_libs__interval__AfterId_17, &backend_libs__interval__OpenIntervals_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_225_225, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_228_228, backend_libs__interval__STATE_VARIABLE_Acc_226_226, backend_libs__interval__STATE_VARIABLE_Acc_115);
                      }
#line 225 "interval.m"
                      {
#line 225 "interval.m"
                        backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__StartAnchor_14, backend_libs__interval__BeforeId_16, backend_libs__interval__MaybeResumeVars_18, backend_libs__interval__OpenIntervals_19, backend_libs__interval__STATE_VARIABLE_IntervalInfo_228_228, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                      }
#line 218 "interval.m"
                    }
#line 216 "interval.m"
                }
#line 215 "interval.m"
                break;
#line 215 "interval.m"
              case (MR_Integer) 4:
#line 239 "interval.m"
                {
#line 239 "interval.m"
                  MR_Word backend_libs__interval__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 239 "interval.m"
                  MR_Word backend_libs__interval__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 239 "interval.m"
                  MR_Word backend_libs__interval__OpenIntervalsList_23;
#line 239 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_210_210;
#line 239 "interval.m"
                  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_211_211;
#line 239 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_212_212;
#line 239 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_215_215;
#line 239 "interval.m"
                  MR_Word backend_libs__interval__V_216_216;
#line 239 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_217_217;
#line 239 "interval.m"
                  MR_Word backend_libs__interval__StartAnchor_235;
#line 239 "interval.m"
                  MR_Word backend_libs__interval__EndAnchor_236;
#line 239 "interval.m"
                  MR_Word backend_libs__interval__BeforeId_237;
#line 239 "interval.m"
                  MR_Word backend_libs__interval__AfterId_238;
#line 239 "interval.m"
                  MR_Word backend_libs__interval__MaybeResumeVars_239;
#line 239 "interval.m"
                  MR_Word backend_libs__interval__OpenIntervals_240;
#line 239 "interval.m"
                  MR_Word backend_libs__interval___Det_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));

#line 240 "interval.m"
                  {
#line 240 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(backend_libs__interval__GoalInfo_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 2, &backend_libs__interval__StartAnchor_235, &backend_libs__interval__EndAnchor_236, &backend_libs__interval__BeforeId_237, &backend_libs__interval__AfterId_238, &backend_libs__interval__MaybeResumeVars_239, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_210_210, backend_libs__interval__STATE_VARIABLE_Acc_0_114, &backend_libs__interval__STATE_VARIABLE_Acc_211_211);
                  }
#line 243 "interval.m"
                  {
#line 243 "interval.m"
                    backend_libs__interval__build_interval_info_in_cases_10_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Cases_22, backend_libs__interval__StartAnchor_235, backend_libs__interval__EndAnchor_236, backend_libs__interval__BeforeId_237, backend_libs__interval__AfterId_238, &backend_libs__interval__OpenIntervalsList_23, backend_libs__interval__STATE_VARIABLE_IntervalInfo_210_210, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_212_212, backend_libs__interval__STATE_VARIABLE_Acc_211_211, backend_libs__interval__STATE_VARIABLE_Acc_115);
                  }
#line 245 "interval.m"
                  {
#line 245 "interval.m"
                    backend_libs__interval__OpenIntervals_240 = mercury__set__union_list_1_f_0((MR_Word) &backend_libs__interval__backend_libs__interval__type_ctor_info_interval_id_0, backend_libs__interval__OpenIntervalsList_23);
                  }
#line 246 "interval.m"
                  {
#line 246 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__StartAnchor_235, backend_libs__interval__BeforeId_237, backend_libs__interval__MaybeResumeVars_239, backend_libs__interval__OpenIntervals_240, backend_libs__interval__STATE_VARIABLE_IntervalInfo_212_212, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_215_215);
                  }
#line 248 "interval.m"
                  {
#line 248 "interval.m"
                    backend_libs__interval__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "interval.m"
                    MR_hl_field(MR_mktag(1), backend_libs__interval__V_216_216, 0) = ((MR_Box) (backend_libs__interval__Var_20));
#line 248 "interval.m"
                    MR_hl_field(MR_mktag(1), backend_libs__interval__V_216_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "interval.m"
                  }
#line 248 "interval.m"
                  {
#line 248 "interval.m"
                    backend_libs__interval__require_in_regs_3_p_0(backend_libs__interval__V_216_216, backend_libs__interval__STATE_VARIABLE_IntervalInfo_215_215, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_217_217);
                  }
#line 249 "interval.m"
                  {
#line 249 "interval.m"
                    backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_216_216, backend_libs__interval__STATE_VARIABLE_IntervalInfo_217_217, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                  }
#line 239 "interval.m"
                }
#line 215 "interval.m"
                break;
#line 215 "interval.m"
              case (MR_Integer) 5:
#line 279 "interval.m"
                {
#line 279 "interval.m"
                  MR_Word backend_libs__interval__Reason_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 279 "interval.m"
                  MR_Word backend_libs__interval__SubGoal_252 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 280 "interval.m"
                  MR_Word backend_libs__interval__TermVar_32;
#line 281 "interval.m"
                  MR_Word backend_libs__interval__V_169_169;

#line 281 "interval.m"
                  backend_libs__interval__succeeded = ((((MR_tag((MR_Word) backend_libs__interval__Reason_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_31, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 281 "interval.m"
                  if (backend_libs__interval__succeeded)
#line 281 "interval.m"
                    {
#line 281 "interval.m"
                      backend_libs__interval__TermVar_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_31, (MR_Integer) 1)));
#line 281 "interval.m"
                      backend_libs__interval__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__Reason_31, (MR_Integer) 2)));
#line 281 "interval.m"
                      backend_libs__interval__succeeded = (backend_libs__interval__V_169_169 == (MR_Integer) 1);
#line 281 "interval.m"
                    }
#line 280 "interval.m"
                  if (backend_libs__interval__succeeded)
#line 286 "interval.m"
                    {
#line 286 "interval.m"
                      MR_Word backend_libs__interval__V_170_170;

#line 286 "interval.m"
                      {
#line 286 "interval.m"
                        backend_libs__interval__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "interval.m"
                        MR_hl_field(MR_mktag(1), backend_libs__interval__V_170_170, 0) = ((MR_Box) (backend_libs__interval__TermVar_32));
#line 286 "interval.m"
                        MR_hl_field(MR_mktag(1), backend_libs__interval__V_170_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "interval.m"
                      }
#line 286 "interval.m"
                      {
#line 286 "interval.m"
                        backend_libs__interval__require_access_3_p_0(backend_libs__interval__V_170_170, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                      }
#line 286 "interval.m"
                      *backend_libs__interval__STATE_VARIABLE_Acc_115 = backend_libs__interval__STATE_VARIABLE_Acc_0_114;
#line 286 "interval.m"
                    }
#line 280 "interval.m"
                  else
#line 290 "interval.m"
                    {
#line 290 "interval.m"
                      /* direct tailcall eliminated */
#line 290 "interval.m"
                      {
#line 290 "interval.m"
                        MR_Word backend_libs__interval__HeadVar__1__tmp_copy_1 = backend_libs__interval__SubGoal_252;

#line 290 "interval.m"
                        backend_libs__interval__HeadVar__1_1 = backend_libs__interval__HeadVar__1__tmp_copy_1;
#line 290 "interval.m"
                      }
#line 290 "interval.m"
                      continue;
#line 290 "interval.m"
                    }
#line 279 "interval.m"
                }
#line 215 "interval.m"
                break;
#line 215 "interval.m"
              case (MR_Integer) 6:
#line 262 "interval.m"
                {
#line 262 "interval.m"
                  MR_Word backend_libs__interval__Cond_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 2)));
#line 262 "interval.m"
                  MR_Word backend_libs__interval__Then_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 3)));
#line 262 "interval.m"
                  MR_Word backend_libs__interval__Else_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 4)));
#line 262 "interval.m"
                  MR_Word backend_libs__interval__CondOpenIntervals_29;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__V_175_175;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_177_177;
#line 262 "interval.m"
                  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_178_178;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_179_179;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_180_180;
#line 262 "interval.m"
                  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_181_181;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_182_182;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_183_183;
#line 262 "interval.m"
                  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_184_184;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_186_186;
#line 262 "interval.m"
                  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_187_187;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_188_188;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_189_189;
#line 262 "interval.m"
                  MR_Box backend_libs__interval__STATE_VARIABLE_Acc_190_190;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__STATE_VARIABLE_IntervalInfo_192_192;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__StartAnchor_247;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__EndAnchor_248;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__BeforeId_249;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__AfterId_250;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__MaybeResumeVars_251;
#line 262 "interval.m"
                  MR_Word backend_libs__interval__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__interval__GoalExpr_6, (MR_Integer) 1)));
#line 274 "interval.m"
                  MR_Word backend_libs__interval___ElseOpenIntervals_30;

#line 263 "interval.m"
                  {
#line 263 "interval.m"
                    backend_libs__interval__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 263 "interval.m"
                    MR_hl_field(MR_mktag(1), backend_libs__interval__V_175_175, 0) = ((MR_Box) (backend_libs__interval__Cond_26));
#line 263 "interval.m"
                  }
#line 263 "interval.m"
                  {
#line 263 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_101_110_100_95_95_91_49_93_95_48_12_p_0(backend_libs__interval__GoalInfo_7, backend_libs__interval__V_175_175, (MR_Integer) 0, &backend_libs__interval__StartAnchor_247, &backend_libs__interval__EndAnchor_248, &backend_libs__interval__BeforeId_249, &backend_libs__interval__AfterId_250, &backend_libs__interval__MaybeResumeVars_251, backend_libs__interval__STATE_VARIABLE_IntervalInfo_0_112, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_177_177, backend_libs__interval__STATE_VARIABLE_Acc_0_114, &backend_libs__interval__STATE_VARIABLE_Acc_178_178);
                  }
#line 266 "interval.m"
                  {
#line 266 "interval.m"
                    backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_248, backend_libs__interval__AfterId_250, backend_libs__interval__STATE_VARIABLE_IntervalInfo_177_177, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_179_179);
                  }
#line 267 "interval.m"
                  {
#line 267 "interval.m"
                    backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Then_27, backend_libs__interval__STATE_VARIABLE_IntervalInfo_179_179, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_180_180, backend_libs__interval__STATE_VARIABLE_Acc_178_178, &backend_libs__interval__STATE_VARIABLE_Acc_181_181);
                  }
#line 268 "interval.m"
                  {
#line 268 "interval.m"
                    backend_libs__interval__reached_cond_then_3_p_0(backend_libs__interval__GoalInfo_7, backend_libs__interval__STATE_VARIABLE_IntervalInfo_180_180, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_182_182);
                  }
#line 269 "interval.m"
                  {
#line 269 "interval.m"
                    backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Cond_26, backend_libs__interval__STATE_VARIABLE_IntervalInfo_182_182, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_183_183, backend_libs__interval__STATE_VARIABLE_Acc_181_181, &backend_libs__interval__STATE_VARIABLE_Acc_184_184);
                  }
#line 270 "interval.m"
                  {
#line 270 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 1, backend_libs__interval__StartAnchor_247, backend_libs__interval__BeforeId_249, &backend_libs__interval__CondOpenIntervals_29, backend_libs__interval__STATE_VARIABLE_IntervalInfo_183_183, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_186_186, backend_libs__interval__STATE_VARIABLE_Acc_184_184, &backend_libs__interval__STATE_VARIABLE_Acc_187_187);
                  }
#line 272 "interval.m"
                  {
#line 272 "interval.m"
                    backend_libs__interval__enter_branch_tail_4_p_0(backend_libs__interval__EndAnchor_248, backend_libs__interval__AfterId_250, backend_libs__interval__STATE_VARIABLE_IntervalInfo_186_186, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_188_188);
                  }
#line 273 "interval.m"
                  {
#line 273 "interval.m"
                    backend_libs__interval__build_interval_info_in_goal_5_p_0(backend_libs__interval__TypeClassInfo_for_build_interval_info_acc_361, backend_libs__interval__Else_28, backend_libs__interval__STATE_VARIABLE_IntervalInfo_188_188, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_189_189, backend_libs__interval__STATE_VARIABLE_Acc_187_187, &backend_libs__interval__STATE_VARIABLE_Acc_190_190);
                  }
#line 274 "interval.m"
                  {
#line 274 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_99_104_101_100_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_8_p_0((MR_Integer) 0, backend_libs__interval__StartAnchor_247, backend_libs__interval__BeforeId_249, &backend_libs__interval___ElseOpenIntervals_30, backend_libs__interval__STATE_VARIABLE_IntervalInfo_189_189, &backend_libs__interval__STATE_VARIABLE_IntervalInfo_192_192, backend_libs__interval__STATE_VARIABLE_Acc_190_190, backend_libs__interval__STATE_VARIABLE_Acc_115);
                  }
#line 276 "interval.m"
                  {
#line 276 "interval.m"
                    backend_libs__interval__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_101_97_118_101_95_98_114_97_110_99_104_95_115_116_97_114_116_95_95_91_49_93_95_48_7_p_0(backend_libs__interval__StartAnchor_247, backend_libs__interval__BeforeId_249, backend_libs__interval__MaybeResumeVars_251, backend_libs__interval__CondOpenIntervals_29, backend_libs__interval__STATE_VARIABLE_IntervalInfo_192_192, backend_libs__interval__STATE_VARIABLE_IntervalInfo_113);
                  }
#line 262 "interval.m"
                }
#line 215 "interval.m"
                break;
#line 215 "interval.m"
              case (MR_Integer) 7:
#line 423 "interval.m"
                {
#line 425 "interval.m"
                  {
#line 425 "interval.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.interval", (MR_String) "predicate \140backend_libs.interval.build_interval_info_in_goal\'/5", (MR_String) "shorthand");
#line 425 "interval.m"
                    return;
                  }
#line 423 "interval.m"
                }
#line 215 "interval.m"
                break;
#line 215 "interval.m"
            }
#line 215 "interval.m"
            break;
#line 215 "interval.m"
        }
#line 211 "interval.m"
      }
#line 211 "interval.m"
      break;
#line 211 "interval.m"
    }
#line 147 "interval.m"
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
