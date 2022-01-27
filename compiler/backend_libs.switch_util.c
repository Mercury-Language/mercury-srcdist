/*
** Automatically generated from `switch_util.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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


/* :- module backend_libs.switch_util. */
/* :- implementation. */

/*
INIT mercury__backend_libs__switch_util__init
ENDINIT
*/

#include "backend_libs.switch_util.mih"


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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_code_util.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 143 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2;

#line 146 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_2;

#line 149 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1;

#line 152 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1;

#line 155 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1;

#line 158 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

#line 161 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

#line 164 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 167 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 170 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1;

#line 173 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2;

#line 176 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_0[1];

#line 179 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0;

#line 182 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2;

#line 185 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_1[2];

#line 188 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_1;

#line 191 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_0[1];

#line 194 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_1[1];

#line 197 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_3[2];

#line 200 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_3[2];

#line 203 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_3[2];

#line 206 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 209 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 212 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_several_llds_0_0[2];

#line 215 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_several_llds_0_0;

#line 218 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_several_llds_0_0[1];

#line 221 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_several_llds_0[1];

#line 224 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_several_llds_0[1];

#line 227 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_several_llds_0[1];

#line 230 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 233 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0;

#line 236 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1;

#line 239 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_is_int_switch_0[2];

#line 242 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_is_int_switch_0[2];

#line 245 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_is_int_switch_0[2];

#line 248 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_0;

#line 251 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_1;

#line 254 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_may_use_smart_indexing_0[2];

#line 257 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_may_use_smart_indexing_0[2];

#line 260 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_may_use_smart_indexing_0[2];

#line 263 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_maybe_int_switch_info_0_0[3];

#line 266 "backend_libs.switch_util.c"
static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__field_names_maybe_int_switch_info_0_0[3];

#line 269 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0;

#line 272 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1;

#line 275 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0[1];

#line 278 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1[1];

#line 281 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_maybe_int_switch_info_0[2];

#line 284 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0[2];

#line 287 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0[2];

#line 290 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0;

#line 293 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1;

#line 296 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_bit_vec_check_0[2];

#line 299 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_bit_vec_check_0[2];

#line 302 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_bit_vec_check_0[2];

#line 305 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0;

#line 308 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1;

#line 311 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_range_check_0[2];

#line 314 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_range_check_0[2];

#line 317 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_range_check_0[2];

#line 320 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1;

#line 323 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_1_0[2];

#line 326 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0;

#line 329 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_1_0[1];

#line 332 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_1[1];

#line 335 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_1[1];

#line 338 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_1[1];

#line 341 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_entry_1_0[2];

#line 344 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0;

#line 347 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_entry_1_0[1];

#line 350 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_entry_1[1];

#line 353 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_entry_1[1];

#line 356 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_entry_1[1];

#line 359 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0;

#line 362 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_group_entry_1_0[3];

#line 365 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0;

#line 368 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_group_entry_1_0[1];

#line 371 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_group_entry_1[1];

#line 374 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_group_entry_1[1];

#line 377 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_group_entry_1[1];

#line 380 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1;

#line 383 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1;

#line 386 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1;

#line 389 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1__pseudo_backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1;

#line 392 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_rev_map_entry_1_0[4];

#line 395 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0;

#line 398 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_rev_map_entry_1_0[1];

#line 401 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_rev_map_entry_1[1];

#line 404 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_rev_map_entry_1[1];

#line 407 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_rev_map_entry_1[1];

#line 410 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0;

#line 413 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0;

#line 416 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_1;

#line 419 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_0[1];

#line 422 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0;

#line 425 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1;

#line 428 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_1[2];

#line 431 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1;

#line 434 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_0[1];

#line 437 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_1[1];

#line 440 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_soln_consts_1[2];

#line 443 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_soln_consts_1[2];

#line 446 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_soln_consts_1[2];

#line 449 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1;

#line 452 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1;

#line 455 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_string_hash_slot_1_0[3];

#line 458 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0;

#line 461 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0[1];

#line 464 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_string_hash_slot_1[1];

#line 467 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_string_hash_slot_1[1];

#line 470 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_string_hash_slot_1[1];

#line 473 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0;

#line 476 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1;

#line 479 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2;

#line 482 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3;

#line 485 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_switch_category_0[4];

#line 488 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_switch_category_0[4];

#line 491 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_switch_category_0[4];

#line 494 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0;

#line 497 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1;

#line 500 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_table_size_upgrade_0[2];

#line 503 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_table_size_upgrade_0[2];

#line 506 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_table_size_upgrade_0[2];

#line 509 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_3_0_10001(
#line 512 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 514 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 516 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 518 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 520 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5);

#line 523 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_3_0_10001(
#line 526 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 528 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 530 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 532 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 534 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 536 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_6);

#line 539 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_several_llds_0_0_10001(
#line 542 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 544 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 547 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_several_llds_0_0_10001(
#line 550 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 552 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 554 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 557 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_id_ptags_map_0_0_10001(
#line 560 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 562 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 565 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_id_ptags_map_0_0_10001(
#line 568 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 570 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 572 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 575 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0_10001(
#line 578 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 580 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 583 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0_10001(
#line 586 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 588 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 590 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 593 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____may_use_smart_indexing_0_0_10001(
#line 596 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 598 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 601 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____may_use_smart_indexing_0_0_10001(
#line 604 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 606 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 608 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 611 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____maybe_int_switch_info_0_0_10001(
#line 614 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 616 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 619 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____maybe_int_switch_info_0_0_10001(
#line 622 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 624 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 626 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 629 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_bit_vec_check_0_0_10001(
#line 632 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 634 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 637 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_bit_vec_check_0_0_10001(
#line 640 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 642 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 644 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 647 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_range_check_0_0_10001(
#line 650 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 652 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 655 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_range_check_0_0_10001(
#line 658 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 660 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 662 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 665 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_1_0_10001(
#line 668 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 670 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 672 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 675 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_1_0_10001(
#line 678 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 680 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 682 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 684 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 687 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_entry_1_0_10001(
#line 690 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 692 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 694 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 697 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_entry_1_0_10001(
#line 700 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 702 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 704 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 706 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 709 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_entry_1_0_10001(
#line 712 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 714 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 716 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 719 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_entry_1_0_10001(
#line 722 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 724 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 726 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 728 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 731 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_list_1_0_10001(
#line 734 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 736 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 738 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 741 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_list_1_0_10001(
#line 744 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 746 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 748 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 750 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 753 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_list_1_0_10001(
#line 756 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 758 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 760 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 763 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_list_1_0_10001(
#line 766 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 768 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 770 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 772 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 775 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_map_1_0_10001(
#line 778 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 780 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 782 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 785 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_map_1_0_10001(
#line 788 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 790 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 792 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 794 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 797 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0_10001(
#line 800 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 802 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 804 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 807 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0_10001(
#line 810 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 812 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 814 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 816 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 819 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0_10001(
#line 822 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 824 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 826 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 829 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0_10001(
#line 832 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 834 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 836 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 838 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 841 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_count_map_0_0_10001(
#line 844 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 846 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 849 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_count_map_0_0_10001(
#line 852 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 854 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 856 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 859 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____soln_consts_1_0_10001(
#line 862 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 864 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 866 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 869 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____soln_consts_1_0_10001(
#line 872 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 874 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 876 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 878 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 881 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_list_1_0_10001(
#line 884 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 886 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 888 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 891 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_list_1_0_10001(
#line 894 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 896 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 898 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 900 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 903 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_map_1_0_10001(
#line 906 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 908 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 910 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 913 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_map_1_0_10001(
#line 916 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 918 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 920 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 922 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 925 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____string_hash_slot_1_0_10001(
#line 928 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 930 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 932 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 935 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____string_hash_slot_1_0_10001(
#line 938 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 940 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 942 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 944 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 947 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____switch_category_0_0_10001(
#line 950 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 952 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 955 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____switch_category_0_0_10001(
#line 958 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 960 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 962 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 965 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____table_size_upgrade_0_0_10001(
#line 968 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 970 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 973 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____table_size_upgrade_0_0_10001(
#line 976 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 978 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 980 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 1267 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0_1(
#line 1267 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1267 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1267 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1267 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3,
#line 1267 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 1267 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_5);

#line 1252 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0(
#line 1252 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_65,
#line 1252 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1252 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1252 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1252 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1252 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1252 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1252 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1252 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1252 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9,
#line 1252 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_10,
#line 1252 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11,
#line 1252 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_12);

#line 1118 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0_1(
#line 1118 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1118 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1118 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1118 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3);

#line 1104 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(
#line 1104 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_54,
#line 1104 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1104 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1104 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1104 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1104 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1104 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1104 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1104 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1104 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9,
#line 1104 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10);

#line 793 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_115_111_108_110_95_99_111_110_115_116_115_95_116_111_95_111_110_101_95_115_111_108_110_95_95_91_49_44_32_51_93_95_48_3_p_0(
#line 793 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_8,
#line 793 "switch_util.m"
  MR_Word backend_libs__switch_util__Solns_5,
#line 793 "switch_util.m"
  MR_Word * backend_libs__switch_util__Values_6);

#line 454 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0_1(
#line 454 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 454 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 454 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 454 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 454 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 454 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 454 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_6,
#line 454 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_7,
#line 454 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_8,
#line 454 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_9,
#line 454 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_10);

#line 442 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0(
#line 442 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_1,
#line 442 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_3,
#line 442 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 442 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__5_5,
#line 442 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_6,
#line 442 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LowerLimit_7,
#line 442 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_8,
#line 442 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_UpperLimit_9,
#line 442 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_0_10,
#line 442 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumValues_11,
#line 442 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_12,
#line 442 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_13);

#line 436 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0_1(
#line 436 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 436 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 436 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2);

#line 428 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(
#line 428 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_1,
#line 428 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_3,
#line 428 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 428 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__5_5);

#line 421 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_2(
#line 421 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 421 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 421 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2);

#line 402 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_1(
#line 402 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 402 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 402 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 402 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 402 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 402 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 402 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_6,
#line 402 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_7,
#line 402 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_8,
#line 402 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_9,
#line 402 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_10);

#line 1407 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__build_ptag_case_rev_map__1407__1_3_p_0(
#line 1407 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1407 "switch_util.m"
  MR_Word backend_libs__switch_util__Case_14,
#line 1407 "switch_util.m"
  MR_Word backend_libs__switch_util__OldCase_21);

#line 1302 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1302__1_2_p_0(
#line 1302 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_21,
#line 1302 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_74);

#line 1316 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1316__1_2_p_0(
#line 1316 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_63,
#line 1316 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_94);

#line 1374 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0(
#line 1374 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1374 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1374 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1374 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3);

#line 1374 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0(
#line 1374 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_13,
#line 1374 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1374 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2);

#line 1389 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0(
#line 1389 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 1389 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1389 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1389 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3);

#line 1389 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0(
#line 1389 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 1389 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1389 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2);

#line 390 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0(
#line 390 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 390 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 390 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3);

#line 390 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0(
#line 390 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_1,
#line 390 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2);

#line 1407 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0_1(
#line 1407 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1392 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0(
#line 1392 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1392 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1392 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1392 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3,
#line 1392 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevMap_4);

#line 1367 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__interpret_rev_map_entry_2_p_0(
#line 1367 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_9,
#line 1367 "switch_util.m"
  MR_Word backend_libs__switch_util__RevEntry_3,
#line 1367 "switch_util.m"
  MR_Word * backend_libs__switch_util__GroupEntry_4);

#line 1302 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_2(
#line 1302 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1316 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_1(
#line 1316 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1272 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0(
#line 1272 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_107,
#line 1272 "switch_util.m"
  MR_Word backend_libs__switch_util__CaseId_8,
#line 1272 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_9,
#line 1272 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_10,
#line 1272 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_0_52,
#line 1272 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_53,
#line 1272 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54,
#line 1272 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55);

#line 1159 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__get_ptag_counts_loop_5_p_0(
#line 1159 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1159 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2,
#line 1159 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_3,
#line 1159 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4,
#line 1159 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_5);

#line 1121 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__add_string_binary_entry_4_p_0(
#line 1121 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 1121 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_5,
#line 1121 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_6,
#line 1121 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_12,
#line 1121 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_13);

#line 1082 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0_1(
#line 1082 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1076 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0(
#line 1076 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1076 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_6,
#line 1076 "switch_util.m"
  MR_Word backend_libs__switch_util__HomeMap_7,
#line 1076 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_8,
#line 1076 "switch_util.m"
  MR_Integer backend_libs__switch_util__LastUsed_9,
#line 1076 "switch_util.m"
  MR_Integer * backend_libs__switch_util__FreeSlot_10);

#line 1056 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__follow_hash_chain_3_p_0(
#line 1056 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_12,
#line 1056 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_4,
#line 1056 "switch_util.m"
  MR_Integer backend_libs__switch_util__Slot_5,
#line 1056 "switch_util.m"
  MR_Integer * backend_libs__switch_util__LastSlot_6);

#line 1022 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(
#line 1022 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_64,
#line 1022 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1022 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__2_2,
#line 1022 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__3_3,
#line 1022 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 1022 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5,
#line 1022 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_6,
#line 1022 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7,
#line 1022 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_8);

#line 1007 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hashes_7_p_0(
#line 1007 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_32,
#line 1007 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1007 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_2,
#line 1007 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_3,
#line 1007 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4,
#line 1007 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_5,
#line 1007 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6,
#line 1007 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_7);

#line 992 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_4_p_0(
#line 992 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 992 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_5,
#line 992 "switch_util.m"
  MR_Word backend_libs__switch_util__HashValList_6,
#line 992 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_7,
#line 992 "switch_util.m"
  MR_Word * backend_libs__switch_util__SlotMap_8);

#line 946 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_case_14_p_0(
#line 946 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 946 "switch_util.m"
  MR_Word backend_libs__switch_util__StrCaseRep_15,
#line 946 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_16,
#line 946 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_31,
#line 946 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap4_32,
#line 946 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_33,
#line 946 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap5_34,
#line 946 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_35,
#line 946 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap6_36,
#line 946 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_37,
#line 946 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_38,
#line 946 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_39,
#line 946 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_40,
#line 946 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_41,
#line 946 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_42);

#line 925 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_cases_14_p_0(
#line 925 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 925 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 925 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_2,
#line 925 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_3,
#line 925 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap4_4,
#line 925 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_5,
#line 925 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap5_6,
#line 925 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_7,
#line 925 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap6_8,
#line 925 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_9,
#line 925 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_10,
#line 925 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_11,
#line 925 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_12,
#line 925 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_13,
#line 925 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_14);

#line 793 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__project_soln_consts_to_one_soln_3_p_0(
#line 793 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Key_7,
#line 793 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_8,
#line 793 "switch_util.m"
  MR_Box backend_libs__switch_util___Key_4,
#line 793 "switch_util.m"
  MR_Word backend_libs__switch_util__Solns_5,
#line 793 "switch_util.m"
  MR_Word * backend_libs__switch_util__Values_6);

#line 723 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__filter_out_failing_cases_loop_5_p_0(
#line 723 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 723 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2,
#line 723 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_3,
#line 723 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_4,
#line 723 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_5);

#line 491 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__num_cons_ids_in_tagged_cases_loop_5_p_0(
#line 491 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 491 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0_2,
#line 491 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumConsIds_3,
#line 491 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumArms_0_4,
#line 491 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumArms_5);

#line 469 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__tag_cons_id_in_int_switch_11_p_0(
#line 469 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_12,
#line 469 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsId_13,
#line 469 "switch_util.m"
  MR_Word * backend_libs__switch_util__TaggedConsId_14,
#line 469 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_21,
#line 469 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LowerLimit_22,
#line 469 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_23,
#line 469 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_UpperLimit_24,
#line 469 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_0_25,
#line 469 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumValues_26,
#line 469 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_27,
#line 469 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_28);

#line 463 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__tag_cons_id_3_p_0(
#line 463 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_4,
#line 463 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsId_5,
#line 463 "switch_util.m"
  MR_Word * backend_libs__switch_util__TaggedConsId_6);

#line 1365 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__order_ptags_by_count_3_p_0_1(
#line 1365 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1365 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1365 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2);

#line 791 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__project_all_to_one_solution_2_p_0_1(
#line 791 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 791 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 791 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 791 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__switch_util_scalar_common_1[5][2];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_2[3][3];

static /* final */ const MR_Integer backend_libs__switch_util_scalar_common_3[1][3];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_4[2][8];

static /* final */ const MR_Integer backend_libs__switch_util_scalar_common_5[1][2];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_6[3][6];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_7[2][5];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_8[1][14];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_9[1][11];




static /* final */ const MR_Box backend_libs__switch_util_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) -1))
  },
};

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (&backend_libs__switch_util_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__switch_util_scalar_common_2[0]))
  },
};

static /* final */ const MR_Integer backend_libs__switch_util_scalar_common_3[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_4[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&backend_libs__switch_util_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2)),
    ((MR_Box) (&backend_libs__switch_util__list__pti_list_1__pseudo_2))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&backend_libs__switch_util_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1)),
    ((MR_Box) (&backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1))
  },
};

static /* final */ const MR_Integer backend_libs__switch_util_scalar_common_5[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_6[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&backend_libs__switch_util_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&backend_libs__switch_util_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0))
  },
};

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_7[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0))
  },
};

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_8[1][14] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_is_int_switch_0)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_is_int_switch_0))
  },
};

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_9[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&backend_libs__switch_util_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&backend_libs__switch_util__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__switch_util__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1)),
    ((MR_Box) (&backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1))
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
#include "time.mh"
#include "time.mh"
#include "bitmap.mh"
#include "bitmap.mh"



#line 1841 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1849 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1857 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1865 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1873 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1881 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1890 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1
  }
};

#line 1898 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1906 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1915 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
  }
};

#line 1924 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_2
  }
};

#line 1933 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2
};

#line 1938 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0 = {
  (MR_String) "all_one_soln",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_0,
  NULL,
  NULL,
  NULL
};

#line 1953 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2
  }
};

#line 1962 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_1[2] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 3
};

#line 1968 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_1 = {
  (MR_String) "some_several_solns",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_1,
  NULL,
  NULL,
  NULL
};

#line 1983 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0
};

#line 1988 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_1
};

#line 1993 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_3[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_1
  }
};

#line 2007 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_3[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_1
};

#line 2013 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_3[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2019 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3 = {
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____case_consts_3_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____case_consts_3_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "case_consts",
  {     backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_3 },
  {     backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_3 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_3
};

#line 2036 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2044 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &backend_libs__switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2052 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_several_llds_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2058 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_several_llds_0_0 = {
  (MR_String) "case_consts_several_llds",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_several_llds_0_0,
  NULL,
  NULL,
  NULL
};

#line 2073 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_several_llds_0_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_several_llds_0_0
};

#line 2078 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_several_llds_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_several_llds_0_0
  }
};

#line 2087 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_several_llds_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_several_llds_0_0
};

#line 2092 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_several_llds_0[1] = {
  (MR_Integer) 0
};

#line 2097 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____case_consts_several_llds_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____case_consts_several_llds_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "case_consts_several_llds",
  {     backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_several_llds_0 },
  {     backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_several_llds_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_several_llds_0
};

#line 2114 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_TypeInfo) &backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 2123 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_id_ptags_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__switch_util____Unify____case_id_ptags_map_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____case_id_ptags_map_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "case_id_ptags_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2140 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0 = {
  (MR_String) "is_int_switch",
  (MR_Integer) 0
};

#line 2146 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1 = {
  (MR_String) "is_not_int_switch",
  (MR_Integer) 1
};

#line 2152 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_is_int_switch_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1
};

#line 2158 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_is_int_switch_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1
};

#line 2164 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_is_int_switch_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2170 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_is_int_switch_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__switch_util____Unify____is_int_switch_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____is_int_switch_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "is_int_switch",
  {     backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_is_int_switch_0 },
  {     backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_is_int_switch_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_is_int_switch_0
};

#line 2187 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_0 = {
  (MR_String) "may_not_use_smart_indexing",
  (MR_Integer) 0
};

#line 2193 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_1 = {
  (MR_String) "may_use_smart_indexing",
  (MR_Integer) 1
};

#line 2199 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_may_use_smart_indexing_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_1
};

#line 2205 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_may_use_smart_indexing_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_1
};

#line 2211 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_may_use_smart_indexing_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2217 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_may_use_smart_indexing_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__switch_util____Unify____may_use_smart_indexing_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____may_use_smart_indexing_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "may_use_smart_indexing",
  {     backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_may_use_smart_indexing_0 },
  {     backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_may_use_smart_indexing_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_may_use_smart_indexing_0
};

#line 2234 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_maybe_int_switch_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2241 "backend_libs.switch_util.c"
static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__field_names_maybe_int_switch_info_0_0[3] = {
  (MR_String) "lower_limit",
  (MR_String) "upper_limit",
  (MR_String) "num_values"
};

#line 2248 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0 = {
  (MR_String) "int_switch",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__switch_util__backend_libs__switch_util__field_types_maybe_int_switch_info_0_0,
  backend_libs__switch_util__backend_libs__switch_util__field_names_maybe_int_switch_info_0_0,
  NULL,
  NULL
};

#line 2263 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1 = {
  (MR_String) "not_int_switch",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2278 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1
};

#line 2283 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0
};

#line 2288 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_maybe_int_switch_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1
  }
};

#line 2302 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1
};

#line 2308 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2314 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_maybe_int_switch_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____maybe_int_switch_info_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____maybe_int_switch_info_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "maybe_int_switch_info",
  {     backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0 },
  {     backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_maybe_int_switch_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0
};

#line 2331 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0 = {
  (MR_String) "need_bit_vec_check",
  (MR_Integer) 0
};

#line 2337 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1 = {
  (MR_String) "dont_need_bit_vec_check",
  (MR_Integer) 1
};

#line 2343 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_bit_vec_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1
};

#line 2349 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_bit_vec_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0
};

#line 2355 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_bit_vec_check_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2361 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_bit_vec_check_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__switch_util____Unify____need_bit_vec_check_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____need_bit_vec_check_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "need_bit_vec_check",
  {     backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_bit_vec_check_0 },
  {     backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_bit_vec_check_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_bit_vec_check_0
};

#line 2378 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0 = {
  (MR_String) "need_range_check",
  (MR_Integer) 0
};

#line 2384 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1 = {
  (MR_String) "dont_need_range_check",
  (MR_Integer) 1
};

#line 2390 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_range_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1
};

#line 2396 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_range_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0
};

#line 2402 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_range_check_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2408 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_range_check_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__switch_util____Unify____need_range_check_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____need_range_check_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "need_range_check",
  {     backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_range_check_0 },
  {     backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_range_check_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_range_check_0
};

#line 2425 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2434 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_1_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1
};

#line 2440 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0 = {
  (MR_String) "ptag_case",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_1_0,
  NULL,
  NULL,
  NULL
};

#line 2455 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0
};

#line 2460 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_1_0
  }
};

#line 2469 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0
};

#line 2474 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_1[1] = {
  (MR_Integer) 0
};

#line 2479 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case",
  {     backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_1 },
  {     backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_1
};

#line 2496 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_entry_1_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
};

#line 2502 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0 = {
  (MR_String) "ptag_case_entry",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_entry_1_0,
  NULL,
  NULL,
  NULL
};

#line 2517 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_entry_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0
};

#line 2522 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_entry_1_0
  }
};

#line 2531 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_entry_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0
};

#line 2536 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_entry_1[1] = {
  (MR_Integer) 0
};

#line 2541 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_entry_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_entry_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case_entry",
  {     backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_entry_1 },
  {     backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_entry_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_entry_1
};

#line 2558 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2566 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_group_entry_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
};

#line 2573 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0 = {
  (MR_String) "ptag_case_group_entry",
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_group_entry_1_0,
  NULL,
  NULL,
  NULL
};

#line 2588 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_group_entry_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0
};

#line 2593 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_group_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_group_entry_1_0
  }
};

#line 2602 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_group_entry_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0
};

#line 2607 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_group_entry_1[1] = {
  (MR_Integer) 0
};

#line 2612 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_group_entry_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_group_entry_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case_group_entry",
  {     backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_group_entry_1 },
  {     backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_group_entry_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_group_entry_1
};

#line 2629 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1
  }
};

#line 2637 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_group_list_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_group_list_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case_group_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2654 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2662 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1
  }
};

#line 2670 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_list_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_list_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2687 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_map_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_map_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2704 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1__pseudo_backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1
  }
};

#line 2713 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_rev_map_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_rev_map_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case_rev_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__pti_tree234_2__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1__pseudo_backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2730 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_rev_map_entry_1_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
};

#line 2738 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0 = {
  (MR_String) "ptag_case_rev_map_entry",
  (MR_Integer) 4,
  (MR_Integer) 8,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_rev_map_entry_1_0,
  NULL,
  NULL,
  NULL
};

#line 2753 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_rev_map_entry_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0
};

#line 2758 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_rev_map_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_rev_map_entry_1_0
  }
};

#line 2767 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_rev_map_entry_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0
};

#line 2772 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_rev_map_entry_1[1] = {
  (MR_Integer) 0
};

#line 2777 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case_rev_map_entry",
  {     backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_rev_map_entry_1 },
  {     backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_rev_map_entry_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_rev_map_entry_1
};

#line 2794 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2803 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__switch_util__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0
  }
};

#line 2812 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_count_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_count_map_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_count_map_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_count_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2829 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2837 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_1
};

#line 2842 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0 = {
  (MR_String) "one_soln",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_0,
  NULL,
  NULL,
  NULL
};

#line 2857 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_1
  }
};

#line 2865 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_1[2] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1
};

#line 2871 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1 = {
  (MR_String) "several_solns",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_1,
  NULL,
  NULL,
  NULL
};

#line 2886 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0
};

#line 2891 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1
};

#line 2896 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_soln_consts_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_1
  }
};

#line 2910 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_soln_consts_1[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1
};

#line 2916 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_soln_consts_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2922 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____soln_consts_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____soln_consts_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "soln_consts",
  {     backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_soln_consts_1 },
  {     backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_soln_consts_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_soln_consts_1
};

#line 2939 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2948 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1
  }
};

#line 2956 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_stag_goal_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__switch_util____Unify____stag_goal_list_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____stag_goal_list_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "stag_goal_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2973 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_stag_goal_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__switch_util____Unify____stag_goal_map_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____stag_goal_map_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "stag_goal_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2990 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_string_hash_slot_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2997 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0 = {
  (MR_String) "string_hash_slot",
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__switch_util__backend_libs__switch_util__field_types_string_hash_slot_1_0,
  NULL,
  NULL,
  NULL
};

#line 3012 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0
};

#line 3017 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_string_hash_slot_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0
  }
};

#line 3026 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_string_hash_slot_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0
};

#line 3031 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_string_hash_slot_1[1] = {
  (MR_Integer) 0
};

#line 3036 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____string_hash_slot_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____string_hash_slot_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "string_hash_slot",
  {     backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_string_hash_slot_1 },
  {     backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_string_hash_slot_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_string_hash_slot_1
};

#line 3053 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0 = {
  (MR_String) "atomic_switch",
  (MR_Integer) 0
};

#line 3059 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1 = {
  (MR_String) "string_switch",
  (MR_Integer) 1
};

#line 3065 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2 = {
  (MR_String) "tag_switch",
  (MR_Integer) 2
};

#line 3071 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3 = {
  (MR_String) "float_switch",
  (MR_Integer) 3
};

#line 3077 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_switch_category_0[4] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3
};

#line 3085 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_switch_category_0[4] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2
};

#line 3093 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_switch_category_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 3101 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_switch_category_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__switch_util____Unify____switch_category_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____switch_category_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "switch_category",
  {     backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_switch_category_0 },
  {     backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_switch_category_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_switch_category_0
};

#line 3118 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0 = {
  (MR_String) "keep_first_size",
  (MR_Integer) 0
};

#line 3124 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1 = {
  (MR_String) "allow_doubling",
  (MR_Integer) 1
};

#line 3130 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_table_size_upgrade_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1
};

#line 3136 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_table_size_upgrade_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0
};

#line 3142 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_table_size_upgrade_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3148 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_table_size_upgrade_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__switch_util____Unify____table_size_upgrade_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____table_size_upgrade_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "table_size_upgrade",
  {     backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_table_size_upgrade_0 },
  {     backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_table_size_upgrade_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_table_size_upgrade_0
};

#line 3165 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_3_0_10001(
#line 3168 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3170 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3172 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3174 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 3176 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5)
#line 3178 "backend_libs.switch_util.c"
{
#line 3180 "backend_libs.switch_util.c"
  {
#line 3182 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3185 "backend_libs.switch_util.c"
    {
#line 3187 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____case_consts_3_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4), ((MR_Word) backend_libs__switch_util__wrapper_arg_5));
    }
#line 3190 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3192 "backend_libs.switch_util.c"
  }
#line 3194 "backend_libs.switch_util.c"
}

#line 3197 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_3_0_10001(
#line 3200 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3202 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3204 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3206 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 3208 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 3210 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_6)
#line 3212 "backend_libs.switch_util.c"
{
#line 3214 "backend_libs.switch_util.c"
  {
#line 3216 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3219 "backend_libs.switch_util.c"
    {
#line 3221 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____case_consts_3_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_5), ((MR_Word) backend_libs__switch_util__wrapper_arg_6));
    }
#line 3224 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_4 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3226 "backend_libs.switch_util.c"
  }
#line 3228 "backend_libs.switch_util.c"
}

#line 3231 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_several_llds_0_0_10001(
#line 3234 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3236 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3238 "backend_libs.switch_util.c"
{
#line 3240 "backend_libs.switch_util.c"
  {
#line 3242 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3245 "backend_libs.switch_util.c"
    {
#line 3247 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____case_consts_several_llds_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3250 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3252 "backend_libs.switch_util.c"
  }
#line 3254 "backend_libs.switch_util.c"
}

#line 3257 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_several_llds_0_0_10001(
#line 3260 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3262 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3264 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3266 "backend_libs.switch_util.c"
{
#line 3268 "backend_libs.switch_util.c"
  {
#line 3270 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3273 "backend_libs.switch_util.c"
    {
#line 3275 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____case_consts_several_llds_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3278 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3280 "backend_libs.switch_util.c"
  }
#line 3282 "backend_libs.switch_util.c"
}

#line 3285 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_id_ptags_map_0_0_10001(
#line 3288 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3290 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3292 "backend_libs.switch_util.c"
{
#line 3294 "backend_libs.switch_util.c"
  {
#line 3296 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3299 "backend_libs.switch_util.c"
    {
#line 3301 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____case_id_ptags_map_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3304 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3306 "backend_libs.switch_util.c"
  }
#line 3308 "backend_libs.switch_util.c"
}

#line 3311 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_id_ptags_map_0_0_10001(
#line 3314 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3316 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3318 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3320 "backend_libs.switch_util.c"
{
#line 3322 "backend_libs.switch_util.c"
  {
#line 3324 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3327 "backend_libs.switch_util.c"
    {
#line 3329 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____case_id_ptags_map_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3332 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3334 "backend_libs.switch_util.c"
  }
#line 3336 "backend_libs.switch_util.c"
}

#line 3339 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0_10001(
#line 3342 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3344 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3346 "backend_libs.switch_util.c"
{
#line 3348 "backend_libs.switch_util.c"
  {
#line 3350 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3353 "backend_libs.switch_util.c"
    {
#line 3355 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____is_int_switch_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3358 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3360 "backend_libs.switch_util.c"
  }
#line 3362 "backend_libs.switch_util.c"
}

#line 3365 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0_10001(
#line 3368 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3370 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3372 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3374 "backend_libs.switch_util.c"
{
#line 3376 "backend_libs.switch_util.c"
  {
#line 3378 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3381 "backend_libs.switch_util.c"
    {
#line 3383 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____is_int_switch_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3386 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3388 "backend_libs.switch_util.c"
  }
#line 3390 "backend_libs.switch_util.c"
}

#line 3393 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____may_use_smart_indexing_0_0_10001(
#line 3396 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3398 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3400 "backend_libs.switch_util.c"
{
#line 3402 "backend_libs.switch_util.c"
  {
#line 3404 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3407 "backend_libs.switch_util.c"
    {
#line 3409 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____may_use_smart_indexing_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3412 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3414 "backend_libs.switch_util.c"
  }
#line 3416 "backend_libs.switch_util.c"
}

#line 3419 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____may_use_smart_indexing_0_0_10001(
#line 3422 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3424 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3426 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3428 "backend_libs.switch_util.c"
{
#line 3430 "backend_libs.switch_util.c"
  {
#line 3432 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3435 "backend_libs.switch_util.c"
    {
#line 3437 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____may_use_smart_indexing_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3440 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3442 "backend_libs.switch_util.c"
  }
#line 3444 "backend_libs.switch_util.c"
}

#line 3447 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____maybe_int_switch_info_0_0_10001(
#line 3450 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3452 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3454 "backend_libs.switch_util.c"
{
#line 3456 "backend_libs.switch_util.c"
  {
#line 3458 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3461 "backend_libs.switch_util.c"
    {
#line 3463 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____maybe_int_switch_info_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3466 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3468 "backend_libs.switch_util.c"
  }
#line 3470 "backend_libs.switch_util.c"
}

#line 3473 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____maybe_int_switch_info_0_0_10001(
#line 3476 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3478 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3480 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3482 "backend_libs.switch_util.c"
{
#line 3484 "backend_libs.switch_util.c"
  {
#line 3486 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3489 "backend_libs.switch_util.c"
    {
#line 3491 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____maybe_int_switch_info_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3494 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3496 "backend_libs.switch_util.c"
  }
#line 3498 "backend_libs.switch_util.c"
}

#line 3501 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_bit_vec_check_0_0_10001(
#line 3504 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3506 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3508 "backend_libs.switch_util.c"
{
#line 3510 "backend_libs.switch_util.c"
  {
#line 3512 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3515 "backend_libs.switch_util.c"
    {
#line 3517 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____need_bit_vec_check_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3520 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3522 "backend_libs.switch_util.c"
  }
#line 3524 "backend_libs.switch_util.c"
}

#line 3527 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_bit_vec_check_0_0_10001(
#line 3530 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3532 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3534 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3536 "backend_libs.switch_util.c"
{
#line 3538 "backend_libs.switch_util.c"
  {
#line 3540 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3543 "backend_libs.switch_util.c"
    {
#line 3545 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____need_bit_vec_check_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3548 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3550 "backend_libs.switch_util.c"
  }
#line 3552 "backend_libs.switch_util.c"
}

#line 3555 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_range_check_0_0_10001(
#line 3558 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3560 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3562 "backend_libs.switch_util.c"
{
#line 3564 "backend_libs.switch_util.c"
  {
#line 3566 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3569 "backend_libs.switch_util.c"
    {
#line 3571 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____need_range_check_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3574 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3576 "backend_libs.switch_util.c"
  }
#line 3578 "backend_libs.switch_util.c"
}

#line 3581 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_range_check_0_0_10001(
#line 3584 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3586 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3588 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3590 "backend_libs.switch_util.c"
{
#line 3592 "backend_libs.switch_util.c"
  {
#line 3594 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3597 "backend_libs.switch_util.c"
    {
#line 3599 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____need_range_check_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3602 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3604 "backend_libs.switch_util.c"
  }
#line 3606 "backend_libs.switch_util.c"
}

#line 3609 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_1_0_10001(
#line 3612 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3614 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3616 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3618 "backend_libs.switch_util.c"
{
#line 3620 "backend_libs.switch_util.c"
  {
#line 3622 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3625 "backend_libs.switch_util.c"
    {
#line 3627 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3630 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3632 "backend_libs.switch_util.c"
  }
#line 3634 "backend_libs.switch_util.c"
}

#line 3637 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_1_0_10001(
#line 3640 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3642 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3644 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3646 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3648 "backend_libs.switch_util.c"
{
#line 3650 "backend_libs.switch_util.c"
  {
#line 3652 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3655 "backend_libs.switch_util.c"
    {
#line 3657 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3660 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3662 "backend_libs.switch_util.c"
  }
#line 3664 "backend_libs.switch_util.c"
}

#line 3667 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_entry_1_0_10001(
#line 3670 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3672 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3674 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3676 "backend_libs.switch_util.c"
{
#line 3678 "backend_libs.switch_util.c"
  {
#line 3680 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3683 "backend_libs.switch_util.c"
    {
#line 3685 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3688 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3690 "backend_libs.switch_util.c"
  }
#line 3692 "backend_libs.switch_util.c"
}

#line 3695 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_entry_1_0_10001(
#line 3698 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3700 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3702 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3704 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3706 "backend_libs.switch_util.c"
{
#line 3708 "backend_libs.switch_util.c"
  {
#line 3710 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3713 "backend_libs.switch_util.c"
    {
#line 3715 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3718 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3720 "backend_libs.switch_util.c"
  }
#line 3722 "backend_libs.switch_util.c"
}

#line 3725 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_entry_1_0_10001(
#line 3728 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3730 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3732 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3734 "backend_libs.switch_util.c"
{
#line 3736 "backend_libs.switch_util.c"
  {
#line 3738 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3741 "backend_libs.switch_util.c"
    {
#line 3743 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_group_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3746 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3748 "backend_libs.switch_util.c"
  }
#line 3750 "backend_libs.switch_util.c"
}

#line 3753 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_entry_1_0_10001(
#line 3756 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3758 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3760 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3762 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3764 "backend_libs.switch_util.c"
{
#line 3766 "backend_libs.switch_util.c"
  {
#line 3768 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3771 "backend_libs.switch_util.c"
    {
#line 3773 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_group_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3776 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3778 "backend_libs.switch_util.c"
  }
#line 3780 "backend_libs.switch_util.c"
}

#line 3783 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_list_1_0_10001(
#line 3786 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3788 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3790 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3792 "backend_libs.switch_util.c"
{
#line 3794 "backend_libs.switch_util.c"
  {
#line 3796 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3799 "backend_libs.switch_util.c"
    {
#line 3801 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_group_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3804 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3806 "backend_libs.switch_util.c"
  }
#line 3808 "backend_libs.switch_util.c"
}

#line 3811 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_list_1_0_10001(
#line 3814 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3816 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3818 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3820 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3822 "backend_libs.switch_util.c"
{
#line 3824 "backend_libs.switch_util.c"
  {
#line 3826 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3829 "backend_libs.switch_util.c"
    {
#line 3831 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_group_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3834 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3836 "backend_libs.switch_util.c"
  }
#line 3838 "backend_libs.switch_util.c"
}

#line 3841 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_list_1_0_10001(
#line 3844 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3846 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3848 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3850 "backend_libs.switch_util.c"
{
#line 3852 "backend_libs.switch_util.c"
  {
#line 3854 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3857 "backend_libs.switch_util.c"
    {
#line 3859 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3862 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3864 "backend_libs.switch_util.c"
  }
#line 3866 "backend_libs.switch_util.c"
}

#line 3869 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_list_1_0_10001(
#line 3872 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3874 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3876 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3878 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3880 "backend_libs.switch_util.c"
{
#line 3882 "backend_libs.switch_util.c"
  {
#line 3884 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3887 "backend_libs.switch_util.c"
    {
#line 3889 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3892 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3894 "backend_libs.switch_util.c"
  }
#line 3896 "backend_libs.switch_util.c"
}

#line 3899 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_map_1_0_10001(
#line 3902 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3904 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3906 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3908 "backend_libs.switch_util.c"
{
#line 3910 "backend_libs.switch_util.c"
  {
#line 3912 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3915 "backend_libs.switch_util.c"
    {
#line 3917 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3920 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3922 "backend_libs.switch_util.c"
  }
#line 3924 "backend_libs.switch_util.c"
}

#line 3927 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_map_1_0_10001(
#line 3930 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3932 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3934 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3936 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3938 "backend_libs.switch_util.c"
{
#line 3940 "backend_libs.switch_util.c"
  {
#line 3942 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3945 "backend_libs.switch_util.c"
    {
#line 3947 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3950 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3952 "backend_libs.switch_util.c"
  }
#line 3954 "backend_libs.switch_util.c"
}

#line 3957 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0_10001(
#line 3960 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3962 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3964 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3966 "backend_libs.switch_util.c"
{
#line 3968 "backend_libs.switch_util.c"
  {
#line 3970 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3973 "backend_libs.switch_util.c"
    {
#line 3975 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_rev_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3978 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3980 "backend_libs.switch_util.c"
  }
#line 3982 "backend_libs.switch_util.c"
}

#line 3985 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0_10001(
#line 3988 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3990 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3992 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3994 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3996 "backend_libs.switch_util.c"
{
#line 3998 "backend_libs.switch_util.c"
  {
#line 4000 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4003 "backend_libs.switch_util.c"
    {
#line 4005 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_rev_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4008 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4010 "backend_libs.switch_util.c"
  }
#line 4012 "backend_libs.switch_util.c"
}

#line 4015 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0_10001(
#line 4018 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4020 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4022 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4024 "backend_libs.switch_util.c"
{
#line 4026 "backend_libs.switch_util.c"
  {
#line 4028 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4031 "backend_libs.switch_util.c"
    {
#line 4033 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4036 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4038 "backend_libs.switch_util.c"
  }
#line 4040 "backend_libs.switch_util.c"
}

#line 4043 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0_10001(
#line 4046 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4048 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4050 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4052 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4054 "backend_libs.switch_util.c"
{
#line 4056 "backend_libs.switch_util.c"
  {
#line 4058 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4061 "backend_libs.switch_util.c"
    {
#line 4063 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4066 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4068 "backend_libs.switch_util.c"
  }
#line 4070 "backend_libs.switch_util.c"
}

#line 4073 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_count_map_0_0_10001(
#line 4076 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4078 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 4080 "backend_libs.switch_util.c"
{
#line 4082 "backend_libs.switch_util.c"
  {
#line 4084 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4087 "backend_libs.switch_util.c"
    {
#line 4089 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_count_map_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 4092 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4094 "backend_libs.switch_util.c"
  }
#line 4096 "backend_libs.switch_util.c"
}

#line 4099 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_count_map_0_0_10001(
#line 4102 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 4104 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4106 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4108 "backend_libs.switch_util.c"
{
#line 4110 "backend_libs.switch_util.c"
  {
#line 4112 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4115 "backend_libs.switch_util.c"
    {
#line 4117 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_count_map_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4120 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4122 "backend_libs.switch_util.c"
  }
#line 4124 "backend_libs.switch_util.c"
}

#line 4127 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____soln_consts_1_0_10001(
#line 4130 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4132 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4134 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4136 "backend_libs.switch_util.c"
{
#line 4138 "backend_libs.switch_util.c"
  {
#line 4140 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4143 "backend_libs.switch_util.c"
    {
#line 4145 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____soln_consts_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4148 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4150 "backend_libs.switch_util.c"
  }
#line 4152 "backend_libs.switch_util.c"
}

#line 4155 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____soln_consts_1_0_10001(
#line 4158 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4160 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4162 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4164 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4166 "backend_libs.switch_util.c"
{
#line 4168 "backend_libs.switch_util.c"
  {
#line 4170 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4173 "backend_libs.switch_util.c"
    {
#line 4175 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____soln_consts_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4178 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4180 "backend_libs.switch_util.c"
  }
#line 4182 "backend_libs.switch_util.c"
}

#line 4185 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_list_1_0_10001(
#line 4188 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4190 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4192 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4194 "backend_libs.switch_util.c"
{
#line 4196 "backend_libs.switch_util.c"
  {
#line 4198 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4201 "backend_libs.switch_util.c"
    {
#line 4203 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____stag_goal_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4206 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4208 "backend_libs.switch_util.c"
  }
#line 4210 "backend_libs.switch_util.c"
}

#line 4213 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_list_1_0_10001(
#line 4216 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4218 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4220 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4222 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4224 "backend_libs.switch_util.c"
{
#line 4226 "backend_libs.switch_util.c"
  {
#line 4228 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4231 "backend_libs.switch_util.c"
    {
#line 4233 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____stag_goal_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4236 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4238 "backend_libs.switch_util.c"
  }
#line 4240 "backend_libs.switch_util.c"
}

#line 4243 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_map_1_0_10001(
#line 4246 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4248 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4250 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4252 "backend_libs.switch_util.c"
{
#line 4254 "backend_libs.switch_util.c"
  {
#line 4256 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4259 "backend_libs.switch_util.c"
    {
#line 4261 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____stag_goal_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4264 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4266 "backend_libs.switch_util.c"
  }
#line 4268 "backend_libs.switch_util.c"
}

#line 4271 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_map_1_0_10001(
#line 4274 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4276 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4278 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4280 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4282 "backend_libs.switch_util.c"
{
#line 4284 "backend_libs.switch_util.c"
  {
#line 4286 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4289 "backend_libs.switch_util.c"
    {
#line 4291 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____stag_goal_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4294 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4296 "backend_libs.switch_util.c"
  }
#line 4298 "backend_libs.switch_util.c"
}

#line 4301 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____string_hash_slot_1_0_10001(
#line 4304 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4306 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4308 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4310 "backend_libs.switch_util.c"
{
#line 4312 "backend_libs.switch_util.c"
  {
#line 4314 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4317 "backend_libs.switch_util.c"
    {
#line 4319 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____string_hash_slot_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4322 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4324 "backend_libs.switch_util.c"
  }
#line 4326 "backend_libs.switch_util.c"
}

#line 4329 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____string_hash_slot_1_0_10001(
#line 4332 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4334 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4336 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4338 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4340 "backend_libs.switch_util.c"
{
#line 4342 "backend_libs.switch_util.c"
  {
#line 4344 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4347 "backend_libs.switch_util.c"
    {
#line 4349 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____string_hash_slot_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4352 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4354 "backend_libs.switch_util.c"
  }
#line 4356 "backend_libs.switch_util.c"
}

#line 4359 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____switch_category_0_0_10001(
#line 4362 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4364 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 4366 "backend_libs.switch_util.c"
{
#line 4368 "backend_libs.switch_util.c"
  {
#line 4370 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4373 "backend_libs.switch_util.c"
    {
#line 4375 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____switch_category_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 4378 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4380 "backend_libs.switch_util.c"
  }
#line 4382 "backend_libs.switch_util.c"
}

#line 4385 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____switch_category_0_0_10001(
#line 4388 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 4390 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4392 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4394 "backend_libs.switch_util.c"
{
#line 4396 "backend_libs.switch_util.c"
  {
#line 4398 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4401 "backend_libs.switch_util.c"
    {
#line 4403 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____switch_category_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4406 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4408 "backend_libs.switch_util.c"
  }
#line 4410 "backend_libs.switch_util.c"
}

#line 4413 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____table_size_upgrade_0_0_10001(
#line 4416 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4418 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 4420 "backend_libs.switch_util.c"
{
#line 4422 "backend_libs.switch_util.c"
  {
#line 4424 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4427 "backend_libs.switch_util.c"
    {
#line 4429 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____table_size_upgrade_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 4432 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4434 "backend_libs.switch_util.c"
  }
#line 4436 "backend_libs.switch_util.c"
}

#line 4439 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____table_size_upgrade_0_0_10001(
#line 4442 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 4444 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4446 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4448 "backend_libs.switch_util.c"
{
#line 4450 "backend_libs.switch_util.c"
  {
#line 4452 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4455 "backend_libs.switch_util.c"
    {
#line 4457 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____table_size_upgrade_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4460 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4462 "backend_libs.switch_util.c"
  }
#line 4464 "backend_libs.switch_util.c"
}

#line 1267 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0_1(
#line 1267 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1267 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1267 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1267 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3,
#line 1267 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 1267 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_5)
#line 1267 "switch_util.m"
{
#line 1267 "switch_util.m"
  {
#line 1267 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 1267 "switch_util.m"
    MR_Word backend_libs__switch_util__conv2_STATE_VARIABLE_CaseIdPtagsMap_53;
#line 1267 "switch_util.m"
    MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55;

#line 1267 "switch_util.m"
    {
#line 1267 "switch_util.m"
      backend_libs__switch_util__group_case_by_ptag_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))), (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 5)), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), &backend_libs__switch_util__conv2_STATE_VARIABLE_CaseIdPtagsMap_53, ((MR_Word) backend_libs__switch_util__wrapper_arg_4), &backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55);
    }
#line 1267 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_3 = ((MR_Box) (backend_libs__switch_util__conv2_STATE_VARIABLE_CaseIdPtagsMap_53));
#line 1267 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_5 = ((MR_Box) (backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55));
#line 1267 "switch_util.m"
  }
#line 1267 "switch_util.m"
}

#line 1252 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0(
#line 1252 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_65,
#line 1252 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1252 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1252 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1252 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1252 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1252 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1252 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1252 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1252 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9,
#line 1252 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_10,
#line 1252 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11,
#line 1252 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_12)
#line 1252 "switch_util.m"
{
#line 1259 "switch_util.m"
  while (MR_TRUE)
#line 1259 "switch_util.m"
    {
#line 1259 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1259 "switch_util.m"
      {
#line 1259 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 1259 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1259 "switch_util.m"
          {
#line 1260 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_12 = backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11;
#line 1260 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_10 = backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9;
#line 1260 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_StateC_8 = backend_libs__switch_util__STATE_VARIABLE_StateC_0_7;
#line 1260 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_StateB_6 = backend_libs__switch_util__STATE_VARIABLE_StateB_0_5;
#line 1260 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_StateA_4 = backend_libs__switch_util__STATE_VARIABLE_StateA_0_3;
#line 1259 "switch_util.m"
          }
#line 1259 "switch_util.m"
        else
#line 1262 "switch_util.m"
          {
#line 1262 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_78_78;
#line 1262 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_80_80;
#line 1262 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCase_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1262 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCases_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1262 "switch_util.m"
            MR_Word backend_libs__switch_util__MainTaggedConsId_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 0)));
#line 1262 "switch_util.m"
            MR_Word backend_libs__switch_util__OtherConsIds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 1)));
#line 1262 "switch_util.m"
            MR_Word backend_libs__switch_util__CaseId_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 2)));
#line 1262 "switch_util.m"
            MR_Box backend_libs__switch_util__CaseRep_41;
#line 1262 "switch_util.m"
            MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_52_52;
#line 1262 "switch_util.m"
            MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_53_53;
#line 1262 "switch_util.m"
            MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_54_54;
#line 1262 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_55_55;
#line 1262 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_56_56;
#line 1262 "switch_util.m"
            MR_Word backend_libs__switch_util__V_57_57;
#line 1262 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_58_58;
#line 1262 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_59_59;
#line 1263 "switch_util.m"
            MR_Word backend_libs__switch_util___Goal_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 3)));
#line 1264 "switch_util.m"
            void MR_CALL (* backend_libs__switch_util__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RepresentCase_2, (MR_Integer) 1)));
#line 1267 "switch_util.m"
            MR_Box backend_libs__switch_util__conv4_STATE_VARIABLE_CaseNumPtagsMap_58_58;
#line 1267 "switch_util.m"
            MR_Box backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_59_59;

#line 1264 "switch_util.m"
            {
#line 1264 "switch_util.m"
              backend_libs__switch_util__func_0(((MR_Box) backend_libs__switch_util__RepresentCase_2), ((MR_Box) (backend_libs__switch_util__TaggedCase_29)), &backend_libs__switch_util__CaseRep_41, backend_libs__switch_util__STATE_VARIABLE_StateA_0_3, &backend_libs__switch_util__STATE_VARIABLE_StateA_52_52, backend_libs__switch_util__STATE_VARIABLE_StateB_0_5, &backend_libs__switch_util__STATE_VARIABLE_StateB_53_53, backend_libs__switch_util__STATE_VARIABLE_StateC_0_7, &backend_libs__switch_util__STATE_VARIABLE_StateC_54_54);
            }
#line 1265 "switch_util.m"
            {
#line 1265 "switch_util.m"
              backend_libs__switch_util__group_case_by_ptag_7_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_65, backend_libs__switch_util__CaseId_39, backend_libs__switch_util__CaseRep_41, backend_libs__switch_util__MainTaggedConsId_37, backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9, &backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_55_55, backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11, &backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_56_56);
            }
#line 1267 "switch_util.m"
            {
#line 1267 "switch_util.m"
              backend_libs__switch_util__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1267 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_9[0]));
#line 1267 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0_1));
#line 1267 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1267 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_65));
#line 1267 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 4) = ((MR_Box) (backend_libs__switch_util__CaseId_39));
#line 1267 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 5) = backend_libs__switch_util__CaseRep_41;
#line 1267 "switch_util.m"
            }
#line 4638 "backend_libs.switch_util.c"
            {
#line 4640 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4642 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_78_78, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 4644 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_78_78, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_65));
#line 4646 "backend_libs.switch_util.c"
            }
#line 4648 "backend_libs.switch_util.c"
            {
#line 4650 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4652 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_80_80, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 4654 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_80_80, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 4656 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_80_80, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_78_78));
#line 4658 "backend_libs.switch_util.c"
            }
#line 1267 "switch_util.m"
            {
#line 1267 "switch_util.m"
              mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &backend_libs__switch_util_scalar_common_2[1], backend_libs__switch_util__TypeInfo_80_80, backend_libs__switch_util__V_57_57, backend_libs__switch_util__OtherConsIds_38, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_55_55)), &backend_libs__switch_util__conv4_STATE_VARIABLE_CaseNumPtagsMap_58_58, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_56_56)), &backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_59_59);
            }
#line 1267 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_58_58 = ((MR_Word) backend_libs__switch_util__conv4_STATE_VARIABLE_CaseNumPtagsMap_58_58);
#line 1267 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_59_59 = ((MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_59_59);
#line 1269 "switch_util.m"
            /* direct tailcall eliminated */
#line 1269 "switch_util.m"
            {
#line 1269 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__TaggedCases_30;
#line 1269 "switch_util.m"
              MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0__tmp_copy_3 = backend_libs__switch_util__STATE_VARIABLE_StateA_52_52;
#line 1269 "switch_util.m"
              MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0__tmp_copy_5 = backend_libs__switch_util__STATE_VARIABLE_StateB_53_53;
#line 1269 "switch_util.m"
              MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0__tmp_copy_7 = backend_libs__switch_util__STATE_VARIABLE_StateC_54_54;
#line 1269 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0__tmp_copy_9 = backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_58_58;
#line 1269 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0__tmp_copy_11 = backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_59_59;

#line 1269 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11 = backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0__tmp_copy_11;
#line 1269 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9 = backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0__tmp_copy_9;
#line 1269 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_StateC_0_7 = backend_libs__switch_util__STATE_VARIABLE_StateC_0__tmp_copy_7;
#line 1269 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_StateB_0_5 = backend_libs__switch_util__STATE_VARIABLE_StateB_0__tmp_copy_5;
#line 1269 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_StateA_0_3 = backend_libs__switch_util__STATE_VARIABLE_StateA_0__tmp_copy_3;
#line 1269 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 1269 "switch_util.m"
            }
#line 1269 "switch_util.m"
            continue;
#line 1262 "switch_util.m"
          }
#line 1259 "switch_util.m"
      }
#line 1259 "switch_util.m"
      break;
#line 1259 "switch_util.m"
    }
#line 1252 "switch_util.m"
}

#line 1118 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0_1(
#line 1118 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1118 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1118 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1118 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3)
#line 1118 "switch_util.m"
{
#line 1118 "switch_util.m"
  {
#line 1118 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 1118 "switch_util.m"
    MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_UnsortedTable_13;

#line 1118 "switch_util.m"
    {
#line 1118 "switch_util.m"
      backend_libs__switch_util__add_string_binary_entry_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4)), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), &backend_libs__switch_util__conv1_STATE_VARIABLE_UnsortedTable_13);
    }
#line 1118 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_3 = ((MR_Box) (backend_libs__switch_util__conv1_STATE_VARIABLE_UnsortedTable_13));
#line 1118 "switch_util.m"
  }
#line 1118 "switch_util.m"
}

#line 1104 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(
#line 1104 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_54,
#line 1104 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1104 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1104 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1104 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1104 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1104 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1104 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1104 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1104 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9,
#line 1104 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10)
#line 1104 "switch_util.m"
{
#line 1110 "switch_util.m"
  {
#line 1110 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 1110 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1110 "switch_util.m"
      {
#line 1110 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10 = backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9;
#line 1110 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_StateC_8 = backend_libs__switch_util__STATE_VARIABLE_StateC_0_7;
#line 1110 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_StateB_6 = backend_libs__switch_util__STATE_VARIABLE_StateB_0_5;
#line 1110 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_StateA_4 = backend_libs__switch_util__STATE_VARIABLE_StateA_0_3;
#line 1110 "switch_util.m"
      }
#line 1110 "switch_util.m"
    else
#line 1112 "switch_util.m"
      {
#line 1112 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_64_64;
#line 1112 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_66_66;
#line 1112 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCase_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1112 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCases_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1112 "switch_util.m"
        MR_Box backend_libs__switch_util__CaseRep_31;
#line 1112 "switch_util.m"
        MR_Word backend_libs__switch_util__MainTaggedConsId_32;
#line 1112 "switch_util.m"
        MR_Word backend_libs__switch_util__OtherTaggedConsIds_33;
#line 1112 "switch_util.m"
        MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_44_44;
#line 1112 "switch_util.m"
        MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_45_45;
#line 1112 "switch_util.m"
        MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_46_46;
#line 1112 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_47_47;
#line 1112 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_51_51;
#line 1112 "switch_util.m"
        MR_Word backend_libs__switch_util__V_52_52;
#line 1115 "switch_util.m"
        void MR_CALL (* backend_libs__switch_util__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 1116 "switch_util.m"
        MR_Word backend_libs__switch_util__V_34_34;
#line 1116 "switch_util.m"
        MR_Word backend_libs__switch_util__V_35_35;
#line 1118 "switch_util.m"
        MR_Box backend_libs__switch_util__conv2_STATE_VARIABLE_UnsortedTable_10;

#line 1113 "switch_util.m"
        {
#line 1113 "switch_util.m"
          backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_54, backend_libs__switch_util__TaggedCases_25, backend_libs__switch_util__RepresentCase_2, backend_libs__switch_util__STATE_VARIABLE_StateA_0_3, &backend_libs__switch_util__STATE_VARIABLE_StateA_44_44, backend_libs__switch_util__STATE_VARIABLE_StateB_0_5, &backend_libs__switch_util__STATE_VARIABLE_StateB_45_45, backend_libs__switch_util__STATE_VARIABLE_StateC_0_7, &backend_libs__switch_util__STATE_VARIABLE_StateC_46_46, backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9, &backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_47_47);
        }
#line 1115 "switch_util.m"
        backend_libs__switch_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RepresentCase_2, (MR_Integer) 1)));
#line 1115 "switch_util.m"
        {
#line 1115 "switch_util.m"
          backend_libs__switch_util__func_0(((MR_Box) backend_libs__switch_util__RepresentCase_2), ((MR_Box) (backend_libs__switch_util__TaggedCase_24)), &backend_libs__switch_util__CaseRep_31, backend_libs__switch_util__STATE_VARIABLE_StateA_44_44, backend_libs__switch_util__STATE_VARIABLE_StateA_4, backend_libs__switch_util__STATE_VARIABLE_StateB_45_45, backend_libs__switch_util__STATE_VARIABLE_StateB_6, backend_libs__switch_util__STATE_VARIABLE_StateC_46_46, backend_libs__switch_util__STATE_VARIABLE_StateC_8);
        }
#line 1116 "switch_util.m"
        backend_libs__switch_util__MainTaggedConsId_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 0)));
#line 1116 "switch_util.m"
        backend_libs__switch_util__OtherTaggedConsIds_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 1)));
#line 1116 "switch_util.m"
        backend_libs__switch_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 2)));
#line 1116 "switch_util.m"
        backend_libs__switch_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 3)));
#line 1117 "switch_util.m"
        {
#line 1117 "switch_util.m"
          backend_libs__switch_util__add_string_binary_entry_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_54, backend_libs__switch_util__CaseRep_31, backend_libs__switch_util__MainTaggedConsId_32, backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_47_47, &backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_51_51);
        }
#line 1118 "switch_util.m"
        {
#line 1118 "switch_util.m"
          backend_libs__switch_util__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_4[1]));
#line 1118 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0_1));
#line 1118 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1118 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_54));
#line 1118 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 4) = backend_libs__switch_util__CaseRep_31;
#line 1118 "switch_util.m"
        }
#line 4871 "backend_libs.switch_util.c"
        {
#line 4873 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4875 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_64_64, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 4877 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_64_64, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 4879 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_64_64, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_54));
#line 4881 "backend_libs.switch_util.c"
        }
#line 4883 "backend_libs.switch_util.c"
        {
#line 4885 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4887 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_66_66, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4889 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_66_66, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_64_64));
#line 4891 "backend_libs.switch_util.c"
        }
#line 1118 "switch_util.m"
        {
#line 1118 "switch_util.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__TypeInfo_66_66, backend_libs__switch_util__V_52_52, backend_libs__switch_util__OtherTaggedConsIds_33, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_51_51)), &backend_libs__switch_util__conv2_STATE_VARIABLE_UnsortedTable_10);
        }
#line 1118 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10 = ((MR_Word) backend_libs__switch_util__conv2_STATE_VARIABLE_UnsortedTable_10);
#line 1112 "switch_util.m"
      }
#line 1110 "switch_util.m"
  }
#line 1104 "switch_util.m"
}

#line 793 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_115_111_108_110_95_99_111_110_115_116_115_95_116_111_95_111_110_101_95_115_111_108_110_95_95_91_49_44_32_51_93_95_48_3_p_0(
#line 793 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_8,
#line 793 "switch_util.m"
  MR_Word backend_libs__switch_util__Solns_5,
#line 793 "switch_util.m"
  MR_Word * backend_libs__switch_util__Values_6)
#line 793 "switch_util.m"
{
#line 797 "switch_util.m"
  {
#line 797 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__Solns_5)) == (MR_mktag((MR_Integer) 0)));

#line 797 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 797 "switch_util.m"
      *backend_libs__switch_util__Values_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Solns_5, (MR_Integer) 0)));
#line 797 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 797 "switch_util.m"
  }
#line 793 "switch_util.m"
}

#line 454 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0_1(
#line 454 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 454 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 454 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 454 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 454 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 454 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 454 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_6,
#line 454 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_7,
#line 454 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_8,
#line 454 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_9,
#line 454 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_10)
#line 454 "switch_util.m"
{
#line 454 "switch_util.m"
  {
#line 454 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 454 "switch_util.m"
    MR_Word backend_libs__switch_util__conv4_TaggedConsId_14;
#line 454 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22;
#line 454 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24;
#line 454 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26;
#line 454 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28;

#line 454 "switch_util.m"
    {
#line 454 "switch_util.m"
      backend_libs__switch_util__tag_cons_id_in_int_switch_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv4_TaggedConsId_14, ((MR_Integer) backend_libs__switch_util__wrapper_arg_3), &backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22, ((MR_Integer) backend_libs__switch_util__wrapper_arg_5), &backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24, ((MR_Integer) backend_libs__switch_util__wrapper_arg_7), &backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26, ((MR_Word) backend_libs__switch_util__wrapper_arg_9), &backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28);
    }
#line 454 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv4_TaggedConsId_14));
#line 454 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_4 = ((MR_Box) (backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22));
#line 454 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_6 = ((MR_Box) (backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24));
#line 454 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_8 = ((MR_Box) (backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26));
#line 454 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_10 = ((MR_Box) (backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28));
#line 454 "switch_util.m"
  }
#line 454 "switch_util.m"
}

#line 442 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0(
#line 442 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_1,
#line 442 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_3,
#line 442 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 442 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__5_5,
#line 442 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_6,
#line 442 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LowerLimit_7,
#line 442 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_8,
#line 442 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_UpperLimit_9,
#line 442 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_0_10,
#line 442 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumValues_11,
#line 442 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_12,
#line 442 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_13)
#line 442 "switch_util.m"
{
#line 446 "switch_util.m"
  {
#line 446 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 446 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 446 "switch_util.m"
      {
#line 446 "switch_util.m"
        *backend_libs__switch_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 447 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_13 = backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_12;
#line 447 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumValues_11 = backend_libs__switch_util__STATE_VARIABLE_NumValues_0_10;
#line 446 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_UpperLimit_9 = backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_8;
#line 446 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_LowerLimit_7 = backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_6;
#line 446 "switch_util.m"
      }
#line 446 "switch_util.m"
    else
#line 450 "switch_util.m"
      {
#line 450 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_81_81;
#line 450 "switch_util.m"
        MR_Word backend_libs__switch_util__Case_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__4_4, (MR_Integer) 0)));
#line 450 "switch_util.m"
        MR_Word backend_libs__switch_util__Cases_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__4_4, (MR_Integer) 1)));
#line 450 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCase_34;
#line 450 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCases_35;
#line 450 "switch_util.m"
        MR_Word backend_libs__switch_util__MainConsId_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_32, (MR_Integer) 0)));
#line 450 "switch_util.m"
        MR_Word backend_libs__switch_util__OtherConsIds_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_32, (MR_Integer) 1)));
#line 450 "switch_util.m"
        MR_Word backend_libs__switch_util__Goal_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_32, (MR_Integer) 2)));
#line 450 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedMainConsId_43;
#line 450 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedOtherConsIds_44;
#line 450 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_53_53;
#line 450 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_54_54;
#line 450 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_55_55;
#line 450 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_56_56;
#line 450 "switch_util.m"
        MR_Word backend_libs__switch_util__V_57_57;
#line 450 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_58_58;
#line 450 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_59_59;
#line 450 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_60_60;
#line 450 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_61_61;
#line 450 "switch_util.m"
        MR_Word backend_libs__switch_util__V_62_62;
#line 450 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_63_63;
#line 454 "switch_util.m"
        MR_Box backend_libs__switch_util__conv8_STATE_VARIABLE_LowerLimit_58_58;
#line 454 "switch_util.m"
        MR_Box backend_libs__switch_util__conv7_STATE_VARIABLE_UpperLimit_59_59;
#line 454 "switch_util.m"
        MR_Box backend_libs__switch_util__conv6_STATE_VARIABLE_NumValues_60_60;
#line 454 "switch_util.m"
        MR_Box backend_libs__switch_util__conv5_STATE_VARIABLE_IsIntSwitch_61_61;

#line 452 "switch_util.m"
        {
#line 452 "switch_util.m"
          backend_libs__switch_util__tag_cons_id_in_int_switch_11_p_0(backend_libs__switch_util__ModuleInfo_1, backend_libs__switch_util__MainConsId_40, &backend_libs__switch_util__TaggedMainConsId_43, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_6, &backend_libs__switch_util__STATE_VARIABLE_LowerLimit_53_53, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_8, &backend_libs__switch_util__STATE_VARIABLE_UpperLimit_54_54, backend_libs__switch_util__STATE_VARIABLE_NumValues_0_10, &backend_libs__switch_util__STATE_VARIABLE_NumValues_55_55, backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_12, &backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_56_56);
        }
#line 454 "switch_util.m"
        {
#line 454 "switch_util.m"
          backend_libs__switch_util__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 454 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_8[0]));
#line 454 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0_1));
#line 454 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 454 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 3) = ((MR_Box) (backend_libs__switch_util__ModuleInfo_1));
#line 454 "switch_util.m"
        }
#line 5120 "backend_libs.switch_util.c"
        backend_libs__switch_util__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 454 "switch_util.m"
        {
#line 454 "switch_util.m"
          mercury__list__map_foldl4_11_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__TypeCtorInfo_81_81, backend_libs__switch_util__TypeCtorInfo_81_81, backend_libs__switch_util__TypeCtorInfo_81_81, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_is_int_switch_0, backend_libs__switch_util__V_57_57, backend_libs__switch_util__OtherConsIds_41, &backend_libs__switch_util__TaggedOtherConsIds_44, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_LowerLimit_53_53)), &backend_libs__switch_util__conv8_STATE_VARIABLE_LowerLimit_58_58, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_UpperLimit_54_54)), &backend_libs__switch_util__conv7_STATE_VARIABLE_UpperLimit_59_59, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_NumValues_55_55)), &backend_libs__switch_util__conv6_STATE_VARIABLE_NumValues_60_60, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_56_56)), &backend_libs__switch_util__conv5_STATE_VARIABLE_IsIntSwitch_61_61);
        }
#line 454 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_LowerLimit_58_58 = ((MR_Integer) backend_libs__switch_util__conv8_STATE_VARIABLE_LowerLimit_58_58);
#line 454 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_UpperLimit_59_59 = ((MR_Integer) backend_libs__switch_util__conv7_STATE_VARIABLE_UpperLimit_59_59);
#line 454 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_NumValues_60_60 = ((MR_Integer) backend_libs__switch_util__conv6_STATE_VARIABLE_NumValues_60_60);
#line 454 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_61_61 = ((MR_Word) backend_libs__switch_util__conv5_STATE_VARIABLE_IsIntSwitch_61_61);
#line 458 "switch_util.m"
        backend_libs__switch_util__V_62_62 = (MR_Word) backend_libs__switch_util__CaseNum_3;
#line 457 "switch_util.m"
        {
#line 457 "switch_util.m"
          backend_libs__switch_util__TaggedCase_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 457 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 0) = ((MR_Box) (backend_libs__switch_util__TaggedMainConsId_43));
#line 457 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 1) = ((MR_Box) (backend_libs__switch_util__TaggedOtherConsIds_44));
#line 457 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 2) = ((MR_Box) (backend_libs__switch_util__V_62_62));
#line 457 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 3) = ((MR_Box) (backend_libs__switch_util__Goal_42));
#line 457 "switch_util.m"
        }
#line 459 "switch_util.m"
        backend_libs__switch_util__V_63_63 = (backend_libs__switch_util__CaseNum_3 + (MR_Integer) 1);
#line 459 "switch_util.m"
        {
#line 459 "switch_util.m"
          backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0(backend_libs__switch_util__ModuleInfo_1, backend_libs__switch_util__V_63_63, backend_libs__switch_util__Cases_33, &backend_libs__switch_util__TaggedCases_35, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_58_58, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_7, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_59_59, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_9, backend_libs__switch_util__STATE_VARIABLE_NumValues_60_60, backend_libs__switch_util__STATE_VARIABLE_NumValues_11, backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_61_61, backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_13);
        }
#line 449 "switch_util.m"
        {
#line 449 "switch_util.m"
          MR_Word base;
#line 449 "switch_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "switch_util.m"
          *backend_libs__switch_util__HeadVar__5_5 = base;
#line 449 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__TaggedCase_34));
#line 449 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__TaggedCases_35));
#line 449 "switch_util.m"
        }
#line 450 "switch_util.m"
      }
#line 446 "switch_util.m"
  }
#line 442 "switch_util.m"
}

#line 436 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0_1(
#line 436 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 436 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 436 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2)
#line 436 "switch_util.m"
{
#line 436 "switch_util.m"
  {
#line 436 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 436 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_TaggedConsId_6;

#line 436 "switch_util.m"
    {
#line 436 "switch_util.m"
      backend_libs__switch_util__tag_cons_id_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_TaggedConsId_6);
    }
#line 436 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_TaggedConsId_6));
#line 436 "switch_util.m"
  }
#line 436 "switch_util.m"
}

#line 428 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(
#line 428 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_1,
#line 428 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_3,
#line 428 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 428 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__5_5)
#line 428 "switch_util.m"
{
#line 431 "switch_util.m"
  {
#line 431 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 431 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "switch_util.m"
      *backend_libs__switch_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 431 "switch_util.m"
    else
#line 433 "switch_util.m"
      {
#line 433 "switch_util.m"
        MR_Word backend_libs__switch_util__Case_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__4_4, (MR_Integer) 0)));
#line 433 "switch_util.m"
        MR_Word backend_libs__switch_util__Cases_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__4_4, (MR_Integer) 1)));
#line 433 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCase_14;
#line 433 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCases_15;
#line 433 "switch_util.m"
        MR_Word backend_libs__switch_util__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_12, (MR_Integer) 0)));
#line 433 "switch_util.m"
        MR_Word backend_libs__switch_util__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_12, (MR_Integer) 1)));
#line 433 "switch_util.m"
        MR_Word backend_libs__switch_util__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_12, (MR_Integer) 2)));
#line 433 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedMainConsId_19;
#line 433 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedOtherConsIds_20;
#line 433 "switch_util.m"
        MR_Word backend_libs__switch_util__V_21_21;
#line 433 "switch_util.m"
        MR_Word backend_libs__switch_util__V_22_22;
#line 433 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_23_23;
#line 433 "switch_util.m"
        MR_Word backend_libs__switch_util__ConsTag_32;

#line 466 "switch_util.m"
        {
#line 466 "switch_util.m"
          backend_libs__switch_util__ConsTag_32 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(backend_libs__switch_util__ModuleInfo_1, backend_libs__switch_util__MainConsId_16);
        }
#line 467 "switch_util.m"
        {
#line 467 "switch_util.m"
          backend_libs__switch_util__TaggedMainConsId_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 467 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedMainConsId_19, 0) = ((MR_Box) (backend_libs__switch_util__MainConsId_16));
#line 467 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedMainConsId_19, 1) = ((MR_Box) (backend_libs__switch_util__ConsTag_32));
#line 467 "switch_util.m"
        }
#line 436 "switch_util.m"
        {
#line 436 "switch_util.m"
          backend_libs__switch_util__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 436 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_21_21, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_6[2]));
#line 436 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_21_21, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0_1));
#line 436 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 436 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_21_21, 3) = ((MR_Box) (backend_libs__switch_util__ModuleInfo_1));
#line 436 "switch_util.m"
        }
#line 436 "switch_util.m"
        {
#line 436 "switch_util.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__V_21_21, backend_libs__switch_util__OtherConsIds_17, &backend_libs__switch_util__TaggedOtherConsIds_20);
        }
#line 438 "switch_util.m"
        backend_libs__switch_util__V_22_22 = (MR_Word) backend_libs__switch_util__CaseNum_3;
#line 437 "switch_util.m"
        {
#line 437 "switch_util.m"
          backend_libs__switch_util__TaggedCase_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 437 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 0) = ((MR_Box) (backend_libs__switch_util__TaggedMainConsId_19));
#line 437 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 1) = ((MR_Box) (backend_libs__switch_util__TaggedOtherConsIds_20));
#line 437 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 2) = ((MR_Box) (backend_libs__switch_util__V_22_22));
#line 437 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 3) = ((MR_Box) (backend_libs__switch_util__Goal_18));
#line 437 "switch_util.m"
        }
#line 439 "switch_util.m"
        backend_libs__switch_util__V_23_23 = (backend_libs__switch_util__CaseNum_3 + (MR_Integer) 1);
#line 439 "switch_util.m"
        {
#line 439 "switch_util.m"
          backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(backend_libs__switch_util__ModuleInfo_1, backend_libs__switch_util__V_23_23, backend_libs__switch_util__Cases_13, &backend_libs__switch_util__TaggedCases_15);
        }
#line 433 "switch_util.m"
        {
#line 433 "switch_util.m"
          MR_Word base;
#line 433 "switch_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "switch_util.m"
          *backend_libs__switch_util__HeadVar__5_5 = base;
#line 433 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__TaggedCase_14));
#line 433 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__TaggedCases_15));
#line 433 "switch_util.m"
        }
#line 433 "switch_util.m"
      }
#line 431 "switch_util.m"
  }
#line 428 "switch_util.m"
}

#line 421 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_2(
#line 421 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 421 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 421 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2)
#line 421 "switch_util.m"
{
#line 421 "switch_util.m"
  {
#line 421 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 421 "switch_util.m"
    MR_Word backend_libs__switch_util__conv9_TaggedConsId_6;

#line 421 "switch_util.m"
    {
#line 421 "switch_util.m"
      backend_libs__switch_util__tag_cons_id_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv9_TaggedConsId_6);
    }
#line 421 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv9_TaggedConsId_6));
#line 421 "switch_util.m"
  }
#line 421 "switch_util.m"
}

#line 402 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_1(
#line 402 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 402 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 402 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 402 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 402 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 402 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 402 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_6,
#line 402 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_7,
#line 402 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_8,
#line 402 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_9,
#line 402 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_10)
#line 402 "switch_util.m"
{
#line 402 "switch_util.m"
  {
#line 402 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 402 "switch_util.m"
    MR_Word backend_libs__switch_util__conv4_TaggedConsId_14;
#line 402 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22;
#line 402 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24;
#line 402 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26;
#line 402 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28;

#line 402 "switch_util.m"
    {
#line 402 "switch_util.m"
      backend_libs__switch_util__tag_cons_id_in_int_switch_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv4_TaggedConsId_14, ((MR_Integer) backend_libs__switch_util__wrapper_arg_3), &backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22, ((MR_Integer) backend_libs__switch_util__wrapper_arg_5), &backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24, ((MR_Integer) backend_libs__switch_util__wrapper_arg_7), &backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26, ((MR_Word) backend_libs__switch_util__wrapper_arg_9), &backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28);
    }
#line 402 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv4_TaggedConsId_14));
#line 402 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_4 = ((MR_Box) (backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22));
#line 402 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_6 = ((MR_Box) (backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24));
#line 402 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_8 = ((MR_Box) (backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26));
#line 402 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_10 = ((MR_Box) (backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28));
#line 402 "switch_util.m"
  }
#line 402 "switch_util.m"
}

#line 62 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0(
#line 62 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 62 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3,
#line 62 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__4_4,
#line 62 "switch_util.m"
  MR_Word * backend_libs__switch_util__MaybeIntSwitchLimits_5)
#line 62 "switch_util.m"
{
#line 394 "switch_util.m"
  {
#line 394 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 394 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "switch_util.m"
      {
#line 394 "switch_util.m"
        *backend_libs__switch_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 395 "switch_util.m"
        {
#line 395 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.tag_cases\'/5", (MR_String) "no cases");
#line 395 "switch_util.m"
          return;
        }
#line 394 "switch_util.m"
      }
#line 394 "switch_util.m"
    else
#line 397 "switch_util.m"
      {
#line 397 "switch_util.m"
        MR_Word backend_libs__switch_util__Case_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 397 "switch_util.m"
        MR_Word backend_libs__switch_util__Cases_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 397 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCase_16;
#line 397 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCases_17;
#line 397 "switch_util.m"
        MR_Word backend_libs__switch_util__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_14, (MR_Integer) 0)));
#line 397 "switch_util.m"
        MR_Word backend_libs__switch_util__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_14, (MR_Integer) 1)));
#line 397 "switch_util.m"
        MR_Word backend_libs__switch_util__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_14, (MR_Integer) 2)));
#line 397 "switch_util.m"
        MR_Word backend_libs__switch_util__MainConsTag_22;
#line 397 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedMainConsId_23;
#line 420 "switch_util.m"
        MR_Integer backend_libs__switch_util__IntTag_24;

#line 399 "switch_util.m"
        {
#line 399 "switch_util.m"
          backend_libs__switch_util__MainConsTag_22 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__MainConsId_19);
        }
#line 400 "switch_util.m"
        {
#line 400 "switch_util.m"
          backend_libs__switch_util__TaggedMainConsId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 400 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedMainConsId_23, 0) = ((MR_Box) (backend_libs__switch_util__MainConsId_19));
#line 400 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedMainConsId_23, 1) = ((MR_Box) (backend_libs__switch_util__MainConsTag_22));
#line 400 "switch_util.m"
        }
#line 401 "switch_util.m"
        backend_libs__switch_util__succeeded = ((((MR_tag((MR_Word) backend_libs__switch_util__MainConsTag_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__MainConsTag_22, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 401 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 401 "switch_util.m"
          {
#line 401 "switch_util.m"
            backend_libs__switch_util__IntTag_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__MainConsTag_22, (MR_Integer) 1)));
#line 405 "switch_util.m"
            {
#line 405 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeCtorInfo_58_58;
#line 405 "switch_util.m"
              MR_Word backend_libs__switch_util__TaggedOtherConsIds_25;
#line 405 "switch_util.m"
              MR_Integer backend_libs__switch_util__LowerLimit1_26;
#line 405 "switch_util.m"
              MR_Integer backend_libs__switch_util__UpperLimit1_27;
#line 405 "switch_util.m"
              MR_Integer backend_libs__switch_util__NumValues1_28;
#line 405 "switch_util.m"
              MR_Word backend_libs__switch_util__IsIntSwitch1_29;
#line 405 "switch_util.m"
              MR_Integer backend_libs__switch_util__LowerLimit_30;
#line 405 "switch_util.m"
              MR_Integer backend_libs__switch_util__UpperLimit_31;
#line 405 "switch_util.m"
              MR_Integer backend_libs__switch_util__NumValues_32;
#line 405 "switch_util.m"
              MR_Word backend_libs__switch_util__IsIntSwitch_33;
#line 405 "switch_util.m"
              MR_Word backend_libs__switch_util__V_34_34;
#line 402 "switch_util.m"
              MR_Box backend_libs__switch_util__conv8_LowerLimit1_26;
#line 402 "switch_util.m"
              MR_Box backend_libs__switch_util__conv7_UpperLimit1_27;
#line 402 "switch_util.m"
              MR_Box backend_libs__switch_util__conv6_NumValues1_28;
#line 402 "switch_util.m"
              MR_Box backend_libs__switch_util__conv5_IsIntSwitch1_29;

#line 402 "switch_util.m"
              {
#line 402 "switch_util.m"
                backend_libs__switch_util__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 402 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_8[0]));
#line 402 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_1));
#line 402 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 402 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 3) = ((MR_Box) (backend_libs__switch_util__HeadVar__1_1));
#line 402 "switch_util.m"
              }
#line 5560 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 402 "switch_util.m"
              {
#line 402 "switch_util.m"
                mercury__list__map_foldl4_11_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__TypeCtorInfo_58_58, backend_libs__switch_util__TypeCtorInfo_58_58, backend_libs__switch_util__TypeCtorInfo_58_58, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_is_int_switch_0, backend_libs__switch_util__V_34_34, backend_libs__switch_util__OtherConsIds_20, &backend_libs__switch_util__TaggedOtherConsIds_25, ((MR_Box) (backend_libs__switch_util__IntTag_24)), &backend_libs__switch_util__conv8_LowerLimit1_26, ((MR_Box) (backend_libs__switch_util__IntTag_24)), &backend_libs__switch_util__conv7_UpperLimit1_27, ((MR_Box) ((MR_Integer) 1)), &backend_libs__switch_util__conv6_NumValues1_28, ((MR_Box) ((MR_Integer) 0)), &backend_libs__switch_util__conv5_IsIntSwitch1_29);
              }
#line 402 "switch_util.m"
              backend_libs__switch_util__LowerLimit1_26 = ((MR_Integer) backend_libs__switch_util__conv8_LowerLimit1_26);
#line 402 "switch_util.m"
              backend_libs__switch_util__UpperLimit1_27 = ((MR_Integer) backend_libs__switch_util__conv7_UpperLimit1_27);
#line 402 "switch_util.m"
              backend_libs__switch_util__NumValues1_28 = ((MR_Integer) backend_libs__switch_util__conv6_NumValues1_28);
#line 402 "switch_util.m"
              backend_libs__switch_util__IsIntSwitch1_29 = ((MR_Word) backend_libs__switch_util__conv5_IsIntSwitch1_29);
#line 406 "switch_util.m"
              {
#line 406 "switch_util.m"
                backend_libs__switch_util__TaggedCase_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 406 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 0) = ((MR_Box) (backend_libs__switch_util__TaggedMainConsId_23));
#line 406 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 1) = ((MR_Box) (backend_libs__switch_util__TaggedOtherConsIds_25));
#line 406 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 2) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
#line 406 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 3) = ((MR_Box) (backend_libs__switch_util__Goal_21));
#line 406 "switch_util.m"
              }
#line 408 "switch_util.m"
              {
#line 408 "switch_util.m"
                backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0(backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1, backend_libs__switch_util__Cases_15, &backend_libs__switch_util__TaggedCases_17, backend_libs__switch_util__LowerLimit1_26, &backend_libs__switch_util__LowerLimit_30, backend_libs__switch_util__UpperLimit1_27, &backend_libs__switch_util__UpperLimit_31, backend_libs__switch_util__NumValues1_28, &backend_libs__switch_util__NumValues_32, backend_libs__switch_util__IsIntSwitch1_29, &backend_libs__switch_util__IsIntSwitch_33);
              }
#line 416 "switch_util.m"
              if ((backend_libs__switch_util__IsIntSwitch_33 == (MR_Integer) 0))
#line 414 "switch_util.m"
                {
#line 414 "switch_util.m"
                  MR_Word base;
#line 414 "switch_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 414 "switch_util.m"
                  *backend_libs__switch_util__MaybeIntSwitchLimits_5 = base;
#line 414 "switch_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__LowerLimit_30));
#line 414 "switch_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__UpperLimit_31));
#line 414 "switch_util.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (backend_libs__switch_util__NumValues_32));
#line 414 "switch_util.m"
                }
#line 416 "switch_util.m"
              else
#line 418 "switch_util.m"
                *backend_libs__switch_util__MaybeIntSwitchLimits_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 405 "switch_util.m"
            }
#line 401 "switch_util.m"
          }
#line 401 "switch_util.m"
        else
#line 421 "switch_util.m"
          {
#line 421 "switch_util.m"
            MR_Word backend_libs__switch_util__V_41_41;
#line 421 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedOtherConsIds_45;

#line 421 "switch_util.m"
            {
#line 421 "switch_util.m"
              backend_libs__switch_util__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 421 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_41_41, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_6[2]));
#line 421 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_41_41, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_2));
#line 421 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 421 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_41_41, 3) = ((MR_Box) (backend_libs__switch_util__HeadVar__1_1));
#line 421 "switch_util.m"
            }
#line 421 "switch_util.m"
            {
#line 421 "switch_util.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__V_41_41, backend_libs__switch_util__OtherConsIds_20, &backend_libs__switch_util__TaggedOtherConsIds_45);
            }
#line 422 "switch_util.m"
            {
#line 422 "switch_util.m"
              backend_libs__switch_util__TaggedCase_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 422 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 0) = ((MR_Box) (backend_libs__switch_util__TaggedMainConsId_23));
#line 422 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 1) = ((MR_Box) (backend_libs__switch_util__TaggedOtherConsIds_45));
#line 422 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 2) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
#line 422 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 3) = ((MR_Box) (backend_libs__switch_util__Goal_21));
#line 422 "switch_util.m"
            }
#line 424 "switch_util.m"
            {
#line 424 "switch_util.m"
              backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1, backend_libs__switch_util__Cases_15, &backend_libs__switch_util__TaggedCases_17);
            }
#line 425 "switch_util.m"
            *backend_libs__switch_util__MaybeIntSwitchLimits_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 421 "switch_util.m"
          }
#line 397 "switch_util.m"
        {
#line 397 "switch_util.m"
          MR_Word base;
#line 397 "switch_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "switch_util.m"
          *backend_libs__switch_util__HeadVar__4_4 = base;
#line 397 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__TaggedCase_16));
#line 397 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__TaggedCases_17));
#line 397 "switch_util.m"
        }
#line 397 "switch_util.m"
      }
#line 394 "switch_util.m"
  }
#line 62 "switch_util.m"
}

#line 1407 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__build_ptag_case_rev_map__1407__1_3_p_0(
#line 1407 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1407 "switch_util.m"
  MR_Word backend_libs__switch_util__Case_14,
#line 1407 "switch_util.m"
  MR_Word backend_libs__switch_util__OldCase_21)
#line 1407 "switch_util.m"
{
#line 1407 "switch_util.m"
  {
#line 1407 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 1407 "switch_util.m"
    {
#line 1407 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_42, backend_libs__switch_util__Case_14, backend_libs__switch_util__OldCase_21);
    }
#line 1407 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1407 "switch_util.m"
  }
#line 1407 "switch_util.m"
}

#line 1302 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1302__1_2_p_0(
#line 1302 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_21,
#line 1302 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_74)
#line 1302 "switch_util.m"
{
#line 1302 "switch_util.m"
  {
#line 1302 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__StagLoc_21 == backend_libs__switch_util__HeadVar__2_74);

#line 1302 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1302 "switch_util.m"
  }
#line 1302 "switch_util.m"
}

#line 1316 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1316__1_2_p_0(
#line 1316 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_63,
#line 1316 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_94)
#line 1316 "switch_util.m"
{
#line 1316 "switch_util.m"
  {
#line 1316 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__StagLoc_94 == backend_libs__switch_util__HeadVar__1_63);

#line 1316 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1316 "switch_util.m"
  }
#line 1316 "switch_util.m"
}

#line 202 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____table_size_upgrade_0_0(
#line 202 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 202 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 202 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 202 "switch_util.m"
{
#line 202 "switch_util.m"
  {
#line 202 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 202 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 202 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 202 "switch_util.m"
    {
#line 202 "switch_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__Cast_HeadVar1_4, backend_libs__switch_util__Cast_HeadVar2_5);
#line 202 "switch_util.m"
      return;
    }
#line 202 "switch_util.m"
  }
#line 202 "switch_util.m"
}

#line 202 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____table_size_upgrade_0_0(
#line 202 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_1,
#line 202 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 202 "switch_util.m"
{
#line 5803 "backend_libs.switch_util.c"
  {
#line 5805 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 5808 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 5810 "backend_libs.switch_util.c"
  }
#line 202 "switch_util.m"
}

#line 77 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____switch_category_0_0(
#line 77 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 77 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 77 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 77 "switch_util.m"
{
#line 77 "switch_util.m"
  {
#line 77 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 77 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 77 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 77 "switch_util.m"
    {
#line 77 "switch_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__Cast_HeadVar1_4, backend_libs__switch_util__Cast_HeadVar2_5);
#line 77 "switch_util.m"
      return;
    }
#line 77 "switch_util.m"
  }
#line 77 "switch_util.m"
}

#line 77 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____switch_category_0_0(
#line 77 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_1,
#line 77 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 77 "switch_util.m"
{
#line 5856 "backend_libs.switch_util.c"
  {
#line 5858 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 5861 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 5863 "backend_libs.switch_util.c"
  }
#line 77 "switch_util.m"
}

#line 199 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____string_hash_slot_1_0(
#line 199 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_14,
#line 199 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 199 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 199 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 199 "switch_util.m"
{
#line 199 "switch_util.m"
  {
#line 199 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 199 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_12 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 199 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_13 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 199 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_12 == backend_libs__switch_util__CastY_13);
#line 199 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 5894 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 199 "switch_util.m"
    else
#line 199 "switch_util.m"
      {
#line 199 "switch_util.m"
        MR_String backend_libs__switch_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 199 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 199 "switch_util.m"
        MR_Box backend_libs__switch_util__V_6_6 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2));
#line 199 "switch_util.m"
        MR_String backend_libs__switch_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 199 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 199 "switch_util.m"
        MR_Box backend_libs__switch_util__V_9_9 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 2));
#line 199 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10;

#line 199 "switch_util.m"
        {
#line 199 "switch_util.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&backend_libs__switch_util__V_10_10, backend_libs__switch_util__V_4_4, backend_libs__switch_util__V_7_7);
        }
#line 5920 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_10_10 == (MR_Integer) 0);
#line 199 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 199 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 199 "switch_util.m"
          *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_10_10;
#line 199 "switch_util.m"
        else
#line 199 "switch_util.m"
          {
#line 199 "switch_util.m"
            MR_Word backend_libs__switch_util__V_11_11;

#line 199 "switch_util.m"
            {
#line 199 "switch_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_11_11, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_8_8);
            }
#line 5940 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_11_11 == (MR_Integer) 0);
#line 199 "switch_util.m"
            backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 199 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 199 "switch_util.m"
              *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_11_11;
#line 199 "switch_util.m"
            else
#line 199 "switch_util.m"
              {
#line 199 "switch_util.m"
                mercury__builtin__compare_3_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_14, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_6_6, backend_libs__switch_util__V_9_9);
#line 199 "switch_util.m"
                return;
              }
#line 199 "switch_util.m"
          }
#line 199 "switch_util.m"
      }
#line 199 "switch_util.m"
  }
#line 199 "switch_util.m"
}

#line 199 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____string_hash_slot_1_0(
#line 199 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_11,
#line 199 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 199 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 199 "switch_util.m"
{
#line 199 "switch_util.m"
  {
#line 199 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 199 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_9 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 199 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_10 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 199 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_9 == backend_libs__switch_util__CastY_10);
#line 199 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 199 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 199 "switch_util.m"
    else
#line 199 "switch_util.m"
      {
#line 199 "switch_util.m"
        MR_String backend_libs__switch_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 199 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 199 "switch_util.m"
        MR_Box backend_libs__switch_util__V_5_5 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 2));
#line 199 "switch_util.m"
        MR_String backend_libs__switch_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 199 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 199 "switch_util.m"
        MR_Box backend_libs__switch_util__V_8_8 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2));

#line 6009 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (strcmp(backend_libs__switch_util__V_3_3, backend_libs__switch_util__V_6_6) == 0);
#line 199 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 199 "switch_util.m"
          {
#line 6015 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_7_7);
#line 199 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 6019 "backend_libs.switch_util.c"
              {
#line 6021 "backend_libs.switch_util.c"
                return backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_11, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_8_8);
              }
#line 199 "switch_util.m"
          }
#line 199 "switch_util.m"
      }
#line 199 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 199 "switch_util.m"
  }
#line 199 "switch_util.m"
}

#line 302 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_map_1_0(
#line 302 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 302 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 302 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 302 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 302 "switch_util.m"
{
#line 302 "switch_util.m"
  {
#line 302 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 302 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 302 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 302 "switch_util.m"
    {
#line 302 "switch_util.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_6, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__Cast_HeadVar1_4, backend_libs__switch_util__Cast_HeadVar2_5);
#line 302 "switch_util.m"
      return;
    }
#line 302 "switch_util.m"
  }
#line 302 "switch_util.m"
}

#line 302 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_map_1_0(
#line 302 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 302 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 302 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 302 "switch_util.m"
{
#line 302 "switch_util.m"
  {
#line 302 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 302 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 302 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 302 "switch_util.m"
    {
#line 302 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_5, backend_libs__switch_util__Cast_HeadVar1_3, backend_libs__switch_util__Cast_HeadVar2_4);
    }
#line 302 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 302 "switch_util.m"
  }
#line 302 "switch_util.m"
}

#line 303 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_list_1_0(
#line 303 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 303 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 303 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 303 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 303 "switch_util.m"
{
#line 303 "switch_util.m"
  {
#line 303 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 303 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_9_9;
#line 303 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 303 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 6125 "backend_libs.switch_util.c"
    {
#line 6127 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6129 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6131 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 6133 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6135 "backend_libs.switch_util.c"
    }
#line 303 "switch_util.m"
    {
#line 303 "switch_util.m"
      mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_9_9, backend_libs__switch_util__HeadVar__1_1, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_4, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_5);
#line 303 "switch_util.m"
      return;
    }
#line 303 "switch_util.m"
  }
#line 303 "switch_util.m"
}

#line 303 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_list_1_0(
#line 303 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 303 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 303 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 303 "switch_util.m"
{
#line 303 "switch_util.m"
  {
#line 303 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 303 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_8_8;
#line 303 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 303 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 6171 "backend_libs.switch_util.c"
    {
#line 6173 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6175 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6177 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 6179 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6181 "backend_libs.switch_util.c"
    }
#line 303 "switch_util.m"
    {
#line 303 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_8_8, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_3, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_4);
    }
#line 303 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 303 "switch_util.m"
  }
#line 303 "switch_util.m"
}

#line 148 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____soln_consts_1_0(
#line 148 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_19,
#line 148 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 148 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 148 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 148 "switch_util.m"
{
#line 148 "switch_util.m"
  {
#line 148 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 148 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_17 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 148 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_18 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 148 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_17 == backend_libs__switch_util__CastY_18);
#line 148 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 6221 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 148 "switch_util.m"
    else
#line 148 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 148 "switch_util.m"
      {
#line 148 "switch_util.m"
        MR_Word backend_libs__switch_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));

#line 148 "switch_util.m"
        if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 148 "switch_util.m"
          {
#line 148 "switch_util.m"
            MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));

#line 148 "switch_util.m"
            {
#line 148 "switch_util.m"
              mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_for_Rval_19, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_27_27, backend_libs__switch_util__V_5_5);
#line 148 "switch_util.m"
              return;
            }
#line 148 "switch_util.m"
          }
#line 148 "switch_util.m"
        else
#line 6250 "backend_libs.switch_util.c"
          *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "switch_util.m"
      }
#line 148 "switch_util.m"
    else
#line 148 "switch_util.m"
      {
#line 148 "switch_util.m"
        MR_Word backend_libs__switch_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "switch_util.m"
        MR_Word backend_libs__switch_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));

#line 148 "switch_util.m"
        if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6265 "backend_libs.switch_util.c"
          *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "switch_util.m"
        else
#line 148 "switch_util.m"
          {
#line 148 "switch_util.m"
            MR_Word backend_libs__switch_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 148 "switch_util.m"
            MR_Word backend_libs__switch_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 148 "switch_util.m"
            MR_Word backend_libs__switch_util__V_16_16;

#line 148 "switch_util.m"
            {
#line 148 "switch_util.m"
              mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_for_Rval_19, &backend_libs__switch_util__V_16_16, backend_libs__switch_util__V_29_29, backend_libs__switch_util__V_14_14);
            }
#line 6283 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_16_16 == (MR_Integer) 0);
#line 148 "switch_util.m"
            backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 148 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 148 "switch_util.m"
              *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_16_16;
#line 148 "switch_util.m"
            else
#line 148 "switch_util.m"
              {
#line 148 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_23_23;

#line 6298 "backend_libs.switch_util.c"
                {
#line 6300 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6302 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6304 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_19));
#line 6306 "backend_libs.switch_util.c"
                }
#line 148 "switch_util.m"
                {
#line 148 "switch_util.m"
                  mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_23_23, backend_libs__switch_util__HeadVar__1_1, (MR_Word) backend_libs__switch_util__V_28_28, (MR_Word) backend_libs__switch_util__V_15_15);
#line 148 "switch_util.m"
                  return;
                }
#line 148 "switch_util.m"
              }
#line 148 "switch_util.m"
          }
#line 148 "switch_util.m"
      }
#line 148 "switch_util.m"
  }
#line 148 "switch_util.m"
}

#line 148 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____soln_consts_1_0(
#line 148 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_11,
#line 148 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 148 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 148 "switch_util.m"
{
#line 148 "switch_util.m"
  {
#line 148 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 148 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_9 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 148 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_10 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 148 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_9 == backend_libs__switch_util__CastY_10);
#line 148 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 148 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 148 "switch_util.m"
    else
#line 148 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 148 "switch_util.m"
      {
#line 148 "switch_util.m"
        MR_Word backend_libs__switch_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 148 "switch_util.m"
        MR_Word backend_libs__switch_util__V_4_4;

#line 148 "switch_util.m"
        backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 148 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 148 "switch_util.m"
          {
#line 148 "switch_util.m"
            backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6371 "backend_libs.switch_util.c"
            {
#line 6373 "backend_libs.switch_util.c"
              return backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_for_Rval_11, backend_libs__switch_util__V_3_3, backend_libs__switch_util__V_4_4);
            }
#line 148 "switch_util.m"
          }
#line 148 "switch_util.m"
      }
#line 148 "switch_util.m"
    else
#line 148 "switch_util.m"
      {
#line 148 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_14_14;
#line 148 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_17_17;
#line 148 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 148 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "switch_util.m"
        MR_Word backend_libs__switch_util__V_7_7;
#line 148 "switch_util.m"
        MR_Word backend_libs__switch_util__V_8_8;

#line 148 "switch_util.m"
        backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 148 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 148 "switch_util.m"
          {
#line 148 "switch_util.m"
            backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 148 "switch_util.m"
            backend_libs__switch_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 6407 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_14_14 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 6409 "backend_libs.switch_util.c"
            {
#line 6411 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6413 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_14_14));
#line 6415 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_11));
#line 6417 "backend_libs.switch_util.c"
            }
#line 6419 "backend_libs.switch_util.c"
            {
#line 6421 "backend_libs.switch_util.c"
              backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_for_Rval_11, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_7_7);
            }
#line 148 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 6426 "backend_libs.switch_util.c"
              {
#line 6428 "backend_libs.switch_util.c"
                return backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_17_17, (MR_Word) backend_libs__switch_util__V_6_6, (MR_Word) backend_libs__switch_util__V_8_8);
              }
#line 148 "switch_util.m"
          }
#line 148 "switch_util.m"
      }
#line 148 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 148 "switch_util.m"
  }
#line 148 "switch_util.m"
}

#line 310 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____ptag_count_map_0_0(
#line 310 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 310 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 310 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 310 "switch_util.m"
{
#line 310 "switch_util.m"
  {
#line 310 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 310 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 310 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 310 "switch_util.m"
    {
#line 310 "switch_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[2], backend_libs__switch_util__HeadVar__1_1, ((MR_Box) (backend_libs__switch_util__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__switch_util__Cast_HeadVar2_5)));
#line 310 "switch_util.m"
      return;
    }
#line 310 "switch_util.m"
  }
#line 310 "switch_util.m"
}

#line 310 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_count_map_0_0(
#line 310 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 310 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 310 "switch_util.m"
{
#line 310 "switch_util.m"
  {
#line 310 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 310 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 310 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 310 "switch_util.m"
    {
#line 310 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[2], ((MR_Box) (backend_libs__switch_util__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__switch_util__Cast_HeadVar2_4)));
    }
#line 310 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 310 "switch_util.m"
  }
#line 310 "switch_util.m"
}

#line 1374 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0(
#line 1374 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1374 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1374 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1374 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 1374 "switch_util.m"
{
#line 1374 "switch_util.m"
  {
#line 1374 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1374 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_15 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 1374 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_16 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 1374 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_15 == backend_libs__switch_util__CastY_16);
#line 1374 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 6530 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1374 "switch_util.m"
    else
#line 1374 "switch_util.m"
      {
#line 1374 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1374 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1374 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1374 "switch_util.m"
        MR_Word backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 3)));
#line 1374 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1374 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1374 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 2)));
#line 1374 "switch_util.m"
        MR_Word backend_libs__switch_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 3)));
#line 1374 "switch_util.m"
        MR_Word backend_libs__switch_util__V_12_12;

#line 1374 "switch_util.m"
        {
#line 1374 "switch_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_12_12, backend_libs__switch_util__V_4_4, backend_libs__switch_util__V_8_8);
        }
#line 6560 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_12_12 == (MR_Integer) 0);
#line 1374 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1374 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1374 "switch_util.m"
          *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_12_12;
#line 1374 "switch_util.m"
        else
#line 1374 "switch_util.m"
          {
#line 1374 "switch_util.m"
            MR_Word backend_libs__switch_util__V_13_13;

#line 1374 "switch_util.m"
            {
#line 1374 "switch_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_13_13, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_9_9);
            }
#line 6580 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_13_13 == (MR_Integer) 0);
#line 1374 "switch_util.m"
            backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1374 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1374 "switch_util.m"
              *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_13_13;
#line 1374 "switch_util.m"
            else
#line 1374 "switch_util.m"
              {
#line 1374 "switch_util.m"
                MR_Word backend_libs__switch_util__V_14_14;

#line 1374 "switch_util.m"
                {
#line 1374 "switch_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[2], &backend_libs__switch_util__V_14_14, ((MR_Box) (backend_libs__switch_util__V_6_6)), ((MR_Box) (backend_libs__switch_util__V_10_10)));
                }
#line 6600 "backend_libs.switch_util.c"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_14_14 == (MR_Integer) 0);
#line 1374 "switch_util.m"
                backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1374 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1374 "switch_util.m"
                  *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_14_14;
#line 1374 "switch_util.m"
                else
#line 1374 "switch_util.m"
                  {
#line 1374 "switch_util.m"
                    backend_libs__switch_util____Compare____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_17, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_7_7, backend_libs__switch_util__V_11_11);
#line 1374 "switch_util.m"
                    return;
                  }
#line 1374 "switch_util.m"
              }
#line 1374 "switch_util.m"
          }
#line 1374 "switch_util.m"
      }
#line 1374 "switch_util.m"
  }
#line 1374 "switch_util.m"
}

#line 1374 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0(
#line 1374 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_13,
#line 1374 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1374 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 1374 "switch_util.m"
{
#line 1374 "switch_util.m"
  {
#line 1374 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1374 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_11 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 1374 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_12 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 1374 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_11 == backend_libs__switch_util__CastY_12);
#line 1374 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1374 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 1374 "switch_util.m"
    else
#line 1374 "switch_util.m"
      {
#line 1374 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_14_14;
#line 1374 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1374 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1374 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1374 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1374 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1374 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1374 "switch_util.m"
        MR_Word backend_libs__switch_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1374 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 3)));

#line 6677 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_7_7);
#line 1374 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1374 "switch_util.m"
          {
#line 6683 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_8_8);
#line 1374 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1374 "switch_util.m"
              {
#line 6689 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_14_14 = (MR_Word) &backend_libs__switch_util_scalar_common_1[2];
#line 6691 "backend_libs.switch_util.c"
                {
#line 6693 "backend_libs.switch_util.c"
                  backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0(backend_libs__switch_util__TypeInfo_14_14, ((MR_Box) (backend_libs__switch_util__V_5_5)), ((MR_Box) (backend_libs__switch_util__V_9_9)));
                }
#line 1374 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 6698 "backend_libs.switch_util.c"
                  {
#line 6700 "backend_libs.switch_util.c"
                    return backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_13, backend_libs__switch_util__V_6_6, backend_libs__switch_util__V_10_10);
                  }
#line 1374 "switch_util.m"
              }
#line 1374 "switch_util.m"
          }
#line 1374 "switch_util.m"
      }
#line 1374 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1374 "switch_util.m"
  }
#line 1374 "switch_util.m"
}

#line 1389 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0(
#line 1389 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 1389 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1389 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1389 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 1389 "switch_util.m"
{
#line 1389 "switch_util.m"
  {
#line 1389 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1389 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_8_8;
#line 1389 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_10_10;
#line 1389 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 1389 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 6742 "backend_libs.switch_util.c"
    {
#line 6744 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6746 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6748 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6750 "backend_libs.switch_util.c"
    }
#line 6752 "backend_libs.switch_util.c"
    {
#line 6754 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6756 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 6758 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6760 "backend_libs.switch_util.c"
    }
#line 1389 "switch_util.m"
    {
#line 1389 "switch_util.m"
      mercury__tree234____Compare____tree234_2_0(backend_libs__switch_util__TypeInfo_8_8, backend_libs__switch_util__TypeInfo_10_10, backend_libs__switch_util__HeadVar__1_1, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_4, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_5);
#line 1389 "switch_util.m"
      return;
    }
#line 1389 "switch_util.m"
  }
#line 1389 "switch_util.m"
}

#line 1389 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0(
#line 1389 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 1389 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1389 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 1389 "switch_util.m"
{
#line 1389 "switch_util.m"
  {
#line 1389 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1389 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_7_7;
#line 1389 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_9_9;
#line 1389 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 1389 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 6798 "backend_libs.switch_util.c"
    {
#line 6800 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6802 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6804 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6806 "backend_libs.switch_util.c"
    }
#line 6808 "backend_libs.switch_util.c"
    {
#line 6810 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6812 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 6814 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6816 "backend_libs.switch_util.c"
    }
#line 1389 "switch_util.m"
    {
#line 1389 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__tree234____Unify____tree234_2_0(backend_libs__switch_util__TypeInfo_7_7, backend_libs__switch_util__TypeInfo_9_9, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_3, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_4);
    }
#line 1389 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1389 "switch_util.m"
  }
#line 1389 "switch_util.m"
}

#line 257 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_map_1_0(
#line 257 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 257 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 257 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 257 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 257 "switch_util.m"
{
#line 257 "switch_util.m"
  {
#line 257 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 257 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_9_9;
#line 257 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 257 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 6854 "backend_libs.switch_util.c"
    {
#line 6856 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6858 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6860 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6862 "backend_libs.switch_util.c"
    }
#line 257 "switch_util.m"
    {
#line 257 "switch_util.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_9_9, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__Cast_HeadVar1_4, backend_libs__switch_util__Cast_HeadVar2_5);
#line 257 "switch_util.m"
      return;
    }
#line 257 "switch_util.m"
  }
#line 257 "switch_util.m"
}

#line 257 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_map_1_0(
#line 257 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 257 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 257 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 257 "switch_util.m"
{
#line 257 "switch_util.m"
  {
#line 257 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 257 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_8_8;
#line 257 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 257 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 6898 "backend_libs.switch_util.c"
    {
#line 6900 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6902 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6904 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6906 "backend_libs.switch_util.c"
    }
#line 257 "switch_util.m"
    {
#line 257 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_8_8, backend_libs__switch_util__Cast_HeadVar1_3, backend_libs__switch_util__Cast_HeadVar2_4);
    }
#line 257 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 257 "switch_util.m"
  }
#line 257 "switch_util.m"
}

#line 305 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_list_1_0(
#line 305 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 305 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 305 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 305 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 305 "switch_util.m"
{
#line 305 "switch_util.m"
  {
#line 305 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 305 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_8_8;
#line 305 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 305 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 6944 "backend_libs.switch_util.c"
    {
#line 6946 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6948 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1));
#line 6950 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6952 "backend_libs.switch_util.c"
    }
#line 305 "switch_util.m"
    {
#line 305 "switch_util.m"
      mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_8_8, backend_libs__switch_util__HeadVar__1_1, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_4, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_5);
#line 305 "switch_util.m"
      return;
    }
#line 305 "switch_util.m"
  }
#line 305 "switch_util.m"
}

#line 305 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_list_1_0(
#line 305 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 305 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 305 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 305 "switch_util.m"
{
#line 305 "switch_util.m"
  {
#line 305 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 305 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_7_7;
#line 305 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 305 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 6988 "backend_libs.switch_util.c"
    {
#line 6990 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6992 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1));
#line 6994 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6996 "backend_libs.switch_util.c"
    }
#line 305 "switch_util.m"
    {
#line 305 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_7_7, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_3, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_4);
    }
#line 305 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 305 "switch_util.m"
  }
#line 305 "switch_util.m"
}

#line 306 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_list_1_0(
#line 306 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 306 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 306 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 306 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 306 "switch_util.m"
{
#line 306 "switch_util.m"
  {
#line 306 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 306 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_8_8;
#line 306 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 306 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 7034 "backend_libs.switch_util.c"
    {
#line 7036 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7038 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1));
#line 7040 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 7042 "backend_libs.switch_util.c"
    }
#line 306 "switch_util.m"
    {
#line 306 "switch_util.m"
      mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_8_8, backend_libs__switch_util__HeadVar__1_1, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_4, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_5);
#line 306 "switch_util.m"
      return;
    }
#line 306 "switch_util.m"
  }
#line 306 "switch_util.m"
}

#line 306 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_list_1_0(
#line 306 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 306 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 306 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 306 "switch_util.m"
{
#line 306 "switch_util.m"
  {
#line 306 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 306 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_7_7;
#line 306 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 306 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 7078 "backend_libs.switch_util.c"
    {
#line 7080 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7082 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1));
#line 7084 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 7086 "backend_libs.switch_util.c"
    }
#line 306 "switch_util.m"
    {
#line 306 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_7_7, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_3, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_4);
    }
#line 306 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 306 "switch_util.m"
  }
#line 306 "switch_util.m"
}

#line 274 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_entry_1_0(
#line 274 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_14,
#line 274 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 274 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 274 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 274 "switch_util.m"
{
#line 274 "switch_util.m"
  {
#line 274 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 274 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_12 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 274 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_13 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 274 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_12 == backend_libs__switch_util__CastY_13);
#line 274 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 7126 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 274 "switch_util.m"
    else
#line 274 "switch_util.m"
      {
#line 274 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 274 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2)));
#line 274 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 274 "switch_util.m"
        MR_Word backend_libs__switch_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 274 "switch_util.m"
        MR_Word backend_libs__switch_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 2)));
#line 274 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10;

#line 274 "switch_util.m"
        {
#line 274 "switch_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_10_10, backend_libs__switch_util__V_4_4, backend_libs__switch_util__V_7_7);
        }
#line 7152 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_10_10 == (MR_Integer) 0);
#line 274 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 274 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 274 "switch_util.m"
          *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_10_10;
#line 274 "switch_util.m"
        else
#line 274 "switch_util.m"
          {
#line 274 "switch_util.m"
            MR_Word backend_libs__switch_util__V_11_11;

#line 274 "switch_util.m"
            {
#line 274 "switch_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[2], &backend_libs__switch_util__V_11_11, ((MR_Box) (backend_libs__switch_util__V_5_5)), ((MR_Box) (backend_libs__switch_util__V_8_8)));
            }
#line 7172 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_11_11 == (MR_Integer) 0);
#line 274 "switch_util.m"
            backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 274 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 274 "switch_util.m"
              *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_11_11;
#line 274 "switch_util.m"
            else
#line 274 "switch_util.m"
              {
#line 274 "switch_util.m"
                backend_libs__switch_util____Compare____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_14, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_6_6, backend_libs__switch_util__V_9_9);
#line 274 "switch_util.m"
                return;
              }
#line 274 "switch_util.m"
          }
#line 274 "switch_util.m"
      }
#line 274 "switch_util.m"
  }
#line 274 "switch_util.m"
}

#line 274 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_entry_1_0(
#line 274 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_11,
#line 274 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 274 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 274 "switch_util.m"
{
#line 274 "switch_util.m"
  {
#line 274 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 274 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_9 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 274 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_10 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 274 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_9 == backend_libs__switch_util__CastY_10);
#line 274 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 274 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 274 "switch_util.m"
    else
#line 274 "switch_util.m"
      {
#line 274 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_12_12;
#line 274 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 274 "switch_util.m"
        MR_Word backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 274 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 2)));
#line 274 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 274 "switch_util.m"
        MR_Word backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "switch_util.m"
        MR_Word backend_libs__switch_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2)));

#line 7243 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_6_6);
#line 274 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 274 "switch_util.m"
          {
#line 7249 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeInfo_12_12 = (MR_Word) &backend_libs__switch_util_scalar_common_1[2];
#line 7251 "backend_libs.switch_util.c"
            {
#line 7253 "backend_libs.switch_util.c"
              backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0(backend_libs__switch_util__TypeInfo_12_12, ((MR_Box) (backend_libs__switch_util__V_4_4)), ((MR_Box) (backend_libs__switch_util__V_7_7)));
            }
#line 274 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 7258 "backend_libs.switch_util.c"
              {
#line 7260 "backend_libs.switch_util.c"
                return backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_11, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_8_8);
              }
#line 274 "switch_util.m"
          }
#line 274 "switch_util.m"
      }
#line 274 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 274 "switch_util.m"
  }
#line 274 "switch_util.m"
}

#line 260 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_entry_1_0(
#line 260 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_11,
#line 260 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 260 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 260 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 260 "switch_util.m"
{
#line 260 "switch_util.m"
  {
#line 260 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 260 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_9 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 260 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_10 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 260 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_9 == backend_libs__switch_util__CastY_10);
#line 260 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 7300 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 260 "switch_util.m"
    else
#line 260 "switch_util.m"
      {
#line 260 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 260 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 260 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 260 "switch_util.m"
        MR_Word backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 260 "switch_util.m"
        MR_Word backend_libs__switch_util__V_8_8;

#line 260 "switch_util.m"
        {
#line 260 "switch_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_8_8, backend_libs__switch_util__V_4_4, backend_libs__switch_util__V_6_6);
        }
#line 7322 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_8_8 == (MR_Integer) 0);
#line 260 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 260 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 260 "switch_util.m"
          *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_8_8;
#line 260 "switch_util.m"
        else
#line 260 "switch_util.m"
          {
#line 260 "switch_util.m"
            backend_libs__switch_util____Compare____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_11, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_7_7);
#line 260 "switch_util.m"
            return;
          }
#line 260 "switch_util.m"
      }
#line 260 "switch_util.m"
  }
#line 260 "switch_util.m"
}

#line 260 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_entry_1_0(
#line 260 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_9,
#line 260 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 260 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 260 "switch_util.m"
{
#line 260 "switch_util.m"
  {
#line 260 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 260 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_7 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 260 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_8 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 260 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_7 == backend_libs__switch_util__CastY_8);
#line 260 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 260 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 260 "switch_util.m"
    else
#line 260 "switch_util.m"
      {
#line 260 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 260 "switch_util.m"
        MR_Word backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 260 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 260 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));

#line 7385 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_5_5);
#line 260 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 7389 "backend_libs.switch_util.c"
          {
#line 7391 "backend_libs.switch_util.c"
            return backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_9, backend_libs__switch_util__V_4_4, backend_libs__switch_util__V_6_6);
          }
#line 260 "switch_util.m"
      }
#line 260 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 260 "switch_util.m"
  }
#line 260 "switch_util.m"
}

#line 289 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_1_0(
#line 289 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_11,
#line 289 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 289 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 289 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 289 "switch_util.m"
{
#line 289 "switch_util.m"
  {
#line 289 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 289 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_9 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 289 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_10 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 289 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_9 == backend_libs__switch_util__CastY_10);
#line 289 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 7429 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 289 "switch_util.m"
    else
#line 289 "switch_util.m"
      {
#line 289 "switch_util.m"
        MR_Word backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 289 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 289 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 289 "switch_util.m"
        MR_Word backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 289 "switch_util.m"
        MR_Word backend_libs__switch_util__V_8_8;
#line 289 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_16_16 = (MR_Integer) backend_libs__switch_util__V_4_4;
#line 289 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_17_17 = (MR_Integer) backend_libs__switch_util__V_6_6;

#line 289 "switch_util.m"
        {
#line 289 "switch_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_8_8, backend_libs__switch_util__V_16_16, backend_libs__switch_util__V_17_17);
        }
#line 7455 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_8_8 == (MR_Integer) 0);
#line 289 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 289 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 289 "switch_util.m"
          *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_8_8;
#line 289 "switch_util.m"
        else
#line 289 "switch_util.m"
          {
#line 289 "switch_util.m"
            {
#line 289 "switch_util.m"
              mercury__tree234____Compare____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_11, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_7_7);
#line 289 "switch_util.m"
              return;
            }
#line 289 "switch_util.m"
          }
#line 289 "switch_util.m"
      }
#line 289 "switch_util.m"
  }
#line 289 "switch_util.m"
}

#line 289 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_1_0(
#line 289 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_9,
#line 289 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 289 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 289 "switch_util.m"
{
#line 289 "switch_util.m"
  {
#line 289 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 289 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_7 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 289 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_8 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 289 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_7 == backend_libs__switch_util__CastY_8);
#line 289 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 289 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 289 "switch_util.m"
    else
#line 289 "switch_util.m"
      {
#line 289 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_10_10;
#line 289 "switch_util.m"
        MR_Word backend_libs__switch_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 289 "switch_util.m"
        MR_Word backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 289 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));

#line 7524 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_5_5);
#line 289 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 289 "switch_util.m"
          {
#line 7530 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 7532 "backend_libs.switch_util.c"
            {
#line 7534 "backend_libs.switch_util.c"
              return backend_libs__switch_util__succeeded = mercury__tree234____Unify____tree234_2_0(backend_libs__switch_util__TypeCtorInfo_10_10, backend_libs__switch_util__TypeInfo_for_CaseRep_9, backend_libs__switch_util__V_4_4, backend_libs__switch_util__V_6_6);
            }
#line 289 "switch_util.m"
          }
#line 289 "switch_util.m"
      }
#line 289 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 289 "switch_util.m"
  }
#line 289 "switch_util.m"
}

#line 153 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____need_range_check_0_0(
#line 153 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 153 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 153 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 153 "switch_util.m"
{
#line 153 "switch_util.m"
  {
#line 153 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 153 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 153 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 153 "switch_util.m"
    {
#line 153 "switch_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__Cast_HeadVar1_4, backend_libs__switch_util__Cast_HeadVar2_5);
#line 153 "switch_util.m"
      return;
    }
#line 153 "switch_util.m"
  }
#line 153 "switch_util.m"
}

#line 153 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_range_check_0_0(
#line 153 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_1,
#line 153 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 153 "switch_util.m"
{
#line 7589 "backend_libs.switch_util.c"
  {
#line 7591 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7594 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7596 "backend_libs.switch_util.c"
  }
#line 153 "switch_util.m"
}

#line 157 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____need_bit_vec_check_0_0(
#line 157 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 157 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 157 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 157 "switch_util.m"
{
#line 157 "switch_util.m"
  {
#line 157 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 157 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 157 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 157 "switch_util.m"
    {
#line 157 "switch_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__Cast_HeadVar1_4, backend_libs__switch_util__Cast_HeadVar2_5);
#line 157 "switch_util.m"
      return;
    }
#line 157 "switch_util.m"
  }
#line 157 "switch_util.m"
}

#line 157 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_bit_vec_check_0_0(
#line 157 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_1,
#line 157 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 157 "switch_util.m"
{
#line 7642 "backend_libs.switch_util.c"
  {
#line 7644 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7647 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7649 "backend_libs.switch_util.c"
  }
#line 157 "switch_util.m"
}

#line 47 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____maybe_int_switch_info_0_0(
#line 47 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 47 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 47 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 47 "switch_util.m"
{
#line 47 "switch_util.m"
  {
#line 47 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 47 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_18 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 47 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_19 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 47 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_18 == backend_libs__switch_util__CastY_19);
#line 47 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 7678 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "switch_util.m"
    else
#line 47 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 47 "switch_util.m"
      if ((backend_libs__switch_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 47 "switch_util.m"
        *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "switch_util.m"
      else
#line 7690 "backend_libs.switch_util.c"
        *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "switch_util.m"
    else
#line 47 "switch_util.m"
      {
#line 47 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2)));
#line 47 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 47 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));

#line 47 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7705 "backend_libs.switch_util.c"
          *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "switch_util.m"
        else
#line 47 "switch_util.m"
          {
#line 47 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 47 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 47 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 2)));
#line 47 "switch_util.m"
            MR_Word backend_libs__switch_util__V_10_10;

#line 47 "switch_util.m"
            {
#line 47 "switch_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_10_10, backend_libs__switch_util__V_25_25, backend_libs__switch_util__V_7_7);
            }
#line 7725 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_10_10 == (MR_Integer) 0);
#line 47 "switch_util.m"
            backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 47 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 47 "switch_util.m"
              *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_10_10;
#line 47 "switch_util.m"
            else
#line 47 "switch_util.m"
              {
#line 47 "switch_util.m"
                MR_Word backend_libs__switch_util__V_11_11;

#line 47 "switch_util.m"
                {
#line 47 "switch_util.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_11_11, backend_libs__switch_util__V_24_24, backend_libs__switch_util__V_8_8);
                }
#line 7745 "backend_libs.switch_util.c"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_11_11 == (MR_Integer) 0);
#line 47 "switch_util.m"
                backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 47 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 47 "switch_util.m"
                  *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_11_11;
#line 47 "switch_util.m"
                else
#line 47 "switch_util.m"
                  {
#line 47 "switch_util.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_23_23, backend_libs__switch_util__V_9_9);
#line 47 "switch_util.m"
                    return;
                  }
#line 47 "switch_util.m"
              }
#line 47 "switch_util.m"
          }
#line 47 "switch_util.m"
      }
#line 47 "switch_util.m"
  }
#line 47 "switch_util.m"
}

#line 47 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____maybe_int_switch_info_0_0(
#line 47 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 47 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 47 "switch_util.m"
{
#line 47 "switch_util.m"
  {
#line 47 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 47 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_11 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 47 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_12 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 47 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_11 == backend_libs__switch_util__CastY_12);
#line 47 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 47 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 47 "switch_util.m"
    else
#line 47 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 47 "switch_util.m"
      {
#line 47 "switch_util.m"
        MR_Integer backend_libs__switch_util__CastX_9 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 47 "switch_util.m"
        MR_Integer backend_libs__switch_util__CastY_10 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 47 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastY_10 == backend_libs__switch_util__CastX_9);
#line 47 "switch_util.m"
      }
#line 47 "switch_util.m"
    else
#line 47 "switch_util.m"
      {
#line 47 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 47 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 47 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 2)));
#line 47 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_6_6;
#line 47 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_7_7;
#line 47 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_8_8;

#line 47 "switch_util.m"
        backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 47 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 47 "switch_util.m"
          {
#line 47 "switch_util.m"
            backend_libs__switch_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 47 "switch_util.m"
            backend_libs__switch_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 47 "switch_util.m"
            backend_libs__switch_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2)));
#line 7841 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_6_6);
#line 47 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 47 "switch_util.m"
              {
#line 7847 "backend_libs.switch_util.c"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_7_7);
#line 47 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 7851 "backend_libs.switch_util.c"
                  backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_5_5 == backend_libs__switch_util__V_8_8);
#line 47 "switch_util.m"
              }
#line 47 "switch_util.m"
          }
#line 47 "switch_util.m"
      }
#line 47 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 47 "switch_util.m"
  }
#line 47 "switch_util.m"
}

#line 94 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____may_use_smart_indexing_0_0(
#line 94 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 94 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 94 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 94 "switch_util.m"
{
#line 94 "switch_util.m"
  {
#line 94 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 94 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 94 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 94 "switch_util.m"
    {
#line 94 "switch_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__Cast_HeadVar1_4, backend_libs__switch_util__Cast_HeadVar2_5);
#line 94 "switch_util.m"
      return;
    }
#line 94 "switch_util.m"
  }
#line 94 "switch_util.m"
}

#line 94 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____may_use_smart_indexing_0_0(
#line 94 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_1,
#line 94 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 94 "switch_util.m"
{
#line 7907 "backend_libs.switch_util.c"
  {
#line 7909 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7912 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7914 "backend_libs.switch_util.c"
  }
#line 94 "switch_util.m"
}

#line 390 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0(
#line 390 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 390 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 390 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 390 "switch_util.m"
{
#line 390 "switch_util.m"
  {
#line 390 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 390 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 390 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 390 "switch_util.m"
    {
#line 390 "switch_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__Cast_HeadVar1_4, backend_libs__switch_util__Cast_HeadVar2_5);
#line 390 "switch_util.m"
      return;
    }
#line 390 "switch_util.m"
  }
#line 390 "switch_util.m"
}

#line 390 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0(
#line 390 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_1,
#line 390 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 390 "switch_util.m"
{
#line 7960 "backend_libs.switch_util.c"
  {
#line 7962 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7965 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7967 "backend_libs.switch_util.c"
  }
#line 390 "switch_util.m"
}

#line 315 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____case_id_ptags_map_0_0(
#line 315 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 315 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 315 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 315 "switch_util.m"
{
#line 315 "switch_util.m"
  {
#line 315 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 315 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 315 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 315 "switch_util.m"
    {
#line 315 "switch_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[1], backend_libs__switch_util__HeadVar__1_1, ((MR_Box) (backend_libs__switch_util__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__switch_util__Cast_HeadVar2_5)));
#line 315 "switch_util.m"
      return;
    }
#line 315 "switch_util.m"
  }
#line 315 "switch_util.m"
}

#line 315 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_id_ptags_map_0_0(
#line 315 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 315 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 315 "switch_util.m"
{
#line 315 "switch_util.m"
  {
#line 315 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 315 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 315 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 315 "switch_util.m"
    {
#line 315 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[1], ((MR_Box) (backend_libs__switch_util__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__switch_util__Cast_HeadVar2_4)));
    }
#line 315 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 315 "switch_util.m"
  }
#line 315 "switch_util.m"
}

#line 137 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____case_consts_several_llds_0_0(
#line 137 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 137 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 137 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 137 "switch_util.m"
{
#line 137 "switch_util.m"
  {
#line 137 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 137 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_9 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 137 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_10 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 137 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_9 == backend_libs__switch_util__CastY_10);
#line 137 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 8058 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 137 "switch_util.m"
    else
#line 137 "switch_util.m"
      {
#line 137 "switch_util.m"
        MR_Word backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 137 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 137 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 137 "switch_util.m"
        MR_Word backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 137 "switch_util.m"
        MR_Word backend_libs__switch_util__V_8_8;

#line 137 "switch_util.m"
        {
#line 137 "switch_util.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[1], &backend_libs__switch_util__V_8_8, ((MR_Box) (backend_libs__switch_util__V_4_4)), ((MR_Box) (backend_libs__switch_util__V_6_6)));
        }
#line 8080 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_8_8 == (MR_Integer) 0);
#line 137 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 137 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 137 "switch_util.m"
          *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_8_8;
#line 137 "switch_util.m"
        else
#line 137 "switch_util.m"
          {
#line 137 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_13_13 = (MR_Integer) backend_libs__switch_util__V_5_5;
#line 137 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_14_14 = (MR_Integer) backend_libs__switch_util__V_7_7;

#line 137 "switch_util.m"
            {
#line 137 "switch_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_13_13, backend_libs__switch_util__V_14_14);
#line 137 "switch_util.m"
              return;
            }
#line 137 "switch_util.m"
          }
#line 137 "switch_util.m"
      }
#line 137 "switch_util.m"
  }
#line 137 "switch_util.m"
}

#line 137 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_several_llds_0_0(
#line 137 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 137 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 137 "switch_util.m"
{
#line 137 "switch_util.m"
  {
#line 137 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 137 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_7 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 137 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_8 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 137 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_7 == backend_libs__switch_util__CastY_8);
#line 137 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 137 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 137 "switch_util.m"
    else
#line 137 "switch_util.m"
      {
#line 137 "switch_util.m"
        MR_Word backend_libs__switch_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 137 "switch_util.m"
        MR_Word backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 137 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 137 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));

#line 8150 "backend_libs.switch_util.c"
        {
#line 8152 "backend_libs.switch_util.c"
          backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[1], ((MR_Box) (backend_libs__switch_util__V_3_3)), ((MR_Box) (backend_libs__switch_util__V_5_5)));
        }
#line 137 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 8157 "backend_libs.switch_util.c"
          backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_6_6);
#line 137 "switch_util.m"
      }
#line 137 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 137 "switch_util.m"
  }
#line 137 "switch_util.m"
}

#line 128 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____case_consts_3_0(
#line 128 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Key_19,
#line 128 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_20,
#line 128 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_SeveralInfo_21,
#line 128 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 128 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 128 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 128 "switch_util.m"
{
#line 128 "switch_util.m"
  {
#line 128 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 128 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_17 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 128 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_18 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 128 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_17 == backend_libs__switch_util__CastY_18);
#line 128 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 8198 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 128 "switch_util.m"
    else
#line 128 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 128 "switch_util.m"
      {
#line 128 "switch_util.m"
        MR_Word backend_libs__switch_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));

#line 128 "switch_util.m"
        if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 128 "switch_util.m"
          {
#line 128 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_27_27;
#line 128 "switch_util.m"
            MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));

#line 8218 "backend_libs.switch_util.c"
            {
#line 8220 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8222 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_27_27, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 8224 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_27_27, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_20));
#line 8226 "backend_libs.switch_util.c"
            }
#line 128 "switch_util.m"
            {
#line 128 "switch_util.m"
              mercury__tree234____Compare____tree234_2_0(backend_libs__switch_util__TypeInfo_for_Key_19, backend_libs__switch_util__TypeInfo_27_27, backend_libs__switch_util__HeadVar__1_1, (MR_Word) backend_libs__switch_util__V_30_30, (MR_Word) backend_libs__switch_util__V_5_5);
#line 128 "switch_util.m"
              return;
            }
#line 128 "switch_util.m"
          }
#line 128 "switch_util.m"
        else
#line 8239 "backend_libs.switch_util.c"
          *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 1;
#line 128 "switch_util.m"
      }
#line 128 "switch_util.m"
    else
#line 128 "switch_util.m"
      {
#line 128 "switch_util.m"
        MR_Box backend_libs__switch_util__V_31_31 = (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1));
#line 128 "switch_util.m"
        MR_Word backend_libs__switch_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));

#line 128 "switch_util.m"
        if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8254 "backend_libs.switch_util.c"
          *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 2;
#line 128 "switch_util.m"
        else
#line 128 "switch_util.m"
          {
#line 128 "switch_util.m"
            MR_Word backend_libs__switch_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 128 "switch_util.m"
            MR_Box backend_libs__switch_util__V_15_15 = (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1));
#line 128 "switch_util.m"
            MR_Word backend_libs__switch_util__V_16_16;
#line 128 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_23_23;

#line 8269 "backend_libs.switch_util.c"
            {
#line 8271 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8273 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1));
#line 8275 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_20));
#line 8277 "backend_libs.switch_util.c"
            }
#line 128 "switch_util.m"
            {
#line 128 "switch_util.m"
              mercury__tree234____Compare____tree234_2_0(backend_libs__switch_util__TypeInfo_for_Key_19, backend_libs__switch_util__TypeInfo_23_23, &backend_libs__switch_util__V_16_16, (MR_Word) backend_libs__switch_util__V_32_32, (MR_Word) backend_libs__switch_util__V_14_14);
            }
#line 8284 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_16_16 == (MR_Integer) 0);
#line 128 "switch_util.m"
            backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 128 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 128 "switch_util.m"
              *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_16_16;
#line 128 "switch_util.m"
            else
#line 128 "switch_util.m"
              {
#line 128 "switch_util.m"
                mercury__builtin__compare_3_p_0(backend_libs__switch_util__TypeInfo_for_SeveralInfo_21, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_31_31, backend_libs__switch_util__V_15_15);
#line 128 "switch_util.m"
                return;
              }
#line 128 "switch_util.m"
          }
#line 128 "switch_util.m"
      }
#line 128 "switch_util.m"
  }
#line 128 "switch_util.m"
}

#line 128 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_3_0(
#line 128 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Key_11,
#line 128 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_12,
#line 128 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_SeveralInfo_13,
#line 128 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 128 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 128 "switch_util.m"
{
#line 128 "switch_util.m"
  {
#line 128 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 128 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_9 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 128 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_10 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 128 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_9 == backend_libs__switch_util__CastY_10);
#line 128 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 128 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 128 "switch_util.m"
    else
#line 128 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 128 "switch_util.m"
      {
#line 128 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_14_14;
#line 128 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_15_15;
#line 128 "switch_util.m"
        MR_Word backend_libs__switch_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 128 "switch_util.m"
        MR_Word backend_libs__switch_util__V_4_4;

#line 128 "switch_util.m"
        backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 128 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 128 "switch_util.m"
          {
#line 128 "switch_util.m"
            backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 8363 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_14_14 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 8365 "backend_libs.switch_util.c"
            {
#line 8367 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8369 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_14_14));
#line 8371 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_12));
#line 8373 "backend_libs.switch_util.c"
            }
#line 8375 "backend_libs.switch_util.c"
            {
#line 8377 "backend_libs.switch_util.c"
              return backend_libs__switch_util__succeeded = mercury__tree234____Unify____tree234_2_0(backend_libs__switch_util__TypeInfo_for_Key_11, backend_libs__switch_util__TypeInfo_15_15, (MR_Word) backend_libs__switch_util__V_3_3, (MR_Word) backend_libs__switch_util__V_4_4);
            }
#line 128 "switch_util.m"
          }
#line 128 "switch_util.m"
      }
#line 128 "switch_util.m"
    else
#line 128 "switch_util.m"
      {
#line 128 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_18_18;
#line 128 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_19_19;
#line 128 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 128 "switch_util.m"
        MR_Box backend_libs__switch_util__V_6_6 = (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1));
#line 128 "switch_util.m"
        MR_Word backend_libs__switch_util__V_7_7;
#line 128 "switch_util.m"
        MR_Box backend_libs__switch_util__V_8_8;

#line 128 "switch_util.m"
        backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 128 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 128 "switch_util.m"
          {
#line 128 "switch_util.m"
            backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 128 "switch_util.m"
            backend_libs__switch_util__V_8_8 = (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1));
#line 8411 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_18_18 = (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1;
#line 8413 "backend_libs.switch_util.c"
            {
#line 8415 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8417 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_19_19, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_18_18));
#line 8419 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_19_19, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_12));
#line 8421 "backend_libs.switch_util.c"
            }
#line 8423 "backend_libs.switch_util.c"
            {
#line 8425 "backend_libs.switch_util.c"
              backend_libs__switch_util__succeeded = mercury__tree234____Unify____tree234_2_0(backend_libs__switch_util__TypeInfo_for_Key_11, backend_libs__switch_util__TypeInfo_19_19, (MR_Word) backend_libs__switch_util__V_5_5, (MR_Word) backend_libs__switch_util__V_7_7);
            }
#line 128 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 8430 "backend_libs.switch_util.c"
              {
#line 8432 "backend_libs.switch_util.c"
                return backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0(backend_libs__switch_util__TypeInfo_for_SeveralInfo_13, backend_libs__switch_util__V_6_6, backend_libs__switch_util__V_8_8);
              }
#line 128 "switch_util.m"
          }
#line 128 "switch_util.m"
      }
#line 128 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 128 "switch_util.m"
  }
#line 128 "switch_util.m"
}

#line 1407 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0_1(
#line 1407 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1407 "switch_util.m"
{
#line 1407 "switch_util.m"
  {
#line 1407 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1407 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1407 "switch_util.m"
    {
#line 1407 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util__IntroducedFrom__pred__build_ptag_case_rev_map__1407__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 5))));
    }
#line 1407 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1407 "switch_util.m"
  }
#line 1407 "switch_util.m"
}

#line 1392 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0(
#line 1392 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1392 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1392 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1392 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3,
#line 1392 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevMap_4)
#line 1392 "switch_util.m"
{
#line 1396 "switch_util.m"
  while (MR_TRUE)
#line 1396 "switch_util.m"
    {
#line 1396 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1396 "switch_util.m"
      {
#line 1396 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 1396 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1396 "switch_util.m"
          *backend_libs__switch_util__STATE_VARIABLE_RevMap_4 = backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3;
#line 1396 "switch_util.m"
        else
#line 1397 "switch_util.m"
          {
#line 1397 "switch_util.m"
            MR_Word backend_libs__switch_util__Entry_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1397 "switch_util.m"
            MR_Word backend_libs__switch_util__Entries_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1397 "switch_util.m"
            MR_Integer backend_libs__switch_util__Ptag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Entry_9, (MR_Integer) 0)));
#line 1397 "switch_util.m"
            MR_Word backend_libs__switch_util__Case_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Entry_9, (MR_Integer) 1)));
#line 1397 "switch_util.m"
            MR_Word backend_libs__switch_util__CountSecTagLocn_15;
#line 1397 "switch_util.m"
            MR_Integer backend_libs__switch_util__Count_16;
#line 1397 "switch_util.m"
            MR_Word backend_libs__switch_util__V_25_25;
#line 1397 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36;
#line 1399 "switch_util.m"
            MR_Box backend_libs__switch_util__conv0_V_25_25;

#line 1399 "switch_util.m"
            {
#line 1399 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__HeadVar__2_2, backend_libs__switch_util__Ptag_13, &backend_libs__switch_util__conv0_V_25_25);
            }
#line 1399 "switch_util.m"
            backend_libs__switch_util__V_25_25 = ((MR_Word) backend_libs__switch_util__conv0_V_25_25);
#line 1399 "switch_util.m"
            backend_libs__switch_util__CountSecTagLocn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_25_25, (MR_Integer) 0)));
#line 1399 "switch_util.m"
            backend_libs__switch_util__Count_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_25_25, (MR_Integer) 1)));
#line 1415 "switch_util.m"
            if ((((backend_libs__switch_util__CountSecTagLocn_15 == (MR_Integer) 2)) || ((backend_libs__switch_util__CountSecTagLocn_15 == (MR_Integer) 3))))
#line 1418 "switch_util.m"
              {
#line 1418 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_60_60;
#line 1418 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_62_62;
#line 1418 "switch_util.m"
                MR_Word backend_libs__switch_util__NewEntry_41;
#line 1432 "switch_util.m"
                MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_RevMap_36_36;

#line 1431 "switch_util.m"
                {
#line 1431 "switch_util.m"
                  backend_libs__switch_util__NewEntry_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1431 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 0) = ((MR_Box) (backend_libs__switch_util__Count_16));
#line 1431 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 1) = ((MR_Box) (backend_libs__switch_util__Ptag_13));
#line 1431 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1431 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 3) = ((MR_Box) (backend_libs__switch_util__Case_14));
#line 1431 "switch_util.m"
                }
#line 8563 "backend_libs.switch_util.c"
                {
#line 8565 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8567 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_60_60, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8569 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_60_60, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8571 "backend_libs.switch_util.c"
                }
#line 8573 "backend_libs.switch_util.c"
                {
#line 8575 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8577 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_62_62, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 8579 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_62_62, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8581 "backend_libs.switch_util.c"
                }
#line 1432 "switch_util.m"
                {
#line 1432 "switch_util.m"
                  mercury__map__det_insert_4_p_0(backend_libs__switch_util__TypeInfo_60_60, backend_libs__switch_util__TypeInfo_62_62, ((MR_Box) (backend_libs__switch_util__Case_14)), ((MR_Box) (backend_libs__switch_util__NewEntry_41)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, &backend_libs__switch_util__conv1_STATE_VARIABLE_RevMap_36_36);
                }
#line 1432 "switch_util.m"
                backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_RevMap_36_36;
#line 1418 "switch_util.m"
              }
#line 1415 "switch_util.m"
            else
#line 1411 "switch_util.m"
              {
#line 1411 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_46_46;
#line 1411 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_48_48;
#line 1411 "switch_util.m"
                MR_Word backend_libs__switch_util__OldEntry_17;
#line 1404 "switch_util.m"
                MR_Box backend_libs__switch_util__conv2_OldEntry_17;

#line 8605 "backend_libs.switch_util.c"
                {
#line 8607 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8609 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_46_46, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8611 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_46_46, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8613 "backend_libs.switch_util.c"
                }
#line 8615 "backend_libs.switch_util.c"
                {
#line 8617 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8619 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_48_48, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 8621 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_48_48, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8623 "backend_libs.switch_util.c"
                }
#line 1404 "switch_util.m"
                {
#line 1404 "switch_util.m"
                  backend_libs__switch_util__succeeded = mercury__map__search_3_p_0(backend_libs__switch_util__TypeInfo_46_46, backend_libs__switch_util__TypeInfo_48_48, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, ((MR_Box) (backend_libs__switch_util__Case_14)), &backend_libs__switch_util__conv2_OldEntry_17);
                }
#line 1404 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1404 "switch_util.m"
                  {
#line 1404 "switch_util.m"
                    backend_libs__switch_util__OldEntry_17 = ((MR_Word) backend_libs__switch_util__conv2_OldEntry_17);
#line 1404 "switch_util.m"
                    backend_libs__switch_util__succeeded = MR_TRUE;
#line 1404 "switch_util.m"
                  }
#line 1411 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1406 "switch_util.m"
                  {
#line 1406 "switch_util.m"
                    MR_Integer backend_libs__switch_util__OldCount_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 0)));
#line 1406 "switch_util.m"
                    MR_Integer backend_libs__switch_util__OldFirstPtag_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 1)));
#line 1406 "switch_util.m"
                    MR_Word backend_libs__switch_util__OldLaterPtags0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 2)));
#line 1406 "switch_util.m"
                    MR_Word backend_libs__switch_util__OldCase_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 3)));
#line 1406 "switch_util.m"
                    MR_Word backend_libs__switch_util__NewEntry_22;
#line 1406 "switch_util.m"
                    MR_Word backend_libs__switch_util__V_28_28;
#line 1406 "switch_util.m"
                    MR_Integer backend_libs__switch_util__V_32_32;
#line 1406 "switch_util.m"
                    MR_Word backend_libs__switch_util__V_33_33;
#line 1406 "switch_util.m"
                    MR_Word backend_libs__switch_util__V_34_34;
#line 1410 "switch_util.m"
                    MR_Word backend_libs__switch_util__conv3_STATE_VARIABLE_RevMap_36_36;

#line 1407 "switch_util.m"
                    {
#line 1407 "switch_util.m"
                      backend_libs__switch_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1407 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_6[1]));
#line 1407 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 1) = ((MR_Box) (backend_libs__switch_util__build_ptag_case_rev_map_4_p_0_1));
#line 1407 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1407 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 1407 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 4) = ((MR_Box) (backend_libs__switch_util__Case_14));
#line 1407 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 5) = ((MR_Box) (backend_libs__switch_util__OldCase_21));
#line 1407 "switch_util.m"
                    }
#line 1407 "switch_util.m"
                    {
#line 1407 "switch_util.m"
                      mercury__require__expect_4_p_0(backend_libs__switch_util__V_28_28, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.build_ptag_case_rev_map\'/4", (MR_String) "Case != OldCase");
                    }
#line 1408 "switch_util.m"
                    backend_libs__switch_util__V_32_32 = (backend_libs__switch_util__OldCount_18 + backend_libs__switch_util__Count_16);
#line 1409 "switch_util.m"
                    {
#line 1409 "switch_util.m"
                      backend_libs__switch_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "switch_util.m"
                      MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_34_34, 0) = ((MR_Box) (backend_libs__switch_util__Ptag_13));
#line 1409 "switch_util.m"
                      MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1409 "switch_util.m"
                    }
#line 1409 "switch_util.m"
                    {
#line 1409 "switch_util.m"
                      backend_libs__switch_util__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__OldLaterPtags0_20, backend_libs__switch_util__V_34_34);
                    }
#line 1408 "switch_util.m"
                    {
#line 1408 "switch_util.m"
                      backend_libs__switch_util__NewEntry_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1408 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 0) = ((MR_Box) (backend_libs__switch_util__V_32_32));
#line 1408 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 1) = ((MR_Box) (backend_libs__switch_util__OldFirstPtag_19));
#line 1408 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 2) = ((MR_Box) (backend_libs__switch_util__V_33_33));
#line 1408 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 3) = ((MR_Box) (backend_libs__switch_util__OldCase_21));
#line 1408 "switch_util.m"
                    }
#line 1410 "switch_util.m"
                    {
#line 1410 "switch_util.m"
                      mercury__map__det_update_4_p_0(backend_libs__switch_util__TypeInfo_46_46, backend_libs__switch_util__TypeInfo_48_48, ((MR_Box) (backend_libs__switch_util__Case_14)), ((MR_Box) (backend_libs__switch_util__NewEntry_22)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, &backend_libs__switch_util__conv3_STATE_VARIABLE_RevMap_36_36);
                    }
#line 1410 "switch_util.m"
                    backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36 = (MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_RevMap_36_36;
#line 1406 "switch_util.m"
                  }
#line 1411 "switch_util.m"
                else
#line 1412 "switch_util.m"
                  {
#line 1412 "switch_util.m"
                    MR_Word backend_libs__switch_util__TypeInfo_56_56;
#line 1412 "switch_util.m"
                    MR_Word backend_libs__switch_util__TypeInfo_58_58;
#line 1412 "switch_util.m"
                    MR_Word backend_libs__switch_util__NewEntry_40;
#line 1413 "switch_util.m"
                    MR_Word backend_libs__switch_util__conv4_STATE_VARIABLE_RevMap_36_36;

#line 1412 "switch_util.m"
                    {
#line 1412 "switch_util.m"
                      backend_libs__switch_util__NewEntry_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1412 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 0) = ((MR_Box) (backend_libs__switch_util__Count_16));
#line 1412 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 1) = ((MR_Box) (backend_libs__switch_util__Ptag_13));
#line 1412 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1412 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 3) = ((MR_Box) (backend_libs__switch_util__Case_14));
#line 1412 "switch_util.m"
                    }
#line 8755 "backend_libs.switch_util.c"
                    {
#line 8757 "backend_libs.switch_util.c"
                      backend_libs__switch_util__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8759 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_56_56, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8761 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_56_56, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8763 "backend_libs.switch_util.c"
                    }
#line 8765 "backend_libs.switch_util.c"
                    {
#line 8767 "backend_libs.switch_util.c"
                      backend_libs__switch_util__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8769 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_58_58, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 8771 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_58_58, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8773 "backend_libs.switch_util.c"
                    }
#line 1413 "switch_util.m"
                    {
#line 1413 "switch_util.m"
                      mercury__map__det_insert_4_p_0(backend_libs__switch_util__TypeInfo_56_56, backend_libs__switch_util__TypeInfo_58_58, ((MR_Box) (backend_libs__switch_util__Case_14)), ((MR_Box) (backend_libs__switch_util__NewEntry_40)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, &backend_libs__switch_util__conv4_STATE_VARIABLE_RevMap_36_36);
                    }
#line 1413 "switch_util.m"
                    backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36 = (MR_Word) backend_libs__switch_util__conv4_STATE_VARIABLE_RevMap_36_36;
#line 1412 "switch_util.m"
                  }
#line 1411 "switch_util.m"
              }
#line 1434 "switch_util.m"
            /* direct tailcall eliminated */
#line 1434 "switch_util.m"
            {
#line 1434 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Entries_10;
#line 1434 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_0__tmp_copy_3 = backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36;

#line 1434 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3 = backend_libs__switch_util__STATE_VARIABLE_RevMap_0__tmp_copy_3;
#line 1434 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 1434 "switch_util.m"
            }
#line 1434 "switch_util.m"
            continue;
#line 1397 "switch_util.m"
          }
#line 1396 "switch_util.m"
      }
#line 1396 "switch_util.m"
      break;
#line 1396 "switch_util.m"
    }
#line 1392 "switch_util.m"
}

#line 1367 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__interpret_rev_map_entry_2_p_0(
#line 1367 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_9,
#line 1367 "switch_util.m"
  MR_Word backend_libs__switch_util__RevEntry_3,
#line 1367 "switch_util.m"
  MR_Word * backend_libs__switch_util__GroupEntry_4)
#line 1367 "switch_util.m"
{
#line 1370 "switch_util.m"
  {
#line 1370 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1370 "switch_util.m"
    MR_Integer backend_libs__switch_util__MainPtag_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 1)));
#line 1370 "switch_util.m"
    MR_Word backend_libs__switch_util__OtherPtags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 2)));
#line 1370 "switch_util.m"
    MR_Word backend_libs__switch_util__Case_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 3)));
#line 1371 "switch_util.m"
    MR_Integer backend_libs__switch_util___Count_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 0)));

#line 1372 "switch_util.m"
    {
#line 1372 "switch_util.m"
      MR_Word base;
#line 1372 "switch_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1372 "switch_util.m"
      *backend_libs__switch_util__GroupEntry_4 = base;
#line 1372 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__switch_util__MainPtag_6));
#line 1372 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__switch_util__OtherPtags_7));
#line 1372 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__switch_util__Case_8));
#line 1372 "switch_util.m"
    }
#line 1370 "switch_util.m"
  }
#line 1367 "switch_util.m"
}

#line 1302 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_2(
#line 1302 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1302 "switch_util.m"
{
#line 1302 "switch_util.m"
  {
#line 1302 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1302 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1302 "switch_util.m"
    {
#line 1302 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1302__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))));
    }
#line 1302 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1302 "switch_util.m"
  }
#line 1302 "switch_util.m"
}

#line 1316 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_1(
#line 1316 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1316 "switch_util.m"
{
#line 1316 "switch_util.m"
  {
#line 1316 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1316 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1316 "switch_util.m"
    {
#line 1316 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1316__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))));
    }
#line 1316 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1316 "switch_util.m"
  }
#line 1316 "switch_util.m"
}

#line 1272 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0(
#line 1272 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_107,
#line 1272 "switch_util.m"
  MR_Word backend_libs__switch_util__CaseId_8,
#line 1272 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_9,
#line 1272 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_10,
#line 1272 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_0_52,
#line 1272 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_53,
#line 1272 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54,
#line 1272 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55)
#line 1272 "switch_util.m"
{
#line 1277 "switch_util.m"
  {
#line 1277 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1277 "switch_util.m"
    MR_Word backend_libs__switch_util__Tag_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_10, (MR_Integer) 1)));
#line 1277 "switch_util.m"
    MR_Integer backend_libs__switch_util__Primary_15;
#line 1278 "switch_util.m"
    MR_Word backend_libs__switch_util___ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_10, (MR_Integer) 0)));
#line 1349 "switch_util.m"
    MR_Word backend_libs__switch_util__Ptags0_50;
#line 1346 "switch_util.m"
    MR_Box backend_libs__switch_util__conv12_Ptags0_50;

#line 1298 "switch_util.m"
    if ((backend_libs__switch_util__Tag_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1290 "switch_util.m"
      {
#line 1291 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_110_146;
#line 1291 "switch_util.m"
        MR_Word backend_libs__switch_util___Group_142;
#line 1291 "switch_util.m"
        MR_Box backend_libs__switch_util__conv0__Group_142;

#line 1282 "switch_util.m"
        backend_libs__switch_util__Primary_15 = (MR_Integer) 0;
#line 8960 "backend_libs.switch_util.c"
        {
#line 8962 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_110_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8964 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_146, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8966 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_146, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 8968 "backend_libs.switch_util.c"
        }
#line 1291 "switch_util.m"
        {
#line 1291 "switch_util.m"
          backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_110_146, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv0__Group_142);
        }
#line 1291 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1291 "switch_util.m"
          {
#line 1291 "switch_util.m"
            backend_libs__switch_util___Group_142 = ((MR_Word) backend_libs__switch_util__conv0__Group_142);
#line 1291 "switch_util.m"
            backend_libs__switch_util__succeeded = MR_TRUE;
#line 1291 "switch_util.m"
          }
#line 1293 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1292 "switch_util.m"
          {
#line 1292 "switch_util.m"
            {
#line 1292 "switch_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "unshared tag is shared");
#line 1292 "switch_util.m"
              return;
            }
#line 1292 "switch_util.m"
          }
#line 1293 "switch_util.m"
        else
#line 1294 "switch_util.m"
          {
#line 1294 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_113_155;
#line 1294 "switch_util.m"
            MR_Word backend_libs__switch_util__StagGoalMap_150;
#line 1294 "switch_util.m"
            MR_Word backend_libs__switch_util__V_152_152;
#line 1295 "switch_util.m"
            MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55;

#line 1294 "switch_util.m"
            {
#line 1294 "switch_util.m"
              backend_libs__switch_util__StagGoalMap_150 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) ((MR_Integer) -1)), backend_libs__switch_util__CaseRep_9);
            }
#line 1295 "switch_util.m"
            {
#line 1295 "switch_util.m"
              backend_libs__switch_util__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1295 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_152_152, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1295 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_152_152, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_150));
#line 1295 "switch_util.m"
            }
#line 9026 "backend_libs.switch_util.c"
            {
#line 9028 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_113_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9030 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_155, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9032 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_155, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9034 "backend_libs.switch_util.c"
            }
#line 1295 "switch_util.m"
            {
#line 1295 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_113_155, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_152_152)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55);
            }
#line 1295 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55;
#line 1294 "switch_util.m"
          }
#line 1290 "switch_util.m"
      }
#line 1298 "switch_util.m"
    else
#line 1298 "switch_util.m"
    if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1290 "switch_util.m"
      {
#line 1291 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_110_110;
#line 1291 "switch_util.m"
        MR_Word backend_libs__switch_util___Group_17;
#line 1291 "switch_util.m"
        MR_Box backend_libs__switch_util__conv2__Group_17;

#line 1288 "switch_util.m"
        backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 9062 "backend_libs.switch_util.c"
        {
#line 9064 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9066 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_110, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9068 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_110, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9070 "backend_libs.switch_util.c"
        }
#line 1291 "switch_util.m"
        {
#line 1291 "switch_util.m"
          backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_110_110, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv2__Group_17);
        }
#line 1291 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1291 "switch_util.m"
          {
#line 1291 "switch_util.m"
            backend_libs__switch_util___Group_17 = ((MR_Word) backend_libs__switch_util__conv2__Group_17);
#line 1291 "switch_util.m"
            backend_libs__switch_util__succeeded = MR_TRUE;
#line 1291 "switch_util.m"
          }
#line 1293 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1292 "switch_util.m"
          {
#line 1292 "switch_util.m"
            {
#line 1292 "switch_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "unshared tag is shared");
#line 1292 "switch_util.m"
              return;
            }
#line 1292 "switch_util.m"
          }
#line 1293 "switch_util.m"
        else
#line 1294 "switch_util.m"
          {
#line 1294 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_113_113;
#line 1294 "switch_util.m"
            MR_Word backend_libs__switch_util__StagGoalMap_18;
#line 1294 "switch_util.m"
            MR_Word backend_libs__switch_util__V_85_85;
#line 1295 "switch_util.m"
            MR_Word backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_55;

#line 1294 "switch_util.m"
            {
#line 1294 "switch_util.m"
              backend_libs__switch_util__StagGoalMap_18 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) ((MR_Integer) -1)), backend_libs__switch_util__CaseRep_9);
            }
#line 1295 "switch_util.m"
            {
#line 1295 "switch_util.m"
              backend_libs__switch_util__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1295 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_85_85, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1295 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_85_85, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_18));
#line 1295 "switch_util.m"
            }
#line 9128 "backend_libs.switch_util.c"
            {
#line 9130 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9132 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_113, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9134 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_113, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9136 "backend_libs.switch_util.c"
            }
#line 1295 "switch_util.m"
            {
#line 1295 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_113_113, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_85_85)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_55);
            }
#line 1295 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_55;
#line 1294 "switch_util.m"
          }
#line 1290 "switch_util.m"
      }
#line 1298 "switch_util.m"
    else
#line 1298 "switch_util.m"
    if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1313 "switch_util.m"
      {
#line 1313 "switch_util.m"
        MR_Integer backend_libs__switch_util__Secondary_102;
#line 1321 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_126_126;
#line 1321 "switch_util.m"
        MR_Word backend_libs__switch_util__Group_98;
#line 1314 "switch_util.m"
        MR_Box backend_libs__switch_util__conv4_Group_98;

#line 1313 "switch_util.m"
        backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 1313 "switch_util.m"
        backend_libs__switch_util__Secondary_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 2)));
#line 9168 "backend_libs.switch_util.c"
        {
#line 9170 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9172 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_126_126, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9174 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_126_126, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9176 "backend_libs.switch_util.c"
        }
#line 1314 "switch_util.m"
        {
#line 1314 "switch_util.m"
          backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_126_126, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv4_Group_98);
        }
#line 1314 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1314 "switch_util.m"
          {
#line 1314 "switch_util.m"
            backend_libs__switch_util__Group_98 = ((MR_Word) backend_libs__switch_util__conv4_Group_98);
#line 1314 "switch_util.m"
            backend_libs__switch_util__succeeded = MR_TRUE;
#line 1314 "switch_util.m"
          }
#line 1321 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1315 "switch_util.m"
          {
#line 1315 "switch_util.m"
            MR_Word backend_libs__switch_util__V_59_59;
#line 1315 "switch_util.m"
            MR_Word backend_libs__switch_util__V_64_64;
#line 1315 "switch_util.m"
            MR_Word backend_libs__switch_util__StagGoalMap_93;
#line 1315 "switch_util.m"
            MR_Word backend_libs__switch_util__StagLoc_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_98, (MR_Integer) 0)));
#line 1315 "switch_util.m"
            MR_Word backend_libs__switch_util__StagGoalMap0_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_98, (MR_Integer) 1)));
#line 1319 "switch_util.m"
            MR_Word backend_libs__switch_util__conv5_STATE_VARIABLE_PtagCaseMap_55;

#line 1316 "switch_util.m"
            {
#line 1316 "switch_util.m"
              backend_libs__switch_util__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1316 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_7[1]));
#line 1316 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 1) = ((MR_Box) (backend_libs__switch_util__group_case_by_ptag_7_p_0_1));
#line 1316 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1316 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1316 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 4) = ((MR_Box) (backend_libs__switch_util__StagLoc_94));
#line 1316 "switch_util.m"
            }
#line 1316 "switch_util.m"
            {
#line 1316 "switch_util.m"
              mercury__require__expect_4_p_0(backend_libs__switch_util__V_59_59, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "local tag is shared with non-local");
            }
#line 1318 "switch_util.m"
            {
#line 1318 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_107, backend_libs__switch_util__Secondary_102, backend_libs__switch_util__CaseRep_9, backend_libs__switch_util__StagGoalMap0_95, &backend_libs__switch_util__StagGoalMap_93);
            }
#line 1319 "switch_util.m"
            {
#line 1319 "switch_util.m"
              backend_libs__switch_util__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1319 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_64_64, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1319 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_64_64, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_93));
#line 1319 "switch_util.m"
            }
#line 1319 "switch_util.m"
            {
#line 1319 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_126_126, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_64_64)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv5_STATE_VARIABLE_PtagCaseMap_55);
            }
#line 1319 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv5_STATE_VARIABLE_PtagCaseMap_55;
#line 1315 "switch_util.m"
          }
#line 1321 "switch_util.m"
        else
#line 1322 "switch_util.m"
          {
#line 1322 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_133_133;
#line 1322 "switch_util.m"
            MR_Word backend_libs__switch_util__V_67_67;
#line 1322 "switch_util.m"
            MR_Word backend_libs__switch_util__StagGoalMap_96;
#line 1323 "switch_util.m"
            MR_Word backend_libs__switch_util__conv6_STATE_VARIABLE_PtagCaseMap_55;

#line 1322 "switch_util.m"
            {
#line 1322 "switch_util.m"
              backend_libs__switch_util__StagGoalMap_96 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) (backend_libs__switch_util__Secondary_102)), backend_libs__switch_util__CaseRep_9);
            }
#line 1323 "switch_util.m"
            {
#line 1323 "switch_util.m"
              backend_libs__switch_util__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1323 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_67_67, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1323 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_67_67, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_96));
#line 1323 "switch_util.m"
            }
#line 9283 "backend_libs.switch_util.c"
            {
#line 9285 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9287 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_133_133, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9289 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_133_133, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9291 "backend_libs.switch_util.c"
            }
#line 1323 "switch_util.m"
            {
#line 1323 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_133_133, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_67_67)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv6_STATE_VARIABLE_PtagCaseMap_55);
            }
#line 1323 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv6_STATE_VARIABLE_PtagCaseMap_55;
#line 1322 "switch_util.m"
          }
#line 1313 "switch_util.m"
      }
#line 1298 "switch_util.m"
    else
#line 1298 "switch_util.m"
    if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1299 "switch_util.m"
      {
#line 1299 "switch_util.m"
        MR_Integer backend_libs__switch_util__Secondary_19;
#line 1307 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_116_116;
#line 1307 "switch_util.m"
        MR_Word backend_libs__switch_util__Group_20;
#line 1300 "switch_util.m"
        MR_Box backend_libs__switch_util__conv7_Group_20;

#line 1299 "switch_util.m"
        backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 1299 "switch_util.m"
        backend_libs__switch_util__Secondary_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 2)));
#line 9323 "backend_libs.switch_util.c"
        {
#line 9325 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9327 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_116_116, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9329 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_116_116, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9331 "backend_libs.switch_util.c"
        }
#line 1300 "switch_util.m"
        {
#line 1300 "switch_util.m"
          backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_116_116, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv7_Group_20);
        }
#line 1300 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1300 "switch_util.m"
          {
#line 1300 "switch_util.m"
            backend_libs__switch_util__Group_20 = ((MR_Word) backend_libs__switch_util__conv7_Group_20);
#line 1300 "switch_util.m"
            backend_libs__switch_util__succeeded = MR_TRUE;
#line 1300 "switch_util.m"
          }
#line 1307 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1301 "switch_util.m"
          {
#line 1301 "switch_util.m"
            MR_Word backend_libs__switch_util__StagLoc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_20, (MR_Integer) 0)));
#line 1301 "switch_util.m"
            MR_Word backend_libs__switch_util__StagGoalMap0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_20, (MR_Integer) 1)));
#line 1301 "switch_util.m"
            MR_Word backend_libs__switch_util__V_70_70;
#line 1301 "switch_util.m"
            MR_Word backend_libs__switch_util__V_75_75;
#line 1301 "switch_util.m"
            MR_Word backend_libs__switch_util__StagGoalMap_89;
#line 1305 "switch_util.m"
            MR_Word backend_libs__switch_util__conv8_STATE_VARIABLE_PtagCaseMap_55;

#line 1302 "switch_util.m"
            {
#line 1302 "switch_util.m"
              backend_libs__switch_util__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1302 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_7[1]));
#line 1302 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 1) = ((MR_Box) (backend_libs__switch_util__group_case_by_ptag_7_p_0_2));
#line 1302 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1302 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 3) = ((MR_Box) (backend_libs__switch_util__StagLoc_21));
#line 1302 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 4) = ((MR_Box) ((MR_Integer) 3));
#line 1302 "switch_util.m"
            }
#line 1302 "switch_util.m"
            {
#line 1302 "switch_util.m"
              mercury__require__expect_4_p_0(backend_libs__switch_util__V_70_70, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "remote tag is shared with non-remote");
            }
#line 1304 "switch_util.m"
            {
#line 1304 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_107, backend_libs__switch_util__Secondary_19, backend_libs__switch_util__CaseRep_9, backend_libs__switch_util__StagGoalMap0_22, &backend_libs__switch_util__StagGoalMap_89);
            }
#line 1305 "switch_util.m"
            {
#line 1305 "switch_util.m"
              backend_libs__switch_util__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1305 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_89));
#line 1305 "switch_util.m"
            }
#line 1305 "switch_util.m"
            {
#line 1305 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_116_116, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_75_75)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv8_STATE_VARIABLE_PtagCaseMap_55);
            }
#line 1305 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv8_STATE_VARIABLE_PtagCaseMap_55;
#line 1301 "switch_util.m"
          }
#line 1307 "switch_util.m"
        else
#line 1308 "switch_util.m"
          {
#line 1308 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_123_123;
#line 1308 "switch_util.m"
            MR_Word backend_libs__switch_util__V_78_78;
#line 1308 "switch_util.m"
            MR_Word backend_libs__switch_util__StagGoalMap_90;
#line 1309 "switch_util.m"
            MR_Word backend_libs__switch_util__conv9_STATE_VARIABLE_PtagCaseMap_55;

#line 1308 "switch_util.m"
            {
#line 1308 "switch_util.m"
              backend_libs__switch_util__StagGoalMap_90 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) (backend_libs__switch_util__Secondary_19)), backend_libs__switch_util__CaseRep_9);
            }
#line 1309 "switch_util.m"
            {
#line 1309 "switch_util.m"
              backend_libs__switch_util__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1309 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_78_78, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1309 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_78_78, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_90));
#line 1309 "switch_util.m"
            }
#line 9438 "backend_libs.switch_util.c"
            {
#line 9440 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9442 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_123_123, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9444 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_123_123, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9446 "backend_libs.switch_util.c"
            }
#line 1309 "switch_util.m"
            {
#line 1309 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_123_123, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_78_78)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv9_STATE_VARIABLE_PtagCaseMap_55);
            }
#line 1309 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv9_STATE_VARIABLE_PtagCaseMap_55;
#line 1308 "switch_util.m"
          }
#line 1299 "switch_util.m"
      }
#line 1298 "switch_util.m"
    else
#line 1298 "switch_util.m"
    if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1290 "switch_util.m"
      {
#line 1291 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_110_187;
#line 1291 "switch_util.m"
        MR_Word backend_libs__switch_util___Group_183;
#line 1291 "switch_util.m"
        MR_Box backend_libs__switch_util__conv10__Group_183;

#line 1285 "switch_util.m"
        backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 9474 "backend_libs.switch_util.c"
        {
#line 9476 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_110_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9478 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_187, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9480 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_187, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9482 "backend_libs.switch_util.c"
        }
#line 1291 "switch_util.m"
        {
#line 1291 "switch_util.m"
          backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_110_187, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv10__Group_183);
        }
#line 1291 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1291 "switch_util.m"
          {
#line 1291 "switch_util.m"
            backend_libs__switch_util___Group_183 = ((MR_Word) backend_libs__switch_util__conv10__Group_183);
#line 1291 "switch_util.m"
            backend_libs__switch_util__succeeded = MR_TRUE;
#line 1291 "switch_util.m"
          }
#line 1293 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1292 "switch_util.m"
          {
#line 1292 "switch_util.m"
            {
#line 1292 "switch_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "unshared tag is shared");
#line 1292 "switch_util.m"
              return;
            }
#line 1292 "switch_util.m"
          }
#line 1293 "switch_util.m"
        else
#line 1294 "switch_util.m"
          {
#line 1294 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_113_196;
#line 1294 "switch_util.m"
            MR_Word backend_libs__switch_util__StagGoalMap_191;
#line 1294 "switch_util.m"
            MR_Word backend_libs__switch_util__V_193_193;
#line 1295 "switch_util.m"
            MR_Word backend_libs__switch_util__conv11_STATE_VARIABLE_PtagCaseMap_55;

#line 1294 "switch_util.m"
            {
#line 1294 "switch_util.m"
              backend_libs__switch_util__StagGoalMap_191 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) ((MR_Integer) -1)), backend_libs__switch_util__CaseRep_9);
            }
#line 1295 "switch_util.m"
            {
#line 1295 "switch_util.m"
              backend_libs__switch_util__V_193_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1295 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_193_193, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1295 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_193_193, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_191));
#line 1295 "switch_util.m"
            }
#line 9540 "backend_libs.switch_util.c"
            {
#line 9542 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_113_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9544 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_196, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9546 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_196, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9548 "backend_libs.switch_util.c"
            }
#line 1295 "switch_util.m"
            {
#line 1295 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_113_196, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_193_193)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv11_STATE_VARIABLE_PtagCaseMap_55);
            }
#line 1295 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv11_STATE_VARIABLE_PtagCaseMap_55;
#line 1294 "switch_util.m"
          }
#line 1290 "switch_util.m"
      }
#line 1298 "switch_util.m"
    else
#line 1343 "switch_util.m"
      {
#line 1344 "switch_util.m"
        {
#line 1344 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "non-du tag");
#line 1344 "switch_util.m"
          return;
        }
#line 1343 "switch_util.m"
      }
#line 1346 "switch_util.m"
    {
#line 1346 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &backend_libs__switch_util_scalar_common_1[0], backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_0_52, ((MR_Box) (backend_libs__switch_util__CaseId_8)), &backend_libs__switch_util__conv12_Ptags0_50);
    }
#line 1346 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1346 "switch_util.m"
      {
#line 1346 "switch_util.m"
        backend_libs__switch_util__Ptags0_50 = ((MR_Word) backend_libs__switch_util__conv12_Ptags0_50);
#line 1346 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 1346 "switch_util.m"
      }
#line 1349 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1347 "switch_util.m"
      {
#line 1347 "switch_util.m"
        MR_Word backend_libs__switch_util__Ptags_51;

#line 1347 "switch_util.m"
        {
#line 1347 "switch_util.m"
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (backend_libs__switch_util__Primary_15)), backend_libs__switch_util__Ptags0_50, &backend_libs__switch_util__Ptags_51);
        }
#line 1348 "switch_util.m"
        {
#line 1348 "switch_util.m"
          mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &backend_libs__switch_util_scalar_common_1[0], ((MR_Box) (backend_libs__switch_util__CaseId_8)), ((MR_Box) (backend_libs__switch_util__Ptags_51)), backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_0_52, backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_53);
#line 1348 "switch_util.m"
          return;
        }
#line 1347 "switch_util.m"
      }
#line 1349 "switch_util.m"
    else
#line 1350 "switch_util.m"
      {
#line 1350 "switch_util.m"
        MR_Word backend_libs__switch_util__Ptags_106;

#line 1350 "switch_util.m"
        {
#line 1350 "switch_util.m"
          backend_libs__switch_util__Ptags_106 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (backend_libs__switch_util__Primary_15)));
        }
#line 1351 "switch_util.m"
        {
#line 1351 "switch_util.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &backend_libs__switch_util_scalar_common_1[0], ((MR_Box) (backend_libs__switch_util__CaseId_8)), ((MR_Box) (backend_libs__switch_util__Ptags_106)), backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_0_52, backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_53);
#line 1351 "switch_util.m"
          return;
        }
#line 1350 "switch_util.m"
      }
#line 1277 "switch_util.m"
  }
#line 1272 "switch_util.m"
}

#line 1159 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__get_ptag_counts_loop_5_p_0(
#line 1159 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1159 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2,
#line 1159 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_3,
#line 1159 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4,
#line 1159 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_5)
#line 1159 "switch_util.m"
{
#line 1162 "switch_util.m"
  while (MR_TRUE)
#line 1162 "switch_util.m"
    {
#line 1162 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1162 "switch_util.m"
      {
#line 1162 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 1162 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1162 "switch_util.m"
          {
#line 1162 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_5 = backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4;
#line 1162 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_3 = backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2;
#line 1162 "switch_util.m"
          }
#line 1162 "switch_util.m"
        else
#line 1163 "switch_util.m"
          {
#line 1163 "switch_util.m"
            MR_Word backend_libs__switch_util__Tag_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1163 "switch_util.m"
            MR_Word backend_libs__switch_util__Tags_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1163 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78;
#line 1163 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83;

#line 1182 "switch_util.m"
            if ((backend_libs__switch_util__Tag_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1175 "switch_util.m"
              {
#line 1177 "switch_util.m"
                MR_Word backend_libs__switch_util__V_117_117;
#line 1177 "switch_util.m"
                MR_Box backend_libs__switch_util__conv0_V_117_117;

#line 1176 "switch_util.m"
                {
#line 1176 "switch_util.m"
                  mercury__int__max_3_p_0((MR_Integer) 0, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                }
#line 1177 "switch_util.m"
                {
#line 1177 "switch_util.m"
                  backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, (MR_Integer) 0, &backend_libs__switch_util__conv0_V_117_117);
                }
#line 1177 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1177 "switch_util.m"
                  {
#line 1177 "switch_util.m"
                    backend_libs__switch_util__V_117_117 = ((MR_Word) backend_libs__switch_util__conv0_V_117_117);
#line 1177 "switch_util.m"
                    backend_libs__switch_util__succeeded = MR_TRUE;
#line 1177 "switch_util.m"
                  }
#line 1179 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1178 "switch_util.m"
                  {
#line 1178 "switch_util.m"
                    {
#line 1178 "switch_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "unshared tag is shared");
#line 1178 "switch_util.m"
                      return;
                    }
#line 1178 "switch_util.m"
                  }
#line 1179 "switch_util.m"
                else
#line 1180 "switch_util.m"
                  {
#line 1180 "switch_util.m"
                    {
#line 1180 "switch_util.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], (MR_Integer) 0, ((MR_Box) (&backend_libs__switch_util_scalar_common_1[3])), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                    }
#line 1180 "switch_util.m"
                  }
#line 1175 "switch_util.m"
              }
#line 1182 "switch_util.m"
            else
#line 1182 "switch_util.m"
            if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1175 "switch_util.m"
              {
#line 1175 "switch_util.m"
                MR_Integer backend_libs__switch_util__Primary_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1177 "switch_util.m"
                MR_Word backend_libs__switch_util__V_18_18;
#line 1177 "switch_util.m"
                MR_Box backend_libs__switch_util__conv1_V_18_18;

#line 1176 "switch_util.m"
                {
#line 1176 "switch_util.m"
                  mercury__int__max_3_p_0(backend_libs__switch_util__Primary_16, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                }
#line 1177 "switch_util.m"
                {
#line 1177 "switch_util.m"
                  backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_16, &backend_libs__switch_util__conv1_V_18_18);
                }
#line 1177 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1177 "switch_util.m"
                  {
#line 1177 "switch_util.m"
                    backend_libs__switch_util__V_18_18 = ((MR_Word) backend_libs__switch_util__conv1_V_18_18);
#line 1177 "switch_util.m"
                    backend_libs__switch_util__succeeded = MR_TRUE;
#line 1177 "switch_util.m"
                  }
#line 1179 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1178 "switch_util.m"
                  {
#line 1178 "switch_util.m"
                    {
#line 1178 "switch_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "unshared tag is shared");
#line 1178 "switch_util.m"
                      return;
                    }
#line 1178 "switch_util.m"
                  }
#line 1179 "switch_util.m"
                else
#line 1180 "switch_util.m"
                  {
#line 1180 "switch_util.m"
                    {
#line 1180 "switch_util.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_16, ((MR_Box) (&backend_libs__switch_util_scalar_common_1[4])), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                    }
#line 1180 "switch_util.m"
                  }
#line 1175 "switch_util.m"
              }
#line 1182 "switch_util.m"
            else
#line 1182 "switch_util.m"
            if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1203 "switch_util.m"
              {
#line 1203 "switch_util.m"
                MR_Integer backend_libs__switch_util__Primary_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1203 "switch_util.m"
                MR_Integer backend_libs__switch_util__Secondary_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 2)));
#line 1219 "switch_util.m"
                MR_Word backend_libs__switch_util__Target_91;
#line 1205 "switch_util.m"
                MR_Box backend_libs__switch_util__conv2_Target_91;

#line 1204 "switch_util.m"
                {
#line 1204 "switch_util.m"
                  mercury__int__max_3_p_0(backend_libs__switch_util__Primary_95, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                }
#line 1205 "switch_util.m"
                {
#line 1205 "switch_util.m"
                  backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_95, &backend_libs__switch_util__conv2_Target_91);
                }
#line 1205 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1205 "switch_util.m"
                  {
#line 1205 "switch_util.m"
                    backend_libs__switch_util__Target_91 = ((MR_Word) backend_libs__switch_util__conv2_Target_91);
#line 1205 "switch_util.m"
                    backend_libs__switch_util__succeeded = MR_TRUE;
#line 1205 "switch_util.m"
                  }
#line 1219 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1206 "switch_util.m"
                  {
#line 1206 "switch_util.m"
                    MR_Word backend_libs__switch_util__V_62_62;
#line 1206 "switch_util.m"
                    MR_Word backend_libs__switch_util__TagType_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_91, (MR_Integer) 0)));
#line 1206 "switch_util.m"
                    MR_Integer backend_libs__switch_util__MaxSoFar_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_91, (MR_Integer) 1)));
#line 1206 "switch_util.m"
                    MR_Integer backend_libs__switch_util__Max_90;

#line 1209 "switch_util.m"
                    if ((backend_libs__switch_util__TagType_88 == (MR_Integer) 2))
#line 1208 "switch_util.m"
                      {
#line 1208 "switch_util.m"
                      }
#line 1209 "switch_util.m"
                    else
#line 1213 "switch_util.m"
                      {
#line 1214 "switch_util.m"
                        {
#line 1214 "switch_util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "local tag is shared with non-local");
#line 1214 "switch_util.m"
                          return;
                        }
#line 1213 "switch_util.m"
                      }
#line 1217 "switch_util.m"
                    {
#line 1217 "switch_util.m"
                      mercury__int__max_3_p_0(backend_libs__switch_util__Secondary_96, backend_libs__switch_util__MaxSoFar_89, &backend_libs__switch_util__Max_90);
                    }
#line 1218 "switch_util.m"
                    {
#line 1218 "switch_util.m"
                      backend_libs__switch_util__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1218 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_62_62, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1218 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_62_62, 1) = ((MR_Box) (backend_libs__switch_util__Max_90));
#line 1218 "switch_util.m"
                    }
#line 1218 "switch_util.m"
                    {
#line 1218 "switch_util.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_95, ((MR_Box) (backend_libs__switch_util__V_62_62)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                    }
#line 1206 "switch_util.m"
                  }
#line 1219 "switch_util.m"
                else
#line 1220 "switch_util.m"
                  {
#line 1220 "switch_util.m"
                    MR_Word backend_libs__switch_util__V_65_65;

#line 1220 "switch_util.m"
                    {
#line 1220 "switch_util.m"
                      backend_libs__switch_util__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1220 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_65_65, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1220 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_65_65, 1) = ((MR_Box) (backend_libs__switch_util__Secondary_96));
#line 1220 "switch_util.m"
                    }
#line 1220 "switch_util.m"
                    {
#line 1220 "switch_util.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_95, ((MR_Box) (backend_libs__switch_util__V_65_65)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                    }
#line 1220 "switch_util.m"
                  }
#line 1203 "switch_util.m"
              }
#line 1182 "switch_util.m"
            else
#line 1182 "switch_util.m"
            if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1183 "switch_util.m"
              {
#line 1183 "switch_util.m"
                MR_Integer backend_libs__switch_util__Secondary_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 2)));
#line 1183 "switch_util.m"
                MR_Integer backend_libs__switch_util__Primary_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1199 "switch_util.m"
                MR_Word backend_libs__switch_util__Target_20;
#line 1185 "switch_util.m"
                MR_Box backend_libs__switch_util__conv3_Target_20;

#line 1184 "switch_util.m"
                {
#line 1184 "switch_util.m"
                  mercury__int__max_3_p_0(backend_libs__switch_util__Primary_87, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                }
#line 1185 "switch_util.m"
                {
#line 1185 "switch_util.m"
                  backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_87, &backend_libs__switch_util__conv3_Target_20);
                }
#line 1185 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1185 "switch_util.m"
                  {
#line 1185 "switch_util.m"
                    backend_libs__switch_util__Target_20 = ((MR_Word) backend_libs__switch_util__conv3_Target_20);
#line 1185 "switch_util.m"
                    backend_libs__switch_util__succeeded = MR_TRUE;
#line 1185 "switch_util.m"
                  }
#line 1199 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1186 "switch_util.m"
                  {
#line 1186 "switch_util.m"
                    MR_Word backend_libs__switch_util__TagType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_20, (MR_Integer) 0)));
#line 1186 "switch_util.m"
                    MR_Integer backend_libs__switch_util__MaxSoFar_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_20, (MR_Integer) 1)));
#line 1186 "switch_util.m"
                    MR_Integer backend_libs__switch_util__Max_23;
#line 1186 "switch_util.m"
                    MR_Word backend_libs__switch_util__V_72_72;

#line 1189 "switch_util.m"
                    if ((backend_libs__switch_util__TagType_21 == (MR_Integer) 3))
#line 1188 "switch_util.m"
                      {
#line 1188 "switch_util.m"
                      }
#line 1189 "switch_util.m"
                    else
#line 1193 "switch_util.m"
                      {
#line 1194 "switch_util.m"
                        {
#line 1194 "switch_util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "remote tag is shared with non-remote");
#line 1194 "switch_util.m"
                          return;
                        }
#line 1193 "switch_util.m"
                      }
#line 1197 "switch_util.m"
                    {
#line 1197 "switch_util.m"
                      mercury__int__max_3_p_0(backend_libs__switch_util__Secondary_19, backend_libs__switch_util__MaxSoFar_22, &backend_libs__switch_util__Max_23);
                    }
#line 1198 "switch_util.m"
                    {
#line 1198 "switch_util.m"
                      backend_libs__switch_util__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1198 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_72_72, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1198 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_72_72, 1) = ((MR_Box) (backend_libs__switch_util__Max_23));
#line 1198 "switch_util.m"
                    }
#line 1198 "switch_util.m"
                    {
#line 1198 "switch_util.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_87, ((MR_Box) (backend_libs__switch_util__V_72_72)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                    }
#line 1186 "switch_util.m"
                  }
#line 1199 "switch_util.m"
                else
#line 1200 "switch_util.m"
                  {
#line 1200 "switch_util.m"
                    MR_Word backend_libs__switch_util__V_75_75;

#line 1200 "switch_util.m"
                    {
#line 1200 "switch_util.m"
                      backend_libs__switch_util__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1200 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1200 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 1) = ((MR_Box) (backend_libs__switch_util__Secondary_19));
#line 1200 "switch_util.m"
                    }
#line 1200 "switch_util.m"
                    {
#line 1200 "switch_util.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_87, ((MR_Box) (backend_libs__switch_util__V_75_75)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                    }
#line 1200 "switch_util.m"
                  }
#line 1183 "switch_util.m"
              }
#line 1182 "switch_util.m"
            else
#line 1182 "switch_util.m"
            if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1175 "switch_util.m"
              {
#line 1175 "switch_util.m"
                MR_Integer backend_libs__switch_util__Primary_171 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1177 "switch_util.m"
                MR_Word backend_libs__switch_util__V_150_150;
#line 1177 "switch_util.m"
                MR_Box backend_libs__switch_util__conv4_V_150_150;

#line 1176 "switch_util.m"
                {
#line 1176 "switch_util.m"
                  mercury__int__max_3_p_0(backend_libs__switch_util__Primary_171, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                }
#line 1177 "switch_util.m"
                {
#line 1177 "switch_util.m"
                  backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_171, &backend_libs__switch_util__conv4_V_150_150);
                }
#line 1177 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1177 "switch_util.m"
                  {
#line 1177 "switch_util.m"
                    backend_libs__switch_util__V_150_150 = ((MR_Word) backend_libs__switch_util__conv4_V_150_150);
#line 1177 "switch_util.m"
                    backend_libs__switch_util__succeeded = MR_TRUE;
#line 1177 "switch_util.m"
                  }
#line 1179 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1178 "switch_util.m"
                  {
#line 1178 "switch_util.m"
                    {
#line 1178 "switch_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "unshared tag is shared");
#line 1178 "switch_util.m"
                      return;
                    }
#line 1178 "switch_util.m"
                  }
#line 1179 "switch_util.m"
                else
#line 1180 "switch_util.m"
                  {
#line 1180 "switch_util.m"
                    {
#line 1180 "switch_util.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_171, ((MR_Box) (&backend_libs__switch_util_scalar_common_1[3])), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                    }
#line 1180 "switch_util.m"
                  }
#line 1175 "switch_util.m"
              }
#line 1182 "switch_util.m"
            else
#line 1239 "switch_util.m"
              {
#line 1240 "switch_util.m"
                {
#line 1240 "switch_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "non-du tag");
#line 1240 "switch_util.m"
                  return;
                }
#line 1239 "switch_util.m"
              }
#line 1242 "switch_util.m"
            /* direct tailcall eliminated */
#line 1242 "switch_util.m"
            {
#line 1242 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Tags_13;
#line 1242 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78;
#line 1242 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0__tmp_copy_4 = backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83;

#line 1242 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4 = backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0__tmp_copy_4;
#line 1242 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2 = backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0__tmp_copy_2;
#line 1242 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 1242 "switch_util.m"
            }
#line 1242 "switch_util.m"
            continue;
#line 1163 "switch_util.m"
          }
#line 1162 "switch_util.m"
      }
#line 1162 "switch_util.m"
      break;
#line 1162 "switch_util.m"
    }
#line 1159 "switch_util.m"
}

#line 1121 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__add_string_binary_entry_4_p_0(
#line 1121 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 1121 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_5,
#line 1121 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_6,
#line 1121 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_12,
#line 1121 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_13)
#line 1121 "switch_util.m"
{
#line 1124 "switch_util.m"
  {
#line 1124 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1124 "switch_util.m"
    MR_Word backend_libs__switch_util__Tag_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_6, (MR_Integer) 1)));
#line 1124 "switch_util.m"
    MR_String backend_libs__switch_util__String_11;
#line 1124 "switch_util.m"
    MR_Word backend_libs__switch_util__V_18_18;
#line 1125 "switch_util.m"
    MR_Word backend_libs__switch_util___ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_6, (MR_Integer) 0)));
#line 1128 "switch_util.m"
    MR_String backend_libs__switch_util__StringPrime_10;

#line 1126 "switch_util.m"
    backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__Tag_9)) == (MR_mktag((MR_Integer) 1)));
#line 1126 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1126 "switch_util.m"
      {
#line 1126 "switch_util.m"
        backend_libs__switch_util__StringPrime_10 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__Tag_9, (MR_Integer) 0)));
#line 1127 "switch_util.m"
        backend_libs__switch_util__String_11 = backend_libs__switch_util__StringPrime_10;
#line 1126 "switch_util.m"
      }
#line 1126 "switch_util.m"
    else
#line 1129 "switch_util.m"
      {
#line 1129 "switch_util.m"
        {
#line 1129 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.add_string_binary_entry\'/4", (MR_String) "non-string case\?");
#line 1129 "switch_util.m"
          return;
        }
#line 1129 "switch_util.m"
      }
#line 1131 "switch_util.m"
    {
#line 1131 "switch_util.m"
      backend_libs__switch_util__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1131 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_18_18, 0) = ((MR_Box) (backend_libs__switch_util__String_11));
#line 1131 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_18_18, 1) = backend_libs__switch_util__CaseRep_5;
#line 1131 "switch_util.m"
    }
#line 1131 "switch_util.m"
    {
#line 1131 "switch_util.m"
      MR_Word base;
#line 1131 "switch_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "switch_util.m"
      *backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_13 = base;
#line 1131 "switch_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__V_18_18));
#line 1131 "switch_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_12));
#line 1131 "switch_util.m"
    }
#line 1124 "switch_util.m"
  }
#line 1121 "switch_util.m"
}

#line 1082 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0_1(
#line 1082 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1082 "switch_util.m"
{
#line 1082 "switch_util.m"
  {
#line 1082 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1082 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1082 "switch_util.m"
    {
#line 1082 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__int__f_less_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))));
    }
#line 1082 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1082 "switch_util.m"
  }
#line 1082 "switch_util.m"
}

#line 1076 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0(
#line 1076 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1076 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_6,
#line 1076 "switch_util.m"
  MR_Word backend_libs__switch_util__HomeMap_7,
#line 1076 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_8,
#line 1076 "switch_util.m"
  MR_Integer backend_libs__switch_util__LastUsed_9,
#line 1076 "switch_util.m"
  MR_Integer * backend_libs__switch_util__FreeSlot_10)
#line 1076 "switch_util.m"
{
#line 1080 "switch_util.m"
  while (MR_TRUE)
#line 1080 "switch_util.m"
    {
#line 1080 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1080 "switch_util.m"
      {
#line 1080 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;
#line 1080 "switch_util.m"
        MR_Integer backend_libs__switch_util__NextSlot_11 = (backend_libs__switch_util__LastUsed_9 + (MR_Integer) 1);
#line 1080 "switch_util.m"
        MR_Word backend_libs__switch_util__V_13_13;
#line 1084 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_20_20;
#line 1085 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_21_21;
#line 1085 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_22_22;
#line 1085 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_23_23;
#line 1085 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_24_24;
#line 1085 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_25_25;
#line 1085 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_26_26;

#line 1082 "switch_util.m"
        {
#line 1082 "switch_util.m"
          backend_libs__switch_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1082 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_7[0]));
#line 1082 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 1) = ((MR_Box) (backend_libs__switch_util__next_free_hash_slot_5_p_0_1));
#line 1082 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1082 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 3) = ((MR_Box) (backend_libs__switch_util__NextSlot_11));
#line 1082 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 4) = ((MR_Box) (backend_libs__switch_util__TableSize_8));
#line 1082 "switch_util.m"
        }
#line 1082 "switch_util.m"
        {
#line 1082 "switch_util.m"
          mercury__require__expect_4_p_0(backend_libs__switch_util__V_13_13, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.next_free_hash_slot\'/5", (MR_String) "overflow");
        }
#line 10310 "backend_libs.switch_util.c"
        {
#line 10312 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10314 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10316 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_17));
#line 10318 "backend_libs.switch_util.c"
        }
#line 1084 "switch_util.m"
        {
#line 1084 "switch_util.m"
          backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_20_20, backend_libs__switch_util__Map_6, ((MR_Box) (backend_libs__switch_util__NextSlot_11)));
        }
#line 1084 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1084 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1084 "switch_util.m"
          {
#line 10331 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 10333 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_25_25 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 10335 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_23_23 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 10337 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 10339 "backend_libs.switch_util.c"
            {
#line 10341 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10343 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_23_23));
#line 10345 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 1) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_22_22));
#line 10347 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_17));
#line 10349 "backend_libs.switch_util.c"
            }
#line 10351 "backend_libs.switch_util.c"
            {
#line 10353 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10355 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_26_26, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_25_25));
#line 10357 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_26_26, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_24_24));
#line 10359 "backend_libs.switch_util.c"
            }
#line 1085 "switch_util.m"
            {
#line 1085 "switch_util.m"
              backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0(backend_libs__switch_util__TypeCtorInfo_21_21, backend_libs__switch_util__TypeInfo_26_26, backend_libs__switch_util__HomeMap_7, ((MR_Box) (backend_libs__switch_util__NextSlot_11)));
            }
#line 1085 "switch_util.m"
            backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1084 "switch_util.m"
          }
#line 1088 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1087 "switch_util.m"
          *backend_libs__switch_util__FreeSlot_10 = backend_libs__switch_util__NextSlot_11;
#line 1088 "switch_util.m"
        else
#line 1089 "switch_util.m"
          {
#line 1089 "switch_util.m"
            /* direct tailcall eliminated */
#line 1089 "switch_util.m"
            {
#line 1089 "switch_util.m"
              MR_Integer backend_libs__switch_util__LastUsed__tmp_copy_9 = backend_libs__switch_util__NextSlot_11;

#line 1089 "switch_util.m"
              backend_libs__switch_util__LastUsed_9 = backend_libs__switch_util__LastUsed__tmp_copy_9;
#line 1089 "switch_util.m"
            }
#line 1089 "switch_util.m"
            continue;
#line 1089 "switch_util.m"
          }
#line 1080 "switch_util.m"
      }
#line 1080 "switch_util.m"
      break;
#line 1080 "switch_util.m"
    }
#line 1076 "switch_util.m"
}

#line 1056 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__follow_hash_chain_3_p_0(
#line 1056 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_12,
#line 1056 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_4,
#line 1056 "switch_util.m"
  MR_Integer backend_libs__switch_util__Slot_5,
#line 1056 "switch_util.m"
  MR_Integer * backend_libs__switch_util__LastSlot_6)
#line 1056 "switch_util.m"
{
#line 1059 "switch_util.m"
  while (MR_TRUE)
#line 1059 "switch_util.m"
    {
#line 1059 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1059 "switch_util.m"
      {
#line 1059 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;
#line 1059 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_15_15;
#line 1059 "switch_util.m"
        MR_Integer backend_libs__switch_util__NextSlot_8;
#line 1059 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10;
#line 1060 "switch_util.m"
        MR_Box backend_libs__switch_util__conv0_V_10_10;
#line 1060 "switch_util.m"
        MR_String backend_libs__switch_util__V_7_7;
#line 1060 "switch_util.m"
        MR_Box backend_libs__switch_util__V_9_9;

#line 10438 "backend_libs.switch_util.c"
        {
#line 10440 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10442 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10444 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_12));
#line 10446 "backend_libs.switch_util.c"
        }
#line 1060 "switch_util.m"
        {
#line 1060 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_15_15, (MR_Word) backend_libs__switch_util__Map_4, backend_libs__switch_util__Slot_5, &backend_libs__switch_util__conv0_V_10_10);
        }
#line 1060 "switch_util.m"
        backend_libs__switch_util__V_10_10 = ((MR_Word) backend_libs__switch_util__conv0_V_10_10);
#line 1060 "switch_util.m"
        backend_libs__switch_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_10_10, (MR_Integer) 0)));
#line 1060 "switch_util.m"
        backend_libs__switch_util__NextSlot_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_10_10, (MR_Integer) 1)));
#line 1060 "switch_util.m"
        backend_libs__switch_util__V_9_9 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_10_10, (MR_Integer) 2));
#line 1062 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__NextSlot_8 >= (MR_Integer) 0);
#line 1062 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1063 "switch_util.m"
          {
#line 1063 "switch_util.m"
            backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_15_15, backend_libs__switch_util__Map_4, ((MR_Box) (backend_libs__switch_util__NextSlot_8)));
          }
#line 1066 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1065 "switch_util.m"
          {
#line 1065 "switch_util.m"
            /* direct tailcall eliminated */
#line 1065 "switch_util.m"
            {
#line 1065 "switch_util.m"
              MR_Integer backend_libs__switch_util__Slot__tmp_copy_5 = backend_libs__switch_util__NextSlot_8;

#line 1065 "switch_util.m"
              backend_libs__switch_util__Slot_5 = backend_libs__switch_util__Slot__tmp_copy_5;
#line 1065 "switch_util.m"
            }
#line 1065 "switch_util.m"
            continue;
#line 1065 "switch_util.m"
          }
#line 1066 "switch_util.m"
        else
#line 1067 "switch_util.m"
          *backend_libs__switch_util__LastSlot_6 = backend_libs__switch_util__Slot_5;
#line 1059 "switch_util.m"
      }
#line 1059 "switch_util.m"
      break;
#line 1059 "switch_util.m"
    }
#line 1056 "switch_util.m"
}

#line 1022 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(
#line 1022 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_64,
#line 1022 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1022 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__2_2,
#line 1022 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__3_3,
#line 1022 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 1022 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5,
#line 1022 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_6,
#line 1022 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7,
#line 1022 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_8)
#line 1022 "switch_util.m"
{
#line 1029 "switch_util.m"
  {
#line 1029 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 1029 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1029 "switch_util.m"
      {
#line 1030 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_LastUsed_8 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7;
#line 1030 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_SlotMap_6 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5;
#line 1029 "switch_util.m"
      }
#line 1029 "switch_util.m"
    else
#line 1032 "switch_util.m"
      {
#line 1032 "switch_util.m"
        MR_Word backend_libs__switch_util__StringCaseRep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1032 "switch_util.m"
        MR_Word backend_libs__switch_util__StringCaseReps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1032 "switch_util.m"
        MR_String backend_libs__switch_util__String_25;
#line 1032 "switch_util.m"
        MR_Box backend_libs__switch_util__CaseRep_26;
#line 1032 "switch_util.m"
        MR_Word backend_libs__switch_util__NewSlot_27;
#line 1032 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39;
#line 1032 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40;
#line 1049 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_67_67;

#line 1033 "switch_util.m"
        {
#line 1033 "switch_util.m"
          backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_64, backend_libs__switch_util__StringCaseReps_19, backend_libs__switch_util__HeadVar__2_2, backend_libs__switch_util__HeadVar__3_3, backend_libs__switch_util__HeadVar__4_4, backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5, &backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7, &backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40);
        }
#line 1035 "switch_util.m"
        backend_libs__switch_util__String_25 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StringCaseRep_18, (MR_Integer) 0)));
#line 1035 "switch_util.m"
        backend_libs__switch_util__CaseRep_26 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StringCaseRep_18, (MR_Integer) 1));
#line 1036 "switch_util.m"
        {
#line 1036 "switch_util.m"
          backend_libs__switch_util__NewSlot_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1036 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewSlot_27, 0) = ((MR_Box) (backend_libs__switch_util__String_25));
#line 1036 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewSlot_27, 1) = ((MR_Box) ((MR_Integer) -1));
#line 1036 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewSlot_27, 2) = backend_libs__switch_util__CaseRep_26;
#line 1036 "switch_util.m"
        }
#line 10582 "backend_libs.switch_util.c"
        {
#line 10584 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10586 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_67_67, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10588 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_67_67, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_64));
#line 10590 "backend_libs.switch_util.c"
        }
#line 1037 "switch_util.m"
        {
#line 1037 "switch_util.m"
          backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_67_67, backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, ((MR_Box) (backend_libs__switch_util__HeadVar__3_3)));
        }
#line 1049 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1038 "switch_util.m"
          {
#line 1038 "switch_util.m"
            MR_Integer backend_libs__switch_util__ChainEnd_28;
#line 1038 "switch_util.m"
            MR_Word backend_libs__switch_util__ChainEndSlot0_29;
#line 1038 "switch_util.m"
            MR_String backend_libs__switch_util__PrevString_30;
#line 1038 "switch_util.m"
            MR_Box backend_libs__switch_util__PrevCaseRep_32;
#line 1038 "switch_util.m"
            MR_Word backend_libs__switch_util__ChainEndSlot_33;
#line 1038 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_43_43;
#line 1040 "switch_util.m"
            MR_Box backend_libs__switch_util__conv0_ChainEndSlot0_29;
#line 1041 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_31_31;
#line 1043 "switch_util.m"
            MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_SlotMap_43_43;
#line 1044 "switch_util.m"
            MR_Word backend_libs__switch_util__conv2_STATE_VARIABLE_SlotMap_6;

#line 1038 "switch_util.m"
            {
#line 1038 "switch_util.m"
              backend_libs__switch_util__follow_hash_chain_3_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_64, backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__HeadVar__3_3, &backend_libs__switch_util__ChainEnd_28);
            }
#line 1039 "switch_util.m"
            {
#line 1039 "switch_util.m"
              backend_libs__switch_util__next_free_hash_slot_5_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_64, backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__HeadVar__4_4, backend_libs__switch_util__HeadVar__2_2, backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40, backend_libs__switch_util__STATE_VARIABLE_LastUsed_8);
            }
#line 1040 "switch_util.m"
            {
#line 1040 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_67_67, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__ChainEnd_28, &backend_libs__switch_util__conv0_ChainEndSlot0_29);
            }
#line 1040 "switch_util.m"
            backend_libs__switch_util__ChainEndSlot0_29 = ((MR_Word) backend_libs__switch_util__conv0_ChainEndSlot0_29);
#line 1041 "switch_util.m"
            backend_libs__switch_util__PrevString_30 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot0_29, (MR_Integer) 0)));
#line 1041 "switch_util.m"
            backend_libs__switch_util__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot0_29, (MR_Integer) 1)));
#line 1041 "switch_util.m"
            backend_libs__switch_util__PrevCaseRep_32 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot0_29, (MR_Integer) 2));
#line 1042 "switch_util.m"
            {
#line 1042 "switch_util.m"
              backend_libs__switch_util__ChainEndSlot_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1042 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot_33, 0) = ((MR_Box) (backend_libs__switch_util__PrevString_30));
#line 1042 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot_33, 1) = ((MR_Box) (*backend_libs__switch_util__STATE_VARIABLE_LastUsed_8));
#line 1042 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot_33, 2) = backend_libs__switch_util__PrevCaseRep_32;
#line 1042 "switch_util.m"
            }
#line 1043 "switch_util.m"
            {
#line 1043 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_67_67, backend_libs__switch_util__ChainEnd_28, ((MR_Box) (backend_libs__switch_util__ChainEndSlot_33)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, &backend_libs__switch_util__conv1_STATE_VARIABLE_SlotMap_43_43);
            }
#line 1043 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_SlotMap_43_43 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_SlotMap_43_43;
#line 1044 "switch_util.m"
            {
#line 1044 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_67_67, *backend_libs__switch_util__STATE_VARIABLE_LastUsed_8, ((MR_Box) (backend_libs__switch_util__NewSlot_27)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_43_43, &backend_libs__switch_util__conv2_STATE_VARIABLE_SlotMap_6);
            }
#line 1044 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_SlotMap_6 = (MR_Word) backend_libs__switch_util__conv2_STATE_VARIABLE_SlotMap_6;
#line 1038 "switch_util.m"
          }
#line 1049 "switch_util.m"
        else
#line 1050 "switch_util.m"
          {
#line 1050 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_73_73;
#line 1050 "switch_util.m"
            MR_Word backend_libs__switch_util__conv3_STATE_VARIABLE_SlotMap_6;

#line 10682 "backend_libs.switch_util.c"
            {
#line 10684 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10686 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10688 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_64));
#line 10690 "backend_libs.switch_util.c"
            }
#line 1050 "switch_util.m"
            {
#line 1050 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_73_73, backend_libs__switch_util__HeadVar__3_3, ((MR_Box) (backend_libs__switch_util__NewSlot_27)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, &backend_libs__switch_util__conv3_STATE_VARIABLE_SlotMap_6);
            }
#line 1050 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_SlotMap_6 = (MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_SlotMap_6;
#line 1050 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_LastUsed_8 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40;
#line 1050 "switch_util.m"
          }
#line 1032 "switch_util.m"
      }
#line 1029 "switch_util.m"
  }
#line 1022 "switch_util.m"
}

#line 1007 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hashes_7_p_0(
#line 1007 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_32,
#line 1007 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1007 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_2,
#line 1007 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_3,
#line 1007 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4,
#line 1007 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_5,
#line 1007 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6,
#line 1007 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_7)
#line 1007 "switch_util.m"
{
#line 1014 "switch_util.m"
  while (MR_TRUE)
#line 1014 "switch_util.m"
    {
#line 1014 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1014 "switch_util.m"
      {
#line 1014 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 1014 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1014 "switch_util.m"
          {
#line 1014 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_LastUsed_7 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6;
#line 1014 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_SlotMap_5 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4;
#line 1014 "switch_util.m"
          }
#line 1014 "switch_util.m"
        else
#line 1016 "switch_util.m"
          {
#line 1016 "switch_util.m"
            MR_Integer backend_libs__switch_util__HashVal_16;
#line 1016 "switch_util.m"
            MR_Word backend_libs__switch_util__StringCaseReps_17;
#line 1016 "switch_util.m"
            MR_Word backend_libs__switch_util__Rest_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1016 "switch_util.m"
            MR_Word backend_libs__switch_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1016 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_28_28;
#line 1016 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_29_29;

#line 1015 "switch_util.m"
            backend_libs__switch_util__HashVal_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_27_27, (MR_Integer) 0)));
#line 1015 "switch_util.m"
            backend_libs__switch_util__StringCaseReps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_27_27, (MR_Integer) 1)));
#line 1017 "switch_util.m"
            {
#line 1017 "switch_util.m"
              backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_32, backend_libs__switch_util__StringCaseReps_17, backend_libs__switch_util__TableSize_2, backend_libs__switch_util__HashVal_16, backend_libs__switch_util__HashMap_3, backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_SlotMap_28_28, backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6, &backend_libs__switch_util__STATE_VARIABLE_LastUsed_29_29);
            }
#line 1019 "switch_util.m"
            /* direct tailcall eliminated */
#line 1019 "switch_util.m"
            {
#line 1019 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Rest_18;
#line 1019 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0__tmp_copy_4 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_28_28;
#line 1019 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0__tmp_copy_6 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_29_29;

#line 1019 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_0__tmp_copy_6;
#line 1019 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_0__tmp_copy_4;
#line 1019 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 1019 "switch_util.m"
            }
#line 1019 "switch_util.m"
            continue;
#line 1016 "switch_util.m"
          }
#line 1014 "switch_util.m"
      }
#line 1014 "switch_util.m"
      break;
#line 1014 "switch_util.m"
    }
#line 1007 "switch_util.m"
}

#line 992 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_4_p_0(
#line 992 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 992 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_5,
#line 992 "switch_util.m"
  MR_Word backend_libs__switch_util__HashValList_6,
#line 992 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_7,
#line 992 "switch_util.m"
  MR_Word * backend_libs__switch_util__SlotMap_8)
#line 992 "switch_util.m"
{
#line 997 "switch_util.m"
  {
#line 997 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 997 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_22_22;
#line 997 "switch_util.m"
    MR_Word backend_libs__switch_util__V_14_14;
#line 1001 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_10_10;

#line 10836 "backend_libs.switch_util.c"
    {
#line 10838 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10840 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10842 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_19));
#line 10844 "backend_libs.switch_util.c"
    }
#line 1002 "switch_util.m"
    {
#line 1002 "switch_util.m"
      backend_libs__switch_util__V_14_14 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_22_22);
    }
#line 1001 "switch_util.m"
    {
#line 1001 "switch_util.m"
      backend_libs__switch_util__calc_string_hash_slots_loop_over_hashes_7_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_19, backend_libs__switch_util__HashValList_6, backend_libs__switch_util__TableSize_5, backend_libs__switch_util__HashMap_7, backend_libs__switch_util__V_14_14, backend_libs__switch_util__SlotMap_8, (MR_Integer) 0, &backend_libs__switch_util__V_10_10);
    }
#line 997 "switch_util.m"
  }
#line 992 "switch_util.m"
}

#line 946 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_case_14_p_0(
#line 946 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 946 "switch_util.m"
  MR_Word backend_libs__switch_util__StrCaseRep_15,
#line 946 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_16,
#line 946 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_31,
#line 946 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap4_32,
#line 946 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_33,
#line 946 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap5_34,
#line 946 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_35,
#line 946 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap6_36,
#line 946 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_37,
#line 946 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_38,
#line 946 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_39,
#line 946 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_40,
#line 946 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_41,
#line 946 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_42)
#line 946 "switch_util.m"
{
#line 957 "switch_util.m"
  {
#line 957 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 957 "switch_util.m"
    MR_String backend_libs__switch_util__String_23 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StrCaseRep_15, (MR_Integer) 0)));
#line 957 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashVal4_25;
#line 957 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashVal5_26;
#line 957 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashVal6_27;
#line 957 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_43_43;
#line 957 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_44_44;
#line 957 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_45_45;
#line 958 "switch_util.m"
    MR_Box backend_libs__switch_util___CaseRep_24 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StrCaseRep_15, (MR_Integer) 1));
#line 965 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_73_73;
#line 965 "switch_util.m"
    MR_Word backend_libs__switch_util__OldEntries4_28;
#line 962 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_71_71;
#line 962 "switch_util.m"
    MR_Box backend_libs__switch_util__conv0_OldEntries4_28;
#line 971 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_91_91;
#line 971 "switch_util.m"
    MR_Word backend_libs__switch_util__OldEntries5_29;
#line 968 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_89_89;
#line 968 "switch_util.m"
    MR_Box backend_libs__switch_util__conv3_OldEntries5_29;
#line 977 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_109_109;
#line 977 "switch_util.m"
    MR_Word backend_libs__switch_util__OldEntries6_30;
#line 974 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_107_107;
#line 974 "switch_util.m"
    MR_Box backend_libs__switch_util__conv6_OldEntries6_30;

#line 959 "switch_util.m"
    {
#line 959 "switch_util.m"
      backend_libs__switch_util__V_43_43 = mercury__string__hash4_1_f_0(backend_libs__switch_util__String_23);
    }
#line 959 "switch_util.m"
    backend_libs__switch_util__HashVal4_25 = (backend_libs__switch_util__V_43_43 & backend_libs__switch_util__HashMask_16);
#line 960 "switch_util.m"
    {
#line 960 "switch_util.m"
      backend_libs__switch_util__V_44_44 = mercury__string__hash5_1_f_0(backend_libs__switch_util__String_23);
    }
#line 960 "switch_util.m"
    backend_libs__switch_util__HashVal5_26 = (backend_libs__switch_util__V_44_44 & backend_libs__switch_util__HashMask_16);
#line 961 "switch_util.m"
    {
#line 961 "switch_util.m"
      backend_libs__switch_util__V_45_45 = mercury__string__hash6_1_f_0(backend_libs__switch_util__String_23);
    }
#line 961 "switch_util.m"
    backend_libs__switch_util__HashVal6_27 = (backend_libs__switch_util__V_45_45 & backend_libs__switch_util__HashMask_16);
#line 10962 "backend_libs.switch_util.c"
    {
#line 10964 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10966 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_71_71, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 10968 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_71_71, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 10970 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_71_71, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 10972 "backend_libs.switch_util.c"
    }
#line 10974 "backend_libs.switch_util.c"
    {
#line 10976 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10978 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 10980 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_71_71));
#line 10982 "backend_libs.switch_util.c"
    }
#line 962 "switch_util.m"
    {
#line 962 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_73_73, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_31, backend_libs__switch_util__HashVal4_25, &backend_libs__switch_util__conv0_OldEntries4_28);
    }
#line 962 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 962 "switch_util.m"
      {
#line 962 "switch_util.m"
        backend_libs__switch_util__OldEntries4_28 = ((MR_Word) backend_libs__switch_util__conv0_OldEntries4_28);
#line 962 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 962 "switch_util.m"
      }
#line 965 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 963 "switch_util.m"
      {
#line 963 "switch_util.m"
        MR_Word backend_libs__switch_util__V_46_46;
#line 963 "switch_util.m"
        MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_HashMap4_32;

#line 963 "switch_util.m"
        {
#line 963 "switch_util.m"
          backend_libs__switch_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 963 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_46_46, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 963 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_46_46, 1) = ((MR_Box) (backend_libs__switch_util__OldEntries4_28));
#line 963 "switch_util.m"
        }
#line 963 "switch_util.m"
        {
#line 963 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_73_73, backend_libs__switch_util__HashVal4_25, ((MR_Box) (backend_libs__switch_util__V_46_46)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_31, &backend_libs__switch_util__conv1_STATE_VARIABLE_HashMap4_32);
        }
#line 963 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap4_32 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_HashMap4_32;
#line 964 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_38 = (backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_37 + (MR_Integer) 1);
#line 963 "switch_util.m"
      }
#line 965 "switch_util.m"
    else
#line 966 "switch_util.m"
      {
#line 966 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_83_83;
#line 966 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_85_85;
#line 966 "switch_util.m"
        MR_Word backend_libs__switch_util__V_50_50;
#line 966 "switch_util.m"
        MR_Word backend_libs__switch_util__conv2_STATE_VARIABLE_HashMap4_32;

#line 966 "switch_util.m"
        {
#line 966 "switch_util.m"
          backend_libs__switch_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_50_50, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 966 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 966 "switch_util.m"
        }
#line 11052 "backend_libs.switch_util.c"
        {
#line 11054 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11056 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_83_83, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11058 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_83_83, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11060 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_83_83, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11062 "backend_libs.switch_util.c"
        }
#line 11064 "backend_libs.switch_util.c"
        {
#line 11066 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11068 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_85_85, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11070 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_85_85, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_83_83));
#line 11072 "backend_libs.switch_util.c"
        }
#line 966 "switch_util.m"
        {
#line 966 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_85_85, backend_libs__switch_util__HashVal4_25, ((MR_Box) (backend_libs__switch_util__V_50_50)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_31, &backend_libs__switch_util__conv2_STATE_VARIABLE_HashMap4_32);
        }
#line 966 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap4_32 = (MR_Word) backend_libs__switch_util__conv2_STATE_VARIABLE_HashMap4_32;
#line 966 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_38 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_37;
#line 966 "switch_util.m"
      }
#line 11085 "backend_libs.switch_util.c"
    {
#line 11087 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11089 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_89_89, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11091 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_89_89, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11093 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_89_89, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11095 "backend_libs.switch_util.c"
    }
#line 11097 "backend_libs.switch_util.c"
    {
#line 11099 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11101 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_91_91, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11103 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_91_91, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_89_89));
#line 11105 "backend_libs.switch_util.c"
    }
#line 968 "switch_util.m"
    {
#line 968 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_91_91, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_33, backend_libs__switch_util__HashVal5_26, &backend_libs__switch_util__conv3_OldEntries5_29);
    }
#line 968 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 968 "switch_util.m"
      {
#line 968 "switch_util.m"
        backend_libs__switch_util__OldEntries5_29 = ((MR_Word) backend_libs__switch_util__conv3_OldEntries5_29);
#line 968 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 968 "switch_util.m"
      }
#line 971 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 969 "switch_util.m"
      {
#line 969 "switch_util.m"
        MR_Word backend_libs__switch_util__V_53_53;
#line 969 "switch_util.m"
        MR_Word backend_libs__switch_util__conv4_STATE_VARIABLE_HashMap5_34;

#line 969 "switch_util.m"
        {
#line 969 "switch_util.m"
          backend_libs__switch_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_53_53, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 969 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_53_53, 1) = ((MR_Box) (backend_libs__switch_util__OldEntries5_29));
#line 969 "switch_util.m"
        }
#line 969 "switch_util.m"
        {
#line 969 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_91_91, backend_libs__switch_util__HashVal5_26, ((MR_Box) (backend_libs__switch_util__V_53_53)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_33, &backend_libs__switch_util__conv4_STATE_VARIABLE_HashMap5_34);
        }
#line 969 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap5_34 = (MR_Word) backend_libs__switch_util__conv4_STATE_VARIABLE_HashMap5_34;
#line 970 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_40 = (backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_39 + (MR_Integer) 1);
#line 969 "switch_util.m"
      }
#line 971 "switch_util.m"
    else
#line 972 "switch_util.m"
      {
#line 972 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_101_101;
#line 972 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_103_103;
#line 972 "switch_util.m"
        MR_Word backend_libs__switch_util__V_57_57;
#line 972 "switch_util.m"
        MR_Word backend_libs__switch_util__conv5_STATE_VARIABLE_HashMap5_34;

#line 972 "switch_util.m"
        {
#line 972 "switch_util.m"
          backend_libs__switch_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_57_57, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 972 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 972 "switch_util.m"
        }
#line 11175 "backend_libs.switch_util.c"
        {
#line 11177 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11179 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_101_101, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11181 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_101_101, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11183 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_101_101, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11185 "backend_libs.switch_util.c"
        }
#line 11187 "backend_libs.switch_util.c"
        {
#line 11189 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11191 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_103_103, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11193 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_103_103, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_101_101));
#line 11195 "backend_libs.switch_util.c"
        }
#line 972 "switch_util.m"
        {
#line 972 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_103_103, backend_libs__switch_util__HashVal5_26, ((MR_Box) (backend_libs__switch_util__V_57_57)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_33, &backend_libs__switch_util__conv5_STATE_VARIABLE_HashMap5_34);
        }
#line 972 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap5_34 = (MR_Word) backend_libs__switch_util__conv5_STATE_VARIABLE_HashMap5_34;
#line 972 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_40 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_39;
#line 972 "switch_util.m"
      }
#line 11208 "backend_libs.switch_util.c"
    {
#line 11210 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11212 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_107_107, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11214 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_107_107, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11216 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_107_107, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11218 "backend_libs.switch_util.c"
    }
#line 11220 "backend_libs.switch_util.c"
    {
#line 11222 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11224 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_109_109, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11226 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_109_109, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_107_107));
#line 11228 "backend_libs.switch_util.c"
    }
#line 974 "switch_util.m"
    {
#line 974 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_109_109, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_35, backend_libs__switch_util__HashVal6_27, &backend_libs__switch_util__conv6_OldEntries6_30);
    }
#line 974 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 974 "switch_util.m"
      {
#line 974 "switch_util.m"
        backend_libs__switch_util__OldEntries6_30 = ((MR_Word) backend_libs__switch_util__conv6_OldEntries6_30);
#line 974 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 974 "switch_util.m"
      }
#line 977 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 975 "switch_util.m"
      {
#line 975 "switch_util.m"
        MR_Word backend_libs__switch_util__V_60_60;
#line 975 "switch_util.m"
        MR_Word backend_libs__switch_util__conv7_STATE_VARIABLE_HashMap6_36;

#line 975 "switch_util.m"
        {
#line 975 "switch_util.m"
          backend_libs__switch_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 975 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_60_60, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 975 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_60_60, 1) = ((MR_Box) (backend_libs__switch_util__OldEntries6_30));
#line 975 "switch_util.m"
        }
#line 975 "switch_util.m"
        {
#line 975 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_109_109, backend_libs__switch_util__HashVal6_27, ((MR_Box) (backend_libs__switch_util__V_60_60)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_35, &backend_libs__switch_util__conv7_STATE_VARIABLE_HashMap6_36);
        }
#line 975 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap6_36 = (MR_Word) backend_libs__switch_util__conv7_STATE_VARIABLE_HashMap6_36;
#line 976 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_42 = (backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_41 + (MR_Integer) 1);
#line 975 "switch_util.m"
      }
#line 977 "switch_util.m"
    else
#line 978 "switch_util.m"
      {
#line 978 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_119_119;
#line 978 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_121_121;
#line 978 "switch_util.m"
        MR_Word backend_libs__switch_util__V_64_64;
#line 978 "switch_util.m"
        MR_Word backend_libs__switch_util__conv8_STATE_VARIABLE_HashMap6_36;

#line 978 "switch_util.m"
        {
#line 978 "switch_util.m"
          backend_libs__switch_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 978 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_64_64, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 978 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 978 "switch_util.m"
        }
#line 11298 "backend_libs.switch_util.c"
        {
#line 11300 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11302 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_119_119, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11304 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_119_119, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11306 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_119_119, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11308 "backend_libs.switch_util.c"
        }
#line 11310 "backend_libs.switch_util.c"
        {
#line 11312 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11314 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_121_121, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11316 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_121_121, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_119_119));
#line 11318 "backend_libs.switch_util.c"
        }
#line 978 "switch_util.m"
        {
#line 978 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_121_121, backend_libs__switch_util__HashVal6_27, ((MR_Box) (backend_libs__switch_util__V_64_64)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_35, &backend_libs__switch_util__conv8_STATE_VARIABLE_HashMap6_36);
        }
#line 978 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap6_36 = (MR_Word) backend_libs__switch_util__conv8_STATE_VARIABLE_HashMap6_36;
#line 978 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_42 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_41;
#line 978 "switch_util.m"
      }
#line 957 "switch_util.m"
  }
#line 946 "switch_util.m"
}

#line 925 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_cases_14_p_0(
#line 925 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 925 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 925 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_2,
#line 925 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_3,
#line 925 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap4_4,
#line 925 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_5,
#line 925 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap5_6,
#line 925 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_7,
#line 925 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap6_8,
#line 925 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_9,
#line 925 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_10,
#line 925 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_11,
#line 925 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_12,
#line 925 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_13,
#line 925 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_14)
#line 925 "switch_util.m"
{
#line 934 "switch_util.m"
  while (MR_TRUE)
#line 934 "switch_util.m"
    {
#line 934 "switch_util.m"
      /* tailcall optimized into a loop */
#line 934 "switch_util.m"
      {
#line 934 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 934 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 934 "switch_util.m"
          {
#line 935 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_14 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_13;
#line 935 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_12 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_11;
#line 935 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_10 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_9;
#line 934 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_HashMap6_8 = backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_7;
#line 934 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_HashMap5_6 = backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_5;
#line 934 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_HashMap4_4 = backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_3;
#line 934 "switch_util.m"
          }
#line 934 "switch_util.m"
        else
#line 938 "switch_util.m"
          {
#line 938 "switch_util.m"
            MR_Word backend_libs__switch_util__StrData_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 938 "switch_util.m"
            MR_Word backend_libs__switch_util__StrsDatas_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 938 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_55_55;
#line 938 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_56_56;
#line 938 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_57_57;
#line 938 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_58_58;
#line 938 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_59_59;
#line 938 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_60_60;

#line 939 "switch_util.m"
            {
#line 939 "switch_util.m"
              backend_libs__switch_util__string_hash_case_14_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_67, backend_libs__switch_util__StrData_34, backend_libs__switch_util__HashMask_2, backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_3, &backend_libs__switch_util__STATE_VARIABLE_HashMap4_55_55, backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_5, &backend_libs__switch_util__STATE_VARIABLE_HashMap5_56_56, backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_7, &backend_libs__switch_util__STATE_VARIABLE_HashMap6_57_57, backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_9, &backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_58_58, backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_11, &backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_59_59, backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_13, &backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_60_60);
            }
#line 942 "switch_util.m"
            /* direct tailcall eliminated */
#line 942 "switch_util.m"
            {
#line 942 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__StrsDatas_35;
#line 942 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_0__tmp_copy_3 = backend_libs__switch_util__STATE_VARIABLE_HashMap4_55_55;
#line 942 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_0__tmp_copy_5 = backend_libs__switch_util__STATE_VARIABLE_HashMap5_56_56;
#line 942 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_0__tmp_copy_7 = backend_libs__switch_util__STATE_VARIABLE_HashMap6_57_57;
#line 942 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0__tmp_copy_9 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_58_58;
#line 942 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0__tmp_copy_11 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_59_59;
#line 942 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0__tmp_copy_13 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_60_60;

#line 942 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_13 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0__tmp_copy_13;
#line 942 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_11 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0__tmp_copy_11;
#line 942 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_9 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0__tmp_copy_9;
#line 942 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_7 = backend_libs__switch_util__STATE_VARIABLE_HashMap6_0__tmp_copy_7;
#line 942 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_5 = backend_libs__switch_util__STATE_VARIABLE_HashMap5_0__tmp_copy_5;
#line 942 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_3 = backend_libs__switch_util__STATE_VARIABLE_HashMap4_0__tmp_copy_3;
#line 942 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 942 "switch_util.m"
            }
#line 942 "switch_util.m"
            continue;
#line 938 "switch_util.m"
          }
#line 934 "switch_util.m"
      }
#line 934 "switch_util.m"
      break;
#line 934 "switch_util.m"
    }
#line 925 "switch_util.m"
}

#line 793 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__project_soln_consts_to_one_soln_3_p_0(
#line 793 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Key_7,
#line 793 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_8,
#line 793 "switch_util.m"
  MR_Box backend_libs__switch_util___Key_4,
#line 793 "switch_util.m"
  MR_Word backend_libs__switch_util__Solns_5,
#line 793 "switch_util.m"
  MR_Word * backend_libs__switch_util__Values_6)
#line 793 "switch_util.m"
{
#line 797 "switch_util.m"
  {
#line 797 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 797 "switch_util.m"
    {
#line 797 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_115_111_108_110_95_99_111_110_115_116_115_95_116_111_95_111_110_101_95_115_111_108_110_95_95_91_49_44_32_51_93_95_48_3_p_0(backend_libs__switch_util__TypeInfo_for_Rval_8, backend_libs__switch_util__Solns_5, backend_libs__switch_util__Values_6);
    }
#line 797 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 797 "switch_util.m"
  }
#line 793 "switch_util.m"
}

#line 723 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__filter_out_failing_cases_loop_5_p_0(
#line 723 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 723 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2,
#line 723 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_3,
#line 723 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_4,
#line 723 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_5)
#line 723 "switch_util.m"
{
#line 727 "switch_util.m"
  while (MR_TRUE)
#line 727 "switch_util.m"
    {
#line 727 "switch_util.m"
      /* tailcall optimized into a loop */
#line 727 "switch_util.m"
      {
#line 727 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 727 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 727 "switch_util.m"
          {
#line 727 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_5 = backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_4;
#line 727 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_3 = backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2;
#line 727 "switch_util.m"
          }
#line 727 "switch_util.m"
        else
#line 729 "switch_util.m"
          {
#line 729 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCase_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 729 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCases_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 729 "switch_util.m"
            MR_Word backend_libs__switch_util__Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 3)));
#line 729 "switch_util.m"
            MR_Word backend_libs__switch_util__GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Goal_19, (MR_Integer) 0)));
#line 729 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_27_27;
#line 729 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28;
#line 730 "switch_util.m"
            MR_Word backend_libs__switch_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 0)));
#line 730 "switch_util.m"
            MR_Word backend_libs__switch_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 1)));
#line 730 "switch_util.m"
            MR_Word backend_libs__switch_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 2)));
#line 731 "switch_util.m"
            MR_Word backend_libs__switch_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Goal_19, (MR_Integer) 1)));
#line 732 "switch_util.m"
            MR_Word backend_libs__switch_util__V_26_26;

#line 732 "switch_util.m"
            backend_libs__switch_util__succeeded = ((((MR_tag((MR_Word) backend_libs__switch_util__GoalExpr_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__GoalExpr_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 732 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 732 "switch_util.m"
              {
#line 732 "switch_util.m"
                backend_libs__switch_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__GoalExpr_20, (MR_Integer) 1)));
#line 732 "switch_util.m"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 732 "switch_util.m"
              }
#line 734 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 733 "switch_util.m"
              {
#line 733 "switch_util.m"
                backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_27_27 = (MR_Integer) 0;
#line 733 "switch_util.m"
                backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28 = backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2;
#line 733 "switch_util.m"
              }
#line 734 "switch_util.m"
            else
#line 735 "switch_util.m"
              {
#line 735 "switch_util.m"
                {
#line 735 "switch_util.m"
                  backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28, 0) = ((MR_Box) (backend_libs__switch_util__TaggedCase_12));
#line 735 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28, 1) = ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2));
#line 735 "switch_util.m"
                }
#line 735 "switch_util.m"
                backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_27_27 = backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_4;
#line 735 "switch_util.m"
              }
#line 737 "switch_util.m"
            /* direct tailcall eliminated */
#line 737 "switch_util.m"
            {
#line 737 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__TaggedCases_13;
#line 737 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28;
#line 737 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0__tmp_copy_4 = backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_27_27;

#line 737 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_4 = backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0__tmp_copy_4;
#line 737 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2 = backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0__tmp_copy_2;
#line 737 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 737 "switch_util.m"
            }
#line 737 "switch_util.m"
            continue;
#line 729 "switch_util.m"
          }
#line 727 "switch_util.m"
      }
#line 727 "switch_util.m"
      break;
#line 727 "switch_util.m"
    }
#line 723 "switch_util.m"
}

#line 491 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__num_cons_ids_in_tagged_cases_loop_5_p_0(
#line 491 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 491 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0_2,
#line 491 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumConsIds_3,
#line 491 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumArms_0_4,
#line 491 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumArms_5)
#line 491 "switch_util.m"
{
#line 494 "switch_util.m"
  while (MR_TRUE)
#line 494 "switch_util.m"
    {
#line 494 "switch_util.m"
      /* tailcall optimized into a loop */
#line 494 "switch_util.m"
      {
#line 494 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 494 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "switch_util.m"
          {
#line 494 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumArms_5 = backend_libs__switch_util__STATE_VARIABLE_NumArms_0_4;
#line 494 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumConsIds_3 = backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0_2;
#line 494 "switch_util.m"
          }
#line 494 "switch_util.m"
        else
#line 496 "switch_util.m"
          {
#line 496 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCase_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 496 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCases_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 496 "switch_util.m"
            MR_Word backend_libs__switch_util__OtherCondIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 1)));
#line 496 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumConsIds_24_24;
#line 496 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_25_25 = (backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0_2 + (MR_Integer) 1);
#line 496 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_27_27;
#line 496 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumArms_28_28;
#line 497 "switch_util.m"
            MR_Word backend_libs__switch_util___MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 0)));
#line 497 "switch_util.m"
            MR_Word backend_libs__switch_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 2)));
#line 497 "switch_util.m"
            MR_Word backend_libs__switch_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 3)));

#line 498 "switch_util.m"
            {
#line 498 "switch_util.m"
              backend_libs__switch_util__V_27_27 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__OtherCondIds_17);
            }
#line 498 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_NumConsIds_24_24 = (backend_libs__switch_util__V_25_25 + backend_libs__switch_util__V_27_27);
#line 499 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_NumArms_28_28 = (backend_libs__switch_util__STATE_VARIABLE_NumArms_0_4 + (MR_Integer) 1);
#line 500 "switch_util.m"
            /* direct tailcall eliminated */
#line 500 "switch_util.m"
            {
#line 500 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__TaggedCases_13;
#line 500 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_NumConsIds_24_24;
#line 500 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumArms_0__tmp_copy_4 = backend_libs__switch_util__STATE_VARIABLE_NumArms_28_28;

#line 500 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumArms_0_4 = backend_libs__switch_util__STATE_VARIABLE_NumArms_0__tmp_copy_4;
#line 500 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0_2 = backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0__tmp_copy_2;
#line 500 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 500 "switch_util.m"
            }
#line 500 "switch_util.m"
            continue;
#line 496 "switch_util.m"
          }
#line 494 "switch_util.m"
      }
#line 494 "switch_util.m"
      break;
#line 494 "switch_util.m"
    }
#line 491 "switch_util.m"
}

#line 469 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__tag_cons_id_in_int_switch_11_p_0(
#line 469 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_12,
#line 469 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsId_13,
#line 469 "switch_util.m"
  MR_Word * backend_libs__switch_util__TaggedConsId_14,
#line 469 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_21,
#line 469 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LowerLimit_22,
#line 469 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_23,
#line 469 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_UpperLimit_24,
#line 469 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_0_25,
#line 469 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumValues_26,
#line 469 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_27,
#line 469 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_28)
#line 469 "switch_util.m"
{
#line 475 "switch_util.m"
  {
#line 475 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 475 "switch_util.m"
    MR_Word backend_libs__switch_util__ConsTag_19;
#line 482 "switch_util.m"
    MR_Integer backend_libs__switch_util__IntTag_20;

#line 476 "switch_util.m"
    {
#line 476 "switch_util.m"
      backend_libs__switch_util__ConsTag_19 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(backend_libs__switch_util__ModuleInfo_12, backend_libs__switch_util__ConsId_13);
    }
#line 477 "switch_util.m"
    {
#line 477 "switch_util.m"
      MR_Word base;
#line 477 "switch_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "switch_util.m"
      *backend_libs__switch_util__TaggedConsId_14 = base;
#line 477 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__switch_util__ConsId_13));
#line 477 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__switch_util__ConsTag_19));
#line 477 "switch_util.m"
    }
#line 478 "switch_util.m"
    backend_libs__switch_util__succeeded = ((((MR_tag((MR_Word) backend_libs__switch_util__ConsTag_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__ConsTag_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 478 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 478 "switch_util.m"
      {
#line 478 "switch_util.m"
        backend_libs__switch_util__IntTag_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__ConsTag_19, (MR_Integer) 1)));
#line 479 "switch_util.m"
        {
#line 479 "switch_util.m"
          mercury__int__min_3_p_0(backend_libs__switch_util__IntTag_20, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_21, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_22);
        }
#line 480 "switch_util.m"
        {
#line 480 "switch_util.m"
          mercury__int__max_3_p_0(backend_libs__switch_util__IntTag_20, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_23, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_24);
        }
#line 481 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumValues_26 = (backend_libs__switch_util__STATE_VARIABLE_NumValues_0_25 + (MR_Integer) 1);
#line 479 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_28 = backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_27;
#line 478 "switch_util.m"
      }
#line 478 "switch_util.m"
    else
#line 483 "switch_util.m"
      {
#line 483 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_28 = (MR_Integer) 1;
#line 483 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumValues_26 = backend_libs__switch_util__STATE_VARIABLE_NumValues_0_25;
#line 483 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_UpperLimit_24 = backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_23;
#line 483 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_LowerLimit_22 = backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_21;
#line 483 "switch_util.m"
      }
#line 475 "switch_util.m"
  }
#line 469 "switch_util.m"
}

#line 463 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__tag_cons_id_3_p_0(
#line 463 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_4,
#line 463 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsId_5,
#line 463 "switch_util.m"
  MR_Word * backend_libs__switch_util__TaggedConsId_6)
#line 463 "switch_util.m"
{
#line 465 "switch_util.m"
  {
#line 465 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 465 "switch_util.m"
    MR_Word backend_libs__switch_util__ConsTag_7;

#line 466 "switch_util.m"
    {
#line 466 "switch_util.m"
      backend_libs__switch_util__ConsTag_7 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(backend_libs__switch_util__ModuleInfo_4, backend_libs__switch_util__ConsId_5);
    }
#line 467 "switch_util.m"
    {
#line 467 "switch_util.m"
      MR_Word base;
#line 467 "switch_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 467 "switch_util.m"
      *backend_libs__switch_util__TaggedConsId_6 = base;
#line 467 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__switch_util__ConsId_5));
#line 467 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__switch_util__ConsTag_7));
#line 467 "switch_util.m"
    }
#line 465 "switch_util.m"
  }
#line 463 "switch_util.m"
}

#line 364 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__get_string_tag_2_p_0(
#line 364 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsTag_3,
#line 364 "switch_util.m"
  MR_String * backend_libs__switch_util__Str_4)
#line 364 "switch_util.m"
{
#line 1471 "switch_util.m"
  {
#line 1471 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__ConsTag_3)) == (MR_mktag((MR_Integer) 1)));
#line 1471 "switch_util.m"
    MR_String backend_libs__switch_util__StrPrime_5;

#line 1469 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1469 "switch_util.m"
      {
#line 1469 "switch_util.m"
        backend_libs__switch_util__StrPrime_5 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__ConsTag_3, (MR_Integer) 0)));
#line 1470 "switch_util.m"
        *backend_libs__switch_util__Str_4 = backend_libs__switch_util__StrPrime_5;
#line 1469 "switch_util.m"
      }
#line 1469 "switch_util.m"
    else
#line 1472 "switch_util.m"
      {
#line 1472 "switch_util.m"
        {
#line 1472 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_string_tag\'/2", (MR_String) "not string_tag");
#line 1472 "switch_util.m"
          return;
        }
#line 1472 "switch_util.m"
      }
#line 1471 "switch_util.m"
  }
#line 364 "switch_util.m"
}

#line 359 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__get_int_tag_2_p_0(
#line 359 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsTag_3,
#line 359 "switch_util.m"
  MR_Integer * backend_libs__switch_util__Int_4)
#line 359 "switch_util.m"
{
#line 1464 "switch_util.m"
  {
#line 1464 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = ((((MR_tag((MR_Word) backend_libs__switch_util__ConsTag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__ConsTag_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1464 "switch_util.m"
    MR_Integer backend_libs__switch_util__IntPrime_5;

#line 1462 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1462 "switch_util.m"
      {
#line 1462 "switch_util.m"
        backend_libs__switch_util__IntPrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__ConsTag_3, (MR_Integer) 1)));
#line 1463 "switch_util.m"
        *backend_libs__switch_util__Int_4 = backend_libs__switch_util__IntPrime_5;
#line 1462 "switch_util.m"
      }
#line 1462 "switch_util.m"
    else
#line 1465 "switch_util.m"
      {
#line 1465 "switch_util.m"
        {
#line 1465 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_int_tag\'/2", (MR_String) "not int_tag");
#line 1465 "switch_util.m"
          return;
        }
#line 1465 "switch_util.m"
      }
#line 1464 "switch_util.m"
  }
#line 359 "switch_util.m"
}

#line 351 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__get_ptag_counts_4_p_0(
#line 351 "switch_util.m"
  MR_Word backend_libs__switch_util__Type_5,
#line 351 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_6,
#line 351 "switch_util.m"
  MR_Integer * backend_libs__switch_util__MaxPrimary_7,
#line 351 "switch_util.m"
  MR_Word * backend_libs__switch_util__PtagCountMap_8)
#line 351 "switch_util.m"
{
#line 1139 "switch_util.m"
  {
#line 1139 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1139 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeCtor_9;
#line 1139 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeTable_10;
#line 1139 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeDefn_11;
#line 1139 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeBody_12;
#line 1139 "switch_util.m"
    MR_Word backend_libs__switch_util__TagList_23;
#line 1139 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCountMap0_29;

#line 1140 "switch_util.m"
    {
#line 1140 "switch_util.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(backend_libs__switch_util__Type_5, &backend_libs__switch_util__TypeCtor_9);
    }
#line 1141 "switch_util.m"
    {
#line 1141 "switch_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__switch_util__ModuleInfo_6, &backend_libs__switch_util__TypeTable_10);
    }
#line 1142 "switch_util.m"
    {
#line 1142 "switch_util.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(backend_libs__switch_util__TypeTable_10, backend_libs__switch_util__TypeCtor_9, &backend_libs__switch_util__TypeDefn_11);
    }
#line 1143 "switch_util.m"
    {
#line 1143 "switch_util.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__switch_util__TypeDefn_11, &backend_libs__switch_util__TypeBody_12);
    }
#line 1148 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__TypeBody_12)) == (MR_mktag((MR_Integer) 1))))
#line 1145 "switch_util.m"
      {
#line 1145 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1145 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1145 "switch_util.m"
        MR_Word backend_libs__switch_util__ConsTable_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 1)));
#line 1145 "switch_util.m"
        MR_Word backend_libs__switch_util__ConsList_22;
#line 1145 "switch_util.m"
        MR_Word backend_libs__switch_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 0)));
#line 1145 "switch_util.m"
        MR_Word backend_libs__switch_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 2)));
#line 1145 "switch_util.m"
        MR_Word backend_libs__switch_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 3)));
#line 1145 "switch_util.m"
        MR_Word backend_libs__switch_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 4)));
#line 1145 "switch_util.m"
        MR_Word backend_libs__switch_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 5)));
#line 1145 "switch_util.m"
        MR_Word backend_libs__switch_util__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1145 "switch_util.m"
        MR_Word backend_libs__switch_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1145 "switch_util.m"
        MR_Word backend_libs__switch_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 7)));

#line 1146 "switch_util.m"
        {
#line 1146 "switch_util.m"
          mercury__map__to_assoc_list_2_p_0(backend_libs__switch_util__TypeCtorInfo_34_34, backend_libs__switch_util__TypeCtorInfo_35_35, backend_libs__switch_util__ConsTable_14, &backend_libs__switch_util__ConsList_22);
        }
#line 1147 "switch_util.m"
        {
#line 1147 "switch_util.m"
          mercury__assoc_list__values_2_p_0(backend_libs__switch_util__TypeCtorInfo_34_34, backend_libs__switch_util__TypeCtorInfo_35_35, backend_libs__switch_util__ConsList_22, &backend_libs__switch_util__TagList_23);
        }
#line 1145 "switch_util.m"
      }
#line 1148 "switch_util.m"
    else
#line 1153 "switch_util.m"
      {
#line 1154 "switch_util.m"
        {
#line 1154 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts\'/4", (MR_String) "non-du type");
#line 1154 "switch_util.m"
          return;
        }
#line 1153 "switch_util.m"
      }
#line 1156 "switch_util.m"
    {
#line 1156 "switch_util.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__switch_util_scalar_common_2[0], &backend_libs__switch_util__PtagCountMap0_29);
    }
#line 1157 "switch_util.m"
    {
#line 1157 "switch_util.m"
      backend_libs__switch_util__get_ptag_counts_loop_5_p_0(backend_libs__switch_util__TagList_23, (MR_Integer) -1, backend_libs__switch_util__MaxPrimary_7, backend_libs__switch_util__PtagCountMap0_29, backend_libs__switch_util__PtagCountMap_8);
#line 1157 "switch_util.m"
      return;
    }
#line 1139 "switch_util.m"
  }
#line 351 "switch_util.m"
}

#line 345 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__order_ptags_by_value_4_p_0(
#line 345 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_18,
#line 345 "switch_util.m"
  MR_Integer backend_libs__switch_util__Ptag_5,
#line 345 "switch_util.m"
  MR_Integer backend_libs__switch_util__MaxPtag_6,
#line 345 "switch_util.m"
  MR_Word backend_libs__switch_util__PtagCaseMap0_7,
#line 345 "switch_util.m"
  MR_Word * backend_libs__switch_util__PtagCaseList_8)
#line 345 "switch_util.m"
{
#line 1450 "switch_util.m"
  while (MR_TRUE)
#line 1450 "switch_util.m"
    {
#line 1450 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1450 "switch_util.m"
      {
#line 1450 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__MaxPtag_6 >= backend_libs__switch_util__Ptag_5);

#line 1450 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1440 "switch_util.m"
          {
#line 1440 "switch_util.m"
            MR_Integer backend_libs__switch_util__NextPtag_9 = (backend_libs__switch_util__Ptag_5 + (MR_Integer) 1);
#line 1447 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_21_21;
#line 1447 "switch_util.m"
            MR_Word backend_libs__switch_util__PtagCase_10;
#line 1441 "switch_util.m"
            MR_Box backend_libs__switch_util__conv0_PtagCase_10;

#line 12131 "backend_libs.switch_util.c"
            {
#line 12133 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12135 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_21_21, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12137 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_21_21, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_18));
#line 12139 "backend_libs.switch_util.c"
            }
#line 1441 "switch_util.m"
            {
#line 1441 "switch_util.m"
              backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_21_21, (MR_Word) backend_libs__switch_util__PtagCaseMap0_7, backend_libs__switch_util__Ptag_5, &backend_libs__switch_util__conv0_PtagCase_10);
            }
#line 1441 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1441 "switch_util.m"
              {
#line 1441 "switch_util.m"
                backend_libs__switch_util__PtagCase_10 = ((MR_Word) backend_libs__switch_util__conv0_PtagCase_10);
#line 1441 "switch_util.m"
                backend_libs__switch_util__succeeded = MR_TRUE;
#line 1441 "switch_util.m"
              }
#line 1447 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1442 "switch_util.m"
              {
#line 1442 "switch_util.m"
                MR_Word backend_libs__switch_util__PtagCaseMap1_11;
#line 1442 "switch_util.m"
                MR_Word backend_libs__switch_util__PtagCaseList1_12;
#line 1442 "switch_util.m"
                MR_Word backend_libs__switch_util__PtagCaseEntry_13;

#line 1442 "switch_util.m"
                {
#line 1442 "switch_util.m"
                  mercury__map__delete_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_21_21, ((MR_Box) (backend_libs__switch_util__Ptag_5)), backend_libs__switch_util__PtagCaseMap0_7, &backend_libs__switch_util__PtagCaseMap1_11);
                }
#line 1443 "switch_util.m"
                {
#line 1443 "switch_util.m"
                  backend_libs__switch_util__order_ptags_by_value_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_18, backend_libs__switch_util__NextPtag_9, backend_libs__switch_util__MaxPtag_6, backend_libs__switch_util__PtagCaseMap1_11, &backend_libs__switch_util__PtagCaseList1_12);
                }
#line 1445 "switch_util.m"
                {
#line 1445 "switch_util.m"
                  backend_libs__switch_util__PtagCaseEntry_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1445 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__PtagCaseEntry_13, 0) = ((MR_Box) (backend_libs__switch_util__Ptag_5));
#line 1445 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__PtagCaseEntry_13, 1) = ((MR_Box) (backend_libs__switch_util__PtagCase_10));
#line 1445 "switch_util.m"
                }
#line 1446 "switch_util.m"
                {
#line 1446 "switch_util.m"
                  MR_Word base;
#line 1446 "switch_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1446 "switch_util.m"
                  *backend_libs__switch_util__PtagCaseList_8 = base;
#line 1446 "switch_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__PtagCaseEntry_13));
#line 1446 "switch_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__PtagCaseList1_12));
#line 1446 "switch_util.m"
                }
#line 1442 "switch_util.m"
              }
#line 1447 "switch_util.m"
            else
#line 1448 "switch_util.m"
              {
#line 1448 "switch_util.m"
                /* direct tailcall eliminated */
#line 1448 "switch_util.m"
                {
#line 1448 "switch_util.m"
                  MR_Integer backend_libs__switch_util__Ptag__tmp_copy_5 = backend_libs__switch_util__NextPtag_9;

#line 1448 "switch_util.m"
                  backend_libs__switch_util__Ptag_5 = backend_libs__switch_util__Ptag__tmp_copy_5;
#line 1448 "switch_util.m"
                }
#line 1448 "switch_util.m"
                continue;
#line 1448 "switch_util.m"
              }
#line 1440 "switch_util.m"
          }
#line 1450 "switch_util.m"
        else
#line 1453 "switch_util.m"
          {
#line 1451 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_27_27;

#line 12231 "backend_libs.switch_util.c"
            {
#line 12233 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12235 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_27_27, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12237 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_27_27, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_18));
#line 12239 "backend_libs.switch_util.c"
            }
#line 1451 "switch_util.m"
            {
#line 1451 "switch_util.m"
              backend_libs__switch_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_27_27, backend_libs__switch_util__PtagCaseMap0_7);
            }
#line 1453 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1452 "switch_util.m"
              *backend_libs__switch_util__PtagCaseList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1453 "switch_util.m"
            else
#line 1454 "switch_util.m"
              {
#line 1454 "switch_util.m"
                {
#line 1454 "switch_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.order_ptags_by_value\'/4", (MR_String) "PtagCaseMap0 is not empty");
#line 1454 "switch_util.m"
                  return;
                }
#line 1454 "switch_util.m"
              }
#line 1453 "switch_util.m"
          }
#line 1450 "switch_util.m"
      }
#line 1450 "switch_util.m"
      break;
#line 1450 "switch_util.m"
    }
#line 345 "switch_util.m"
}

#line 1365 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__order_ptags_by_count_3_p_0_1(
#line 1365 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1365 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1365 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2)
#line 1365 "switch_util.m"
{
#line 1365 "switch_util.m"
  {
#line 1365 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 1365 "switch_util.m"
    MR_Word backend_libs__switch_util__conv3_GroupEntry_4;

#line 1365 "switch_util.m"
    {
#line 1365 "switch_util.m"
      backend_libs__switch_util__interpret_rev_map_entry_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv3_GroupEntry_4);
    }
#line 1365 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv3_GroupEntry_4));
#line 1365 "switch_util.m"
  }
#line 1365 "switch_util.m"
}

#line 335 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__order_ptags_by_count_3_p_0(
#line 335 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_14,
#line 335 "switch_util.m"
  MR_Word backend_libs__switch_util__PtagCountMap_4,
#line 335 "switch_util.m"
  MR_Word backend_libs__switch_util__PtagCaseMap_5,
#line 335 "switch_util.m"
  MR_Word * backend_libs__switch_util__PtagGroupCaseList_6)
#line 335 "switch_util.m"
{
#line 1356 "switch_util.m"
  {
#line 1356 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1356 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_17_17;
#line 1356 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_19_19;
#line 1356 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_23_23;
#line 1356 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseList_7;
#line 1356 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseRevMap_8;
#line 1356 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseRevList_9;
#line 1356 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseRevSortedList_10;
#line 1356 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseSortedList_11;
#line 1356 "switch_util.m"
    MR_Word backend_libs__switch_util__V_12_12;
#line 1356 "switch_util.m"
    MR_Word backend_libs__switch_util__V_13_13;
#line 1359 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_V_12_12;
#line 1361 "switch_util.m"
    MR_Word backend_libs__switch_util__conv1_PtagCaseRevSortedList_10;
#line 1364 "switch_util.m"
    MR_Word backend_libs__switch_util__conv2_PtagCaseSortedList_11;

#line 12348 "backend_libs.switch_util.c"
    {
#line 12350 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12352 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12354 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 12356 "backend_libs.switch_util.c"
    }
#line 1357 "switch_util.m"
    {
#line 1357 "switch_util.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_17_17, backend_libs__switch_util__PtagCaseMap_5, &backend_libs__switch_util__PtagCaseList_7);
    }
#line 12363 "backend_libs.switch_util.c"
    {
#line 12365 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12367 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_19_19, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 12369 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_19_19, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 12371 "backend_libs.switch_util.c"
    }
#line 1359 "switch_util.m"
    {
#line 1359 "switch_util.m"
      backend_libs__switch_util__conv0_V_12_12 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeInfo_17_17, backend_libs__switch_util__TypeInfo_19_19);
    }
#line 1359 "switch_util.m"
    backend_libs__switch_util__V_12_12 = (MR_Word) backend_libs__switch_util__conv0_V_12_12;
#line 1358 "switch_util.m"
    {
#line 1358 "switch_util.m"
      backend_libs__switch_util__build_ptag_case_rev_map_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_14, backend_libs__switch_util__PtagCaseList_7, backend_libs__switch_util__PtagCountMap_4, backend_libs__switch_util__V_12_12, &backend_libs__switch_util__PtagCaseRevMap_8);
    }
#line 1360 "switch_util.m"
    {
#line 1360 "switch_util.m"
      mercury__map__values_2_p_0(backend_libs__switch_util__TypeInfo_17_17, backend_libs__switch_util__TypeInfo_19_19, (MR_Word) backend_libs__switch_util__PtagCaseRevMap_8, &backend_libs__switch_util__PtagCaseRevList_9);
    }
#line 1361 "switch_util.m"
    {
#line 1361 "switch_util.m"
      mercury__list__sort_2_p_0(backend_libs__switch_util__TypeInfo_19_19, (MR_Word) backend_libs__switch_util__PtagCaseRevList_9, &backend_libs__switch_util__conv1_PtagCaseRevSortedList_10);
    }
#line 1361 "switch_util.m"
    backend_libs__switch_util__PtagCaseRevSortedList_10 = (MR_Word) backend_libs__switch_util__conv1_PtagCaseRevSortedList_10;
#line 1364 "switch_util.m"
    {
#line 1364 "switch_util.m"
      mercury__list__reverse_2_p_0(backend_libs__switch_util__TypeInfo_19_19, (MR_Word) backend_libs__switch_util__PtagCaseRevSortedList_10, &backend_libs__switch_util__conv2_PtagCaseSortedList_11);
    }
#line 1364 "switch_util.m"
    backend_libs__switch_util__PtagCaseSortedList_11 = (MR_Word) backend_libs__switch_util__conv2_PtagCaseSortedList_11;
#line 1365 "switch_util.m"
    {
#line 1365 "switch_util.m"
      backend_libs__switch_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1365 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_6[0]));
#line 1365 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 1) = ((MR_Box) (backend_libs__switch_util__order_ptags_by_count_3_p_0_1));
#line 1365 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1365 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 1365 "switch_util.m"
    }
#line 12418 "backend_libs.switch_util.c"
    {
#line 12420 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12422 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1));
#line 12424 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 12426 "backend_libs.switch_util.c"
    }
#line 1365 "switch_util.m"
    {
#line 1365 "switch_util.m"
      mercury__list__map_3_p_0(backend_libs__switch_util__TypeInfo_19_19, backend_libs__switch_util__TypeInfo_23_23, (MR_Word) backend_libs__switch_util__V_13_13, (MR_Word) backend_libs__switch_util__PtagCaseSortedList_11, backend_libs__switch_util__PtagGroupCaseList_6);
#line 1365 "switch_util.m"
      return;
    }
#line 1356 "switch_util.m"
  }
#line 335 "switch_util.m"
}

#line 320 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__group_cases_by_ptag_10_p_0(
#line 320 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_29,
#line 320 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_StateA_30,
#line 320 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_StateB_31,
#line 320 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_StateC_32,
#line 320 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedCases_11,
#line 320 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_12,
#line 320 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_18,
#line 320 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_19,
#line 320 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_20,
#line 320 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_21,
#line 320 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_22,
#line 320 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_23,
#line 320 "switch_util.m"
  MR_Word * backend_libs__switch_util__CaseNumPtagsMap_16,
#line 320 "switch_util.m"
  MR_Word * backend_libs__switch_util__PtagCaseMap_17)
#line 320 "switch_util.m"
{
#line 1247 "switch_util.m"
  {
#line 1247 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1247 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_37_37;
#line 1247 "switch_util.m"
    MR_Word backend_libs__switch_util__V_27_27;
#line 1247 "switch_util.m"
    MR_Word backend_libs__switch_util__V_28_28;

#line 1250 "switch_util.m"
    {
#line 1250 "switch_util.m"
      backend_libs__switch_util__V_27_27 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &backend_libs__switch_util_scalar_common_1[0]);
    }
#line 12489 "backend_libs.switch_util.c"
    {
#line 12491 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12493 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_37_37, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12495 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_37_37, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_29));
#line 12497 "backend_libs.switch_util.c"
    }
#line 1250 "switch_util.m"
    {
#line 1250 "switch_util.m"
      backend_libs__switch_util__V_28_28 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_37_37);
    }
#line 1248 "switch_util.m"
    {
#line 1248 "switch_util.m"
      backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_29, backend_libs__switch_util__TaggedCases_11, backend_libs__switch_util__RepresentCase_12, backend_libs__switch_util__STATE_VARIABLE_StateA_0_18, backend_libs__switch_util__STATE_VARIABLE_StateA_19, backend_libs__switch_util__STATE_VARIABLE_StateB_0_20, backend_libs__switch_util__STATE_VARIABLE_StateB_21, backend_libs__switch_util__STATE_VARIABLE_StateC_0_22, backend_libs__switch_util__STATE_VARIABLE_StateC_23, backend_libs__switch_util__V_27_27, backend_libs__switch_util__CaseNumPtagsMap_16, backend_libs__switch_util__V_28_28, backend_libs__switch_util__PtagCaseMap_17);
#line 1248 "switch_util.m"
      return;
    }
#line 1247 "switch_util.m"
  }
#line 320 "switch_util.m"
}

#line 226 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__string_binary_cases_9_p_0(
#line 226 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_27,
#line 226 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_StateA_28,
#line 226 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_StateB_29,
#line 226 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_StateC_30,
#line 226 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedCases_10,
#line 226 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_11,
#line 226 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_17,
#line 226 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_18,
#line 226 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_19,
#line 226 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_20,
#line 226 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_21,
#line 226 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_22,
#line 226 "switch_util.m"
  MR_Word * backend_libs__switch_util__SortedTable_15)
#line 226 "switch_util.m"
{
#line 1099 "switch_util.m"
  {
#line 1099 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1099 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_33_33;
#line 1099 "switch_util.m"
    MR_Word backend_libs__switch_util__UnsortedTable_16;
#line 1102 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_SortedTable_15;

#line 1100 "switch_util.m"
    {
#line 1100 "switch_util.m"
      backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_27, backend_libs__switch_util__TaggedCases_10, backend_libs__switch_util__RepresentCase_11, backend_libs__switch_util__STATE_VARIABLE_StateA_0_17, backend_libs__switch_util__STATE_VARIABLE_StateA_18, backend_libs__switch_util__STATE_VARIABLE_StateB_0_19, backend_libs__switch_util__STATE_VARIABLE_StateB_20, backend_libs__switch_util__STATE_VARIABLE_StateC_0_21, backend_libs__switch_util__STATE_VARIABLE_StateC_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__switch_util__UnsortedTable_16);
    }
#line 12563 "backend_libs.switch_util.c"
    {
#line 12565 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12567 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_33_33, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 12569 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_33_33, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 12571 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_33_33, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_27));
#line 12573 "backend_libs.switch_util.c"
    }
#line 1102 "switch_util.m"
    {
#line 1102 "switch_util.m"
      mercury__list__sort_2_p_0(backend_libs__switch_util__TypeInfo_33_33, (MR_Word) backend_libs__switch_util__UnsortedTable_16, &backend_libs__switch_util__conv0_SortedTable_15);
    }
#line 1102 "switch_util.m"
    *backend_libs__switch_util__SortedTable_15 = (MR_Word) backend_libs__switch_util__conv0_SortedTable_15;
#line 1099 "switch_util.m"
  }
#line 226 "switch_util.m"
}

#line 213 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__construct_string_hash_cases_6_p_0(
#line 213 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_81,
#line 213 "switch_util.m"
  MR_Word backend_libs__switch_util__StrsDatas_7,
#line 213 "switch_util.m"
  MR_Word backend_libs__switch_util__Upgrade_8,
#line 213 "switch_util.m"
  MR_Integer * backend_libs__switch_util__TableSize_9,
#line 213 "switch_util.m"
  MR_Word * backend_libs__switch_util__HashSlotsMap_10,
#line 213 "switch_util.m"
  MR_Word * backend_libs__switch_util__HashOp_11,
#line 213 "switch_util.m"
  MR_Integer * backend_libs__switch_util__NumCollisions_12)
#line 213 "switch_util.m"
{
#line 831 "switch_util.m"
  {
#line 831 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 831 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_84_84;
#line 831 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeCtorInfo_85_85;
#line 831 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_87_87;
#line 831 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumStrs_13;
#line 831 "switch_util.m"
    MR_Integer backend_libs__switch_util__LogNumStrs_14;
#line 831 "switch_util.m"
    MR_Integer backend_libs__switch_util__RoundedUpNumStrs_15;
#line 831 "switch_util.m"
    MR_Integer backend_libs__switch_util__TableSizeA_16;
#line 831 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashMaskA_17;
#line 831 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap4A_18;
#line 831 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap5A_19;
#line 831 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap6A_20;
#line 831 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisions4A_21;
#line 831 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisions5A_22;
#line 831 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisions6A_23;
#line 831 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMapA_25;
#line 831 "switch_util.m"
    MR_Word backend_libs__switch_util__HashOpA_26;
#line 831 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisionsA_27;
#line 831 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap_28;
#line 831 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsList_37;
#line 831 "switch_util.m"
    MR_Word backend_libs__switch_util__V_41_41;
#line 831 "switch_util.m"
    MR_Word backend_libs__switch_util__V_42_42;
#line 831 "switch_util.m"
    MR_Word backend_libs__switch_util__V_43_43;

#line 12655 "backend_libs.switch_util.c"
    {
#line 12657 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12659 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_84_84, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 12661 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_84_84, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 12663 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_84_84, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_81));
#line 12665 "backend_libs.switch_util.c"
    }
#line 838 "switch_util.m"
    {
#line 838 "switch_util.m"
      mercury__list__length_2_p_0(backend_libs__switch_util__TypeInfo_84_84, (MR_Word) backend_libs__switch_util__StrsDatas_7, &backend_libs__switch_util__NumStrs_13);
    }
#line 839 "switch_util.m"
    {
#line 839 "switch_util.m"
      mercury__int__log2_2_p_0(backend_libs__switch_util__NumStrs_13, &backend_libs__switch_util__LogNumStrs_14);
    }
#line 840 "switch_util.m"
    {
#line 840 "switch_util.m"
      mercury__int__pow_3_p_0((MR_Integer) 2, backend_libs__switch_util__LogNumStrs_14, &backend_libs__switch_util__RoundedUpNumStrs_15);
    }
#line 842 "switch_util.m"
    backend_libs__switch_util__TableSizeA_16 = ((MR_Integer) 2 * backend_libs__switch_util__RoundedUpNumStrs_15);
#line 845 "switch_util.m"
    backend_libs__switch_util__HashMaskA_17 = (backend_libs__switch_util__TableSizeA_16 - (MR_Integer) 1);
#line 12686 "backend_libs.switch_util.c"
    backend_libs__switch_util__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 12688 "backend_libs.switch_util.c"
    {
#line 12690 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12692 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_87_87, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 12694 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_87_87, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_84_84));
#line 12696 "backend_libs.switch_util.c"
    }
#line 847 "switch_util.m"
    {
#line 847 "switch_util.m"
      backend_libs__switch_util__V_41_41 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
    }
#line 847 "switch_util.m"
    {
#line 847 "switch_util.m"
      backend_libs__switch_util__V_42_42 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
    }
#line 848 "switch_util.m"
    {
#line 848 "switch_util.m"
      backend_libs__switch_util__V_43_43 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
    }
#line 846 "switch_util.m"
    {
#line 846 "switch_util.m"
      backend_libs__switch_util__string_hash_cases_14_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_81, backend_libs__switch_util__StrsDatas_7, backend_libs__switch_util__HashMaskA_17, backend_libs__switch_util__V_41_41, &backend_libs__switch_util__HashValsMap4A_18, backend_libs__switch_util__V_42_42, &backend_libs__switch_util__HashValsMap5A_19, backend_libs__switch_util__V_43_43, &backend_libs__switch_util__HashValsMap6A_20, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions4A_21, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions5A_22, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions6A_23);
    }
#line 854 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions4A_21 <= backend_libs__switch_util__NumCollisions5A_22);
#line 854 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 854 "switch_util.m"
      backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions4A_21 <= backend_libs__switch_util__NumCollisions6A_23);
#line 858 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 855 "switch_util.m"
      {
#line 855 "switch_util.m"
        backend_libs__switch_util__HashValsMapA_25 = backend_libs__switch_util__HashValsMap4A_18;
#line 856 "switch_util.m"
        backend_libs__switch_util__HashOpA_26 = (MR_Integer) 11;
#line 857 "switch_util.m"
        backend_libs__switch_util__NumCollisionsA_27 = backend_libs__switch_util__NumCollisions4A_21;
#line 855 "switch_util.m"
      }
#line 858 "switch_util.m"
    else
#line 862 "switch_util.m"
      {
#line 858 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions5A_22 <= backend_libs__switch_util__NumCollisions6A_23);
#line 862 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 859 "switch_util.m"
          {
#line 859 "switch_util.m"
            backend_libs__switch_util__HashValsMapA_25 = backend_libs__switch_util__HashValsMap5A_19;
#line 860 "switch_util.m"
            backend_libs__switch_util__HashOpA_26 = (MR_Integer) 12;
#line 861 "switch_util.m"
            backend_libs__switch_util__NumCollisionsA_27 = backend_libs__switch_util__NumCollisions5A_22;
#line 859 "switch_util.m"
          }
#line 862 "switch_util.m"
        else
#line 863 "switch_util.m"
          {
#line 863 "switch_util.m"
            backend_libs__switch_util__HashValsMapA_25 = backend_libs__switch_util__HashValsMap6A_20;
#line 864 "switch_util.m"
            backend_libs__switch_util__HashOpA_26 = (MR_Integer) 13;
#line 865 "switch_util.m"
            backend_libs__switch_util__NumCollisionsA_27 = backend_libs__switch_util__NumCollisions6A_23;
#line 863 "switch_util.m"
          }
#line 862 "switch_util.m"
      }
#line 869 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisionsA_27 == (MR_Integer) 0);
#line 870 "switch_util.m"
    if (!(backend_libs__switch_util__succeeded))
#line 870 "switch_util.m"
      backend_libs__switch_util__succeeded = (backend_libs__switch_util__Upgrade_8 == (MR_Integer) 0);
#line 877 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 873 "switch_util.m"
      {
#line 873 "switch_util.m"
        *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeA_16;
#line 874 "switch_util.m"
        backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMapA_25;
#line 875 "switch_util.m"
        *backend_libs__switch_util__HashOp_11 = backend_libs__switch_util__HashOpA_26;
#line 876 "switch_util.m"
        *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisionsA_27;
#line 873 "switch_util.m"
      }
#line 877 "switch_util.m"
    else
#line 878 "switch_util.m"
      {
#line 878 "switch_util.m"
        MR_Integer backend_libs__switch_util__TableSizeB_29 = ((MR_Integer) 4 * backend_libs__switch_util__RoundedUpNumStrs_15);
#line 878 "switch_util.m"
        MR_Integer backend_libs__switch_util__HashMaskB_30 = (backend_libs__switch_util__TableSizeB_29 - (MR_Integer) 1);
#line 878 "switch_util.m"
        MR_Word backend_libs__switch_util__HashValsMap4B_31;
#line 878 "switch_util.m"
        MR_Word backend_libs__switch_util__HashValsMap5B_32;
#line 878 "switch_util.m"
        MR_Word backend_libs__switch_util__HashValsMap6B_33;
#line 878 "switch_util.m"
        MR_Integer backend_libs__switch_util__NumCollisions4B_34;
#line 878 "switch_util.m"
        MR_Integer backend_libs__switch_util__NumCollisions5B_35;
#line 878 "switch_util.m"
        MR_Integer backend_libs__switch_util__NumCollisions6B_36;
#line 878 "switch_util.m"
        MR_Word backend_libs__switch_util__V_59_59;
#line 878 "switch_util.m"
        MR_Word backend_libs__switch_util__V_60_60;
#line 878 "switch_util.m"
        MR_Word backend_libs__switch_util__V_61_61;

#line 883 "switch_util.m"
        {
#line 883 "switch_util.m"
          backend_libs__switch_util__V_59_59 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
        }
#line 883 "switch_util.m"
        {
#line 883 "switch_util.m"
          backend_libs__switch_util__V_60_60 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
        }
#line 884 "switch_util.m"
        {
#line 884 "switch_util.m"
          backend_libs__switch_util__V_61_61 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
        }
#line 882 "switch_util.m"
        {
#line 882 "switch_util.m"
          backend_libs__switch_util__string_hash_cases_14_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_81, backend_libs__switch_util__StrsDatas_7, backend_libs__switch_util__HashMaskB_30, backend_libs__switch_util__V_59_59, &backend_libs__switch_util__HashValsMap4B_31, backend_libs__switch_util__V_60_60, &backend_libs__switch_util__HashValsMap5B_32, backend_libs__switch_util__V_61_61, &backend_libs__switch_util__HashValsMap6B_33, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions4B_34, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions5B_35, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions6B_36);
        }
#line 891 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions4B_34 == (MR_Integer) 0);
#line 896 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 892 "switch_util.m"
          {
#line 892 "switch_util.m"
            *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeB_29;
#line 893 "switch_util.m"
            backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMap4B_31;
#line 894 "switch_util.m"
            *backend_libs__switch_util__HashOp_11 = (MR_Integer) 11;
#line 895 "switch_util.m"
            *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisions4B_34;
#line 892 "switch_util.m"
          }
#line 896 "switch_util.m"
        else
#line 901 "switch_util.m"
          {
#line 896 "switch_util.m"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions5B_35 == (MR_Integer) 0);
#line 901 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 897 "switch_util.m"
              {
#line 897 "switch_util.m"
                *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeB_29;
#line 898 "switch_util.m"
                backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMap5B_32;
#line 899 "switch_util.m"
                *backend_libs__switch_util__HashOp_11 = (MR_Integer) 12;
#line 900 "switch_util.m"
                *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisions5B_35;
#line 897 "switch_util.m"
              }
#line 901 "switch_util.m"
            else
#line 906 "switch_util.m"
              {
#line 901 "switch_util.m"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions6B_36 == (MR_Integer) 0);
#line 906 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 902 "switch_util.m"
                  {
#line 902 "switch_util.m"
                    *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeB_29;
#line 903 "switch_util.m"
                    backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMap6B_33;
#line 904 "switch_util.m"
                    *backend_libs__switch_util__HashOp_11 = (MR_Integer) 13;
#line 905 "switch_util.m"
                    *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisions6B_36;
#line 902 "switch_util.m"
                  }
#line 906 "switch_util.m"
                else
#line 907 "switch_util.m"
                  {
#line 907 "switch_util.m"
                    *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeA_16;
#line 908 "switch_util.m"
                    backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMapA_25;
#line 909 "switch_util.m"
                    *backend_libs__switch_util__HashOp_11 = backend_libs__switch_util__HashOpA_26;
#line 910 "switch_util.m"
                    *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisionsA_27;
#line 907 "switch_util.m"
                  }
#line 906 "switch_util.m"
              }
#line 901 "switch_util.m"
          }
#line 878 "switch_util.m"
      }
#line 920 "switch_util.m"
    {
#line 920 "switch_util.m"
      mercury__map__to_assoc_list_2_p_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87, backend_libs__switch_util__HashValsMap_28, &backend_libs__switch_util__HashValsList_37);
    }
#line 921 "switch_util.m"
    {
#line 921 "switch_util.m"
      backend_libs__switch_util__calc_string_hash_slots_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_81, *backend_libs__switch_util__TableSize_9, backend_libs__switch_util__HashValsList_37, backend_libs__switch_util__HashValsMap_28, backend_libs__switch_util__HashSlotsMap_10);
#line 921 "switch_util.m"
      return;
    }
#line 831 "switch_util.m"
  }
#line 213 "switch_util.m"
}

#line 192 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__get_word_bits_3_p_0(
#line 192 "switch_util.m"
  MR_Word backend_libs__switch_util__Globals_4,
#line 192 "switch_util.m"
  MR_Integer * backend_libs__switch_util__WordBits_5,
#line 192 "switch_util.m"
  MR_Integer * backend_libs__switch_util__Log2WordBits_6)
#line 192 "switch_util.m"
{
#line 811 "switch_util.m"
  {
#line 811 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 811 "switch_util.m"
    MR_Integer backend_libs__switch_util__HostWordBits_7;
#line 811 "switch_util.m"
    MR_Integer backend_libs__switch_util__TargetWordBits_8;
#line 811 "switch_util.m"
    MR_Integer backend_libs__switch_util__WordBits0_9;
#line 811 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_14_14;
#line 811 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_15_15;

#line 812 "switch_util.m"
    {
#line 812 "switch_util.m"
      mercury__int__bits_per_int_1_p_0(&backend_libs__switch_util__HostWordBits_7);
    }
#line 813 "switch_util.m"
    {
#line 813 "switch_util.m"
      libs__globals__lookup_int_option_3_p_0(backend_libs__switch_util__Globals_4, (MR_Integer) 240, &backend_libs__switch_util__TargetWordBits_8);
    }
#line 814 "switch_util.m"
    {
#line 814 "switch_util.m"
      mercury__int__min_3_p_0(backend_libs__switch_util__HostWordBits_7, backend_libs__switch_util__TargetWordBits_8, &backend_libs__switch_util__WordBits0_9);
    }
#line 822 "switch_util.m"
    backend_libs__switch_util__V_14_14 = (backend_libs__switch_util__WordBits0_9 + (MR_Integer) 1);
#line 822 "switch_util.m"
    {
#line 822 "switch_util.m"
      mercury__int__log2_2_p_0(backend_libs__switch_util__V_14_14, &backend_libs__switch_util__V_15_15);
    }
#line 822 "switch_util.m"
    *backend_libs__switch_util__Log2WordBits_6 = (backend_libs__switch_util__V_15_15 - (MR_Integer) 1);
#line 817 "switch_util.m"
    {
#line 817 "switch_util.m"
      mercury__int__pow_3_p_0((MR_Integer) 2, *backend_libs__switch_util__Log2WordBits_6, backend_libs__switch_util__WordBits_5);
#line 817 "switch_util.m"
      return;
    }
#line 811 "switch_util.m"
  }
#line 192 "switch_util.m"
}

#line 173 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__project_solns_to_rval_lists_3_p_0(
#line 173 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_T_21,
#line 173 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_22,
#line 173 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 173 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2,
#line 173 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RvalsList_3)
#line 173 "switch_util.m"
{
#line 799 "switch_util.m"
  while (MR_TRUE)
#line 799 "switch_util.m"
    {
#line 799 "switch_util.m"
      /* tailcall optimized into a loop */
#line 799 "switch_util.m"
      {
#line 799 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 799 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 799 "switch_util.m"
          *backend_libs__switch_util__STATE_VARIABLE_RvalsList_3 = backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2;
#line 799 "switch_util.m"
        else
#line 800 "switch_util.m"
          {
#line 800 "switch_util.m"
            MR_Word backend_libs__switch_util__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 800 "switch_util.m"
            MR_Word backend_libs__switch_util__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 800 "switch_util.m"
            MR_Word backend_libs__switch_util__Soln_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_7, (MR_Integer) 1)));
#line 800 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19;
#line 801 "switch_util.m"
            MR_Box backend_libs__switch_util___Index_10 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_7, (MR_Integer) 0));

#line 805 "switch_util.m"
            if (((MR_tag((MR_Word) backend_libs__switch_util__Soln_11)) == (MR_mktag((MR_Integer) 0))))
#line 803 "switch_util.m"
              {
#line 803 "switch_util.m"
                MR_Word backend_libs__switch_util__Rvals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Soln_11, (MR_Integer) 0)));

#line 804 "switch_util.m"
                {
#line 804 "switch_util.m"
                  backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19, 0) = ((MR_Box) (backend_libs__switch_util__Rvals_12));
#line 804 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19, 1) = ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2));
#line 804 "switch_util.m"
                }
#line 803 "switch_util.m"
              }
#line 805 "switch_util.m"
            else
#line 806 "switch_util.m"
              {
#line 806 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_24_24;
#line 806 "switch_util.m"
                MR_Word backend_libs__switch_util__FirstSolnRvals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__Soln_11, (MR_Integer) 0)));
#line 806 "switch_util.m"
                MR_Word backend_libs__switch_util__LaterSolnsRvalsList_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__Soln_11, (MR_Integer) 1)));
#line 806 "switch_util.m"
                MR_Word backend_libs__switch_util__V_18_18;

#line 13067 "backend_libs.switch_util.c"
                {
#line 13069 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13071 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 13073 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_22));
#line 13075 "backend_libs.switch_util.c"
                }
#line 807 "switch_util.m"
                {
#line 807 "switch_util.m"
                  backend_libs__switch_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_18_18, 0) = ((MR_Box) (backend_libs__switch_util__FirstSolnRvals_13));
#line 807 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_18_18, 1) = ((MR_Box) (backend_libs__switch_util__LaterSolnsRvalsList_14));
#line 807 "switch_util.m"
                }
#line 807 "switch_util.m"
                {
#line 807 "switch_util.m"
                  backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19 = mercury__list__f_43_43_2_f_0(backend_libs__switch_util__TypeInfo_24_24, backend_libs__switch_util__V_18_18, backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2);
                }
#line 806 "switch_util.m"
              }
#line 809 "switch_util.m"
            /* direct tailcall eliminated */
#line 809 "switch_util.m"
            {
#line 809 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Cases_8;
#line 809 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_RvalsList_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19;

#line 809 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2 = backend_libs__switch_util__STATE_VARIABLE_RvalsList_0__tmp_copy_2;
#line 809 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 809 "switch_util.m"
            }
#line 809 "switch_util.m"
            continue;
#line 800 "switch_util.m"
          }
#line 799 "switch_util.m"
      }
#line 799 "switch_util.m"
      break;
#line 799 "switch_util.m"
    }
#line 173 "switch_util.m"
}

#line 791 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__project_all_to_one_solution_2_p_0_1(
#line 791 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 791 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 791 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 791 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3)
#line 791 "switch_util.m"
{
#line 791 "switch_util.m"
  {
#line 791 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 791 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 791 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_Values_6;

#line 791 "switch_util.m"
    {
#line 791 "switch_util.m"
      backend_libs__switch_util__succeeded = backend_libs__switch_util__project_soln_consts_to_one_soln_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))), backend_libs__switch_util__wrapper_arg_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), &backend_libs__switch_util__conv0_Values_6);
    }
#line 791 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 791 "switch_util.m"
      {
#line 791 "switch_util.m"
        *backend_libs__switch_util__wrapper_arg_3 = ((MR_Box) (backend_libs__switch_util__conv0_Values_6));
#line 791 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 791 "switch_util.m"
      }
#line 791 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 791 "switch_util.m"
  }
#line 791 "switch_util.m"
}

#line 170 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util__project_all_to_one_solution_2_p_0(
#line 170 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Key_6,
#line 170 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_7,
#line 170 "switch_util.m"
  MR_Word backend_libs__switch_util__CaseSolns_3,
#line 170 "switch_util.m"
  MR_Word * backend_libs__switch_util__CaseValuePairs_4)
#line 170 "switch_util.m"
{
#line 790 "switch_util.m"
  {
#line 790 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 790 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_12_12;
#line 790 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_14_14;
#line 790 "switch_util.m"
    MR_Word backend_libs__switch_util__V_5_5;

#line 791 "switch_util.m"
    {
#line 791 "switch_util.m"
      backend_libs__switch_util__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 791 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_5_5, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_4[0]));
#line 791 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_5_5, 1) = ((MR_Box) (backend_libs__switch_util__project_all_to_one_solution_2_p_0_1));
#line 791 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_5_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 791 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_5_5, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Key_6));
#line 791 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_5_5, 4) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_7));
#line 791 "switch_util.m"
    }
#line 13206 "backend_libs.switch_util.c"
    {
#line 13208 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13210 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_12_12, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1));
#line 13212 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_12_12, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_7));
#line 13214 "backend_libs.switch_util.c"
    }
#line 13216 "backend_libs.switch_util.c"
    {
#line 13218 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13220 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 13222 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_14_14, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_7));
#line 13224 "backend_libs.switch_util.c"
    }
#line 791 "switch_util.m"
    {
#line 791 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__map__map_values_3_p_1(backend_libs__switch_util__TypeInfo_for_Key_6, backend_libs__switch_util__TypeInfo_12_12, backend_libs__switch_util__TypeInfo_14_14, (MR_Word) backend_libs__switch_util__V_5_5, (MR_Word) backend_libs__switch_util__CaseSolns_3, backend_libs__switch_util__CaseValuePairs_4);
    }
#line 790 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 790 "switch_util.m"
  }
#line 170 "switch_util.m"
}

#line 165 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util__find_int_lookup_switch_params_11_p_0(
#line 165 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_12,
#line 165 "switch_util.m"
  MR_Word backend_libs__switch_util__SwitchVarType_13,
#line 165 "switch_util.m"
  MR_Word backend_libs__switch_util__SwitchCanFail_14,
#line 165 "switch_util.m"
  MR_Integer backend_libs__switch_util__LowerLimit_15,
#line 165 "switch_util.m"
  MR_Integer backend_libs__switch_util__UpperLimit_16,
#line 165 "switch_util.m"
  MR_Integer backend_libs__switch_util__NumValues_17,
#line 165 "switch_util.m"
  MR_Integer backend_libs__switch_util__ReqDensity_18,
#line 165 "switch_util.m"
  MR_Word * backend_libs__switch_util__NeedBitVecCheck_19,
#line 165 "switch_util.m"
  MR_Word * backend_libs__switch_util__NeedRangeCheck_20,
#line 165 "switch_util.m"
  MR_Integer * backend_libs__switch_util__FirstVal_21,
#line 165 "switch_util.m"
  MR_Integer * backend_libs__switch_util__LastVal_22)
#line 165 "switch_util.m"
{
#line 742 "switch_util.m"
  {
#line 742 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 742 "switch_util.m"
    MR_Integer backend_libs__switch_util__Span_23 = (backend_libs__switch_util__UpperLimit_16 - backend_libs__switch_util__LowerLimit_15);
#line 742 "switch_util.m"
    MR_Integer backend_libs__switch_util__Range_24 = (backend_libs__switch_util__Span_23 + (MR_Integer) 1);
#line 742 "switch_util.m"
    MR_Integer backend_libs__switch_util__Density_25;
#line 742 "switch_util.m"
    MR_Word backend_libs__switch_util__NeedBitVecCheck0_26;
#line 742 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_37_37 = (backend_libs__switch_util__NumValues_17 * (MR_Integer) 100);

#line 697 "switch_util.m"
    {
#line 697 "switch_util.m"
      backend_libs__switch_util__Density_25 = mercury__int__f_47_47_2_f_0(backend_libs__switch_util__V_37_37, backend_libs__switch_util__Range_24);
    }
#line 749 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__Density_25 > backend_libs__switch_util__ReqDensity_18);
#line 742 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 742 "switch_util.m"
      {
#line 753 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumValues_17 == backend_libs__switch_util__Range_24);
#line 755 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 754 "switch_util.m"
          backend_libs__switch_util__NeedBitVecCheck0_26 = (MR_Integer) 1;
#line 755 "switch_util.m"
        else
#line 756 "switch_util.m"
          backend_libs__switch_util__NeedBitVecCheck0_26 = (MR_Integer) 0;
#line 782 "switch_util.m"
        if ((backend_libs__switch_util__SwitchCanFail_14 == (MR_Integer) 0))
#line 759 "switch_util.m"
          {
#line 759 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeCategory_27;
#line 776 "switch_util.m"
            MR_Integer backend_libs__switch_util__TypeRange_30;
#line 768 "switch_util.m"
            MR_Integer backend_libs__switch_util__DetDensity_31;
#line 768 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_42_42;
#line 768 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_43_43;
#line 767 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_28_28;
#line 767 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_29_29;

#line 765 "switch_util.m"
            {
#line 765 "switch_util.m"
              backend_libs__switch_util__TypeCategory_27 = check_hlds__type_util__classify_type_2_f_0(backend_libs__switch_util__ModuleInfo_12, backend_libs__switch_util__SwitchVarType_13);
            }
#line 767 "switch_util.m"
            {
#line 767 "switch_util.m"
              backend_libs__switch_util__succeeded = backend_libs__switch_util__type_range_6_p_0(backend_libs__switch_util__ModuleInfo_12, backend_libs__switch_util__TypeCategory_27, backend_libs__switch_util__SwitchVarType_13, &backend_libs__switch_util__V_28_28, &backend_libs__switch_util__V_29_29, &backend_libs__switch_util__TypeRange_30);
            }
#line 768 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 768 "switch_util.m"
              {
#line 697 "switch_util.m"
                backend_libs__switch_util__V_43_43 = (MR_Integer) 100;
#line 697 "switch_util.m"
                backend_libs__switch_util__V_42_42 = (backend_libs__switch_util__NumValues_17 * backend_libs__switch_util__V_43_43);
#line 697 "switch_util.m"
                {
#line 697 "switch_util.m"
                  backend_libs__switch_util__DetDensity_31 = mercury__int__f_47_47_2_f_0(backend_libs__switch_util__V_42_42, backend_libs__switch_util__TypeRange_30);
                }
#line 770 "switch_util.m"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__DetDensity_31 > backend_libs__switch_util__ReqDensity_18);
#line 768 "switch_util.m"
              }
#line 776 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 772 "switch_util.m"
              {
#line 772 "switch_util.m"
                *backend_libs__switch_util__NeedRangeCheck_20 = (MR_Integer) 1;
#line 773 "switch_util.m"
                *backend_libs__switch_util__NeedBitVecCheck_19 = (MR_Integer) 0;
#line 774 "switch_util.m"
                *backend_libs__switch_util__FirstVal_21 = (MR_Integer) 0;
#line 775 "switch_util.m"
                *backend_libs__switch_util__LastVal_22 = (backend_libs__switch_util__TypeRange_30 - (MR_Integer) 1);
#line 772 "switch_util.m"
              }
#line 776 "switch_util.m"
            else
#line 777 "switch_util.m"
              {
#line 777 "switch_util.m"
                *backend_libs__switch_util__NeedRangeCheck_20 = (MR_Integer) 0;
#line 778 "switch_util.m"
                *backend_libs__switch_util__NeedBitVecCheck_19 = backend_libs__switch_util__NeedBitVecCheck0_26;
#line 779 "switch_util.m"
                *backend_libs__switch_util__FirstVal_21 = backend_libs__switch_util__LowerLimit_15;
#line 780 "switch_util.m"
                *backend_libs__switch_util__LastVal_22 = backend_libs__switch_util__UpperLimit_16;
#line 777 "switch_util.m"
              }
#line 759 "switch_util.m"
          }
#line 782 "switch_util.m"
        else
#line 783 "switch_util.m"
          {
#line 784 "switch_util.m"
            *backend_libs__switch_util__NeedRangeCheck_20 = (MR_Integer) 1;
#line 785 "switch_util.m"
            *backend_libs__switch_util__NeedBitVecCheck_19 = backend_libs__switch_util__NeedBitVecCheck0_26;
#line 786 "switch_util.m"
            *backend_libs__switch_util__FirstVal_21 = backend_libs__switch_util__LowerLimit_15;
#line 787 "switch_util.m"
            *backend_libs__switch_util__LastVal_22 = backend_libs__switch_util__UpperLimit_16;
#line 783 "switch_util.m"
          }
#line 782 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 742 "switch_util.m"
      }
#line 742 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 742 "switch_util.m"
  }
#line 165 "switch_util.m"
}

#line 161 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(
#line 161 "switch_util.m"
  MR_Word backend_libs__switch_util__CodeModel_6,
#line 161 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_TaggedCases_0_9,
#line 161 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_TaggedCases_10,
#line 161 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_11,
#line 161 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_12)
#line 161 "switch_util.m"
{
#line 709 "switch_util.m"
  {
#line 709 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 709 "switch_util.m"
    if ((backend_libs__switch_util__CodeModel_6 == (MR_Integer) 0))
#line 712 "switch_util.m"
      {
#line 712 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_TaggedCases_10 = backend_libs__switch_util__STATE_VARIABLE_TaggedCases_0_9;
#line 712 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_12 = backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_11;
#line 712 "switch_util.m"
      }
#line 709 "switch_util.m"
    else
#line 718 "switch_util.m"
      {
#line 718 "switch_util.m"
        MR_Word backend_libs__switch_util__RevTaggedCases_20;

#line 719 "switch_util.m"
        {
#line 719 "switch_util.m"
          backend_libs__switch_util__filter_out_failing_cases_loop_5_p_0(backend_libs__switch_util__STATE_VARIABLE_TaggedCases_0_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__switch_util__RevTaggedCases_20, backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_11, backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_12);
        }
#line 721 "switch_util.m"
        {
#line 721 "switch_util.m"
          mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, backend_libs__switch_util__RevTaggedCases_20, backend_libs__switch_util__STATE_VARIABLE_TaggedCases_10);
#line 721 "switch_util.m"
          return;
        }
#line 718 "switch_util.m"
      }
#line 709 "switch_util.m"
  }
#line 161 "switch_util.m"
}

#line 121 "switch_util.m"
MR_Integer MR_CALL 
backend_libs__switch_util__switch_density_2_f_0(
#line 121 "switch_util.m"
  MR_Integer backend_libs__switch_util__NumCases_4,
#line 121 "switch_util.m"
  MR_Integer backend_libs__switch_util__Range_5)
#line 121 "switch_util.m"
{
#line 696 "switch_util.m"
  {
#line 696 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 696 "switch_util.m"
    MR_Integer backend_libs__switch_util__Density_6;
#line 696 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_7_7 = (backend_libs__switch_util__NumCases_4 * (MR_Integer) 100);

#line 697 "switch_util.m"
    {
#line 697 "switch_util.m"
      return backend_libs__switch_util__Density_6 = mercury__int__f_47_47_2_f_0(backend_libs__switch_util__V_7_7, backend_libs__switch_util__Range_5);
    }
#line 696 "switch_util.m"
    return backend_libs__switch_util__Density_6;
#line 696 "switch_util.m"
  }
#line 121 "switch_util.m"
}

#line 116 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util__type_range_6_p_0(
#line 116 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_7,
#line 116 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeCtorCat_8,
#line 116 "switch_util.m"
  MR_Word backend_libs__switch_util__Type_9,
#line 116 "switch_util.m"
  MR_Integer * backend_libs__switch_util__Min_10,
#line 116 "switch_util.m"
  MR_Integer * backend_libs__switch_util__Max_11,
#line 116 "switch_util.m"
  MR_Integer * backend_libs__switch_util__NumValues_12)
#line 116 "switch_util.m"
{
#line 664 "switch_util.m"
  {
#line 664 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 664 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_38_38;
#line 664 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_39_39;

#line 674 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__TypeCtorCat_8)) == (MR_mktag((MR_Integer) 1))))
#line 666 "switch_util.m"
      {
#line 666 "switch_util.m"
        MR_Word backend_libs__switch_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeCtorCat_8, (MR_Integer) 0)));

#line 666 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_37_37 == (MR_Integer) 2);
#line 666 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 666 "switch_util.m"
          {
#line 672 "switch_util.m"
            {
#line 672 "switch_util.m"
              mercury__char__min_char_value_1_p_0(backend_libs__switch_util__Min_10);
            }
#line 673 "switch_util.m"
            {
#line 673 "switch_util.m"
              mercury__char__max_char_value_1_p_0(backend_libs__switch_util__Max_11);
            }
#line 673 "switch_util.m"
            backend_libs__switch_util__succeeded = MR_TRUE;
#line 666 "switch_util.m"
          }
#line 666 "switch_util.m"
      }
#line 674 "switch_util.m"
    else
#line 674 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__TypeCtorCat_8)) == (MR_mktag((MR_Integer) 2))))
#line 675 "switch_util.m"
      {
#line 675 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtor_13;
#line 675 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeTable_14;
#line 675 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeDefn_15;
#line 675 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeBody_16;
#line 675 "switch_util.m"
        MR_Word backend_libs__switch_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__switch_util__TypeCtorCat_8, (MR_Integer) 0)));

#line 675 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_32_32 == (MR_Integer) 0);
#line 675 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 675 "switch_util.m"
          {
#line 676 "switch_util.m"
            *backend_libs__switch_util__Min_10 = (MR_Integer) 0;
#line 677 "switch_util.m"
            {
#line 677 "switch_util.m"
              parse_tree__prog_type__type_to_ctor_det_2_p_0(backend_libs__switch_util__Type_9, &backend_libs__switch_util__TypeCtor_13);
            }
#line 678 "switch_util.m"
            {
#line 678 "switch_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__switch_util__ModuleInfo_7, &backend_libs__switch_util__TypeTable_14);
            }
#line 679 "switch_util.m"
            {
#line 679 "switch_util.m"
              hlds__hlds_data__lookup_type_ctor_defn_3_p_0(backend_libs__switch_util__TypeTable_14, backend_libs__switch_util__TypeCtor_13, &backend_libs__switch_util__TypeDefn_15);
            }
#line 680 "switch_util.m"
            {
#line 680 "switch_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__switch_util__TypeDefn_15, &backend_libs__switch_util__TypeBody_16);
            }
#line 685 "switch_util.m"
            if (((MR_tag((MR_Word) backend_libs__switch_util__TypeBody_16)) == (MR_mktag((MR_Integer) 1))))
#line 682 "switch_util.m"
              {
#line 682 "switch_util.m"
                MR_Word backend_libs__switch_util__ConsTable_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 1)));
#line 682 "switch_util.m"
                MR_Integer backend_libs__switch_util__TypeRange_26;
#line 682 "switch_util.m"
                MR_Word backend_libs__switch_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 0)));
#line 682 "switch_util.m"
                MR_Word backend_libs__switch_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 2)));
#line 682 "switch_util.m"
                MR_Word backend_libs__switch_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 3)));
#line 682 "switch_util.m"
                MR_Word backend_libs__switch_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 4)));
#line 682 "switch_util.m"
                MR_Word backend_libs__switch_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 5)));
#line 682 "switch_util.m"
                MR_Word backend_libs__switch_util__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 682 "switch_util.m"
                MR_Word backend_libs__switch_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 682 "switch_util.m"
                MR_Word backend_libs__switch_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 7)));

#line 683 "switch_util.m"
                {
#line 683 "switch_util.m"
                  mercury__map__count_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, backend_libs__switch_util__ConsTable_18, &backend_libs__switch_util__TypeRange_26);
                }
#line 684 "switch_util.m"
                *backend_libs__switch_util__Max_11 = (backend_libs__switch_util__TypeRange_26 - (MR_Integer) 1);
#line 682 "switch_util.m"
              }
#line 685 "switch_util.m"
            else
#line 690 "switch_util.m"
              {
#line 691 "switch_util.m"
                {
#line 691 "switch_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.type_range\'/6", (MR_String) "enum type is not d.u. type\?");
                }
#line 690 "switch_util.m"
              }
#line 685 "switch_util.m"
            backend_libs__switch_util__succeeded = MR_TRUE;
#line 675 "switch_util.m"
          }
#line 675 "switch_util.m"
      }
#line 674 "switch_util.m"
    else
#line 674 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_FALSE;
#line 664 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 664 "switch_util.m"
      {
#line 694 "switch_util.m"
        backend_libs__switch_util__V_38_38 = (*backend_libs__switch_util__Max_11 - *backend_libs__switch_util__Min_10);
#line 694 "switch_util.m"
        backend_libs__switch_util__V_39_39 = (MR_Integer) 1;
#line 694 "switch_util.m"
        *backend_libs__switch_util__NumValues_12 = (backend_libs__switch_util__V_38_38 + backend_libs__switch_util__V_39_39);
#line 694 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 664 "switch_util.m"
      }
#line 664 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 664 "switch_util.m"
  }
#line 116 "switch_util.m"
}

#line 101 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__find_switch_category_4_p_0(
#line 101 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_5,
#line 101 "switch_util.m"
  MR_Word backend_libs__switch_util__SwitchVarType_6,
#line 101 "switch_util.m"
  MR_Word * backend_libs__switch_util__SwitchCategory_7,
#line 101 "switch_util.m"
  MR_Word * backend_libs__switch_util__MayUseSmartIndexing_8)
#line 101 "switch_util.m"
{
#line 599 "switch_util.m"
  {
#line 599 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 599 "switch_util.m"
    MR_Word backend_libs__switch_util__SwitchTypeCtorCat_9;
#line 599 "switch_util.m"
    MR_Word backend_libs__switch_util__Globals_10;

#line 600 "switch_util.m"
    {
#line 600 "switch_util.m"
      backend_libs__switch_util__SwitchTypeCtorCat_9 = check_hlds__type_util__classify_type_2_f_0(backend_libs__switch_util__ModuleInfo_5, backend_libs__switch_util__SwitchVarType_6);
    }
#line 601 "switch_util.m"
    {
#line 601 "switch_util.m"
      *backend_libs__switch_util__SwitchCategory_7 = backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_f_0(backend_libs__switch_util__SwitchTypeCtorCat_9);
    }
#line 603 "switch_util.m"
    {
#line 603 "switch_util.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__switch_util__ModuleInfo_5, &backend_libs__switch_util__Globals_10);
    }
#line 608 "switch_util.m"
    {
#line 608 "switch_util.m"
      MR_Word backend_libs__switch_util__SmartIndexing_11;

#line 608 "switch_util.m"
      {
#line 608 "switch_util.m"
        libs__globals__lookup_bool_option_3_p_0(backend_libs__switch_util__Globals_10, (MR_Integer) 433, &backend_libs__switch_util__SmartIndexing_11);
      }
#line 609 "switch_util.m"
      backend_libs__switch_util__succeeded = (backend_libs__switch_util__SmartIndexing_11 == (MR_Integer) 0);
#line 608 "switch_util.m"
    }
#line 610 "switch_util.m"
    if (!(backend_libs__switch_util__succeeded))
#line 610 "switch_util.m"
      {
#line 645 "switch_util.m"
        if ((*backend_libs__switch_util__SwitchCategory_7 == (MR_Integer) 0))
#line 645 "switch_util.m"
          {
#line 645 "switch_util.m"
            MR_Word backend_libs__switch_util__SmartIndexingForCategory_12;

#line 646 "switch_util.m"
            {
#line 646 "switch_util.m"
              libs__globals__lookup_bool_option_3_p_0(backend_libs__switch_util__Globals_10, (MR_Integer) 446, &backend_libs__switch_util__SmartIndexingForCategory_12);
            }
#line 615 "switch_util.m"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__SmartIndexingForCategory_12 == (MR_Integer) 0);
#line 645 "switch_util.m"
          }
#line 645 "switch_util.m"
        else
#line 645 "switch_util.m"
        if ((*backend_libs__switch_util__SwitchCategory_7 == (MR_Integer) 3))
#line 654 "switch_util.m"
          {
#line 654 "switch_util.m"
            MR_Word backend_libs__switch_util__SmartIndexingForCategory_34;

#line 655 "switch_util.m"
            {
#line 655 "switch_util.m"
              libs__globals__lookup_bool_option_3_p_0(backend_libs__switch_util__Globals_10, (MR_Integer) 449, &backend_libs__switch_util__SmartIndexingForCategory_34);
            }
#line 615 "switch_util.m"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__SmartIndexingForCategory_34 == (MR_Integer) 0);
#line 654 "switch_util.m"
          }
#line 645 "switch_util.m"
        else
#line 645 "switch_util.m"
        if ((*backend_libs__switch_util__SwitchCategory_7 == (MR_Integer) 1))
#line 648 "switch_util.m"
          {
#line 648 "switch_util.m"
            MR_Word backend_libs__switch_util__SmartIndexingForCategory_35;

#line 649 "switch_util.m"
            {
#line 649 "switch_util.m"
              libs__globals__lookup_bool_option_3_p_0(backend_libs__switch_util__Globals_10, (MR_Integer) 447, &backend_libs__switch_util__SmartIndexingForCategory_35);
            }
#line 615 "switch_util.m"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__SmartIndexingForCategory_35 == (MR_Integer) 0);
#line 648 "switch_util.m"
          }
#line 645 "switch_util.m"
        else
#line 651 "switch_util.m"
          {
#line 651 "switch_util.m"
            MR_Word backend_libs__switch_util__SmartIndexingForCategory_36;

#line 652 "switch_util.m"
            {
#line 652 "switch_util.m"
              libs__globals__lookup_bool_option_3_p_0(backend_libs__switch_util__Globals_10, (MR_Integer) 448, &backend_libs__switch_util__SmartIndexingForCategory_36);
            }
#line 615 "switch_util.m"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__SmartIndexingForCategory_36 == (MR_Integer) 0);
#line 651 "switch_util.m"
          }
#line 610 "switch_util.m"
        if (!(backend_libs__switch_util__succeeded))
#line 625 "switch_util.m"
          {
#line 625 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeTable_13;
#line 625 "switch_util.m"
            MR_Word backend_libs__switch_util__SwitchVarTypeCtor_14;
#line 625 "switch_util.m"
            MR_Word backend_libs__switch_util__SwitchVarTypeDefn_15;
#line 625 "switch_util.m"
            MR_Word backend_libs__switch_util__SwitchVarTypeBody_16;
#line 625 "switch_util.m"
            MR_Word backend_libs__switch_util__V_17_17;
#line 632 "switch_util.m"
            MR_Word backend_libs__switch_util__V_19_19;
#line 632 "switch_util.m"
            MR_Word backend_libs__switch_util__V_20_20;
#line 632 "switch_util.m"
            MR_Word backend_libs__switch_util__V_21_21;
#line 632 "switch_util.m"
            MR_Word backend_libs__switch_util__V_22_22;
#line 632 "switch_util.m"
            MR_Word backend_libs__switch_util__V_23_23;
#line 632 "switch_util.m"
            MR_Word backend_libs__switch_util__V_24_24;
#line 632 "switch_util.m"
            MR_Word backend_libs__switch_util__V_25_25;
#line 632 "switch_util.m"
            MR_Word backend_libs__switch_util__V_26_26;

#line 625 "switch_util.m"
            {
#line 625 "switch_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__switch_util__ModuleInfo_5, &backend_libs__switch_util__TypeTable_13);
            }
#line 626 "switch_util.m"
            {
#line 626 "switch_util.m"
              parse_tree__prog_type__type_to_ctor_det_2_p_0(backend_libs__switch_util__SwitchVarType_6, &backend_libs__switch_util__SwitchVarTypeCtor_14);
            }
#line 629 "switch_util.m"
            {
#line 629 "switch_util.m"
              backend_libs__switch_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(backend_libs__switch_util__TypeTable_13, backend_libs__switch_util__SwitchVarTypeCtor_14, &backend_libs__switch_util__SwitchVarTypeDefn_15);
            }
#line 625 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 625 "switch_util.m"
              {
#line 631 "switch_util.m"
                {
#line 631 "switch_util.m"
                  hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__switch_util__SwitchVarTypeDefn_15, &backend_libs__switch_util__SwitchVarTypeBody_16);
                }
#line 632 "switch_util.m"
                backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__SwitchVarTypeBody_16)) == (MR_mktag((MR_Integer) 1)));
#line 632 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 632 "switch_util.m"
                  {
#line 632 "switch_util.m"
                    backend_libs__switch_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 0)));
#line 632 "switch_util.m"
                    backend_libs__switch_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 1)));
#line 632 "switch_util.m"
                    backend_libs__switch_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 2)));
#line 632 "switch_util.m"
                    backend_libs__switch_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 3)));
#line 632 "switch_util.m"
                    backend_libs__switch_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 4)));
#line 632 "switch_util.m"
                    backend_libs__switch_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 5)));
#line 632 "switch_util.m"
                    backend_libs__switch_util__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 632 "switch_util.m"
                    backend_libs__switch_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 632 "switch_util.m"
                    backend_libs__switch_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 7)));
#line 632 "switch_util.m"
                    backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_17_17 == (MR_Integer) 0);
#line 632 "switch_util.m"
                  }
#line 625 "switch_util.m"
              }
#line 625 "switch_util.m"
          }
#line 610 "switch_util.m"
      }
#line 636 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 635 "switch_util.m"
      *backend_libs__switch_util__MayUseSmartIndexing_8 = (MR_Integer) 0;
#line 636 "switch_util.m"
    else
#line 637 "switch_util.m"
      *backend_libs__switch_util__MayUseSmartIndexing_8 = (MR_Integer) 1;
#line 599 "switch_util.m"
  }
#line 101 "switch_util.m"
}

#line 92 "switch_util.m"
MR_Integer MR_CALL 
backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(
#line 92 "switch_util.m"
  MR_Word backend_libs__switch_util__Tag_3)
#line 92 "switch_util.m"
{
#line 545 "switch_util.m"
  {
#line 545 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 545 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cost_4;

#line 545 "switch_util.m"
    if ((backend_libs__switch_util__Tag_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 554 "switch_util.m"
      backend_libs__switch_util__Cost_4 = (MR_Integer) 2;
#line 545 "switch_util.m"
    else
#line 545 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 2))))
#line 565 "switch_util.m"
      backend_libs__switch_util__Cost_4 = (MR_Integer) 3;
#line 545 "switch_util.m"
    else
#line 545 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 1))))
#line 572 "switch_util.m"
      {
#line 572 "switch_util.m"
        MR_String backend_libs__switch_util__String_16 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__Tag_3, (MR_Integer) 0)));
#line 572 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_46_46;
#line 572 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_48_48;

#line 578 "switch_util.m"
        {
#line 578 "switch_util.m"
          backend_libs__switch_util__V_48_48 = mercury__string__length_1_f_0(backend_libs__switch_util__String_16);
        }
#line 578 "switch_util.m"
        backend_libs__switch_util__V_46_46 = ((MR_Integer) 2 * backend_libs__switch_util__V_48_48);
#line 578 "switch_util.m"
        backend_libs__switch_util__Cost_4 = ((MR_Integer) 1 + backend_libs__switch_util__V_46_46);
#line 572 "switch_util.m"
      }
#line 545 "switch_util.m"
    else
#line 545 "switch_util.m"
    if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 570 "switch_util.m"
      backend_libs__switch_util__Cost_4 = (MR_Integer) 4;
#line 545 "switch_util.m"
    else
#line 545 "switch_util.m"
    if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 580 "switch_util.m"
      {
#line 580 "switch_util.m"
        MR_Word backend_libs__switch_util__RAs_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 1)));
#line 580 "switch_util.m"
        MR_Word backend_libs__switch_util__SubTag_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 2)));
#line 580 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_41_41;
#line 580 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_43_43;
#line 580 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_44_44;

#line 582 "switch_util.m"
        {
#line 582 "switch_util.m"
          backend_libs__switch_util__V_43_43 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, backend_libs__switch_util__RAs_17);
        }
#line 582 "switch_util.m"
        backend_libs__switch_util__V_41_41 = ((MR_Integer) 2 * backend_libs__switch_util__V_43_43);
#line 582 "switch_util.m"
        {
#line 582 "switch_util.m"
          backend_libs__switch_util__V_44_44 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(backend_libs__switch_util__SubTag_18);
        }
#line 582 "switch_util.m"
        backend_libs__switch_util__Cost_4 = (backend_libs__switch_util__V_41_41 + backend_libs__switch_util__V_44_44);
#line 580 "switch_util.m"
      }
#line 545 "switch_util.m"
    else
#line 545 "switch_util.m"
    if (((((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 12)))) || (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 11))))))
#line 560 "switch_util.m"
      backend_libs__switch_util__Cost_4 = (MR_Integer) 2;
#line 545 "switch_util.m"
    else
#line 545 "switch_util.m"
    if (((((((((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 15)))))) || (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 14))))))
#line 547 "switch_util.m"
      backend_libs__switch_util__Cost_4 = (MR_Integer) 1;
#line 545 "switch_util.m"
    else
#line 594 "switch_util.m"
      {
#line 595 "switch_util.m"
        {
#line 595 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.estimate_switch_tag_test_cost\'/1", (MR_String) "non-switch tag");
        }
#line 594 "switch_util.m"
      }
#line 545 "switch_util.m"
    return backend_libs__switch_util__Cost_4;
#line 545 "switch_util.m"
  }
#line 92 "switch_util.m"
}

#line 85 "switch_util.m"
MR_Word MR_CALL 
backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_f_0(
#line 85 "switch_util.m"
  MR_Word backend_libs__switch_util__CtorCat_3)
#line 85 "switch_util.m"
{
#line 513 "switch_util.m"
  {
#line 513 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 513 "switch_util.m"
    MR_Word backend_libs__switch_util__SwitchCat_4;

#line 513 "switch_util.m"
    if ((backend_libs__switch_util__CtorCat_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 533 "switch_util.m"
      {
#line 536 "switch_util.m"
        {
#line 536 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
        }
#line 533 "switch_util.m"
      }
#line 513 "switch_util.m"
    else
#line 513 "switch_util.m"
    if ((backend_libs__switch_util__CtorCat_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 533 "switch_util.m"
      {
#line 536 "switch_util.m"
        {
#line 536 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
        }
#line 533 "switch_util.m"
      }
#line 513 "switch_util.m"
    else
#line 513 "switch_util.m"
    if ((backend_libs__switch_util__CtorCat_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 533 "switch_util.m"
      {
#line 536 "switch_util.m"
        {
#line 536 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
        }
#line 533 "switch_util.m"
      }
#line 513 "switch_util.m"
    else
#line 513 "switch_util.m"
    if ((backend_libs__switch_util__CtorCat_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 533 "switch_util.m"
      {
#line 536 "switch_util.m"
        {
#line 536 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
        }
#line 533 "switch_util.m"
      }
#line 513 "switch_util.m"
    else
#line 513 "switch_util.m"
    if ((backend_libs__switch_util__CtorCat_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 533 "switch_util.m"
      {
#line 536 "switch_util.m"
        {
#line 536 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
        }
#line 533 "switch_util.m"
      }
#line 513 "switch_util.m"
    else
#line 513 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__CtorCat_3)) == (MR_mktag((MR_Integer) 1))))
#line 513 "switch_util.m"
      {
#line 513 "switch_util.m"
        MR_Word backend_libs__switch_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__CtorCat_3, (MR_Integer) 0)));

#line 513 "switch_util.m"
        if ((backend_libs__switch_util__V_41_41 == (MR_Integer) 2))
#line 514 "switch_util.m"
          backend_libs__switch_util__SwitchCat_4 = (MR_Integer) 0;
#line 513 "switch_util.m"
        else
#line 513 "switch_util.m"
        if ((backend_libs__switch_util__V_41_41 == (MR_Integer) 1))
#line 520 "switch_util.m"
          backend_libs__switch_util__SwitchCat_4 = (MR_Integer) 3;
#line 513 "switch_util.m"
        else
#line 513 "switch_util.m"
        if ((backend_libs__switch_util__V_41_41 == (MR_Integer) 0))
#line 514 "switch_util.m"
          backend_libs__switch_util__SwitchCat_4 = (MR_Integer) 0;
#line 513 "switch_util.m"
        else
#line 517 "switch_util.m"
          backend_libs__switch_util__SwitchCat_4 = (MR_Integer) 1;
#line 513 "switch_util.m"
      }
#line 513 "switch_util.m"
    else
#line 513 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__CtorCat_3)) == (MR_mktag((MR_Integer) 2))))
#line 514 "switch_util.m"
      backend_libs__switch_util__SwitchCat_4 = (MR_Integer) 0;
#line 513 "switch_util.m"
    else
#line 513 "switch_util.m"
    if (((((MR_tag((MR_Word) backend_libs__switch_util__CtorCat_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__CtorCat_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 533 "switch_util.m"
      {
#line 536 "switch_util.m"
        {
#line 536 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
        }
#line 533 "switch_util.m"
      }
#line 513 "switch_util.m"
    else
#line 513 "switch_util.m"
      {
#line 513 "switch_util.m"
        MR_Word backend_libs__switch_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__CtorCat_3, (MR_Integer) 1)));

#line 513 "switch_util.m"
        if ((backend_libs__switch_util__V_42_42 == (MR_Integer) 0))
#line 533 "switch_util.m"
          {
#line 536 "switch_util.m"
            {
#line 536 "switch_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
            }
#line 533 "switch_util.m"
          }
#line 513 "switch_util.m"
        else
#line 513 "switch_util.m"
        if ((backend_libs__switch_util__V_42_42 == (MR_Integer) 2))
#line 523 "switch_util.m"
          backend_libs__switch_util__SwitchCat_4 = (MR_Integer) 2;
#line 513 "switch_util.m"
        else
#line 533 "switch_util.m"
          {
#line 536 "switch_util.m"
            {
#line 536 "switch_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
            }
#line 533 "switch_util.m"
          }
#line 513 "switch_util.m"
      }
#line 513 "switch_util.m"
    return backend_libs__switch_util__SwitchCat_4;
#line 513 "switch_util.m"
  }
#line 85 "switch_util.m"
}

#line 69 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__num_cons_ids_in_tagged_cases_3_p_0(
#line 69 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedCases_4,
#line 69 "switch_util.m"
  MR_Integer * backend_libs__switch_util__NumConsIds_5,
#line 69 "switch_util.m"
  MR_Integer * backend_libs__switch_util__NumArms_6)
#line 69 "switch_util.m"
{
#line 488 "switch_util.m"
  {
#line 488 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 489 "switch_util.m"
    {
#line 489 "switch_util.m"
      backend_libs__switch_util__num_cons_ids_in_tagged_cases_loop_5_p_0(backend_libs__switch_util__TaggedCases_4, (MR_Integer) 0, backend_libs__switch_util__NumConsIds_5, (MR_Integer) 0, backend_libs__switch_util__NumArms_6);
#line 489 "switch_util.m"
      return;
    }
#line 488 "switch_util.m"
  }
#line 69 "switch_util.m"
}

#line 62 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__tag_cases_5_p_0(
#line 62 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 62 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 62 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3,
#line 62 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__4_4,
#line 62 "switch_util.m"
  MR_Word * backend_libs__switch_util__MaybeIntSwitchLimits_5)
#line 62 "switch_util.m"
{
#line 394 "switch_util.m"
  {
#line 394 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 394 "switch_util.m"
    {
#line 394 "switch_util.m"
      backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__HeadVar__3_3, backend_libs__switch_util__HeadVar__4_4, backend_libs__switch_util__MaybeIntSwitchLimits_5);
#line 394 "switch_util.m"
      return;
    }
#line 394 "switch_util.m"
  }
#line 62 "switch_util.m"
}

void mercury__backend_libs__switch_util__init(void)
{
}

void mercury__backend_libs__switch_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_id_ptags_map_0);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_is_int_switch_0);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_may_use_smart_indexing_0);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_maybe_int_switch_info_0);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_bit_vec_check_0);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_range_check_0);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_list_1);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_list_1);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_map_1);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_1);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_count_map_0);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_stag_goal_list_1);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_stag_goal_map_1);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_switch_category_0);
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_table_size_upgrade_0);
}

void mercury__backend_libs__switch_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.switch_util. */
