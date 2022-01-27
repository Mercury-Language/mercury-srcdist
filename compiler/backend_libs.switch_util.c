/*
** Automatically generated from `switch_util.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "tree_bitset.mih"
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




#line 144 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1;

#line 147 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1;

#line 150 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1;

#line 153 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

#line 156 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

#line 159 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 162 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 165 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1;

#line 168 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_2;

#line 171 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2;

#line 174 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2;

#line 177 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_0[1];

#line 180 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0;

#line 183 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2;

#line 186 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2;

#line 189 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2;

#line 192 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_1[2];

#line 195 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_1;

#line 198 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_0[1];

#line 201 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_1[1];

#line 204 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_3[2];

#line 207 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_3[2];

#line 210 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_3[2];

#line 213 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 216 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 219 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_several_llds_0_0[2];

#line 222 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_several_llds_0_0;

#line 225 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_several_llds_0_0[1];

#line 228 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_several_llds_0[1];

#line 231 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_several_llds_0[1];

#line 234 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_several_llds_0[1];

#line 237 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 240 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0;

#line 243 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1;

#line 246 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_is_int_switch_0[2];

#line 249 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_is_int_switch_0[2];

#line 252 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_is_int_switch_0[2];

#line 255 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_0;

#line 258 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_1;

#line 261 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_may_use_smart_indexing_0[2];

#line 264 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_may_use_smart_indexing_0[2];

#line 267 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_may_use_smart_indexing_0[2];

#line 270 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_maybe_int_switch_info_0_0[3];

#line 273 "backend_libs.switch_util.c"
static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__field_names_maybe_int_switch_info_0_0[3];

#line 276 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0;

#line 279 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1;

#line 282 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0[1];

#line 285 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1[1];

#line 288 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_maybe_int_switch_info_0[2];

#line 291 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0[2];

#line 294 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0[2];

#line 297 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0;

#line 300 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1;

#line 303 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_bit_vec_check_0[2];

#line 306 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_bit_vec_check_0[2];

#line 309 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_bit_vec_check_0[2];

#line 312 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0;

#line 315 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1;

#line 318 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_range_check_0[2];

#line 321 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_range_check_0[2];

#line 324 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_range_check_0[2];

#line 327 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1;

#line 330 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_1_0[2];

#line 333 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0;

#line 336 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_1_0[1];

#line 339 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_1[1];

#line 342 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_1[1];

#line 345 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_1[1];

#line 348 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_entry_1_0[2];

#line 351 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0;

#line 354 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_entry_1_0[1];

#line 357 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_entry_1[1];

#line 360 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_entry_1[1];

#line 363 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_entry_1[1];

#line 366 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0;

#line 369 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_group_entry_1_0[3];

#line 372 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0;

#line 375 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_group_entry_1_0[1];

#line 378 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_group_entry_1[1];

#line 381 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_group_entry_1[1];

#line 384 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_group_entry_1[1];

#line 387 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1;

#line 390 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1;

#line 393 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1;

#line 396 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1__pseudo_backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1;

#line 399 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_rev_map_entry_1_0[4];

#line 402 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0;

#line 405 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_rev_map_entry_1_0[1];

#line 408 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_rev_map_entry_1[1];

#line 411 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_rev_map_entry_1[1];

#line 414 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_rev_map_entry_1[1];

#line 417 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0;

#line 420 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0;

#line 423 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_1;

#line 426 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_0[1];

#line 429 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0;

#line 432 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1;

#line 435 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_1[2];

#line 438 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1;

#line 441 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_0[1];

#line 444 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_1[1];

#line 447 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_soln_consts_1[2];

#line 450 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_soln_consts_1[2];

#line 453 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_soln_consts_1[2];

#line 456 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1;

#line 459 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1;

#line 462 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_string_hash_slot_1_0[3];

#line 465 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0;

#line 468 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0[1];

#line 471 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_string_hash_slot_1[1];

#line 474 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_string_hash_slot_1[1];

#line 477 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_string_hash_slot_1[1];

#line 480 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0;

#line 483 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1;

#line 486 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2;

#line 489 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3;

#line 492 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_switch_category_0[4];

#line 495 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_switch_category_0[4];

#line 498 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_switch_category_0[4];

#line 501 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0;

#line 504 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1;

#line 507 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_table_size_upgrade_0[2];

#line 510 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_table_size_upgrade_0[2];

#line 513 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_table_size_upgrade_0[2];

#line 516 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_3_0_10001(
#line 519 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 521 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 523 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 525 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 527 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5);

#line 530 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_3_0_10001(
#line 533 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 535 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 537 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 539 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 541 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 543 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_6);

#line 546 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_several_llds_0_0_10001(
#line 549 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 551 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 554 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_several_llds_0_0_10001(
#line 557 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 559 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 561 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 564 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_num_ptags_map_0_0_10001(
#line 567 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 569 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 572 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_num_ptags_map_0_0_10001(
#line 575 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 577 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 579 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 582 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0_10001(
#line 585 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 587 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 590 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0_10001(
#line 593 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 595 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 597 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 600 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____may_use_smart_indexing_0_0_10001(
#line 603 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 605 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 608 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____may_use_smart_indexing_0_0_10001(
#line 611 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 613 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 615 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 618 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____maybe_int_switch_info_0_0_10001(
#line 621 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 623 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 626 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____maybe_int_switch_info_0_0_10001(
#line 629 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 631 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 633 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 636 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_bit_vec_check_0_0_10001(
#line 639 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 641 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 644 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_bit_vec_check_0_0_10001(
#line 647 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 649 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 651 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 654 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_range_check_0_0_10001(
#line 657 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 659 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 662 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_range_check_0_0_10001(
#line 665 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 667 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 669 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 672 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_1_0_10001(
#line 675 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 677 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 679 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 682 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_1_0_10001(
#line 685 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 687 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 689 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 691 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 694 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_entry_1_0_10001(
#line 697 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 699 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 701 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 704 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_entry_1_0_10001(
#line 707 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 709 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 711 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 713 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 716 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_entry_1_0_10001(
#line 719 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 721 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 723 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 726 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_entry_1_0_10001(
#line 729 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 731 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 733 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 735 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 738 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_list_1_0_10001(
#line 741 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 743 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 745 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 748 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_list_1_0_10001(
#line 751 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 753 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 755 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 757 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 760 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_list_1_0_10001(
#line 763 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 765 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 767 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 770 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_list_1_0_10001(
#line 773 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 775 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 777 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 779 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 782 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_map_1_0_10001(
#line 785 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 787 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 789 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 792 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_map_1_0_10001(
#line 795 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 797 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 799 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 801 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 804 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0_10001(
#line 807 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 809 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 811 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 814 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0_10001(
#line 817 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 819 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 821 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 823 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 826 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0_10001(
#line 829 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 831 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 833 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 836 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0_10001(
#line 839 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 841 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 843 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 845 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 848 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_count_map_0_0_10001(
#line 851 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 853 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 856 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_count_map_0_0_10001(
#line 859 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 861 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 863 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 866 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____soln_consts_1_0_10001(
#line 869 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 871 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 873 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 876 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____soln_consts_1_0_10001(
#line 879 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 881 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 883 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 885 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 888 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_list_1_0_10001(
#line 891 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 893 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 895 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 898 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_list_1_0_10001(
#line 901 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 903 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 905 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 907 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 910 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_map_1_0_10001(
#line 913 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 915 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 917 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 920 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_map_1_0_10001(
#line 923 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 925 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 927 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 929 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 932 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____string_hash_slot_1_0_10001(
#line 935 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 937 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 939 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 942 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____string_hash_slot_1_0_10001(
#line 945 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 947 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 949 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 951 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 954 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____switch_category_0_0_10001(
#line 957 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 959 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 962 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____switch_category_0_0_10001(
#line 965 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 967 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 969 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 972 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____table_size_upgrade_0_0_10001(
#line 975 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 977 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 980 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____table_size_upgrade_0_0_10001(
#line 983 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 985 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 987 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 1272 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0_1(
#line 1272 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1272 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1272 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1272 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3,
#line 1272 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 1272 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_5);

#line 1257 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0(
#line 1257 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_65,
#line 1257 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1257 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1257 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1257 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1257 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1257 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1257 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1257 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1257 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9,
#line 1257 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_10,
#line 1257 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11,
#line 1257 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_12);

#line 1123 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0_1(
#line 1123 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1123 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1123 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1123 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3);

#line 1109 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(
#line 1109 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_54,
#line 1109 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1109 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1109 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1109 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1109 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1109 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1109 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1109 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1109 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9,
#line 1109 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10);

#line 794 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_114_111_106_101_99_116_95_97_108_108_95_116_111_95_111_110_101_95_115_111_108_117_116_105_111_110_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 794 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 794 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_0_2,
#line 794 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_3);

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

#line 1412 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__build_ptag_case_rev_map__1412__1_3_p_0(
#line 1412 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1412 "switch_util.m"
  MR_Word backend_libs__switch_util__Case_14,
#line 1412 "switch_util.m"
  MR_Word backend_libs__switch_util__OldCase_21);

#line 1307 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1307__1_2_p_0(
#line 1307 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_21,
#line 1307 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_74);

#line 1321 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1321__1_2_p_0(
#line 1321 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_63,
#line 1321 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_94);

#line 1379 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0(
#line 1379 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1379 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1379 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1379 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3);

#line 1379 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0(
#line 1379 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_13,
#line 1379 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1379 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2);

#line 1394 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0(
#line 1394 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 1394 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1394 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1394 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3);

#line 1394 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0(
#line 1394 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 1394 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1394 "switch_util.m"
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

#line 1412 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0_1(
#line 1412 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1397 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0(
#line 1397 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1397 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1397 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1397 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3,
#line 1397 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevMap_4);

#line 1372 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__interpret_rev_map_entry_2_p_0(
#line 1372 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_9,
#line 1372 "switch_util.m"
  MR_Word backend_libs__switch_util__RevEntry_3,
#line 1372 "switch_util.m"
  MR_Word * backend_libs__switch_util__GroupEntry_4);

#line 1307 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_2(
#line 1307 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1321 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_1(
#line 1321 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1277 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0(
#line 1277 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_107,
#line 1277 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_8,
#line 1277 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_9,
#line 1277 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_10,
#line 1277 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_52,
#line 1277 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_53,
#line 1277 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54,
#line 1277 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55);

#line 1164 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__get_ptag_counts_loop_5_p_0(
#line 1164 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1164 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2,
#line 1164 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_3,
#line 1164 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4,
#line 1164 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_5);

#line 1126 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__add_string_binary_entry_4_p_0(
#line 1126 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 1126 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_5,
#line 1126 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_6,
#line 1126 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_12,
#line 1126 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_13);

#line 1087 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0_1(
#line 1087 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1081 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0(
#line 1081 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1081 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_6,
#line 1081 "switch_util.m"
  MR_Word backend_libs__switch_util__HomeMap_7,
#line 1081 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_8,
#line 1081 "switch_util.m"
  MR_Integer backend_libs__switch_util__LastUsed_9,
#line 1081 "switch_util.m"
  MR_Integer * backend_libs__switch_util__FreeSlot_10);

#line 1061 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__follow_hash_chain_3_p_0(
#line 1061 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_12,
#line 1061 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_4,
#line 1061 "switch_util.m"
  MR_Integer backend_libs__switch_util__Slot_5,
#line 1061 "switch_util.m"
  MR_Integer * backend_libs__switch_util__LastSlot_6);

#line 1027 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(
#line 1027 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_64,
#line 1027 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1027 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__2_2,
#line 1027 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__3_3,
#line 1027 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 1027 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5,
#line 1027 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_6,
#line 1027 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7,
#line 1027 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_8);

#line 1012 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hashes_7_p_0(
#line 1012 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_32,
#line 1012 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1012 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_2,
#line 1012 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_3,
#line 1012 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4,
#line 1012 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_5,
#line 1012 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6,
#line 1012 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_7);

#line 997 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_4_p_0(
#line 997 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 997 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_5,
#line 997 "switch_util.m"
  MR_Word backend_libs__switch_util__HashValList_6,
#line 997 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_7,
#line 997 "switch_util.m"
  MR_Word * backend_libs__switch_util__SlotMap_8);

#line 951 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_case_14_p_0(
#line 951 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 951 "switch_util.m"
  MR_Word backend_libs__switch_util__StrCaseRep_15,
#line 951 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_16,
#line 951 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_31,
#line 951 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap4_32,
#line 951 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_33,
#line 951 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap5_34,
#line 951 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_35,
#line 951 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap6_36,
#line 951 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_37,
#line 951 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_38,
#line 951 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_39,
#line 951 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_40,
#line 951 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_41,
#line 951 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_42);

#line 930 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_cases_14_p_0(
#line 930 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 930 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 930 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_2,
#line 930 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_3,
#line 930 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap4_4,
#line 930 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_5,
#line 930 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap5_6,
#line 930 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_7,
#line 930 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap6_8,
#line 930 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_9,
#line 930 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_10,
#line 930 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_11,
#line 930 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_12,
#line 930 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_13,
#line 930 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_14);

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

#line 1370 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__order_ptags_by_count_3_p_0_1(
#line 1370 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1370 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1370 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2);


static /* final */ const MR_Box backend_libs__switch_util_scalar_common_1[5][2];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_2[3][3];

static /* final */ const MR_Integer backend_libs__switch_util_scalar_common_3[1][2];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_4[3][6];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_5[2][5];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_6[1][14];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_7[1][8];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_8[1][11];




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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__switch_util_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__switch_util_scalar_common_2[0]))
  },
};

static /* final */ const MR_Integer backend_libs__switch_util_scalar_common_3[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_4[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&backend_libs__switch_util_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&backend_libs__switch_util_scalar_common_3[0])),
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

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_5[2][5] = {
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

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_6[1][14] = {
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

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_7[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&backend_libs__switch_util_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1)),
    ((MR_Box) (&backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1))
  },
};

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_8[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&backend_libs__switch_util_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0)),
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



#line 1800 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1808 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1816 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1824 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1833 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1
  }
};

#line 1841 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1849 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1858 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
  }
};

#line 1867 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1875 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_2
  }
};

#line 1884 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2
  }
};

#line 1892 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2
};

#line 1897 "backend_libs.switch_util.c"
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

#line 1912 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1920 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2
  }
};

#line 1929 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2
  }
};

#line 1937 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_1[2] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 3
};

#line 1943 "backend_libs.switch_util.c"
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

#line 1958 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0
};

#line 1963 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_1
};

#line 1968 "backend_libs.switch_util.c"
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

#line 1982 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_3[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_1
};

#line 1988 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_3[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1994 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_3 = {
  (MR_Integer) 3,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____case_consts_3_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____case_consts_3_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "case_consts",
  {
    backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_3
  },
  {
    backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_3
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_3
};

#line 2015 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2023 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &backend_libs__switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2031 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_several_llds_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2037 "backend_libs.switch_util.c"
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

#line 2052 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_several_llds_0_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_several_llds_0_0
};

#line 2057 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_several_llds_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_several_llds_0_0
  }
};

#line 2066 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_several_llds_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_several_llds_0_0
};

#line 2071 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_several_llds_0[1] = {
  (MR_Integer) 0
};

#line 2076 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_consts_several_llds_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____case_consts_several_llds_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____case_consts_several_llds_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "case_consts_several_llds",
  {
    backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_several_llds_0
  },
  {
    backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_several_llds_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_several_llds_0
};

#line 2097 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 2106 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_num_ptags_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__switch_util____Unify____case_num_ptags_map_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____case_num_ptags_map_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "case_num_ptags_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2127 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0 = {
  (MR_String) "is_int_switch",
  (MR_Integer) 0
};

#line 2133 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1 = {
  (MR_String) "is_not_int_switch",
  (MR_Integer) 1
};

#line 2139 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_is_int_switch_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1
};

#line 2145 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_is_int_switch_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1
};

#line 2151 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_is_int_switch_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2157 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_is_int_switch_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__switch_util____Unify____is_int_switch_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____is_int_switch_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "is_int_switch",
  {
    backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_is_int_switch_0
  },
  {
    backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_is_int_switch_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_is_int_switch_0
};

#line 2178 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_0 = {
  (MR_String) "may_not_use_smart_indexing",
  (MR_Integer) 0
};

#line 2184 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_1 = {
  (MR_String) "may_use_smart_indexing",
  (MR_Integer) 1
};

#line 2190 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_may_use_smart_indexing_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_1
};

#line 2196 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_may_use_smart_indexing_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_1
};

#line 2202 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_may_use_smart_indexing_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2208 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_may_use_smart_indexing_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__switch_util____Unify____may_use_smart_indexing_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____may_use_smart_indexing_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "may_use_smart_indexing",
  {
    backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_may_use_smart_indexing_0
  },
  {
    backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_may_use_smart_indexing_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_may_use_smart_indexing_0
};

#line 2229 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_maybe_int_switch_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2236 "backend_libs.switch_util.c"
static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__field_names_maybe_int_switch_info_0_0[3] = {
  (MR_String) "lower_limit",
  (MR_String) "upper_limit",
  (MR_String) "num_values"
};

#line 2243 "backend_libs.switch_util.c"
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

#line 2258 "backend_libs.switch_util.c"
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

#line 2273 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1
};

#line 2278 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0
};

#line 2283 "backend_libs.switch_util.c"
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

#line 2297 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1
};

#line 2303 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2309 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_maybe_int_switch_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____maybe_int_switch_info_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____maybe_int_switch_info_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "maybe_int_switch_info",
  {
    backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0
  },
  {
    backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_maybe_int_switch_info_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0
};

#line 2330 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0 = {
  (MR_String) "need_bit_vec_check",
  (MR_Integer) 0
};

#line 2336 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1 = {
  (MR_String) "dont_need_bit_vec_check",
  (MR_Integer) 1
};

#line 2342 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_bit_vec_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1
};

#line 2348 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_bit_vec_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0
};

#line 2354 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_bit_vec_check_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2360 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_bit_vec_check_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__switch_util____Unify____need_bit_vec_check_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____need_bit_vec_check_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "need_bit_vec_check",
  {
    backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_bit_vec_check_0
  },
  {
    backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_bit_vec_check_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_bit_vec_check_0
};

#line 2381 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0 = {
  (MR_String) "need_range_check",
  (MR_Integer) 0
};

#line 2387 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1 = {
  (MR_String) "dont_need_range_check",
  (MR_Integer) 1
};

#line 2393 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_range_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1
};

#line 2399 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_range_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0
};

#line 2405 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_range_check_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2411 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_need_range_check_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__switch_util____Unify____need_range_check_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____need_range_check_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "need_range_check",
  {
    backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_range_check_0
  },
  {
    backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_range_check_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_range_check_0
};

#line 2432 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2441 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_1_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1
};

#line 2447 "backend_libs.switch_util.c"
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

#line 2462 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0
};

#line 2467 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_1_0
  }
};

#line 2476 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0
};

#line 2481 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_1[1] = {
  (MR_Integer) 0
};

#line 2486 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case",
  {
    backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_1
  },
  {
    backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_1
};

#line 2507 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_entry_1_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
};

#line 2513 "backend_libs.switch_util.c"
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

#line 2528 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_entry_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0
};

#line 2533 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_entry_1_0
  }
};

#line 2542 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_entry_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0
};

#line 2547 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_entry_1[1] = {
  (MR_Integer) 0
};

#line 2552 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_entry_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_entry_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case_entry",
  {
    backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_entry_1
  },
  {
    backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_entry_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_entry_1
};

#line 2573 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2581 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_group_entry_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
};

#line 2588 "backend_libs.switch_util.c"
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

#line 2603 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_group_entry_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0
};

#line 2608 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_group_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_group_entry_1_0
  }
};

#line 2617 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_group_entry_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0
};

#line 2622 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_group_entry_1[1] = {
  (MR_Integer) 0
};

#line 2627 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_group_entry_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_group_entry_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case_group_entry",
  {
    backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_group_entry_1
  },
  {
    backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_group_entry_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_group_entry_1
};

#line 2648 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1
  }
};

#line 2656 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_group_list_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_group_list_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case_group_list",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2677 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2685 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1
  }
};

#line 2693 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_list_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_list_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case_list",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2714 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_map_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_map_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2735 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1__pseudo_backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1
  }
};

#line 2744 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_rev_map_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_rev_map_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case_rev_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__pti_tree234_2__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1__pseudo_backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2765 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_rev_map_entry_1_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
};

#line 2773 "backend_libs.switch_util.c"
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

#line 2788 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_rev_map_entry_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0
};

#line 2793 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_rev_map_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_rev_map_entry_1_0
  }
};

#line 2802 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_rev_map_entry_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0
};

#line 2807 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_rev_map_entry_1[1] = {
  (MR_Integer) 0
};

#line 2812 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_case_rev_map_entry",
  {
    backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_rev_map_entry_1
  },
  {
    backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_rev_map_entry_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_rev_map_entry_1
};

#line 2833 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2842 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__switch_util__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0
  }
};

#line 2851 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_count_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (backend_libs__switch_util____Unify____ptag_count_map_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____ptag_count_map_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "ptag_count_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2872 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2880 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_1
};

#line 2885 "backend_libs.switch_util.c"
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

#line 2900 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_1
  }
};

#line 2908 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_1[2] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1
};

#line 2914 "backend_libs.switch_util.c"
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

#line 2929 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0
};

#line 2934 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1
};

#line 2939 "backend_libs.switch_util.c"
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

#line 2953 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_soln_consts_1[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1
};

#line 2959 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_soln_consts_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2965 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____soln_consts_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____soln_consts_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "soln_consts",
  {
    backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_soln_consts_1
  },
  {
    backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_soln_consts_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_soln_consts_1
};

#line 2986 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2995 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1
  }
};

#line 3003 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_stag_goal_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__switch_util____Unify____stag_goal_list_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____stag_goal_list_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "stag_goal_list",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3024 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_stag_goal_map_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (backend_libs__switch_util____Unify____stag_goal_map_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____stag_goal_map_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "stag_goal_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3045 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_string_hash_slot_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 3052 "backend_libs.switch_util.c"
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

#line 3067 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0
};

#line 3072 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_string_hash_slot_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0
  }
};

#line 3081 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_string_hash_slot_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0
};

#line 3086 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_string_hash_slot_1[1] = {
  (MR_Integer) 0
};

#line 3091 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__switch_util____Unify____string_hash_slot_1_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____string_hash_slot_1_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "string_hash_slot",
  {
    backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_string_hash_slot_1
  },
  {
    backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_string_hash_slot_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_string_hash_slot_1
};

#line 3112 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0 = {
  (MR_String) "atomic_switch",
  (MR_Integer) 0
};

#line 3118 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1 = {
  (MR_String) "string_switch",
  (MR_Integer) 1
};

#line 3124 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2 = {
  (MR_String) "tag_switch",
  (MR_Integer) 2
};

#line 3130 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3 = {
  (MR_String) "float_switch",
  (MR_Integer) 3
};

#line 3136 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_switch_category_0[4] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3
};

#line 3144 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_switch_category_0[4] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2
};

#line 3152 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_switch_category_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 3160 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_switch_category_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__switch_util____Unify____switch_category_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____switch_category_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "switch_category",
  {
    backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_switch_category_0
  },
  {
    backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_switch_category_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_switch_category_0
};

#line 3181 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0 = {
  (MR_String) "keep_first_size",
  (MR_Integer) 0
};

#line 3187 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1 = {
  (MR_String) "allow_doubling",
  (MR_Integer) 1
};

#line 3193 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_table_size_upgrade_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1
};

#line 3199 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_table_size_upgrade_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0
};

#line 3205 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_table_size_upgrade_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3211 "backend_libs.switch_util.c"
const MR_TypeCtorInfo_Struct backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_table_size_upgrade_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__switch_util____Unify____table_size_upgrade_0_0_10001)),
  ((MR_Box) (backend_libs__switch_util____Compare____table_size_upgrade_0_0_10001)),
  (MR_String) "backend_libs.switch_util",
  (MR_String) "table_size_upgrade",
  {
    backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_table_size_upgrade_0
  },
  {
    backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_table_size_upgrade_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  backend_libs__switch_util__backend_libs__switch_util__functor_number_map_table_size_upgrade_0
};

#line 3232 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_3_0_10001(
#line 3235 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3237 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3239 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3241 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 3243 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5)
#line 3245 "backend_libs.switch_util.c"
{
#line 3247 "backend_libs.switch_util.c"
  {
#line 3249 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3252 "backend_libs.switch_util.c"
    {
#line 3254 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____case_consts_3_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4), ((MR_Word) backend_libs__switch_util__wrapper_arg_5));
    }
#line 3257 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3259 "backend_libs.switch_util.c"
  }
#line 3261 "backend_libs.switch_util.c"
}

#line 3264 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_3_0_10001(
#line 3267 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3269 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3271 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3273 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 3275 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 3277 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_6)
#line 3279 "backend_libs.switch_util.c"
{
#line 3281 "backend_libs.switch_util.c"
  {
#line 3283 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3286 "backend_libs.switch_util.c"
    {
#line 3288 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____case_consts_3_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_5), ((MR_Word) backend_libs__switch_util__wrapper_arg_6));
    }
#line 3291 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_4 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3293 "backend_libs.switch_util.c"
  }
#line 3295 "backend_libs.switch_util.c"
}

#line 3298 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_several_llds_0_0_10001(
#line 3301 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3303 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3305 "backend_libs.switch_util.c"
{
#line 3307 "backend_libs.switch_util.c"
  {
#line 3309 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3312 "backend_libs.switch_util.c"
    {
#line 3314 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____case_consts_several_llds_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3317 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3319 "backend_libs.switch_util.c"
  }
#line 3321 "backend_libs.switch_util.c"
}

#line 3324 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_several_llds_0_0_10001(
#line 3327 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3329 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3331 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3333 "backend_libs.switch_util.c"
{
#line 3335 "backend_libs.switch_util.c"
  {
#line 3337 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3340 "backend_libs.switch_util.c"
    {
#line 3342 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____case_consts_several_llds_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3345 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3347 "backend_libs.switch_util.c"
  }
#line 3349 "backend_libs.switch_util.c"
}

#line 3352 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_num_ptags_map_0_0_10001(
#line 3355 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3357 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3359 "backend_libs.switch_util.c"
{
#line 3361 "backend_libs.switch_util.c"
  {
#line 3363 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3366 "backend_libs.switch_util.c"
    {
#line 3368 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____case_num_ptags_map_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3371 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3373 "backend_libs.switch_util.c"
  }
#line 3375 "backend_libs.switch_util.c"
}

#line 3378 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_num_ptags_map_0_0_10001(
#line 3381 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3383 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3385 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3387 "backend_libs.switch_util.c"
{
#line 3389 "backend_libs.switch_util.c"
  {
#line 3391 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3394 "backend_libs.switch_util.c"
    {
#line 3396 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____case_num_ptags_map_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3399 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3401 "backend_libs.switch_util.c"
  }
#line 3403 "backend_libs.switch_util.c"
}

#line 3406 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0_10001(
#line 3409 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3411 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3413 "backend_libs.switch_util.c"
{
#line 3415 "backend_libs.switch_util.c"
  {
#line 3417 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3420 "backend_libs.switch_util.c"
    {
#line 3422 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____is_int_switch_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3425 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3427 "backend_libs.switch_util.c"
  }
#line 3429 "backend_libs.switch_util.c"
}

#line 3432 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0_10001(
#line 3435 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3437 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3439 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3441 "backend_libs.switch_util.c"
{
#line 3443 "backend_libs.switch_util.c"
  {
#line 3445 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3448 "backend_libs.switch_util.c"
    {
#line 3450 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____is_int_switch_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3453 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3455 "backend_libs.switch_util.c"
  }
#line 3457 "backend_libs.switch_util.c"
}

#line 3460 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____may_use_smart_indexing_0_0_10001(
#line 3463 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3465 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3467 "backend_libs.switch_util.c"
{
#line 3469 "backend_libs.switch_util.c"
  {
#line 3471 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3474 "backend_libs.switch_util.c"
    {
#line 3476 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____may_use_smart_indexing_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3479 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3481 "backend_libs.switch_util.c"
  }
#line 3483 "backend_libs.switch_util.c"
}

#line 3486 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____may_use_smart_indexing_0_0_10001(
#line 3489 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3491 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3493 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3495 "backend_libs.switch_util.c"
{
#line 3497 "backend_libs.switch_util.c"
  {
#line 3499 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3502 "backend_libs.switch_util.c"
    {
#line 3504 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____may_use_smart_indexing_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3507 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3509 "backend_libs.switch_util.c"
  }
#line 3511 "backend_libs.switch_util.c"
}

#line 3514 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____maybe_int_switch_info_0_0_10001(
#line 3517 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3519 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3521 "backend_libs.switch_util.c"
{
#line 3523 "backend_libs.switch_util.c"
  {
#line 3525 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3528 "backend_libs.switch_util.c"
    {
#line 3530 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____maybe_int_switch_info_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3533 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3535 "backend_libs.switch_util.c"
  }
#line 3537 "backend_libs.switch_util.c"
}

#line 3540 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____maybe_int_switch_info_0_0_10001(
#line 3543 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3545 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3547 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3549 "backend_libs.switch_util.c"
{
#line 3551 "backend_libs.switch_util.c"
  {
#line 3553 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3556 "backend_libs.switch_util.c"
    {
#line 3558 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____maybe_int_switch_info_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3561 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3563 "backend_libs.switch_util.c"
  }
#line 3565 "backend_libs.switch_util.c"
}

#line 3568 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_bit_vec_check_0_0_10001(
#line 3571 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3573 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3575 "backend_libs.switch_util.c"
{
#line 3577 "backend_libs.switch_util.c"
  {
#line 3579 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3582 "backend_libs.switch_util.c"
    {
#line 3584 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____need_bit_vec_check_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3587 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3589 "backend_libs.switch_util.c"
  }
#line 3591 "backend_libs.switch_util.c"
}

#line 3594 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_bit_vec_check_0_0_10001(
#line 3597 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3599 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3601 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3603 "backend_libs.switch_util.c"
{
#line 3605 "backend_libs.switch_util.c"
  {
#line 3607 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3610 "backend_libs.switch_util.c"
    {
#line 3612 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____need_bit_vec_check_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3615 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3617 "backend_libs.switch_util.c"
  }
#line 3619 "backend_libs.switch_util.c"
}

#line 3622 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_range_check_0_0_10001(
#line 3625 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3627 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3629 "backend_libs.switch_util.c"
{
#line 3631 "backend_libs.switch_util.c"
  {
#line 3633 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3636 "backend_libs.switch_util.c"
    {
#line 3638 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____need_range_check_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3641 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3643 "backend_libs.switch_util.c"
  }
#line 3645 "backend_libs.switch_util.c"
}

#line 3648 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_range_check_0_0_10001(
#line 3651 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3653 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3655 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3657 "backend_libs.switch_util.c"
{
#line 3659 "backend_libs.switch_util.c"
  {
#line 3661 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3664 "backend_libs.switch_util.c"
    {
#line 3666 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____need_range_check_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3669 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3671 "backend_libs.switch_util.c"
  }
#line 3673 "backend_libs.switch_util.c"
}

#line 3676 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_1_0_10001(
#line 3679 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3681 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3683 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3685 "backend_libs.switch_util.c"
{
#line 3687 "backend_libs.switch_util.c"
  {
#line 3689 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3692 "backend_libs.switch_util.c"
    {
#line 3694 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3697 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3699 "backend_libs.switch_util.c"
  }
#line 3701 "backend_libs.switch_util.c"
}

#line 3704 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_1_0_10001(
#line 3707 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3709 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3711 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3713 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3715 "backend_libs.switch_util.c"
{
#line 3717 "backend_libs.switch_util.c"
  {
#line 3719 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3722 "backend_libs.switch_util.c"
    {
#line 3724 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3727 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3729 "backend_libs.switch_util.c"
  }
#line 3731 "backend_libs.switch_util.c"
}

#line 3734 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_entry_1_0_10001(
#line 3737 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3739 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3741 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3743 "backend_libs.switch_util.c"
{
#line 3745 "backend_libs.switch_util.c"
  {
#line 3747 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3750 "backend_libs.switch_util.c"
    {
#line 3752 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3755 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3757 "backend_libs.switch_util.c"
  }
#line 3759 "backend_libs.switch_util.c"
}

#line 3762 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_entry_1_0_10001(
#line 3765 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3767 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3769 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3771 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3773 "backend_libs.switch_util.c"
{
#line 3775 "backend_libs.switch_util.c"
  {
#line 3777 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3780 "backend_libs.switch_util.c"
    {
#line 3782 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3785 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3787 "backend_libs.switch_util.c"
  }
#line 3789 "backend_libs.switch_util.c"
}

#line 3792 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_entry_1_0_10001(
#line 3795 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3797 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3799 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3801 "backend_libs.switch_util.c"
{
#line 3803 "backend_libs.switch_util.c"
  {
#line 3805 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3808 "backend_libs.switch_util.c"
    {
#line 3810 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_group_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3813 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3815 "backend_libs.switch_util.c"
  }
#line 3817 "backend_libs.switch_util.c"
}

#line 3820 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_entry_1_0_10001(
#line 3823 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3825 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3827 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3829 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3831 "backend_libs.switch_util.c"
{
#line 3833 "backend_libs.switch_util.c"
  {
#line 3835 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3838 "backend_libs.switch_util.c"
    {
#line 3840 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_group_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3843 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3845 "backend_libs.switch_util.c"
  }
#line 3847 "backend_libs.switch_util.c"
}

#line 3850 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_list_1_0_10001(
#line 3853 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3855 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3857 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3859 "backend_libs.switch_util.c"
{
#line 3861 "backend_libs.switch_util.c"
  {
#line 3863 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3866 "backend_libs.switch_util.c"
    {
#line 3868 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_group_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3871 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3873 "backend_libs.switch_util.c"
  }
#line 3875 "backend_libs.switch_util.c"
}

#line 3878 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_list_1_0_10001(
#line 3881 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3883 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3885 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3887 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3889 "backend_libs.switch_util.c"
{
#line 3891 "backend_libs.switch_util.c"
  {
#line 3893 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3896 "backend_libs.switch_util.c"
    {
#line 3898 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_group_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3901 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3903 "backend_libs.switch_util.c"
  }
#line 3905 "backend_libs.switch_util.c"
}

#line 3908 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_list_1_0_10001(
#line 3911 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3913 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3915 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3917 "backend_libs.switch_util.c"
{
#line 3919 "backend_libs.switch_util.c"
  {
#line 3921 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3924 "backend_libs.switch_util.c"
    {
#line 3926 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3929 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3931 "backend_libs.switch_util.c"
  }
#line 3933 "backend_libs.switch_util.c"
}

#line 3936 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_list_1_0_10001(
#line 3939 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3941 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3943 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3945 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3947 "backend_libs.switch_util.c"
{
#line 3949 "backend_libs.switch_util.c"
  {
#line 3951 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3954 "backend_libs.switch_util.c"
    {
#line 3956 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3959 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3961 "backend_libs.switch_util.c"
  }
#line 3963 "backend_libs.switch_util.c"
}

#line 3966 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_map_1_0_10001(
#line 3969 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3971 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3973 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3975 "backend_libs.switch_util.c"
{
#line 3977 "backend_libs.switch_util.c"
  {
#line 3979 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3982 "backend_libs.switch_util.c"
    {
#line 3984 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3987 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3989 "backend_libs.switch_util.c"
  }
#line 3991 "backend_libs.switch_util.c"
}

#line 3994 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_map_1_0_10001(
#line 3997 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3999 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4001 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4003 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4005 "backend_libs.switch_util.c"
{
#line 4007 "backend_libs.switch_util.c"
  {
#line 4009 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4012 "backend_libs.switch_util.c"
    {
#line 4014 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4017 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4019 "backend_libs.switch_util.c"
  }
#line 4021 "backend_libs.switch_util.c"
}

#line 4024 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0_10001(
#line 4027 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4029 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4031 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4033 "backend_libs.switch_util.c"
{
#line 4035 "backend_libs.switch_util.c"
  {
#line 4037 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4040 "backend_libs.switch_util.c"
    {
#line 4042 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_rev_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4045 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4047 "backend_libs.switch_util.c"
  }
#line 4049 "backend_libs.switch_util.c"
}

#line 4052 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0_10001(
#line 4055 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4057 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4059 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4061 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4063 "backend_libs.switch_util.c"
{
#line 4065 "backend_libs.switch_util.c"
  {
#line 4067 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4070 "backend_libs.switch_util.c"
    {
#line 4072 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_rev_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4075 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4077 "backend_libs.switch_util.c"
  }
#line 4079 "backend_libs.switch_util.c"
}

#line 4082 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0_10001(
#line 4085 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4087 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4089 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4091 "backend_libs.switch_util.c"
{
#line 4093 "backend_libs.switch_util.c"
  {
#line 4095 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4098 "backend_libs.switch_util.c"
    {
#line 4100 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4103 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4105 "backend_libs.switch_util.c"
  }
#line 4107 "backend_libs.switch_util.c"
}

#line 4110 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0_10001(
#line 4113 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4115 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4117 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4119 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4121 "backend_libs.switch_util.c"
{
#line 4123 "backend_libs.switch_util.c"
  {
#line 4125 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4128 "backend_libs.switch_util.c"
    {
#line 4130 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4133 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4135 "backend_libs.switch_util.c"
  }
#line 4137 "backend_libs.switch_util.c"
}

#line 4140 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_count_map_0_0_10001(
#line 4143 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4145 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 4147 "backend_libs.switch_util.c"
{
#line 4149 "backend_libs.switch_util.c"
  {
#line 4151 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4154 "backend_libs.switch_util.c"
    {
#line 4156 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_count_map_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 4159 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4161 "backend_libs.switch_util.c"
  }
#line 4163 "backend_libs.switch_util.c"
}

#line 4166 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_count_map_0_0_10001(
#line 4169 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 4171 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4173 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4175 "backend_libs.switch_util.c"
{
#line 4177 "backend_libs.switch_util.c"
  {
#line 4179 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4182 "backend_libs.switch_util.c"
    {
#line 4184 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_count_map_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4187 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4189 "backend_libs.switch_util.c"
  }
#line 4191 "backend_libs.switch_util.c"
}

#line 4194 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____soln_consts_1_0_10001(
#line 4197 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4199 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4201 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4203 "backend_libs.switch_util.c"
{
#line 4205 "backend_libs.switch_util.c"
  {
#line 4207 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4210 "backend_libs.switch_util.c"
    {
#line 4212 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____soln_consts_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4215 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4217 "backend_libs.switch_util.c"
  }
#line 4219 "backend_libs.switch_util.c"
}

#line 4222 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____soln_consts_1_0_10001(
#line 4225 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4227 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4229 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4231 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4233 "backend_libs.switch_util.c"
{
#line 4235 "backend_libs.switch_util.c"
  {
#line 4237 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4240 "backend_libs.switch_util.c"
    {
#line 4242 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____soln_consts_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4245 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4247 "backend_libs.switch_util.c"
  }
#line 4249 "backend_libs.switch_util.c"
}

#line 4252 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_list_1_0_10001(
#line 4255 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4257 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4259 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4261 "backend_libs.switch_util.c"
{
#line 4263 "backend_libs.switch_util.c"
  {
#line 4265 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4268 "backend_libs.switch_util.c"
    {
#line 4270 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____stag_goal_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4273 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4275 "backend_libs.switch_util.c"
  }
#line 4277 "backend_libs.switch_util.c"
}

#line 4280 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_list_1_0_10001(
#line 4283 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4285 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4287 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4289 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4291 "backend_libs.switch_util.c"
{
#line 4293 "backend_libs.switch_util.c"
  {
#line 4295 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4298 "backend_libs.switch_util.c"
    {
#line 4300 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____stag_goal_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4303 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4305 "backend_libs.switch_util.c"
  }
#line 4307 "backend_libs.switch_util.c"
}

#line 4310 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_map_1_0_10001(
#line 4313 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4315 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4317 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4319 "backend_libs.switch_util.c"
{
#line 4321 "backend_libs.switch_util.c"
  {
#line 4323 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4326 "backend_libs.switch_util.c"
    {
#line 4328 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____stag_goal_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4331 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4333 "backend_libs.switch_util.c"
  }
#line 4335 "backend_libs.switch_util.c"
}

#line 4338 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_map_1_0_10001(
#line 4341 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4343 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4345 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4347 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4349 "backend_libs.switch_util.c"
{
#line 4351 "backend_libs.switch_util.c"
  {
#line 4353 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4356 "backend_libs.switch_util.c"
    {
#line 4358 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____stag_goal_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4361 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4363 "backend_libs.switch_util.c"
  }
#line 4365 "backend_libs.switch_util.c"
}

#line 4368 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____string_hash_slot_1_0_10001(
#line 4371 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4373 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4375 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4377 "backend_libs.switch_util.c"
{
#line 4379 "backend_libs.switch_util.c"
  {
#line 4381 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4384 "backend_libs.switch_util.c"
    {
#line 4386 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____string_hash_slot_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4389 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4391 "backend_libs.switch_util.c"
  }
#line 4393 "backend_libs.switch_util.c"
}

#line 4396 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____string_hash_slot_1_0_10001(
#line 4399 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4401 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4403 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4405 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4407 "backend_libs.switch_util.c"
{
#line 4409 "backend_libs.switch_util.c"
  {
#line 4411 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4414 "backend_libs.switch_util.c"
    {
#line 4416 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____string_hash_slot_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4419 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4421 "backend_libs.switch_util.c"
  }
#line 4423 "backend_libs.switch_util.c"
}

#line 4426 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____switch_category_0_0_10001(
#line 4429 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4431 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 4433 "backend_libs.switch_util.c"
{
#line 4435 "backend_libs.switch_util.c"
  {
#line 4437 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4440 "backend_libs.switch_util.c"
    {
#line 4442 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____switch_category_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 4445 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4447 "backend_libs.switch_util.c"
  }
#line 4449 "backend_libs.switch_util.c"
}

#line 4452 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____switch_category_0_0_10001(
#line 4455 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 4457 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4459 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4461 "backend_libs.switch_util.c"
{
#line 4463 "backend_libs.switch_util.c"
  {
#line 4465 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4468 "backend_libs.switch_util.c"
    {
#line 4470 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____switch_category_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4473 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4475 "backend_libs.switch_util.c"
  }
#line 4477 "backend_libs.switch_util.c"
}

#line 4480 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____table_size_upgrade_0_0_10001(
#line 4483 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4485 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 4487 "backend_libs.switch_util.c"
{
#line 4489 "backend_libs.switch_util.c"
  {
#line 4491 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4494 "backend_libs.switch_util.c"
    {
#line 4496 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____table_size_upgrade_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 4499 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4501 "backend_libs.switch_util.c"
  }
#line 4503 "backend_libs.switch_util.c"
}

#line 4506 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____table_size_upgrade_0_0_10001(
#line 4509 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 4511 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4513 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4515 "backend_libs.switch_util.c"
{
#line 4517 "backend_libs.switch_util.c"
  {
#line 4519 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4522 "backend_libs.switch_util.c"
    {
#line 4524 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____table_size_upgrade_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4527 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4529 "backend_libs.switch_util.c"
  }
#line 4531 "backend_libs.switch_util.c"
}

#line 1272 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0_1(
#line 1272 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1272 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1272 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1272 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3,
#line 1272 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 1272 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_5)
#line 1272 "switch_util.m"
{
#line 1272 "switch_util.m"
  {
#line 1272 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 1272 "switch_util.m"
    MR_Word backend_libs__switch_util__conv2_STATE_VARIABLE_CaseNumPtagsMap_53;
#line 1272 "switch_util.m"
    MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55;

#line 1272 "switch_util.m"
    {
#line 1272 "switch_util.m"
      backend_libs__switch_util__group_case_by_ptag_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))), (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 5)), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), &backend_libs__switch_util__conv2_STATE_VARIABLE_CaseNumPtagsMap_53, ((MR_Word) backend_libs__switch_util__wrapper_arg_4), &backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55);
    }
#line 1272 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_3 = ((MR_Box) (backend_libs__switch_util__conv2_STATE_VARIABLE_CaseNumPtagsMap_53));
#line 1272 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_5 = ((MR_Box) (backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55));
#line 1272 "switch_util.m"
  }
#line 1272 "switch_util.m"
}

#line 1257 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0(
#line 1257 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_65,
#line 1257 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1257 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1257 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1257 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1257 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1257 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1257 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1257 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1257 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9,
#line 1257 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_10,
#line 1257 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11,
#line 1257 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_12)
#line 1257 "switch_util.m"
{
#line 1264 "switch_util.m"
  while (MR_TRUE)
#line 1264 "switch_util.m"
    {
#line 1264 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1264 "switch_util.m"
      {
#line 1264 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 1264 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1264 "switch_util.m"
          {
#line 1265 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_12 = backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11;
#line 1265 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_10 = backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9;
#line 1265 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_StateC_8 = backend_libs__switch_util__STATE_VARIABLE_StateC_0_7;
#line 1265 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_StateB_6 = backend_libs__switch_util__STATE_VARIABLE_StateB_0_5;
#line 1265 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_StateA_4 = backend_libs__switch_util__STATE_VARIABLE_StateA_0_3;
#line 1264 "switch_util.m"
          }
#line 1264 "switch_util.m"
        else
#line 1267 "switch_util.m"
          {
#line 1267 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_78_78;
#line 1267 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_80_80;
#line 1267 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCase_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1267 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCases_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1267 "switch_util.m"
            MR_Word backend_libs__switch_util__MainTaggedConsId_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 0)));
#line 1267 "switch_util.m"
            MR_Word backend_libs__switch_util__OtherConsIds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 1)));
#line 1267 "switch_util.m"
            MR_Integer backend_libs__switch_util__CaseNum_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 2)));
#line 1267 "switch_util.m"
            MR_Box backend_libs__switch_util__CaseRep_41;
#line 1267 "switch_util.m"
            MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_52_52;
#line 1267 "switch_util.m"
            MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_53_53;
#line 1267 "switch_util.m"
            MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_54_54;
#line 1267 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_55_55;
#line 1267 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_56_56;
#line 1267 "switch_util.m"
            MR_Word backend_libs__switch_util__V_57_57;
#line 1267 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_58_58;
#line 1267 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_59_59;
#line 1268 "switch_util.m"
            MR_Word backend_libs__switch_util___Goal_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 3)));
#line 1269 "switch_util.m"
            void MR_CALL (* backend_libs__switch_util__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RepresentCase_2, (MR_Integer) 1)));
#line 1272 "switch_util.m"
            MR_Box backend_libs__switch_util__conv4_STATE_VARIABLE_CaseNumPtagsMap_58_58;
#line 1272 "switch_util.m"
            MR_Box backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_59_59;

#line 1269 "switch_util.m"
            {
#line 1269 "switch_util.m"
              backend_libs__switch_util__func_0(((MR_Box) backend_libs__switch_util__RepresentCase_2), ((MR_Box) (backend_libs__switch_util__TaggedCase_29)), &backend_libs__switch_util__CaseRep_41, backend_libs__switch_util__STATE_VARIABLE_StateA_0_3, &backend_libs__switch_util__STATE_VARIABLE_StateA_52_52, backend_libs__switch_util__STATE_VARIABLE_StateB_0_5, &backend_libs__switch_util__STATE_VARIABLE_StateB_53_53, backend_libs__switch_util__STATE_VARIABLE_StateC_0_7, &backend_libs__switch_util__STATE_VARIABLE_StateC_54_54);
            }
#line 1270 "switch_util.m"
            {
#line 1270 "switch_util.m"
              backend_libs__switch_util__group_case_by_ptag_7_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_65, backend_libs__switch_util__CaseNum_39, backend_libs__switch_util__CaseRep_41, backend_libs__switch_util__MainTaggedConsId_37, backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9, &backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_55_55, backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11, &backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_56_56);
            }
#line 1272 "switch_util.m"
            {
#line 1272 "switch_util.m"
              backend_libs__switch_util__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1272 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_8[0]));
#line 1272 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0_1));
#line 1272 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1272 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_65));
#line 1272 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 4) = ((MR_Box) (backend_libs__switch_util__CaseNum_39));
#line 1272 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 5) = backend_libs__switch_util__CaseRep_41;
#line 1272 "switch_util.m"
            }
#line 4705 "backend_libs.switch_util.c"
            {
#line 4707 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4709 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_78_78, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 4711 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_78_78, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_65));
#line 4713 "backend_libs.switch_util.c"
            }
#line 4715 "backend_libs.switch_util.c"
            {
#line 4717 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4719 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_80_80, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 4721 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_80_80, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 4723 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_80_80, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_78_78));
#line 4725 "backend_libs.switch_util.c"
            }
#line 1272 "switch_util.m"
            {
#line 1272 "switch_util.m"
              mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &backend_libs__switch_util_scalar_common_2[1], backend_libs__switch_util__TypeInfo_80_80, backend_libs__switch_util__V_57_57, backend_libs__switch_util__OtherConsIds_38, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_55_55)), &backend_libs__switch_util__conv4_STATE_VARIABLE_CaseNumPtagsMap_58_58, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_56_56)), &backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_59_59);
            }
#line 1272 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_58_58 = ((MR_Word) backend_libs__switch_util__conv4_STATE_VARIABLE_CaseNumPtagsMap_58_58);
#line 1272 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_59_59 = ((MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_59_59);
#line 1274 "switch_util.m"
            /* direct tailcall eliminated */
#line 1274 "switch_util.m"
            {
#line 1274 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__TaggedCases_30;
#line 1274 "switch_util.m"
              MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0__tmp_copy_3 = backend_libs__switch_util__STATE_VARIABLE_StateA_52_52;
#line 1274 "switch_util.m"
              MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0__tmp_copy_5 = backend_libs__switch_util__STATE_VARIABLE_StateB_53_53;
#line 1274 "switch_util.m"
              MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0__tmp_copy_7 = backend_libs__switch_util__STATE_VARIABLE_StateC_54_54;
#line 1274 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0__tmp_copy_9 = backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_58_58;
#line 1274 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0__tmp_copy_11 = backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_59_59;

#line 1274 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11 = backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0__tmp_copy_11;
#line 1274 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9 = backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0__tmp_copy_9;
#line 1274 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_StateC_0_7 = backend_libs__switch_util__STATE_VARIABLE_StateC_0__tmp_copy_7;
#line 1274 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_StateB_0_5 = backend_libs__switch_util__STATE_VARIABLE_StateB_0__tmp_copy_5;
#line 1274 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_StateA_0_3 = backend_libs__switch_util__STATE_VARIABLE_StateA_0__tmp_copy_3;
#line 1274 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 1274 "switch_util.m"
            }
#line 1274 "switch_util.m"
            continue;
#line 1267 "switch_util.m"
          }
#line 1264 "switch_util.m"
      }
#line 1264 "switch_util.m"
      break;
#line 1264 "switch_util.m"
    }
#line 1257 "switch_util.m"
}

#line 1123 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0_1(
#line 1123 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1123 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1123 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1123 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3)
#line 1123 "switch_util.m"
{
#line 1123 "switch_util.m"
  {
#line 1123 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 1123 "switch_util.m"
    MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_UnsortedTable_13;

#line 1123 "switch_util.m"
    {
#line 1123 "switch_util.m"
      backend_libs__switch_util__add_string_binary_entry_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4)), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), &backend_libs__switch_util__conv1_STATE_VARIABLE_UnsortedTable_13);
    }
#line 1123 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_3 = ((MR_Box) (backend_libs__switch_util__conv1_STATE_VARIABLE_UnsortedTable_13));
#line 1123 "switch_util.m"
  }
#line 1123 "switch_util.m"
}

#line 1109 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(
#line 1109 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_54,
#line 1109 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1109 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1109 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1109 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1109 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1109 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1109 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1109 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1109 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9,
#line 1109 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10)
#line 1109 "switch_util.m"
{
#line 1115 "switch_util.m"
  {
#line 1115 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 1115 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1115 "switch_util.m"
      {
#line 1115 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10 = backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9;
#line 1115 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_StateC_8 = backend_libs__switch_util__STATE_VARIABLE_StateC_0_7;
#line 1115 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_StateB_6 = backend_libs__switch_util__STATE_VARIABLE_StateB_0_5;
#line 1115 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_StateA_4 = backend_libs__switch_util__STATE_VARIABLE_StateA_0_3;
#line 1115 "switch_util.m"
      }
#line 1115 "switch_util.m"
    else
#line 1117 "switch_util.m"
      {
#line 1117 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_64_64;
#line 1117 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_66_66;
#line 1117 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCase_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1117 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCases_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1117 "switch_util.m"
        MR_Box backend_libs__switch_util__CaseRep_31;
#line 1117 "switch_util.m"
        MR_Word backend_libs__switch_util__MainTaggedConsId_32;
#line 1117 "switch_util.m"
        MR_Word backend_libs__switch_util__OtherTaggedConsIds_33;
#line 1117 "switch_util.m"
        MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_44_44;
#line 1117 "switch_util.m"
        MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_45_45;
#line 1117 "switch_util.m"
        MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_46_46;
#line 1117 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_47_47;
#line 1117 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_51_51;
#line 1117 "switch_util.m"
        MR_Word backend_libs__switch_util__V_52_52;
#line 1120 "switch_util.m"
        void MR_CALL (* backend_libs__switch_util__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 1121 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_34_34;
#line 1121 "switch_util.m"
        MR_Word backend_libs__switch_util__V_35_35;
#line 1123 "switch_util.m"
        MR_Box backend_libs__switch_util__conv2_STATE_VARIABLE_UnsortedTable_10;

#line 1118 "switch_util.m"
        {
#line 1118 "switch_util.m"
          backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_54, backend_libs__switch_util__TaggedCases_25, backend_libs__switch_util__RepresentCase_2, backend_libs__switch_util__STATE_VARIABLE_StateA_0_3, &backend_libs__switch_util__STATE_VARIABLE_StateA_44_44, backend_libs__switch_util__STATE_VARIABLE_StateB_0_5, &backend_libs__switch_util__STATE_VARIABLE_StateB_45_45, backend_libs__switch_util__STATE_VARIABLE_StateC_0_7, &backend_libs__switch_util__STATE_VARIABLE_StateC_46_46, backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9, &backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_47_47);
        }
#line 1120 "switch_util.m"
        backend_libs__switch_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RepresentCase_2, (MR_Integer) 1)));
#line 1120 "switch_util.m"
        {
#line 1120 "switch_util.m"
          backend_libs__switch_util__func_0(((MR_Box) backend_libs__switch_util__RepresentCase_2), ((MR_Box) (backend_libs__switch_util__TaggedCase_24)), &backend_libs__switch_util__CaseRep_31, backend_libs__switch_util__STATE_VARIABLE_StateA_44_44, backend_libs__switch_util__STATE_VARIABLE_StateA_4, backend_libs__switch_util__STATE_VARIABLE_StateB_45_45, backend_libs__switch_util__STATE_VARIABLE_StateB_6, backend_libs__switch_util__STATE_VARIABLE_StateC_46_46, backend_libs__switch_util__STATE_VARIABLE_StateC_8);
        }
#line 1121 "switch_util.m"
        backend_libs__switch_util__MainTaggedConsId_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 0)));
#line 1121 "switch_util.m"
        backend_libs__switch_util__OtherTaggedConsIds_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 1)));
#line 1121 "switch_util.m"
        backend_libs__switch_util__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 2)));
#line 1121 "switch_util.m"
        backend_libs__switch_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 3)));
#line 1122 "switch_util.m"
        {
#line 1122 "switch_util.m"
          backend_libs__switch_util__add_string_binary_entry_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_54, backend_libs__switch_util__CaseRep_31, backend_libs__switch_util__MainTaggedConsId_32, backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_47_47, &backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_51_51);
        }
#line 1123 "switch_util.m"
        {
#line 1123 "switch_util.m"
          backend_libs__switch_util__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1123 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_7[0]));
#line 1123 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0_1));
#line 1123 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1123 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_54));
#line 1123 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 4) = backend_libs__switch_util__CaseRep_31;
#line 1123 "switch_util.m"
        }
#line 4938 "backend_libs.switch_util.c"
        {
#line 4940 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4942 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_64_64, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 4944 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_64_64, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 4946 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_64_64, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_54));
#line 4948 "backend_libs.switch_util.c"
        }
#line 4950 "backend_libs.switch_util.c"
        {
#line 4952 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4954 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_66_66, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4956 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_66_66, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_64_64));
#line 4958 "backend_libs.switch_util.c"
        }
#line 1123 "switch_util.m"
        {
#line 1123 "switch_util.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__TypeInfo_66_66, backend_libs__switch_util__V_52_52, backend_libs__switch_util__OtherTaggedConsIds_33, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_51_51)), &backend_libs__switch_util__conv2_STATE_VARIABLE_UnsortedTable_10);
        }
#line 1123 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10 = ((MR_Word) backend_libs__switch_util__conv2_STATE_VARIABLE_UnsortedTable_10);
#line 1117 "switch_util.m"
      }
#line 1115 "switch_util.m"
  }
#line 1109 "switch_util.m"
}

#line 794 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_114_111_106_101_99_116_95_97_108_108_95_116_111_95_111_110_101_95_115_111_108_117_116_105_111_110_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 794 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 794 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_0_2,
#line 794 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_3)
#line 794 "switch_util.m"
{
#line 797 "switch_util.m"
  while (MR_TRUE)
#line 797 "switch_util.m"
    {
#line 797 "switch_util.m"
      /* tailcall optimized into a loop */
#line 797 "switch_util.m"
      {
#line 797 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 797 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 797 "switch_util.m"
          {
#line 797 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_3 = backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_0_2;
#line 797 "switch_util.m"
            backend_libs__switch_util__succeeded = MR_TRUE;
#line 797 "switch_util.m"
          }
#line 797 "switch_util.m"
        else
#line 799 "switch_util.m"
          {
#line 799 "switch_util.m"
            MR_Box backend_libs__switch_util__Case_7;
#line 799 "switch_util.m"
            MR_Word backend_libs__switch_util__Solns_8;
#line 799 "switch_util.m"
            MR_Word backend_libs__switch_util__CaseSolns_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 799 "switch_util.m"
            MR_Word backend_libs__switch_util__Values_11;
#line 799 "switch_util.m"
            MR_Word backend_libs__switch_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 799 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_15_15;
#line 799 "switch_util.m"
            MR_Word backend_libs__switch_util__V_16_16;

#line 798 "switch_util.m"
            backend_libs__switch_util__Case_7 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_14_14, (MR_Integer) 0));
#line 798 "switch_util.m"
            backend_libs__switch_util__Solns_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_14_14, (MR_Integer) 1)));
#line 800 "switch_util.m"
            backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__Solns_8)) == (MR_mktag((MR_Integer) 0)));
#line 800 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 800 "switch_util.m"
              {
#line 800 "switch_util.m"
                backend_libs__switch_util__Values_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Solns_8, (MR_Integer) 0)));
#line 801 "switch_util.m"
                {
#line 801 "switch_util.m"
                  backend_libs__switch_util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 801 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_16_16, 0) = backend_libs__switch_util__Case_7;
#line 801 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_16_16, 1) = ((MR_Box) (backend_libs__switch_util__Values_11));
#line 801 "switch_util.m"
                }
#line 801 "switch_util.m"
                {
#line 801 "switch_util.m"
                  backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_15_15, 0) = ((MR_Box) (backend_libs__switch_util__V_16_16));
#line 801 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_15_15, 1) = ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_0_2));
#line 801 "switch_util.m"
                }
#line 802 "switch_util.m"
                {
#line 802 "switch_util.m"
                  /* direct tailcall eliminated */
#line 802 "switch_util.m"
                  {
#line 802 "switch_util.m"
                    MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__CaseSolns_9;
#line 802 "switch_util.m"
                    MR_Word backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_15_15;

#line 802 "switch_util.m"
                    backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_0_2 = backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_0__tmp_copy_2;
#line 802 "switch_util.m"
                    backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 802 "switch_util.m"
                  }
#line 802 "switch_util.m"
                  continue;
#line 802 "switch_util.m"
                }
#line 800 "switch_util.m"
              }
#line 799 "switch_util.m"
          }
#line 797 "switch_util.m"
        return backend_libs__switch_util__succeeded;
#line 797 "switch_util.m"
      }
#line 797 "switch_util.m"
      break;
#line 797 "switch_util.m"
    }
#line 794 "switch_util.m"
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
        MR_Word backend_libs__switch_util__TypeCtorInfo_80_80;
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
        MR_Integer backend_libs__switch_util__V_62_62;
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
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_6[0]));
#line 454 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0_1));
#line 454 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 454 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 3) = ((MR_Box) (backend_libs__switch_util__ModuleInfo_1));
#line 454 "switch_util.m"
        }
#line 5277 "backend_libs.switch_util.c"
        backend_libs__switch_util__TypeCtorInfo_80_80 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 454 "switch_util.m"
        {
#line 454 "switch_util.m"
          mercury__list__map_foldl4_11_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__TypeCtorInfo_80_80, backend_libs__switch_util__TypeCtorInfo_80_80, backend_libs__switch_util__TypeCtorInfo_80_80, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_is_int_switch_0, backend_libs__switch_util__V_57_57, backend_libs__switch_util__OtherConsIds_41, &backend_libs__switch_util__TaggedOtherConsIds_44, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_LowerLimit_53_53)), &backend_libs__switch_util__conv8_STATE_VARIABLE_LowerLimit_58_58, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_UpperLimit_54_54)), &backend_libs__switch_util__conv7_STATE_VARIABLE_UpperLimit_59_59, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_NumValues_55_55)), &backend_libs__switch_util__conv6_STATE_VARIABLE_NumValues_60_60, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_56_56)), &backend_libs__switch_util__conv5_STATE_VARIABLE_IsIntSwitch_61_61);
        }
#line 454 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_LowerLimit_58_58 = ((MR_Integer) backend_libs__switch_util__conv8_STATE_VARIABLE_LowerLimit_58_58);
#line 454 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_UpperLimit_59_59 = ((MR_Integer) backend_libs__switch_util__conv7_STATE_VARIABLE_UpperLimit_59_59);
#line 454 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_NumValues_60_60 = ((MR_Integer) backend_libs__switch_util__conv6_STATE_VARIABLE_NumValues_60_60);
#line 454 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_61_61 = ((MR_Word) backend_libs__switch_util__conv5_STATE_VARIABLE_IsIntSwitch_61_61);
#line 457 "switch_util.m"
        {
#line 457 "switch_util.m"
          backend_libs__switch_util__TaggedCase_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 457 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 0) = ((MR_Box) (backend_libs__switch_util__TaggedMainConsId_43));
#line 457 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 1) = ((MR_Box) (backend_libs__switch_util__TaggedOtherConsIds_44));
#line 457 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 2) = ((MR_Box) (backend_libs__switch_util__CaseNum_3));
#line 457 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 3) = ((MR_Box) (backend_libs__switch_util__Goal_42));
#line 457 "switch_util.m"
        }
#line 459 "switch_util.m"
        backend_libs__switch_util__V_62_62 = (backend_libs__switch_util__CaseNum_3 + (MR_Integer) 1);
#line 459 "switch_util.m"
        {
#line 459 "switch_util.m"
          backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0(backend_libs__switch_util__ModuleInfo_1, backend_libs__switch_util__V_62_62, backend_libs__switch_util__Cases_33, &backend_libs__switch_util__TaggedCases_35, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_58_58, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_7, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_59_59, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_9, backend_libs__switch_util__STATE_VARIABLE_NumValues_60_60, backend_libs__switch_util__STATE_VARIABLE_NumValues_11, backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_61_61, backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_13);
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
        MR_Integer backend_libs__switch_util__V_22_22;
#line 433 "switch_util.m"
        MR_Word backend_libs__switch_util__ConsTag_31;

#line 466 "switch_util.m"
        {
#line 466 "switch_util.m"
          backend_libs__switch_util__ConsTag_31 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(backend_libs__switch_util__ModuleInfo_1, backend_libs__switch_util__MainConsId_16);
        }
#line 467 "switch_util.m"
        {
#line 467 "switch_util.m"
          backend_libs__switch_util__TaggedMainConsId_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 467 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedMainConsId_19, 0) = ((MR_Box) (backend_libs__switch_util__MainConsId_16));
#line 467 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedMainConsId_19, 1) = ((MR_Box) (backend_libs__switch_util__ConsTag_31));
#line 467 "switch_util.m"
        }
#line 436 "switch_util.m"
        {
#line 436 "switch_util.m"
          backend_libs__switch_util__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 436 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_21_21, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_4[2]));
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
#line 437 "switch_util.m"
        {
#line 437 "switch_util.m"
          backend_libs__switch_util__TaggedCase_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 437 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 0) = ((MR_Box) (backend_libs__switch_util__TaggedMainConsId_19));
#line 437 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 1) = ((MR_Box) (backend_libs__switch_util__TaggedOtherConsIds_20));
#line 437 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 2) = ((MR_Box) (backend_libs__switch_util__CaseNum_3));
#line 437 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 3) = ((MR_Box) (backend_libs__switch_util__Goal_18));
#line 437 "switch_util.m"
        }
#line 439 "switch_util.m"
        backend_libs__switch_util__V_22_22 = (backend_libs__switch_util__CaseNum_3 + (MR_Integer) 1);
#line 439 "switch_util.m"
        {
#line 439 "switch_util.m"
          backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(backend_libs__switch_util__ModuleInfo_1, backend_libs__switch_util__V_22_22, backend_libs__switch_util__Cases_13, &backend_libs__switch_util__TaggedCases_15);
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
              MR_Word backend_libs__switch_util__TypeCtorInfo_56_56;
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
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_6[0]));
#line 402 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_1));
#line 402 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 402 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 3) = ((MR_Box) (backend_libs__switch_util__HeadVar__1_1));
#line 402 "switch_util.m"
              }
#line 5711 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 402 "switch_util.m"
              {
#line 402 "switch_util.m"
                mercury__list__map_foldl4_11_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__TypeCtorInfo_56_56, backend_libs__switch_util__TypeCtorInfo_56_56, backend_libs__switch_util__TypeCtorInfo_56_56, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_is_int_switch_0, backend_libs__switch_util__V_34_34, backend_libs__switch_util__OtherConsIds_20, &backend_libs__switch_util__TaggedOtherConsIds_25, ((MR_Box) (backend_libs__switch_util__IntTag_24)), &backend_libs__switch_util__conv8_LowerLimit1_26, ((MR_Box) (backend_libs__switch_util__IntTag_24)), &backend_libs__switch_util__conv7_UpperLimit1_27, ((MR_Box) ((MR_Integer) 1)), &backend_libs__switch_util__conv6_NumValues1_28, ((MR_Box) ((MR_Integer) 0)), &backend_libs__switch_util__conv5_IsIntSwitch1_29);
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
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 2) = ((MR_Box) ((MR_Integer) 0));
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
            MR_Word backend_libs__switch_util__V_40_40;
#line 421 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedOtherConsIds_43;

#line 421 "switch_util.m"
            {
#line 421 "switch_util.m"
              backend_libs__switch_util__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 421 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_40_40, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_4[2]));
#line 421 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_40_40, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_2));
#line 421 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 421 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_40_40, 3) = ((MR_Box) (backend_libs__switch_util__HeadVar__1_1));
#line 421 "switch_util.m"
            }
#line 421 "switch_util.m"
            {
#line 421 "switch_util.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__V_40_40, backend_libs__switch_util__OtherConsIds_20, &backend_libs__switch_util__TaggedOtherConsIds_43);
            }
#line 422 "switch_util.m"
            {
#line 422 "switch_util.m"
              backend_libs__switch_util__TaggedCase_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 422 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 0) = ((MR_Box) (backend_libs__switch_util__TaggedMainConsId_23));
#line 422 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 1) = ((MR_Box) (backend_libs__switch_util__TaggedOtherConsIds_43));
#line 422 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 2) = ((MR_Box) ((MR_Integer) 0));
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

#line 1412 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__build_ptag_case_rev_map__1412__1_3_p_0(
#line 1412 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1412 "switch_util.m"
  MR_Word backend_libs__switch_util__Case_14,
#line 1412 "switch_util.m"
  MR_Word backend_libs__switch_util__OldCase_21)
#line 1412 "switch_util.m"
{
#line 1412 "switch_util.m"
  {
#line 1412 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 1412 "switch_util.m"
    {
#line 1412 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_42, backend_libs__switch_util__Case_14, backend_libs__switch_util__OldCase_21);
    }
#line 1412 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1412 "switch_util.m"
  }
#line 1412 "switch_util.m"
}

#line 1307 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1307__1_2_p_0(
#line 1307 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_21,
#line 1307 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_74)
#line 1307 "switch_util.m"
{
#line 1307 "switch_util.m"
  {
#line 1307 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__StagLoc_21 == backend_libs__switch_util__HeadVar__2_74);

#line 1307 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1307 "switch_util.m"
  }
#line 1307 "switch_util.m"
}

#line 1321 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1321__1_2_p_0(
#line 1321 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_63,
#line 1321 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_94)
#line 1321 "switch_util.m"
{
#line 1321 "switch_util.m"
  {
#line 1321 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__StagLoc_94 == backend_libs__switch_util__HeadVar__1_63);

#line 1321 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1321 "switch_util.m"
  }
#line 1321 "switch_util.m"
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
#line 5954 "backend_libs.switch_util.c"
  {
#line 5956 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 5959 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 5961 "backend_libs.switch_util.c"
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
#line 6007 "backend_libs.switch_util.c"
  {
#line 6009 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 6012 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 6014 "backend_libs.switch_util.c"
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
#line 6045 "backend_libs.switch_util.c"
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
#line 6071 "backend_libs.switch_util.c"
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
#line 6091 "backend_libs.switch_util.c"
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

#line 6160 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (strcmp(backend_libs__switch_util__V_3_3, backend_libs__switch_util__V_6_6) == 0);
#line 199 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 199 "switch_util.m"
          {
#line 6166 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_7_7);
#line 199 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 6170 "backend_libs.switch_util.c"
              {
#line 6172 "backend_libs.switch_util.c"
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

#line 6276 "backend_libs.switch_util.c"
    {
#line 6278 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6280 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6282 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 6284 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6286 "backend_libs.switch_util.c"
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

#line 6322 "backend_libs.switch_util.c"
    {
#line 6324 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6326 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6328 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 6330 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6332 "backend_libs.switch_util.c"
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
#line 6372 "backend_libs.switch_util.c"
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
#line 6401 "backend_libs.switch_util.c"
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
#line 6416 "backend_libs.switch_util.c"
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
#line 6434 "backend_libs.switch_util.c"
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

#line 6449 "backend_libs.switch_util.c"
                  {
#line 6451 "backend_libs.switch_util.c"
                    backend_libs__switch_util__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6453 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6455 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_19));
#line 6457 "backend_libs.switch_util.c"
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
#line 6522 "backend_libs.switch_util.c"
              {
#line 6524 "backend_libs.switch_util.c"
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
#line 6558 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_14_14 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 6560 "backend_libs.switch_util.c"
              {
#line 6562 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6564 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_14_14));
#line 6566 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_11));
#line 6568 "backend_libs.switch_util.c"
              }
#line 6570 "backend_libs.switch_util.c"
              {
#line 6572 "backend_libs.switch_util.c"
                backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_for_Rval_11, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_7_7);
              }
#line 148 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 6577 "backend_libs.switch_util.c"
                {
#line 6579 "backend_libs.switch_util.c"
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

#line 1379 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0(
#line 1379 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1379 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1379 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1379 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 1379 "switch_util.m"
{
#line 1379 "switch_util.m"
  {
#line 1379 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1379 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_15 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 1379 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_16 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 1379 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_15 == backend_libs__switch_util__CastY_16);
#line 1379 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 6681 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1379 "switch_util.m"
    else
#line 1379 "switch_util.m"
      {
#line 1379 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1379 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1379 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1379 "switch_util.m"
        MR_Word backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 3)));
#line 1379 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1379 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1379 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 2)));
#line 1379 "switch_util.m"
        MR_Word backend_libs__switch_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 3)));
#line 1379 "switch_util.m"
        MR_Word backend_libs__switch_util__V_12_12;

#line 1379 "switch_util.m"
        {
#line 1379 "switch_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_12_12, backend_libs__switch_util__V_4_4, backend_libs__switch_util__V_8_8);
        }
#line 6711 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_12_12 == (MR_Integer) 0);
#line 1379 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1379 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1379 "switch_util.m"
          *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_12_12;
#line 1379 "switch_util.m"
        else
#line 1379 "switch_util.m"
          {
#line 1379 "switch_util.m"
            MR_Word backend_libs__switch_util__V_13_13;

#line 1379 "switch_util.m"
            {
#line 1379 "switch_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_13_13, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_9_9);
            }
#line 6731 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_13_13 == (MR_Integer) 0);
#line 1379 "switch_util.m"
            backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1379 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1379 "switch_util.m"
              *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_13_13;
#line 1379 "switch_util.m"
            else
#line 1379 "switch_util.m"
              {
#line 1379 "switch_util.m"
                MR_Word backend_libs__switch_util__V_14_14;

#line 1379 "switch_util.m"
                {
#line 1379 "switch_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[2], &backend_libs__switch_util__V_14_14, ((MR_Box) (backend_libs__switch_util__V_6_6)), ((MR_Box) (backend_libs__switch_util__V_10_10)));
                }
#line 6751 "backend_libs.switch_util.c"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_14_14 == (MR_Integer) 0);
#line 1379 "switch_util.m"
                backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1379 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1379 "switch_util.m"
                  *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_14_14;
#line 1379 "switch_util.m"
                else
#line 1379 "switch_util.m"
                  {
#line 1379 "switch_util.m"
                    backend_libs__switch_util____Compare____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_17, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_7_7, backend_libs__switch_util__V_11_11);
#line 1379 "switch_util.m"
                    return;
                  }
#line 1379 "switch_util.m"
              }
#line 1379 "switch_util.m"
          }
#line 1379 "switch_util.m"
      }
#line 1379 "switch_util.m"
  }
#line 1379 "switch_util.m"
}

#line 1379 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0(
#line 1379 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_13,
#line 1379 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1379 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 1379 "switch_util.m"
{
#line 1379 "switch_util.m"
  {
#line 1379 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1379 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_11 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 1379 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_12 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 1379 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_11 == backend_libs__switch_util__CastY_12);
#line 1379 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1379 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 1379 "switch_util.m"
    else
#line 1379 "switch_util.m"
      {
#line 1379 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_14_14;
#line 1379 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1379 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1379 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1379 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1379 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1379 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1379 "switch_util.m"
        MR_Word backend_libs__switch_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1379 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 3)));

#line 6828 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_7_7);
#line 1379 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1379 "switch_util.m"
          {
#line 6834 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_8_8);
#line 1379 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1379 "switch_util.m"
              {
#line 6840 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_14_14 = (MR_Word) &backend_libs__switch_util_scalar_common_1[2];
#line 6842 "backend_libs.switch_util.c"
                {
#line 6844 "backend_libs.switch_util.c"
                  backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0(backend_libs__switch_util__TypeInfo_14_14, ((MR_Box) (backend_libs__switch_util__V_5_5)), ((MR_Box) (backend_libs__switch_util__V_9_9)));
                }
#line 1379 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 6849 "backend_libs.switch_util.c"
                  {
#line 6851 "backend_libs.switch_util.c"
                    return backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_13, backend_libs__switch_util__V_6_6, backend_libs__switch_util__V_10_10);
                  }
#line 1379 "switch_util.m"
              }
#line 1379 "switch_util.m"
          }
#line 1379 "switch_util.m"
      }
#line 1379 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1379 "switch_util.m"
  }
#line 1379 "switch_util.m"
}

#line 1394 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0(
#line 1394 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 1394 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1394 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1394 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 1394 "switch_util.m"
{
#line 1394 "switch_util.m"
  {
#line 1394 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1394 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_8_8;
#line 1394 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_10_10;
#line 1394 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 1394 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 6893 "backend_libs.switch_util.c"
    {
#line 6895 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6897 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6899 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6901 "backend_libs.switch_util.c"
    }
#line 6903 "backend_libs.switch_util.c"
    {
#line 6905 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6907 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 6909 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6911 "backend_libs.switch_util.c"
    }
#line 1394 "switch_util.m"
    {
#line 1394 "switch_util.m"
      mercury__tree234____Compare____tree234_2_0(backend_libs__switch_util__TypeInfo_8_8, backend_libs__switch_util__TypeInfo_10_10, backend_libs__switch_util__HeadVar__1_1, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_4, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_5);
#line 1394 "switch_util.m"
      return;
    }
#line 1394 "switch_util.m"
  }
#line 1394 "switch_util.m"
}

#line 1394 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0(
#line 1394 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 1394 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1394 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 1394 "switch_util.m"
{
#line 1394 "switch_util.m"
  {
#line 1394 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1394 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_7_7;
#line 1394 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_9_9;
#line 1394 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 1394 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 6949 "backend_libs.switch_util.c"
    {
#line 6951 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6953 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6955 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6957 "backend_libs.switch_util.c"
    }
#line 6959 "backend_libs.switch_util.c"
    {
#line 6961 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6963 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 6965 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6967 "backend_libs.switch_util.c"
    }
#line 1394 "switch_util.m"
    {
#line 1394 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__tree234____Unify____tree234_2_0(backend_libs__switch_util__TypeInfo_7_7, backend_libs__switch_util__TypeInfo_9_9, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_3, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_4);
    }
#line 1394 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1394 "switch_util.m"
  }
#line 1394 "switch_util.m"
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

#line 7005 "backend_libs.switch_util.c"
    {
#line 7007 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7009 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 7011 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 7013 "backend_libs.switch_util.c"
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

#line 7049 "backend_libs.switch_util.c"
    {
#line 7051 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7053 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 7055 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 7057 "backend_libs.switch_util.c"
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

#line 7095 "backend_libs.switch_util.c"
    {
#line 7097 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7099 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1));
#line 7101 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 7103 "backend_libs.switch_util.c"
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

#line 7139 "backend_libs.switch_util.c"
    {
#line 7141 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7143 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1));
#line 7145 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 7147 "backend_libs.switch_util.c"
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

#line 7185 "backend_libs.switch_util.c"
    {
#line 7187 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7189 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1));
#line 7191 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 7193 "backend_libs.switch_util.c"
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

#line 7229 "backend_libs.switch_util.c"
    {
#line 7231 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7233 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1));
#line 7235 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 7237 "backend_libs.switch_util.c"
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
#line 7277 "backend_libs.switch_util.c"
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
#line 7303 "backend_libs.switch_util.c"
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
#line 7323 "backend_libs.switch_util.c"
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

#line 7394 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_6_6);
#line 274 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 274 "switch_util.m"
          {
#line 7400 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeInfo_12_12 = (MR_Word) &backend_libs__switch_util_scalar_common_1[2];
#line 7402 "backend_libs.switch_util.c"
            {
#line 7404 "backend_libs.switch_util.c"
              backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0(backend_libs__switch_util__TypeInfo_12_12, ((MR_Box) (backend_libs__switch_util__V_4_4)), ((MR_Box) (backend_libs__switch_util__V_7_7)));
            }
#line 274 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 7409 "backend_libs.switch_util.c"
              {
#line 7411 "backend_libs.switch_util.c"
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
#line 7451 "backend_libs.switch_util.c"
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
#line 7473 "backend_libs.switch_util.c"
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

#line 7536 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_5_5);
#line 260 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 7540 "backend_libs.switch_util.c"
          {
#line 7542 "backend_libs.switch_util.c"
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
#line 7580 "backend_libs.switch_util.c"
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
#line 7606 "backend_libs.switch_util.c"
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

#line 7675 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_5_5);
#line 289 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 289 "switch_util.m"
          {
#line 7681 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 7683 "backend_libs.switch_util.c"
            {
#line 7685 "backend_libs.switch_util.c"
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
#line 7740 "backend_libs.switch_util.c"
  {
#line 7742 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7745 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7747 "backend_libs.switch_util.c"
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
#line 7793 "backend_libs.switch_util.c"
  {
#line 7795 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7798 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7800 "backend_libs.switch_util.c"
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
#line 7829 "backend_libs.switch_util.c"
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
#line 7841 "backend_libs.switch_util.c"
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
#line 7856 "backend_libs.switch_util.c"
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
#line 7876 "backend_libs.switch_util.c"
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
#line 7896 "backend_libs.switch_util.c"
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
#line 7992 "backend_libs.switch_util.c"
              backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_6_6);
#line 47 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 47 "switch_util.m"
                {
#line 7998 "backend_libs.switch_util.c"
                  backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_7_7);
#line 47 "switch_util.m"
                  if (backend_libs__switch_util__succeeded)
#line 8002 "backend_libs.switch_util.c"
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
#line 8058 "backend_libs.switch_util.c"
  {
#line 8060 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 8063 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 8065 "backend_libs.switch_util.c"
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
#line 8111 "backend_libs.switch_util.c"
  {
#line 8113 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 8116 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 8118 "backend_libs.switch_util.c"
  }
#line 390 "switch_util.m"
}

#line 315 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____case_num_ptags_map_0_0(
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
backend_libs__switch_util____Unify____case_num_ptags_map_0_0(
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
#line 8209 "backend_libs.switch_util.c"
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
#line 8231 "backend_libs.switch_util.c"
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

#line 8301 "backend_libs.switch_util.c"
        {
#line 8303 "backend_libs.switch_util.c"
          backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[1], ((MR_Box) (backend_libs__switch_util__V_3_3)), ((MR_Box) (backend_libs__switch_util__V_5_5)));
        }
#line 137 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 8308 "backend_libs.switch_util.c"
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
#line 8349 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 128 "switch_util.m"
    else
#line 128 "switch_util.m"
      if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 128 "switch_util.m"
        {
#line 128 "switch_util.m"
          MR_Word backend_libs__switch_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));

#line 128 "switch_util.m"
          if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 128 "switch_util.m"
            {
#line 128 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_29_29;
#line 128 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_31_31;
#line 128 "switch_util.m"
              MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));

#line 8371 "backend_libs.switch_util.c"
              {
#line 8373 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8375 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_29_29, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 8377 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_29_29, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_20));
#line 8379 "backend_libs.switch_util.c"
              }
#line 8381 "backend_libs.switch_util.c"
              {
#line 8383 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8385 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 8387 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_31_31, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Key_19));
#line 8389 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_31_31, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_29_29));
#line 8391 "backend_libs.switch_util.c"
              }
#line 128 "switch_util.m"
              {
#line 128 "switch_util.m"
                mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_31_31, backend_libs__switch_util__HeadVar__1_1, (MR_Word) backend_libs__switch_util__V_33_33, (MR_Word) backend_libs__switch_util__V_5_5);
#line 128 "switch_util.m"
                return;
              }
#line 128 "switch_util.m"
            }
#line 128 "switch_util.m"
          else
#line 8404 "backend_libs.switch_util.c"
            *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 1;
#line 128 "switch_util.m"
        }
#line 128 "switch_util.m"
      else
#line 128 "switch_util.m"
        {
#line 128 "switch_util.m"
          MR_Box backend_libs__switch_util__V_34_34 = (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1));
#line 128 "switch_util.m"
          MR_Word backend_libs__switch_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));

#line 128 "switch_util.m"
          if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8419 "backend_libs.switch_util.c"
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
#line 128 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_25_25;

#line 8436 "backend_libs.switch_util.c"
              {
#line 8438 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8440 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1));
#line 8442 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_20));
#line 8444 "backend_libs.switch_util.c"
              }
#line 8446 "backend_libs.switch_util.c"
              {
#line 8448 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8450 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_25_25, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 8452 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_25_25, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Key_19));
#line 8454 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_25_25, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_23_23));
#line 8456 "backend_libs.switch_util.c"
              }
#line 128 "switch_util.m"
              {
#line 128 "switch_util.m"
                mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_25_25, &backend_libs__switch_util__V_16_16, (MR_Word) backend_libs__switch_util__V_35_35, (MR_Word) backend_libs__switch_util__V_14_14);
              }
#line 8463 "backend_libs.switch_util.c"
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
                  mercury__builtin__compare_3_p_0(backend_libs__switch_util__TypeInfo_for_SeveralInfo_21, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_34_34, backend_libs__switch_util__V_15_15);
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
          MR_Word backend_libs__switch_util__TypeCtorInfo_16_16;
#line 128 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeInfo_17_17;
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
#line 8546 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_16_16 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 8548 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_14_14 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 8550 "backend_libs.switch_util.c"
              {
#line 8552 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8554 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_14_14));
#line 8556 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_12));
#line 8558 "backend_libs.switch_util.c"
              }
#line 8560 "backend_libs.switch_util.c"
              {
#line 8562 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8564 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_16_16));
#line 8566 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Key_11));
#line 8568 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_15_15));
#line 8570 "backend_libs.switch_util.c"
              }
#line 8572 "backend_libs.switch_util.c"
              {
#line 8574 "backend_libs.switch_util.c"
                return backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_17_17, (MR_Word) backend_libs__switch_util__V_3_3, (MR_Word) backend_libs__switch_util__V_4_4);
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
          MR_Word backend_libs__switch_util__TypeCtorInfo_19_19;
#line 128 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeInfo_20_20;
#line 128 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeCtorInfo_21_21;
#line 128 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeInfo_22_22;
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
#line 8612 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 8614 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_19_19 = (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1;
#line 8616 "backend_libs.switch_util.c"
              {
#line 8618 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8620 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_19_19));
#line 8622 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_12));
#line 8624 "backend_libs.switch_util.c"
              }
#line 8626 "backend_libs.switch_util.c"
              {
#line 8628 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8630 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_21_21));
#line 8632 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Key_11));
#line 8634 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_20_20));
#line 8636 "backend_libs.switch_util.c"
              }
#line 8638 "backend_libs.switch_util.c"
              {
#line 8640 "backend_libs.switch_util.c"
                backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_22_22, (MR_Word) backend_libs__switch_util__V_5_5, (MR_Word) backend_libs__switch_util__V_7_7);
              }
#line 128 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 8645 "backend_libs.switch_util.c"
                {
#line 8647 "backend_libs.switch_util.c"
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

#line 1412 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0_1(
#line 1412 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1412 "switch_util.m"
{
#line 1412 "switch_util.m"
  {
#line 1412 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1412 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1412 "switch_util.m"
    {
#line 1412 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util__IntroducedFrom__pred__build_ptag_case_rev_map__1412__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 5))));
    }
#line 1412 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1412 "switch_util.m"
  }
#line 1412 "switch_util.m"
}

#line 1397 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0(
#line 1397 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1397 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1397 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1397 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3,
#line 1397 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevMap_4)
#line 1397 "switch_util.m"
{
#line 1401 "switch_util.m"
  while (MR_TRUE)
#line 1401 "switch_util.m"
    {
#line 1401 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1401 "switch_util.m"
      {
#line 1401 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 1401 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1401 "switch_util.m"
          *backend_libs__switch_util__STATE_VARIABLE_RevMap_4 = backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3;
#line 1401 "switch_util.m"
        else
#line 1402 "switch_util.m"
          {
#line 1402 "switch_util.m"
            MR_Word backend_libs__switch_util__Entry_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1402 "switch_util.m"
            MR_Word backend_libs__switch_util__Entries_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1402 "switch_util.m"
            MR_Integer backend_libs__switch_util__Ptag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Entry_9, (MR_Integer) 0)));
#line 1402 "switch_util.m"
            MR_Word backend_libs__switch_util__Case_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Entry_9, (MR_Integer) 1)));
#line 1402 "switch_util.m"
            MR_Word backend_libs__switch_util__CountSecTagLocn_15;
#line 1402 "switch_util.m"
            MR_Integer backend_libs__switch_util__Count_16;
#line 1402 "switch_util.m"
            MR_Word backend_libs__switch_util__V_25_25;
#line 1402 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36;
#line 1404 "switch_util.m"
            MR_Box backend_libs__switch_util__conv0_V_25_25;

#line 1404 "switch_util.m"
            {
#line 1404 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__HeadVar__2_2, backend_libs__switch_util__Ptag_13, &backend_libs__switch_util__conv0_V_25_25);
            }
#line 1404 "switch_util.m"
            backend_libs__switch_util__V_25_25 = ((MR_Word) backend_libs__switch_util__conv0_V_25_25);
#line 1404 "switch_util.m"
            backend_libs__switch_util__CountSecTagLocn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_25_25, (MR_Integer) 0)));
#line 1404 "switch_util.m"
            backend_libs__switch_util__Count_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_25_25, (MR_Integer) 1)));
#line 1420 "switch_util.m"
            if ((((backend_libs__switch_util__CountSecTagLocn_15 == (MR_Integer) 2)) || ((backend_libs__switch_util__CountSecTagLocn_15 == (MR_Integer) 3))))
#line 1423 "switch_util.m"
              {
#line 1423 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_60_60;
#line 1423 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_62_62;
#line 1423 "switch_util.m"
                MR_Word backend_libs__switch_util__NewEntry_41;
#line 1437 "switch_util.m"
                MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_RevMap_36_36;

#line 1436 "switch_util.m"
                {
#line 1436 "switch_util.m"
                  backend_libs__switch_util__NewEntry_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1436 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 0) = ((MR_Box) (backend_libs__switch_util__Count_16));
#line 1436 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 1) = ((MR_Box) (backend_libs__switch_util__Ptag_13));
#line 1436 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1436 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 3) = ((MR_Box) (backend_libs__switch_util__Case_14));
#line 1436 "switch_util.m"
                }
#line 8778 "backend_libs.switch_util.c"
                {
#line 8780 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8782 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_60_60, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8784 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_60_60, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8786 "backend_libs.switch_util.c"
                }
#line 8788 "backend_libs.switch_util.c"
                {
#line 8790 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8792 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_62_62, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 8794 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_62_62, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8796 "backend_libs.switch_util.c"
                }
#line 1437 "switch_util.m"
                {
#line 1437 "switch_util.m"
                  mercury__map__det_insert_4_p_0(backend_libs__switch_util__TypeInfo_60_60, backend_libs__switch_util__TypeInfo_62_62, ((MR_Box) (backend_libs__switch_util__Case_14)), ((MR_Box) (backend_libs__switch_util__NewEntry_41)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, &backend_libs__switch_util__conv1_STATE_VARIABLE_RevMap_36_36);
                }
#line 1437 "switch_util.m"
                backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_RevMap_36_36;
#line 1423 "switch_util.m"
              }
#line 1420 "switch_util.m"
            else
#line 1416 "switch_util.m"
              {
#line 1416 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_46_46;
#line 1416 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_48_48;
#line 1416 "switch_util.m"
                MR_Word backend_libs__switch_util__OldEntry_17;
#line 1409 "switch_util.m"
                MR_Box backend_libs__switch_util__conv2_OldEntry_17;

#line 8820 "backend_libs.switch_util.c"
                {
#line 8822 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8824 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_46_46, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8826 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_46_46, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8828 "backend_libs.switch_util.c"
                }
#line 8830 "backend_libs.switch_util.c"
                {
#line 8832 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8834 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_48_48, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 8836 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_48_48, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8838 "backend_libs.switch_util.c"
                }
#line 1409 "switch_util.m"
                {
#line 1409 "switch_util.m"
                  backend_libs__switch_util__succeeded = mercury__map__search_3_p_0(backend_libs__switch_util__TypeInfo_46_46, backend_libs__switch_util__TypeInfo_48_48, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, ((MR_Box) (backend_libs__switch_util__Case_14)), &backend_libs__switch_util__conv2_OldEntry_17);
                }
#line 1409 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1409 "switch_util.m"
                  {
#line 1409 "switch_util.m"
                    backend_libs__switch_util__OldEntry_17 = ((MR_Word) backend_libs__switch_util__conv2_OldEntry_17);
#line 1409 "switch_util.m"
                    backend_libs__switch_util__succeeded = MR_TRUE;
#line 1409 "switch_util.m"
                  }
#line 1416 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1411 "switch_util.m"
                  {
#line 1411 "switch_util.m"
                    MR_Integer backend_libs__switch_util__OldCount_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 0)));
#line 1411 "switch_util.m"
                    MR_Integer backend_libs__switch_util__OldFirstPtag_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 1)));
#line 1411 "switch_util.m"
                    MR_Word backend_libs__switch_util__OldLaterPtags0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 2)));
#line 1411 "switch_util.m"
                    MR_Word backend_libs__switch_util__OldCase_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 3)));
#line 1411 "switch_util.m"
                    MR_Word backend_libs__switch_util__NewEntry_22;
#line 1411 "switch_util.m"
                    MR_Word backend_libs__switch_util__V_28_28;
#line 1411 "switch_util.m"
                    MR_Integer backend_libs__switch_util__V_32_32;
#line 1411 "switch_util.m"
                    MR_Word backend_libs__switch_util__V_33_33;
#line 1411 "switch_util.m"
                    MR_Word backend_libs__switch_util__V_34_34;
#line 1415 "switch_util.m"
                    MR_Word backend_libs__switch_util__conv3_STATE_VARIABLE_RevMap_36_36;

#line 1412 "switch_util.m"
                    {
#line 1412 "switch_util.m"
                      backend_libs__switch_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1412 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_4[1]));
#line 1412 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 1) = ((MR_Box) (backend_libs__switch_util__build_ptag_case_rev_map_4_p_0_1));
#line 1412 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1412 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 1412 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 4) = ((MR_Box) (backend_libs__switch_util__Case_14));
#line 1412 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 5) = ((MR_Box) (backend_libs__switch_util__OldCase_21));
#line 1412 "switch_util.m"
                    }
#line 1412 "switch_util.m"
                    {
#line 1412 "switch_util.m"
                      mercury__require__expect_4_p_0(backend_libs__switch_util__V_28_28, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.build_ptag_case_rev_map\'/4", (MR_String) "Case != OldCase");
                    }
#line 1413 "switch_util.m"
                    backend_libs__switch_util__V_32_32 = (backend_libs__switch_util__OldCount_18 + backend_libs__switch_util__Count_16);
#line 1414 "switch_util.m"
                    {
#line 1414 "switch_util.m"
                      backend_libs__switch_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1414 "switch_util.m"
                      MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_34_34, 0) = ((MR_Box) (backend_libs__switch_util__Ptag_13));
#line 1414 "switch_util.m"
                      MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1414 "switch_util.m"
                    }
#line 1414 "switch_util.m"
                    {
#line 1414 "switch_util.m"
                      backend_libs__switch_util__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__OldLaterPtags0_20, backend_libs__switch_util__V_34_34);
                    }
#line 1413 "switch_util.m"
                    {
#line 1413 "switch_util.m"
                      backend_libs__switch_util__NewEntry_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1413 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 0) = ((MR_Box) (backend_libs__switch_util__V_32_32));
#line 1413 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 1) = ((MR_Box) (backend_libs__switch_util__OldFirstPtag_19));
#line 1413 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 2) = ((MR_Box) (backend_libs__switch_util__V_33_33));
#line 1413 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 3) = ((MR_Box) (backend_libs__switch_util__OldCase_21));
#line 1413 "switch_util.m"
                    }
#line 1415 "switch_util.m"
                    {
#line 1415 "switch_util.m"
                      mercury__map__det_update_4_p_0(backend_libs__switch_util__TypeInfo_46_46, backend_libs__switch_util__TypeInfo_48_48, ((MR_Box) (backend_libs__switch_util__Case_14)), ((MR_Box) (backend_libs__switch_util__NewEntry_22)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, &backend_libs__switch_util__conv3_STATE_VARIABLE_RevMap_36_36);
                    }
#line 1415 "switch_util.m"
                    backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36 = (MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_RevMap_36_36;
#line 1411 "switch_util.m"
                  }
#line 1416 "switch_util.m"
                else
#line 1417 "switch_util.m"
                  {
#line 1417 "switch_util.m"
                    MR_Word backend_libs__switch_util__TypeInfo_56_56;
#line 1417 "switch_util.m"
                    MR_Word backend_libs__switch_util__TypeInfo_58_58;
#line 1417 "switch_util.m"
                    MR_Word backend_libs__switch_util__NewEntry_40;
#line 1418 "switch_util.m"
                    MR_Word backend_libs__switch_util__conv4_STATE_VARIABLE_RevMap_36_36;

#line 1417 "switch_util.m"
                    {
#line 1417 "switch_util.m"
                      backend_libs__switch_util__NewEntry_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1417 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 0) = ((MR_Box) (backend_libs__switch_util__Count_16));
#line 1417 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 1) = ((MR_Box) (backend_libs__switch_util__Ptag_13));
#line 1417 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1417 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 3) = ((MR_Box) (backend_libs__switch_util__Case_14));
#line 1417 "switch_util.m"
                    }
#line 8970 "backend_libs.switch_util.c"
                    {
#line 8972 "backend_libs.switch_util.c"
                      backend_libs__switch_util__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8974 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_56_56, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8976 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_56_56, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8978 "backend_libs.switch_util.c"
                    }
#line 8980 "backend_libs.switch_util.c"
                    {
#line 8982 "backend_libs.switch_util.c"
                      backend_libs__switch_util__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8984 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_58_58, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 8986 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_58_58, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8988 "backend_libs.switch_util.c"
                    }
#line 1418 "switch_util.m"
                    {
#line 1418 "switch_util.m"
                      mercury__map__det_insert_4_p_0(backend_libs__switch_util__TypeInfo_56_56, backend_libs__switch_util__TypeInfo_58_58, ((MR_Box) (backend_libs__switch_util__Case_14)), ((MR_Box) (backend_libs__switch_util__NewEntry_40)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, &backend_libs__switch_util__conv4_STATE_VARIABLE_RevMap_36_36);
                    }
#line 1418 "switch_util.m"
                    backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36 = (MR_Word) backend_libs__switch_util__conv4_STATE_VARIABLE_RevMap_36_36;
#line 1417 "switch_util.m"
                  }
#line 1416 "switch_util.m"
              }
#line 1439 "switch_util.m"
            /* direct tailcall eliminated */
#line 1439 "switch_util.m"
            {
#line 1439 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Entries_10;
#line 1439 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_0__tmp_copy_3 = backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36;

#line 1439 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3 = backend_libs__switch_util__STATE_VARIABLE_RevMap_0__tmp_copy_3;
#line 1439 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 1439 "switch_util.m"
            }
#line 1439 "switch_util.m"
            continue;
#line 1402 "switch_util.m"
          }
#line 1401 "switch_util.m"
      }
#line 1401 "switch_util.m"
      break;
#line 1401 "switch_util.m"
    }
#line 1397 "switch_util.m"
}

#line 1372 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__interpret_rev_map_entry_2_p_0(
#line 1372 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_9,
#line 1372 "switch_util.m"
  MR_Word backend_libs__switch_util__RevEntry_3,
#line 1372 "switch_util.m"
  MR_Word * backend_libs__switch_util__GroupEntry_4)
#line 1372 "switch_util.m"
{
#line 1375 "switch_util.m"
  {
#line 1375 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1375 "switch_util.m"
    MR_Integer backend_libs__switch_util__MainPtag_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 1)));
#line 1375 "switch_util.m"
    MR_Word backend_libs__switch_util__OtherPtags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 2)));
#line 1375 "switch_util.m"
    MR_Word backend_libs__switch_util__Case_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 3)));
#line 1376 "switch_util.m"
    MR_Integer backend_libs__switch_util___Count_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 0)));

#line 1377 "switch_util.m"
    {
#line 1377 "switch_util.m"
      MR_Word base;
#line 1377 "switch_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1377 "switch_util.m"
      *backend_libs__switch_util__GroupEntry_4 = base;
#line 1377 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__switch_util__MainPtag_6));
#line 1377 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__switch_util__OtherPtags_7));
#line 1377 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__switch_util__Case_8));
#line 1377 "switch_util.m"
    }
#line 1375 "switch_util.m"
  }
#line 1372 "switch_util.m"
}

#line 1307 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_2(
#line 1307 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1307 "switch_util.m"
{
#line 1307 "switch_util.m"
  {
#line 1307 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1307 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1307 "switch_util.m"
    {
#line 1307 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1307__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))));
    }
#line 1307 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1307 "switch_util.m"
  }
#line 1307 "switch_util.m"
}

#line 1321 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_1(
#line 1321 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1321 "switch_util.m"
{
#line 1321 "switch_util.m"
  {
#line 1321 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1321 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1321 "switch_util.m"
    {
#line 1321 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1321__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))));
    }
#line 1321 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1321 "switch_util.m"
  }
#line 1321 "switch_util.m"
}

#line 1277 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0(
#line 1277 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_107,
#line 1277 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_8,
#line 1277 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_9,
#line 1277 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_10,
#line 1277 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_52,
#line 1277 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_53,
#line 1277 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54,
#line 1277 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55)
#line 1277 "switch_util.m"
{
#line 1282 "switch_util.m"
  {
#line 1282 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1282 "switch_util.m"
    MR_Word backend_libs__switch_util__Tag_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_10, (MR_Integer) 1)));
#line 1282 "switch_util.m"
    MR_Integer backend_libs__switch_util__Primary_15;
#line 1283 "switch_util.m"
    MR_Word backend_libs__switch_util___ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_10, (MR_Integer) 0)));
#line 1354 "switch_util.m"
    MR_Word backend_libs__switch_util__Ptags0_50;
#line 1351 "switch_util.m"
    MR_Box backend_libs__switch_util__conv12_Ptags0_50;

#line 1303 "switch_util.m"
    if ((backend_libs__switch_util__Tag_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1295 "switch_util.m"
      {
#line 1296 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_110_144;
#line 1296 "switch_util.m"
        MR_Word backend_libs__switch_util___Group_140;
#line 1296 "switch_util.m"
        MR_Box backend_libs__switch_util__conv0__Group_140;

#line 1287 "switch_util.m"
        backend_libs__switch_util__Primary_15 = (MR_Integer) 0;
#line 9175 "backend_libs.switch_util.c"
        {
#line 9177 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_110_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9179 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_144, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9181 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_144, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9183 "backend_libs.switch_util.c"
        }
#line 1296 "switch_util.m"
        {
#line 1296 "switch_util.m"
          backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_110_144, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv0__Group_140);
        }
#line 1296 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1296 "switch_util.m"
          {
#line 1296 "switch_util.m"
            backend_libs__switch_util___Group_140 = ((MR_Word) backend_libs__switch_util__conv0__Group_140);
#line 1296 "switch_util.m"
            backend_libs__switch_util__succeeded = MR_TRUE;
#line 1296 "switch_util.m"
          }
#line 1298 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1297 "switch_util.m"
          {
#line 1297 "switch_util.m"
            {
#line 1297 "switch_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "unshared tag is shared");
#line 1297 "switch_util.m"
              return;
            }
#line 1297 "switch_util.m"
          }
#line 1298 "switch_util.m"
        else
#line 1299 "switch_util.m"
          {
#line 1299 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_113_153;
#line 1299 "switch_util.m"
            MR_Word backend_libs__switch_util__StagGoalMap_148;
#line 1299 "switch_util.m"
            MR_Word backend_libs__switch_util__V_150_150;
#line 1300 "switch_util.m"
            MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55;

#line 1299 "switch_util.m"
            {
#line 1299 "switch_util.m"
              backend_libs__switch_util__StagGoalMap_148 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) ((MR_Integer) -1)), backend_libs__switch_util__CaseRep_9);
            }
#line 1300 "switch_util.m"
            {
#line 1300 "switch_util.m"
              backend_libs__switch_util__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1300 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_150_150, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1300 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_150_150, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_148));
#line 1300 "switch_util.m"
            }
#line 9241 "backend_libs.switch_util.c"
            {
#line 9243 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_113_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9245 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_153, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9247 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_153, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9249 "backend_libs.switch_util.c"
            }
#line 1300 "switch_util.m"
            {
#line 1300 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_113_153, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_150_150)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55);
            }
#line 1300 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55;
#line 1299 "switch_util.m"
          }
#line 1295 "switch_util.m"
      }
#line 1303 "switch_util.m"
    else
#line 1303 "switch_util.m"
      if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1295 "switch_util.m"
        {
#line 1296 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeInfo_110_110;
#line 1296 "switch_util.m"
          MR_Word backend_libs__switch_util___Group_17;
#line 1296 "switch_util.m"
          MR_Box backend_libs__switch_util__conv2__Group_17;

#line 1293 "switch_util.m"
          backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 9277 "backend_libs.switch_util.c"
          {
#line 9279 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9281 "backend_libs.switch_util.c"
            MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_110, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9283 "backend_libs.switch_util.c"
            MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_110, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9285 "backend_libs.switch_util.c"
          }
#line 1296 "switch_util.m"
          {
#line 1296 "switch_util.m"
            backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_110_110, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv2__Group_17);
          }
#line 1296 "switch_util.m"
          if (backend_libs__switch_util__succeeded)
#line 1296 "switch_util.m"
            {
#line 1296 "switch_util.m"
              backend_libs__switch_util___Group_17 = ((MR_Word) backend_libs__switch_util__conv2__Group_17);
#line 1296 "switch_util.m"
              backend_libs__switch_util__succeeded = MR_TRUE;
#line 1296 "switch_util.m"
            }
#line 1298 "switch_util.m"
          if (backend_libs__switch_util__succeeded)
#line 1297 "switch_util.m"
            {
#line 1297 "switch_util.m"
              {
#line 1297 "switch_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "unshared tag is shared");
#line 1297 "switch_util.m"
                return;
              }
#line 1297 "switch_util.m"
            }
#line 1298 "switch_util.m"
          else
#line 1299 "switch_util.m"
            {
#line 1299 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_113_113;
#line 1299 "switch_util.m"
              MR_Word backend_libs__switch_util__StagGoalMap_18;
#line 1299 "switch_util.m"
              MR_Word backend_libs__switch_util__V_85_85;
#line 1300 "switch_util.m"
              MR_Word backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_55;

#line 1299 "switch_util.m"
              {
#line 1299 "switch_util.m"
                backend_libs__switch_util__StagGoalMap_18 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) ((MR_Integer) -1)), backend_libs__switch_util__CaseRep_9);
              }
#line 1300 "switch_util.m"
              {
#line 1300 "switch_util.m"
                backend_libs__switch_util__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1300 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_85_85, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1300 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_85_85, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_18));
#line 1300 "switch_util.m"
              }
#line 9343 "backend_libs.switch_util.c"
              {
#line 9345 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9347 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_113, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9349 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_113, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9351 "backend_libs.switch_util.c"
              }
#line 1300 "switch_util.m"
              {
#line 1300 "switch_util.m"
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_113_113, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_85_85)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_55);
              }
#line 1300 "switch_util.m"
              *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_55;
#line 1299 "switch_util.m"
            }
#line 1295 "switch_util.m"
        }
#line 1303 "switch_util.m"
      else
#line 1303 "switch_util.m"
        if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1318 "switch_util.m"
          {
#line 1318 "switch_util.m"
            MR_Integer backend_libs__switch_util__Secondary_102;
#line 1326 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_126_126;
#line 1326 "switch_util.m"
            MR_Word backend_libs__switch_util__Group_98;
#line 1319 "switch_util.m"
            MR_Box backend_libs__switch_util__conv4_Group_98;

#line 1318 "switch_util.m"
            backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 1318 "switch_util.m"
            backend_libs__switch_util__Secondary_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 2)));
#line 9383 "backend_libs.switch_util.c"
            {
#line 9385 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9387 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_126_126, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9389 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_126_126, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9391 "backend_libs.switch_util.c"
            }
#line 1319 "switch_util.m"
            {
#line 1319 "switch_util.m"
              backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_126_126, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv4_Group_98);
            }
#line 1319 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1319 "switch_util.m"
              {
#line 1319 "switch_util.m"
                backend_libs__switch_util__Group_98 = ((MR_Word) backend_libs__switch_util__conv4_Group_98);
#line 1319 "switch_util.m"
                backend_libs__switch_util__succeeded = MR_TRUE;
#line 1319 "switch_util.m"
              }
#line 1326 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1320 "switch_util.m"
              {
#line 1320 "switch_util.m"
                MR_Word backend_libs__switch_util__V_59_59;
#line 1320 "switch_util.m"
                MR_Word backend_libs__switch_util__V_64_64;
#line 1320 "switch_util.m"
                MR_Word backend_libs__switch_util__StagGoalMap_93;
#line 1320 "switch_util.m"
                MR_Word backend_libs__switch_util__StagLoc_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_98, (MR_Integer) 0)));
#line 1320 "switch_util.m"
                MR_Word backend_libs__switch_util__StagGoalMap0_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_98, (MR_Integer) 1)));
#line 1324 "switch_util.m"
                MR_Word backend_libs__switch_util__conv5_STATE_VARIABLE_PtagCaseMap_55;

#line 1321 "switch_util.m"
                {
#line 1321 "switch_util.m"
                  backend_libs__switch_util__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1321 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_5[1]));
#line 1321 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 1) = ((MR_Box) (backend_libs__switch_util__group_case_by_ptag_7_p_0_1));
#line 1321 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1321 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1321 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 4) = ((MR_Box) (backend_libs__switch_util__StagLoc_94));
#line 1321 "switch_util.m"
                }
#line 1321 "switch_util.m"
                {
#line 1321 "switch_util.m"
                  mercury__require__expect_4_p_0(backend_libs__switch_util__V_59_59, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "local tag is shared with non-local");
                }
#line 1323 "switch_util.m"
                {
#line 1323 "switch_util.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_107, backend_libs__switch_util__Secondary_102, backend_libs__switch_util__CaseRep_9, backend_libs__switch_util__StagGoalMap0_95, &backend_libs__switch_util__StagGoalMap_93);
                }
#line 1324 "switch_util.m"
                {
#line 1324 "switch_util.m"
                  backend_libs__switch_util__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1324 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_64_64, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1324 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_64_64, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_93));
#line 1324 "switch_util.m"
                }
#line 1324 "switch_util.m"
                {
#line 1324 "switch_util.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_126_126, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_64_64)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv5_STATE_VARIABLE_PtagCaseMap_55);
                }
#line 1324 "switch_util.m"
                *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv5_STATE_VARIABLE_PtagCaseMap_55;
#line 1320 "switch_util.m"
              }
#line 1326 "switch_util.m"
            else
#line 1327 "switch_util.m"
              {
#line 1327 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_133_133;
#line 1327 "switch_util.m"
                MR_Word backend_libs__switch_util__V_67_67;
#line 1327 "switch_util.m"
                MR_Word backend_libs__switch_util__StagGoalMap_96;
#line 1328 "switch_util.m"
                MR_Word backend_libs__switch_util__conv6_STATE_VARIABLE_PtagCaseMap_55;

#line 1327 "switch_util.m"
                {
#line 1327 "switch_util.m"
                  backend_libs__switch_util__StagGoalMap_96 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) (backend_libs__switch_util__Secondary_102)), backend_libs__switch_util__CaseRep_9);
                }
#line 1328 "switch_util.m"
                {
#line 1328 "switch_util.m"
                  backend_libs__switch_util__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1328 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_67_67, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1328 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_67_67, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_96));
#line 1328 "switch_util.m"
                }
#line 9498 "backend_libs.switch_util.c"
                {
#line 9500 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9502 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_133_133, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9504 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_133_133, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9506 "backend_libs.switch_util.c"
                }
#line 1328 "switch_util.m"
                {
#line 1328 "switch_util.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_133_133, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_67_67)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv6_STATE_VARIABLE_PtagCaseMap_55);
                }
#line 1328 "switch_util.m"
                *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv6_STATE_VARIABLE_PtagCaseMap_55;
#line 1327 "switch_util.m"
              }
#line 1318 "switch_util.m"
          }
#line 1303 "switch_util.m"
        else
#line 1303 "switch_util.m"
          if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1304 "switch_util.m"
            {
#line 1304 "switch_util.m"
              MR_Integer backend_libs__switch_util__Secondary_19;
#line 1312 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_116_116;
#line 1312 "switch_util.m"
              MR_Word backend_libs__switch_util__Group_20;
#line 1305 "switch_util.m"
              MR_Box backend_libs__switch_util__conv7_Group_20;

#line 1304 "switch_util.m"
              backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 1304 "switch_util.m"
              backend_libs__switch_util__Secondary_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 2)));
#line 9538 "backend_libs.switch_util.c"
              {
#line 9540 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9542 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_116_116, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9544 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_116_116, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9546 "backend_libs.switch_util.c"
              }
#line 1305 "switch_util.m"
              {
#line 1305 "switch_util.m"
                backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_116_116, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv7_Group_20);
              }
#line 1305 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 1305 "switch_util.m"
                {
#line 1305 "switch_util.m"
                  backend_libs__switch_util__Group_20 = ((MR_Word) backend_libs__switch_util__conv7_Group_20);
#line 1305 "switch_util.m"
                  backend_libs__switch_util__succeeded = MR_TRUE;
#line 1305 "switch_util.m"
                }
#line 1312 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 1306 "switch_util.m"
                {
#line 1306 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagLoc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_20, (MR_Integer) 0)));
#line 1306 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagGoalMap0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_20, (MR_Integer) 1)));
#line 1306 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_70_70;
#line 1306 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_75_75;
#line 1306 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagGoalMap_89;
#line 1310 "switch_util.m"
                  MR_Word backend_libs__switch_util__conv8_STATE_VARIABLE_PtagCaseMap_55;

#line 1307 "switch_util.m"
                  {
#line 1307 "switch_util.m"
                    backend_libs__switch_util__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1307 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_5[1]));
#line 1307 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 1) = ((MR_Box) (backend_libs__switch_util__group_case_by_ptag_7_p_0_2));
#line 1307 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1307 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 3) = ((MR_Box) (backend_libs__switch_util__StagLoc_21));
#line 1307 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 4) = ((MR_Box) ((MR_Integer) 3));
#line 1307 "switch_util.m"
                  }
#line 1307 "switch_util.m"
                  {
#line 1307 "switch_util.m"
                    mercury__require__expect_4_p_0(backend_libs__switch_util__V_70_70, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "remote tag is shared with non-remote");
                  }
#line 1309 "switch_util.m"
                  {
#line 1309 "switch_util.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_107, backend_libs__switch_util__Secondary_19, backend_libs__switch_util__CaseRep_9, backend_libs__switch_util__StagGoalMap0_22, &backend_libs__switch_util__StagGoalMap_89);
                  }
#line 1310 "switch_util.m"
                  {
#line 1310 "switch_util.m"
                    backend_libs__switch_util__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1310 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1310 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_89));
#line 1310 "switch_util.m"
                  }
#line 1310 "switch_util.m"
                  {
#line 1310 "switch_util.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_116_116, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_75_75)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv8_STATE_VARIABLE_PtagCaseMap_55);
                  }
#line 1310 "switch_util.m"
                  *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv8_STATE_VARIABLE_PtagCaseMap_55;
#line 1306 "switch_util.m"
                }
#line 1312 "switch_util.m"
              else
#line 1313 "switch_util.m"
                {
#line 1313 "switch_util.m"
                  MR_Word backend_libs__switch_util__TypeInfo_123_123;
#line 1313 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_78_78;
#line 1313 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagGoalMap_90;
#line 1314 "switch_util.m"
                  MR_Word backend_libs__switch_util__conv9_STATE_VARIABLE_PtagCaseMap_55;

#line 1313 "switch_util.m"
                  {
#line 1313 "switch_util.m"
                    backend_libs__switch_util__StagGoalMap_90 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) (backend_libs__switch_util__Secondary_19)), backend_libs__switch_util__CaseRep_9);
                  }
#line 1314 "switch_util.m"
                  {
#line 1314 "switch_util.m"
                    backend_libs__switch_util__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1314 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_78_78, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1314 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_78_78, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_90));
#line 1314 "switch_util.m"
                  }
#line 9653 "backend_libs.switch_util.c"
                  {
#line 9655 "backend_libs.switch_util.c"
                    backend_libs__switch_util__TypeInfo_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9657 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_123_123, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9659 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_123_123, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9661 "backend_libs.switch_util.c"
                  }
#line 1314 "switch_util.m"
                  {
#line 1314 "switch_util.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_123_123, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_78_78)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv9_STATE_VARIABLE_PtagCaseMap_55);
                  }
#line 1314 "switch_util.m"
                  *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv9_STATE_VARIABLE_PtagCaseMap_55;
#line 1313 "switch_util.m"
                }
#line 1304 "switch_util.m"
            }
#line 1303 "switch_util.m"
          else
#line 1303 "switch_util.m"
            if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1295 "switch_util.m"
              {
#line 1296 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_110_185;
#line 1296 "switch_util.m"
                MR_Word backend_libs__switch_util___Group_181;
#line 1296 "switch_util.m"
                MR_Box backend_libs__switch_util__conv10__Group_181;

#line 1290 "switch_util.m"
                backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 9689 "backend_libs.switch_util.c"
                {
#line 9691 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_110_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9693 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_185, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9695 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_185, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9697 "backend_libs.switch_util.c"
                }
#line 1296 "switch_util.m"
                {
#line 1296 "switch_util.m"
                  backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_110_185, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv10__Group_181);
                }
#line 1296 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1296 "switch_util.m"
                  {
#line 1296 "switch_util.m"
                    backend_libs__switch_util___Group_181 = ((MR_Word) backend_libs__switch_util__conv10__Group_181);
#line 1296 "switch_util.m"
                    backend_libs__switch_util__succeeded = MR_TRUE;
#line 1296 "switch_util.m"
                  }
#line 1298 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1297 "switch_util.m"
                  {
#line 1297 "switch_util.m"
                    {
#line 1297 "switch_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "unshared tag is shared");
#line 1297 "switch_util.m"
                      return;
                    }
#line 1297 "switch_util.m"
                  }
#line 1298 "switch_util.m"
                else
#line 1299 "switch_util.m"
                  {
#line 1299 "switch_util.m"
                    MR_Word backend_libs__switch_util__TypeInfo_113_194;
#line 1299 "switch_util.m"
                    MR_Word backend_libs__switch_util__StagGoalMap_189;
#line 1299 "switch_util.m"
                    MR_Word backend_libs__switch_util__V_191_191;
#line 1300 "switch_util.m"
                    MR_Word backend_libs__switch_util__conv11_STATE_VARIABLE_PtagCaseMap_55;

#line 1299 "switch_util.m"
                    {
#line 1299 "switch_util.m"
                      backend_libs__switch_util__StagGoalMap_189 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) ((MR_Integer) -1)), backend_libs__switch_util__CaseRep_9);
                    }
#line 1300 "switch_util.m"
                    {
#line 1300 "switch_util.m"
                      backend_libs__switch_util__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1300 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_191_191, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1300 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_191_191, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_189));
#line 1300 "switch_util.m"
                    }
#line 9755 "backend_libs.switch_util.c"
                    {
#line 9757 "backend_libs.switch_util.c"
                      backend_libs__switch_util__TypeInfo_113_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9759 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_194, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9761 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_194, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9763 "backend_libs.switch_util.c"
                    }
#line 1300 "switch_util.m"
                    {
#line 1300 "switch_util.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_113_194, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_191_191)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv11_STATE_VARIABLE_PtagCaseMap_55);
                    }
#line 1300 "switch_util.m"
                    *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv11_STATE_VARIABLE_PtagCaseMap_55;
#line 1299 "switch_util.m"
                  }
#line 1295 "switch_util.m"
              }
#line 1303 "switch_util.m"
            else
#line 1348 "switch_util.m"
              {
#line 1349 "switch_util.m"
                {
#line 1349 "switch_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "non-du tag");
#line 1349 "switch_util.m"
                  return;
                }
#line 1348 "switch_util.m"
              }
#line 1351 "switch_util.m"
    {
#line 1351 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[0], backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_52, backend_libs__switch_util__CaseNum_8, &backend_libs__switch_util__conv12_Ptags0_50);
    }
#line 1351 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1351 "switch_util.m"
      {
#line 1351 "switch_util.m"
        backend_libs__switch_util__Ptags0_50 = ((MR_Word) backend_libs__switch_util__conv12_Ptags0_50);
#line 1351 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 1351 "switch_util.m"
      }
#line 1354 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1352 "switch_util.m"
      {
#line 1352 "switch_util.m"
        MR_Word backend_libs__switch_util__Ptags_51;

#line 1352 "switch_util.m"
        {
#line 1352 "switch_util.m"
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (backend_libs__switch_util__Primary_15)), backend_libs__switch_util__Ptags0_50, &backend_libs__switch_util__Ptags_51);
        }
#line 1353 "switch_util.m"
        {
#line 1353 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[0], backend_libs__switch_util__CaseNum_8, ((MR_Box) (backend_libs__switch_util__Ptags_51)), backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_52, backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_53);
#line 1353 "switch_util.m"
          return;
        }
#line 1352 "switch_util.m"
      }
#line 1354 "switch_util.m"
    else
#line 1355 "switch_util.m"
      {
#line 1355 "switch_util.m"
        MR_Word backend_libs__switch_util__Ptags_106;

#line 1355 "switch_util.m"
        {
#line 1355 "switch_util.m"
          backend_libs__switch_util__Ptags_106 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (backend_libs__switch_util__Primary_15)));
        }
#line 1356 "switch_util.m"
        {
#line 1356 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[0], backend_libs__switch_util__CaseNum_8, ((MR_Box) (backend_libs__switch_util__Ptags_106)), backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_52, backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_53);
#line 1356 "switch_util.m"
          return;
        }
#line 1355 "switch_util.m"
      }
#line 1282 "switch_util.m"
  }
#line 1277 "switch_util.m"
}

#line 1164 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__get_ptag_counts_loop_5_p_0(
#line 1164 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1164 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2,
#line 1164 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_3,
#line 1164 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4,
#line 1164 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_5)
#line 1164 "switch_util.m"
{
#line 1167 "switch_util.m"
  while (MR_TRUE)
#line 1167 "switch_util.m"
    {
#line 1167 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1167 "switch_util.m"
      {
#line 1167 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 1167 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1167 "switch_util.m"
          {
#line 1167 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_5 = backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4;
#line 1167 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_3 = backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2;
#line 1167 "switch_util.m"
          }
#line 1167 "switch_util.m"
        else
#line 1168 "switch_util.m"
          {
#line 1168 "switch_util.m"
            MR_Word backend_libs__switch_util__Tag_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1168 "switch_util.m"
            MR_Word backend_libs__switch_util__Tags_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1168 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78;
#line 1168 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83;

#line 1187 "switch_util.m"
            if ((backend_libs__switch_util__Tag_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1180 "switch_util.m"
              {
#line 1182 "switch_util.m"
                MR_Word backend_libs__switch_util__V_117_117;
#line 1182 "switch_util.m"
                MR_Box backend_libs__switch_util__conv0_V_117_117;

#line 1181 "switch_util.m"
                {
#line 1181 "switch_util.m"
                  mercury__int__max_3_p_0((MR_Integer) 0, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                }
#line 1182 "switch_util.m"
                {
#line 1182 "switch_util.m"
                  backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, (MR_Integer) 0, &backend_libs__switch_util__conv0_V_117_117);
                }
#line 1182 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1182 "switch_util.m"
                  {
#line 1182 "switch_util.m"
                    backend_libs__switch_util__V_117_117 = ((MR_Word) backend_libs__switch_util__conv0_V_117_117);
#line 1182 "switch_util.m"
                    backend_libs__switch_util__succeeded = MR_TRUE;
#line 1182 "switch_util.m"
                  }
#line 1184 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1183 "switch_util.m"
                  {
#line 1183 "switch_util.m"
                    {
#line 1183 "switch_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "unshared tag is shared");
#line 1183 "switch_util.m"
                      return;
                    }
#line 1183 "switch_util.m"
                  }
#line 1184 "switch_util.m"
                else
#line 1185 "switch_util.m"
                  {
#line 1185 "switch_util.m"
                    {
#line 1185 "switch_util.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], (MR_Integer) 0, ((MR_Box) (&backend_libs__switch_util_scalar_common_1[3])), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                    }
#line 1185 "switch_util.m"
                  }
#line 1180 "switch_util.m"
              }
#line 1187 "switch_util.m"
            else
#line 1187 "switch_util.m"
              if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1180 "switch_util.m"
                {
#line 1180 "switch_util.m"
                  MR_Integer backend_libs__switch_util__Primary_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1182 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_18_18;
#line 1182 "switch_util.m"
                  MR_Box backend_libs__switch_util__conv1_V_18_18;

#line 1181 "switch_util.m"
                  {
#line 1181 "switch_util.m"
                    mercury__int__max_3_p_0(backend_libs__switch_util__Primary_16, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                  }
#line 1182 "switch_util.m"
                  {
#line 1182 "switch_util.m"
                    backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_16, &backend_libs__switch_util__conv1_V_18_18);
                  }
#line 1182 "switch_util.m"
                  if (backend_libs__switch_util__succeeded)
#line 1182 "switch_util.m"
                    {
#line 1182 "switch_util.m"
                      backend_libs__switch_util__V_18_18 = ((MR_Word) backend_libs__switch_util__conv1_V_18_18);
#line 1182 "switch_util.m"
                      backend_libs__switch_util__succeeded = MR_TRUE;
#line 1182 "switch_util.m"
                    }
#line 1184 "switch_util.m"
                  if (backend_libs__switch_util__succeeded)
#line 1183 "switch_util.m"
                    {
#line 1183 "switch_util.m"
                      {
#line 1183 "switch_util.m"
                        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "unshared tag is shared");
#line 1183 "switch_util.m"
                        return;
                      }
#line 1183 "switch_util.m"
                    }
#line 1184 "switch_util.m"
                  else
#line 1185 "switch_util.m"
                    {
#line 1185 "switch_util.m"
                      {
#line 1185 "switch_util.m"
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_16, ((MR_Box) (&backend_libs__switch_util_scalar_common_1[4])), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                      }
#line 1185 "switch_util.m"
                    }
#line 1180 "switch_util.m"
                }
#line 1187 "switch_util.m"
              else
#line 1187 "switch_util.m"
                if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1208 "switch_util.m"
                  {
#line 1208 "switch_util.m"
                    MR_Integer backend_libs__switch_util__Primary_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1208 "switch_util.m"
                    MR_Integer backend_libs__switch_util__Secondary_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 2)));
#line 1224 "switch_util.m"
                    MR_Word backend_libs__switch_util__Target_91;
#line 1210 "switch_util.m"
                    MR_Box backend_libs__switch_util__conv2_Target_91;

#line 1209 "switch_util.m"
                    {
#line 1209 "switch_util.m"
                      mercury__int__max_3_p_0(backend_libs__switch_util__Primary_95, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                    }
#line 1210 "switch_util.m"
                    {
#line 1210 "switch_util.m"
                      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_95, &backend_libs__switch_util__conv2_Target_91);
                    }
#line 1210 "switch_util.m"
                    if (backend_libs__switch_util__succeeded)
#line 1210 "switch_util.m"
                      {
#line 1210 "switch_util.m"
                        backend_libs__switch_util__Target_91 = ((MR_Word) backend_libs__switch_util__conv2_Target_91);
#line 1210 "switch_util.m"
                        backend_libs__switch_util__succeeded = MR_TRUE;
#line 1210 "switch_util.m"
                      }
#line 1224 "switch_util.m"
                    if (backend_libs__switch_util__succeeded)
#line 1211 "switch_util.m"
                      {
#line 1211 "switch_util.m"
                        MR_Word backend_libs__switch_util__V_62_62;
#line 1211 "switch_util.m"
                        MR_Word backend_libs__switch_util__TagType_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_91, (MR_Integer) 0)));
#line 1211 "switch_util.m"
                        MR_Integer backend_libs__switch_util__MaxSoFar_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_91, (MR_Integer) 1)));
#line 1211 "switch_util.m"
                        MR_Integer backend_libs__switch_util__Max_90;

#line 1214 "switch_util.m"
                        if ((backend_libs__switch_util__TagType_88 == (MR_Integer) 2))
#line 1213 "switch_util.m"
                          {
#line 1213 "switch_util.m"
                          }
#line 1214 "switch_util.m"
                        else
#line 1218 "switch_util.m"
                          {
#line 1219 "switch_util.m"
                            {
#line 1219 "switch_util.m"
                              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "local tag is shared with non-local");
#line 1219 "switch_util.m"
                              return;
                            }
#line 1218 "switch_util.m"
                          }
#line 1222 "switch_util.m"
                        {
#line 1222 "switch_util.m"
                          mercury__int__max_3_p_0(backend_libs__switch_util__Secondary_96, backend_libs__switch_util__MaxSoFar_89, &backend_libs__switch_util__Max_90);
                        }
#line 1223 "switch_util.m"
                        {
#line 1223 "switch_util.m"
                          backend_libs__switch_util__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1223 "switch_util.m"
                          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_62_62, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1223 "switch_util.m"
                          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_62_62, 1) = ((MR_Box) (backend_libs__switch_util__Max_90));
#line 1223 "switch_util.m"
                        }
#line 1223 "switch_util.m"
                        {
#line 1223 "switch_util.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_95, ((MR_Box) (backend_libs__switch_util__V_62_62)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                        }
#line 1211 "switch_util.m"
                      }
#line 1224 "switch_util.m"
                    else
#line 1225 "switch_util.m"
                      {
#line 1225 "switch_util.m"
                        MR_Word backend_libs__switch_util__V_65_65;

#line 1225 "switch_util.m"
                        {
#line 1225 "switch_util.m"
                          backend_libs__switch_util__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1225 "switch_util.m"
                          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_65_65, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1225 "switch_util.m"
                          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_65_65, 1) = ((MR_Box) (backend_libs__switch_util__Secondary_96));
#line 1225 "switch_util.m"
                        }
#line 1225 "switch_util.m"
                        {
#line 1225 "switch_util.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_95, ((MR_Box) (backend_libs__switch_util__V_65_65)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                        }
#line 1225 "switch_util.m"
                      }
#line 1208 "switch_util.m"
                  }
#line 1187 "switch_util.m"
                else
#line 1187 "switch_util.m"
                  if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1188 "switch_util.m"
                    {
#line 1188 "switch_util.m"
                      MR_Integer backend_libs__switch_util__Secondary_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 2)));
#line 1188 "switch_util.m"
                      MR_Integer backend_libs__switch_util__Primary_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1204 "switch_util.m"
                      MR_Word backend_libs__switch_util__Target_20;
#line 1190 "switch_util.m"
                      MR_Box backend_libs__switch_util__conv3_Target_20;

#line 1189 "switch_util.m"
                      {
#line 1189 "switch_util.m"
                        mercury__int__max_3_p_0(backend_libs__switch_util__Primary_87, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                      }
#line 1190 "switch_util.m"
                      {
#line 1190 "switch_util.m"
                        backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_87, &backend_libs__switch_util__conv3_Target_20);
                      }
#line 1190 "switch_util.m"
                      if (backend_libs__switch_util__succeeded)
#line 1190 "switch_util.m"
                        {
#line 1190 "switch_util.m"
                          backend_libs__switch_util__Target_20 = ((MR_Word) backend_libs__switch_util__conv3_Target_20);
#line 1190 "switch_util.m"
                          backend_libs__switch_util__succeeded = MR_TRUE;
#line 1190 "switch_util.m"
                        }
#line 1204 "switch_util.m"
                      if (backend_libs__switch_util__succeeded)
#line 1191 "switch_util.m"
                        {
#line 1191 "switch_util.m"
                          MR_Word backend_libs__switch_util__TagType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_20, (MR_Integer) 0)));
#line 1191 "switch_util.m"
                          MR_Integer backend_libs__switch_util__MaxSoFar_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_20, (MR_Integer) 1)));
#line 1191 "switch_util.m"
                          MR_Integer backend_libs__switch_util__Max_23;
#line 1191 "switch_util.m"
                          MR_Word backend_libs__switch_util__V_72_72;

#line 1194 "switch_util.m"
                          if ((backend_libs__switch_util__TagType_21 == (MR_Integer) 3))
#line 1193 "switch_util.m"
                            {
#line 1193 "switch_util.m"
                            }
#line 1194 "switch_util.m"
                          else
#line 1198 "switch_util.m"
                            {
#line 1199 "switch_util.m"
                              {
#line 1199 "switch_util.m"
                                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "remote tag is shared with non-remote");
#line 1199 "switch_util.m"
                                return;
                              }
#line 1198 "switch_util.m"
                            }
#line 1202 "switch_util.m"
                          {
#line 1202 "switch_util.m"
                            mercury__int__max_3_p_0(backend_libs__switch_util__Secondary_19, backend_libs__switch_util__MaxSoFar_22, &backend_libs__switch_util__Max_23);
                          }
#line 1203 "switch_util.m"
                          {
#line 1203 "switch_util.m"
                            backend_libs__switch_util__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1203 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_72_72, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1203 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_72_72, 1) = ((MR_Box) (backend_libs__switch_util__Max_23));
#line 1203 "switch_util.m"
                          }
#line 1203 "switch_util.m"
                          {
#line 1203 "switch_util.m"
                            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_87, ((MR_Box) (backend_libs__switch_util__V_72_72)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                          }
#line 1191 "switch_util.m"
                        }
#line 1204 "switch_util.m"
                      else
#line 1205 "switch_util.m"
                        {
#line 1205 "switch_util.m"
                          MR_Word backend_libs__switch_util__V_75_75;

#line 1205 "switch_util.m"
                          {
#line 1205 "switch_util.m"
                            backend_libs__switch_util__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1205 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1205 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 1) = ((MR_Box) (backend_libs__switch_util__Secondary_19));
#line 1205 "switch_util.m"
                          }
#line 1205 "switch_util.m"
                          {
#line 1205 "switch_util.m"
                            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_87, ((MR_Box) (backend_libs__switch_util__V_75_75)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                          }
#line 1205 "switch_util.m"
                        }
#line 1188 "switch_util.m"
                    }
#line 1187 "switch_util.m"
                  else
#line 1187 "switch_util.m"
                    if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1180 "switch_util.m"
                      {
#line 1180 "switch_util.m"
                        MR_Integer backend_libs__switch_util__Primary_171 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1182 "switch_util.m"
                        MR_Word backend_libs__switch_util__V_150_150;
#line 1182 "switch_util.m"
                        MR_Box backend_libs__switch_util__conv4_V_150_150;

#line 1181 "switch_util.m"
                        {
#line 1181 "switch_util.m"
                          mercury__int__max_3_p_0(backend_libs__switch_util__Primary_171, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                        }
#line 1182 "switch_util.m"
                        {
#line 1182 "switch_util.m"
                          backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_171, &backend_libs__switch_util__conv4_V_150_150);
                        }
#line 1182 "switch_util.m"
                        if (backend_libs__switch_util__succeeded)
#line 1182 "switch_util.m"
                          {
#line 1182 "switch_util.m"
                            backend_libs__switch_util__V_150_150 = ((MR_Word) backend_libs__switch_util__conv4_V_150_150);
#line 1182 "switch_util.m"
                            backend_libs__switch_util__succeeded = MR_TRUE;
#line 1182 "switch_util.m"
                          }
#line 1184 "switch_util.m"
                        if (backend_libs__switch_util__succeeded)
#line 1183 "switch_util.m"
                          {
#line 1183 "switch_util.m"
                            {
#line 1183 "switch_util.m"
                              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "unshared tag is shared");
#line 1183 "switch_util.m"
                              return;
                            }
#line 1183 "switch_util.m"
                          }
#line 1184 "switch_util.m"
                        else
#line 1185 "switch_util.m"
                          {
#line 1185 "switch_util.m"
                            {
#line 1185 "switch_util.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_171, ((MR_Box) (&backend_libs__switch_util_scalar_common_1[3])), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                            }
#line 1185 "switch_util.m"
                          }
#line 1180 "switch_util.m"
                      }
#line 1187 "switch_util.m"
                    else
#line 1244 "switch_util.m"
                      {
#line 1245 "switch_util.m"
                        {
#line 1245 "switch_util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "non-du tag");
#line 1245 "switch_util.m"
                          return;
                        }
#line 1244 "switch_util.m"
                      }
#line 1247 "switch_util.m"
            /* direct tailcall eliminated */
#line 1247 "switch_util.m"
            {
#line 1247 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Tags_13;
#line 1247 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78;
#line 1247 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0__tmp_copy_4 = backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83;

#line 1247 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4 = backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0__tmp_copy_4;
#line 1247 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2 = backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0__tmp_copy_2;
#line 1247 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 1247 "switch_util.m"
            }
#line 1247 "switch_util.m"
            continue;
#line 1168 "switch_util.m"
          }
#line 1167 "switch_util.m"
      }
#line 1167 "switch_util.m"
      break;
#line 1167 "switch_util.m"
    }
#line 1164 "switch_util.m"
}

#line 1126 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__add_string_binary_entry_4_p_0(
#line 1126 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 1126 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_5,
#line 1126 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_6,
#line 1126 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_12,
#line 1126 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_13)
#line 1126 "switch_util.m"
{
#line 1129 "switch_util.m"
  {
#line 1129 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1129 "switch_util.m"
    MR_Word backend_libs__switch_util__Tag_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_6, (MR_Integer) 1)));
#line 1129 "switch_util.m"
    MR_String backend_libs__switch_util__String_11;
#line 1129 "switch_util.m"
    MR_Word backend_libs__switch_util__V_18_18;
#line 1130 "switch_util.m"
    MR_Word backend_libs__switch_util___ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_6, (MR_Integer) 0)));
#line 1133 "switch_util.m"
    MR_String backend_libs__switch_util__StringPrime_10;

#line 1131 "switch_util.m"
    backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__Tag_9)) == (MR_mktag((MR_Integer) 1)));
#line 1131 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1131 "switch_util.m"
      {
#line 1131 "switch_util.m"
        backend_libs__switch_util__StringPrime_10 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__Tag_9, (MR_Integer) 0)));
#line 1132 "switch_util.m"
        backend_libs__switch_util__String_11 = backend_libs__switch_util__StringPrime_10;
#line 1131 "switch_util.m"
      }
#line 1131 "switch_util.m"
    else
#line 1134 "switch_util.m"
      {
#line 1134 "switch_util.m"
        {
#line 1134 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.add_string_binary_entry\'/4", (MR_String) "non-string case\?");
#line 1134 "switch_util.m"
          return;
        }
#line 1134 "switch_util.m"
      }
#line 1136 "switch_util.m"
    {
#line 1136 "switch_util.m"
      backend_libs__switch_util__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1136 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_18_18, 0) = ((MR_Box) (backend_libs__switch_util__String_11));
#line 1136 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_18_18, 1) = backend_libs__switch_util__CaseRep_5;
#line 1136 "switch_util.m"
    }
#line 1136 "switch_util.m"
    {
#line 1136 "switch_util.m"
      MR_Word base;
#line 1136 "switch_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "switch_util.m"
      *backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_13 = base;
#line 1136 "switch_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__V_18_18));
#line 1136 "switch_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_12));
#line 1136 "switch_util.m"
    }
#line 1129 "switch_util.m"
  }
#line 1126 "switch_util.m"
}

#line 1087 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0_1(
#line 1087 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1087 "switch_util.m"
{
#line 1087 "switch_util.m"
  {
#line 1087 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1087 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1087 "switch_util.m"
    {
#line 1087 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__int__f_less_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))));
    }
#line 1087 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1087 "switch_util.m"
  }
#line 1087 "switch_util.m"
}

#line 1081 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0(
#line 1081 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1081 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_6,
#line 1081 "switch_util.m"
  MR_Word backend_libs__switch_util__HomeMap_7,
#line 1081 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_8,
#line 1081 "switch_util.m"
  MR_Integer backend_libs__switch_util__LastUsed_9,
#line 1081 "switch_util.m"
  MR_Integer * backend_libs__switch_util__FreeSlot_10)
#line 1081 "switch_util.m"
{
#line 1085 "switch_util.m"
  while (MR_TRUE)
#line 1085 "switch_util.m"
    {
#line 1085 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1085 "switch_util.m"
      {
#line 1085 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;
#line 1085 "switch_util.m"
        MR_Integer backend_libs__switch_util__NextSlot_11 = (backend_libs__switch_util__LastUsed_9 + (MR_Integer) 1);
#line 1085 "switch_util.m"
        MR_Word backend_libs__switch_util__V_13_13;
#line 1089 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_20_20;
#line 1090 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_21_21;
#line 1090 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_22_22;
#line 1090 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_23_23;
#line 1090 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_24_24;
#line 1090 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_25_25;
#line 1090 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_26_26;

#line 1087 "switch_util.m"
        {
#line 1087 "switch_util.m"
          backend_libs__switch_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1087 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_5[0]));
#line 1087 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 1) = ((MR_Box) (backend_libs__switch_util__next_free_hash_slot_5_p_0_1));
#line 1087 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1087 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 3) = ((MR_Box) (backend_libs__switch_util__NextSlot_11));
#line 1087 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 4) = ((MR_Box) (backend_libs__switch_util__TableSize_8));
#line 1087 "switch_util.m"
        }
#line 1087 "switch_util.m"
        {
#line 1087 "switch_util.m"
          mercury__require__expect_4_p_0(backend_libs__switch_util__V_13_13, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.next_free_hash_slot\'/5", (MR_String) "overflow");
        }
#line 10525 "backend_libs.switch_util.c"
        {
#line 10527 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10529 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10531 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_17));
#line 10533 "backend_libs.switch_util.c"
        }
#line 1089 "switch_util.m"
        {
#line 1089 "switch_util.m"
          backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_20_20, backend_libs__switch_util__Map_6, ((MR_Box) (backend_libs__switch_util__NextSlot_11)));
        }
#line 1089 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1089 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1089 "switch_util.m"
          {
#line 10546 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 10548 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_25_25 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 10550 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_23_23 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 10552 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 10554 "backend_libs.switch_util.c"
            {
#line 10556 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10558 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_23_23));
#line 10560 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 1) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_22_22));
#line 10562 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_17));
#line 10564 "backend_libs.switch_util.c"
            }
#line 10566 "backend_libs.switch_util.c"
            {
#line 10568 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10570 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_26_26, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_25_25));
#line 10572 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_26_26, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_24_24));
#line 10574 "backend_libs.switch_util.c"
            }
#line 1090 "switch_util.m"
            {
#line 1090 "switch_util.m"
              backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0(backend_libs__switch_util__TypeCtorInfo_21_21, backend_libs__switch_util__TypeInfo_26_26, backend_libs__switch_util__HomeMap_7, ((MR_Box) (backend_libs__switch_util__NextSlot_11)));
            }
#line 1090 "switch_util.m"
            backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1089 "switch_util.m"
          }
#line 1093 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1092 "switch_util.m"
          *backend_libs__switch_util__FreeSlot_10 = backend_libs__switch_util__NextSlot_11;
#line 1093 "switch_util.m"
        else
#line 1094 "switch_util.m"
          {
#line 1094 "switch_util.m"
            /* direct tailcall eliminated */
#line 1094 "switch_util.m"
            {
#line 1094 "switch_util.m"
              MR_Integer backend_libs__switch_util__LastUsed__tmp_copy_9 = backend_libs__switch_util__NextSlot_11;

#line 1094 "switch_util.m"
              backend_libs__switch_util__LastUsed_9 = backend_libs__switch_util__LastUsed__tmp_copy_9;
#line 1094 "switch_util.m"
            }
#line 1094 "switch_util.m"
            continue;
#line 1094 "switch_util.m"
          }
#line 1085 "switch_util.m"
      }
#line 1085 "switch_util.m"
      break;
#line 1085 "switch_util.m"
    }
#line 1081 "switch_util.m"
}

#line 1061 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__follow_hash_chain_3_p_0(
#line 1061 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_12,
#line 1061 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_4,
#line 1061 "switch_util.m"
  MR_Integer backend_libs__switch_util__Slot_5,
#line 1061 "switch_util.m"
  MR_Integer * backend_libs__switch_util__LastSlot_6)
#line 1061 "switch_util.m"
{
#line 1064 "switch_util.m"
  while (MR_TRUE)
#line 1064 "switch_util.m"
    {
#line 1064 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1064 "switch_util.m"
      {
#line 1064 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;
#line 1064 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_15_15;
#line 1064 "switch_util.m"
        MR_Integer backend_libs__switch_util__NextSlot_8;
#line 1064 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10;
#line 1065 "switch_util.m"
        MR_Box backend_libs__switch_util__conv0_V_10_10;
#line 1065 "switch_util.m"
        MR_String backend_libs__switch_util__V_7_7;
#line 1065 "switch_util.m"
        MR_Box backend_libs__switch_util__V_9_9;

#line 10653 "backend_libs.switch_util.c"
        {
#line 10655 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10657 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10659 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_12));
#line 10661 "backend_libs.switch_util.c"
        }
#line 1065 "switch_util.m"
        {
#line 1065 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_15_15, (MR_Word) backend_libs__switch_util__Map_4, backend_libs__switch_util__Slot_5, &backend_libs__switch_util__conv0_V_10_10);
        }
#line 1065 "switch_util.m"
        backend_libs__switch_util__V_10_10 = ((MR_Word) backend_libs__switch_util__conv0_V_10_10);
#line 1065 "switch_util.m"
        backend_libs__switch_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_10_10, (MR_Integer) 0)));
#line 1065 "switch_util.m"
        backend_libs__switch_util__NextSlot_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_10_10, (MR_Integer) 1)));
#line 1065 "switch_util.m"
        backend_libs__switch_util__V_9_9 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_10_10, (MR_Integer) 2));
#line 1067 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__NextSlot_8 >= (MR_Integer) 0);
#line 1067 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1068 "switch_util.m"
          {
#line 1068 "switch_util.m"
            backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_15_15, backend_libs__switch_util__Map_4, ((MR_Box) (backend_libs__switch_util__NextSlot_8)));
          }
#line 1071 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1070 "switch_util.m"
          {
#line 1070 "switch_util.m"
            /* direct tailcall eliminated */
#line 1070 "switch_util.m"
            {
#line 1070 "switch_util.m"
              MR_Integer backend_libs__switch_util__Slot__tmp_copy_5 = backend_libs__switch_util__NextSlot_8;

#line 1070 "switch_util.m"
              backend_libs__switch_util__Slot_5 = backend_libs__switch_util__Slot__tmp_copy_5;
#line 1070 "switch_util.m"
            }
#line 1070 "switch_util.m"
            continue;
#line 1070 "switch_util.m"
          }
#line 1071 "switch_util.m"
        else
#line 1072 "switch_util.m"
          *backend_libs__switch_util__LastSlot_6 = backend_libs__switch_util__Slot_5;
#line 1064 "switch_util.m"
      }
#line 1064 "switch_util.m"
      break;
#line 1064 "switch_util.m"
    }
#line 1061 "switch_util.m"
}

#line 1027 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(
#line 1027 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_64,
#line 1027 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1027 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__2_2,
#line 1027 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__3_3,
#line 1027 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 1027 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5,
#line 1027 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_6,
#line 1027 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7,
#line 1027 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_8)
#line 1027 "switch_util.m"
{
#line 1034 "switch_util.m"
  {
#line 1034 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 1034 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1034 "switch_util.m"
      {
#line 1035 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_LastUsed_8 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7;
#line 1035 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_SlotMap_6 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5;
#line 1034 "switch_util.m"
      }
#line 1034 "switch_util.m"
    else
#line 1037 "switch_util.m"
      {
#line 1037 "switch_util.m"
        MR_Word backend_libs__switch_util__StringCaseRep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1037 "switch_util.m"
        MR_Word backend_libs__switch_util__StringCaseReps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1037 "switch_util.m"
        MR_String backend_libs__switch_util__String_25;
#line 1037 "switch_util.m"
        MR_Box backend_libs__switch_util__CaseRep_26;
#line 1037 "switch_util.m"
        MR_Word backend_libs__switch_util__NewSlot_27;
#line 1037 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39;
#line 1037 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40;
#line 1054 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_67_67;

#line 1038 "switch_util.m"
        {
#line 1038 "switch_util.m"
          backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_64, backend_libs__switch_util__StringCaseReps_19, backend_libs__switch_util__HeadVar__2_2, backend_libs__switch_util__HeadVar__3_3, backend_libs__switch_util__HeadVar__4_4, backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5, &backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7, &backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40);
        }
#line 1040 "switch_util.m"
        backend_libs__switch_util__String_25 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StringCaseRep_18, (MR_Integer) 0)));
#line 1040 "switch_util.m"
        backend_libs__switch_util__CaseRep_26 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StringCaseRep_18, (MR_Integer) 1));
#line 1041 "switch_util.m"
        {
#line 1041 "switch_util.m"
          backend_libs__switch_util__NewSlot_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1041 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewSlot_27, 0) = ((MR_Box) (backend_libs__switch_util__String_25));
#line 1041 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewSlot_27, 1) = ((MR_Box) ((MR_Integer) -1));
#line 1041 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewSlot_27, 2) = backend_libs__switch_util__CaseRep_26;
#line 1041 "switch_util.m"
        }
#line 10797 "backend_libs.switch_util.c"
        {
#line 10799 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10801 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_67_67, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10803 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_67_67, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_64));
#line 10805 "backend_libs.switch_util.c"
        }
#line 1042 "switch_util.m"
        {
#line 1042 "switch_util.m"
          backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_67_67, backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, ((MR_Box) (backend_libs__switch_util__HeadVar__3_3)));
        }
#line 1054 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1043 "switch_util.m"
          {
#line 1043 "switch_util.m"
            MR_Integer backend_libs__switch_util__ChainEnd_28;
#line 1043 "switch_util.m"
            MR_Word backend_libs__switch_util__ChainEndSlot0_29;
#line 1043 "switch_util.m"
            MR_String backend_libs__switch_util__PrevString_30;
#line 1043 "switch_util.m"
            MR_Box backend_libs__switch_util__PrevCaseRep_32;
#line 1043 "switch_util.m"
            MR_Word backend_libs__switch_util__ChainEndSlot_33;
#line 1043 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_43_43;
#line 1045 "switch_util.m"
            MR_Box backend_libs__switch_util__conv0_ChainEndSlot0_29;
#line 1046 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_31_31;
#line 1048 "switch_util.m"
            MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_SlotMap_43_43;
#line 1049 "switch_util.m"
            MR_Word backend_libs__switch_util__conv2_STATE_VARIABLE_SlotMap_6;

#line 1043 "switch_util.m"
            {
#line 1043 "switch_util.m"
              backend_libs__switch_util__follow_hash_chain_3_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_64, backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__HeadVar__3_3, &backend_libs__switch_util__ChainEnd_28);
            }
#line 1044 "switch_util.m"
            {
#line 1044 "switch_util.m"
              backend_libs__switch_util__next_free_hash_slot_5_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_64, backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__HeadVar__4_4, backend_libs__switch_util__HeadVar__2_2, backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40, backend_libs__switch_util__STATE_VARIABLE_LastUsed_8);
            }
#line 1045 "switch_util.m"
            {
#line 1045 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_67_67, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__ChainEnd_28, &backend_libs__switch_util__conv0_ChainEndSlot0_29);
            }
#line 1045 "switch_util.m"
            backend_libs__switch_util__ChainEndSlot0_29 = ((MR_Word) backend_libs__switch_util__conv0_ChainEndSlot0_29);
#line 1046 "switch_util.m"
            backend_libs__switch_util__PrevString_30 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot0_29, (MR_Integer) 0)));
#line 1046 "switch_util.m"
            backend_libs__switch_util__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot0_29, (MR_Integer) 1)));
#line 1046 "switch_util.m"
            backend_libs__switch_util__PrevCaseRep_32 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot0_29, (MR_Integer) 2));
#line 1047 "switch_util.m"
            {
#line 1047 "switch_util.m"
              backend_libs__switch_util__ChainEndSlot_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1047 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot_33, 0) = ((MR_Box) (backend_libs__switch_util__PrevString_30));
#line 1047 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot_33, 1) = ((MR_Box) (*backend_libs__switch_util__STATE_VARIABLE_LastUsed_8));
#line 1047 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot_33, 2) = backend_libs__switch_util__PrevCaseRep_32;
#line 1047 "switch_util.m"
            }
#line 1048 "switch_util.m"
            {
#line 1048 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_67_67, backend_libs__switch_util__ChainEnd_28, ((MR_Box) (backend_libs__switch_util__ChainEndSlot_33)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, &backend_libs__switch_util__conv1_STATE_VARIABLE_SlotMap_43_43);
            }
#line 1048 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_SlotMap_43_43 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_SlotMap_43_43;
#line 1049 "switch_util.m"
            {
#line 1049 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_67_67, *backend_libs__switch_util__STATE_VARIABLE_LastUsed_8, ((MR_Box) (backend_libs__switch_util__NewSlot_27)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_43_43, &backend_libs__switch_util__conv2_STATE_VARIABLE_SlotMap_6);
            }
#line 1049 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_SlotMap_6 = (MR_Word) backend_libs__switch_util__conv2_STATE_VARIABLE_SlotMap_6;
#line 1043 "switch_util.m"
          }
#line 1054 "switch_util.m"
        else
#line 1055 "switch_util.m"
          {
#line 1055 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_73_73;
#line 1055 "switch_util.m"
            MR_Word backend_libs__switch_util__conv3_STATE_VARIABLE_SlotMap_6;

#line 10897 "backend_libs.switch_util.c"
            {
#line 10899 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10901 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10903 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_64));
#line 10905 "backend_libs.switch_util.c"
            }
#line 1055 "switch_util.m"
            {
#line 1055 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_73_73, backend_libs__switch_util__HeadVar__3_3, ((MR_Box) (backend_libs__switch_util__NewSlot_27)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, &backend_libs__switch_util__conv3_STATE_VARIABLE_SlotMap_6);
            }
#line 1055 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_SlotMap_6 = (MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_SlotMap_6;
#line 1055 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_LastUsed_8 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40;
#line 1055 "switch_util.m"
          }
#line 1037 "switch_util.m"
      }
#line 1034 "switch_util.m"
  }
#line 1027 "switch_util.m"
}

#line 1012 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hashes_7_p_0(
#line 1012 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_32,
#line 1012 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1012 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_2,
#line 1012 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_3,
#line 1012 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4,
#line 1012 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_5,
#line 1012 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6,
#line 1012 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_7)
#line 1012 "switch_util.m"
{
#line 1019 "switch_util.m"
  while (MR_TRUE)
#line 1019 "switch_util.m"
    {
#line 1019 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1019 "switch_util.m"
      {
#line 1019 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 1019 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1019 "switch_util.m"
          {
#line 1019 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_LastUsed_7 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6;
#line 1019 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_SlotMap_5 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4;
#line 1019 "switch_util.m"
          }
#line 1019 "switch_util.m"
        else
#line 1021 "switch_util.m"
          {
#line 1021 "switch_util.m"
            MR_Integer backend_libs__switch_util__HashVal_16;
#line 1021 "switch_util.m"
            MR_Word backend_libs__switch_util__StringCaseReps_17;
#line 1021 "switch_util.m"
            MR_Word backend_libs__switch_util__Rest_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1021 "switch_util.m"
            MR_Word backend_libs__switch_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1021 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_28_28;
#line 1021 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_29_29;

#line 1020 "switch_util.m"
            backend_libs__switch_util__HashVal_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_27_27, (MR_Integer) 0)));
#line 1020 "switch_util.m"
            backend_libs__switch_util__StringCaseReps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_27_27, (MR_Integer) 1)));
#line 1022 "switch_util.m"
            {
#line 1022 "switch_util.m"
              backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_32, backend_libs__switch_util__StringCaseReps_17, backend_libs__switch_util__TableSize_2, backend_libs__switch_util__HashVal_16, backend_libs__switch_util__HashMap_3, backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_SlotMap_28_28, backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6, &backend_libs__switch_util__STATE_VARIABLE_LastUsed_29_29);
            }
#line 1024 "switch_util.m"
            /* direct tailcall eliminated */
#line 1024 "switch_util.m"
            {
#line 1024 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Rest_18;
#line 1024 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0__tmp_copy_4 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_28_28;
#line 1024 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0__tmp_copy_6 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_29_29;

#line 1024 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_0__tmp_copy_6;
#line 1024 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_0__tmp_copy_4;
#line 1024 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 1024 "switch_util.m"
            }
#line 1024 "switch_util.m"
            continue;
#line 1021 "switch_util.m"
          }
#line 1019 "switch_util.m"
      }
#line 1019 "switch_util.m"
      break;
#line 1019 "switch_util.m"
    }
#line 1012 "switch_util.m"
}

#line 997 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_4_p_0(
#line 997 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 997 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_5,
#line 997 "switch_util.m"
  MR_Word backend_libs__switch_util__HashValList_6,
#line 997 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_7,
#line 997 "switch_util.m"
  MR_Word * backend_libs__switch_util__SlotMap_8)
#line 997 "switch_util.m"
{
#line 1002 "switch_util.m"
  {
#line 1002 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1002 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_22_22;
#line 1002 "switch_util.m"
    MR_Word backend_libs__switch_util__V_14_14;
#line 1006 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_10_10;

#line 11051 "backend_libs.switch_util.c"
    {
#line 11053 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11055 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 11057 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_19));
#line 11059 "backend_libs.switch_util.c"
    }
#line 1007 "switch_util.m"
    {
#line 1007 "switch_util.m"
      backend_libs__switch_util__V_14_14 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_22_22);
    }
#line 1006 "switch_util.m"
    {
#line 1006 "switch_util.m"
      backend_libs__switch_util__calc_string_hash_slots_loop_over_hashes_7_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_19, backend_libs__switch_util__HashValList_6, backend_libs__switch_util__TableSize_5, backend_libs__switch_util__HashMap_7, backend_libs__switch_util__V_14_14, backend_libs__switch_util__SlotMap_8, (MR_Integer) 0, &backend_libs__switch_util__V_10_10);
    }
#line 1002 "switch_util.m"
  }
#line 997 "switch_util.m"
}

#line 951 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_case_14_p_0(
#line 951 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 951 "switch_util.m"
  MR_Word backend_libs__switch_util__StrCaseRep_15,
#line 951 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_16,
#line 951 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_31,
#line 951 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap4_32,
#line 951 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_33,
#line 951 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap5_34,
#line 951 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_35,
#line 951 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap6_36,
#line 951 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_37,
#line 951 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_38,
#line 951 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_39,
#line 951 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_40,
#line 951 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_41,
#line 951 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_42)
#line 951 "switch_util.m"
{
#line 962 "switch_util.m"
  {
#line 962 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 962 "switch_util.m"
    MR_String backend_libs__switch_util__String_23 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StrCaseRep_15, (MR_Integer) 0)));
#line 962 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashVal4_25;
#line 962 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashVal5_26;
#line 962 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashVal6_27;
#line 962 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_43_43;
#line 962 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_44_44;
#line 962 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_45_45;
#line 963 "switch_util.m"
    MR_Box backend_libs__switch_util___CaseRep_24 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StrCaseRep_15, (MR_Integer) 1));
#line 970 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_73_73;
#line 970 "switch_util.m"
    MR_Word backend_libs__switch_util__OldEntries4_28;
#line 967 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_71_71;
#line 967 "switch_util.m"
    MR_Box backend_libs__switch_util__conv0_OldEntries4_28;
#line 976 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_91_91;
#line 976 "switch_util.m"
    MR_Word backend_libs__switch_util__OldEntries5_29;
#line 973 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_89_89;
#line 973 "switch_util.m"
    MR_Box backend_libs__switch_util__conv3_OldEntries5_29;
#line 982 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_109_109;
#line 982 "switch_util.m"
    MR_Word backend_libs__switch_util__OldEntries6_30;
#line 979 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_107_107;
#line 979 "switch_util.m"
    MR_Box backend_libs__switch_util__conv6_OldEntries6_30;

#line 964 "switch_util.m"
    {
#line 964 "switch_util.m"
      backend_libs__switch_util__V_43_43 = mercury__string__hash4_1_f_0(backend_libs__switch_util__String_23);
    }
#line 964 "switch_util.m"
    backend_libs__switch_util__HashVal4_25 = (backend_libs__switch_util__V_43_43 & backend_libs__switch_util__HashMask_16);
#line 965 "switch_util.m"
    {
#line 965 "switch_util.m"
      backend_libs__switch_util__V_44_44 = mercury__string__hash5_1_f_0(backend_libs__switch_util__String_23);
    }
#line 965 "switch_util.m"
    backend_libs__switch_util__HashVal5_26 = (backend_libs__switch_util__V_44_44 & backend_libs__switch_util__HashMask_16);
#line 966 "switch_util.m"
    {
#line 966 "switch_util.m"
      backend_libs__switch_util__V_45_45 = mercury__string__hash6_1_f_0(backend_libs__switch_util__String_23);
    }
#line 966 "switch_util.m"
    backend_libs__switch_util__HashVal6_27 = (backend_libs__switch_util__V_45_45 & backend_libs__switch_util__HashMask_16);
#line 11177 "backend_libs.switch_util.c"
    {
#line 11179 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11181 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_71_71, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11183 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_71_71, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11185 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_71_71, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11187 "backend_libs.switch_util.c"
    }
#line 11189 "backend_libs.switch_util.c"
    {
#line 11191 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11193 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11195 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_71_71));
#line 11197 "backend_libs.switch_util.c"
    }
#line 967 "switch_util.m"
    {
#line 967 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_73_73, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_31, backend_libs__switch_util__HashVal4_25, &backend_libs__switch_util__conv0_OldEntries4_28);
    }
#line 967 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 967 "switch_util.m"
      {
#line 967 "switch_util.m"
        backend_libs__switch_util__OldEntries4_28 = ((MR_Word) backend_libs__switch_util__conv0_OldEntries4_28);
#line 967 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 967 "switch_util.m"
      }
#line 970 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 968 "switch_util.m"
      {
#line 968 "switch_util.m"
        MR_Word backend_libs__switch_util__V_46_46;
#line 968 "switch_util.m"
        MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_HashMap4_32;

#line 968 "switch_util.m"
        {
#line 968 "switch_util.m"
          backend_libs__switch_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_46_46, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 968 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_46_46, 1) = ((MR_Box) (backend_libs__switch_util__OldEntries4_28));
#line 968 "switch_util.m"
        }
#line 968 "switch_util.m"
        {
#line 968 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_73_73, backend_libs__switch_util__HashVal4_25, ((MR_Box) (backend_libs__switch_util__V_46_46)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_31, &backend_libs__switch_util__conv1_STATE_VARIABLE_HashMap4_32);
        }
#line 968 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap4_32 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_HashMap4_32;
#line 969 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_38 = (backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_37 + (MR_Integer) 1);
#line 968 "switch_util.m"
      }
#line 970 "switch_util.m"
    else
#line 971 "switch_util.m"
      {
#line 971 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_83_83;
#line 971 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_85_85;
#line 971 "switch_util.m"
        MR_Word backend_libs__switch_util__V_50_50;
#line 971 "switch_util.m"
        MR_Word backend_libs__switch_util__conv2_STATE_VARIABLE_HashMap4_32;

#line 971 "switch_util.m"
        {
#line 971 "switch_util.m"
          backend_libs__switch_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_50_50, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 971 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 971 "switch_util.m"
        }
#line 11267 "backend_libs.switch_util.c"
        {
#line 11269 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11271 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_83_83, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11273 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_83_83, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11275 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_83_83, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11277 "backend_libs.switch_util.c"
        }
#line 11279 "backend_libs.switch_util.c"
        {
#line 11281 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11283 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_85_85, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11285 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_85_85, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_83_83));
#line 11287 "backend_libs.switch_util.c"
        }
#line 971 "switch_util.m"
        {
#line 971 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_85_85, backend_libs__switch_util__HashVal4_25, ((MR_Box) (backend_libs__switch_util__V_50_50)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_31, &backend_libs__switch_util__conv2_STATE_VARIABLE_HashMap4_32);
        }
#line 971 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap4_32 = (MR_Word) backend_libs__switch_util__conv2_STATE_VARIABLE_HashMap4_32;
#line 971 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_38 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_37;
#line 971 "switch_util.m"
      }
#line 11300 "backend_libs.switch_util.c"
    {
#line 11302 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11304 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_89_89, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11306 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_89_89, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11308 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_89_89, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11310 "backend_libs.switch_util.c"
    }
#line 11312 "backend_libs.switch_util.c"
    {
#line 11314 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11316 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_91_91, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11318 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_91_91, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_89_89));
#line 11320 "backend_libs.switch_util.c"
    }
#line 973 "switch_util.m"
    {
#line 973 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_91_91, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_33, backend_libs__switch_util__HashVal5_26, &backend_libs__switch_util__conv3_OldEntries5_29);
    }
#line 973 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 973 "switch_util.m"
      {
#line 973 "switch_util.m"
        backend_libs__switch_util__OldEntries5_29 = ((MR_Word) backend_libs__switch_util__conv3_OldEntries5_29);
#line 973 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 973 "switch_util.m"
      }
#line 976 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 974 "switch_util.m"
      {
#line 974 "switch_util.m"
        MR_Word backend_libs__switch_util__V_53_53;
#line 974 "switch_util.m"
        MR_Word backend_libs__switch_util__conv4_STATE_VARIABLE_HashMap5_34;

#line 974 "switch_util.m"
        {
#line 974 "switch_util.m"
          backend_libs__switch_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_53_53, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 974 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_53_53, 1) = ((MR_Box) (backend_libs__switch_util__OldEntries5_29));
#line 974 "switch_util.m"
        }
#line 974 "switch_util.m"
        {
#line 974 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_91_91, backend_libs__switch_util__HashVal5_26, ((MR_Box) (backend_libs__switch_util__V_53_53)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_33, &backend_libs__switch_util__conv4_STATE_VARIABLE_HashMap5_34);
        }
#line 974 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap5_34 = (MR_Word) backend_libs__switch_util__conv4_STATE_VARIABLE_HashMap5_34;
#line 975 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_40 = (backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_39 + (MR_Integer) 1);
#line 974 "switch_util.m"
      }
#line 976 "switch_util.m"
    else
#line 977 "switch_util.m"
      {
#line 977 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_101_101;
#line 977 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_103_103;
#line 977 "switch_util.m"
        MR_Word backend_libs__switch_util__V_57_57;
#line 977 "switch_util.m"
        MR_Word backend_libs__switch_util__conv5_STATE_VARIABLE_HashMap5_34;

#line 977 "switch_util.m"
        {
#line 977 "switch_util.m"
          backend_libs__switch_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 977 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_57_57, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 977 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 977 "switch_util.m"
        }
#line 11390 "backend_libs.switch_util.c"
        {
#line 11392 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11394 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_101_101, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11396 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_101_101, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11398 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_101_101, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11400 "backend_libs.switch_util.c"
        }
#line 11402 "backend_libs.switch_util.c"
        {
#line 11404 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11406 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_103_103, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11408 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_103_103, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_101_101));
#line 11410 "backend_libs.switch_util.c"
        }
#line 977 "switch_util.m"
        {
#line 977 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_103_103, backend_libs__switch_util__HashVal5_26, ((MR_Box) (backend_libs__switch_util__V_57_57)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_33, &backend_libs__switch_util__conv5_STATE_VARIABLE_HashMap5_34);
        }
#line 977 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap5_34 = (MR_Word) backend_libs__switch_util__conv5_STATE_VARIABLE_HashMap5_34;
#line 977 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_40 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_39;
#line 977 "switch_util.m"
      }
#line 11423 "backend_libs.switch_util.c"
    {
#line 11425 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11427 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_107_107, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11429 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_107_107, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11431 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_107_107, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11433 "backend_libs.switch_util.c"
    }
#line 11435 "backend_libs.switch_util.c"
    {
#line 11437 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11439 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_109_109, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11441 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_109_109, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_107_107));
#line 11443 "backend_libs.switch_util.c"
    }
#line 979 "switch_util.m"
    {
#line 979 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_109_109, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_35, backend_libs__switch_util__HashVal6_27, &backend_libs__switch_util__conv6_OldEntries6_30);
    }
#line 979 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 979 "switch_util.m"
      {
#line 979 "switch_util.m"
        backend_libs__switch_util__OldEntries6_30 = ((MR_Word) backend_libs__switch_util__conv6_OldEntries6_30);
#line 979 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 979 "switch_util.m"
      }
#line 982 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 980 "switch_util.m"
      {
#line 980 "switch_util.m"
        MR_Word backend_libs__switch_util__V_60_60;
#line 980 "switch_util.m"
        MR_Word backend_libs__switch_util__conv7_STATE_VARIABLE_HashMap6_36;

#line 980 "switch_util.m"
        {
#line 980 "switch_util.m"
          backend_libs__switch_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_60_60, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 980 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_60_60, 1) = ((MR_Box) (backend_libs__switch_util__OldEntries6_30));
#line 980 "switch_util.m"
        }
#line 980 "switch_util.m"
        {
#line 980 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_109_109, backend_libs__switch_util__HashVal6_27, ((MR_Box) (backend_libs__switch_util__V_60_60)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_35, &backend_libs__switch_util__conv7_STATE_VARIABLE_HashMap6_36);
        }
#line 980 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap6_36 = (MR_Word) backend_libs__switch_util__conv7_STATE_VARIABLE_HashMap6_36;
#line 981 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_42 = (backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_41 + (MR_Integer) 1);
#line 980 "switch_util.m"
      }
#line 982 "switch_util.m"
    else
#line 983 "switch_util.m"
      {
#line 983 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_119_119;
#line 983 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_121_121;
#line 983 "switch_util.m"
        MR_Word backend_libs__switch_util__V_64_64;
#line 983 "switch_util.m"
        MR_Word backend_libs__switch_util__conv8_STATE_VARIABLE_HashMap6_36;

#line 983 "switch_util.m"
        {
#line 983 "switch_util.m"
          backend_libs__switch_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_64_64, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 983 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 983 "switch_util.m"
        }
#line 11513 "backend_libs.switch_util.c"
        {
#line 11515 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11517 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_119_119, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11519 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_119_119, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11521 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_119_119, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11523 "backend_libs.switch_util.c"
        }
#line 11525 "backend_libs.switch_util.c"
        {
#line 11527 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11529 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_121_121, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11531 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_121_121, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_119_119));
#line 11533 "backend_libs.switch_util.c"
        }
#line 983 "switch_util.m"
        {
#line 983 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_121_121, backend_libs__switch_util__HashVal6_27, ((MR_Box) (backend_libs__switch_util__V_64_64)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_35, &backend_libs__switch_util__conv8_STATE_VARIABLE_HashMap6_36);
        }
#line 983 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap6_36 = (MR_Word) backend_libs__switch_util__conv8_STATE_VARIABLE_HashMap6_36;
#line 983 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_42 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_41;
#line 983 "switch_util.m"
      }
#line 962 "switch_util.m"
  }
#line 951 "switch_util.m"
}

#line 930 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_cases_14_p_0(
#line 930 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 930 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 930 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_2,
#line 930 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_3,
#line 930 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap4_4,
#line 930 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_5,
#line 930 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap5_6,
#line 930 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_7,
#line 930 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap6_8,
#line 930 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_9,
#line 930 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_10,
#line 930 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_11,
#line 930 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_12,
#line 930 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_13,
#line 930 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_14)
#line 930 "switch_util.m"
{
#line 939 "switch_util.m"
  while (MR_TRUE)
#line 939 "switch_util.m"
    {
#line 939 "switch_util.m"
      /* tailcall optimized into a loop */
#line 939 "switch_util.m"
      {
#line 939 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 939 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 939 "switch_util.m"
          {
#line 940 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_14 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_13;
#line 940 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_12 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_11;
#line 940 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_10 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_9;
#line 939 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_HashMap6_8 = backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_7;
#line 939 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_HashMap5_6 = backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_5;
#line 939 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_HashMap4_4 = backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_3;
#line 939 "switch_util.m"
          }
#line 939 "switch_util.m"
        else
#line 943 "switch_util.m"
          {
#line 943 "switch_util.m"
            MR_Word backend_libs__switch_util__StrData_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 943 "switch_util.m"
            MR_Word backend_libs__switch_util__StrsDatas_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 943 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_55_55;
#line 943 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_56_56;
#line 943 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_57_57;
#line 943 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_58_58;
#line 943 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_59_59;
#line 943 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_60_60;

#line 944 "switch_util.m"
            {
#line 944 "switch_util.m"
              backend_libs__switch_util__string_hash_case_14_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_67, backend_libs__switch_util__StrData_34, backend_libs__switch_util__HashMask_2, backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_3, &backend_libs__switch_util__STATE_VARIABLE_HashMap4_55_55, backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_5, &backend_libs__switch_util__STATE_VARIABLE_HashMap5_56_56, backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_7, &backend_libs__switch_util__STATE_VARIABLE_HashMap6_57_57, backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_9, &backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_58_58, backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_11, &backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_59_59, backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_13, &backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_60_60);
            }
#line 947 "switch_util.m"
            /* direct tailcall eliminated */
#line 947 "switch_util.m"
            {
#line 947 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__StrsDatas_35;
#line 947 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_0__tmp_copy_3 = backend_libs__switch_util__STATE_VARIABLE_HashMap4_55_55;
#line 947 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_0__tmp_copy_5 = backend_libs__switch_util__STATE_VARIABLE_HashMap5_56_56;
#line 947 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_0__tmp_copy_7 = backend_libs__switch_util__STATE_VARIABLE_HashMap6_57_57;
#line 947 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0__tmp_copy_9 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_58_58;
#line 947 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0__tmp_copy_11 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_59_59;
#line 947 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0__tmp_copy_13 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_60_60;

#line 947 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_13 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0__tmp_copy_13;
#line 947 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_11 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0__tmp_copy_11;
#line 947 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_9 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0__tmp_copy_9;
#line 947 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_7 = backend_libs__switch_util__STATE_VARIABLE_HashMap6_0__tmp_copy_7;
#line 947 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_5 = backend_libs__switch_util__STATE_VARIABLE_HashMap5_0__tmp_copy_5;
#line 947 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_3 = backend_libs__switch_util__STATE_VARIABLE_HashMap4_0__tmp_copy_3;
#line 947 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 947 "switch_util.m"
            }
#line 947 "switch_util.m"
            continue;
#line 943 "switch_util.m"
          }
#line 939 "switch_util.m"
      }
#line 939 "switch_util.m"
      break;
#line 939 "switch_util.m"
    }
#line 930 "switch_util.m"
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
            MR_Integer backend_libs__switch_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 2)));
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
            MR_Integer backend_libs__switch_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 2)));
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
#line 1476 "switch_util.m"
  {
#line 1476 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__ConsTag_3)) == (MR_mktag((MR_Integer) 1)));
#line 1476 "switch_util.m"
    MR_String backend_libs__switch_util__StrPrime_5;

#line 1474 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1474 "switch_util.m"
      {
#line 1474 "switch_util.m"
        backend_libs__switch_util__StrPrime_5 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__ConsTag_3, (MR_Integer) 0)));
#line 1475 "switch_util.m"
        *backend_libs__switch_util__Str_4 = backend_libs__switch_util__StrPrime_5;
#line 1474 "switch_util.m"
      }
#line 1474 "switch_util.m"
    else
#line 1477 "switch_util.m"
      {
#line 1477 "switch_util.m"
        {
#line 1477 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_string_tag\'/2", (MR_String) "not string_tag");
#line 1477 "switch_util.m"
          return;
        }
#line 1477 "switch_util.m"
      }
#line 1476 "switch_util.m"
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
#line 1469 "switch_util.m"
  {
#line 1469 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = ((((MR_tag((MR_Word) backend_libs__switch_util__ConsTag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__ConsTag_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1469 "switch_util.m"
    MR_Integer backend_libs__switch_util__IntPrime_5;

#line 1467 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1467 "switch_util.m"
      {
#line 1467 "switch_util.m"
        backend_libs__switch_util__IntPrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__ConsTag_3, (MR_Integer) 1)));
#line 1468 "switch_util.m"
        *backend_libs__switch_util__Int_4 = backend_libs__switch_util__IntPrime_5;
#line 1467 "switch_util.m"
      }
#line 1467 "switch_util.m"
    else
#line 1470 "switch_util.m"
      {
#line 1470 "switch_util.m"
        {
#line 1470 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_int_tag\'/2", (MR_String) "not int_tag");
#line 1470 "switch_util.m"
          return;
        }
#line 1470 "switch_util.m"
      }
#line 1469 "switch_util.m"
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
#line 1144 "switch_util.m"
  {
#line 1144 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1144 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeCtor_9;
#line 1144 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeTable_10;
#line 1144 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeDefn_11;
#line 1144 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeBody_12;
#line 1144 "switch_util.m"
    MR_Word backend_libs__switch_util__TagList_23;
#line 1144 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCountMap0_29;

#line 1145 "switch_util.m"
    {
#line 1145 "switch_util.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(backend_libs__switch_util__Type_5, &backend_libs__switch_util__TypeCtor_9);
    }
#line 1146 "switch_util.m"
    {
#line 1146 "switch_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__switch_util__ModuleInfo_6, &backend_libs__switch_util__TypeTable_10);
    }
#line 1147 "switch_util.m"
    {
#line 1147 "switch_util.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(backend_libs__switch_util__TypeTable_10, backend_libs__switch_util__TypeCtor_9, &backend_libs__switch_util__TypeDefn_11);
    }
#line 1148 "switch_util.m"
    {
#line 1148 "switch_util.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__switch_util__TypeDefn_11, &backend_libs__switch_util__TypeBody_12);
    }
#line 1153 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__TypeBody_12)) == (MR_mktag((MR_Integer) 1))))
#line 1150 "switch_util.m"
      {
#line 1150 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1150 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1150 "switch_util.m"
        MR_Word backend_libs__switch_util__ConsTable_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 1)));
#line 1150 "switch_util.m"
        MR_Word backend_libs__switch_util__ConsList_22;
#line 1150 "switch_util.m"
        MR_Word backend_libs__switch_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 0)));
#line 1150 "switch_util.m"
        MR_Word backend_libs__switch_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 2)));
#line 1150 "switch_util.m"
        MR_Word backend_libs__switch_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 3)));
#line 1150 "switch_util.m"
        MR_Word backend_libs__switch_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 4)));
#line 1150 "switch_util.m"
        MR_Word backend_libs__switch_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 5)));
#line 1150 "switch_util.m"
        MR_Word backend_libs__switch_util__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1150 "switch_util.m"
        MR_Word backend_libs__switch_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1150 "switch_util.m"
        MR_Word backend_libs__switch_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 7)));

#line 1151 "switch_util.m"
        {
#line 1151 "switch_util.m"
          mercury__map__to_assoc_list_2_p_0(backend_libs__switch_util__TypeCtorInfo_34_34, backend_libs__switch_util__TypeCtorInfo_35_35, backend_libs__switch_util__ConsTable_14, &backend_libs__switch_util__ConsList_22);
        }
#line 1152 "switch_util.m"
        {
#line 1152 "switch_util.m"
          mercury__assoc_list__values_2_p_0(backend_libs__switch_util__TypeCtorInfo_34_34, backend_libs__switch_util__TypeCtorInfo_35_35, backend_libs__switch_util__ConsList_22, &backend_libs__switch_util__TagList_23);
        }
#line 1150 "switch_util.m"
      }
#line 1153 "switch_util.m"
    else
#line 1158 "switch_util.m"
      {
#line 1159 "switch_util.m"
        {
#line 1159 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts\'/4", (MR_String) "non-du type");
#line 1159 "switch_util.m"
          return;
        }
#line 1158 "switch_util.m"
      }
#line 1161 "switch_util.m"
    {
#line 1161 "switch_util.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__switch_util_scalar_common_2[0], &backend_libs__switch_util__PtagCountMap0_29);
    }
#line 1162 "switch_util.m"
    {
#line 1162 "switch_util.m"
      backend_libs__switch_util__get_ptag_counts_loop_5_p_0(backend_libs__switch_util__TagList_23, (MR_Integer) -1, backend_libs__switch_util__MaxPrimary_7, backend_libs__switch_util__PtagCountMap0_29, backend_libs__switch_util__PtagCountMap_8);
#line 1162 "switch_util.m"
      return;
    }
#line 1144 "switch_util.m"
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
#line 1455 "switch_util.m"
  while (MR_TRUE)
#line 1455 "switch_util.m"
    {
#line 1455 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1455 "switch_util.m"
      {
#line 1455 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__MaxPtag_6 >= backend_libs__switch_util__Ptag_5);

#line 1455 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1445 "switch_util.m"
          {
#line 1445 "switch_util.m"
            MR_Integer backend_libs__switch_util__NextPtag_9 = (backend_libs__switch_util__Ptag_5 + (MR_Integer) 1);
#line 1452 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_21_21;
#line 1452 "switch_util.m"
            MR_Word backend_libs__switch_util__PtagCase_10;
#line 1446 "switch_util.m"
            MR_Box backend_libs__switch_util__conv0_PtagCase_10;

#line 12314 "backend_libs.switch_util.c"
            {
#line 12316 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12318 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_21_21, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12320 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_21_21, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_18));
#line 12322 "backend_libs.switch_util.c"
            }
#line 1446 "switch_util.m"
            {
#line 1446 "switch_util.m"
              backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_21_21, (MR_Word) backend_libs__switch_util__PtagCaseMap0_7, backend_libs__switch_util__Ptag_5, &backend_libs__switch_util__conv0_PtagCase_10);
            }
#line 1446 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1446 "switch_util.m"
              {
#line 1446 "switch_util.m"
                backend_libs__switch_util__PtagCase_10 = ((MR_Word) backend_libs__switch_util__conv0_PtagCase_10);
#line 1446 "switch_util.m"
                backend_libs__switch_util__succeeded = MR_TRUE;
#line 1446 "switch_util.m"
              }
#line 1452 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1447 "switch_util.m"
              {
#line 1447 "switch_util.m"
                MR_Word backend_libs__switch_util__PtagCaseMap1_11;
#line 1447 "switch_util.m"
                MR_Word backend_libs__switch_util__PtagCaseList1_12;
#line 1447 "switch_util.m"
                MR_Word backend_libs__switch_util__PtagCaseEntry_13;

#line 1447 "switch_util.m"
                {
#line 1447 "switch_util.m"
                  mercury__map__delete_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_21_21, ((MR_Box) (backend_libs__switch_util__Ptag_5)), backend_libs__switch_util__PtagCaseMap0_7, &backend_libs__switch_util__PtagCaseMap1_11);
                }
#line 1448 "switch_util.m"
                {
#line 1448 "switch_util.m"
                  backend_libs__switch_util__order_ptags_by_value_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_18, backend_libs__switch_util__NextPtag_9, backend_libs__switch_util__MaxPtag_6, backend_libs__switch_util__PtagCaseMap1_11, &backend_libs__switch_util__PtagCaseList1_12);
                }
#line 1450 "switch_util.m"
                {
#line 1450 "switch_util.m"
                  backend_libs__switch_util__PtagCaseEntry_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1450 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__PtagCaseEntry_13, 0) = ((MR_Box) (backend_libs__switch_util__Ptag_5));
#line 1450 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__PtagCaseEntry_13, 1) = ((MR_Box) (backend_libs__switch_util__PtagCase_10));
#line 1450 "switch_util.m"
                }
#line 1451 "switch_util.m"
                {
#line 1451 "switch_util.m"
                  MR_Word base;
#line 1451 "switch_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1451 "switch_util.m"
                  *backend_libs__switch_util__PtagCaseList_8 = base;
#line 1451 "switch_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__PtagCaseEntry_13));
#line 1451 "switch_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__PtagCaseList1_12));
#line 1451 "switch_util.m"
                }
#line 1447 "switch_util.m"
              }
#line 1452 "switch_util.m"
            else
#line 1453 "switch_util.m"
              {
#line 1453 "switch_util.m"
                /* direct tailcall eliminated */
#line 1453 "switch_util.m"
                {
#line 1453 "switch_util.m"
                  MR_Integer backend_libs__switch_util__Ptag__tmp_copy_5 = backend_libs__switch_util__NextPtag_9;

#line 1453 "switch_util.m"
                  backend_libs__switch_util__Ptag_5 = backend_libs__switch_util__Ptag__tmp_copy_5;
#line 1453 "switch_util.m"
                }
#line 1453 "switch_util.m"
                continue;
#line 1453 "switch_util.m"
              }
#line 1445 "switch_util.m"
          }
#line 1455 "switch_util.m"
        else
#line 1458 "switch_util.m"
          {
#line 1456 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_27_27;

#line 12414 "backend_libs.switch_util.c"
            {
#line 12416 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12418 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_27_27, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12420 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_27_27, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_18));
#line 12422 "backend_libs.switch_util.c"
            }
#line 1456 "switch_util.m"
            {
#line 1456 "switch_util.m"
              backend_libs__switch_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_27_27, backend_libs__switch_util__PtagCaseMap0_7);
            }
#line 1458 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1457 "switch_util.m"
              *backend_libs__switch_util__PtagCaseList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1458 "switch_util.m"
            else
#line 1459 "switch_util.m"
              {
#line 1459 "switch_util.m"
                {
#line 1459 "switch_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.order_ptags_by_value\'/4", (MR_String) "PtagCaseMap0 is not empty");
#line 1459 "switch_util.m"
                  return;
                }
#line 1459 "switch_util.m"
              }
#line 1458 "switch_util.m"
          }
#line 1455 "switch_util.m"
      }
#line 1455 "switch_util.m"
      break;
#line 1455 "switch_util.m"
    }
#line 345 "switch_util.m"
}

#line 1370 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__order_ptags_by_count_3_p_0_1(
#line 1370 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1370 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1370 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2)
#line 1370 "switch_util.m"
{
#line 1370 "switch_util.m"
  {
#line 1370 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 1370 "switch_util.m"
    MR_Word backend_libs__switch_util__conv3_GroupEntry_4;

#line 1370 "switch_util.m"
    {
#line 1370 "switch_util.m"
      backend_libs__switch_util__interpret_rev_map_entry_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv3_GroupEntry_4);
    }
#line 1370 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv3_GroupEntry_4));
#line 1370 "switch_util.m"
  }
#line 1370 "switch_util.m"
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
#line 1361 "switch_util.m"
  {
#line 1361 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1361 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_17_17;
#line 1361 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_19_19;
#line 1361 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_23_23;
#line 1361 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseList_7;
#line 1361 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseRevMap_8;
#line 1361 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseRevList_9;
#line 1361 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseRevSortedList_10;
#line 1361 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseSortedList_11;
#line 1361 "switch_util.m"
    MR_Word backend_libs__switch_util__V_12_12;
#line 1361 "switch_util.m"
    MR_Word backend_libs__switch_util__V_13_13;
#line 1364 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_V_12_12;
#line 1366 "switch_util.m"
    MR_Word backend_libs__switch_util__conv1_PtagCaseRevSortedList_10;
#line 1369 "switch_util.m"
    MR_Word backend_libs__switch_util__conv2_PtagCaseSortedList_11;

#line 12531 "backend_libs.switch_util.c"
    {
#line 12533 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12535 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12537 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 12539 "backend_libs.switch_util.c"
    }
#line 1362 "switch_util.m"
    {
#line 1362 "switch_util.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_17_17, backend_libs__switch_util__PtagCaseMap_5, &backend_libs__switch_util__PtagCaseList_7);
    }
#line 12546 "backend_libs.switch_util.c"
    {
#line 12548 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12550 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_19_19, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 12552 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_19_19, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 12554 "backend_libs.switch_util.c"
    }
#line 1364 "switch_util.m"
    {
#line 1364 "switch_util.m"
      backend_libs__switch_util__conv0_V_12_12 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeInfo_17_17, backend_libs__switch_util__TypeInfo_19_19);
    }
#line 1364 "switch_util.m"
    backend_libs__switch_util__V_12_12 = (MR_Word) backend_libs__switch_util__conv0_V_12_12;
#line 1363 "switch_util.m"
    {
#line 1363 "switch_util.m"
      backend_libs__switch_util__build_ptag_case_rev_map_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_14, backend_libs__switch_util__PtagCaseList_7, backend_libs__switch_util__PtagCountMap_4, backend_libs__switch_util__V_12_12, &backend_libs__switch_util__PtagCaseRevMap_8);
    }
#line 1365 "switch_util.m"
    {
#line 1365 "switch_util.m"
      mercury__map__values_2_p_0(backend_libs__switch_util__TypeInfo_17_17, backend_libs__switch_util__TypeInfo_19_19, (MR_Word) backend_libs__switch_util__PtagCaseRevMap_8, &backend_libs__switch_util__PtagCaseRevList_9);
    }
#line 1366 "switch_util.m"
    {
#line 1366 "switch_util.m"
      mercury__list__sort_2_p_0(backend_libs__switch_util__TypeInfo_19_19, (MR_Word) backend_libs__switch_util__PtagCaseRevList_9, &backend_libs__switch_util__conv1_PtagCaseRevSortedList_10);
    }
#line 1366 "switch_util.m"
    backend_libs__switch_util__PtagCaseRevSortedList_10 = (MR_Word) backend_libs__switch_util__conv1_PtagCaseRevSortedList_10;
#line 1369 "switch_util.m"
    {
#line 1369 "switch_util.m"
      mercury__list__reverse_2_p_0(backend_libs__switch_util__TypeInfo_19_19, (MR_Word) backend_libs__switch_util__PtagCaseRevSortedList_10, &backend_libs__switch_util__conv2_PtagCaseSortedList_11);
    }
#line 1369 "switch_util.m"
    backend_libs__switch_util__PtagCaseSortedList_11 = (MR_Word) backend_libs__switch_util__conv2_PtagCaseSortedList_11;
#line 1370 "switch_util.m"
    {
#line 1370 "switch_util.m"
      backend_libs__switch_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1370 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_4[0]));
#line 1370 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 1) = ((MR_Box) (backend_libs__switch_util__order_ptags_by_count_3_p_0_1));
#line 1370 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1370 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 1370 "switch_util.m"
    }
#line 12601 "backend_libs.switch_util.c"
    {
#line 12603 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12605 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1));
#line 12607 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 12609 "backend_libs.switch_util.c"
    }
#line 1370 "switch_util.m"
    {
#line 1370 "switch_util.m"
      mercury__list__map_3_p_0(backend_libs__switch_util__TypeInfo_19_19, backend_libs__switch_util__TypeInfo_23_23, (MR_Word) backend_libs__switch_util__V_13_13, (MR_Word) backend_libs__switch_util__PtagCaseSortedList_11, backend_libs__switch_util__PtagGroupCaseList_6);
#line 1370 "switch_util.m"
      return;
    }
#line 1361 "switch_util.m"
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
#line 1252 "switch_util.m"
  {
#line 1252 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1252 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1252 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_36_36;
#line 1252 "switch_util.m"
    MR_Word backend_libs__switch_util__V_27_27;
#line 1252 "switch_util.m"
    MR_Word backend_libs__switch_util__V_28_28;

#line 1255 "switch_util.m"
    {
#line 1255 "switch_util.m"
      backend_libs__switch_util__V_27_27 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_33_33, (MR_Word) &backend_libs__switch_util_scalar_common_1[0]);
    }
#line 12674 "backend_libs.switch_util.c"
    {
#line 12676 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12678 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_36_36, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12680 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_36_36, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_29));
#line 12682 "backend_libs.switch_util.c"
    }
#line 1255 "switch_util.m"
    {
#line 1255 "switch_util.m"
      backend_libs__switch_util__V_28_28 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_33_33, backend_libs__switch_util__TypeInfo_36_36);
    }
#line 1253 "switch_util.m"
    {
#line 1253 "switch_util.m"
      backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_29, backend_libs__switch_util__TaggedCases_11, backend_libs__switch_util__RepresentCase_12, backend_libs__switch_util__STATE_VARIABLE_StateA_0_18, backend_libs__switch_util__STATE_VARIABLE_StateA_19, backend_libs__switch_util__STATE_VARIABLE_StateB_0_20, backend_libs__switch_util__STATE_VARIABLE_StateB_21, backend_libs__switch_util__STATE_VARIABLE_StateC_0_22, backend_libs__switch_util__STATE_VARIABLE_StateC_23, backend_libs__switch_util__V_27_27, backend_libs__switch_util__CaseNumPtagsMap_16, backend_libs__switch_util__V_28_28, backend_libs__switch_util__PtagCaseMap_17);
#line 1253 "switch_util.m"
      return;
    }
#line 1252 "switch_util.m"
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
#line 1104 "switch_util.m"
  {
#line 1104 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1104 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_33_33;
#line 1104 "switch_util.m"
    MR_Word backend_libs__switch_util__UnsortedTable_16;
#line 1107 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_SortedTable_15;

#line 1105 "switch_util.m"
    {
#line 1105 "switch_util.m"
      backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_27, backend_libs__switch_util__TaggedCases_10, backend_libs__switch_util__RepresentCase_11, backend_libs__switch_util__STATE_VARIABLE_StateA_0_17, backend_libs__switch_util__STATE_VARIABLE_StateA_18, backend_libs__switch_util__STATE_VARIABLE_StateB_0_19, backend_libs__switch_util__STATE_VARIABLE_StateB_20, backend_libs__switch_util__STATE_VARIABLE_StateC_0_21, backend_libs__switch_util__STATE_VARIABLE_StateC_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__switch_util__UnsortedTable_16);
    }
#line 12748 "backend_libs.switch_util.c"
    {
#line 12750 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12752 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_33_33, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 12754 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_33_33, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 12756 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_33_33, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_27));
#line 12758 "backend_libs.switch_util.c"
    }
#line 1107 "switch_util.m"
    {
#line 1107 "switch_util.m"
      mercury__list__sort_2_p_0(backend_libs__switch_util__TypeInfo_33_33, (MR_Word) backend_libs__switch_util__UnsortedTable_16, &backend_libs__switch_util__conv0_SortedTable_15);
    }
#line 1107 "switch_util.m"
    *backend_libs__switch_util__SortedTable_15 = (MR_Word) backend_libs__switch_util__conv0_SortedTable_15;
#line 1104 "switch_util.m"
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
#line 836 "switch_util.m"
  {
#line 836 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 836 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_84_84;
#line 836 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeCtorInfo_85_85;
#line 836 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_87_87;
#line 836 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumStrs_13;
#line 836 "switch_util.m"
    MR_Integer backend_libs__switch_util__LogNumStrs_14;
#line 836 "switch_util.m"
    MR_Integer backend_libs__switch_util__RoundedUpNumStrs_15;
#line 836 "switch_util.m"
    MR_Integer backend_libs__switch_util__TableSizeA_16;
#line 836 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashMaskA_17;
#line 836 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap4A_18;
#line 836 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap5A_19;
#line 836 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap6A_20;
#line 836 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisions4A_21;
#line 836 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisions5A_22;
#line 836 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisions6A_23;
#line 836 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMapA_25;
#line 836 "switch_util.m"
    MR_Word backend_libs__switch_util__HashOpA_26;
#line 836 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisionsA_27;
#line 836 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap_28;
#line 836 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsList_37;
#line 836 "switch_util.m"
    MR_Word backend_libs__switch_util__V_41_41;
#line 836 "switch_util.m"
    MR_Word backend_libs__switch_util__V_42_42;
#line 836 "switch_util.m"
    MR_Word backend_libs__switch_util__V_43_43;

#line 12840 "backend_libs.switch_util.c"
    {
#line 12842 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12844 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_84_84, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 12846 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_84_84, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 12848 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_84_84, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_81));
#line 12850 "backend_libs.switch_util.c"
    }
#line 843 "switch_util.m"
    {
#line 843 "switch_util.m"
      mercury__list__length_2_p_0(backend_libs__switch_util__TypeInfo_84_84, (MR_Word) backend_libs__switch_util__StrsDatas_7, &backend_libs__switch_util__NumStrs_13);
    }
#line 844 "switch_util.m"
    {
#line 844 "switch_util.m"
      mercury__int__log2_2_p_0(backend_libs__switch_util__NumStrs_13, &backend_libs__switch_util__LogNumStrs_14);
    }
#line 845 "switch_util.m"
    {
#line 845 "switch_util.m"
      mercury__int__pow_3_p_0((MR_Integer) 2, backend_libs__switch_util__LogNumStrs_14, &backend_libs__switch_util__RoundedUpNumStrs_15);
    }
#line 847 "switch_util.m"
    backend_libs__switch_util__TableSizeA_16 = ((MR_Integer) 2 * backend_libs__switch_util__RoundedUpNumStrs_15);
#line 850 "switch_util.m"
    backend_libs__switch_util__HashMaskA_17 = (backend_libs__switch_util__TableSizeA_16 - (MR_Integer) 1);
#line 12871 "backend_libs.switch_util.c"
    backend_libs__switch_util__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 12873 "backend_libs.switch_util.c"
    {
#line 12875 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12877 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_87_87, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 12879 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_87_87, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_84_84));
#line 12881 "backend_libs.switch_util.c"
    }
#line 852 "switch_util.m"
    {
#line 852 "switch_util.m"
      backend_libs__switch_util__V_41_41 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
    }
#line 852 "switch_util.m"
    {
#line 852 "switch_util.m"
      backend_libs__switch_util__V_42_42 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
    }
#line 853 "switch_util.m"
    {
#line 853 "switch_util.m"
      backend_libs__switch_util__V_43_43 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
    }
#line 851 "switch_util.m"
    {
#line 851 "switch_util.m"
      backend_libs__switch_util__string_hash_cases_14_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_81, backend_libs__switch_util__StrsDatas_7, backend_libs__switch_util__HashMaskA_17, backend_libs__switch_util__V_41_41, &backend_libs__switch_util__HashValsMap4A_18, backend_libs__switch_util__V_42_42, &backend_libs__switch_util__HashValsMap5A_19, backend_libs__switch_util__V_43_43, &backend_libs__switch_util__HashValsMap6A_20, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions4A_21, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions5A_22, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions6A_23);
    }
#line 859 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions4A_21 <= backend_libs__switch_util__NumCollisions5A_22);
#line 859 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 859 "switch_util.m"
      backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions4A_21 <= backend_libs__switch_util__NumCollisions6A_23);
#line 863 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 860 "switch_util.m"
      {
#line 860 "switch_util.m"
        backend_libs__switch_util__HashValsMapA_25 = backend_libs__switch_util__HashValsMap4A_18;
#line 861 "switch_util.m"
        backend_libs__switch_util__HashOpA_26 = (MR_Integer) 11;
#line 862 "switch_util.m"
        backend_libs__switch_util__NumCollisionsA_27 = backend_libs__switch_util__NumCollisions4A_21;
#line 860 "switch_util.m"
      }
#line 863 "switch_util.m"
    else
#line 867 "switch_util.m"
      {
#line 863 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions5A_22 <= backend_libs__switch_util__NumCollisions6A_23);
#line 867 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 864 "switch_util.m"
          {
#line 864 "switch_util.m"
            backend_libs__switch_util__HashValsMapA_25 = backend_libs__switch_util__HashValsMap5A_19;
#line 865 "switch_util.m"
            backend_libs__switch_util__HashOpA_26 = (MR_Integer) 12;
#line 866 "switch_util.m"
            backend_libs__switch_util__NumCollisionsA_27 = backend_libs__switch_util__NumCollisions5A_22;
#line 864 "switch_util.m"
          }
#line 867 "switch_util.m"
        else
#line 868 "switch_util.m"
          {
#line 868 "switch_util.m"
            backend_libs__switch_util__HashValsMapA_25 = backend_libs__switch_util__HashValsMap6A_20;
#line 869 "switch_util.m"
            backend_libs__switch_util__HashOpA_26 = (MR_Integer) 13;
#line 870 "switch_util.m"
            backend_libs__switch_util__NumCollisionsA_27 = backend_libs__switch_util__NumCollisions6A_23;
#line 868 "switch_util.m"
          }
#line 867 "switch_util.m"
      }
#line 874 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisionsA_27 == (MR_Integer) 0);
#line 875 "switch_util.m"
    if (!(backend_libs__switch_util__succeeded))
#line 875 "switch_util.m"
      backend_libs__switch_util__succeeded = (backend_libs__switch_util__Upgrade_8 == (MR_Integer) 0);
#line 882 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 878 "switch_util.m"
      {
#line 878 "switch_util.m"
        *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeA_16;
#line 879 "switch_util.m"
        backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMapA_25;
#line 880 "switch_util.m"
        *backend_libs__switch_util__HashOp_11 = backend_libs__switch_util__HashOpA_26;
#line 881 "switch_util.m"
        *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisionsA_27;
#line 878 "switch_util.m"
      }
#line 882 "switch_util.m"
    else
#line 883 "switch_util.m"
      {
#line 883 "switch_util.m"
        MR_Integer backend_libs__switch_util__TableSizeB_29 = ((MR_Integer) 4 * backend_libs__switch_util__RoundedUpNumStrs_15);
#line 883 "switch_util.m"
        MR_Integer backend_libs__switch_util__HashMaskB_30 = (backend_libs__switch_util__TableSizeB_29 - (MR_Integer) 1);
#line 883 "switch_util.m"
        MR_Word backend_libs__switch_util__HashValsMap4B_31;
#line 883 "switch_util.m"
        MR_Word backend_libs__switch_util__HashValsMap5B_32;
#line 883 "switch_util.m"
        MR_Word backend_libs__switch_util__HashValsMap6B_33;
#line 883 "switch_util.m"
        MR_Integer backend_libs__switch_util__NumCollisions4B_34;
#line 883 "switch_util.m"
        MR_Integer backend_libs__switch_util__NumCollisions5B_35;
#line 883 "switch_util.m"
        MR_Integer backend_libs__switch_util__NumCollisions6B_36;
#line 883 "switch_util.m"
        MR_Word backend_libs__switch_util__V_59_59;
#line 883 "switch_util.m"
        MR_Word backend_libs__switch_util__V_60_60;
#line 883 "switch_util.m"
        MR_Word backend_libs__switch_util__V_61_61;

#line 888 "switch_util.m"
        {
#line 888 "switch_util.m"
          backend_libs__switch_util__V_59_59 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
        }
#line 888 "switch_util.m"
        {
#line 888 "switch_util.m"
          backend_libs__switch_util__V_60_60 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
        }
#line 889 "switch_util.m"
        {
#line 889 "switch_util.m"
          backend_libs__switch_util__V_61_61 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
        }
#line 887 "switch_util.m"
        {
#line 887 "switch_util.m"
          backend_libs__switch_util__string_hash_cases_14_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_81, backend_libs__switch_util__StrsDatas_7, backend_libs__switch_util__HashMaskB_30, backend_libs__switch_util__V_59_59, &backend_libs__switch_util__HashValsMap4B_31, backend_libs__switch_util__V_60_60, &backend_libs__switch_util__HashValsMap5B_32, backend_libs__switch_util__V_61_61, &backend_libs__switch_util__HashValsMap6B_33, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions4B_34, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions5B_35, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions6B_36);
        }
#line 896 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions4B_34 == (MR_Integer) 0);
#line 901 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 897 "switch_util.m"
          {
#line 897 "switch_util.m"
            *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeB_29;
#line 898 "switch_util.m"
            backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMap4B_31;
#line 899 "switch_util.m"
            *backend_libs__switch_util__HashOp_11 = (MR_Integer) 11;
#line 900 "switch_util.m"
            *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisions4B_34;
#line 897 "switch_util.m"
          }
#line 901 "switch_util.m"
        else
#line 906 "switch_util.m"
          {
#line 901 "switch_util.m"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions5B_35 == (MR_Integer) 0);
#line 906 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 902 "switch_util.m"
              {
#line 902 "switch_util.m"
                *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeB_29;
#line 903 "switch_util.m"
                backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMap5B_32;
#line 904 "switch_util.m"
                *backend_libs__switch_util__HashOp_11 = (MR_Integer) 12;
#line 905 "switch_util.m"
                *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisions5B_35;
#line 902 "switch_util.m"
              }
#line 906 "switch_util.m"
            else
#line 911 "switch_util.m"
              {
#line 906 "switch_util.m"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions6B_36 == (MR_Integer) 0);
#line 911 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 907 "switch_util.m"
                  {
#line 907 "switch_util.m"
                    *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeB_29;
#line 908 "switch_util.m"
                    backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMap6B_33;
#line 909 "switch_util.m"
                    *backend_libs__switch_util__HashOp_11 = (MR_Integer) 13;
#line 910 "switch_util.m"
                    *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisions6B_36;
#line 907 "switch_util.m"
                  }
#line 911 "switch_util.m"
                else
#line 912 "switch_util.m"
                  {
#line 912 "switch_util.m"
                    *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeA_16;
#line 913 "switch_util.m"
                    backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMapA_25;
#line 914 "switch_util.m"
                    *backend_libs__switch_util__HashOp_11 = backend_libs__switch_util__HashOpA_26;
#line 915 "switch_util.m"
                    *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisionsA_27;
#line 912 "switch_util.m"
                  }
#line 911 "switch_util.m"
              }
#line 906 "switch_util.m"
          }
#line 883 "switch_util.m"
      }
#line 925 "switch_util.m"
    {
#line 925 "switch_util.m"
      mercury__map__to_assoc_list_2_p_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87, backend_libs__switch_util__HashValsMap_28, &backend_libs__switch_util__HashValsList_37);
    }
#line 926 "switch_util.m"
    {
#line 926 "switch_util.m"
      backend_libs__switch_util__calc_string_hash_slots_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_81, *backend_libs__switch_util__TableSize_9, backend_libs__switch_util__HashValsList_37, backend_libs__switch_util__HashValsMap_28, backend_libs__switch_util__HashSlotsMap_10);
#line 926 "switch_util.m"
      return;
    }
#line 836 "switch_util.m"
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
#line 816 "switch_util.m"
  {
#line 816 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 816 "switch_util.m"
    MR_Integer backend_libs__switch_util__HostWordBits_7;
#line 816 "switch_util.m"
    MR_Integer backend_libs__switch_util__TargetWordBits_8;
#line 816 "switch_util.m"
    MR_Integer backend_libs__switch_util__WordBits0_9;
#line 816 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_14_14;
#line 816 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_15_15;

#line 817 "switch_util.m"
    {
#line 817 "switch_util.m"
      mercury__int__bits_per_int_1_p_0(&backend_libs__switch_util__HostWordBits_7);
    }
#line 818 "switch_util.m"
    {
#line 818 "switch_util.m"
      libs__globals__lookup_int_option_3_p_0(backend_libs__switch_util__Globals_4, (MR_Integer) 240, &backend_libs__switch_util__TargetWordBits_8);
    }
#line 819 "switch_util.m"
    {
#line 819 "switch_util.m"
      mercury__int__min_3_p_0(backend_libs__switch_util__HostWordBits_7, backend_libs__switch_util__TargetWordBits_8, &backend_libs__switch_util__WordBits0_9);
    }
#line 827 "switch_util.m"
    backend_libs__switch_util__V_14_14 = (backend_libs__switch_util__WordBits0_9 + (MR_Integer) 1);
#line 827 "switch_util.m"
    {
#line 827 "switch_util.m"
      mercury__int__log2_2_p_0(backend_libs__switch_util__V_14_14, &backend_libs__switch_util__V_15_15);
    }
#line 827 "switch_util.m"
    *backend_libs__switch_util__Log2WordBits_6 = (backend_libs__switch_util__V_15_15 - (MR_Integer) 1);
#line 822 "switch_util.m"
    {
#line 822 "switch_util.m"
      mercury__int__pow_3_p_0((MR_Integer) 2, *backend_libs__switch_util__Log2WordBits_6, backend_libs__switch_util__WordBits_5);
#line 822 "switch_util.m"
      return;
    }
#line 816 "switch_util.m"
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
#line 804 "switch_util.m"
  while (MR_TRUE)
#line 804 "switch_util.m"
    {
#line 804 "switch_util.m"
      /* tailcall optimized into a loop */
#line 804 "switch_util.m"
      {
#line 804 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 804 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 804 "switch_util.m"
          *backend_libs__switch_util__STATE_VARIABLE_RvalsList_3 = backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2;
#line 804 "switch_util.m"
        else
#line 805 "switch_util.m"
          {
#line 805 "switch_util.m"
            MR_Word backend_libs__switch_util__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 805 "switch_util.m"
            MR_Word backend_libs__switch_util__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 805 "switch_util.m"
            MR_Word backend_libs__switch_util__Soln_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_7, (MR_Integer) 1)));
#line 805 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19;
#line 806 "switch_util.m"
            MR_Box backend_libs__switch_util___Index_10 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_7, (MR_Integer) 0));

#line 810 "switch_util.m"
            if (((MR_tag((MR_Word) backend_libs__switch_util__Soln_11)) == (MR_mktag((MR_Integer) 0))))
#line 808 "switch_util.m"
              {
#line 808 "switch_util.m"
                MR_Word backend_libs__switch_util__Rvals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Soln_11, (MR_Integer) 0)));

#line 809 "switch_util.m"
                {
#line 809 "switch_util.m"
                  backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19, 0) = ((MR_Box) (backend_libs__switch_util__Rvals_12));
#line 809 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19, 1) = ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2));
#line 809 "switch_util.m"
                }
#line 808 "switch_util.m"
              }
#line 810 "switch_util.m"
            else
#line 811 "switch_util.m"
              {
#line 811 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_24_24;
#line 811 "switch_util.m"
                MR_Word backend_libs__switch_util__FirstSolnRvals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__Soln_11, (MR_Integer) 0)));
#line 811 "switch_util.m"
                MR_Word backend_libs__switch_util__LaterSolnsRvalsList_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__Soln_11, (MR_Integer) 1)));
#line 811 "switch_util.m"
                MR_Word backend_libs__switch_util__V_18_18;

#line 13252 "backend_libs.switch_util.c"
                {
#line 13254 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13256 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 13258 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_22));
#line 13260 "backend_libs.switch_util.c"
                }
#line 812 "switch_util.m"
                {
#line 812 "switch_util.m"
                  backend_libs__switch_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_18_18, 0) = ((MR_Box) (backend_libs__switch_util__FirstSolnRvals_13));
#line 812 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_18_18, 1) = ((MR_Box) (backend_libs__switch_util__LaterSolnsRvalsList_14));
#line 812 "switch_util.m"
                }
#line 812 "switch_util.m"
                {
#line 812 "switch_util.m"
                  backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19 = mercury__list__f_43_43_2_f_0(backend_libs__switch_util__TypeInfo_24_24, backend_libs__switch_util__V_18_18, backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2);
                }
#line 811 "switch_util.m"
              }
#line 814 "switch_util.m"
            /* direct tailcall eliminated */
#line 814 "switch_util.m"
            {
#line 814 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Cases_8;
#line 814 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_RvalsList_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19;

#line 814 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2 = backend_libs__switch_util__STATE_VARIABLE_RvalsList_0__tmp_copy_2;
#line 814 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 814 "switch_util.m"
            }
#line 814 "switch_util.m"
            continue;
#line 805 "switch_util.m"
          }
#line 804 "switch_util.m"
      }
#line 804 "switch_util.m"
      break;
#line 804 "switch_util.m"
    }
#line 173 "switch_util.m"
}

#line 170 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util__project_all_to_one_solution_2_p_0(
#line 170 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_T_7,
#line 170 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_8,
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
    MR_Word backend_libs__switch_util__TypeCtorInfo_9_9;
#line 790 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_10_10;
#line 790 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeCtorInfo_11_11;
#line 790 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_12_12;
#line 790 "switch_util.m"
    MR_Word backend_libs__switch_util__RevCaseValuePairs_5;
#line 792 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_CaseValuePairs_4;

#line 791 "switch_util.m"
    {
#line 791 "switch_util.m"
      backend_libs__switch_util__succeeded = backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_114_111_106_101_99_116_95_97_108_108_95_116_111_95_111_110_101_95_115_111_108_117_116_105_111_110_95_95_91_49_44_32_50_93_95_48_3_p_0(backend_libs__switch_util__CaseSolns_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__switch_util__RevCaseValuePairs_5);
    }
#line 790 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 790 "switch_util.m"
      {
#line 13346 "backend_libs.switch_util.c"
        backend_libs__switch_util__TypeCtorInfo_11_11 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 13348 "backend_libs.switch_util.c"
        backend_libs__switch_util__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 13350 "backend_libs.switch_util.c"
        {
#line 13352 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13354 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_9_9));
#line 13356 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_8));
#line 13358 "backend_libs.switch_util.c"
        }
#line 13360 "backend_libs.switch_util.c"
        {
#line 13362 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13364 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_12_12, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_11_11));
#line 13366 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_12_12, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_T_7));
#line 13368 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_12_12, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_10_10));
#line 13370 "backend_libs.switch_util.c"
        }
#line 792 "switch_util.m"
        {
#line 792 "switch_util.m"
          mercury__list__reverse_2_p_0(backend_libs__switch_util__TypeInfo_12_12, (MR_Word) backend_libs__switch_util__RevCaseValuePairs_5, &backend_libs__switch_util__conv0_CaseValuePairs_4);
        }
#line 792 "switch_util.m"
        *backend_libs__switch_util__CaseValuePairs_4 = (MR_Word) backend_libs__switch_util__conv0_CaseValuePairs_4;
#line 792 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 790 "switch_util.m"
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
              libs__globals__lookup_bool_option_3_p_0(backend_libs__switch_util__Globals_10, (MR_Integer) 445, &backend_libs__switch_util__SmartIndexingForCategory_12);
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
                libs__globals__lookup_bool_option_3_p_0(backend_libs__switch_util__Globals_10, (MR_Integer) 448, &backend_libs__switch_util__SmartIndexingForCategory_34);
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
                  libs__globals__lookup_bool_option_3_p_0(backend_libs__switch_util__Globals_10, (MR_Integer) 446, &backend_libs__switch_util__SmartIndexingForCategory_35);
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
                  libs__globals__lookup_bool_option_3_p_0(backend_libs__switch_util__Globals_10, (MR_Integer) 447, &backend_libs__switch_util__SmartIndexingForCategory_36);
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
	MR_register_type_ctor_info(&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_case_num_ptags_map_0);
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
