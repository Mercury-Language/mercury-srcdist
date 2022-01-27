/*
** Automatically generated from `switch_util.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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




#line 141 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1;

#line 144 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1;

#line 147 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1;

#line 150 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

#line 153 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

#line 156 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 159 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 162 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1;

#line 165 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_2;

#line 168 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2;

#line 171 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2;

#line 174 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_0[1];

#line 177 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0;

#line 180 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2;

#line 183 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2;

#line 186 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2;

#line 189 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_1[2];

#line 192 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_1;

#line 195 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_0[1];

#line 198 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_1[1];

#line 201 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_3[2];

#line 204 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_3[2];

#line 207 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_3[2];

#line 210 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 213 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 216 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_several_llds_0_0[2];

#line 219 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_several_llds_0_0;

#line 222 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_several_llds_0_0[1];

#line 225 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_several_llds_0[1];

#line 228 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_several_llds_0[1];

#line 231 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_several_llds_0[1];

#line 234 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 237 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0;

#line 240 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1;

#line 243 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_is_int_switch_0[2];

#line 246 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_is_int_switch_0[2];

#line 249 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_is_int_switch_0[2];

#line 252 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_maybe_int_switch_info_0_0[3];

#line 255 "backend_libs.switch_util.c"
static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__field_names_maybe_int_switch_info_0_0[3];

#line 258 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0;

#line 261 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1;

#line 264 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0[1];

#line 267 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1[1];

#line 270 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_maybe_int_switch_info_0[2];

#line 273 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0[2];

#line 276 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0[2];

#line 279 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0;

#line 282 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1;

#line 285 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_bit_vec_check_0[2];

#line 288 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_bit_vec_check_0[2];

#line 291 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_bit_vec_check_0[2];

#line 294 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0;

#line 297 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1;

#line 300 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_range_check_0[2];

#line 303 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_range_check_0[2];

#line 306 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_range_check_0[2];

#line 309 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1;

#line 312 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_1_0[2];

#line 315 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0;

#line 318 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_1_0[1];

#line 321 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_1[1];

#line 324 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_1[1];

#line 327 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_1[1];

#line 330 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_entry_1_0[2];

#line 333 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0;

#line 336 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_entry_1_0[1];

#line 339 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_entry_1[1];

#line 342 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_entry_1[1];

#line 345 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_entry_1[1];

#line 348 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0;

#line 351 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_group_entry_1_0[3];

#line 354 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0;

#line 357 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_group_entry_1_0[1];

#line 360 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_group_entry_1[1];

#line 363 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_group_entry_1[1];

#line 366 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_group_entry_1[1];

#line 369 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1;

#line 372 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1;

#line 375 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1;

#line 378 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1__pseudo_backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1;

#line 381 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_rev_map_entry_1_0[4];

#line 384 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0;

#line 387 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_rev_map_entry_1_0[1];

#line 390 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_rev_map_entry_1[1];

#line 393 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_rev_map_entry_1[1];

#line 396 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_rev_map_entry_1[1];

#line 399 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0;

#line 402 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0;

#line 405 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_1;

#line 408 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_0[1];

#line 411 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0;

#line 414 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1;

#line 417 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_1[2];

#line 420 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1;

#line 423 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_0[1];

#line 426 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_1[1];

#line 429 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_soln_consts_1[2];

#line 432 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_soln_consts_1[2];

#line 435 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_soln_consts_1[2];

#line 438 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1;

#line 441 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1;

#line 444 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_string_hash_slot_1_0[3];

#line 447 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0;

#line 450 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0[1];

#line 453 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_string_hash_slot_1[1];

#line 456 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_string_hash_slot_1[1];

#line 459 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_string_hash_slot_1[1];

#line 462 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0;

#line 465 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1;

#line 468 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2;

#line 471 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3;

#line 474 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_switch_category_0[4];

#line 477 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_switch_category_0[4];

#line 480 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_switch_category_0[4];

#line 483 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0;

#line 486 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1;

#line 489 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_table_size_upgrade_0[2];

#line 492 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_table_size_upgrade_0[2];

#line 495 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_table_size_upgrade_0[2];

#line 498 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_3_0_10001(
#line 501 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 503 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 505 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 507 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 509 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5);

#line 512 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_3_0_10001(
#line 515 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 517 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 519 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 521 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 523 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 525 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_6);

#line 528 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_several_llds_0_0_10001(
#line 531 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 533 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 536 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_several_llds_0_0_10001(
#line 539 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 541 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 543 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 546 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_num_ptags_map_0_0_10001(
#line 549 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 551 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 554 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_num_ptags_map_0_0_10001(
#line 557 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 559 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 561 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 564 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0_10001(
#line 567 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 569 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 572 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0_10001(
#line 575 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 577 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 579 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 582 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____maybe_int_switch_info_0_0_10001(
#line 585 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 587 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 590 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____maybe_int_switch_info_0_0_10001(
#line 593 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 595 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 597 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 600 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_bit_vec_check_0_0_10001(
#line 603 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 605 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 608 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_bit_vec_check_0_0_10001(
#line 611 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 613 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 615 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 618 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_range_check_0_0_10001(
#line 621 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 623 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 626 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_range_check_0_0_10001(
#line 629 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 631 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 633 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 636 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_1_0_10001(
#line 639 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 641 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 643 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 646 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_1_0_10001(
#line 649 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 651 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 653 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 655 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 658 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_entry_1_0_10001(
#line 661 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 663 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 665 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 668 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_entry_1_0_10001(
#line 671 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 673 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 675 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 677 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 680 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_entry_1_0_10001(
#line 683 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 685 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 687 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 690 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_entry_1_0_10001(
#line 693 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 695 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 697 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 699 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 702 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_list_1_0_10001(
#line 705 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 707 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 709 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 712 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_list_1_0_10001(
#line 715 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 717 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 719 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 721 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 724 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_list_1_0_10001(
#line 727 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 729 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 731 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 734 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_list_1_0_10001(
#line 737 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 739 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 741 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 743 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 746 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_map_1_0_10001(
#line 749 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 751 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 753 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 756 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_map_1_0_10001(
#line 759 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 761 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 763 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 765 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 768 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0_10001(
#line 771 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 773 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 775 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 778 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0_10001(
#line 781 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 783 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 785 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 787 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 790 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0_10001(
#line 793 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 795 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 797 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 800 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0_10001(
#line 803 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 805 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 807 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 809 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 812 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_count_map_0_0_10001(
#line 815 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 817 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 820 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_count_map_0_0_10001(
#line 823 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 825 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 827 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 830 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____soln_consts_1_0_10001(
#line 833 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 835 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 837 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 840 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____soln_consts_1_0_10001(
#line 843 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 845 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 847 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 849 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 852 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_list_1_0_10001(
#line 855 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 857 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 859 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 862 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_list_1_0_10001(
#line 865 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 867 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 869 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 871 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 874 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_map_1_0_10001(
#line 877 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 879 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 881 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 884 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_map_1_0_10001(
#line 887 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 889 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 891 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 893 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 896 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____string_hash_slot_1_0_10001(
#line 899 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 901 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 903 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 906 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____string_hash_slot_1_0_10001(
#line 909 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 911 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 913 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 915 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 918 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____switch_category_0_0_10001(
#line 921 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 923 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 926 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____switch_category_0_0_10001(
#line 929 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 931 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 933 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 936 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____table_size_upgrade_0_0_10001(
#line 939 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 941 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 944 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____table_size_upgrade_0_0_10001(
#line 947 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 949 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 951 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 1222 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_50_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0_1(
#line 1222 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1222 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1222 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1222 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3,
#line 1222 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 1222 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_5);

#line 1207 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_50_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0(
#line 1207 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_65,
#line 1207 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1207 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1207 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1207 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1207 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1207 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1207 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1207 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1207 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9,
#line 1207 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_10,
#line 1207 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11,
#line 1207 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_12);

#line 1073 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0_1(
#line 1073 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1073 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1073 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1073 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3);

#line 1059 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(
#line 1059 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_54,
#line 1059 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1059 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1059 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1059 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1059 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1059 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1059 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1059 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1059 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9,
#line 1059 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10);

#line 744 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_114_111_106_101_99_116_95_97_108_108_95_116_111_95_111_110_101_95_115_111_108_117_116_105_111_110_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 744 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 744 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_0_2,
#line 744 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_3);

#line 450 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0_1(
#line 450 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 450 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 450 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 450 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 450 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 450 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 450 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_6,
#line 450 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_7,
#line 450 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_8,
#line 450 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_9,
#line 450 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_10);

#line 438 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0(
#line 438 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_1,
#line 438 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_3,
#line 438 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 438 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__5_5,
#line 438 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_6,
#line 438 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LowerLimit_7,
#line 438 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_8,
#line 438 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_UpperLimit_9,
#line 438 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_0_10,
#line 438 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumValues_11,
#line 438 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_12,
#line 438 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_13);

#line 432 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0_1(
#line 432 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 432 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 432 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2);

#line 424 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(
#line 424 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_1,
#line 424 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_3,
#line 424 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 424 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__5_5);

#line 417 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_2(
#line 417 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 417 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 417 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2);

#line 398 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_1(
#line 398 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 398 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 398 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 398 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 398 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 398 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 398 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_6,
#line 398 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_7,
#line 398 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_8,
#line 398 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_9,
#line 398 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_10);

#line 1362 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__build_ptag_case_rev_map__1362__1_3_p_0(
#line 1362 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1362 "switch_util.m"
  MR_Word backend_libs__switch_util__Case_14,
#line 1362 "switch_util.m"
  MR_Word backend_libs__switch_util__OldCase_21);

#line 1257 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1257__1_2_p_0(
#line 1257 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_21,
#line 1257 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_74);

#line 1271 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1271__1_2_p_0(
#line 1271 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_63,
#line 1271 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_94);

#line 1329 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0(
#line 1329 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1329 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1329 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1329 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3);

#line 1329 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0(
#line 1329 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_13,
#line 1329 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1329 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2);

#line 1344 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0(
#line 1344 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 1344 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1344 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1344 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3);

#line 1344 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0(
#line 1344 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 1344 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1344 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2);

#line 386 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0(
#line 386 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 386 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 386 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3);

#line 386 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0(
#line 386 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_1,
#line 386 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2);

#line 1362 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0_1(
#line 1362 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1347 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0(
#line 1347 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1347 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1347 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1347 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3,
#line 1347 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevMap_4);

#line 1322 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__interpret_rev_map_entry_2_p_0(
#line 1322 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_9,
#line 1322 "switch_util.m"
  MR_Word backend_libs__switch_util__RevEntry_3,
#line 1322 "switch_util.m"
  MR_Word * backend_libs__switch_util__GroupEntry_4);

#line 1257 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_2(
#line 1257 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1271 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_1(
#line 1271 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1227 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0(
#line 1227 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_107,
#line 1227 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_8,
#line 1227 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_9,
#line 1227 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_10,
#line 1227 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_52,
#line 1227 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_53,
#line 1227 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54,
#line 1227 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55);

#line 1114 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__get_ptag_counts_2_5_p_0(
#line 1114 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1114 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2,
#line 1114 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_3,
#line 1114 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4,
#line 1114 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_5);

#line 1076 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__add_string_binary_entry_4_p_0(
#line 1076 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 1076 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_5,
#line 1076 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_6,
#line 1076 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_12,
#line 1076 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_13);

#line 1037 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0_1(
#line 1037 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1031 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0(
#line 1031 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1031 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_6,
#line 1031 "switch_util.m"
  MR_Word backend_libs__switch_util__HomeMap_7,
#line 1031 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_8,
#line 1031 "switch_util.m"
  MR_Integer backend_libs__switch_util__LastUsed_9,
#line 1031 "switch_util.m"
  MR_Integer * backend_libs__switch_util__FreeSlot_10);

#line 1011 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__follow_hash_chain_3_p_0(
#line 1011 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_12,
#line 1011 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_4,
#line 1011 "switch_util.m"
  MR_Integer backend_libs__switch_util__Slot_5,
#line 1011 "switch_util.m"
  MR_Integer * backend_libs__switch_util__LastSlot_6);

#line 977 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(
#line 977 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_64,
#line 977 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 977 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__2_2,
#line 977 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__3_3,
#line 977 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 977 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5,
#line 977 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_6,
#line 977 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7,
#line 977 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_8);

#line 962 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hashes_7_p_0(
#line 962 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_32,
#line 962 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 962 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_2,
#line 962 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_3,
#line 962 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4,
#line 962 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_5,
#line 962 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6,
#line 962 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_7);

#line 947 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_4_p_0(
#line 947 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 947 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_5,
#line 947 "switch_util.m"
  MR_Word backend_libs__switch_util__HashValList_6,
#line 947 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_7,
#line 947 "switch_util.m"
  MR_Word * backend_libs__switch_util__SlotMap_8);

#line 901 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_case_14_p_0(
#line 901 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 901 "switch_util.m"
  MR_Word backend_libs__switch_util__StrCaseRep_15,
#line 901 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_16,
#line 901 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap1_0_31,
#line 901 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap1_32,
#line 901 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap2_0_33,
#line 901 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap2_34,
#line 901 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap3_0_35,
#line 901 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap3_36,
#line 901 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_0_37,
#line 901 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_38,
#line 901 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_0_39,
#line 901 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_40,
#line 901 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_0_41,
#line 901 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_42);

#line 880 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_cases_14_p_0(
#line 880 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 880 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 880 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_2,
#line 880 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap1_0_3,
#line 880 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap1_4,
#line 880 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap2_0_5,
#line 880 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap2_6,
#line 880 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap3_0_7,
#line 880 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap3_8,
#line 880 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_0_9,
#line 880 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_10,
#line 880 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_0_11,
#line 880 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_12,
#line 880 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_0_13,
#line 880 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_14);

#line 674 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__filter_out_failing_cases_2_5_p_0(
#line 674 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 674 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2,
#line 674 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_3,
#line 674 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_4,
#line 674 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_5);

#line 487 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__num_cons_ids_in_tagged_cases_2_5_p_0(
#line 487 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 487 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0_2,
#line 487 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumConsIds_3,
#line 487 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumArms_0_4,
#line 487 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumArms_5);

#line 465 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__tag_cons_id_in_int_switch_11_p_0(
#line 465 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_12,
#line 465 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsId_13,
#line 465 "switch_util.m"
  MR_Word * backend_libs__switch_util__TaggedConsId_14,
#line 465 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_21,
#line 465 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LowerLimit_22,
#line 465 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_23,
#line 465 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_UpperLimit_24,
#line 465 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_0_25,
#line 465 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumValues_26,
#line 465 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_27,
#line 465 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_28);

#line 459 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__tag_cons_id_3_p_0(
#line 459 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_4,
#line 459 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsId_5,
#line 459 "switch_util.m"
  MR_Word * backend_libs__switch_util__TaggedConsId_6);

#line 1320 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__order_ptags_by_count_3_p_0_1(
#line 1320 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1320 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1320 "switch_util.m"
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



#line 1764 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1772 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1780 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1788 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1797 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1
  }
};

#line 1805 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1813 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1822 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
  }
};

#line 1831 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1839 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_2
  }
};

#line 1848 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2
  }
};

#line 1856 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2
};

#line 1861 "backend_libs.switch_util.c"
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

#line 1876 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1884 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2
  }
};

#line 1893 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2
  }
};

#line 1901 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_1[2] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 3
};

#line 1907 "backend_libs.switch_util.c"
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

#line 1922 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0
};

#line 1927 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_1
};

#line 1932 "backend_libs.switch_util.c"
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

#line 1946 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_3[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_1
};

#line 1952 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_3[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1958 "backend_libs.switch_util.c"
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

#line 1979 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1987 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &backend_libs__switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1995 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_several_llds_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2001 "backend_libs.switch_util.c"
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

#line 2016 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_several_llds_0_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_several_llds_0_0
};

#line 2021 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_several_llds_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_several_llds_0_0
  }
};

#line 2030 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_several_llds_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_several_llds_0_0
};

#line 2035 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_several_llds_0[1] = {
  (MR_Integer) 0
};

#line 2040 "backend_libs.switch_util.c"
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

#line 2061 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 2070 "backend_libs.switch_util.c"
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

#line 2091 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0 = {
  (MR_String) "is_int_switch",
  (MR_Integer) 0
};

#line 2097 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1 = {
  (MR_String) "is_not_int_switch",
  (MR_Integer) 1
};

#line 2103 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_is_int_switch_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1
};

#line 2109 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_is_int_switch_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1
};

#line 2115 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_is_int_switch_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2121 "backend_libs.switch_util.c"
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

#line 2142 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_maybe_int_switch_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2149 "backend_libs.switch_util.c"
static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__field_names_maybe_int_switch_info_0_0[3] = {
  (MR_String) "lower_limit",
  (MR_String) "upper_limit",
  (MR_String) "num_values"
};

#line 2156 "backend_libs.switch_util.c"
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

#line 2171 "backend_libs.switch_util.c"
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

#line 2186 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1
};

#line 2191 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0
};

#line 2196 "backend_libs.switch_util.c"
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

#line 2210 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1
};

#line 2216 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2222 "backend_libs.switch_util.c"
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

#line 2243 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0 = {
  (MR_String) "need_bit_vec_check",
  (MR_Integer) 0
};

#line 2249 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1 = {
  (MR_String) "dont_need_bit_vec_check",
  (MR_Integer) 1
};

#line 2255 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_bit_vec_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1
};

#line 2261 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_bit_vec_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0
};

#line 2267 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_bit_vec_check_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2273 "backend_libs.switch_util.c"
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

#line 2294 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0 = {
  (MR_String) "need_range_check",
  (MR_Integer) 0
};

#line 2300 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1 = {
  (MR_String) "dont_need_range_check",
  (MR_Integer) 1
};

#line 2306 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_range_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1
};

#line 2312 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_range_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0
};

#line 2318 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_range_check_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2324 "backend_libs.switch_util.c"
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

#line 2345 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2354 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_1_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1
};

#line 2360 "backend_libs.switch_util.c"
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

#line 2375 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0
};

#line 2380 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_1_0
  }
};

#line 2389 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0
};

#line 2394 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_1[1] = {
  (MR_Integer) 0
};

#line 2399 "backend_libs.switch_util.c"
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

#line 2420 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_entry_1_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
};

#line 2426 "backend_libs.switch_util.c"
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

#line 2441 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_entry_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0
};

#line 2446 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_entry_1_0
  }
};

#line 2455 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_entry_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0
};

#line 2460 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_entry_1[1] = {
  (MR_Integer) 0
};

#line 2465 "backend_libs.switch_util.c"
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

#line 2486 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2494 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_group_entry_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
};

#line 2501 "backend_libs.switch_util.c"
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

#line 2516 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_group_entry_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0
};

#line 2521 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_group_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_group_entry_1_0
  }
};

#line 2530 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_group_entry_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0
};

#line 2535 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_group_entry_1[1] = {
  (MR_Integer) 0
};

#line 2540 "backend_libs.switch_util.c"
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

#line 2561 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1
  }
};

#line 2569 "backend_libs.switch_util.c"
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

#line 2590 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2598 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1
  }
};

#line 2606 "backend_libs.switch_util.c"
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

#line 2627 "backend_libs.switch_util.c"
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

#line 2648 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1__pseudo_backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1
  }
};

#line 2657 "backend_libs.switch_util.c"
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

#line 2678 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_rev_map_entry_1_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
};

#line 2686 "backend_libs.switch_util.c"
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

#line 2701 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_rev_map_entry_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0
};

#line 2706 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_rev_map_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_rev_map_entry_1_0
  }
};

#line 2715 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_rev_map_entry_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0
};

#line 2720 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_rev_map_entry_1[1] = {
  (MR_Integer) 0
};

#line 2725 "backend_libs.switch_util.c"
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

#line 2746 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2755 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__switch_util__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0
  }
};

#line 2764 "backend_libs.switch_util.c"
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

#line 2785 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2793 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_1
};

#line 2798 "backend_libs.switch_util.c"
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

#line 2813 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_1
  }
};

#line 2821 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_1[2] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1
};

#line 2827 "backend_libs.switch_util.c"
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

#line 2842 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0
};

#line 2847 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1
};

#line 2852 "backend_libs.switch_util.c"
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

#line 2866 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_soln_consts_1[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1
};

#line 2872 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_soln_consts_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2878 "backend_libs.switch_util.c"
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

#line 2899 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2908 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1
  }
};

#line 2916 "backend_libs.switch_util.c"
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

#line 2937 "backend_libs.switch_util.c"
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

#line 2958 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_string_hash_slot_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2965 "backend_libs.switch_util.c"
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

#line 2980 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0
};

#line 2985 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_string_hash_slot_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0
  }
};

#line 2994 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_string_hash_slot_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0
};

#line 2999 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_string_hash_slot_1[1] = {
  (MR_Integer) 0
};

#line 3004 "backend_libs.switch_util.c"
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

#line 3025 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0 = {
  (MR_String) "atomic_switch",
  (MR_Integer) 0
};

#line 3031 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1 = {
  (MR_String) "string_switch",
  (MR_Integer) 1
};

#line 3037 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2 = {
  (MR_String) "tag_switch",
  (MR_Integer) 2
};

#line 3043 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3 = {
  (MR_String) "float_switch",
  (MR_Integer) 3
};

#line 3049 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_switch_category_0[4] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3
};

#line 3057 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_switch_category_0[4] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2
};

#line 3065 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_switch_category_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 3073 "backend_libs.switch_util.c"
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

#line 3094 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0 = {
  (MR_String) "keep_first_size",
  (MR_Integer) 0
};

#line 3100 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1 = {
  (MR_String) "allow_doubling",
  (MR_Integer) 1
};

#line 3106 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_table_size_upgrade_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1
};

#line 3112 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_table_size_upgrade_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0
};

#line 3118 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_table_size_upgrade_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3124 "backend_libs.switch_util.c"
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

#line 3145 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_3_0_10001(
#line 3148 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3150 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3152 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3154 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 3156 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5)
#line 3158 "backend_libs.switch_util.c"
{
#line 3160 "backend_libs.switch_util.c"
  {
#line 3162 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3165 "backend_libs.switch_util.c"
    {
#line 3167 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____case_consts_3_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4), ((MR_Word) backend_libs__switch_util__wrapper_arg_5));
    }
#line 3170 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3172 "backend_libs.switch_util.c"
  }
#line 3174 "backend_libs.switch_util.c"
}

#line 3177 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_3_0_10001(
#line 3180 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3182 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3184 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3186 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 3188 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 3190 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_6)
#line 3192 "backend_libs.switch_util.c"
{
#line 3194 "backend_libs.switch_util.c"
  {
#line 3196 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3199 "backend_libs.switch_util.c"
    {
#line 3201 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____case_consts_3_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_5), ((MR_Word) backend_libs__switch_util__wrapper_arg_6));
    }
#line 3204 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_4 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3206 "backend_libs.switch_util.c"
  }
#line 3208 "backend_libs.switch_util.c"
}

#line 3211 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_several_llds_0_0_10001(
#line 3214 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3216 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3218 "backend_libs.switch_util.c"
{
#line 3220 "backend_libs.switch_util.c"
  {
#line 3222 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3225 "backend_libs.switch_util.c"
    {
#line 3227 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____case_consts_several_llds_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3230 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3232 "backend_libs.switch_util.c"
  }
#line 3234 "backend_libs.switch_util.c"
}

#line 3237 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_several_llds_0_0_10001(
#line 3240 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3242 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3244 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3246 "backend_libs.switch_util.c"
{
#line 3248 "backend_libs.switch_util.c"
  {
#line 3250 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3253 "backend_libs.switch_util.c"
    {
#line 3255 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____case_consts_several_llds_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3258 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3260 "backend_libs.switch_util.c"
  }
#line 3262 "backend_libs.switch_util.c"
}

#line 3265 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_num_ptags_map_0_0_10001(
#line 3268 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3270 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3272 "backend_libs.switch_util.c"
{
#line 3274 "backend_libs.switch_util.c"
  {
#line 3276 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3279 "backend_libs.switch_util.c"
    {
#line 3281 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____case_num_ptags_map_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3284 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3286 "backend_libs.switch_util.c"
  }
#line 3288 "backend_libs.switch_util.c"
}

#line 3291 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_num_ptags_map_0_0_10001(
#line 3294 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3296 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3298 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3300 "backend_libs.switch_util.c"
{
#line 3302 "backend_libs.switch_util.c"
  {
#line 3304 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3307 "backend_libs.switch_util.c"
    {
#line 3309 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____case_num_ptags_map_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3312 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3314 "backend_libs.switch_util.c"
  }
#line 3316 "backend_libs.switch_util.c"
}

#line 3319 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0_10001(
#line 3322 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3324 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3326 "backend_libs.switch_util.c"
{
#line 3328 "backend_libs.switch_util.c"
  {
#line 3330 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3333 "backend_libs.switch_util.c"
    {
#line 3335 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____is_int_switch_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3338 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3340 "backend_libs.switch_util.c"
  }
#line 3342 "backend_libs.switch_util.c"
}

#line 3345 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0_10001(
#line 3348 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3350 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3352 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3354 "backend_libs.switch_util.c"
{
#line 3356 "backend_libs.switch_util.c"
  {
#line 3358 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3361 "backend_libs.switch_util.c"
    {
#line 3363 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____is_int_switch_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3366 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3368 "backend_libs.switch_util.c"
  }
#line 3370 "backend_libs.switch_util.c"
}

#line 3373 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____maybe_int_switch_info_0_0_10001(
#line 3376 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3378 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3380 "backend_libs.switch_util.c"
{
#line 3382 "backend_libs.switch_util.c"
  {
#line 3384 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3387 "backend_libs.switch_util.c"
    {
#line 3389 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____maybe_int_switch_info_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3392 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3394 "backend_libs.switch_util.c"
  }
#line 3396 "backend_libs.switch_util.c"
}

#line 3399 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____maybe_int_switch_info_0_0_10001(
#line 3402 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3404 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3406 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3408 "backend_libs.switch_util.c"
{
#line 3410 "backend_libs.switch_util.c"
  {
#line 3412 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3415 "backend_libs.switch_util.c"
    {
#line 3417 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____maybe_int_switch_info_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3420 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3422 "backend_libs.switch_util.c"
  }
#line 3424 "backend_libs.switch_util.c"
}

#line 3427 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_bit_vec_check_0_0_10001(
#line 3430 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3432 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3434 "backend_libs.switch_util.c"
{
#line 3436 "backend_libs.switch_util.c"
  {
#line 3438 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3441 "backend_libs.switch_util.c"
    {
#line 3443 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____need_bit_vec_check_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3446 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3448 "backend_libs.switch_util.c"
  }
#line 3450 "backend_libs.switch_util.c"
}

#line 3453 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_bit_vec_check_0_0_10001(
#line 3456 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3458 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3460 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3462 "backend_libs.switch_util.c"
{
#line 3464 "backend_libs.switch_util.c"
  {
#line 3466 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3469 "backend_libs.switch_util.c"
    {
#line 3471 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____need_bit_vec_check_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3474 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3476 "backend_libs.switch_util.c"
  }
#line 3478 "backend_libs.switch_util.c"
}

#line 3481 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_range_check_0_0_10001(
#line 3484 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3486 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3488 "backend_libs.switch_util.c"
{
#line 3490 "backend_libs.switch_util.c"
  {
#line 3492 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3495 "backend_libs.switch_util.c"
    {
#line 3497 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____need_range_check_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3500 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3502 "backend_libs.switch_util.c"
  }
#line 3504 "backend_libs.switch_util.c"
}

#line 3507 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_range_check_0_0_10001(
#line 3510 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3512 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3514 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3516 "backend_libs.switch_util.c"
{
#line 3518 "backend_libs.switch_util.c"
  {
#line 3520 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3523 "backend_libs.switch_util.c"
    {
#line 3525 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____need_range_check_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3528 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3530 "backend_libs.switch_util.c"
  }
#line 3532 "backend_libs.switch_util.c"
}

#line 3535 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_1_0_10001(
#line 3538 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3540 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3542 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3544 "backend_libs.switch_util.c"
{
#line 3546 "backend_libs.switch_util.c"
  {
#line 3548 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3551 "backend_libs.switch_util.c"
    {
#line 3553 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3556 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3558 "backend_libs.switch_util.c"
  }
#line 3560 "backend_libs.switch_util.c"
}

#line 3563 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_1_0_10001(
#line 3566 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3568 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3570 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3572 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3574 "backend_libs.switch_util.c"
{
#line 3576 "backend_libs.switch_util.c"
  {
#line 3578 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3581 "backend_libs.switch_util.c"
    {
#line 3583 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3586 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3588 "backend_libs.switch_util.c"
  }
#line 3590 "backend_libs.switch_util.c"
}

#line 3593 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_entry_1_0_10001(
#line 3596 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3598 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3600 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3602 "backend_libs.switch_util.c"
{
#line 3604 "backend_libs.switch_util.c"
  {
#line 3606 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3609 "backend_libs.switch_util.c"
    {
#line 3611 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3614 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3616 "backend_libs.switch_util.c"
  }
#line 3618 "backend_libs.switch_util.c"
}

#line 3621 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_entry_1_0_10001(
#line 3624 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3626 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3628 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3630 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3632 "backend_libs.switch_util.c"
{
#line 3634 "backend_libs.switch_util.c"
  {
#line 3636 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3639 "backend_libs.switch_util.c"
    {
#line 3641 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3644 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3646 "backend_libs.switch_util.c"
  }
#line 3648 "backend_libs.switch_util.c"
}

#line 3651 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_entry_1_0_10001(
#line 3654 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3656 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3658 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3660 "backend_libs.switch_util.c"
{
#line 3662 "backend_libs.switch_util.c"
  {
#line 3664 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3667 "backend_libs.switch_util.c"
    {
#line 3669 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_group_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3672 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3674 "backend_libs.switch_util.c"
  }
#line 3676 "backend_libs.switch_util.c"
}

#line 3679 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_entry_1_0_10001(
#line 3682 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3684 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3686 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3688 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3690 "backend_libs.switch_util.c"
{
#line 3692 "backend_libs.switch_util.c"
  {
#line 3694 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3697 "backend_libs.switch_util.c"
    {
#line 3699 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_group_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3702 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3704 "backend_libs.switch_util.c"
  }
#line 3706 "backend_libs.switch_util.c"
}

#line 3709 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_list_1_0_10001(
#line 3712 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3714 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3716 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3718 "backend_libs.switch_util.c"
{
#line 3720 "backend_libs.switch_util.c"
  {
#line 3722 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3725 "backend_libs.switch_util.c"
    {
#line 3727 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_group_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3730 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3732 "backend_libs.switch_util.c"
  }
#line 3734 "backend_libs.switch_util.c"
}

#line 3737 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_list_1_0_10001(
#line 3740 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3742 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3744 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3746 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3748 "backend_libs.switch_util.c"
{
#line 3750 "backend_libs.switch_util.c"
  {
#line 3752 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3755 "backend_libs.switch_util.c"
    {
#line 3757 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_group_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3760 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3762 "backend_libs.switch_util.c"
  }
#line 3764 "backend_libs.switch_util.c"
}

#line 3767 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_list_1_0_10001(
#line 3770 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3772 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3774 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3776 "backend_libs.switch_util.c"
{
#line 3778 "backend_libs.switch_util.c"
  {
#line 3780 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3783 "backend_libs.switch_util.c"
    {
#line 3785 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3788 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3790 "backend_libs.switch_util.c"
  }
#line 3792 "backend_libs.switch_util.c"
}

#line 3795 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_list_1_0_10001(
#line 3798 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3800 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3802 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3804 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3806 "backend_libs.switch_util.c"
{
#line 3808 "backend_libs.switch_util.c"
  {
#line 3810 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3813 "backend_libs.switch_util.c"
    {
#line 3815 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3818 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3820 "backend_libs.switch_util.c"
  }
#line 3822 "backend_libs.switch_util.c"
}

#line 3825 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_map_1_0_10001(
#line 3828 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3830 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3832 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3834 "backend_libs.switch_util.c"
{
#line 3836 "backend_libs.switch_util.c"
  {
#line 3838 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3841 "backend_libs.switch_util.c"
    {
#line 3843 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3846 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3848 "backend_libs.switch_util.c"
  }
#line 3850 "backend_libs.switch_util.c"
}

#line 3853 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_map_1_0_10001(
#line 3856 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3858 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3860 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3862 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3864 "backend_libs.switch_util.c"
{
#line 3866 "backend_libs.switch_util.c"
  {
#line 3868 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3871 "backend_libs.switch_util.c"
    {
#line 3873 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3876 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3878 "backend_libs.switch_util.c"
  }
#line 3880 "backend_libs.switch_util.c"
}

#line 3883 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0_10001(
#line 3886 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3888 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3890 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3892 "backend_libs.switch_util.c"
{
#line 3894 "backend_libs.switch_util.c"
  {
#line 3896 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3899 "backend_libs.switch_util.c"
    {
#line 3901 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_rev_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3904 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3906 "backend_libs.switch_util.c"
  }
#line 3908 "backend_libs.switch_util.c"
}

#line 3911 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0_10001(
#line 3914 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3916 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3918 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3920 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3922 "backend_libs.switch_util.c"
{
#line 3924 "backend_libs.switch_util.c"
  {
#line 3926 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3929 "backend_libs.switch_util.c"
    {
#line 3931 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_rev_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3934 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3936 "backend_libs.switch_util.c"
  }
#line 3938 "backend_libs.switch_util.c"
}

#line 3941 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0_10001(
#line 3944 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3946 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3948 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3950 "backend_libs.switch_util.c"
{
#line 3952 "backend_libs.switch_util.c"
  {
#line 3954 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3957 "backend_libs.switch_util.c"
    {
#line 3959 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3962 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3964 "backend_libs.switch_util.c"
  }
#line 3966 "backend_libs.switch_util.c"
}

#line 3969 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0_10001(
#line 3972 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3974 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3976 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3978 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3980 "backend_libs.switch_util.c"
{
#line 3982 "backend_libs.switch_util.c"
  {
#line 3984 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3987 "backend_libs.switch_util.c"
    {
#line 3989 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3992 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3994 "backend_libs.switch_util.c"
  }
#line 3996 "backend_libs.switch_util.c"
}

#line 3999 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_count_map_0_0_10001(
#line 4002 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4004 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 4006 "backend_libs.switch_util.c"
{
#line 4008 "backend_libs.switch_util.c"
  {
#line 4010 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4013 "backend_libs.switch_util.c"
    {
#line 4015 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_count_map_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 4018 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4020 "backend_libs.switch_util.c"
  }
#line 4022 "backend_libs.switch_util.c"
}

#line 4025 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_count_map_0_0_10001(
#line 4028 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 4030 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4032 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4034 "backend_libs.switch_util.c"
{
#line 4036 "backend_libs.switch_util.c"
  {
#line 4038 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4041 "backend_libs.switch_util.c"
    {
#line 4043 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_count_map_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4046 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4048 "backend_libs.switch_util.c"
  }
#line 4050 "backend_libs.switch_util.c"
}

#line 4053 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____soln_consts_1_0_10001(
#line 4056 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4058 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4060 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4062 "backend_libs.switch_util.c"
{
#line 4064 "backend_libs.switch_util.c"
  {
#line 4066 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4069 "backend_libs.switch_util.c"
    {
#line 4071 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____soln_consts_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4074 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4076 "backend_libs.switch_util.c"
  }
#line 4078 "backend_libs.switch_util.c"
}

#line 4081 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____soln_consts_1_0_10001(
#line 4084 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4086 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4088 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4090 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4092 "backend_libs.switch_util.c"
{
#line 4094 "backend_libs.switch_util.c"
  {
#line 4096 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4099 "backend_libs.switch_util.c"
    {
#line 4101 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____soln_consts_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4104 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4106 "backend_libs.switch_util.c"
  }
#line 4108 "backend_libs.switch_util.c"
}

#line 4111 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_list_1_0_10001(
#line 4114 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4116 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4118 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4120 "backend_libs.switch_util.c"
{
#line 4122 "backend_libs.switch_util.c"
  {
#line 4124 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4127 "backend_libs.switch_util.c"
    {
#line 4129 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____stag_goal_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4132 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4134 "backend_libs.switch_util.c"
  }
#line 4136 "backend_libs.switch_util.c"
}

#line 4139 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_list_1_0_10001(
#line 4142 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4144 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4146 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4148 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4150 "backend_libs.switch_util.c"
{
#line 4152 "backend_libs.switch_util.c"
  {
#line 4154 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4157 "backend_libs.switch_util.c"
    {
#line 4159 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____stag_goal_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4162 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4164 "backend_libs.switch_util.c"
  }
#line 4166 "backend_libs.switch_util.c"
}

#line 4169 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_map_1_0_10001(
#line 4172 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4174 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4176 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4178 "backend_libs.switch_util.c"
{
#line 4180 "backend_libs.switch_util.c"
  {
#line 4182 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4185 "backend_libs.switch_util.c"
    {
#line 4187 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____stag_goal_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4190 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4192 "backend_libs.switch_util.c"
  }
#line 4194 "backend_libs.switch_util.c"
}

#line 4197 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_map_1_0_10001(
#line 4200 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4202 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4204 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4206 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4208 "backend_libs.switch_util.c"
{
#line 4210 "backend_libs.switch_util.c"
  {
#line 4212 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4215 "backend_libs.switch_util.c"
    {
#line 4217 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____stag_goal_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4220 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4222 "backend_libs.switch_util.c"
  }
#line 4224 "backend_libs.switch_util.c"
}

#line 4227 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____string_hash_slot_1_0_10001(
#line 4230 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4232 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4234 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4236 "backend_libs.switch_util.c"
{
#line 4238 "backend_libs.switch_util.c"
  {
#line 4240 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4243 "backend_libs.switch_util.c"
    {
#line 4245 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____string_hash_slot_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4248 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4250 "backend_libs.switch_util.c"
  }
#line 4252 "backend_libs.switch_util.c"
}

#line 4255 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____string_hash_slot_1_0_10001(
#line 4258 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4260 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4262 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4264 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4266 "backend_libs.switch_util.c"
{
#line 4268 "backend_libs.switch_util.c"
  {
#line 4270 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4273 "backend_libs.switch_util.c"
    {
#line 4275 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____string_hash_slot_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4278 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4280 "backend_libs.switch_util.c"
  }
#line 4282 "backend_libs.switch_util.c"
}

#line 4285 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____switch_category_0_0_10001(
#line 4288 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4290 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 4292 "backend_libs.switch_util.c"
{
#line 4294 "backend_libs.switch_util.c"
  {
#line 4296 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4299 "backend_libs.switch_util.c"
    {
#line 4301 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____switch_category_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 4304 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4306 "backend_libs.switch_util.c"
  }
#line 4308 "backend_libs.switch_util.c"
}

#line 4311 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____switch_category_0_0_10001(
#line 4314 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 4316 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4318 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4320 "backend_libs.switch_util.c"
{
#line 4322 "backend_libs.switch_util.c"
  {
#line 4324 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4327 "backend_libs.switch_util.c"
    {
#line 4329 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____switch_category_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4332 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4334 "backend_libs.switch_util.c"
  }
#line 4336 "backend_libs.switch_util.c"
}

#line 4339 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____table_size_upgrade_0_0_10001(
#line 4342 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4344 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 4346 "backend_libs.switch_util.c"
{
#line 4348 "backend_libs.switch_util.c"
  {
#line 4350 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4353 "backend_libs.switch_util.c"
    {
#line 4355 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____table_size_upgrade_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 4358 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4360 "backend_libs.switch_util.c"
  }
#line 4362 "backend_libs.switch_util.c"
}

#line 4365 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____table_size_upgrade_0_0_10001(
#line 4368 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 4370 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4372 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4374 "backend_libs.switch_util.c"
{
#line 4376 "backend_libs.switch_util.c"
  {
#line 4378 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4381 "backend_libs.switch_util.c"
    {
#line 4383 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____table_size_upgrade_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4386 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4388 "backend_libs.switch_util.c"
  }
#line 4390 "backend_libs.switch_util.c"
}

#line 1222 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_50_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0_1(
#line 1222 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1222 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1222 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1222 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3,
#line 1222 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 1222 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_5)
#line 1222 "switch_util.m"
{
#line 1222 "switch_util.m"
  {
#line 1222 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 1222 "switch_util.m"
    MR_Word backend_libs__switch_util__conv2_STATE_VARIABLE_CaseNumPtagsMap_53;
#line 1222 "switch_util.m"
    MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55;

#line 1222 "switch_util.m"
    {
#line 1222 "switch_util.m"
      backend_libs__switch_util__group_case_by_ptag_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))), (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 5)), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), &backend_libs__switch_util__conv2_STATE_VARIABLE_CaseNumPtagsMap_53, ((MR_Word) backend_libs__switch_util__wrapper_arg_4), &backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55);
    }
#line 1222 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_3 = ((MR_Box) (backend_libs__switch_util__conv2_STATE_VARIABLE_CaseNumPtagsMap_53));
#line 1222 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_5 = ((MR_Box) (backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55));
#line 1222 "switch_util.m"
  }
#line 1222 "switch_util.m"
}

#line 1207 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_50_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0(
#line 1207 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_65,
#line 1207 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1207 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1207 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1207 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1207 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1207 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1207 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1207 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1207 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9,
#line 1207 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_10,
#line 1207 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11,
#line 1207 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_12)
#line 1207 "switch_util.m"
{
#line 1214 "switch_util.m"
  while (MR_TRUE)
#line 1214 "switch_util.m"
    {
#line 1214 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1214 "switch_util.m"
      {
#line 1214 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 1214 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1214 "switch_util.m"
          {
#line 1215 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_12 = backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11;
#line 1215 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_10 = backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9;
#line 1215 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_StateC_8 = backend_libs__switch_util__STATE_VARIABLE_StateC_0_7;
#line 1215 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_StateB_6 = backend_libs__switch_util__STATE_VARIABLE_StateB_0_5;
#line 1215 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_StateA_4 = backend_libs__switch_util__STATE_VARIABLE_StateA_0_3;
#line 1214 "switch_util.m"
          }
#line 1214 "switch_util.m"
        else
#line 1217 "switch_util.m"
          {
#line 1217 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_78_78;
#line 1217 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_80_80;
#line 1217 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCase_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1217 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCases_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1217 "switch_util.m"
            MR_Word backend_libs__switch_util__MainTaggedConsId_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 0)));
#line 1217 "switch_util.m"
            MR_Word backend_libs__switch_util__OtherConsIds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 1)));
#line 1217 "switch_util.m"
            MR_Integer backend_libs__switch_util__CaseNum_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 2)));
#line 1217 "switch_util.m"
            MR_Box backend_libs__switch_util__CaseRep_41;
#line 1217 "switch_util.m"
            MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_52_52;
#line 1217 "switch_util.m"
            MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_53_53;
#line 1217 "switch_util.m"
            MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_54_54;
#line 1217 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_55_55;
#line 1217 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_56_56;
#line 1217 "switch_util.m"
            MR_Word backend_libs__switch_util__V_57_57;
#line 1217 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_58_58;
#line 1217 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_59_59;
#line 1218 "switch_util.m"
            MR_Word backend_libs__switch_util___Goal_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 3)));
#line 1219 "switch_util.m"
            void MR_CALL (* backend_libs__switch_util__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RepresentCase_2, (MR_Integer) 1)));
#line 1222 "switch_util.m"
            MR_Box backend_libs__switch_util__conv4_STATE_VARIABLE_CaseNumPtagsMap_58_58;
#line 1222 "switch_util.m"
            MR_Box backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_59_59;

#line 1219 "switch_util.m"
            {
#line 1219 "switch_util.m"
              backend_libs__switch_util__func_0(((MR_Box) backend_libs__switch_util__RepresentCase_2), ((MR_Box) (backend_libs__switch_util__TaggedCase_29)), &backend_libs__switch_util__CaseRep_41, backend_libs__switch_util__STATE_VARIABLE_StateA_0_3, &backend_libs__switch_util__STATE_VARIABLE_StateA_52_52, backend_libs__switch_util__STATE_VARIABLE_StateB_0_5, &backend_libs__switch_util__STATE_VARIABLE_StateB_53_53, backend_libs__switch_util__STATE_VARIABLE_StateC_0_7, &backend_libs__switch_util__STATE_VARIABLE_StateC_54_54);
            }
#line 1220 "switch_util.m"
            {
#line 1220 "switch_util.m"
              backend_libs__switch_util__group_case_by_ptag_7_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_65, backend_libs__switch_util__CaseNum_39, backend_libs__switch_util__CaseRep_41, backend_libs__switch_util__MainTaggedConsId_37, backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9, &backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_55_55, backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11, &backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_56_56);
            }
#line 1222 "switch_util.m"
            {
#line 1222 "switch_util.m"
              backend_libs__switch_util__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1222 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_8[0]));
#line 1222 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_50_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0_1));
#line 1222 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1222 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_65));
#line 1222 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 4) = ((MR_Box) (backend_libs__switch_util__CaseNum_39));
#line 1222 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 5) = backend_libs__switch_util__CaseRep_41;
#line 1222 "switch_util.m"
            }
#line 4564 "backend_libs.switch_util.c"
            {
#line 4566 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4568 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_78_78, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 4570 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_78_78, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_65));
#line 4572 "backend_libs.switch_util.c"
            }
#line 4574 "backend_libs.switch_util.c"
            {
#line 4576 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4578 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_80_80, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 4580 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_80_80, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 4582 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_80_80, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_78_78));
#line 4584 "backend_libs.switch_util.c"
            }
#line 1222 "switch_util.m"
            {
#line 1222 "switch_util.m"
              mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &backend_libs__switch_util_scalar_common_2[1], backend_libs__switch_util__TypeInfo_80_80, backend_libs__switch_util__V_57_57, backend_libs__switch_util__OtherConsIds_38, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_55_55)), &backend_libs__switch_util__conv4_STATE_VARIABLE_CaseNumPtagsMap_58_58, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_56_56)), &backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_59_59);
            }
#line 1222 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_58_58 = ((MR_Word) backend_libs__switch_util__conv4_STATE_VARIABLE_CaseNumPtagsMap_58_58);
#line 1222 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_59_59 = ((MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_59_59);
#line 1224 "switch_util.m"
            /* direct tailcall eliminated */
#line 1224 "switch_util.m"
            {
#line 1224 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__TaggedCases_30;
#line 1224 "switch_util.m"
              MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0__tmp_copy_3 = backend_libs__switch_util__STATE_VARIABLE_StateA_52_52;
#line 1224 "switch_util.m"
              MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0__tmp_copy_5 = backend_libs__switch_util__STATE_VARIABLE_StateB_53_53;
#line 1224 "switch_util.m"
              MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0__tmp_copy_7 = backend_libs__switch_util__STATE_VARIABLE_StateC_54_54;
#line 1224 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0__tmp_copy_9 = backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_58_58;
#line 1224 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0__tmp_copy_11 = backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_59_59;

#line 1224 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11 = backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0__tmp_copy_11;
#line 1224 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9 = backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0__tmp_copy_9;
#line 1224 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_StateC_0_7 = backend_libs__switch_util__STATE_VARIABLE_StateC_0__tmp_copy_7;
#line 1224 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_StateB_0_5 = backend_libs__switch_util__STATE_VARIABLE_StateB_0__tmp_copy_5;
#line 1224 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_StateA_0_3 = backend_libs__switch_util__STATE_VARIABLE_StateA_0__tmp_copy_3;
#line 1224 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 1224 "switch_util.m"
            }
#line 1224 "switch_util.m"
            continue;
#line 1217 "switch_util.m"
          }
#line 1214 "switch_util.m"
      }
#line 1214 "switch_util.m"
      break;
#line 1214 "switch_util.m"
    }
#line 1207 "switch_util.m"
}

#line 1073 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0_1(
#line 1073 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1073 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1073 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1073 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3)
#line 1073 "switch_util.m"
{
#line 1073 "switch_util.m"
  {
#line 1073 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 1073 "switch_util.m"
    MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_UnsortedTable_13;

#line 1073 "switch_util.m"
    {
#line 1073 "switch_util.m"
      backend_libs__switch_util__add_string_binary_entry_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4)), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), &backend_libs__switch_util__conv1_STATE_VARIABLE_UnsortedTable_13);
    }
#line 1073 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_3 = ((MR_Box) (backend_libs__switch_util__conv1_STATE_VARIABLE_UnsortedTable_13));
#line 1073 "switch_util.m"
  }
#line 1073 "switch_util.m"
}

#line 1059 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(
#line 1059 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_54,
#line 1059 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1059 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1059 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1059 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1059 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1059 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1059 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1059 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1059 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9,
#line 1059 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10)
#line 1059 "switch_util.m"
{
#line 1065 "switch_util.m"
  {
#line 1065 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 1065 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1065 "switch_util.m"
      {
#line 1065 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10 = backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9;
#line 1065 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_StateC_8 = backend_libs__switch_util__STATE_VARIABLE_StateC_0_7;
#line 1065 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_StateB_6 = backend_libs__switch_util__STATE_VARIABLE_StateB_0_5;
#line 1065 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_StateA_4 = backend_libs__switch_util__STATE_VARIABLE_StateA_0_3;
#line 1065 "switch_util.m"
      }
#line 1065 "switch_util.m"
    else
#line 1067 "switch_util.m"
      {
#line 1067 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_64_64;
#line 1067 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_66_66;
#line 1067 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCase_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1067 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCases_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1067 "switch_util.m"
        MR_Box backend_libs__switch_util__CaseRep_31;
#line 1067 "switch_util.m"
        MR_Word backend_libs__switch_util__MainTaggedConsId_32;
#line 1067 "switch_util.m"
        MR_Word backend_libs__switch_util__OtherTaggedConsIds_33;
#line 1067 "switch_util.m"
        MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_44_44;
#line 1067 "switch_util.m"
        MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_45_45;
#line 1067 "switch_util.m"
        MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_46_46;
#line 1067 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_47_47;
#line 1067 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_51_51;
#line 1067 "switch_util.m"
        MR_Word backend_libs__switch_util__V_52_52;
#line 1070 "switch_util.m"
        void MR_CALL (* backend_libs__switch_util__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 1071 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_34_34;
#line 1071 "switch_util.m"
        MR_Word backend_libs__switch_util__V_35_35;
#line 1073 "switch_util.m"
        MR_Box backend_libs__switch_util__conv2_STATE_VARIABLE_UnsortedTable_10;

#line 1068 "switch_util.m"
        {
#line 1068 "switch_util.m"
          backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_54, backend_libs__switch_util__TaggedCases_25, backend_libs__switch_util__RepresentCase_2, backend_libs__switch_util__STATE_VARIABLE_StateA_0_3, &backend_libs__switch_util__STATE_VARIABLE_StateA_44_44, backend_libs__switch_util__STATE_VARIABLE_StateB_0_5, &backend_libs__switch_util__STATE_VARIABLE_StateB_45_45, backend_libs__switch_util__STATE_VARIABLE_StateC_0_7, &backend_libs__switch_util__STATE_VARIABLE_StateC_46_46, backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9, &backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_47_47);
        }
#line 1070 "switch_util.m"
        backend_libs__switch_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RepresentCase_2, (MR_Integer) 1)));
#line 1070 "switch_util.m"
        {
#line 1070 "switch_util.m"
          backend_libs__switch_util__func_0(((MR_Box) backend_libs__switch_util__RepresentCase_2), ((MR_Box) (backend_libs__switch_util__TaggedCase_24)), &backend_libs__switch_util__CaseRep_31, backend_libs__switch_util__STATE_VARIABLE_StateA_44_44, backend_libs__switch_util__STATE_VARIABLE_StateA_4, backend_libs__switch_util__STATE_VARIABLE_StateB_45_45, backend_libs__switch_util__STATE_VARIABLE_StateB_6, backend_libs__switch_util__STATE_VARIABLE_StateC_46_46, backend_libs__switch_util__STATE_VARIABLE_StateC_8);
        }
#line 1071 "switch_util.m"
        backend_libs__switch_util__MainTaggedConsId_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 0)));
#line 1071 "switch_util.m"
        backend_libs__switch_util__OtherTaggedConsIds_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 1)));
#line 1071 "switch_util.m"
        backend_libs__switch_util__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 2)));
#line 1071 "switch_util.m"
        backend_libs__switch_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 3)));
#line 1072 "switch_util.m"
        {
#line 1072 "switch_util.m"
          backend_libs__switch_util__add_string_binary_entry_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_54, backend_libs__switch_util__CaseRep_31, backend_libs__switch_util__MainTaggedConsId_32, backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_47_47, &backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_51_51);
        }
#line 1073 "switch_util.m"
        {
#line 1073 "switch_util.m"
          backend_libs__switch_util__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1073 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_7[0]));
#line 1073 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0_1));
#line 1073 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1073 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_54));
#line 1073 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 4) = backend_libs__switch_util__CaseRep_31;
#line 1073 "switch_util.m"
        }
#line 4797 "backend_libs.switch_util.c"
        {
#line 4799 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4801 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_64_64, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 4803 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_64_64, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 4805 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_64_64, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_54));
#line 4807 "backend_libs.switch_util.c"
        }
#line 4809 "backend_libs.switch_util.c"
        {
#line 4811 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4813 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_66_66, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4815 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_66_66, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_64_64));
#line 4817 "backend_libs.switch_util.c"
        }
#line 1073 "switch_util.m"
        {
#line 1073 "switch_util.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__TypeInfo_66_66, backend_libs__switch_util__V_52_52, backend_libs__switch_util__OtherTaggedConsIds_33, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_51_51)), &backend_libs__switch_util__conv2_STATE_VARIABLE_UnsortedTable_10);
        }
#line 1073 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10 = ((MR_Word) backend_libs__switch_util__conv2_STATE_VARIABLE_UnsortedTable_10);
#line 1067 "switch_util.m"
      }
#line 1065 "switch_util.m"
  }
#line 1059 "switch_util.m"
}

#line 744 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_114_111_106_101_99_116_95_97_108_108_95_116_111_95_111_110_101_95_115_111_108_117_116_105_111_110_95_95_91_49_44_32_50_93_95_48_3_p_0(
#line 744 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 744 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_0_2,
#line 744 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_3)
#line 744 "switch_util.m"
{
#line 747 "switch_util.m"
  while (MR_TRUE)
#line 747 "switch_util.m"
    {
#line 747 "switch_util.m"
      /* tailcall optimized into a loop */
#line 747 "switch_util.m"
      {
#line 747 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 747 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 747 "switch_util.m"
          {
#line 747 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_3 = backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_0_2;
#line 747 "switch_util.m"
            backend_libs__switch_util__succeeded = MR_TRUE;
#line 747 "switch_util.m"
          }
#line 747 "switch_util.m"
        else
#line 749 "switch_util.m"
          {
#line 749 "switch_util.m"
            MR_Box backend_libs__switch_util__Case_7;
#line 749 "switch_util.m"
            MR_Word backend_libs__switch_util__Solns_8;
#line 749 "switch_util.m"
            MR_Word backend_libs__switch_util__CaseSolns_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 749 "switch_util.m"
            MR_Word backend_libs__switch_util__Values_11;
#line 749 "switch_util.m"
            MR_Word backend_libs__switch_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 749 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_15_15;
#line 749 "switch_util.m"
            MR_Word backend_libs__switch_util__V_16_16;

#line 748 "switch_util.m"
            backend_libs__switch_util__Case_7 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_14_14, (MR_Integer) 0));
#line 748 "switch_util.m"
            backend_libs__switch_util__Solns_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_14_14, (MR_Integer) 1)));
#line 750 "switch_util.m"
            backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__Solns_8)) == (MR_mktag((MR_Integer) 0)));
#line 750 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 750 "switch_util.m"
              {
#line 750 "switch_util.m"
                backend_libs__switch_util__Values_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Solns_8, (MR_Integer) 0)));
#line 751 "switch_util.m"
                {
#line 751 "switch_util.m"
                  backend_libs__switch_util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 751 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_16_16, 0) = backend_libs__switch_util__Case_7;
#line 751 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_16_16, 1) = ((MR_Box) (backend_libs__switch_util__Values_11));
#line 751 "switch_util.m"
                }
#line 751 "switch_util.m"
                {
#line 751 "switch_util.m"
                  backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_15_15, 0) = ((MR_Box) (backend_libs__switch_util__V_16_16));
#line 751 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_15_15, 1) = ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_0_2));
#line 751 "switch_util.m"
                }
#line 752 "switch_util.m"
                {
#line 752 "switch_util.m"
                  /* direct tailcall eliminated */
#line 752 "switch_util.m"
                  {
#line 752 "switch_util.m"
                    MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__CaseSolns_9;
#line 752 "switch_util.m"
                    MR_Word backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_15_15;

#line 752 "switch_util.m"
                    backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_0_2 = backend_libs__switch_util__STATE_VARIABLE_RevCaseValuePairs_0__tmp_copy_2;
#line 752 "switch_util.m"
                    backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 752 "switch_util.m"
                  }
#line 752 "switch_util.m"
                  continue;
#line 752 "switch_util.m"
                }
#line 750 "switch_util.m"
              }
#line 749 "switch_util.m"
          }
#line 747 "switch_util.m"
        return backend_libs__switch_util__succeeded;
#line 747 "switch_util.m"
      }
#line 747 "switch_util.m"
      break;
#line 747 "switch_util.m"
    }
#line 744 "switch_util.m"
}

#line 450 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0_1(
#line 450 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 450 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 450 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 450 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 450 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 450 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 450 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_6,
#line 450 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_7,
#line 450 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_8,
#line 450 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_9,
#line 450 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_10)
#line 450 "switch_util.m"
{
#line 450 "switch_util.m"
  {
#line 450 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 450 "switch_util.m"
    MR_Word backend_libs__switch_util__conv4_TaggedConsId_14;
#line 450 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22;
#line 450 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24;
#line 450 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26;
#line 450 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28;

#line 450 "switch_util.m"
    {
#line 450 "switch_util.m"
      backend_libs__switch_util__tag_cons_id_in_int_switch_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv4_TaggedConsId_14, ((MR_Integer) backend_libs__switch_util__wrapper_arg_3), &backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22, ((MR_Integer) backend_libs__switch_util__wrapper_arg_5), &backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24, ((MR_Integer) backend_libs__switch_util__wrapper_arg_7), &backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26, ((MR_Word) backend_libs__switch_util__wrapper_arg_9), &backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28);
    }
#line 450 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv4_TaggedConsId_14));
#line 450 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_4 = ((MR_Box) (backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22));
#line 450 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_6 = ((MR_Box) (backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24));
#line 450 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_8 = ((MR_Box) (backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26));
#line 450 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_10 = ((MR_Box) (backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28));
#line 450 "switch_util.m"
  }
#line 450 "switch_util.m"
}

#line 438 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0(
#line 438 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_1,
#line 438 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_3,
#line 438 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 438 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__5_5,
#line 438 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_6,
#line 438 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LowerLimit_7,
#line 438 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_8,
#line 438 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_UpperLimit_9,
#line 438 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_0_10,
#line 438 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumValues_11,
#line 438 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_12,
#line 438 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_13)
#line 438 "switch_util.m"
{
#line 442 "switch_util.m"
  {
#line 442 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 442 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 442 "switch_util.m"
      {
#line 442 "switch_util.m"
        *backend_libs__switch_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 443 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_13 = backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_12;
#line 442 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumValues_11 = backend_libs__switch_util__STATE_VARIABLE_NumValues_0_10;
#line 442 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_UpperLimit_9 = backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_8;
#line 442 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_LowerLimit_7 = backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_6;
#line 442 "switch_util.m"
      }
#line 442 "switch_util.m"
    else
#line 446 "switch_util.m"
      {
#line 446 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_80_80;
#line 446 "switch_util.m"
        MR_Word backend_libs__switch_util__Case_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__4_4, (MR_Integer) 0)));
#line 446 "switch_util.m"
        MR_Word backend_libs__switch_util__Cases_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__4_4, (MR_Integer) 1)));
#line 446 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCase_34;
#line 446 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCases_35;
#line 446 "switch_util.m"
        MR_Word backend_libs__switch_util__MainConsId_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_32, (MR_Integer) 0)));
#line 446 "switch_util.m"
        MR_Word backend_libs__switch_util__OtherConsIds_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_32, (MR_Integer) 1)));
#line 446 "switch_util.m"
        MR_Word backend_libs__switch_util__Goal_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_32, (MR_Integer) 2)));
#line 446 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedMainConsId_43;
#line 446 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedOtherConsIds_44;
#line 446 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_53_53;
#line 446 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_54_54;
#line 446 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_55_55;
#line 446 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_56_56;
#line 446 "switch_util.m"
        MR_Word backend_libs__switch_util__V_57_57;
#line 446 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_58_58;
#line 446 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_59_59;
#line 446 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_60_60;
#line 446 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_61_61;
#line 446 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_62_62;
#line 450 "switch_util.m"
        MR_Box backend_libs__switch_util__conv8_STATE_VARIABLE_LowerLimit_58_58;
#line 450 "switch_util.m"
        MR_Box backend_libs__switch_util__conv7_STATE_VARIABLE_UpperLimit_59_59;
#line 450 "switch_util.m"
        MR_Box backend_libs__switch_util__conv6_STATE_VARIABLE_NumValues_60_60;
#line 450 "switch_util.m"
        MR_Box backend_libs__switch_util__conv5_STATE_VARIABLE_IsIntSwitch_61_61;

#line 448 "switch_util.m"
        {
#line 448 "switch_util.m"
          backend_libs__switch_util__tag_cons_id_in_int_switch_11_p_0(backend_libs__switch_util__ModuleInfo_1, backend_libs__switch_util__MainConsId_40, &backend_libs__switch_util__TaggedMainConsId_43, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_6, &backend_libs__switch_util__STATE_VARIABLE_LowerLimit_53_53, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_8, &backend_libs__switch_util__STATE_VARIABLE_UpperLimit_54_54, backend_libs__switch_util__STATE_VARIABLE_NumValues_0_10, &backend_libs__switch_util__STATE_VARIABLE_NumValues_55_55, backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_12, &backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_56_56);
        }
#line 450 "switch_util.m"
        {
#line 450 "switch_util.m"
          backend_libs__switch_util__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 450 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_6[0]));
#line 450 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0_1));
#line 450 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 450 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 3) = ((MR_Box) (backend_libs__switch_util__ModuleInfo_1));
#line 450 "switch_util.m"
        }
#line 5136 "backend_libs.switch_util.c"
        backend_libs__switch_util__TypeCtorInfo_80_80 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 450 "switch_util.m"
        {
#line 450 "switch_util.m"
          mercury__list__map_foldl4_11_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__TypeCtorInfo_80_80, backend_libs__switch_util__TypeCtorInfo_80_80, backend_libs__switch_util__TypeCtorInfo_80_80, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_is_int_switch_0, backend_libs__switch_util__V_57_57, backend_libs__switch_util__OtherConsIds_41, &backend_libs__switch_util__TaggedOtherConsIds_44, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_LowerLimit_53_53)), &backend_libs__switch_util__conv8_STATE_VARIABLE_LowerLimit_58_58, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_UpperLimit_54_54)), &backend_libs__switch_util__conv7_STATE_VARIABLE_UpperLimit_59_59, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_NumValues_55_55)), &backend_libs__switch_util__conv6_STATE_VARIABLE_NumValues_60_60, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_56_56)), &backend_libs__switch_util__conv5_STATE_VARIABLE_IsIntSwitch_61_61);
        }
#line 450 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_LowerLimit_58_58 = ((MR_Integer) backend_libs__switch_util__conv8_STATE_VARIABLE_LowerLimit_58_58);
#line 450 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_UpperLimit_59_59 = ((MR_Integer) backend_libs__switch_util__conv7_STATE_VARIABLE_UpperLimit_59_59);
#line 450 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_NumValues_60_60 = ((MR_Integer) backend_libs__switch_util__conv6_STATE_VARIABLE_NumValues_60_60);
#line 450 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_61_61 = ((MR_Word) backend_libs__switch_util__conv5_STATE_VARIABLE_IsIntSwitch_61_61);
#line 453 "switch_util.m"
        {
#line 453 "switch_util.m"
          backend_libs__switch_util__TaggedCase_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 453 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 0) = ((MR_Box) (backend_libs__switch_util__TaggedMainConsId_43));
#line 453 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 1) = ((MR_Box) (backend_libs__switch_util__TaggedOtherConsIds_44));
#line 453 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 2) = ((MR_Box) (backend_libs__switch_util__CaseNum_3));
#line 453 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 3) = ((MR_Box) (backend_libs__switch_util__Goal_42));
#line 453 "switch_util.m"
        }
#line 455 "switch_util.m"
        backend_libs__switch_util__V_62_62 = (backend_libs__switch_util__CaseNum_3 + (MR_Integer) 1);
#line 455 "switch_util.m"
        {
#line 455 "switch_util.m"
          backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0(backend_libs__switch_util__ModuleInfo_1, backend_libs__switch_util__V_62_62, backend_libs__switch_util__Cases_33, &backend_libs__switch_util__TaggedCases_35, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_58_58, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_7, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_59_59, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_9, backend_libs__switch_util__STATE_VARIABLE_NumValues_60_60, backend_libs__switch_util__STATE_VARIABLE_NumValues_11, backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_61_61, backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_13);
        }
#line 445 "switch_util.m"
        {
#line 445 "switch_util.m"
          MR_Word base;
#line 445 "switch_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "switch_util.m"
          *backend_libs__switch_util__HeadVar__5_5 = base;
#line 445 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__TaggedCase_34));
#line 445 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__TaggedCases_35));
#line 445 "switch_util.m"
        }
#line 446 "switch_util.m"
      }
#line 442 "switch_util.m"
  }
#line 438 "switch_util.m"
}

#line 432 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0_1(
#line 432 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 432 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 432 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2)
#line 432 "switch_util.m"
{
#line 432 "switch_util.m"
  {
#line 432 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 432 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_TaggedConsId_6;

#line 432 "switch_util.m"
    {
#line 432 "switch_util.m"
      backend_libs__switch_util__tag_cons_id_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_TaggedConsId_6);
    }
#line 432 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_TaggedConsId_6));
#line 432 "switch_util.m"
  }
#line 432 "switch_util.m"
}

#line 424 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(
#line 424 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_1,
#line 424 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_3,
#line 424 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 424 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__5_5)
#line 424 "switch_util.m"
{
#line 427 "switch_util.m"
  {
#line 427 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 427 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 427 "switch_util.m"
      *backend_libs__switch_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 427 "switch_util.m"
    else
#line 429 "switch_util.m"
      {
#line 429 "switch_util.m"
        MR_Word backend_libs__switch_util__Case_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__4_4, (MR_Integer) 0)));
#line 429 "switch_util.m"
        MR_Word backend_libs__switch_util__Cases_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__4_4, (MR_Integer) 1)));
#line 429 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCase_14;
#line 429 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCases_15;
#line 429 "switch_util.m"
        MR_Word backend_libs__switch_util__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_12, (MR_Integer) 0)));
#line 429 "switch_util.m"
        MR_Word backend_libs__switch_util__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_12, (MR_Integer) 1)));
#line 429 "switch_util.m"
        MR_Word backend_libs__switch_util__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_12, (MR_Integer) 2)));
#line 429 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedMainConsId_19;
#line 429 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedOtherConsIds_20;
#line 429 "switch_util.m"
        MR_Word backend_libs__switch_util__V_21_21;
#line 429 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_22_22;
#line 429 "switch_util.m"
        MR_Word backend_libs__switch_util__ConsTag_31;

#line 462 "switch_util.m"
        {
#line 462 "switch_util.m"
          backend_libs__switch_util__ConsTag_31 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(backend_libs__switch_util__ModuleInfo_1, backend_libs__switch_util__MainConsId_16);
        }
#line 463 "switch_util.m"
        {
#line 463 "switch_util.m"
          backend_libs__switch_util__TaggedMainConsId_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 463 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedMainConsId_19, 0) = ((MR_Box) (backend_libs__switch_util__MainConsId_16));
#line 463 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedMainConsId_19, 1) = ((MR_Box) (backend_libs__switch_util__ConsTag_31));
#line 463 "switch_util.m"
        }
#line 432 "switch_util.m"
        {
#line 432 "switch_util.m"
          backend_libs__switch_util__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 432 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_21_21, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_4[2]));
#line 432 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_21_21, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0_1));
#line 432 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 432 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_21_21, 3) = ((MR_Box) (backend_libs__switch_util__ModuleInfo_1));
#line 432 "switch_util.m"
        }
#line 432 "switch_util.m"
        {
#line 432 "switch_util.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__V_21_21, backend_libs__switch_util__OtherConsIds_17, &backend_libs__switch_util__TaggedOtherConsIds_20);
        }
#line 433 "switch_util.m"
        {
#line 433 "switch_util.m"
          backend_libs__switch_util__TaggedCase_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 433 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 0) = ((MR_Box) (backend_libs__switch_util__TaggedMainConsId_19));
#line 433 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 1) = ((MR_Box) (backend_libs__switch_util__TaggedOtherConsIds_20));
#line 433 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 2) = ((MR_Box) (backend_libs__switch_util__CaseNum_3));
#line 433 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 3) = ((MR_Box) (backend_libs__switch_util__Goal_18));
#line 433 "switch_util.m"
        }
#line 435 "switch_util.m"
        backend_libs__switch_util__V_22_22 = (backend_libs__switch_util__CaseNum_3 + (MR_Integer) 1);
#line 435 "switch_util.m"
        {
#line 435 "switch_util.m"
          backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(backend_libs__switch_util__ModuleInfo_1, backend_libs__switch_util__V_22_22, backend_libs__switch_util__Cases_13, &backend_libs__switch_util__TaggedCases_15);
        }
#line 429 "switch_util.m"
        {
#line 429 "switch_util.m"
          MR_Word base;
#line 429 "switch_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "switch_util.m"
          *backend_libs__switch_util__HeadVar__5_5 = base;
#line 429 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__TaggedCase_14));
#line 429 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__TaggedCases_15));
#line 429 "switch_util.m"
        }
#line 429 "switch_util.m"
      }
#line 427 "switch_util.m"
  }
#line 424 "switch_util.m"
}

#line 417 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_2(
#line 417 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 417 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 417 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2)
#line 417 "switch_util.m"
{
#line 417 "switch_util.m"
  {
#line 417 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 417 "switch_util.m"
    MR_Word backend_libs__switch_util__conv9_TaggedConsId_6;

#line 417 "switch_util.m"
    {
#line 417 "switch_util.m"
      backend_libs__switch_util__tag_cons_id_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv9_TaggedConsId_6);
    }
#line 417 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv9_TaggedConsId_6));
#line 417 "switch_util.m"
  }
#line 417 "switch_util.m"
}

#line 398 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_1(
#line 398 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 398 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 398 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 398 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 398 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 398 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 398 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_6,
#line 398 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_7,
#line 398 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_8,
#line 398 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_9,
#line 398 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_10)
#line 398 "switch_util.m"
{
#line 398 "switch_util.m"
  {
#line 398 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 398 "switch_util.m"
    MR_Word backend_libs__switch_util__conv4_TaggedConsId_14;
#line 398 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22;
#line 398 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24;
#line 398 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26;
#line 398 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28;

#line 398 "switch_util.m"
    {
#line 398 "switch_util.m"
      backend_libs__switch_util__tag_cons_id_in_int_switch_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv4_TaggedConsId_14, ((MR_Integer) backend_libs__switch_util__wrapper_arg_3), &backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22, ((MR_Integer) backend_libs__switch_util__wrapper_arg_5), &backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24, ((MR_Integer) backend_libs__switch_util__wrapper_arg_7), &backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26, ((MR_Word) backend_libs__switch_util__wrapper_arg_9), &backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28);
    }
#line 398 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv4_TaggedConsId_14));
#line 398 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_4 = ((MR_Box) (backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22));
#line 398 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_6 = ((MR_Box) (backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24));
#line 398 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_8 = ((MR_Box) (backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26));
#line 398 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_10 = ((MR_Box) (backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28));
#line 398 "switch_util.m"
  }
#line 398 "switch_util.m"
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
#line 390 "switch_util.m"
  {
#line 390 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 390 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 390 "switch_util.m"
      {
#line 390 "switch_util.m"
        *backend_libs__switch_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 391 "switch_util.m"
        {
#line 391 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.tag_cases\'/5", (MR_String) "no cases");
#line 391 "switch_util.m"
          return;
        }
#line 390 "switch_util.m"
      }
#line 390 "switch_util.m"
    else
#line 393 "switch_util.m"
      {
#line 393 "switch_util.m"
        MR_Word backend_libs__switch_util__Case_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 393 "switch_util.m"
        MR_Word backend_libs__switch_util__Cases_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 393 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCase_16;
#line 393 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCases_17;
#line 393 "switch_util.m"
        MR_Word backend_libs__switch_util__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_14, (MR_Integer) 0)));
#line 393 "switch_util.m"
        MR_Word backend_libs__switch_util__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_14, (MR_Integer) 1)));
#line 393 "switch_util.m"
        MR_Word backend_libs__switch_util__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_14, (MR_Integer) 2)));
#line 393 "switch_util.m"
        MR_Word backend_libs__switch_util__MainConsTag_22;
#line 393 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedMainConsId_23;
#line 416 "switch_util.m"
        MR_Integer backend_libs__switch_util__IntTag_24;

#line 395 "switch_util.m"
        {
#line 395 "switch_util.m"
          backend_libs__switch_util__MainConsTag_22 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__MainConsId_19);
        }
#line 396 "switch_util.m"
        {
#line 396 "switch_util.m"
          backend_libs__switch_util__TaggedMainConsId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 396 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedMainConsId_23, 0) = ((MR_Box) (backend_libs__switch_util__MainConsId_19));
#line 396 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedMainConsId_23, 1) = ((MR_Box) (backend_libs__switch_util__MainConsTag_22));
#line 396 "switch_util.m"
        }
#line 397 "switch_util.m"
        backend_libs__switch_util__succeeded = ((((MR_tag((MR_Word) backend_libs__switch_util__MainConsTag_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__MainConsTag_22, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 397 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 397 "switch_util.m"
          {
#line 397 "switch_util.m"
            backend_libs__switch_util__IntTag_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__MainConsTag_22, (MR_Integer) 1)));
#line 401 "switch_util.m"
            {
#line 401 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeCtorInfo_56_56;
#line 401 "switch_util.m"
              MR_Word backend_libs__switch_util__TaggedOtherConsIds_25;
#line 401 "switch_util.m"
              MR_Integer backend_libs__switch_util__LowerLimit1_26;
#line 401 "switch_util.m"
              MR_Integer backend_libs__switch_util__UpperLimit1_27;
#line 401 "switch_util.m"
              MR_Integer backend_libs__switch_util__NumValues1_28;
#line 401 "switch_util.m"
              MR_Word backend_libs__switch_util__IsIntSwitch1_29;
#line 401 "switch_util.m"
              MR_Integer backend_libs__switch_util__LowerLimit_30;
#line 401 "switch_util.m"
              MR_Integer backend_libs__switch_util__UpperLimit_31;
#line 401 "switch_util.m"
              MR_Integer backend_libs__switch_util__NumValues_32;
#line 401 "switch_util.m"
              MR_Word backend_libs__switch_util__IsIntSwitch_33;
#line 401 "switch_util.m"
              MR_Word backend_libs__switch_util__V_34_34;
#line 398 "switch_util.m"
              MR_Box backend_libs__switch_util__conv8_LowerLimit1_26;
#line 398 "switch_util.m"
              MR_Box backend_libs__switch_util__conv7_UpperLimit1_27;
#line 398 "switch_util.m"
              MR_Box backend_libs__switch_util__conv6_NumValues1_28;
#line 398 "switch_util.m"
              MR_Box backend_libs__switch_util__conv5_IsIntSwitch1_29;

#line 398 "switch_util.m"
              {
#line 398 "switch_util.m"
                backend_libs__switch_util__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 398 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_6[0]));
#line 398 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_1));
#line 398 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 398 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 3) = ((MR_Box) (backend_libs__switch_util__HeadVar__1_1));
#line 398 "switch_util.m"
              }
#line 5570 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 398 "switch_util.m"
              {
#line 398 "switch_util.m"
                mercury__list__map_foldl4_11_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__TypeCtorInfo_56_56, backend_libs__switch_util__TypeCtorInfo_56_56, backend_libs__switch_util__TypeCtorInfo_56_56, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_is_int_switch_0, backend_libs__switch_util__V_34_34, backend_libs__switch_util__OtherConsIds_20, &backend_libs__switch_util__TaggedOtherConsIds_25, ((MR_Box) (backend_libs__switch_util__IntTag_24)), &backend_libs__switch_util__conv8_LowerLimit1_26, ((MR_Box) (backend_libs__switch_util__IntTag_24)), &backend_libs__switch_util__conv7_UpperLimit1_27, ((MR_Box) ((MR_Integer) 1)), &backend_libs__switch_util__conv6_NumValues1_28, ((MR_Box) ((MR_Integer) 0)), &backend_libs__switch_util__conv5_IsIntSwitch1_29);
              }
#line 398 "switch_util.m"
              backend_libs__switch_util__LowerLimit1_26 = ((MR_Integer) backend_libs__switch_util__conv8_LowerLimit1_26);
#line 398 "switch_util.m"
              backend_libs__switch_util__UpperLimit1_27 = ((MR_Integer) backend_libs__switch_util__conv7_UpperLimit1_27);
#line 398 "switch_util.m"
              backend_libs__switch_util__NumValues1_28 = ((MR_Integer) backend_libs__switch_util__conv6_NumValues1_28);
#line 398 "switch_util.m"
              backend_libs__switch_util__IsIntSwitch1_29 = ((MR_Word) backend_libs__switch_util__conv5_IsIntSwitch1_29);
#line 402 "switch_util.m"
              {
#line 402 "switch_util.m"
                backend_libs__switch_util__TaggedCase_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 402 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 0) = ((MR_Box) (backend_libs__switch_util__TaggedMainConsId_23));
#line 402 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 1) = ((MR_Box) (backend_libs__switch_util__TaggedOtherConsIds_25));
#line 402 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 2) = ((MR_Box) ((MR_Integer) 0));
#line 402 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 3) = ((MR_Box) (backend_libs__switch_util__Goal_21));
#line 402 "switch_util.m"
              }
#line 404 "switch_util.m"
              {
#line 404 "switch_util.m"
                backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0(backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1, backend_libs__switch_util__Cases_15, &backend_libs__switch_util__TaggedCases_17, backend_libs__switch_util__LowerLimit1_26, &backend_libs__switch_util__LowerLimit_30, backend_libs__switch_util__UpperLimit1_27, &backend_libs__switch_util__UpperLimit_31, backend_libs__switch_util__NumValues1_28, &backend_libs__switch_util__NumValues_32, backend_libs__switch_util__IsIntSwitch1_29, &backend_libs__switch_util__IsIntSwitch_33);
              }
#line 412 "switch_util.m"
              if ((backend_libs__switch_util__IsIntSwitch_33 == (MR_Integer) 0))
#line 410 "switch_util.m"
                {
#line 410 "switch_util.m"
                  MR_Word base;
#line 410 "switch_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 410 "switch_util.m"
                  *backend_libs__switch_util__MaybeIntSwitchLimits_5 = base;
#line 410 "switch_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__LowerLimit_30));
#line 410 "switch_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__UpperLimit_31));
#line 410 "switch_util.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (backend_libs__switch_util__NumValues_32));
#line 410 "switch_util.m"
                }
#line 412 "switch_util.m"
              else
#line 414 "switch_util.m"
                *backend_libs__switch_util__MaybeIntSwitchLimits_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 401 "switch_util.m"
            }
#line 397 "switch_util.m"
          }
#line 397 "switch_util.m"
        else
#line 417 "switch_util.m"
          {
#line 417 "switch_util.m"
            MR_Word backend_libs__switch_util__V_40_40;
#line 417 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedOtherConsIds_43;

#line 417 "switch_util.m"
            {
#line 417 "switch_util.m"
              backend_libs__switch_util__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 417 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_40_40, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_4[2]));
#line 417 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_40_40, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_2));
#line 417 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 417 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_40_40, 3) = ((MR_Box) (backend_libs__switch_util__HeadVar__1_1));
#line 417 "switch_util.m"
            }
#line 417 "switch_util.m"
            {
#line 417 "switch_util.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__V_40_40, backend_libs__switch_util__OtherConsIds_20, &backend_libs__switch_util__TaggedOtherConsIds_43);
            }
#line 418 "switch_util.m"
            {
#line 418 "switch_util.m"
              backend_libs__switch_util__TaggedCase_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 418 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 0) = ((MR_Box) (backend_libs__switch_util__TaggedMainConsId_23));
#line 418 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 1) = ((MR_Box) (backend_libs__switch_util__TaggedOtherConsIds_43));
#line 418 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 2) = ((MR_Box) ((MR_Integer) 0));
#line 418 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 3) = ((MR_Box) (backend_libs__switch_util__Goal_21));
#line 418 "switch_util.m"
            }
#line 420 "switch_util.m"
            {
#line 420 "switch_util.m"
              backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1, backend_libs__switch_util__Cases_15, &backend_libs__switch_util__TaggedCases_17);
            }
#line 421 "switch_util.m"
            *backend_libs__switch_util__MaybeIntSwitchLimits_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 417 "switch_util.m"
          }
#line 393 "switch_util.m"
        {
#line 393 "switch_util.m"
          MR_Word base;
#line 393 "switch_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "switch_util.m"
          *backend_libs__switch_util__HeadVar__4_4 = base;
#line 393 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__TaggedCase_16));
#line 393 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__TaggedCases_17));
#line 393 "switch_util.m"
        }
#line 393 "switch_util.m"
      }
#line 390 "switch_util.m"
  }
#line 62 "switch_util.m"
}

#line 1362 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__build_ptag_case_rev_map__1362__1_3_p_0(
#line 1362 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1362 "switch_util.m"
  MR_Word backend_libs__switch_util__Case_14,
#line 1362 "switch_util.m"
  MR_Word backend_libs__switch_util__OldCase_21)
#line 1362 "switch_util.m"
{
#line 1362 "switch_util.m"
  {
#line 1362 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 1362 "switch_util.m"
    {
#line 1362 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_42, backend_libs__switch_util__Case_14, backend_libs__switch_util__OldCase_21);
    }
#line 1362 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1362 "switch_util.m"
  }
#line 1362 "switch_util.m"
}

#line 1257 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1257__1_2_p_0(
#line 1257 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_21,
#line 1257 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_74)
#line 1257 "switch_util.m"
{
#line 1257 "switch_util.m"
  {
#line 1257 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__StagLoc_21 == backend_libs__switch_util__HeadVar__2_74);

#line 1257 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1257 "switch_util.m"
  }
#line 1257 "switch_util.m"
}

#line 1271 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1271__1_2_p_0(
#line 1271 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_63,
#line 1271 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_94)
#line 1271 "switch_util.m"
{
#line 1271 "switch_util.m"
  {
#line 1271 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__StagLoc_94 == backend_libs__switch_util__HeadVar__1_63);

#line 1271 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1271 "switch_util.m"
  }
#line 1271 "switch_util.m"
}

#line 198 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____table_size_upgrade_0_0(
#line 198 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 198 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 198 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 198 "switch_util.m"
{
#line 198 "switch_util.m"
  {
#line 198 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 198 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 198 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 198 "switch_util.m"
    {
#line 198 "switch_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__Cast_HeadVar1_4, backend_libs__switch_util__Cast_HeadVar2_5);
#line 198 "switch_util.m"
      return;
    }
#line 198 "switch_util.m"
  }
#line 198 "switch_util.m"
}

#line 198 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____table_size_upgrade_0_0(
#line 198 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_1,
#line 198 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 198 "switch_util.m"
{
#line 5813 "backend_libs.switch_util.c"
  {
#line 5815 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 5818 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 5820 "backend_libs.switch_util.c"
  }
#line 198 "switch_util.m"
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
#line 5866 "backend_libs.switch_util.c"
  {
#line 5868 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 5871 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 5873 "backend_libs.switch_util.c"
  }
#line 77 "switch_util.m"
}

#line 195 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____string_hash_slot_1_0(
#line 195 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_14,
#line 195 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 195 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 195 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 195 "switch_util.m"
{
#line 195 "switch_util.m"
  {
#line 195 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 195 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_12 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 195 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_13 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 195 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_12 == backend_libs__switch_util__CastY_13);
#line 195 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 5904 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 195 "switch_util.m"
    else
#line 195 "switch_util.m"
      {
#line 195 "switch_util.m"
        MR_String backend_libs__switch_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 195 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 195 "switch_util.m"
        MR_Box backend_libs__switch_util__V_6_6 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2));
#line 195 "switch_util.m"
        MR_String backend_libs__switch_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 195 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 195 "switch_util.m"
        MR_Box backend_libs__switch_util__V_9_9 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 2));
#line 195 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10;

#line 195 "switch_util.m"
        {
#line 195 "switch_util.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&backend_libs__switch_util__V_10_10, backend_libs__switch_util__V_4_4, backend_libs__switch_util__V_7_7);
        }
#line 5930 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_10_10 == (MR_Integer) 0);
#line 195 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 195 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 195 "switch_util.m"
          *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_10_10;
#line 195 "switch_util.m"
        else
#line 195 "switch_util.m"
          {
#line 195 "switch_util.m"
            MR_Word backend_libs__switch_util__V_11_11;

#line 195 "switch_util.m"
            {
#line 195 "switch_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_11_11, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_8_8);
            }
#line 5950 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_11_11 == (MR_Integer) 0);
#line 195 "switch_util.m"
            backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 195 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 195 "switch_util.m"
              *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_11_11;
#line 195 "switch_util.m"
            else
#line 195 "switch_util.m"
              {
#line 195 "switch_util.m"
                mercury__builtin__compare_3_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_14, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_6_6, backend_libs__switch_util__V_9_9);
#line 195 "switch_util.m"
                return;
              }
#line 195 "switch_util.m"
          }
#line 195 "switch_util.m"
      }
#line 195 "switch_util.m"
  }
#line 195 "switch_util.m"
}

#line 195 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____string_hash_slot_1_0(
#line 195 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_11,
#line 195 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 195 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 195 "switch_util.m"
{
#line 195 "switch_util.m"
  {
#line 195 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 195 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_9 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 195 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_10 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 195 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_9 == backend_libs__switch_util__CastY_10);
#line 195 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 195 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 195 "switch_util.m"
    else
#line 195 "switch_util.m"
      {
#line 195 "switch_util.m"
        MR_String backend_libs__switch_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 195 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 195 "switch_util.m"
        MR_Box backend_libs__switch_util__V_5_5 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 2));
#line 195 "switch_util.m"
        MR_String backend_libs__switch_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 195 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 195 "switch_util.m"
        MR_Box backend_libs__switch_util__V_8_8 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2));

#line 6019 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (strcmp(backend_libs__switch_util__V_3_3, backend_libs__switch_util__V_6_6) == 0);
#line 195 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 195 "switch_util.m"
          {
#line 6025 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_7_7);
#line 195 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 6029 "backend_libs.switch_util.c"
              {
#line 6031 "backend_libs.switch_util.c"
                return backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_11, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_8_8);
              }
#line 195 "switch_util.m"
          }
#line 195 "switch_util.m"
      }
#line 195 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 195 "switch_util.m"
  }
#line 195 "switch_util.m"
}

#line 298 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_map_1_0(
#line 298 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 298 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 298 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 298 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 298 "switch_util.m"
{
#line 298 "switch_util.m"
  {
#line 298 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 298 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 298 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 298 "switch_util.m"
    {
#line 298 "switch_util.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_6, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__Cast_HeadVar1_4, backend_libs__switch_util__Cast_HeadVar2_5);
#line 298 "switch_util.m"
      return;
    }
#line 298 "switch_util.m"
  }
#line 298 "switch_util.m"
}

#line 298 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_map_1_0(
#line 298 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 298 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 298 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 298 "switch_util.m"
{
#line 298 "switch_util.m"
  {
#line 298 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 298 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 298 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 298 "switch_util.m"
    {
#line 298 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_5, backend_libs__switch_util__Cast_HeadVar1_3, backend_libs__switch_util__Cast_HeadVar2_4);
    }
#line 298 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 298 "switch_util.m"
  }
#line 298 "switch_util.m"
}

#line 299 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_list_1_0(
#line 299 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 299 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 299 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 299 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 299 "switch_util.m"
{
#line 299 "switch_util.m"
  {
#line 299 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 299 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_9_9;
#line 299 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 299 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 6135 "backend_libs.switch_util.c"
    {
#line 6137 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6139 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6141 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 6143 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6145 "backend_libs.switch_util.c"
    }
#line 299 "switch_util.m"
    {
#line 299 "switch_util.m"
      mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_9_9, backend_libs__switch_util__HeadVar__1_1, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_4, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_5);
#line 299 "switch_util.m"
      return;
    }
#line 299 "switch_util.m"
  }
#line 299 "switch_util.m"
}

#line 299 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_list_1_0(
#line 299 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 299 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 299 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 299 "switch_util.m"
{
#line 299 "switch_util.m"
  {
#line 299 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 299 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_8_8;
#line 299 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 299 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 6181 "backend_libs.switch_util.c"
    {
#line 6183 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6185 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6187 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 6189 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6191 "backend_libs.switch_util.c"
    }
#line 299 "switch_util.m"
    {
#line 299 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_8_8, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_3, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_4);
    }
#line 299 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 299 "switch_util.m"
  }
#line 299 "switch_util.m"
}

#line 144 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____soln_consts_1_0(
#line 144 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_19,
#line 144 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 144 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 144 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 144 "switch_util.m"
{
#line 144 "switch_util.m"
  {
#line 144 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 144 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_17 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 144 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_18 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 144 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_17 == backend_libs__switch_util__CastY_18);
#line 144 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 6231 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 144 "switch_util.m"
    else
#line 144 "switch_util.m"
      if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 144 "switch_util.m"
        {
#line 144 "switch_util.m"
          MR_Word backend_libs__switch_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));

#line 144 "switch_util.m"
          if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 144 "switch_util.m"
            {
#line 144 "switch_util.m"
              MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));

#line 144 "switch_util.m"
              {
#line 144 "switch_util.m"
                mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_for_Rval_19, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_27_27, backend_libs__switch_util__V_5_5);
#line 144 "switch_util.m"
                return;
              }
#line 144 "switch_util.m"
            }
#line 144 "switch_util.m"
          else
#line 6260 "backend_libs.switch_util.c"
            *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 1;
#line 144 "switch_util.m"
        }
#line 144 "switch_util.m"
      else
#line 144 "switch_util.m"
        {
#line 144 "switch_util.m"
          MR_Word backend_libs__switch_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 144 "switch_util.m"
          MR_Word backend_libs__switch_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));

#line 144 "switch_util.m"
          if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6275 "backend_libs.switch_util.c"
            *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 2;
#line 144 "switch_util.m"
          else
#line 144 "switch_util.m"
            {
#line 144 "switch_util.m"
              MR_Word backend_libs__switch_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 144 "switch_util.m"
              MR_Word backend_libs__switch_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 144 "switch_util.m"
              MR_Word backend_libs__switch_util__V_16_16;

#line 144 "switch_util.m"
              {
#line 144 "switch_util.m"
                mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_for_Rval_19, &backend_libs__switch_util__V_16_16, backend_libs__switch_util__V_29_29, backend_libs__switch_util__V_14_14);
              }
#line 6293 "backend_libs.switch_util.c"
              backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_16_16 == (MR_Integer) 0);
#line 144 "switch_util.m"
              backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 144 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 144 "switch_util.m"
                *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_16_16;
#line 144 "switch_util.m"
              else
#line 144 "switch_util.m"
                {
#line 144 "switch_util.m"
                  MR_Word backend_libs__switch_util__TypeInfo_23_23;

#line 6308 "backend_libs.switch_util.c"
                  {
#line 6310 "backend_libs.switch_util.c"
                    backend_libs__switch_util__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6312 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6314 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_19));
#line 6316 "backend_libs.switch_util.c"
                  }
#line 144 "switch_util.m"
                  {
#line 144 "switch_util.m"
                    mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_23_23, backend_libs__switch_util__HeadVar__1_1, (MR_Word) backend_libs__switch_util__V_28_28, (MR_Word) backend_libs__switch_util__V_15_15);
#line 144 "switch_util.m"
                    return;
                  }
#line 144 "switch_util.m"
                }
#line 144 "switch_util.m"
            }
#line 144 "switch_util.m"
        }
#line 144 "switch_util.m"
  }
#line 144 "switch_util.m"
}

#line 144 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____soln_consts_1_0(
#line 144 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_11,
#line 144 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 144 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 144 "switch_util.m"
{
#line 144 "switch_util.m"
  {
#line 144 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 144 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_9 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 144 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_10 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 144 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_9 == backend_libs__switch_util__CastY_10);
#line 144 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 144 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 144 "switch_util.m"
    else
#line 144 "switch_util.m"
      if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 144 "switch_util.m"
        {
#line 144 "switch_util.m"
          MR_Word backend_libs__switch_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 144 "switch_util.m"
          MR_Word backend_libs__switch_util__V_4_4;

#line 144 "switch_util.m"
          backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 144 "switch_util.m"
          if (backend_libs__switch_util__succeeded)
#line 144 "switch_util.m"
            {
#line 144 "switch_util.m"
              backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 6381 "backend_libs.switch_util.c"
              {
#line 6383 "backend_libs.switch_util.c"
                return backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_for_Rval_11, backend_libs__switch_util__V_3_3, backend_libs__switch_util__V_4_4);
              }
#line 144 "switch_util.m"
            }
#line 144 "switch_util.m"
        }
#line 144 "switch_util.m"
      else
#line 144 "switch_util.m"
        {
#line 144 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeCtorInfo_14_14;
#line 144 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeInfo_17_17;
#line 144 "switch_util.m"
          MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 144 "switch_util.m"
          MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 144 "switch_util.m"
          MR_Word backend_libs__switch_util__V_7_7;
#line 144 "switch_util.m"
          MR_Word backend_libs__switch_util__V_8_8;

#line 144 "switch_util.m"
          backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 144 "switch_util.m"
          if (backend_libs__switch_util__succeeded)
#line 144 "switch_util.m"
            {
#line 144 "switch_util.m"
              backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 144 "switch_util.m"
              backend_libs__switch_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 6417 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_14_14 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 6419 "backend_libs.switch_util.c"
              {
#line 6421 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6423 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_14_14));
#line 6425 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_11));
#line 6427 "backend_libs.switch_util.c"
              }
#line 6429 "backend_libs.switch_util.c"
              {
#line 6431 "backend_libs.switch_util.c"
                backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_for_Rval_11, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_7_7);
              }
#line 144 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 6436 "backend_libs.switch_util.c"
                {
#line 6438 "backend_libs.switch_util.c"
                  return backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_17_17, (MR_Word) backend_libs__switch_util__V_6_6, (MR_Word) backend_libs__switch_util__V_8_8);
                }
#line 144 "switch_util.m"
            }
#line 144 "switch_util.m"
        }
#line 144 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 144 "switch_util.m"
  }
#line 144 "switch_util.m"
}

#line 306 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____ptag_count_map_0_0(
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
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 306 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 306 "switch_util.m"
    {
#line 306 "switch_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[2], backend_libs__switch_util__HeadVar__1_1, ((MR_Box) (backend_libs__switch_util__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__switch_util__Cast_HeadVar2_5)));
#line 306 "switch_util.m"
      return;
    }
#line 306 "switch_util.m"
  }
#line 306 "switch_util.m"
}

#line 306 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_count_map_0_0(
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
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 306 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 306 "switch_util.m"
    {
#line 306 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[2], ((MR_Box) (backend_libs__switch_util__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__switch_util__Cast_HeadVar2_4)));
    }
#line 306 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 306 "switch_util.m"
  }
#line 306 "switch_util.m"
}

#line 1329 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0(
#line 1329 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1329 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1329 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1329 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 1329 "switch_util.m"
{
#line 1329 "switch_util.m"
  {
#line 1329 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1329 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_15 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 1329 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_16 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 1329 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_15 == backend_libs__switch_util__CastY_16);
#line 1329 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 6540 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1329 "switch_util.m"
    else
#line 1329 "switch_util.m"
      {
#line 1329 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1329 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1329 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1329 "switch_util.m"
        MR_Word backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 3)));
#line 1329 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1329 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1329 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 2)));
#line 1329 "switch_util.m"
        MR_Word backend_libs__switch_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 3)));
#line 1329 "switch_util.m"
        MR_Word backend_libs__switch_util__V_12_12;

#line 1329 "switch_util.m"
        {
#line 1329 "switch_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_12_12, backend_libs__switch_util__V_4_4, backend_libs__switch_util__V_8_8);
        }
#line 6570 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_12_12 == (MR_Integer) 0);
#line 1329 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1329 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1329 "switch_util.m"
          *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_12_12;
#line 1329 "switch_util.m"
        else
#line 1329 "switch_util.m"
          {
#line 1329 "switch_util.m"
            MR_Word backend_libs__switch_util__V_13_13;

#line 1329 "switch_util.m"
            {
#line 1329 "switch_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_13_13, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_9_9);
            }
#line 6590 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_13_13 == (MR_Integer) 0);
#line 1329 "switch_util.m"
            backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1329 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1329 "switch_util.m"
              *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_13_13;
#line 1329 "switch_util.m"
            else
#line 1329 "switch_util.m"
              {
#line 1329 "switch_util.m"
                MR_Word backend_libs__switch_util__V_14_14;

#line 1329 "switch_util.m"
                {
#line 1329 "switch_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[2], &backend_libs__switch_util__V_14_14, ((MR_Box) (backend_libs__switch_util__V_6_6)), ((MR_Box) (backend_libs__switch_util__V_10_10)));
                }
#line 6610 "backend_libs.switch_util.c"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_14_14 == (MR_Integer) 0);
#line 1329 "switch_util.m"
                backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1329 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1329 "switch_util.m"
                  *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_14_14;
#line 1329 "switch_util.m"
                else
#line 1329 "switch_util.m"
                  {
#line 1329 "switch_util.m"
                    backend_libs__switch_util____Compare____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_17, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_7_7, backend_libs__switch_util__V_11_11);
#line 1329 "switch_util.m"
                    return;
                  }
#line 1329 "switch_util.m"
              }
#line 1329 "switch_util.m"
          }
#line 1329 "switch_util.m"
      }
#line 1329 "switch_util.m"
  }
#line 1329 "switch_util.m"
}

#line 1329 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0(
#line 1329 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_13,
#line 1329 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1329 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 1329 "switch_util.m"
{
#line 1329 "switch_util.m"
  {
#line 1329 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1329 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_11 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 1329 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_12 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 1329 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_11 == backend_libs__switch_util__CastY_12);
#line 1329 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1329 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 1329 "switch_util.m"
    else
#line 1329 "switch_util.m"
      {
#line 1329 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_14_14;
#line 1329 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1329 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1329 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1329 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1329 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1329 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1329 "switch_util.m"
        MR_Word backend_libs__switch_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1329 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 3)));

#line 6687 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_7_7);
#line 1329 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1329 "switch_util.m"
          {
#line 6693 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_8_8);
#line 1329 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1329 "switch_util.m"
              {
#line 6699 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_14_14 = (MR_Word) &backend_libs__switch_util_scalar_common_1[2];
#line 6701 "backend_libs.switch_util.c"
                {
#line 6703 "backend_libs.switch_util.c"
                  backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0(backend_libs__switch_util__TypeInfo_14_14, ((MR_Box) (backend_libs__switch_util__V_5_5)), ((MR_Box) (backend_libs__switch_util__V_9_9)));
                }
#line 1329 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 6708 "backend_libs.switch_util.c"
                  {
#line 6710 "backend_libs.switch_util.c"
                    return backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_13, backend_libs__switch_util__V_6_6, backend_libs__switch_util__V_10_10);
                  }
#line 1329 "switch_util.m"
              }
#line 1329 "switch_util.m"
          }
#line 1329 "switch_util.m"
      }
#line 1329 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1329 "switch_util.m"
  }
#line 1329 "switch_util.m"
}

#line 1344 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0(
#line 1344 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 1344 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1344 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1344 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 1344 "switch_util.m"
{
#line 1344 "switch_util.m"
  {
#line 1344 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1344 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_8_8;
#line 1344 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_10_10;
#line 1344 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 1344 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 6752 "backend_libs.switch_util.c"
    {
#line 6754 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6756 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6758 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6760 "backend_libs.switch_util.c"
    }
#line 6762 "backend_libs.switch_util.c"
    {
#line 6764 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6766 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 6768 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6770 "backend_libs.switch_util.c"
    }
#line 1344 "switch_util.m"
    {
#line 1344 "switch_util.m"
      mercury__tree234____Compare____tree234_2_0(backend_libs__switch_util__TypeInfo_8_8, backend_libs__switch_util__TypeInfo_10_10, backend_libs__switch_util__HeadVar__1_1, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_4, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_5);
#line 1344 "switch_util.m"
      return;
    }
#line 1344 "switch_util.m"
  }
#line 1344 "switch_util.m"
}

#line 1344 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0(
#line 1344 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 1344 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1344 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 1344 "switch_util.m"
{
#line 1344 "switch_util.m"
  {
#line 1344 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1344 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_7_7;
#line 1344 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_9_9;
#line 1344 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 1344 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 6808 "backend_libs.switch_util.c"
    {
#line 6810 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6812 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6814 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6816 "backend_libs.switch_util.c"
    }
#line 6818 "backend_libs.switch_util.c"
    {
#line 6820 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6822 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 6824 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6826 "backend_libs.switch_util.c"
    }
#line 1344 "switch_util.m"
    {
#line 1344 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__tree234____Unify____tree234_2_0(backend_libs__switch_util__TypeInfo_7_7, backend_libs__switch_util__TypeInfo_9_9, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_3, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_4);
    }
#line 1344 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1344 "switch_util.m"
  }
#line 1344 "switch_util.m"
}

#line 253 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_map_1_0(
#line 253 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 253 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 253 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 253 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 253 "switch_util.m"
{
#line 253 "switch_util.m"
  {
#line 253 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 253 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_9_9;
#line 253 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 253 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 6864 "backend_libs.switch_util.c"
    {
#line 6866 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6868 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6870 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6872 "backend_libs.switch_util.c"
    }
#line 253 "switch_util.m"
    {
#line 253 "switch_util.m"
      mercury__tree234____Compare____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_9_9, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__Cast_HeadVar1_4, backend_libs__switch_util__Cast_HeadVar2_5);
#line 253 "switch_util.m"
      return;
    }
#line 253 "switch_util.m"
  }
#line 253 "switch_util.m"
}

#line 253 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_map_1_0(
#line 253 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 253 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 253 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 253 "switch_util.m"
{
#line 253 "switch_util.m"
  {
#line 253 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 253 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_8_8;
#line 253 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 253 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 6908 "backend_libs.switch_util.c"
    {
#line 6910 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6912 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6914 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6916 "backend_libs.switch_util.c"
    }
#line 253 "switch_util.m"
    {
#line 253 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__tree234____Unify____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_8_8, backend_libs__switch_util__Cast_HeadVar1_3, backend_libs__switch_util__Cast_HeadVar2_4);
    }
#line 253 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 253 "switch_util.m"
  }
#line 253 "switch_util.m"
}

#line 301 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_list_1_0(
#line 301 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 301 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 301 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 301 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 301 "switch_util.m"
{
#line 301 "switch_util.m"
  {
#line 301 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 301 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_8_8;
#line 301 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 301 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 6954 "backend_libs.switch_util.c"
    {
#line 6956 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6958 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1));
#line 6960 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6962 "backend_libs.switch_util.c"
    }
#line 301 "switch_util.m"
    {
#line 301 "switch_util.m"
      mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_8_8, backend_libs__switch_util__HeadVar__1_1, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_4, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_5);
#line 301 "switch_util.m"
      return;
    }
#line 301 "switch_util.m"
  }
#line 301 "switch_util.m"
}

#line 301 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_list_1_0(
#line 301 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 301 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 301 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 301 "switch_util.m"
{
#line 301 "switch_util.m"
  {
#line 301 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 301 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_7_7;
#line 301 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 301 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 6998 "backend_libs.switch_util.c"
    {
#line 7000 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7002 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1));
#line 7004 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 7006 "backend_libs.switch_util.c"
    }
#line 301 "switch_util.m"
    {
#line 301 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_7_7, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_3, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_4);
    }
#line 301 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 301 "switch_util.m"
  }
#line 301 "switch_util.m"
}

#line 302 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_list_1_0(
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
    MR_Word backend_libs__switch_util__TypeInfo_8_8;
#line 302 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 302 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 7044 "backend_libs.switch_util.c"
    {
#line 7046 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7048 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1));
#line 7050 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 7052 "backend_libs.switch_util.c"
    }
#line 302 "switch_util.m"
    {
#line 302 "switch_util.m"
      mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_8_8, backend_libs__switch_util__HeadVar__1_1, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_4, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_5);
#line 302 "switch_util.m"
      return;
    }
#line 302 "switch_util.m"
  }
#line 302 "switch_util.m"
}

#line 302 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_list_1_0(
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
    MR_Word backend_libs__switch_util__TypeInfo_7_7;
#line 302 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 302 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 7088 "backend_libs.switch_util.c"
    {
#line 7090 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7092 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1));
#line 7094 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 7096 "backend_libs.switch_util.c"
    }
#line 302 "switch_util.m"
    {
#line 302 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_7_7, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_3, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_4);
    }
#line 302 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 302 "switch_util.m"
  }
#line 302 "switch_util.m"
}

#line 270 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_entry_1_0(
#line 270 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_14,
#line 270 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 270 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 270 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 270 "switch_util.m"
{
#line 270 "switch_util.m"
  {
#line 270 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 270 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_12 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 270 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_13 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 270 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_12 == backend_libs__switch_util__CastY_13);
#line 270 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 7136 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 270 "switch_util.m"
    else
#line 270 "switch_util.m"
      {
#line 270 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 270 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 270 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2)));
#line 270 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 270 "switch_util.m"
        MR_Word backend_libs__switch_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 270 "switch_util.m"
        MR_Word backend_libs__switch_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 2)));
#line 270 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10;

#line 270 "switch_util.m"
        {
#line 270 "switch_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_10_10, backend_libs__switch_util__V_4_4, backend_libs__switch_util__V_7_7);
        }
#line 7162 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_10_10 == (MR_Integer) 0);
#line 270 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 270 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 270 "switch_util.m"
          *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_10_10;
#line 270 "switch_util.m"
        else
#line 270 "switch_util.m"
          {
#line 270 "switch_util.m"
            MR_Word backend_libs__switch_util__V_11_11;

#line 270 "switch_util.m"
            {
#line 270 "switch_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[2], &backend_libs__switch_util__V_11_11, ((MR_Box) (backend_libs__switch_util__V_5_5)), ((MR_Box) (backend_libs__switch_util__V_8_8)));
            }
#line 7182 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_11_11 == (MR_Integer) 0);
#line 270 "switch_util.m"
            backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 270 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 270 "switch_util.m"
              *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_11_11;
#line 270 "switch_util.m"
            else
#line 270 "switch_util.m"
              {
#line 270 "switch_util.m"
                backend_libs__switch_util____Compare____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_14, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_6_6, backend_libs__switch_util__V_9_9);
#line 270 "switch_util.m"
                return;
              }
#line 270 "switch_util.m"
          }
#line 270 "switch_util.m"
      }
#line 270 "switch_util.m"
  }
#line 270 "switch_util.m"
}

#line 270 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_entry_1_0(
#line 270 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_11,
#line 270 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 270 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 270 "switch_util.m"
{
#line 270 "switch_util.m"
  {
#line 270 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 270 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_9 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 270 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_10 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 270 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_9 == backend_libs__switch_util__CastY_10);
#line 270 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 270 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 270 "switch_util.m"
    else
#line 270 "switch_util.m"
      {
#line 270 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_12_12;
#line 270 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 270 "switch_util.m"
        MR_Word backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 270 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 2)));
#line 270 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 270 "switch_util.m"
        MR_Word backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 270 "switch_util.m"
        MR_Word backend_libs__switch_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2)));

#line 7253 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_6_6);
#line 270 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 270 "switch_util.m"
          {
#line 7259 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeInfo_12_12 = (MR_Word) &backend_libs__switch_util_scalar_common_1[2];
#line 7261 "backend_libs.switch_util.c"
            {
#line 7263 "backend_libs.switch_util.c"
              backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0(backend_libs__switch_util__TypeInfo_12_12, ((MR_Box) (backend_libs__switch_util__V_4_4)), ((MR_Box) (backend_libs__switch_util__V_7_7)));
            }
#line 270 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 7268 "backend_libs.switch_util.c"
              {
#line 7270 "backend_libs.switch_util.c"
                return backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_11, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_8_8);
              }
#line 270 "switch_util.m"
          }
#line 270 "switch_util.m"
      }
#line 270 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 270 "switch_util.m"
  }
#line 270 "switch_util.m"
}

#line 256 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_entry_1_0(
#line 256 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_11,
#line 256 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 256 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 256 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 256 "switch_util.m"
{
#line 256 "switch_util.m"
  {
#line 256 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 256 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_9 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 256 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_10 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 256 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_9 == backend_libs__switch_util__CastY_10);
#line 256 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 7310 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 256 "switch_util.m"
    else
#line 256 "switch_util.m"
      {
#line 256 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 256 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 256 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 256 "switch_util.m"
        MR_Word backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 256 "switch_util.m"
        MR_Word backend_libs__switch_util__V_8_8;

#line 256 "switch_util.m"
        {
#line 256 "switch_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_8_8, backend_libs__switch_util__V_4_4, backend_libs__switch_util__V_6_6);
        }
#line 7332 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_8_8 == (MR_Integer) 0);
#line 256 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 256 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 256 "switch_util.m"
          *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_8_8;
#line 256 "switch_util.m"
        else
#line 256 "switch_util.m"
          {
#line 256 "switch_util.m"
            backend_libs__switch_util____Compare____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_11, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_7_7);
#line 256 "switch_util.m"
            return;
          }
#line 256 "switch_util.m"
      }
#line 256 "switch_util.m"
  }
#line 256 "switch_util.m"
}

#line 256 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_entry_1_0(
#line 256 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_9,
#line 256 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 256 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 256 "switch_util.m"
{
#line 256 "switch_util.m"
  {
#line 256 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 256 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_7 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 256 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_8 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 256 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_7 == backend_libs__switch_util__CastY_8);
#line 256 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 256 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 256 "switch_util.m"
    else
#line 256 "switch_util.m"
      {
#line 256 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 256 "switch_util.m"
        MR_Word backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 256 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 256 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));

#line 7395 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_5_5);
#line 256 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 7399 "backend_libs.switch_util.c"
          {
#line 7401 "backend_libs.switch_util.c"
            return backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_9, backend_libs__switch_util__V_4_4, backend_libs__switch_util__V_6_6);
          }
#line 256 "switch_util.m"
      }
#line 256 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 256 "switch_util.m"
  }
#line 256 "switch_util.m"
}

#line 285 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_1_0(
#line 285 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_11,
#line 285 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 285 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 285 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 285 "switch_util.m"
{
#line 285 "switch_util.m"
  {
#line 285 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 285 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_9 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 285 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_10 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 285 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_9 == backend_libs__switch_util__CastY_10);
#line 285 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 7439 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 285 "switch_util.m"
    else
#line 285 "switch_util.m"
      {
#line 285 "switch_util.m"
        MR_Word backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 285 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 285 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 285 "switch_util.m"
        MR_Word backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 285 "switch_util.m"
        MR_Word backend_libs__switch_util__V_8_8;
#line 285 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_16_16 = (MR_Integer) backend_libs__switch_util__V_4_4;
#line 285 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_17_17 = (MR_Integer) backend_libs__switch_util__V_6_6;

#line 285 "switch_util.m"
        {
#line 285 "switch_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_8_8, backend_libs__switch_util__V_16_16, backend_libs__switch_util__V_17_17);
        }
#line 7465 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_8_8 == (MR_Integer) 0);
#line 285 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 285 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 285 "switch_util.m"
          *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_8_8;
#line 285 "switch_util.m"
        else
#line 285 "switch_util.m"
          {
#line 285 "switch_util.m"
            {
#line 285 "switch_util.m"
              mercury__tree234____Compare____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_11, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_7_7);
#line 285 "switch_util.m"
              return;
            }
#line 285 "switch_util.m"
          }
#line 285 "switch_util.m"
      }
#line 285 "switch_util.m"
  }
#line 285 "switch_util.m"
}

#line 285 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_1_0(
#line 285 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_9,
#line 285 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 285 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 285 "switch_util.m"
{
#line 285 "switch_util.m"
  {
#line 285 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 285 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_7 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 285 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_8 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 285 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_7 == backend_libs__switch_util__CastY_8);
#line 285 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 285 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 285 "switch_util.m"
    else
#line 285 "switch_util.m"
      {
#line 285 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_10_10;
#line 285 "switch_util.m"
        MR_Word backend_libs__switch_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 285 "switch_util.m"
        MR_Word backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 285 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 285 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));

#line 7534 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_5_5);
#line 285 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 285 "switch_util.m"
          {
#line 7540 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 7542 "backend_libs.switch_util.c"
            {
#line 7544 "backend_libs.switch_util.c"
              return backend_libs__switch_util__succeeded = mercury__tree234____Unify____tree234_2_0(backend_libs__switch_util__TypeCtorInfo_10_10, backend_libs__switch_util__TypeInfo_for_CaseRep_9, backend_libs__switch_util__V_4_4, backend_libs__switch_util__V_6_6);
            }
#line 285 "switch_util.m"
          }
#line 285 "switch_util.m"
      }
#line 285 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 285 "switch_util.m"
  }
#line 285 "switch_util.m"
}

#line 149 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____need_range_check_0_0(
#line 149 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 149 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 149 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 149 "switch_util.m"
{
#line 149 "switch_util.m"
  {
#line 149 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 149 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 149 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 149 "switch_util.m"
    {
#line 149 "switch_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__Cast_HeadVar1_4, backend_libs__switch_util__Cast_HeadVar2_5);
#line 149 "switch_util.m"
      return;
    }
#line 149 "switch_util.m"
  }
#line 149 "switch_util.m"
}

#line 149 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_range_check_0_0(
#line 149 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_1,
#line 149 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 149 "switch_util.m"
{
#line 7599 "backend_libs.switch_util.c"
  {
#line 7601 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7604 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7606 "backend_libs.switch_util.c"
  }
#line 149 "switch_util.m"
}

#line 153 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____need_bit_vec_check_0_0(
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
backend_libs__switch_util____Unify____need_bit_vec_check_0_0(
#line 153 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_1,
#line 153 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 153 "switch_util.m"
{
#line 7652 "backend_libs.switch_util.c"
  {
#line 7654 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7657 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7659 "backend_libs.switch_util.c"
  }
#line 153 "switch_util.m"
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
#line 7688 "backend_libs.switch_util.c"
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
#line 7700 "backend_libs.switch_util.c"
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
#line 7715 "backend_libs.switch_util.c"
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
#line 7735 "backend_libs.switch_util.c"
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
#line 7755 "backend_libs.switch_util.c"
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
#line 7851 "backend_libs.switch_util.c"
              backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_6_6);
#line 47 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 47 "switch_util.m"
                {
#line 7857 "backend_libs.switch_util.c"
                  backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_7_7);
#line 47 "switch_util.m"
                  if (backend_libs__switch_util__succeeded)
#line 7861 "backend_libs.switch_util.c"
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

#line 386 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0(
#line 386 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 386 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 386 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 386 "switch_util.m"
{
#line 386 "switch_util.m"
  {
#line 386 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 386 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 386 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 386 "switch_util.m"
    {
#line 386 "switch_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__Cast_HeadVar1_4, backend_libs__switch_util__Cast_HeadVar2_5);
#line 386 "switch_util.m"
      return;
    }
#line 386 "switch_util.m"
  }
#line 386 "switch_util.m"
}

#line 386 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0(
#line 386 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_1,
#line 386 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 386 "switch_util.m"
{
#line 7917 "backend_libs.switch_util.c"
  {
#line 7919 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7922 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7924 "backend_libs.switch_util.c"
  }
#line 386 "switch_util.m"
}

#line 311 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____case_num_ptags_map_0_0(
#line 311 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 311 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 311 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 311 "switch_util.m"
{
#line 311 "switch_util.m"
  {
#line 311 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 311 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 311 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 311 "switch_util.m"
    {
#line 311 "switch_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[1], backend_libs__switch_util__HeadVar__1_1, ((MR_Box) (backend_libs__switch_util__Cast_HeadVar1_4)), ((MR_Box) (backend_libs__switch_util__Cast_HeadVar2_5)));
#line 311 "switch_util.m"
      return;
    }
#line 311 "switch_util.m"
  }
#line 311 "switch_util.m"
}

#line 311 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_num_ptags_map_0_0(
#line 311 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 311 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 311 "switch_util.m"
{
#line 311 "switch_util.m"
  {
#line 311 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 311 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 311 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 311 "switch_util.m"
    {
#line 311 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[1], ((MR_Box) (backend_libs__switch_util__Cast_HeadVar1_3)), ((MR_Box) (backend_libs__switch_util__Cast_HeadVar2_4)));
    }
#line 311 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 311 "switch_util.m"
  }
#line 311 "switch_util.m"
}

#line 133 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____case_consts_several_llds_0_0(
#line 133 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 133 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 133 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 133 "switch_util.m"
{
#line 133 "switch_util.m"
  {
#line 133 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 133 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_9 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 133 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_10 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 133 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_9 == backend_libs__switch_util__CastY_10);
#line 133 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 8015 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 133 "switch_util.m"
    else
#line 133 "switch_util.m"
      {
#line 133 "switch_util.m"
        MR_Word backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 133 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 133 "switch_util.m"
        MR_Word backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 133 "switch_util.m"
        MR_Word backend_libs__switch_util__V_8_8;

#line 133 "switch_util.m"
        {
#line 133 "switch_util.m"
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[1], &backend_libs__switch_util__V_8_8, ((MR_Box) (backend_libs__switch_util__V_4_4)), ((MR_Box) (backend_libs__switch_util__V_6_6)));
        }
#line 8037 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_8_8 == (MR_Integer) 0);
#line 133 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 133 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 133 "switch_util.m"
          *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_8_8;
#line 133 "switch_util.m"
        else
#line 133 "switch_util.m"
          {
#line 133 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_13_13 = (MR_Integer) backend_libs__switch_util__V_5_5;
#line 133 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_14_14 = (MR_Integer) backend_libs__switch_util__V_7_7;

#line 133 "switch_util.m"
            {
#line 133 "switch_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_13_13, backend_libs__switch_util__V_14_14);
#line 133 "switch_util.m"
              return;
            }
#line 133 "switch_util.m"
          }
#line 133 "switch_util.m"
      }
#line 133 "switch_util.m"
  }
#line 133 "switch_util.m"
}

#line 133 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_several_llds_0_0(
#line 133 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 133 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 133 "switch_util.m"
{
#line 133 "switch_util.m"
  {
#line 133 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 133 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_7 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 133 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_8 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 133 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_7 == backend_libs__switch_util__CastY_8);
#line 133 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 133 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 133 "switch_util.m"
    else
#line 133 "switch_util.m"
      {
#line 133 "switch_util.m"
        MR_Word backend_libs__switch_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 133 "switch_util.m"
        MR_Word backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 133 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));

#line 8107 "backend_libs.switch_util.c"
        {
#line 8109 "backend_libs.switch_util.c"
          backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[1], ((MR_Box) (backend_libs__switch_util__V_3_3)), ((MR_Box) (backend_libs__switch_util__V_5_5)));
        }
#line 133 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 8114 "backend_libs.switch_util.c"
          backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_6_6);
#line 133 "switch_util.m"
      }
#line 133 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 133 "switch_util.m"
  }
#line 133 "switch_util.m"
}

#line 124 "switch_util.m"
void MR_CALL 
backend_libs__switch_util____Compare____case_consts_3_0(
#line 124 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Key_19,
#line 124 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_20,
#line 124 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_SeveralInfo_21,
#line 124 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 124 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 124 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 124 "switch_util.m"
{
#line 124 "switch_util.m"
  {
#line 124 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 124 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_17 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 124 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_18 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 124 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_17 == backend_libs__switch_util__CastY_18);
#line 124 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 8155 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 124 "switch_util.m"
    else
#line 124 "switch_util.m"
      if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 124 "switch_util.m"
        {
#line 124 "switch_util.m"
          MR_Word backend_libs__switch_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));

#line 124 "switch_util.m"
          if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 124 "switch_util.m"
            {
#line 124 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_29_29;
#line 124 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_31_31;
#line 124 "switch_util.m"
              MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));

#line 8177 "backend_libs.switch_util.c"
              {
#line 8179 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8181 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_29_29, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 8183 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_29_29, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_20));
#line 8185 "backend_libs.switch_util.c"
              }
#line 8187 "backend_libs.switch_util.c"
              {
#line 8189 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8191 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 8193 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_31_31, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Key_19));
#line 8195 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_31_31, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_29_29));
#line 8197 "backend_libs.switch_util.c"
              }
#line 124 "switch_util.m"
              {
#line 124 "switch_util.m"
                mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_31_31, backend_libs__switch_util__HeadVar__1_1, (MR_Word) backend_libs__switch_util__V_33_33, (MR_Word) backend_libs__switch_util__V_5_5);
#line 124 "switch_util.m"
                return;
              }
#line 124 "switch_util.m"
            }
#line 124 "switch_util.m"
          else
#line 8210 "backend_libs.switch_util.c"
            *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 1;
#line 124 "switch_util.m"
        }
#line 124 "switch_util.m"
      else
#line 124 "switch_util.m"
        {
#line 124 "switch_util.m"
          MR_Box backend_libs__switch_util__V_34_34 = (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1));
#line 124 "switch_util.m"
          MR_Word backend_libs__switch_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));

#line 124 "switch_util.m"
          if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 8225 "backend_libs.switch_util.c"
            *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 2;
#line 124 "switch_util.m"
          else
#line 124 "switch_util.m"
            {
#line 124 "switch_util.m"
              MR_Word backend_libs__switch_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 124 "switch_util.m"
              MR_Box backend_libs__switch_util__V_15_15 = (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1));
#line 124 "switch_util.m"
              MR_Word backend_libs__switch_util__V_16_16;
#line 124 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_23_23;
#line 124 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_25_25;

#line 8242 "backend_libs.switch_util.c"
              {
#line 8244 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8246 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1));
#line 8248 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_20));
#line 8250 "backend_libs.switch_util.c"
              }
#line 8252 "backend_libs.switch_util.c"
              {
#line 8254 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8256 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_25_25, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 8258 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_25_25, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Key_19));
#line 8260 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_25_25, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_23_23));
#line 8262 "backend_libs.switch_util.c"
              }
#line 124 "switch_util.m"
              {
#line 124 "switch_util.m"
                mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_25_25, &backend_libs__switch_util__V_16_16, (MR_Word) backend_libs__switch_util__V_35_35, (MR_Word) backend_libs__switch_util__V_14_14);
              }
#line 8269 "backend_libs.switch_util.c"
              backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_16_16 == (MR_Integer) 0);
#line 124 "switch_util.m"
              backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 124 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 124 "switch_util.m"
                *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_16_16;
#line 124 "switch_util.m"
              else
#line 124 "switch_util.m"
                {
#line 124 "switch_util.m"
                  mercury__builtin__compare_3_p_0(backend_libs__switch_util__TypeInfo_for_SeveralInfo_21, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_34_34, backend_libs__switch_util__V_15_15);
#line 124 "switch_util.m"
                  return;
                }
#line 124 "switch_util.m"
            }
#line 124 "switch_util.m"
        }
#line 124 "switch_util.m"
  }
#line 124 "switch_util.m"
}

#line 124 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_3_0(
#line 124 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Key_11,
#line 124 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_12,
#line 124 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_SeveralInfo_13,
#line 124 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 124 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 124 "switch_util.m"
{
#line 124 "switch_util.m"
  {
#line 124 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 124 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_9 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 124 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_10 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 124 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_9 == backend_libs__switch_util__CastY_10);
#line 124 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 124 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 124 "switch_util.m"
    else
#line 124 "switch_util.m"
      if (((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 124 "switch_util.m"
        {
#line 124 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeCtorInfo_14_14;
#line 124 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeInfo_15_15;
#line 124 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeCtorInfo_16_16;
#line 124 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeInfo_17_17;
#line 124 "switch_util.m"
          MR_Word backend_libs__switch_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 124 "switch_util.m"
          MR_Word backend_libs__switch_util__V_4_4;

#line 124 "switch_util.m"
          backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 124 "switch_util.m"
          if (backend_libs__switch_util__succeeded)
#line 124 "switch_util.m"
            {
#line 124 "switch_util.m"
              backend_libs__switch_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 8352 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_16_16 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 8354 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_14_14 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 8356 "backend_libs.switch_util.c"
              {
#line 8358 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8360 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_14_14));
#line 8362 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_12));
#line 8364 "backend_libs.switch_util.c"
              }
#line 8366 "backend_libs.switch_util.c"
              {
#line 8368 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8370 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_16_16));
#line 8372 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Key_11));
#line 8374 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_15_15));
#line 8376 "backend_libs.switch_util.c"
              }
#line 8378 "backend_libs.switch_util.c"
              {
#line 8380 "backend_libs.switch_util.c"
                return backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_17_17, (MR_Word) backend_libs__switch_util__V_3_3, (MR_Word) backend_libs__switch_util__V_4_4);
              }
#line 124 "switch_util.m"
            }
#line 124 "switch_util.m"
        }
#line 124 "switch_util.m"
      else
#line 124 "switch_util.m"
        {
#line 124 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeCtorInfo_19_19;
#line 124 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeInfo_20_20;
#line 124 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeCtorInfo_21_21;
#line 124 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeInfo_22_22;
#line 124 "switch_util.m"
          MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 124 "switch_util.m"
          MR_Box backend_libs__switch_util__V_6_6 = (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1));
#line 124 "switch_util.m"
          MR_Word backend_libs__switch_util__V_7_7;
#line 124 "switch_util.m"
          MR_Box backend_libs__switch_util__V_8_8;

#line 124 "switch_util.m"
          backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 124 "switch_util.m"
          if (backend_libs__switch_util__succeeded)
#line 124 "switch_util.m"
            {
#line 124 "switch_util.m"
              backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 124 "switch_util.m"
              backend_libs__switch_util__V_8_8 = (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1));
#line 8418 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 8420 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_19_19 = (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1;
#line 8422 "backend_libs.switch_util.c"
              {
#line 8424 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8426 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_19_19));
#line 8428 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_12));
#line 8430 "backend_libs.switch_util.c"
              }
#line 8432 "backend_libs.switch_util.c"
              {
#line 8434 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8436 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_21_21));
#line 8438 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Key_11));
#line 8440 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_20_20));
#line 8442 "backend_libs.switch_util.c"
              }
#line 8444 "backend_libs.switch_util.c"
              {
#line 8446 "backend_libs.switch_util.c"
                backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_22_22, (MR_Word) backend_libs__switch_util__V_5_5, (MR_Word) backend_libs__switch_util__V_7_7);
              }
#line 124 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 8451 "backend_libs.switch_util.c"
                {
#line 8453 "backend_libs.switch_util.c"
                  return backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0(backend_libs__switch_util__TypeInfo_for_SeveralInfo_13, backend_libs__switch_util__V_6_6, backend_libs__switch_util__V_8_8);
                }
#line 124 "switch_util.m"
            }
#line 124 "switch_util.m"
        }
#line 124 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 124 "switch_util.m"
  }
#line 124 "switch_util.m"
}

#line 1362 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0_1(
#line 1362 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1362 "switch_util.m"
{
#line 1362 "switch_util.m"
  {
#line 1362 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1362 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1362 "switch_util.m"
    {
#line 1362 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util__IntroducedFrom__pred__build_ptag_case_rev_map__1362__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 5))));
    }
#line 1362 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1362 "switch_util.m"
  }
#line 1362 "switch_util.m"
}

#line 1347 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0(
#line 1347 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1347 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1347 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1347 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3,
#line 1347 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevMap_4)
#line 1347 "switch_util.m"
{
#line 1351 "switch_util.m"
  while (MR_TRUE)
#line 1351 "switch_util.m"
    {
#line 1351 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1351 "switch_util.m"
      {
#line 1351 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 1351 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1351 "switch_util.m"
          *backend_libs__switch_util__STATE_VARIABLE_RevMap_4 = backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3;
#line 1351 "switch_util.m"
        else
#line 1352 "switch_util.m"
          {
#line 1352 "switch_util.m"
            MR_Word backend_libs__switch_util__Entry_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1352 "switch_util.m"
            MR_Word backend_libs__switch_util__Entries_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1352 "switch_util.m"
            MR_Integer backend_libs__switch_util__Ptag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Entry_9, (MR_Integer) 0)));
#line 1352 "switch_util.m"
            MR_Word backend_libs__switch_util__Case_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Entry_9, (MR_Integer) 1)));
#line 1352 "switch_util.m"
            MR_Word backend_libs__switch_util__CountSecTagLocn_15;
#line 1352 "switch_util.m"
            MR_Integer backend_libs__switch_util__Count_16;
#line 1352 "switch_util.m"
            MR_Word backend_libs__switch_util__V_25_25;
#line 1352 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36;
#line 1354 "switch_util.m"
            MR_Box backend_libs__switch_util__conv0_V_25_25;

#line 1354 "switch_util.m"
            {
#line 1354 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__HeadVar__2_2, backend_libs__switch_util__Ptag_13, &backend_libs__switch_util__conv0_V_25_25);
            }
#line 1354 "switch_util.m"
            backend_libs__switch_util__V_25_25 = ((MR_Word) backend_libs__switch_util__conv0_V_25_25);
#line 1354 "switch_util.m"
            backend_libs__switch_util__CountSecTagLocn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_25_25, (MR_Integer) 0)));
#line 1354 "switch_util.m"
            backend_libs__switch_util__Count_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_25_25, (MR_Integer) 1)));
#line 1370 "switch_util.m"
            if ((((backend_libs__switch_util__CountSecTagLocn_15 == (MR_Integer) 2)) || ((backend_libs__switch_util__CountSecTagLocn_15 == (MR_Integer) 3))))
#line 1373 "switch_util.m"
              {
#line 1373 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_60_60;
#line 1373 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_62_62;
#line 1373 "switch_util.m"
                MR_Word backend_libs__switch_util__NewEntry_41;
#line 1387 "switch_util.m"
                MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_RevMap_36_36;

#line 1386 "switch_util.m"
                {
#line 1386 "switch_util.m"
                  backend_libs__switch_util__NewEntry_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1386 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 0) = ((MR_Box) (backend_libs__switch_util__Count_16));
#line 1386 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 1) = ((MR_Box) (backend_libs__switch_util__Ptag_13));
#line 1386 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1386 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 3) = ((MR_Box) (backend_libs__switch_util__Case_14));
#line 1386 "switch_util.m"
                }
#line 8584 "backend_libs.switch_util.c"
                {
#line 8586 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8588 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_60_60, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8590 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_60_60, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8592 "backend_libs.switch_util.c"
                }
#line 8594 "backend_libs.switch_util.c"
                {
#line 8596 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8598 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_62_62, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 8600 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_62_62, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8602 "backend_libs.switch_util.c"
                }
#line 1387 "switch_util.m"
                {
#line 1387 "switch_util.m"
                  mercury__map__det_insert_4_p_0(backend_libs__switch_util__TypeInfo_60_60, backend_libs__switch_util__TypeInfo_62_62, ((MR_Box) (backend_libs__switch_util__Case_14)), ((MR_Box) (backend_libs__switch_util__NewEntry_41)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, &backend_libs__switch_util__conv1_STATE_VARIABLE_RevMap_36_36);
                }
#line 1387 "switch_util.m"
                backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_RevMap_36_36;
#line 1373 "switch_util.m"
              }
#line 1370 "switch_util.m"
            else
#line 1366 "switch_util.m"
              {
#line 1366 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_46_46;
#line 1366 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_48_48;
#line 1366 "switch_util.m"
                MR_Word backend_libs__switch_util__OldEntry_17;
#line 1359 "switch_util.m"
                MR_Box backend_libs__switch_util__conv2_OldEntry_17;

#line 8626 "backend_libs.switch_util.c"
                {
#line 8628 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8630 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_46_46, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8632 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_46_46, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8634 "backend_libs.switch_util.c"
                }
#line 8636 "backend_libs.switch_util.c"
                {
#line 8638 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8640 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_48_48, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 8642 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_48_48, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8644 "backend_libs.switch_util.c"
                }
#line 1359 "switch_util.m"
                {
#line 1359 "switch_util.m"
                  backend_libs__switch_util__succeeded = mercury__map__search_3_p_0(backend_libs__switch_util__TypeInfo_46_46, backend_libs__switch_util__TypeInfo_48_48, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, ((MR_Box) (backend_libs__switch_util__Case_14)), &backend_libs__switch_util__conv2_OldEntry_17);
                }
#line 1359 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1359 "switch_util.m"
                  {
#line 1359 "switch_util.m"
                    backend_libs__switch_util__OldEntry_17 = ((MR_Word) backend_libs__switch_util__conv2_OldEntry_17);
#line 1359 "switch_util.m"
                    backend_libs__switch_util__succeeded = MR_TRUE;
#line 1359 "switch_util.m"
                  }
#line 1366 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1361 "switch_util.m"
                  {
#line 1361 "switch_util.m"
                    MR_Integer backend_libs__switch_util__OldCount_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 0)));
#line 1361 "switch_util.m"
                    MR_Integer backend_libs__switch_util__OldFirstPtag_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 1)));
#line 1361 "switch_util.m"
                    MR_Word backend_libs__switch_util__OldLaterPtags0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 2)));
#line 1361 "switch_util.m"
                    MR_Word backend_libs__switch_util__OldCase_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 3)));
#line 1361 "switch_util.m"
                    MR_Word backend_libs__switch_util__NewEntry_22;
#line 1361 "switch_util.m"
                    MR_Word backend_libs__switch_util__V_28_28;
#line 1361 "switch_util.m"
                    MR_Integer backend_libs__switch_util__V_32_32;
#line 1361 "switch_util.m"
                    MR_Word backend_libs__switch_util__V_33_33;
#line 1361 "switch_util.m"
                    MR_Word backend_libs__switch_util__V_34_34;
#line 1365 "switch_util.m"
                    MR_Word backend_libs__switch_util__conv3_STATE_VARIABLE_RevMap_36_36;

#line 1362 "switch_util.m"
                    {
#line 1362 "switch_util.m"
                      backend_libs__switch_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1362 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_4[1]));
#line 1362 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 1) = ((MR_Box) (backend_libs__switch_util__build_ptag_case_rev_map_4_p_0_1));
#line 1362 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1362 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 1362 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 4) = ((MR_Box) (backend_libs__switch_util__Case_14));
#line 1362 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 5) = ((MR_Box) (backend_libs__switch_util__OldCase_21));
#line 1362 "switch_util.m"
                    }
#line 1362 "switch_util.m"
                    {
#line 1362 "switch_util.m"
                      mercury__require__expect_4_p_0(backend_libs__switch_util__V_28_28, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.build_ptag_case_rev_map\'/4", (MR_String) "Case != OldCase");
                    }
#line 1363 "switch_util.m"
                    backend_libs__switch_util__V_32_32 = (backend_libs__switch_util__OldCount_18 + backend_libs__switch_util__Count_16);
#line 1364 "switch_util.m"
                    {
#line 1364 "switch_util.m"
                      backend_libs__switch_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1364 "switch_util.m"
                      MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_34_34, 0) = ((MR_Box) (backend_libs__switch_util__Ptag_13));
#line 1364 "switch_util.m"
                      MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1364 "switch_util.m"
                    }
#line 1364 "switch_util.m"
                    {
#line 1364 "switch_util.m"
                      backend_libs__switch_util__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__OldLaterPtags0_20, backend_libs__switch_util__V_34_34);
                    }
#line 1363 "switch_util.m"
                    {
#line 1363 "switch_util.m"
                      backend_libs__switch_util__NewEntry_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1363 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 0) = ((MR_Box) (backend_libs__switch_util__V_32_32));
#line 1363 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 1) = ((MR_Box) (backend_libs__switch_util__OldFirstPtag_19));
#line 1363 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 2) = ((MR_Box) (backend_libs__switch_util__V_33_33));
#line 1363 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 3) = ((MR_Box) (backend_libs__switch_util__OldCase_21));
#line 1363 "switch_util.m"
                    }
#line 1365 "switch_util.m"
                    {
#line 1365 "switch_util.m"
                      mercury__map__det_update_4_p_0(backend_libs__switch_util__TypeInfo_46_46, backend_libs__switch_util__TypeInfo_48_48, ((MR_Box) (backend_libs__switch_util__Case_14)), ((MR_Box) (backend_libs__switch_util__NewEntry_22)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, &backend_libs__switch_util__conv3_STATE_VARIABLE_RevMap_36_36);
                    }
#line 1365 "switch_util.m"
                    backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36 = (MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_RevMap_36_36;
#line 1361 "switch_util.m"
                  }
#line 1366 "switch_util.m"
                else
#line 1367 "switch_util.m"
                  {
#line 1367 "switch_util.m"
                    MR_Word backend_libs__switch_util__TypeInfo_56_56;
#line 1367 "switch_util.m"
                    MR_Word backend_libs__switch_util__TypeInfo_58_58;
#line 1367 "switch_util.m"
                    MR_Word backend_libs__switch_util__NewEntry_40;
#line 1368 "switch_util.m"
                    MR_Word backend_libs__switch_util__conv4_STATE_VARIABLE_RevMap_36_36;

#line 1367 "switch_util.m"
                    {
#line 1367 "switch_util.m"
                      backend_libs__switch_util__NewEntry_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 0) = ((MR_Box) (backend_libs__switch_util__Count_16));
#line 1367 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 1) = ((MR_Box) (backend_libs__switch_util__Ptag_13));
#line 1367 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1367 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 3) = ((MR_Box) (backend_libs__switch_util__Case_14));
#line 1367 "switch_util.m"
                    }
#line 8776 "backend_libs.switch_util.c"
                    {
#line 8778 "backend_libs.switch_util.c"
                      backend_libs__switch_util__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8780 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_56_56, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8782 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_56_56, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8784 "backend_libs.switch_util.c"
                    }
#line 8786 "backend_libs.switch_util.c"
                    {
#line 8788 "backend_libs.switch_util.c"
                      backend_libs__switch_util__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8790 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_58_58, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 8792 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_58_58, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8794 "backend_libs.switch_util.c"
                    }
#line 1368 "switch_util.m"
                    {
#line 1368 "switch_util.m"
                      mercury__map__det_insert_4_p_0(backend_libs__switch_util__TypeInfo_56_56, backend_libs__switch_util__TypeInfo_58_58, ((MR_Box) (backend_libs__switch_util__Case_14)), ((MR_Box) (backend_libs__switch_util__NewEntry_40)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, &backend_libs__switch_util__conv4_STATE_VARIABLE_RevMap_36_36);
                    }
#line 1368 "switch_util.m"
                    backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36 = (MR_Word) backend_libs__switch_util__conv4_STATE_VARIABLE_RevMap_36_36;
#line 1367 "switch_util.m"
                  }
#line 1366 "switch_util.m"
              }
#line 1389 "switch_util.m"
            /* direct tailcall eliminated */
#line 1389 "switch_util.m"
            {
#line 1389 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Entries_10;
#line 1389 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_0__tmp_copy_3 = backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36;

#line 1389 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3 = backend_libs__switch_util__STATE_VARIABLE_RevMap_0__tmp_copy_3;
#line 1389 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 1389 "switch_util.m"
            }
#line 1389 "switch_util.m"
            continue;
#line 1352 "switch_util.m"
          }
#line 1351 "switch_util.m"
      }
#line 1351 "switch_util.m"
      break;
#line 1351 "switch_util.m"
    }
#line 1347 "switch_util.m"
}

#line 1322 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__interpret_rev_map_entry_2_p_0(
#line 1322 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_9,
#line 1322 "switch_util.m"
  MR_Word backend_libs__switch_util__RevEntry_3,
#line 1322 "switch_util.m"
  MR_Word * backend_libs__switch_util__GroupEntry_4)
#line 1322 "switch_util.m"
{
#line 1325 "switch_util.m"
  {
#line 1325 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1325 "switch_util.m"
    MR_Integer backend_libs__switch_util__MainPtag_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 1)));
#line 1325 "switch_util.m"
    MR_Word backend_libs__switch_util__OtherPtags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 2)));
#line 1325 "switch_util.m"
    MR_Word backend_libs__switch_util__Case_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 3)));
#line 1326 "switch_util.m"
    MR_Integer backend_libs__switch_util___Count_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 0)));

#line 1327 "switch_util.m"
    {
#line 1327 "switch_util.m"
      MR_Word base;
#line 1327 "switch_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1327 "switch_util.m"
      *backend_libs__switch_util__GroupEntry_4 = base;
#line 1327 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__switch_util__MainPtag_6));
#line 1327 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__switch_util__OtherPtags_7));
#line 1327 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__switch_util__Case_8));
#line 1327 "switch_util.m"
    }
#line 1325 "switch_util.m"
  }
#line 1322 "switch_util.m"
}

#line 1257 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_2(
#line 1257 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1257 "switch_util.m"
{
#line 1257 "switch_util.m"
  {
#line 1257 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1257 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1257 "switch_util.m"
    {
#line 1257 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1257__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))));
    }
#line 1257 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1257 "switch_util.m"
  }
#line 1257 "switch_util.m"
}

#line 1271 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_1(
#line 1271 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1271 "switch_util.m"
{
#line 1271 "switch_util.m"
  {
#line 1271 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1271 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1271 "switch_util.m"
    {
#line 1271 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1271__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))));
    }
#line 1271 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1271 "switch_util.m"
  }
#line 1271 "switch_util.m"
}

#line 1227 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0(
#line 1227 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_107,
#line 1227 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_8,
#line 1227 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_9,
#line 1227 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_10,
#line 1227 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_52,
#line 1227 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_53,
#line 1227 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54,
#line 1227 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55)
#line 1227 "switch_util.m"
{
#line 1232 "switch_util.m"
  {
#line 1232 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1232 "switch_util.m"
    MR_Word backend_libs__switch_util__Tag_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_10, (MR_Integer) 1)));
#line 1232 "switch_util.m"
    MR_Integer backend_libs__switch_util__Primary_15;
#line 1233 "switch_util.m"
    MR_Word backend_libs__switch_util___ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_10, (MR_Integer) 0)));
#line 1304 "switch_util.m"
    MR_Word backend_libs__switch_util__Ptags0_50;
#line 1301 "switch_util.m"
    MR_Box backend_libs__switch_util__conv12_Ptags0_50;

#line 1253 "switch_util.m"
    if ((backend_libs__switch_util__Tag_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1245 "switch_util.m"
      {
#line 1246 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_110_144;
#line 1246 "switch_util.m"
        MR_Word backend_libs__switch_util___Group_140;
#line 1246 "switch_util.m"
        MR_Box backend_libs__switch_util__conv0__Group_140;

#line 1237 "switch_util.m"
        backend_libs__switch_util__Primary_15 = (MR_Integer) 0;
#line 8981 "backend_libs.switch_util.c"
        {
#line 8983 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_110_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8985 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_144, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8987 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_144, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 8989 "backend_libs.switch_util.c"
        }
#line 1246 "switch_util.m"
        {
#line 1246 "switch_util.m"
          backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_110_144, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv0__Group_140);
        }
#line 1246 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1246 "switch_util.m"
          {
#line 1246 "switch_util.m"
            backend_libs__switch_util___Group_140 = ((MR_Word) backend_libs__switch_util__conv0__Group_140);
#line 1246 "switch_util.m"
            backend_libs__switch_util__succeeded = MR_TRUE;
#line 1246 "switch_util.m"
          }
#line 1248 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1247 "switch_util.m"
          {
#line 1247 "switch_util.m"
            {
#line 1247 "switch_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "unshared tag is shared");
#line 1247 "switch_util.m"
              return;
            }
#line 1247 "switch_util.m"
          }
#line 1248 "switch_util.m"
        else
#line 1249 "switch_util.m"
          {
#line 1249 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_113_153;
#line 1249 "switch_util.m"
            MR_Word backend_libs__switch_util__StagGoalMap_148;
#line 1249 "switch_util.m"
            MR_Word backend_libs__switch_util__V_150_150;
#line 1250 "switch_util.m"
            MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55;

#line 1249 "switch_util.m"
            {
#line 1249 "switch_util.m"
              backend_libs__switch_util__StagGoalMap_148 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) ((MR_Integer) -1)), backend_libs__switch_util__CaseRep_9);
            }
#line 1250 "switch_util.m"
            {
#line 1250 "switch_util.m"
              backend_libs__switch_util__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1250 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_150_150, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1250 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_150_150, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_148));
#line 1250 "switch_util.m"
            }
#line 9047 "backend_libs.switch_util.c"
            {
#line 9049 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_113_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9051 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_153, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9053 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_153, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9055 "backend_libs.switch_util.c"
            }
#line 1250 "switch_util.m"
            {
#line 1250 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_113_153, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_150_150)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55);
            }
#line 1250 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55;
#line 1249 "switch_util.m"
          }
#line 1245 "switch_util.m"
      }
#line 1253 "switch_util.m"
    else
#line 1253 "switch_util.m"
      if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1245 "switch_util.m"
        {
#line 1246 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeInfo_110_110;
#line 1246 "switch_util.m"
          MR_Word backend_libs__switch_util___Group_17;
#line 1246 "switch_util.m"
          MR_Box backend_libs__switch_util__conv2__Group_17;

#line 1243 "switch_util.m"
          backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 9083 "backend_libs.switch_util.c"
          {
#line 9085 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9087 "backend_libs.switch_util.c"
            MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_110, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9089 "backend_libs.switch_util.c"
            MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_110, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9091 "backend_libs.switch_util.c"
          }
#line 1246 "switch_util.m"
          {
#line 1246 "switch_util.m"
            backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_110_110, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv2__Group_17);
          }
#line 1246 "switch_util.m"
          if (backend_libs__switch_util__succeeded)
#line 1246 "switch_util.m"
            {
#line 1246 "switch_util.m"
              backend_libs__switch_util___Group_17 = ((MR_Word) backend_libs__switch_util__conv2__Group_17);
#line 1246 "switch_util.m"
              backend_libs__switch_util__succeeded = MR_TRUE;
#line 1246 "switch_util.m"
            }
#line 1248 "switch_util.m"
          if (backend_libs__switch_util__succeeded)
#line 1247 "switch_util.m"
            {
#line 1247 "switch_util.m"
              {
#line 1247 "switch_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "unshared tag is shared");
#line 1247 "switch_util.m"
                return;
              }
#line 1247 "switch_util.m"
            }
#line 1248 "switch_util.m"
          else
#line 1249 "switch_util.m"
            {
#line 1249 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_113_113;
#line 1249 "switch_util.m"
              MR_Word backend_libs__switch_util__StagGoalMap_18;
#line 1249 "switch_util.m"
              MR_Word backend_libs__switch_util__V_85_85;
#line 1250 "switch_util.m"
              MR_Word backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_55;

#line 1249 "switch_util.m"
              {
#line 1249 "switch_util.m"
                backend_libs__switch_util__StagGoalMap_18 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) ((MR_Integer) -1)), backend_libs__switch_util__CaseRep_9);
              }
#line 1250 "switch_util.m"
              {
#line 1250 "switch_util.m"
                backend_libs__switch_util__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1250 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_85_85, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1250 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_85_85, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_18));
#line 1250 "switch_util.m"
              }
#line 9149 "backend_libs.switch_util.c"
              {
#line 9151 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9153 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_113, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9155 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_113, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9157 "backend_libs.switch_util.c"
              }
#line 1250 "switch_util.m"
              {
#line 1250 "switch_util.m"
                mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_113_113, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_85_85)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_55);
              }
#line 1250 "switch_util.m"
              *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_55;
#line 1249 "switch_util.m"
            }
#line 1245 "switch_util.m"
        }
#line 1253 "switch_util.m"
      else
#line 1253 "switch_util.m"
        if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1268 "switch_util.m"
          {
#line 1268 "switch_util.m"
            MR_Integer backend_libs__switch_util__Secondary_102;
#line 1276 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_126_126;
#line 1276 "switch_util.m"
            MR_Word backend_libs__switch_util__Group_98;
#line 1269 "switch_util.m"
            MR_Box backend_libs__switch_util__conv4_Group_98;

#line 1268 "switch_util.m"
            backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 1268 "switch_util.m"
            backend_libs__switch_util__Secondary_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 2)));
#line 9189 "backend_libs.switch_util.c"
            {
#line 9191 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9193 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_126_126, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9195 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_126_126, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9197 "backend_libs.switch_util.c"
            }
#line 1269 "switch_util.m"
            {
#line 1269 "switch_util.m"
              backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_126_126, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv4_Group_98);
            }
#line 1269 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1269 "switch_util.m"
              {
#line 1269 "switch_util.m"
                backend_libs__switch_util__Group_98 = ((MR_Word) backend_libs__switch_util__conv4_Group_98);
#line 1269 "switch_util.m"
                backend_libs__switch_util__succeeded = MR_TRUE;
#line 1269 "switch_util.m"
              }
#line 1276 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1270 "switch_util.m"
              {
#line 1270 "switch_util.m"
                MR_Word backend_libs__switch_util__V_59_59;
#line 1270 "switch_util.m"
                MR_Word backend_libs__switch_util__V_64_64;
#line 1270 "switch_util.m"
                MR_Word backend_libs__switch_util__StagGoalMap_93;
#line 1270 "switch_util.m"
                MR_Word backend_libs__switch_util__StagLoc_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_98, (MR_Integer) 0)));
#line 1270 "switch_util.m"
                MR_Word backend_libs__switch_util__StagGoalMap0_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_98, (MR_Integer) 1)));
#line 1274 "switch_util.m"
                MR_Word backend_libs__switch_util__conv5_STATE_VARIABLE_PtagCaseMap_55;

#line 1271 "switch_util.m"
                {
#line 1271 "switch_util.m"
                  backend_libs__switch_util__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1271 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_5[1]));
#line 1271 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 1) = ((MR_Box) (backend_libs__switch_util__group_case_by_ptag_7_p_0_1));
#line 1271 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1271 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1271 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 4) = ((MR_Box) (backend_libs__switch_util__StagLoc_94));
#line 1271 "switch_util.m"
                }
#line 1271 "switch_util.m"
                {
#line 1271 "switch_util.m"
                  mercury__require__expect_4_p_0(backend_libs__switch_util__V_59_59, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "local tag is shared with non-local");
                }
#line 1273 "switch_util.m"
                {
#line 1273 "switch_util.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_107, backend_libs__switch_util__Secondary_102, backend_libs__switch_util__CaseRep_9, backend_libs__switch_util__StagGoalMap0_95, &backend_libs__switch_util__StagGoalMap_93);
                }
#line 1274 "switch_util.m"
                {
#line 1274 "switch_util.m"
                  backend_libs__switch_util__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_64_64, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1274 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_64_64, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_93));
#line 1274 "switch_util.m"
                }
#line 1274 "switch_util.m"
                {
#line 1274 "switch_util.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_126_126, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_64_64)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv5_STATE_VARIABLE_PtagCaseMap_55);
                }
#line 1274 "switch_util.m"
                *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv5_STATE_VARIABLE_PtagCaseMap_55;
#line 1270 "switch_util.m"
              }
#line 1276 "switch_util.m"
            else
#line 1277 "switch_util.m"
              {
#line 1277 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_133_133;
#line 1277 "switch_util.m"
                MR_Word backend_libs__switch_util__V_67_67;
#line 1277 "switch_util.m"
                MR_Word backend_libs__switch_util__StagGoalMap_96;
#line 1278 "switch_util.m"
                MR_Word backend_libs__switch_util__conv6_STATE_VARIABLE_PtagCaseMap_55;

#line 1277 "switch_util.m"
                {
#line 1277 "switch_util.m"
                  backend_libs__switch_util__StagGoalMap_96 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) (backend_libs__switch_util__Secondary_102)), backend_libs__switch_util__CaseRep_9);
                }
#line 1278 "switch_util.m"
                {
#line 1278 "switch_util.m"
                  backend_libs__switch_util__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1278 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_67_67, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1278 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_67_67, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_96));
#line 1278 "switch_util.m"
                }
#line 9304 "backend_libs.switch_util.c"
                {
#line 9306 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9308 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_133_133, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9310 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_133_133, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9312 "backend_libs.switch_util.c"
                }
#line 1278 "switch_util.m"
                {
#line 1278 "switch_util.m"
                  mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_133_133, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_67_67)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv6_STATE_VARIABLE_PtagCaseMap_55);
                }
#line 1278 "switch_util.m"
                *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv6_STATE_VARIABLE_PtagCaseMap_55;
#line 1277 "switch_util.m"
              }
#line 1268 "switch_util.m"
          }
#line 1253 "switch_util.m"
        else
#line 1253 "switch_util.m"
          if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1254 "switch_util.m"
            {
#line 1254 "switch_util.m"
              MR_Integer backend_libs__switch_util__Secondary_19;
#line 1262 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_116_116;
#line 1262 "switch_util.m"
              MR_Word backend_libs__switch_util__Group_20;
#line 1255 "switch_util.m"
              MR_Box backend_libs__switch_util__conv7_Group_20;

#line 1254 "switch_util.m"
              backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 1254 "switch_util.m"
              backend_libs__switch_util__Secondary_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 2)));
#line 9344 "backend_libs.switch_util.c"
              {
#line 9346 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9348 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_116_116, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9350 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_116_116, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9352 "backend_libs.switch_util.c"
              }
#line 1255 "switch_util.m"
              {
#line 1255 "switch_util.m"
                backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_116_116, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv7_Group_20);
              }
#line 1255 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 1255 "switch_util.m"
                {
#line 1255 "switch_util.m"
                  backend_libs__switch_util__Group_20 = ((MR_Word) backend_libs__switch_util__conv7_Group_20);
#line 1255 "switch_util.m"
                  backend_libs__switch_util__succeeded = MR_TRUE;
#line 1255 "switch_util.m"
                }
#line 1262 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 1256 "switch_util.m"
                {
#line 1256 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagLoc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_20, (MR_Integer) 0)));
#line 1256 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagGoalMap0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_20, (MR_Integer) 1)));
#line 1256 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_70_70;
#line 1256 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_75_75;
#line 1256 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagGoalMap_89;
#line 1260 "switch_util.m"
                  MR_Word backend_libs__switch_util__conv8_STATE_VARIABLE_PtagCaseMap_55;

#line 1257 "switch_util.m"
                  {
#line 1257 "switch_util.m"
                    backend_libs__switch_util__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_5[1]));
#line 1257 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 1) = ((MR_Box) (backend_libs__switch_util__group_case_by_ptag_7_p_0_2));
#line 1257 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1257 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 3) = ((MR_Box) (backend_libs__switch_util__StagLoc_21));
#line 1257 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 4) = ((MR_Box) ((MR_Integer) 3));
#line 1257 "switch_util.m"
                  }
#line 1257 "switch_util.m"
                  {
#line 1257 "switch_util.m"
                    mercury__require__expect_4_p_0(backend_libs__switch_util__V_70_70, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "remote tag is shared with non-remote");
                  }
#line 1259 "switch_util.m"
                  {
#line 1259 "switch_util.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_107, backend_libs__switch_util__Secondary_19, backend_libs__switch_util__CaseRep_9, backend_libs__switch_util__StagGoalMap0_22, &backend_libs__switch_util__StagGoalMap_89);
                  }
#line 1260 "switch_util.m"
                  {
#line 1260 "switch_util.m"
                    backend_libs__switch_util__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1260 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1260 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_89));
#line 1260 "switch_util.m"
                  }
#line 1260 "switch_util.m"
                  {
#line 1260 "switch_util.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_116_116, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_75_75)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv8_STATE_VARIABLE_PtagCaseMap_55);
                  }
#line 1260 "switch_util.m"
                  *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv8_STATE_VARIABLE_PtagCaseMap_55;
#line 1256 "switch_util.m"
                }
#line 1262 "switch_util.m"
              else
#line 1263 "switch_util.m"
                {
#line 1263 "switch_util.m"
                  MR_Word backend_libs__switch_util__TypeInfo_123_123;
#line 1263 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_78_78;
#line 1263 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagGoalMap_90;
#line 1264 "switch_util.m"
                  MR_Word backend_libs__switch_util__conv9_STATE_VARIABLE_PtagCaseMap_55;

#line 1263 "switch_util.m"
                  {
#line 1263 "switch_util.m"
                    backend_libs__switch_util__StagGoalMap_90 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) (backend_libs__switch_util__Secondary_19)), backend_libs__switch_util__CaseRep_9);
                  }
#line 1264 "switch_util.m"
                  {
#line 1264 "switch_util.m"
                    backend_libs__switch_util__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1264 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_78_78, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1264 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_78_78, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_90));
#line 1264 "switch_util.m"
                  }
#line 9459 "backend_libs.switch_util.c"
                  {
#line 9461 "backend_libs.switch_util.c"
                    backend_libs__switch_util__TypeInfo_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9463 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_123_123, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9465 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_123_123, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9467 "backend_libs.switch_util.c"
                  }
#line 1264 "switch_util.m"
                  {
#line 1264 "switch_util.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_123_123, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_78_78)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv9_STATE_VARIABLE_PtagCaseMap_55);
                  }
#line 1264 "switch_util.m"
                  *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv9_STATE_VARIABLE_PtagCaseMap_55;
#line 1263 "switch_util.m"
                }
#line 1254 "switch_util.m"
            }
#line 1253 "switch_util.m"
          else
#line 1253 "switch_util.m"
            if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1245 "switch_util.m"
              {
#line 1246 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_110_185;
#line 1246 "switch_util.m"
                MR_Word backend_libs__switch_util___Group_181;
#line 1246 "switch_util.m"
                MR_Box backend_libs__switch_util__conv10__Group_181;

#line 1240 "switch_util.m"
                backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 9495 "backend_libs.switch_util.c"
                {
#line 9497 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_110_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9499 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_185, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9501 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_185, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9503 "backend_libs.switch_util.c"
                }
#line 1246 "switch_util.m"
                {
#line 1246 "switch_util.m"
                  backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_110_185, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv10__Group_181);
                }
#line 1246 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1246 "switch_util.m"
                  {
#line 1246 "switch_util.m"
                    backend_libs__switch_util___Group_181 = ((MR_Word) backend_libs__switch_util__conv10__Group_181);
#line 1246 "switch_util.m"
                    backend_libs__switch_util__succeeded = MR_TRUE;
#line 1246 "switch_util.m"
                  }
#line 1248 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1247 "switch_util.m"
                  {
#line 1247 "switch_util.m"
                    {
#line 1247 "switch_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "unshared tag is shared");
#line 1247 "switch_util.m"
                      return;
                    }
#line 1247 "switch_util.m"
                  }
#line 1248 "switch_util.m"
                else
#line 1249 "switch_util.m"
                  {
#line 1249 "switch_util.m"
                    MR_Word backend_libs__switch_util__TypeInfo_113_194;
#line 1249 "switch_util.m"
                    MR_Word backend_libs__switch_util__StagGoalMap_189;
#line 1249 "switch_util.m"
                    MR_Word backend_libs__switch_util__V_191_191;
#line 1250 "switch_util.m"
                    MR_Word backend_libs__switch_util__conv11_STATE_VARIABLE_PtagCaseMap_55;

#line 1249 "switch_util.m"
                    {
#line 1249 "switch_util.m"
                      backend_libs__switch_util__StagGoalMap_189 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) ((MR_Integer) -1)), backend_libs__switch_util__CaseRep_9);
                    }
#line 1250 "switch_util.m"
                    {
#line 1250 "switch_util.m"
                      backend_libs__switch_util__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1250 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_191_191, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1250 "switch_util.m"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_191_191, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_189));
#line 1250 "switch_util.m"
                    }
#line 9561 "backend_libs.switch_util.c"
                    {
#line 9563 "backend_libs.switch_util.c"
                      backend_libs__switch_util__TypeInfo_113_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9565 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_194, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9567 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_194, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9569 "backend_libs.switch_util.c"
                    }
#line 1250 "switch_util.m"
                    {
#line 1250 "switch_util.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_113_194, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_191_191)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv11_STATE_VARIABLE_PtagCaseMap_55);
                    }
#line 1250 "switch_util.m"
                    *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv11_STATE_VARIABLE_PtagCaseMap_55;
#line 1249 "switch_util.m"
                  }
#line 1245 "switch_util.m"
              }
#line 1253 "switch_util.m"
            else
#line 1298 "switch_util.m"
              {
#line 1299 "switch_util.m"
                {
#line 1299 "switch_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "non-du tag");
#line 1299 "switch_util.m"
                  return;
                }
#line 1298 "switch_util.m"
              }
#line 1301 "switch_util.m"
    {
#line 1301 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[0], backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_52, backend_libs__switch_util__CaseNum_8, &backend_libs__switch_util__conv12_Ptags0_50);
    }
#line 1301 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1301 "switch_util.m"
      {
#line 1301 "switch_util.m"
        backend_libs__switch_util__Ptags0_50 = ((MR_Word) backend_libs__switch_util__conv12_Ptags0_50);
#line 1301 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 1301 "switch_util.m"
      }
#line 1304 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1302 "switch_util.m"
      {
#line 1302 "switch_util.m"
        MR_Word backend_libs__switch_util__Ptags_51;

#line 1302 "switch_util.m"
        {
#line 1302 "switch_util.m"
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (backend_libs__switch_util__Primary_15)), backend_libs__switch_util__Ptags0_50, &backend_libs__switch_util__Ptags_51);
        }
#line 1303 "switch_util.m"
        {
#line 1303 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[0], backend_libs__switch_util__CaseNum_8, ((MR_Box) (backend_libs__switch_util__Ptags_51)), backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_52, backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_53);
#line 1303 "switch_util.m"
          return;
        }
#line 1302 "switch_util.m"
      }
#line 1304 "switch_util.m"
    else
#line 1305 "switch_util.m"
      {
#line 1305 "switch_util.m"
        MR_Word backend_libs__switch_util__Ptags_106;

#line 1305 "switch_util.m"
        {
#line 1305 "switch_util.m"
          backend_libs__switch_util__Ptags_106 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (backend_libs__switch_util__Primary_15)));
        }
#line 1306 "switch_util.m"
        {
#line 1306 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[0], backend_libs__switch_util__CaseNum_8, ((MR_Box) (backend_libs__switch_util__Ptags_106)), backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_52, backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_53);
#line 1306 "switch_util.m"
          return;
        }
#line 1305 "switch_util.m"
      }
#line 1232 "switch_util.m"
  }
#line 1227 "switch_util.m"
}

#line 1114 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__get_ptag_counts_2_5_p_0(
#line 1114 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1114 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2,
#line 1114 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_3,
#line 1114 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4,
#line 1114 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_5)
#line 1114 "switch_util.m"
{
#line 1117 "switch_util.m"
  while (MR_TRUE)
#line 1117 "switch_util.m"
    {
#line 1117 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1117 "switch_util.m"
      {
#line 1117 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 1117 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1117 "switch_util.m"
          {
#line 1117 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_5 = backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4;
#line 1117 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_3 = backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2;
#line 1117 "switch_util.m"
          }
#line 1117 "switch_util.m"
        else
#line 1118 "switch_util.m"
          {
#line 1118 "switch_util.m"
            MR_Word backend_libs__switch_util__Tag_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1118 "switch_util.m"
            MR_Word backend_libs__switch_util__Tags_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1118 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78;
#line 1118 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83;

#line 1137 "switch_util.m"
            if ((backend_libs__switch_util__Tag_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1130 "switch_util.m"
              {
#line 1132 "switch_util.m"
                MR_Word backend_libs__switch_util__V_117_117;
#line 1132 "switch_util.m"
                MR_Box backend_libs__switch_util__conv0_V_117_117;

#line 1131 "switch_util.m"
                {
#line 1131 "switch_util.m"
                  mercury__int__max_3_p_0((MR_Integer) 0, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                }
#line 1132 "switch_util.m"
                {
#line 1132 "switch_util.m"
                  backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, (MR_Integer) 0, &backend_libs__switch_util__conv0_V_117_117);
                }
#line 1132 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1132 "switch_util.m"
                  {
#line 1132 "switch_util.m"
                    backend_libs__switch_util__V_117_117 = ((MR_Word) backend_libs__switch_util__conv0_V_117_117);
#line 1132 "switch_util.m"
                    backend_libs__switch_util__succeeded = MR_TRUE;
#line 1132 "switch_util.m"
                  }
#line 1134 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1133 "switch_util.m"
                  {
#line 1133 "switch_util.m"
                    {
#line 1133 "switch_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_2\'/5", (MR_String) "unshared tag is shared");
#line 1133 "switch_util.m"
                      return;
                    }
#line 1133 "switch_util.m"
                  }
#line 1134 "switch_util.m"
                else
#line 1135 "switch_util.m"
                  {
#line 1135 "switch_util.m"
                    {
#line 1135 "switch_util.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], (MR_Integer) 0, ((MR_Box) (&backend_libs__switch_util_scalar_common_1[3])), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                    }
#line 1135 "switch_util.m"
                  }
#line 1130 "switch_util.m"
              }
#line 1137 "switch_util.m"
            else
#line 1137 "switch_util.m"
              if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1130 "switch_util.m"
                {
#line 1130 "switch_util.m"
                  MR_Integer backend_libs__switch_util__Primary_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1132 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_18_18;
#line 1132 "switch_util.m"
                  MR_Box backend_libs__switch_util__conv1_V_18_18;

#line 1131 "switch_util.m"
                  {
#line 1131 "switch_util.m"
                    mercury__int__max_3_p_0(backend_libs__switch_util__Primary_16, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                  }
#line 1132 "switch_util.m"
                  {
#line 1132 "switch_util.m"
                    backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_16, &backend_libs__switch_util__conv1_V_18_18);
                  }
#line 1132 "switch_util.m"
                  if (backend_libs__switch_util__succeeded)
#line 1132 "switch_util.m"
                    {
#line 1132 "switch_util.m"
                      backend_libs__switch_util__V_18_18 = ((MR_Word) backend_libs__switch_util__conv1_V_18_18);
#line 1132 "switch_util.m"
                      backend_libs__switch_util__succeeded = MR_TRUE;
#line 1132 "switch_util.m"
                    }
#line 1134 "switch_util.m"
                  if (backend_libs__switch_util__succeeded)
#line 1133 "switch_util.m"
                    {
#line 1133 "switch_util.m"
                      {
#line 1133 "switch_util.m"
                        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_2\'/5", (MR_String) "unshared tag is shared");
#line 1133 "switch_util.m"
                        return;
                      }
#line 1133 "switch_util.m"
                    }
#line 1134 "switch_util.m"
                  else
#line 1135 "switch_util.m"
                    {
#line 1135 "switch_util.m"
                      {
#line 1135 "switch_util.m"
                        mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_16, ((MR_Box) (&backend_libs__switch_util_scalar_common_1[4])), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                      }
#line 1135 "switch_util.m"
                    }
#line 1130 "switch_util.m"
                }
#line 1137 "switch_util.m"
              else
#line 1137 "switch_util.m"
                if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1158 "switch_util.m"
                  {
#line 1158 "switch_util.m"
                    MR_Integer backend_libs__switch_util__Primary_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1158 "switch_util.m"
                    MR_Integer backend_libs__switch_util__Secondary_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 2)));
#line 1174 "switch_util.m"
                    MR_Word backend_libs__switch_util__Target_91;
#line 1160 "switch_util.m"
                    MR_Box backend_libs__switch_util__conv2_Target_91;

#line 1159 "switch_util.m"
                    {
#line 1159 "switch_util.m"
                      mercury__int__max_3_p_0(backend_libs__switch_util__Primary_95, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                    }
#line 1160 "switch_util.m"
                    {
#line 1160 "switch_util.m"
                      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_95, &backend_libs__switch_util__conv2_Target_91);
                    }
#line 1160 "switch_util.m"
                    if (backend_libs__switch_util__succeeded)
#line 1160 "switch_util.m"
                      {
#line 1160 "switch_util.m"
                        backend_libs__switch_util__Target_91 = ((MR_Word) backend_libs__switch_util__conv2_Target_91);
#line 1160 "switch_util.m"
                        backend_libs__switch_util__succeeded = MR_TRUE;
#line 1160 "switch_util.m"
                      }
#line 1174 "switch_util.m"
                    if (backend_libs__switch_util__succeeded)
#line 1161 "switch_util.m"
                      {
#line 1161 "switch_util.m"
                        MR_Word backend_libs__switch_util__V_62_62;
#line 1161 "switch_util.m"
                        MR_Word backend_libs__switch_util__TagType_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_91, (MR_Integer) 0)));
#line 1161 "switch_util.m"
                        MR_Integer backend_libs__switch_util__MaxSoFar_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_91, (MR_Integer) 1)));
#line 1161 "switch_util.m"
                        MR_Integer backend_libs__switch_util__Max_90;

#line 1164 "switch_util.m"
                        if ((backend_libs__switch_util__TagType_88 == (MR_Integer) 2))
#line 1163 "switch_util.m"
                          {
#line 1163 "switch_util.m"
                          }
#line 1164 "switch_util.m"
                        else
#line 1168 "switch_util.m"
                          {
#line 1169 "switch_util.m"
                            {
#line 1169 "switch_util.m"
                              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_2\'/5", (MR_String) "local tag is shared with non-local");
#line 1169 "switch_util.m"
                              return;
                            }
#line 1168 "switch_util.m"
                          }
#line 1172 "switch_util.m"
                        {
#line 1172 "switch_util.m"
                          mercury__int__max_3_p_0(backend_libs__switch_util__Secondary_96, backend_libs__switch_util__MaxSoFar_89, &backend_libs__switch_util__Max_90);
                        }
#line 1173 "switch_util.m"
                        {
#line 1173 "switch_util.m"
                          backend_libs__switch_util__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "switch_util.m"
                          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_62_62, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1173 "switch_util.m"
                          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_62_62, 1) = ((MR_Box) (backend_libs__switch_util__Max_90));
#line 1173 "switch_util.m"
                        }
#line 1173 "switch_util.m"
                        {
#line 1173 "switch_util.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_95, ((MR_Box) (backend_libs__switch_util__V_62_62)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                        }
#line 1161 "switch_util.m"
                      }
#line 1174 "switch_util.m"
                    else
#line 1175 "switch_util.m"
                      {
#line 1175 "switch_util.m"
                        MR_Word backend_libs__switch_util__V_65_65;

#line 1175 "switch_util.m"
                        {
#line 1175 "switch_util.m"
                          backend_libs__switch_util__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1175 "switch_util.m"
                          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_65_65, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1175 "switch_util.m"
                          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_65_65, 1) = ((MR_Box) (backend_libs__switch_util__Secondary_96));
#line 1175 "switch_util.m"
                        }
#line 1175 "switch_util.m"
                        {
#line 1175 "switch_util.m"
                          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_95, ((MR_Box) (backend_libs__switch_util__V_65_65)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                        }
#line 1175 "switch_util.m"
                      }
#line 1158 "switch_util.m"
                  }
#line 1137 "switch_util.m"
                else
#line 1137 "switch_util.m"
                  if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1138 "switch_util.m"
                    {
#line 1138 "switch_util.m"
                      MR_Integer backend_libs__switch_util__Secondary_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 2)));
#line 1138 "switch_util.m"
                      MR_Integer backend_libs__switch_util__Primary_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1154 "switch_util.m"
                      MR_Word backend_libs__switch_util__Target_20;
#line 1140 "switch_util.m"
                      MR_Box backend_libs__switch_util__conv3_Target_20;

#line 1139 "switch_util.m"
                      {
#line 1139 "switch_util.m"
                        mercury__int__max_3_p_0(backend_libs__switch_util__Primary_87, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                      }
#line 1140 "switch_util.m"
                      {
#line 1140 "switch_util.m"
                        backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_87, &backend_libs__switch_util__conv3_Target_20);
                      }
#line 1140 "switch_util.m"
                      if (backend_libs__switch_util__succeeded)
#line 1140 "switch_util.m"
                        {
#line 1140 "switch_util.m"
                          backend_libs__switch_util__Target_20 = ((MR_Word) backend_libs__switch_util__conv3_Target_20);
#line 1140 "switch_util.m"
                          backend_libs__switch_util__succeeded = MR_TRUE;
#line 1140 "switch_util.m"
                        }
#line 1154 "switch_util.m"
                      if (backend_libs__switch_util__succeeded)
#line 1141 "switch_util.m"
                        {
#line 1141 "switch_util.m"
                          MR_Word backend_libs__switch_util__TagType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_20, (MR_Integer) 0)));
#line 1141 "switch_util.m"
                          MR_Integer backend_libs__switch_util__MaxSoFar_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_20, (MR_Integer) 1)));
#line 1141 "switch_util.m"
                          MR_Integer backend_libs__switch_util__Max_23;
#line 1141 "switch_util.m"
                          MR_Word backend_libs__switch_util__V_72_72;

#line 1144 "switch_util.m"
                          if ((backend_libs__switch_util__TagType_21 == (MR_Integer) 3))
#line 1143 "switch_util.m"
                            {
#line 1143 "switch_util.m"
                            }
#line 1144 "switch_util.m"
                          else
#line 1148 "switch_util.m"
                            {
#line 1149 "switch_util.m"
                              {
#line 1149 "switch_util.m"
                                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_2\'/5", (MR_String) "remote tag is shared with non-remote");
#line 1149 "switch_util.m"
                                return;
                              }
#line 1148 "switch_util.m"
                            }
#line 1152 "switch_util.m"
                          {
#line 1152 "switch_util.m"
                            mercury__int__max_3_p_0(backend_libs__switch_util__Secondary_19, backend_libs__switch_util__MaxSoFar_22, &backend_libs__switch_util__Max_23);
                          }
#line 1153 "switch_util.m"
                          {
#line 1153 "switch_util.m"
                            backend_libs__switch_util__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1153 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_72_72, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1153 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_72_72, 1) = ((MR_Box) (backend_libs__switch_util__Max_23));
#line 1153 "switch_util.m"
                          }
#line 1153 "switch_util.m"
                          {
#line 1153 "switch_util.m"
                            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_87, ((MR_Box) (backend_libs__switch_util__V_72_72)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                          }
#line 1141 "switch_util.m"
                        }
#line 1154 "switch_util.m"
                      else
#line 1155 "switch_util.m"
                        {
#line 1155 "switch_util.m"
                          MR_Word backend_libs__switch_util__V_75_75;

#line 1155 "switch_util.m"
                          {
#line 1155 "switch_util.m"
                            backend_libs__switch_util__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1155 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1155 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 1) = ((MR_Box) (backend_libs__switch_util__Secondary_19));
#line 1155 "switch_util.m"
                          }
#line 1155 "switch_util.m"
                          {
#line 1155 "switch_util.m"
                            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_87, ((MR_Box) (backend_libs__switch_util__V_75_75)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                          }
#line 1155 "switch_util.m"
                        }
#line 1138 "switch_util.m"
                    }
#line 1137 "switch_util.m"
                  else
#line 1137 "switch_util.m"
                    if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1130 "switch_util.m"
                      {
#line 1130 "switch_util.m"
                        MR_Integer backend_libs__switch_util__Primary_171 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1132 "switch_util.m"
                        MR_Word backend_libs__switch_util__V_150_150;
#line 1132 "switch_util.m"
                        MR_Box backend_libs__switch_util__conv4_V_150_150;

#line 1131 "switch_util.m"
                        {
#line 1131 "switch_util.m"
                          mercury__int__max_3_p_0(backend_libs__switch_util__Primary_171, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                        }
#line 1132 "switch_util.m"
                        {
#line 1132 "switch_util.m"
                          backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_171, &backend_libs__switch_util__conv4_V_150_150);
                        }
#line 1132 "switch_util.m"
                        if (backend_libs__switch_util__succeeded)
#line 1132 "switch_util.m"
                          {
#line 1132 "switch_util.m"
                            backend_libs__switch_util__V_150_150 = ((MR_Word) backend_libs__switch_util__conv4_V_150_150);
#line 1132 "switch_util.m"
                            backend_libs__switch_util__succeeded = MR_TRUE;
#line 1132 "switch_util.m"
                          }
#line 1134 "switch_util.m"
                        if (backend_libs__switch_util__succeeded)
#line 1133 "switch_util.m"
                          {
#line 1133 "switch_util.m"
                            {
#line 1133 "switch_util.m"
                              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_2\'/5", (MR_String) "unshared tag is shared");
#line 1133 "switch_util.m"
                              return;
                            }
#line 1133 "switch_util.m"
                          }
#line 1134 "switch_util.m"
                        else
#line 1135 "switch_util.m"
                          {
#line 1135 "switch_util.m"
                            {
#line 1135 "switch_util.m"
                              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_171, ((MR_Box) (&backend_libs__switch_util_scalar_common_1[3])), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                            }
#line 1135 "switch_util.m"
                          }
#line 1130 "switch_util.m"
                      }
#line 1137 "switch_util.m"
                    else
#line 1194 "switch_util.m"
                      {
#line 1195 "switch_util.m"
                        {
#line 1195 "switch_util.m"
                          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_2\'/5", (MR_String) "non-du tag");
#line 1195 "switch_util.m"
                          return;
                        }
#line 1194 "switch_util.m"
                      }
#line 1197 "switch_util.m"
            /* direct tailcall eliminated */
#line 1197 "switch_util.m"
            {
#line 1197 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Tags_13;
#line 1197 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78;
#line 1197 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0__tmp_copy_4 = backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83;

#line 1197 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4 = backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0__tmp_copy_4;
#line 1197 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2 = backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0__tmp_copy_2;
#line 1197 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 1197 "switch_util.m"
            }
#line 1197 "switch_util.m"
            continue;
#line 1118 "switch_util.m"
          }
#line 1117 "switch_util.m"
      }
#line 1117 "switch_util.m"
      break;
#line 1117 "switch_util.m"
    }
#line 1114 "switch_util.m"
}

#line 1076 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__add_string_binary_entry_4_p_0(
#line 1076 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 1076 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_5,
#line 1076 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_6,
#line 1076 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_12,
#line 1076 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_13)
#line 1076 "switch_util.m"
{
#line 1079 "switch_util.m"
  {
#line 1079 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1079 "switch_util.m"
    MR_Word backend_libs__switch_util__Tag_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_6, (MR_Integer) 1)));
#line 1079 "switch_util.m"
    MR_String backend_libs__switch_util__String_11;
#line 1079 "switch_util.m"
    MR_Word backend_libs__switch_util__V_18_18;
#line 1080 "switch_util.m"
    MR_Word backend_libs__switch_util___ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_6, (MR_Integer) 0)));
#line 1083 "switch_util.m"
    MR_String backend_libs__switch_util__StringPrime_10;

#line 1081 "switch_util.m"
    backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__Tag_9)) == (MR_mktag((MR_Integer) 1)));
#line 1081 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1081 "switch_util.m"
      {
#line 1081 "switch_util.m"
        backend_libs__switch_util__StringPrime_10 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__Tag_9, (MR_Integer) 0)));
#line 1082 "switch_util.m"
        backend_libs__switch_util__String_11 = backend_libs__switch_util__StringPrime_10;
#line 1081 "switch_util.m"
      }
#line 1081 "switch_util.m"
    else
#line 1084 "switch_util.m"
      {
#line 1084 "switch_util.m"
        {
#line 1084 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.add_string_binary_entry\'/4", (MR_String) "non-string case\?");
#line 1084 "switch_util.m"
          return;
        }
#line 1084 "switch_util.m"
      }
#line 1086 "switch_util.m"
    {
#line 1086 "switch_util.m"
      backend_libs__switch_util__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1086 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_18_18, 0) = ((MR_Box) (backend_libs__switch_util__String_11));
#line 1086 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_18_18, 1) = backend_libs__switch_util__CaseRep_5;
#line 1086 "switch_util.m"
    }
#line 1086 "switch_util.m"
    {
#line 1086 "switch_util.m"
      MR_Word base;
#line 1086 "switch_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "switch_util.m"
      *backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_13 = base;
#line 1086 "switch_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__V_18_18));
#line 1086 "switch_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_12));
#line 1086 "switch_util.m"
    }
#line 1079 "switch_util.m"
  }
#line 1076 "switch_util.m"
}

#line 1037 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0_1(
#line 1037 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1037 "switch_util.m"
{
#line 1037 "switch_util.m"
  {
#line 1037 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1037 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1037 "switch_util.m"
    {
#line 1037 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__int__f_less_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))));
    }
#line 1037 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1037 "switch_util.m"
  }
#line 1037 "switch_util.m"
}

#line 1031 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0(
#line 1031 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1031 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_6,
#line 1031 "switch_util.m"
  MR_Word backend_libs__switch_util__HomeMap_7,
#line 1031 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_8,
#line 1031 "switch_util.m"
  MR_Integer backend_libs__switch_util__LastUsed_9,
#line 1031 "switch_util.m"
  MR_Integer * backend_libs__switch_util__FreeSlot_10)
#line 1031 "switch_util.m"
{
#line 1035 "switch_util.m"
  while (MR_TRUE)
#line 1035 "switch_util.m"
    {
#line 1035 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1035 "switch_util.m"
      {
#line 1035 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;
#line 1035 "switch_util.m"
        MR_Integer backend_libs__switch_util__NextSlot_11 = (backend_libs__switch_util__LastUsed_9 + (MR_Integer) 1);
#line 1035 "switch_util.m"
        MR_Word backend_libs__switch_util__V_13_13;
#line 1039 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_20_20;
#line 1040 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_21_21;
#line 1040 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_22_22;
#line 1040 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_23_23;
#line 1040 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_24_24;
#line 1040 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_25_25;
#line 1040 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_26_26;

#line 1037 "switch_util.m"
        {
#line 1037 "switch_util.m"
          backend_libs__switch_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1037 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_5[0]));
#line 1037 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 1) = ((MR_Box) (backend_libs__switch_util__next_free_hash_slot_5_p_0_1));
#line 1037 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1037 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 3) = ((MR_Box) (backend_libs__switch_util__NextSlot_11));
#line 1037 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 4) = ((MR_Box) (backend_libs__switch_util__TableSize_8));
#line 1037 "switch_util.m"
        }
#line 1037 "switch_util.m"
        {
#line 1037 "switch_util.m"
          mercury__require__expect_4_p_0(backend_libs__switch_util__V_13_13, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.next_free_hash_slot\'/5", (MR_String) "overflow");
        }
#line 10331 "backend_libs.switch_util.c"
        {
#line 10333 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10335 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10337 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_17));
#line 10339 "backend_libs.switch_util.c"
        }
#line 1039 "switch_util.m"
        {
#line 1039 "switch_util.m"
          backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_20_20, backend_libs__switch_util__Map_6, ((MR_Box) (backend_libs__switch_util__NextSlot_11)));
        }
#line 1039 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1039 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1039 "switch_util.m"
          {
#line 10352 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 10354 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_25_25 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 10356 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_23_23 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 10358 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 10360 "backend_libs.switch_util.c"
            {
#line 10362 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10364 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_23_23));
#line 10366 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 1) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_22_22));
#line 10368 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_17));
#line 10370 "backend_libs.switch_util.c"
            }
#line 10372 "backend_libs.switch_util.c"
            {
#line 10374 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10376 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_26_26, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_25_25));
#line 10378 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_26_26, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_24_24));
#line 10380 "backend_libs.switch_util.c"
            }
#line 1040 "switch_util.m"
            {
#line 1040 "switch_util.m"
              backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0(backend_libs__switch_util__TypeCtorInfo_21_21, backend_libs__switch_util__TypeInfo_26_26, backend_libs__switch_util__HomeMap_7, ((MR_Box) (backend_libs__switch_util__NextSlot_11)));
            }
#line 1040 "switch_util.m"
            backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1039 "switch_util.m"
          }
#line 1043 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1042 "switch_util.m"
          *backend_libs__switch_util__FreeSlot_10 = backend_libs__switch_util__NextSlot_11;
#line 1043 "switch_util.m"
        else
#line 1044 "switch_util.m"
          {
#line 1044 "switch_util.m"
            /* direct tailcall eliminated */
#line 1044 "switch_util.m"
            {
#line 1044 "switch_util.m"
              MR_Integer backend_libs__switch_util__LastUsed__tmp_copy_9 = backend_libs__switch_util__NextSlot_11;

#line 1044 "switch_util.m"
              backend_libs__switch_util__LastUsed_9 = backend_libs__switch_util__LastUsed__tmp_copy_9;
#line 1044 "switch_util.m"
            }
#line 1044 "switch_util.m"
            continue;
#line 1044 "switch_util.m"
          }
#line 1035 "switch_util.m"
      }
#line 1035 "switch_util.m"
      break;
#line 1035 "switch_util.m"
    }
#line 1031 "switch_util.m"
}

#line 1011 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__follow_hash_chain_3_p_0(
#line 1011 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_12,
#line 1011 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_4,
#line 1011 "switch_util.m"
  MR_Integer backend_libs__switch_util__Slot_5,
#line 1011 "switch_util.m"
  MR_Integer * backend_libs__switch_util__LastSlot_6)
#line 1011 "switch_util.m"
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
        MR_Word backend_libs__switch_util__TypeInfo_15_15;
#line 1014 "switch_util.m"
        MR_Integer backend_libs__switch_util__NextSlot_8;
#line 1014 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10;
#line 1015 "switch_util.m"
        MR_Box backend_libs__switch_util__conv0_V_10_10;
#line 1015 "switch_util.m"
        MR_String backend_libs__switch_util__V_7_7;
#line 1015 "switch_util.m"
        MR_Box backend_libs__switch_util__V_9_9;

#line 10459 "backend_libs.switch_util.c"
        {
#line 10461 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10463 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10465 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_12));
#line 10467 "backend_libs.switch_util.c"
        }
#line 1015 "switch_util.m"
        {
#line 1015 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_15_15, (MR_Word) backend_libs__switch_util__Map_4, backend_libs__switch_util__Slot_5, &backend_libs__switch_util__conv0_V_10_10);
        }
#line 1015 "switch_util.m"
        backend_libs__switch_util__V_10_10 = ((MR_Word) backend_libs__switch_util__conv0_V_10_10);
#line 1015 "switch_util.m"
        backend_libs__switch_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_10_10, (MR_Integer) 0)));
#line 1015 "switch_util.m"
        backend_libs__switch_util__NextSlot_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_10_10, (MR_Integer) 1)));
#line 1015 "switch_util.m"
        backend_libs__switch_util__V_9_9 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_10_10, (MR_Integer) 2));
#line 1017 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__NextSlot_8 >= (MR_Integer) 0);
#line 1017 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1018 "switch_util.m"
          {
#line 1018 "switch_util.m"
            backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_15_15, backend_libs__switch_util__Map_4, ((MR_Box) (backend_libs__switch_util__NextSlot_8)));
          }
#line 1021 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1020 "switch_util.m"
          {
#line 1020 "switch_util.m"
            /* direct tailcall eliminated */
#line 1020 "switch_util.m"
            {
#line 1020 "switch_util.m"
              MR_Integer backend_libs__switch_util__Slot__tmp_copy_5 = backend_libs__switch_util__NextSlot_8;

#line 1020 "switch_util.m"
              backend_libs__switch_util__Slot_5 = backend_libs__switch_util__Slot__tmp_copy_5;
#line 1020 "switch_util.m"
            }
#line 1020 "switch_util.m"
            continue;
#line 1020 "switch_util.m"
          }
#line 1021 "switch_util.m"
        else
#line 1022 "switch_util.m"
          *backend_libs__switch_util__LastSlot_6 = backend_libs__switch_util__Slot_5;
#line 1014 "switch_util.m"
      }
#line 1014 "switch_util.m"
      break;
#line 1014 "switch_util.m"
    }
#line 1011 "switch_util.m"
}

#line 977 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(
#line 977 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_64,
#line 977 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 977 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__2_2,
#line 977 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__3_3,
#line 977 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 977 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5,
#line 977 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_6,
#line 977 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7,
#line 977 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_8)
#line 977 "switch_util.m"
{
#line 984 "switch_util.m"
  {
#line 984 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 984 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 984 "switch_util.m"
      {
#line 985 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_LastUsed_8 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7;
#line 985 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_SlotMap_6 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5;
#line 984 "switch_util.m"
      }
#line 984 "switch_util.m"
    else
#line 987 "switch_util.m"
      {
#line 987 "switch_util.m"
        MR_Word backend_libs__switch_util__StringCaseRep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 987 "switch_util.m"
        MR_Word backend_libs__switch_util__StringCaseReps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 987 "switch_util.m"
        MR_String backend_libs__switch_util__String_25;
#line 987 "switch_util.m"
        MR_Box backend_libs__switch_util__CaseRep_26;
#line 987 "switch_util.m"
        MR_Word backend_libs__switch_util__NewSlot_27;
#line 987 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39;
#line 987 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40;
#line 1004 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_67_67;

#line 988 "switch_util.m"
        {
#line 988 "switch_util.m"
          backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_64, backend_libs__switch_util__StringCaseReps_19, backend_libs__switch_util__HeadVar__2_2, backend_libs__switch_util__HeadVar__3_3, backend_libs__switch_util__HeadVar__4_4, backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5, &backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7, &backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40);
        }
#line 990 "switch_util.m"
        backend_libs__switch_util__String_25 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StringCaseRep_18, (MR_Integer) 0)));
#line 990 "switch_util.m"
        backend_libs__switch_util__CaseRep_26 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StringCaseRep_18, (MR_Integer) 1));
#line 991 "switch_util.m"
        {
#line 991 "switch_util.m"
          backend_libs__switch_util__NewSlot_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 991 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewSlot_27, 0) = ((MR_Box) (backend_libs__switch_util__String_25));
#line 991 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewSlot_27, 1) = ((MR_Box) ((MR_Integer) -1));
#line 991 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewSlot_27, 2) = backend_libs__switch_util__CaseRep_26;
#line 991 "switch_util.m"
        }
#line 10603 "backend_libs.switch_util.c"
        {
#line 10605 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10607 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_67_67, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10609 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_67_67, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_64));
#line 10611 "backend_libs.switch_util.c"
        }
#line 992 "switch_util.m"
        {
#line 992 "switch_util.m"
          backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_67_67, backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, ((MR_Box) (backend_libs__switch_util__HeadVar__3_3)));
        }
#line 1004 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 993 "switch_util.m"
          {
#line 993 "switch_util.m"
            MR_Integer backend_libs__switch_util__ChainEnd_28;
#line 993 "switch_util.m"
            MR_Word backend_libs__switch_util__ChainEndSlot0_29;
#line 993 "switch_util.m"
            MR_String backend_libs__switch_util__PrevString_30;
#line 993 "switch_util.m"
            MR_Box backend_libs__switch_util__PrevCaseRep_32;
#line 993 "switch_util.m"
            MR_Word backend_libs__switch_util__ChainEndSlot_33;
#line 993 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_43_43;
#line 995 "switch_util.m"
            MR_Box backend_libs__switch_util__conv0_ChainEndSlot0_29;
#line 996 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_31_31;
#line 998 "switch_util.m"
            MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_SlotMap_43_43;
#line 999 "switch_util.m"
            MR_Word backend_libs__switch_util__conv2_STATE_VARIABLE_SlotMap_6;

#line 993 "switch_util.m"
            {
#line 993 "switch_util.m"
              backend_libs__switch_util__follow_hash_chain_3_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_64, backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__HeadVar__3_3, &backend_libs__switch_util__ChainEnd_28);
            }
#line 994 "switch_util.m"
            {
#line 994 "switch_util.m"
              backend_libs__switch_util__next_free_hash_slot_5_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_64, backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__HeadVar__4_4, backend_libs__switch_util__HeadVar__2_2, backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40, backend_libs__switch_util__STATE_VARIABLE_LastUsed_8);
            }
#line 995 "switch_util.m"
            {
#line 995 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_67_67, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__ChainEnd_28, &backend_libs__switch_util__conv0_ChainEndSlot0_29);
            }
#line 995 "switch_util.m"
            backend_libs__switch_util__ChainEndSlot0_29 = ((MR_Word) backend_libs__switch_util__conv0_ChainEndSlot0_29);
#line 996 "switch_util.m"
            backend_libs__switch_util__PrevString_30 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot0_29, (MR_Integer) 0)));
#line 996 "switch_util.m"
            backend_libs__switch_util__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot0_29, (MR_Integer) 1)));
#line 996 "switch_util.m"
            backend_libs__switch_util__PrevCaseRep_32 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot0_29, (MR_Integer) 2));
#line 997 "switch_util.m"
            {
#line 997 "switch_util.m"
              backend_libs__switch_util__ChainEndSlot_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 997 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot_33, 0) = ((MR_Box) (backend_libs__switch_util__PrevString_30));
#line 997 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot_33, 1) = ((MR_Box) (*backend_libs__switch_util__STATE_VARIABLE_LastUsed_8));
#line 997 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot_33, 2) = backend_libs__switch_util__PrevCaseRep_32;
#line 997 "switch_util.m"
            }
#line 998 "switch_util.m"
            {
#line 998 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_67_67, backend_libs__switch_util__ChainEnd_28, ((MR_Box) (backend_libs__switch_util__ChainEndSlot_33)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, &backend_libs__switch_util__conv1_STATE_VARIABLE_SlotMap_43_43);
            }
#line 998 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_SlotMap_43_43 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_SlotMap_43_43;
#line 999 "switch_util.m"
            {
#line 999 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_67_67, *backend_libs__switch_util__STATE_VARIABLE_LastUsed_8, ((MR_Box) (backend_libs__switch_util__NewSlot_27)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_43_43, &backend_libs__switch_util__conv2_STATE_VARIABLE_SlotMap_6);
            }
#line 999 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_SlotMap_6 = (MR_Word) backend_libs__switch_util__conv2_STATE_VARIABLE_SlotMap_6;
#line 993 "switch_util.m"
          }
#line 1004 "switch_util.m"
        else
#line 1005 "switch_util.m"
          {
#line 1005 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_73_73;
#line 1005 "switch_util.m"
            MR_Word backend_libs__switch_util__conv3_STATE_VARIABLE_SlotMap_6;

#line 10703 "backend_libs.switch_util.c"
            {
#line 10705 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10707 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10709 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_64));
#line 10711 "backend_libs.switch_util.c"
            }
#line 1005 "switch_util.m"
            {
#line 1005 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_73_73, backend_libs__switch_util__HeadVar__3_3, ((MR_Box) (backend_libs__switch_util__NewSlot_27)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, &backend_libs__switch_util__conv3_STATE_VARIABLE_SlotMap_6);
            }
#line 1005 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_SlotMap_6 = (MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_SlotMap_6;
#line 1006 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_LastUsed_8 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40;
#line 1005 "switch_util.m"
          }
#line 987 "switch_util.m"
      }
#line 984 "switch_util.m"
  }
#line 977 "switch_util.m"
}

#line 962 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hashes_7_p_0(
#line 962 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_32,
#line 962 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 962 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_2,
#line 962 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_3,
#line 962 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4,
#line 962 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_5,
#line 962 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6,
#line 962 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_7)
#line 962 "switch_util.m"
{
#line 969 "switch_util.m"
  while (MR_TRUE)
#line 969 "switch_util.m"
    {
#line 969 "switch_util.m"
      /* tailcall optimized into a loop */
#line 969 "switch_util.m"
      {
#line 969 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 969 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 969 "switch_util.m"
          {
#line 969 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_LastUsed_7 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6;
#line 969 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_SlotMap_5 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4;
#line 969 "switch_util.m"
          }
#line 969 "switch_util.m"
        else
#line 971 "switch_util.m"
          {
#line 971 "switch_util.m"
            MR_Integer backend_libs__switch_util__HashVal_16;
#line 971 "switch_util.m"
            MR_Word backend_libs__switch_util__StringCaseReps_17;
#line 971 "switch_util.m"
            MR_Word backend_libs__switch_util__Rest_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 971 "switch_util.m"
            MR_Word backend_libs__switch_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 971 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_28_28;
#line 971 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_29_29;

#line 970 "switch_util.m"
            backend_libs__switch_util__HashVal_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_27_27, (MR_Integer) 0)));
#line 970 "switch_util.m"
            backend_libs__switch_util__StringCaseReps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_27_27, (MR_Integer) 1)));
#line 972 "switch_util.m"
            {
#line 972 "switch_util.m"
              backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_32, backend_libs__switch_util__StringCaseReps_17, backend_libs__switch_util__TableSize_2, backend_libs__switch_util__HashVal_16, backend_libs__switch_util__HashMap_3, backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_SlotMap_28_28, backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6, &backend_libs__switch_util__STATE_VARIABLE_LastUsed_29_29);
            }
#line 974 "switch_util.m"
            /* direct tailcall eliminated */
#line 974 "switch_util.m"
            {
#line 974 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Rest_18;
#line 974 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0__tmp_copy_4 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_28_28;
#line 974 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0__tmp_copy_6 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_29_29;

#line 974 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_0__tmp_copy_6;
#line 974 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_0__tmp_copy_4;
#line 974 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 974 "switch_util.m"
            }
#line 974 "switch_util.m"
            continue;
#line 971 "switch_util.m"
          }
#line 969 "switch_util.m"
      }
#line 969 "switch_util.m"
      break;
#line 969 "switch_util.m"
    }
#line 962 "switch_util.m"
}

#line 947 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_4_p_0(
#line 947 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 947 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_5,
#line 947 "switch_util.m"
  MR_Word backend_libs__switch_util__HashValList_6,
#line 947 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_7,
#line 947 "switch_util.m"
  MR_Word * backend_libs__switch_util__SlotMap_8)
#line 947 "switch_util.m"
{
#line 952 "switch_util.m"
  {
#line 952 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 952 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_22_22;
#line 952 "switch_util.m"
    MR_Word backend_libs__switch_util__V_14_14;
#line 956 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_10_10;

#line 10857 "backend_libs.switch_util.c"
    {
#line 10859 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10861 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10863 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_19));
#line 10865 "backend_libs.switch_util.c"
    }
#line 957 "switch_util.m"
    {
#line 957 "switch_util.m"
      backend_libs__switch_util__V_14_14 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_22_22);
    }
#line 956 "switch_util.m"
    {
#line 956 "switch_util.m"
      backend_libs__switch_util__calc_string_hash_slots_loop_over_hashes_7_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_19, backend_libs__switch_util__HashValList_6, backend_libs__switch_util__TableSize_5, backend_libs__switch_util__HashMap_7, backend_libs__switch_util__V_14_14, backend_libs__switch_util__SlotMap_8, (MR_Integer) 0, &backend_libs__switch_util__V_10_10);
    }
#line 952 "switch_util.m"
  }
#line 947 "switch_util.m"
}

#line 901 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_case_14_p_0(
#line 901 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 901 "switch_util.m"
  MR_Word backend_libs__switch_util__StrCaseRep_15,
#line 901 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_16,
#line 901 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap1_0_31,
#line 901 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap1_32,
#line 901 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap2_0_33,
#line 901 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap2_34,
#line 901 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap3_0_35,
#line 901 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap3_36,
#line 901 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_0_37,
#line 901 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_38,
#line 901 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_0_39,
#line 901 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_40,
#line 901 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_0_41,
#line 901 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_42)
#line 901 "switch_util.m"
{
#line 912 "switch_util.m"
  {
#line 912 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 912 "switch_util.m"
    MR_String backend_libs__switch_util__String_23 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StrCaseRep_15, (MR_Integer) 0)));
#line 912 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashVal1_25;
#line 912 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashVal2_26;
#line 912 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashVal3_27;
#line 912 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_43_43;
#line 912 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_44_44;
#line 912 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_45_45;
#line 913 "switch_util.m"
    MR_Box backend_libs__switch_util___CaseRep_24 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StrCaseRep_15, (MR_Integer) 1));
#line 920 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_73_73;
#line 920 "switch_util.m"
    MR_Word backend_libs__switch_util__OldEntries1_28;
#line 917 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_71_71;
#line 917 "switch_util.m"
    MR_Box backend_libs__switch_util__conv0_OldEntries1_28;
#line 926 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_91_91;
#line 926 "switch_util.m"
    MR_Word backend_libs__switch_util__OldEntries2_29;
#line 923 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_89_89;
#line 923 "switch_util.m"
    MR_Box backend_libs__switch_util__conv3_OldEntries2_29;
#line 932 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_109_109;
#line 932 "switch_util.m"
    MR_Word backend_libs__switch_util__OldEntries3_30;
#line 929 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_107_107;
#line 929 "switch_util.m"
    MR_Box backend_libs__switch_util__conv6_OldEntries3_30;

#line 914 "switch_util.m"
    {
#line 914 "switch_util.m"
      backend_libs__switch_util__V_43_43 = mercury__string__hash_1_f_0(backend_libs__switch_util__String_23);
    }
#line 914 "switch_util.m"
    backend_libs__switch_util__HashVal1_25 = (backend_libs__switch_util__V_43_43 & backend_libs__switch_util__HashMask_16);
#line 915 "switch_util.m"
    {
#line 915 "switch_util.m"
      backend_libs__switch_util__V_44_44 = mercury__string__hash2_1_f_0(backend_libs__switch_util__String_23);
    }
#line 915 "switch_util.m"
    backend_libs__switch_util__HashVal2_26 = (backend_libs__switch_util__V_44_44 & backend_libs__switch_util__HashMask_16);
#line 916 "switch_util.m"
    {
#line 916 "switch_util.m"
      backend_libs__switch_util__V_45_45 = mercury__string__hash3_1_f_0(backend_libs__switch_util__String_23);
    }
#line 916 "switch_util.m"
    backend_libs__switch_util__HashVal3_27 = (backend_libs__switch_util__V_45_45 & backend_libs__switch_util__HashMask_16);
#line 10983 "backend_libs.switch_util.c"
    {
#line 10985 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10987 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_71_71, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 10989 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_71_71, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 10991 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_71_71, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 10993 "backend_libs.switch_util.c"
    }
#line 10995 "backend_libs.switch_util.c"
    {
#line 10997 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10999 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11001 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_71_71));
#line 11003 "backend_libs.switch_util.c"
    }
#line 917 "switch_util.m"
    {
#line 917 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_73_73, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap1_0_31, backend_libs__switch_util__HashVal1_25, &backend_libs__switch_util__conv0_OldEntries1_28);
    }
#line 917 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 917 "switch_util.m"
      {
#line 917 "switch_util.m"
        backend_libs__switch_util__OldEntries1_28 = ((MR_Word) backend_libs__switch_util__conv0_OldEntries1_28);
#line 917 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 917 "switch_util.m"
      }
#line 920 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 918 "switch_util.m"
      {
#line 918 "switch_util.m"
        MR_Word backend_libs__switch_util__V_46_46;
#line 918 "switch_util.m"
        MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_HashMap1_32;

#line 918 "switch_util.m"
        {
#line 918 "switch_util.m"
          backend_libs__switch_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_46_46, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 918 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_46_46, 1) = ((MR_Box) (backend_libs__switch_util__OldEntries1_28));
#line 918 "switch_util.m"
        }
#line 918 "switch_util.m"
        {
#line 918 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_73_73, backend_libs__switch_util__HashVal1_25, ((MR_Box) (backend_libs__switch_util__V_46_46)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap1_0_31, &backend_libs__switch_util__conv1_STATE_VARIABLE_HashMap1_32);
        }
#line 918 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap1_32 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_HashMap1_32;
#line 919 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_38 = (backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_0_37 + (MR_Integer) 1);
#line 918 "switch_util.m"
      }
#line 920 "switch_util.m"
    else
#line 921 "switch_util.m"
      {
#line 921 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_83_83;
#line 921 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_85_85;
#line 921 "switch_util.m"
        MR_Word backend_libs__switch_util__V_50_50;
#line 921 "switch_util.m"
        MR_Word backend_libs__switch_util__conv2_STATE_VARIABLE_HashMap1_32;

#line 921 "switch_util.m"
        {
#line 921 "switch_util.m"
          backend_libs__switch_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_50_50, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 921 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 921 "switch_util.m"
        }
#line 11073 "backend_libs.switch_util.c"
        {
#line 11075 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11077 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_83_83, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11079 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_83_83, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11081 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_83_83, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11083 "backend_libs.switch_util.c"
        }
#line 11085 "backend_libs.switch_util.c"
        {
#line 11087 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11089 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_85_85, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11091 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_85_85, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_83_83));
#line 11093 "backend_libs.switch_util.c"
        }
#line 921 "switch_util.m"
        {
#line 921 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_85_85, backend_libs__switch_util__HashVal1_25, ((MR_Box) (backend_libs__switch_util__V_50_50)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap1_0_31, &backend_libs__switch_util__conv2_STATE_VARIABLE_HashMap1_32);
        }
#line 921 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap1_32 = (MR_Word) backend_libs__switch_util__conv2_STATE_VARIABLE_HashMap1_32;
#line 921 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_38 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_0_37;
#line 921 "switch_util.m"
      }
#line 11106 "backend_libs.switch_util.c"
    {
#line 11108 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11110 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_89_89, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11112 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_89_89, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11114 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_89_89, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11116 "backend_libs.switch_util.c"
    }
#line 11118 "backend_libs.switch_util.c"
    {
#line 11120 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11122 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_91_91, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11124 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_91_91, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_89_89));
#line 11126 "backend_libs.switch_util.c"
    }
#line 923 "switch_util.m"
    {
#line 923 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_91_91, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap2_0_33, backend_libs__switch_util__HashVal2_26, &backend_libs__switch_util__conv3_OldEntries2_29);
    }
#line 923 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 923 "switch_util.m"
      {
#line 923 "switch_util.m"
        backend_libs__switch_util__OldEntries2_29 = ((MR_Word) backend_libs__switch_util__conv3_OldEntries2_29);
#line 923 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 923 "switch_util.m"
      }
#line 926 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 924 "switch_util.m"
      {
#line 924 "switch_util.m"
        MR_Word backend_libs__switch_util__V_53_53;
#line 924 "switch_util.m"
        MR_Word backend_libs__switch_util__conv4_STATE_VARIABLE_HashMap2_34;

#line 924 "switch_util.m"
        {
#line 924 "switch_util.m"
          backend_libs__switch_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_53_53, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 924 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_53_53, 1) = ((MR_Box) (backend_libs__switch_util__OldEntries2_29));
#line 924 "switch_util.m"
        }
#line 924 "switch_util.m"
        {
#line 924 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_91_91, backend_libs__switch_util__HashVal2_26, ((MR_Box) (backend_libs__switch_util__V_53_53)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap2_0_33, &backend_libs__switch_util__conv4_STATE_VARIABLE_HashMap2_34);
        }
#line 924 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap2_34 = (MR_Word) backend_libs__switch_util__conv4_STATE_VARIABLE_HashMap2_34;
#line 925 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_40 = (backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_0_39 + (MR_Integer) 1);
#line 924 "switch_util.m"
      }
#line 926 "switch_util.m"
    else
#line 927 "switch_util.m"
      {
#line 927 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_101_101;
#line 927 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_103_103;
#line 927 "switch_util.m"
        MR_Word backend_libs__switch_util__V_57_57;
#line 927 "switch_util.m"
        MR_Word backend_libs__switch_util__conv5_STATE_VARIABLE_HashMap2_34;

#line 927 "switch_util.m"
        {
#line 927 "switch_util.m"
          backend_libs__switch_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 927 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_57_57, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 927 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "switch_util.m"
        }
#line 11196 "backend_libs.switch_util.c"
        {
#line 11198 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11200 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_101_101, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11202 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_101_101, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11204 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_101_101, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11206 "backend_libs.switch_util.c"
        }
#line 11208 "backend_libs.switch_util.c"
        {
#line 11210 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11212 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_103_103, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11214 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_103_103, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_101_101));
#line 11216 "backend_libs.switch_util.c"
        }
#line 927 "switch_util.m"
        {
#line 927 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_103_103, backend_libs__switch_util__HashVal2_26, ((MR_Box) (backend_libs__switch_util__V_57_57)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap2_0_33, &backend_libs__switch_util__conv5_STATE_VARIABLE_HashMap2_34);
        }
#line 927 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap2_34 = (MR_Word) backend_libs__switch_util__conv5_STATE_VARIABLE_HashMap2_34;
#line 927 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_40 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_0_39;
#line 927 "switch_util.m"
      }
#line 11229 "backend_libs.switch_util.c"
    {
#line 11231 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11233 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_107_107, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11235 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_107_107, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11237 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_107_107, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11239 "backend_libs.switch_util.c"
    }
#line 11241 "backend_libs.switch_util.c"
    {
#line 11243 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11245 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_109_109, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11247 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_109_109, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_107_107));
#line 11249 "backend_libs.switch_util.c"
    }
#line 929 "switch_util.m"
    {
#line 929 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_109_109, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap3_0_35, backend_libs__switch_util__HashVal3_27, &backend_libs__switch_util__conv6_OldEntries3_30);
    }
#line 929 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 929 "switch_util.m"
      {
#line 929 "switch_util.m"
        backend_libs__switch_util__OldEntries3_30 = ((MR_Word) backend_libs__switch_util__conv6_OldEntries3_30);
#line 929 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 929 "switch_util.m"
      }
#line 932 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 930 "switch_util.m"
      {
#line 930 "switch_util.m"
        MR_Word backend_libs__switch_util__V_60_60;
#line 930 "switch_util.m"
        MR_Word backend_libs__switch_util__conv7_STATE_VARIABLE_HashMap3_36;

#line 930 "switch_util.m"
        {
#line 930 "switch_util.m"
          backend_libs__switch_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_60_60, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 930 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_60_60, 1) = ((MR_Box) (backend_libs__switch_util__OldEntries3_30));
#line 930 "switch_util.m"
        }
#line 930 "switch_util.m"
        {
#line 930 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_109_109, backend_libs__switch_util__HashVal3_27, ((MR_Box) (backend_libs__switch_util__V_60_60)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap3_0_35, &backend_libs__switch_util__conv7_STATE_VARIABLE_HashMap3_36);
        }
#line 930 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap3_36 = (MR_Word) backend_libs__switch_util__conv7_STATE_VARIABLE_HashMap3_36;
#line 931 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_42 = (backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_0_41 + (MR_Integer) 1);
#line 930 "switch_util.m"
      }
#line 932 "switch_util.m"
    else
#line 933 "switch_util.m"
      {
#line 933 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_119_119;
#line 933 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_121_121;
#line 933 "switch_util.m"
        MR_Word backend_libs__switch_util__V_64_64;
#line 933 "switch_util.m"
        MR_Word backend_libs__switch_util__conv8_STATE_VARIABLE_HashMap3_36;

#line 933 "switch_util.m"
        {
#line 933 "switch_util.m"
          backend_libs__switch_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 933 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_64_64, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 933 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "switch_util.m"
        }
#line 11319 "backend_libs.switch_util.c"
        {
#line 11321 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11323 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_119_119, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11325 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_119_119, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11327 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_119_119, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11329 "backend_libs.switch_util.c"
        }
#line 11331 "backend_libs.switch_util.c"
        {
#line 11333 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11335 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_121_121, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11337 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_121_121, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_119_119));
#line 11339 "backend_libs.switch_util.c"
        }
#line 933 "switch_util.m"
        {
#line 933 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_121_121, backend_libs__switch_util__HashVal3_27, ((MR_Box) (backend_libs__switch_util__V_64_64)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap3_0_35, &backend_libs__switch_util__conv8_STATE_VARIABLE_HashMap3_36);
        }
#line 933 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap3_36 = (MR_Word) backend_libs__switch_util__conv8_STATE_VARIABLE_HashMap3_36;
#line 933 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_42 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_0_41;
#line 933 "switch_util.m"
      }
#line 912 "switch_util.m"
  }
#line 901 "switch_util.m"
}

#line 880 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_cases_14_p_0(
#line 880 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 880 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 880 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_2,
#line 880 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap1_0_3,
#line 880 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap1_4,
#line 880 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap2_0_5,
#line 880 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap2_6,
#line 880 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap3_0_7,
#line 880 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap3_8,
#line 880 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_0_9,
#line 880 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_10,
#line 880 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_0_11,
#line 880 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_12,
#line 880 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_0_13,
#line 880 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_14)
#line 880 "switch_util.m"
{
#line 889 "switch_util.m"
  while (MR_TRUE)
#line 889 "switch_util.m"
    {
#line 889 "switch_util.m"
      /* tailcall optimized into a loop */
#line 889 "switch_util.m"
      {
#line 889 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 889 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 889 "switch_util.m"
          {
#line 890 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_14 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_0_13;
#line 890 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_12 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_0_11;
#line 890 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_10 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_0_9;
#line 889 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_HashMap3_8 = backend_libs__switch_util__STATE_VARIABLE_HashMap3_0_7;
#line 889 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_HashMap2_6 = backend_libs__switch_util__STATE_VARIABLE_HashMap2_0_5;
#line 889 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_HashMap1_4 = backend_libs__switch_util__STATE_VARIABLE_HashMap1_0_3;
#line 889 "switch_util.m"
          }
#line 889 "switch_util.m"
        else
#line 893 "switch_util.m"
          {
#line 893 "switch_util.m"
            MR_Word backend_libs__switch_util__StrData_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 893 "switch_util.m"
            MR_Word backend_libs__switch_util__StrsDatas_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 893 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap1_55_55;
#line 893 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap2_56_56;
#line 893 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap3_57_57;
#line 893 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_58_58;
#line 893 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_59_59;
#line 893 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_60_60;

#line 894 "switch_util.m"
            {
#line 894 "switch_util.m"
              backend_libs__switch_util__string_hash_case_14_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_67, backend_libs__switch_util__StrData_34, backend_libs__switch_util__HashMask_2, backend_libs__switch_util__STATE_VARIABLE_HashMap1_0_3, &backend_libs__switch_util__STATE_VARIABLE_HashMap1_55_55, backend_libs__switch_util__STATE_VARIABLE_HashMap2_0_5, &backend_libs__switch_util__STATE_VARIABLE_HashMap2_56_56, backend_libs__switch_util__STATE_VARIABLE_HashMap3_0_7, &backend_libs__switch_util__STATE_VARIABLE_HashMap3_57_57, backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_0_9, &backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_58_58, backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_0_11, &backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_59_59, backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_0_13, &backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_60_60);
            }
#line 897 "switch_util.m"
            /* direct tailcall eliminated */
#line 897 "switch_util.m"
            {
#line 897 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__StrsDatas_35;
#line 897 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap1_0__tmp_copy_3 = backend_libs__switch_util__STATE_VARIABLE_HashMap1_55_55;
#line 897 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap2_0__tmp_copy_5 = backend_libs__switch_util__STATE_VARIABLE_HashMap2_56_56;
#line 897 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap3_0__tmp_copy_7 = backend_libs__switch_util__STATE_VARIABLE_HashMap3_57_57;
#line 897 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_0__tmp_copy_9 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_58_58;
#line 897 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_0__tmp_copy_11 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_59_59;
#line 897 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_0__tmp_copy_13 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_60_60;

#line 897 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_0_13 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_0__tmp_copy_13;
#line 897 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_0_11 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_0__tmp_copy_11;
#line 897 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_0_9 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions1_0__tmp_copy_9;
#line 897 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_HashMap3_0_7 = backend_libs__switch_util__STATE_VARIABLE_HashMap3_0__tmp_copy_7;
#line 897 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_HashMap2_0_5 = backend_libs__switch_util__STATE_VARIABLE_HashMap2_0__tmp_copy_5;
#line 897 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_HashMap1_0_3 = backend_libs__switch_util__STATE_VARIABLE_HashMap1_0__tmp_copy_3;
#line 897 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 897 "switch_util.m"
            }
#line 897 "switch_util.m"
            continue;
#line 893 "switch_util.m"
          }
#line 889 "switch_util.m"
      }
#line 889 "switch_util.m"
      break;
#line 889 "switch_util.m"
    }
#line 880 "switch_util.m"
}

#line 674 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__filter_out_failing_cases_2_5_p_0(
#line 674 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 674 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2,
#line 674 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_3,
#line 674 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_4,
#line 674 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_5)
#line 674 "switch_util.m"
{
#line 678 "switch_util.m"
  while (MR_TRUE)
#line 678 "switch_util.m"
    {
#line 678 "switch_util.m"
      /* tailcall optimized into a loop */
#line 678 "switch_util.m"
      {
#line 678 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 678 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 678 "switch_util.m"
          {
#line 678 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_5 = backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_4;
#line 678 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_3 = backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2;
#line 678 "switch_util.m"
          }
#line 678 "switch_util.m"
        else
#line 680 "switch_util.m"
          {
#line 680 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCase_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 680 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCases_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 680 "switch_util.m"
            MR_Word backend_libs__switch_util__Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 3)));
#line 680 "switch_util.m"
            MR_Word backend_libs__switch_util__GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Goal_19, (MR_Integer) 0)));
#line 680 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_27_27;
#line 680 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28;
#line 681 "switch_util.m"
            MR_Word backend_libs__switch_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 0)));
#line 681 "switch_util.m"
            MR_Word backend_libs__switch_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 1)));
#line 681 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 2)));
#line 682 "switch_util.m"
            MR_Word backend_libs__switch_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Goal_19, (MR_Integer) 1)));
#line 683 "switch_util.m"
            MR_Word backend_libs__switch_util__V_26_26;

#line 683 "switch_util.m"
            backend_libs__switch_util__succeeded = ((((MR_tag((MR_Word) backend_libs__switch_util__GoalExpr_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__GoalExpr_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 683 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 683 "switch_util.m"
              {
#line 683 "switch_util.m"
                backend_libs__switch_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__GoalExpr_20, (MR_Integer) 1)));
#line 683 "switch_util.m"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "switch_util.m"
              }
#line 685 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 684 "switch_util.m"
              {
#line 684 "switch_util.m"
                backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_27_27 = (MR_Integer) 0;
#line 684 "switch_util.m"
                backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28 = backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2;
#line 684 "switch_util.m"
              }
#line 685 "switch_util.m"
            else
#line 686 "switch_util.m"
              {
#line 686 "switch_util.m"
                {
#line 686 "switch_util.m"
                  backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28, 0) = ((MR_Box) (backend_libs__switch_util__TaggedCase_12));
#line 686 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28, 1) = ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2));
#line 686 "switch_util.m"
                }
#line 686 "switch_util.m"
                backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_27_27 = backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_4;
#line 686 "switch_util.m"
              }
#line 688 "switch_util.m"
            /* direct tailcall eliminated */
#line 688 "switch_util.m"
            {
#line 688 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__TaggedCases_13;
#line 688 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28;
#line 688 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0__tmp_copy_4 = backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_27_27;

#line 688 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_4 = backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0__tmp_copy_4;
#line 688 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2 = backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0__tmp_copy_2;
#line 688 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 688 "switch_util.m"
            }
#line 688 "switch_util.m"
            continue;
#line 680 "switch_util.m"
          }
#line 678 "switch_util.m"
      }
#line 678 "switch_util.m"
      break;
#line 678 "switch_util.m"
    }
#line 674 "switch_util.m"
}

#line 487 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__num_cons_ids_in_tagged_cases_2_5_p_0(
#line 487 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 487 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0_2,
#line 487 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumConsIds_3,
#line 487 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumArms_0_4,
#line 487 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumArms_5)
#line 487 "switch_util.m"
{
#line 490 "switch_util.m"
  while (MR_TRUE)
#line 490 "switch_util.m"
    {
#line 490 "switch_util.m"
      /* tailcall optimized into a loop */
#line 490 "switch_util.m"
      {
#line 490 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 490 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 490 "switch_util.m"
          {
#line 490 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumArms_5 = backend_libs__switch_util__STATE_VARIABLE_NumArms_0_4;
#line 490 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumConsIds_3 = backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0_2;
#line 490 "switch_util.m"
          }
#line 490 "switch_util.m"
        else
#line 492 "switch_util.m"
          {
#line 492 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCase_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 492 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCases_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 492 "switch_util.m"
            MR_Word backend_libs__switch_util__OtherCondIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 1)));
#line 492 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumConsIds_24_24;
#line 492 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_25_25 = (backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0_2 + (MR_Integer) 1);
#line 492 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_27_27;
#line 492 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumArms_28_28;
#line 493 "switch_util.m"
            MR_Word backend_libs__switch_util___MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 0)));
#line 493 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 2)));
#line 493 "switch_util.m"
            MR_Word backend_libs__switch_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 3)));

#line 494 "switch_util.m"
            {
#line 494 "switch_util.m"
              backend_libs__switch_util__V_27_27 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__OtherCondIds_17);
            }
#line 494 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_NumConsIds_24_24 = (backend_libs__switch_util__V_25_25 + backend_libs__switch_util__V_27_27);
#line 495 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_NumArms_28_28 = (backend_libs__switch_util__STATE_VARIABLE_NumArms_0_4 + (MR_Integer) 1);
#line 496 "switch_util.m"
            /* direct tailcall eliminated */
#line 496 "switch_util.m"
            {
#line 496 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__TaggedCases_13;
#line 496 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_NumConsIds_24_24;
#line 496 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumArms_0__tmp_copy_4 = backend_libs__switch_util__STATE_VARIABLE_NumArms_28_28;

#line 496 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumArms_0_4 = backend_libs__switch_util__STATE_VARIABLE_NumArms_0__tmp_copy_4;
#line 496 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0_2 = backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0__tmp_copy_2;
#line 496 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 496 "switch_util.m"
            }
#line 496 "switch_util.m"
            continue;
#line 492 "switch_util.m"
          }
#line 490 "switch_util.m"
      }
#line 490 "switch_util.m"
      break;
#line 490 "switch_util.m"
    }
#line 487 "switch_util.m"
}

#line 465 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__tag_cons_id_in_int_switch_11_p_0(
#line 465 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_12,
#line 465 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsId_13,
#line 465 "switch_util.m"
  MR_Word * backend_libs__switch_util__TaggedConsId_14,
#line 465 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_21,
#line 465 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LowerLimit_22,
#line 465 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_23,
#line 465 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_UpperLimit_24,
#line 465 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_0_25,
#line 465 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumValues_26,
#line 465 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_27,
#line 465 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_28)
#line 465 "switch_util.m"
{
#line 471 "switch_util.m"
  {
#line 471 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 471 "switch_util.m"
    MR_Word backend_libs__switch_util__ConsTag_19;
#line 478 "switch_util.m"
    MR_Integer backend_libs__switch_util__IntTag_20;

#line 472 "switch_util.m"
    {
#line 472 "switch_util.m"
      backend_libs__switch_util__ConsTag_19 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(backend_libs__switch_util__ModuleInfo_12, backend_libs__switch_util__ConsId_13);
    }
#line 473 "switch_util.m"
    {
#line 473 "switch_util.m"
      MR_Word base;
#line 473 "switch_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 473 "switch_util.m"
      *backend_libs__switch_util__TaggedConsId_14 = base;
#line 473 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__switch_util__ConsId_13));
#line 473 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__switch_util__ConsTag_19));
#line 473 "switch_util.m"
    }
#line 474 "switch_util.m"
    backend_libs__switch_util__succeeded = ((((MR_tag((MR_Word) backend_libs__switch_util__ConsTag_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__ConsTag_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 474 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 474 "switch_util.m"
      {
#line 474 "switch_util.m"
        backend_libs__switch_util__IntTag_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__ConsTag_19, (MR_Integer) 1)));
#line 475 "switch_util.m"
        {
#line 475 "switch_util.m"
          mercury__int__min_3_p_0(backend_libs__switch_util__IntTag_20, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_21, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_22);
        }
#line 476 "switch_util.m"
        {
#line 476 "switch_util.m"
          mercury__int__max_3_p_0(backend_libs__switch_util__IntTag_20, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_23, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_24);
        }
#line 477 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumValues_26 = (backend_libs__switch_util__STATE_VARIABLE_NumValues_0_25 + (MR_Integer) 1);
#line 477 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_28 = backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_27;
#line 474 "switch_util.m"
      }
#line 474 "switch_util.m"
    else
#line 479 "switch_util.m"
      {
#line 479 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_28 = (MR_Integer) 1;
#line 479 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumValues_26 = backend_libs__switch_util__STATE_VARIABLE_NumValues_0_25;
#line 479 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_UpperLimit_24 = backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_23;
#line 479 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_LowerLimit_22 = backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_21;
#line 479 "switch_util.m"
      }
#line 471 "switch_util.m"
  }
#line 465 "switch_util.m"
}

#line 459 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__tag_cons_id_3_p_0(
#line 459 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_4,
#line 459 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsId_5,
#line 459 "switch_util.m"
  MR_Word * backend_libs__switch_util__TaggedConsId_6)
#line 459 "switch_util.m"
{
#line 461 "switch_util.m"
  {
#line 461 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 461 "switch_util.m"
    MR_Word backend_libs__switch_util__ConsTag_7;

#line 462 "switch_util.m"
    {
#line 462 "switch_util.m"
      backend_libs__switch_util__ConsTag_7 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(backend_libs__switch_util__ModuleInfo_4, backend_libs__switch_util__ConsId_5);
    }
#line 463 "switch_util.m"
    {
#line 463 "switch_util.m"
      MR_Word base;
#line 463 "switch_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 463 "switch_util.m"
      *backend_libs__switch_util__TaggedConsId_6 = base;
#line 463 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__switch_util__ConsId_5));
#line 463 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__switch_util__ConsTag_7));
#line 463 "switch_util.m"
    }
#line 461 "switch_util.m"
  }
#line 459 "switch_util.m"
}

#line 360 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__get_string_tag_2_p_0(
#line 360 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsTag_3,
#line 360 "switch_util.m"
  MR_String * backend_libs__switch_util__Str_4)
#line 360 "switch_util.m"
{
#line 1426 "switch_util.m"
  {
#line 1426 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__ConsTag_3)) == (MR_mktag((MR_Integer) 1)));
#line 1426 "switch_util.m"
    MR_String backend_libs__switch_util__StrPrime_5;

#line 1424 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1424 "switch_util.m"
      {
#line 1424 "switch_util.m"
        backend_libs__switch_util__StrPrime_5 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__ConsTag_3, (MR_Integer) 0)));
#line 1425 "switch_util.m"
        *backend_libs__switch_util__Str_4 = backend_libs__switch_util__StrPrime_5;
#line 1424 "switch_util.m"
      }
#line 1424 "switch_util.m"
    else
#line 1427 "switch_util.m"
      {
#line 1427 "switch_util.m"
        {
#line 1427 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_string_tag\'/2", (MR_String) "not string_tag");
#line 1427 "switch_util.m"
          return;
        }
#line 1427 "switch_util.m"
      }
#line 1426 "switch_util.m"
  }
#line 360 "switch_util.m"
}

#line 355 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__get_int_tag_2_p_0(
#line 355 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsTag_3,
#line 355 "switch_util.m"
  MR_Integer * backend_libs__switch_util__Int_4)
#line 355 "switch_util.m"
{
#line 1419 "switch_util.m"
  {
#line 1419 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = ((((MR_tag((MR_Word) backend_libs__switch_util__ConsTag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__ConsTag_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1419 "switch_util.m"
    MR_Integer backend_libs__switch_util__IntPrime_5;

#line 1417 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1417 "switch_util.m"
      {
#line 1417 "switch_util.m"
        backend_libs__switch_util__IntPrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__ConsTag_3, (MR_Integer) 1)));
#line 1418 "switch_util.m"
        *backend_libs__switch_util__Int_4 = backend_libs__switch_util__IntPrime_5;
#line 1417 "switch_util.m"
      }
#line 1417 "switch_util.m"
    else
#line 1420 "switch_util.m"
      {
#line 1420 "switch_util.m"
        {
#line 1420 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_int_tag\'/2", (MR_String) "not int_tag");
#line 1420 "switch_util.m"
          return;
        }
#line 1420 "switch_util.m"
      }
#line 1419 "switch_util.m"
  }
#line 355 "switch_util.m"
}

#line 347 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__get_ptag_counts_4_p_0(
#line 347 "switch_util.m"
  MR_Word backend_libs__switch_util__Type_5,
#line 347 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_6,
#line 347 "switch_util.m"
  MR_Integer * backend_libs__switch_util__MaxPrimary_7,
#line 347 "switch_util.m"
  MR_Word * backend_libs__switch_util__PtagCountMap_8)
#line 347 "switch_util.m"
{
#line 1094 "switch_util.m"
  {
#line 1094 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1094 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeCtor_9;
#line 1094 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeTable_10;
#line 1094 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeDefn_11;
#line 1094 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeBody_12;
#line 1094 "switch_util.m"
    MR_Word backend_libs__switch_util__TagList_23;
#line 1094 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCountMap0_29;

#line 1095 "switch_util.m"
    {
#line 1095 "switch_util.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(backend_libs__switch_util__Type_5, &backend_libs__switch_util__TypeCtor_9);
    }
#line 1096 "switch_util.m"
    {
#line 1096 "switch_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__switch_util__ModuleInfo_6, &backend_libs__switch_util__TypeTable_10);
    }
#line 1097 "switch_util.m"
    {
#line 1097 "switch_util.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(backend_libs__switch_util__TypeTable_10, backend_libs__switch_util__TypeCtor_9, &backend_libs__switch_util__TypeDefn_11);
    }
#line 1098 "switch_util.m"
    {
#line 1098 "switch_util.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__switch_util__TypeDefn_11, &backend_libs__switch_util__TypeBody_12);
    }
#line 1103 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__TypeBody_12)) == (MR_mktag((MR_Integer) 1))))
#line 1100 "switch_util.m"
      {
#line 1100 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1100 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1100 "switch_util.m"
        MR_Word backend_libs__switch_util__ConsTable_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 1)));
#line 1100 "switch_util.m"
        MR_Word backend_libs__switch_util__ConsList_22;
#line 1100 "switch_util.m"
        MR_Word backend_libs__switch_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 0)));
#line 1100 "switch_util.m"
        MR_Word backend_libs__switch_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 2)));
#line 1100 "switch_util.m"
        MR_Word backend_libs__switch_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 3)));
#line 1100 "switch_util.m"
        MR_Word backend_libs__switch_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 4)));
#line 1100 "switch_util.m"
        MR_Word backend_libs__switch_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 5)));
#line 1100 "switch_util.m"
        MR_Word backend_libs__switch_util__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1100 "switch_util.m"
        MR_Word backend_libs__switch_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1100 "switch_util.m"
        MR_Word backend_libs__switch_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 7)));

#line 1101 "switch_util.m"
        {
#line 1101 "switch_util.m"
          mercury__map__to_assoc_list_2_p_0(backend_libs__switch_util__TypeCtorInfo_34_34, backend_libs__switch_util__TypeCtorInfo_35_35, backend_libs__switch_util__ConsTable_14, &backend_libs__switch_util__ConsList_22);
        }
#line 1102 "switch_util.m"
        {
#line 1102 "switch_util.m"
          mercury__assoc_list__values_2_p_0(backend_libs__switch_util__TypeCtorInfo_34_34, backend_libs__switch_util__TypeCtorInfo_35_35, backend_libs__switch_util__ConsList_22, &backend_libs__switch_util__TagList_23);
        }
#line 1100 "switch_util.m"
      }
#line 1103 "switch_util.m"
    else
#line 1108 "switch_util.m"
      {
#line 1109 "switch_util.m"
        {
#line 1109 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts\'/4", (MR_String) "non-du type");
#line 1109 "switch_util.m"
          return;
        }
#line 1108 "switch_util.m"
      }
#line 1111 "switch_util.m"
    {
#line 1111 "switch_util.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__switch_util_scalar_common_2[0], &backend_libs__switch_util__PtagCountMap0_29);
    }
#line 1112 "switch_util.m"
    {
#line 1112 "switch_util.m"
      backend_libs__switch_util__get_ptag_counts_2_5_p_0(backend_libs__switch_util__TagList_23, (MR_Integer) -1, backend_libs__switch_util__MaxPrimary_7, backend_libs__switch_util__PtagCountMap0_29, backend_libs__switch_util__PtagCountMap_8);
#line 1112 "switch_util.m"
      return;
    }
#line 1094 "switch_util.m"
  }
#line 347 "switch_util.m"
}

#line 341 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__order_ptags_by_value_4_p_0(
#line 341 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_18,
#line 341 "switch_util.m"
  MR_Integer backend_libs__switch_util__Ptag_5,
#line 341 "switch_util.m"
  MR_Integer backend_libs__switch_util__MaxPtag_6,
#line 341 "switch_util.m"
  MR_Word backend_libs__switch_util__PtagCaseMap0_7,
#line 341 "switch_util.m"
  MR_Word * backend_libs__switch_util__PtagCaseList_8)
#line 341 "switch_util.m"
{
#line 1405 "switch_util.m"
  while (MR_TRUE)
#line 1405 "switch_util.m"
    {
#line 1405 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1405 "switch_util.m"
      {
#line 1405 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__MaxPtag_6 >= backend_libs__switch_util__Ptag_5);

#line 1405 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1395 "switch_util.m"
          {
#line 1395 "switch_util.m"
            MR_Integer backend_libs__switch_util__NextPtag_9 = (backend_libs__switch_util__Ptag_5 + (MR_Integer) 1);
#line 1402 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_21_21;
#line 1402 "switch_util.m"
            MR_Word backend_libs__switch_util__PtagCase_10;
#line 1396 "switch_util.m"
            MR_Box backend_libs__switch_util__conv0_PtagCase_10;

#line 12120 "backend_libs.switch_util.c"
            {
#line 12122 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12124 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_21_21, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12126 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_21_21, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_18));
#line 12128 "backend_libs.switch_util.c"
            }
#line 1396 "switch_util.m"
            {
#line 1396 "switch_util.m"
              backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_21_21, (MR_Word) backend_libs__switch_util__PtagCaseMap0_7, backend_libs__switch_util__Ptag_5, &backend_libs__switch_util__conv0_PtagCase_10);
            }
#line 1396 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1396 "switch_util.m"
              {
#line 1396 "switch_util.m"
                backend_libs__switch_util__PtagCase_10 = ((MR_Word) backend_libs__switch_util__conv0_PtagCase_10);
#line 1396 "switch_util.m"
                backend_libs__switch_util__succeeded = MR_TRUE;
#line 1396 "switch_util.m"
              }
#line 1402 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1397 "switch_util.m"
              {
#line 1397 "switch_util.m"
                MR_Word backend_libs__switch_util__PtagCaseMap1_11;
#line 1397 "switch_util.m"
                MR_Word backend_libs__switch_util__PtagCaseList1_12;
#line 1397 "switch_util.m"
                MR_Word backend_libs__switch_util__PtagCaseEntry_13;

#line 1397 "switch_util.m"
                {
#line 1397 "switch_util.m"
                  mercury__map__delete_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_21_21, ((MR_Box) (backend_libs__switch_util__Ptag_5)), backend_libs__switch_util__PtagCaseMap0_7, &backend_libs__switch_util__PtagCaseMap1_11);
                }
#line 1398 "switch_util.m"
                {
#line 1398 "switch_util.m"
                  backend_libs__switch_util__order_ptags_by_value_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_18, backend_libs__switch_util__NextPtag_9, backend_libs__switch_util__MaxPtag_6, backend_libs__switch_util__PtagCaseMap1_11, &backend_libs__switch_util__PtagCaseList1_12);
                }
#line 1400 "switch_util.m"
                {
#line 1400 "switch_util.m"
                  backend_libs__switch_util__PtagCaseEntry_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1400 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__PtagCaseEntry_13, 0) = ((MR_Box) (backend_libs__switch_util__Ptag_5));
#line 1400 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__PtagCaseEntry_13, 1) = ((MR_Box) (backend_libs__switch_util__PtagCase_10));
#line 1400 "switch_util.m"
                }
#line 1401 "switch_util.m"
                {
#line 1401 "switch_util.m"
                  MR_Word base;
#line 1401 "switch_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1401 "switch_util.m"
                  *backend_libs__switch_util__PtagCaseList_8 = base;
#line 1401 "switch_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__PtagCaseEntry_13));
#line 1401 "switch_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__PtagCaseList1_12));
#line 1401 "switch_util.m"
                }
#line 1397 "switch_util.m"
              }
#line 1402 "switch_util.m"
            else
#line 1403 "switch_util.m"
              {
#line 1403 "switch_util.m"
                /* direct tailcall eliminated */
#line 1403 "switch_util.m"
                {
#line 1403 "switch_util.m"
                  MR_Integer backend_libs__switch_util__Ptag__tmp_copy_5 = backend_libs__switch_util__NextPtag_9;

#line 1403 "switch_util.m"
                  backend_libs__switch_util__Ptag_5 = backend_libs__switch_util__Ptag__tmp_copy_5;
#line 1403 "switch_util.m"
                }
#line 1403 "switch_util.m"
                continue;
#line 1403 "switch_util.m"
              }
#line 1395 "switch_util.m"
          }
#line 1405 "switch_util.m"
        else
#line 1408 "switch_util.m"
          {
#line 1406 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_27_27;

#line 12220 "backend_libs.switch_util.c"
            {
#line 12222 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12224 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_27_27, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12226 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_27_27, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_18));
#line 12228 "backend_libs.switch_util.c"
            }
#line 1406 "switch_util.m"
            {
#line 1406 "switch_util.m"
              backend_libs__switch_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_27_27, backend_libs__switch_util__PtagCaseMap0_7);
            }
#line 1408 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1407 "switch_util.m"
              *backend_libs__switch_util__PtagCaseList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1408 "switch_util.m"
            else
#line 1409 "switch_util.m"
              {
#line 1409 "switch_util.m"
                {
#line 1409 "switch_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.order_ptags_by_value\'/4", (MR_String) "PtagCaseMap0 is not empty");
#line 1409 "switch_util.m"
                  return;
                }
#line 1409 "switch_util.m"
              }
#line 1408 "switch_util.m"
          }
#line 1405 "switch_util.m"
      }
#line 1405 "switch_util.m"
      break;
#line 1405 "switch_util.m"
    }
#line 341 "switch_util.m"
}

#line 1320 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__order_ptags_by_count_3_p_0_1(
#line 1320 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1320 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1320 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2)
#line 1320 "switch_util.m"
{
#line 1320 "switch_util.m"
  {
#line 1320 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 1320 "switch_util.m"
    MR_Word backend_libs__switch_util__conv3_GroupEntry_4;

#line 1320 "switch_util.m"
    {
#line 1320 "switch_util.m"
      backend_libs__switch_util__interpret_rev_map_entry_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv3_GroupEntry_4);
    }
#line 1320 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv3_GroupEntry_4));
#line 1320 "switch_util.m"
  }
#line 1320 "switch_util.m"
}

#line 331 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__order_ptags_by_count_3_p_0(
#line 331 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_14,
#line 331 "switch_util.m"
  MR_Word backend_libs__switch_util__PtagCountMap_4,
#line 331 "switch_util.m"
  MR_Word backend_libs__switch_util__PtagCaseMap_5,
#line 331 "switch_util.m"
  MR_Word * backend_libs__switch_util__PtagGroupCaseList_6)
#line 331 "switch_util.m"
{
#line 1311 "switch_util.m"
  {
#line 1311 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1311 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_17_17;
#line 1311 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_19_19;
#line 1311 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_23_23;
#line 1311 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseList_7;
#line 1311 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseRevMap_8;
#line 1311 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseRevList_9;
#line 1311 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseRevSortedList_10;
#line 1311 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseSortedList_11;
#line 1311 "switch_util.m"
    MR_Word backend_libs__switch_util__V_12_12;
#line 1311 "switch_util.m"
    MR_Word backend_libs__switch_util__V_13_13;
#line 1314 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_V_12_12;
#line 1316 "switch_util.m"
    MR_Word backend_libs__switch_util__conv1_PtagCaseRevSortedList_10;
#line 1319 "switch_util.m"
    MR_Word backend_libs__switch_util__conv2_PtagCaseSortedList_11;

#line 12337 "backend_libs.switch_util.c"
    {
#line 12339 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12341 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12343 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 12345 "backend_libs.switch_util.c"
    }
#line 1312 "switch_util.m"
    {
#line 1312 "switch_util.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_17_17, backend_libs__switch_util__PtagCaseMap_5, &backend_libs__switch_util__PtagCaseList_7);
    }
#line 12352 "backend_libs.switch_util.c"
    {
#line 12354 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12356 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_19_19, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 12358 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_19_19, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 12360 "backend_libs.switch_util.c"
    }
#line 1314 "switch_util.m"
    {
#line 1314 "switch_util.m"
      backend_libs__switch_util__conv0_V_12_12 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeInfo_17_17, backend_libs__switch_util__TypeInfo_19_19);
    }
#line 1314 "switch_util.m"
    backend_libs__switch_util__V_12_12 = (MR_Word) backend_libs__switch_util__conv0_V_12_12;
#line 1313 "switch_util.m"
    {
#line 1313 "switch_util.m"
      backend_libs__switch_util__build_ptag_case_rev_map_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_14, backend_libs__switch_util__PtagCaseList_7, backend_libs__switch_util__PtagCountMap_4, backend_libs__switch_util__V_12_12, &backend_libs__switch_util__PtagCaseRevMap_8);
    }
#line 1315 "switch_util.m"
    {
#line 1315 "switch_util.m"
      mercury__map__values_2_p_0(backend_libs__switch_util__TypeInfo_17_17, backend_libs__switch_util__TypeInfo_19_19, (MR_Word) backend_libs__switch_util__PtagCaseRevMap_8, &backend_libs__switch_util__PtagCaseRevList_9);
    }
#line 1316 "switch_util.m"
    {
#line 1316 "switch_util.m"
      mercury__list__sort_2_p_0(backend_libs__switch_util__TypeInfo_19_19, (MR_Word) backend_libs__switch_util__PtagCaseRevList_9, &backend_libs__switch_util__conv1_PtagCaseRevSortedList_10);
    }
#line 1316 "switch_util.m"
    backend_libs__switch_util__PtagCaseRevSortedList_10 = (MR_Word) backend_libs__switch_util__conv1_PtagCaseRevSortedList_10;
#line 1319 "switch_util.m"
    {
#line 1319 "switch_util.m"
      mercury__list__reverse_2_p_0(backend_libs__switch_util__TypeInfo_19_19, (MR_Word) backend_libs__switch_util__PtagCaseRevSortedList_10, &backend_libs__switch_util__conv2_PtagCaseSortedList_11);
    }
#line 1319 "switch_util.m"
    backend_libs__switch_util__PtagCaseSortedList_11 = (MR_Word) backend_libs__switch_util__conv2_PtagCaseSortedList_11;
#line 1320 "switch_util.m"
    {
#line 1320 "switch_util.m"
      backend_libs__switch_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1320 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_4[0]));
#line 1320 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 1) = ((MR_Box) (backend_libs__switch_util__order_ptags_by_count_3_p_0_1));
#line 1320 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1320 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 1320 "switch_util.m"
    }
#line 12407 "backend_libs.switch_util.c"
    {
#line 12409 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12411 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1));
#line 12413 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 12415 "backend_libs.switch_util.c"
    }
#line 1320 "switch_util.m"
    {
#line 1320 "switch_util.m"
      mercury__list__map_3_p_0(backend_libs__switch_util__TypeInfo_19_19, backend_libs__switch_util__TypeInfo_23_23, (MR_Word) backend_libs__switch_util__V_13_13, (MR_Word) backend_libs__switch_util__PtagCaseSortedList_11, backend_libs__switch_util__PtagGroupCaseList_6);
#line 1320 "switch_util.m"
      return;
    }
#line 1311 "switch_util.m"
  }
#line 331 "switch_util.m"
}

#line 316 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__group_cases_by_ptag_10_p_0(
#line 316 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_29,
#line 316 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_StateA_30,
#line 316 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_StateB_31,
#line 316 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_StateC_32,
#line 316 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedCases_11,
#line 316 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_12,
#line 316 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_18,
#line 316 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_19,
#line 316 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_20,
#line 316 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_21,
#line 316 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_22,
#line 316 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_23,
#line 316 "switch_util.m"
  MR_Word * backend_libs__switch_util__CaseNumPtagsMap_16,
#line 316 "switch_util.m"
  MR_Word * backend_libs__switch_util__PtagCaseMap_17)
#line 316 "switch_util.m"
{
#line 1202 "switch_util.m"
  {
#line 1202 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1202 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1202 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_36_36;
#line 1202 "switch_util.m"
    MR_Word backend_libs__switch_util__V_27_27;
#line 1202 "switch_util.m"
    MR_Word backend_libs__switch_util__V_28_28;

#line 1205 "switch_util.m"
    {
#line 1205 "switch_util.m"
      backend_libs__switch_util__V_27_27 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_33_33, (MR_Word) &backend_libs__switch_util_scalar_common_1[0]);
    }
#line 12480 "backend_libs.switch_util.c"
    {
#line 12482 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12484 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_36_36, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12486 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_36_36, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_29));
#line 12488 "backend_libs.switch_util.c"
    }
#line 1205 "switch_util.m"
    {
#line 1205 "switch_util.m"
      backend_libs__switch_util__V_28_28 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_33_33, backend_libs__switch_util__TypeInfo_36_36);
    }
#line 1203 "switch_util.m"
    {
#line 1203 "switch_util.m"
      backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_50_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_29, backend_libs__switch_util__TaggedCases_11, backend_libs__switch_util__RepresentCase_12, backend_libs__switch_util__STATE_VARIABLE_StateA_0_18, backend_libs__switch_util__STATE_VARIABLE_StateA_19, backend_libs__switch_util__STATE_VARIABLE_StateB_0_20, backend_libs__switch_util__STATE_VARIABLE_StateB_21, backend_libs__switch_util__STATE_VARIABLE_StateC_0_22, backend_libs__switch_util__STATE_VARIABLE_StateC_23, backend_libs__switch_util__V_27_27, backend_libs__switch_util__CaseNumPtagsMap_16, backend_libs__switch_util__V_28_28, backend_libs__switch_util__PtagCaseMap_17);
#line 1203 "switch_util.m"
      return;
    }
#line 1202 "switch_util.m"
  }
#line 316 "switch_util.m"
}

#line 222 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__string_binary_cases_9_p_0(
#line 222 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_27,
#line 222 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_StateA_28,
#line 222 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_StateB_29,
#line 222 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_StateC_30,
#line 222 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedCases_10,
#line 222 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_11,
#line 222 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_17,
#line 222 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_18,
#line 222 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_19,
#line 222 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_20,
#line 222 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_21,
#line 222 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_22,
#line 222 "switch_util.m"
  MR_Word * backend_libs__switch_util__SortedTable_15)
#line 222 "switch_util.m"
{
#line 1054 "switch_util.m"
  {
#line 1054 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1054 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_33_33;
#line 1054 "switch_util.m"
    MR_Word backend_libs__switch_util__UnsortedTable_16;
#line 1057 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_SortedTable_15;

#line 1055 "switch_util.m"
    {
#line 1055 "switch_util.m"
      backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_27, backend_libs__switch_util__TaggedCases_10, backend_libs__switch_util__RepresentCase_11, backend_libs__switch_util__STATE_VARIABLE_StateA_0_17, backend_libs__switch_util__STATE_VARIABLE_StateA_18, backend_libs__switch_util__STATE_VARIABLE_StateB_0_19, backend_libs__switch_util__STATE_VARIABLE_StateB_20, backend_libs__switch_util__STATE_VARIABLE_StateC_0_21, backend_libs__switch_util__STATE_VARIABLE_StateC_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__switch_util__UnsortedTable_16);
    }
#line 12554 "backend_libs.switch_util.c"
    {
#line 12556 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12558 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_33_33, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 12560 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_33_33, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 12562 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_33_33, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_27));
#line 12564 "backend_libs.switch_util.c"
    }
#line 1057 "switch_util.m"
    {
#line 1057 "switch_util.m"
      mercury__list__sort_2_p_0(backend_libs__switch_util__TypeInfo_33_33, (MR_Word) backend_libs__switch_util__UnsortedTable_16, &backend_libs__switch_util__conv0_SortedTable_15);
    }
#line 1057 "switch_util.m"
    *backend_libs__switch_util__SortedTable_15 = (MR_Word) backend_libs__switch_util__conv0_SortedTable_15;
#line 1054 "switch_util.m"
  }
#line 222 "switch_util.m"
}

#line 209 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__construct_string_hash_cases_6_p_0(
#line 209 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_81,
#line 209 "switch_util.m"
  MR_Word backend_libs__switch_util__StrsDatas_7,
#line 209 "switch_util.m"
  MR_Word backend_libs__switch_util__Upgrade_8,
#line 209 "switch_util.m"
  MR_Integer * backend_libs__switch_util__TableSize_9,
#line 209 "switch_util.m"
  MR_Word * backend_libs__switch_util__HashSlotsMap_10,
#line 209 "switch_util.m"
  MR_Word * backend_libs__switch_util__HashOp_11,
#line 209 "switch_util.m"
  MR_Integer * backend_libs__switch_util__NumCollisions_12)
#line 209 "switch_util.m"
{
#line 786 "switch_util.m"
  {
#line 786 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_84_84;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeCtorInfo_85_85;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_87_87;
#line 786 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumStrs_13;
#line 786 "switch_util.m"
    MR_Integer backend_libs__switch_util__LogNumStrs_14;
#line 786 "switch_util.m"
    MR_Integer backend_libs__switch_util__RoundedUpNumStrs_15;
#line 786 "switch_util.m"
    MR_Integer backend_libs__switch_util__TableSizeA_16;
#line 786 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashMaskA_17;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap1A_18;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap2A_19;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap3A_20;
#line 786 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisions1A_21;
#line 786 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisions2A_22;
#line 786 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisions3A_23;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMapA_25;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__HashOpA_26;
#line 786 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisionsA_27;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap_28;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsList_37;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__V_41_41;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__V_42_42;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__V_43_43;

#line 12646 "backend_libs.switch_util.c"
    {
#line 12648 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12650 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_84_84, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 12652 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_84_84, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 12654 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_84_84, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_81));
#line 12656 "backend_libs.switch_util.c"
    }
#line 793 "switch_util.m"
    {
#line 793 "switch_util.m"
      mercury__list__length_2_p_0(backend_libs__switch_util__TypeInfo_84_84, (MR_Word) backend_libs__switch_util__StrsDatas_7, &backend_libs__switch_util__NumStrs_13);
    }
#line 794 "switch_util.m"
    {
#line 794 "switch_util.m"
      mercury__int__log2_2_p_0(backend_libs__switch_util__NumStrs_13, &backend_libs__switch_util__LogNumStrs_14);
    }
#line 795 "switch_util.m"
    {
#line 795 "switch_util.m"
      mercury__int__pow_3_p_0((MR_Integer) 2, backend_libs__switch_util__LogNumStrs_14, &backend_libs__switch_util__RoundedUpNumStrs_15);
    }
#line 797 "switch_util.m"
    backend_libs__switch_util__TableSizeA_16 = ((MR_Integer) 2 * backend_libs__switch_util__RoundedUpNumStrs_15);
#line 800 "switch_util.m"
    backend_libs__switch_util__HashMaskA_17 = (backend_libs__switch_util__TableSizeA_16 - (MR_Integer) 1);
#line 12677 "backend_libs.switch_util.c"
    backend_libs__switch_util__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 12679 "backend_libs.switch_util.c"
    {
#line 12681 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12683 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_87_87, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 12685 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_87_87, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_84_84));
#line 12687 "backend_libs.switch_util.c"
    }
#line 802 "switch_util.m"
    {
#line 802 "switch_util.m"
      backend_libs__switch_util__V_41_41 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
    }
#line 802 "switch_util.m"
    {
#line 802 "switch_util.m"
      backend_libs__switch_util__V_42_42 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
    }
#line 803 "switch_util.m"
    {
#line 803 "switch_util.m"
      backend_libs__switch_util__V_43_43 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
    }
#line 801 "switch_util.m"
    {
#line 801 "switch_util.m"
      backend_libs__switch_util__string_hash_cases_14_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_81, backend_libs__switch_util__StrsDatas_7, backend_libs__switch_util__HashMaskA_17, backend_libs__switch_util__V_41_41, &backend_libs__switch_util__HashValsMap1A_18, backend_libs__switch_util__V_42_42, &backend_libs__switch_util__HashValsMap2A_19, backend_libs__switch_util__V_43_43, &backend_libs__switch_util__HashValsMap3A_20, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions1A_21, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions2A_22, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions3A_23);
    }
#line 809 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions1A_21 <= backend_libs__switch_util__NumCollisions2A_22);
#line 809 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 809 "switch_util.m"
      backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions1A_21 <= backend_libs__switch_util__NumCollisions3A_23);
#line 813 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 810 "switch_util.m"
      {
#line 810 "switch_util.m"
        backend_libs__switch_util__HashValsMapA_25 = backend_libs__switch_util__HashValsMap1A_18;
#line 811 "switch_util.m"
        backend_libs__switch_util__HashOpA_26 = (MR_Integer) 8;
#line 812 "switch_util.m"
        backend_libs__switch_util__NumCollisionsA_27 = backend_libs__switch_util__NumCollisions1A_21;
#line 810 "switch_util.m"
      }
#line 813 "switch_util.m"
    else
#line 817 "switch_util.m"
      {
#line 813 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions2A_22 <= backend_libs__switch_util__NumCollisions3A_23);
#line 817 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 814 "switch_util.m"
          {
#line 814 "switch_util.m"
            backend_libs__switch_util__HashValsMapA_25 = backend_libs__switch_util__HashValsMap2A_19;
#line 815 "switch_util.m"
            backend_libs__switch_util__HashOpA_26 = (MR_Integer) 9;
#line 816 "switch_util.m"
            backend_libs__switch_util__NumCollisionsA_27 = backend_libs__switch_util__NumCollisions2A_22;
#line 814 "switch_util.m"
          }
#line 817 "switch_util.m"
        else
#line 818 "switch_util.m"
          {
#line 818 "switch_util.m"
            backend_libs__switch_util__HashValsMapA_25 = backend_libs__switch_util__HashValsMap3A_20;
#line 819 "switch_util.m"
            backend_libs__switch_util__HashOpA_26 = (MR_Integer) 10;
#line 820 "switch_util.m"
            backend_libs__switch_util__NumCollisionsA_27 = backend_libs__switch_util__NumCollisions3A_23;
#line 818 "switch_util.m"
          }
#line 817 "switch_util.m"
      }
#line 824 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisionsA_27 == (MR_Integer) 0);
#line 825 "switch_util.m"
    if (!(backend_libs__switch_util__succeeded))
#line 825 "switch_util.m"
      backend_libs__switch_util__succeeded = (backend_libs__switch_util__Upgrade_8 == (MR_Integer) 0);
#line 832 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 828 "switch_util.m"
      {
#line 828 "switch_util.m"
        *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeA_16;
#line 829 "switch_util.m"
        backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMapA_25;
#line 830 "switch_util.m"
        *backend_libs__switch_util__HashOp_11 = backend_libs__switch_util__HashOpA_26;
#line 831 "switch_util.m"
        *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisionsA_27;
#line 828 "switch_util.m"
      }
#line 832 "switch_util.m"
    else
#line 833 "switch_util.m"
      {
#line 833 "switch_util.m"
        MR_Integer backend_libs__switch_util__TableSizeB_29 = ((MR_Integer) 4 * backend_libs__switch_util__RoundedUpNumStrs_15);
#line 833 "switch_util.m"
        MR_Integer backend_libs__switch_util__HashMaskB_30 = (backend_libs__switch_util__TableSizeB_29 - (MR_Integer) 1);
#line 833 "switch_util.m"
        MR_Word backend_libs__switch_util__HashValsMap1B_31;
#line 833 "switch_util.m"
        MR_Word backend_libs__switch_util__HashValsMap2B_32;
#line 833 "switch_util.m"
        MR_Word backend_libs__switch_util__HashValsMap3B_33;
#line 833 "switch_util.m"
        MR_Integer backend_libs__switch_util__NumCollisions1B_34;
#line 833 "switch_util.m"
        MR_Integer backend_libs__switch_util__NumCollisions2B_35;
#line 833 "switch_util.m"
        MR_Integer backend_libs__switch_util__NumCollisions3B_36;
#line 833 "switch_util.m"
        MR_Word backend_libs__switch_util__V_59_59;
#line 833 "switch_util.m"
        MR_Word backend_libs__switch_util__V_60_60;
#line 833 "switch_util.m"
        MR_Word backend_libs__switch_util__V_61_61;

#line 838 "switch_util.m"
        {
#line 838 "switch_util.m"
          backend_libs__switch_util__V_59_59 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
        }
#line 838 "switch_util.m"
        {
#line 838 "switch_util.m"
          backend_libs__switch_util__V_60_60 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
        }
#line 839 "switch_util.m"
        {
#line 839 "switch_util.m"
          backend_libs__switch_util__V_61_61 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
        }
#line 837 "switch_util.m"
        {
#line 837 "switch_util.m"
          backend_libs__switch_util__string_hash_cases_14_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_81, backend_libs__switch_util__StrsDatas_7, backend_libs__switch_util__HashMaskB_30, backend_libs__switch_util__V_59_59, &backend_libs__switch_util__HashValsMap1B_31, backend_libs__switch_util__V_60_60, &backend_libs__switch_util__HashValsMap2B_32, backend_libs__switch_util__V_61_61, &backend_libs__switch_util__HashValsMap3B_33, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions1B_34, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions2B_35, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions3B_36);
        }
#line 846 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions1B_34 == (MR_Integer) 0);
#line 851 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 847 "switch_util.m"
          {
#line 847 "switch_util.m"
            *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeB_29;
#line 848 "switch_util.m"
            backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMap1B_31;
#line 849 "switch_util.m"
            *backend_libs__switch_util__HashOp_11 = (MR_Integer) 8;
#line 850 "switch_util.m"
            *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisions1B_34;
#line 847 "switch_util.m"
          }
#line 851 "switch_util.m"
        else
#line 856 "switch_util.m"
          {
#line 851 "switch_util.m"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions2B_35 == (MR_Integer) 0);
#line 856 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 852 "switch_util.m"
              {
#line 852 "switch_util.m"
                *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeB_29;
#line 853 "switch_util.m"
                backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMap2B_32;
#line 854 "switch_util.m"
                *backend_libs__switch_util__HashOp_11 = (MR_Integer) 9;
#line 855 "switch_util.m"
                *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisions2B_35;
#line 852 "switch_util.m"
              }
#line 856 "switch_util.m"
            else
#line 861 "switch_util.m"
              {
#line 856 "switch_util.m"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions3B_36 == (MR_Integer) 0);
#line 861 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 857 "switch_util.m"
                  {
#line 857 "switch_util.m"
                    *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeB_29;
#line 858 "switch_util.m"
                    backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMap3B_33;
#line 859 "switch_util.m"
                    *backend_libs__switch_util__HashOp_11 = (MR_Integer) 10;
#line 860 "switch_util.m"
                    *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisions3B_36;
#line 857 "switch_util.m"
                  }
#line 861 "switch_util.m"
                else
#line 862 "switch_util.m"
                  {
#line 862 "switch_util.m"
                    *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeA_16;
#line 863 "switch_util.m"
                    backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMapA_25;
#line 864 "switch_util.m"
                    *backend_libs__switch_util__HashOp_11 = backend_libs__switch_util__HashOpA_26;
#line 865 "switch_util.m"
                    *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisionsA_27;
#line 862 "switch_util.m"
                  }
#line 861 "switch_util.m"
              }
#line 856 "switch_util.m"
          }
#line 833 "switch_util.m"
      }
#line 875 "switch_util.m"
    {
#line 875 "switch_util.m"
      mercury__map__to_assoc_list_2_p_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87, backend_libs__switch_util__HashValsMap_28, &backend_libs__switch_util__HashValsList_37);
    }
#line 876 "switch_util.m"
    {
#line 876 "switch_util.m"
      backend_libs__switch_util__calc_string_hash_slots_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_81, *backend_libs__switch_util__TableSize_9, backend_libs__switch_util__HashValsList_37, backend_libs__switch_util__HashValsMap_28, backend_libs__switch_util__HashSlotsMap_10);
#line 876 "switch_util.m"
      return;
    }
#line 786 "switch_util.m"
  }
#line 209 "switch_util.m"
}

#line 188 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__get_word_bits_3_p_0(
#line 188 "switch_util.m"
  MR_Word backend_libs__switch_util__Globals_4,
#line 188 "switch_util.m"
  MR_Integer * backend_libs__switch_util__WordBits_5,
#line 188 "switch_util.m"
  MR_Integer * backend_libs__switch_util__Log2WordBits_6)
#line 188 "switch_util.m"
{
#line 766 "switch_util.m"
  {
#line 766 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 766 "switch_util.m"
    MR_Integer backend_libs__switch_util__HostWordBits_7;
#line 766 "switch_util.m"
    MR_Integer backend_libs__switch_util__TargetWordBits_8;
#line 766 "switch_util.m"
    MR_Integer backend_libs__switch_util__WordBits0_9;
#line 766 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_14_14;
#line 766 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_15_15;

#line 767 "switch_util.m"
    {
#line 767 "switch_util.m"
      mercury__int__bits_per_int_1_p_0(&backend_libs__switch_util__HostWordBits_7);
    }
#line 768 "switch_util.m"
    {
#line 768 "switch_util.m"
      libs__globals__lookup_int_option_3_p_0(backend_libs__switch_util__Globals_4, (MR_Integer) 237, &backend_libs__switch_util__TargetWordBits_8);
    }
#line 769 "switch_util.m"
    {
#line 769 "switch_util.m"
      mercury__int__min_3_p_0(backend_libs__switch_util__HostWordBits_7, backend_libs__switch_util__TargetWordBits_8, &backend_libs__switch_util__WordBits0_9);
    }
#line 777 "switch_util.m"
    backend_libs__switch_util__V_14_14 = (backend_libs__switch_util__WordBits0_9 + (MR_Integer) 1);
#line 777 "switch_util.m"
    {
#line 777 "switch_util.m"
      mercury__int__log2_2_p_0(backend_libs__switch_util__V_14_14, &backend_libs__switch_util__V_15_15);
    }
#line 777 "switch_util.m"
    *backend_libs__switch_util__Log2WordBits_6 = (backend_libs__switch_util__V_15_15 - (MR_Integer) 1);
#line 772 "switch_util.m"
    {
#line 772 "switch_util.m"
      mercury__int__pow_3_p_0((MR_Integer) 2, *backend_libs__switch_util__Log2WordBits_6, backend_libs__switch_util__WordBits_5);
#line 772 "switch_util.m"
      return;
    }
#line 766 "switch_util.m"
  }
#line 188 "switch_util.m"
}

#line 169 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__project_solns_to_rval_lists_3_p_0(
#line 169 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_T_21,
#line 169 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_22,
#line 169 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 169 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2,
#line 169 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RvalsList_3)
#line 169 "switch_util.m"
{
#line 754 "switch_util.m"
  while (MR_TRUE)
#line 754 "switch_util.m"
    {
#line 754 "switch_util.m"
      /* tailcall optimized into a loop */
#line 754 "switch_util.m"
      {
#line 754 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 754 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 754 "switch_util.m"
          *backend_libs__switch_util__STATE_VARIABLE_RvalsList_3 = backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2;
#line 754 "switch_util.m"
        else
#line 755 "switch_util.m"
          {
#line 755 "switch_util.m"
            MR_Word backend_libs__switch_util__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 755 "switch_util.m"
            MR_Word backend_libs__switch_util__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 755 "switch_util.m"
            MR_Word backend_libs__switch_util__Soln_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_7, (MR_Integer) 1)));
#line 755 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19;
#line 756 "switch_util.m"
            MR_Box backend_libs__switch_util___Index_10 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_7, (MR_Integer) 0));

#line 760 "switch_util.m"
            if (((MR_tag((MR_Word) backend_libs__switch_util__Soln_11)) == (MR_mktag((MR_Integer) 0))))
#line 758 "switch_util.m"
              {
#line 758 "switch_util.m"
                MR_Word backend_libs__switch_util__Rvals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Soln_11, (MR_Integer) 0)));

#line 759 "switch_util.m"
                {
#line 759 "switch_util.m"
                  backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19, 0) = ((MR_Box) (backend_libs__switch_util__Rvals_12));
#line 759 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19, 1) = ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2));
#line 759 "switch_util.m"
                }
#line 758 "switch_util.m"
              }
#line 760 "switch_util.m"
            else
#line 761 "switch_util.m"
              {
#line 761 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_24_24;
#line 761 "switch_util.m"
                MR_Word backend_libs__switch_util__FirstSolnRvals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__Soln_11, (MR_Integer) 0)));
#line 761 "switch_util.m"
                MR_Word backend_libs__switch_util__LaterSolnsRvalsList_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__Soln_11, (MR_Integer) 1)));
#line 761 "switch_util.m"
                MR_Word backend_libs__switch_util__V_18_18;

#line 13058 "backend_libs.switch_util.c"
                {
#line 13060 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13062 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 13064 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_22));
#line 13066 "backend_libs.switch_util.c"
                }
#line 762 "switch_util.m"
                {
#line 762 "switch_util.m"
                  backend_libs__switch_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_18_18, 0) = ((MR_Box) (backend_libs__switch_util__FirstSolnRvals_13));
#line 762 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_18_18, 1) = ((MR_Box) (backend_libs__switch_util__LaterSolnsRvalsList_14));
#line 762 "switch_util.m"
                }
#line 762 "switch_util.m"
                {
#line 762 "switch_util.m"
                  backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19 = mercury__list__f_43_43_2_f_0(backend_libs__switch_util__TypeInfo_24_24, backend_libs__switch_util__V_18_18, backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2);
                }
#line 761 "switch_util.m"
              }
#line 764 "switch_util.m"
            /* direct tailcall eliminated */
#line 764 "switch_util.m"
            {
#line 764 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Cases_8;
#line 764 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_RvalsList_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19;

#line 764 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2 = backend_libs__switch_util__STATE_VARIABLE_RvalsList_0__tmp_copy_2;
#line 764 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 764 "switch_util.m"
            }
#line 764 "switch_util.m"
            continue;
#line 755 "switch_util.m"
          }
#line 754 "switch_util.m"
      }
#line 754 "switch_util.m"
      break;
#line 754 "switch_util.m"
    }
#line 169 "switch_util.m"
}

#line 166 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util__project_all_to_one_solution_2_p_0(
#line 166 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_T_7,
#line 166 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_8,
#line 166 "switch_util.m"
  MR_Word backend_libs__switch_util__CaseSolns_3,
#line 166 "switch_util.m"
  MR_Word * backend_libs__switch_util__CaseValuePairs_4)
#line 166 "switch_util.m"
{
#line 740 "switch_util.m"
  {
#line 740 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 740 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeCtorInfo_9_9;
#line 740 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_10_10;
#line 740 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeCtorInfo_11_11;
#line 740 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_12_12;
#line 740 "switch_util.m"
    MR_Word backend_libs__switch_util__RevCaseValuePairs_5;
#line 742 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_CaseValuePairs_4;

#line 741 "switch_util.m"
    {
#line 741 "switch_util.m"
      backend_libs__switch_util__succeeded = backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_112_114_111_106_101_99_116_95_97_108_108_95_116_111_95_111_110_101_95_115_111_108_117_116_105_111_110_95_95_91_49_44_32_50_93_95_48_3_p_0(backend_libs__switch_util__CaseSolns_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__switch_util__RevCaseValuePairs_5);
    }
#line 740 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 740 "switch_util.m"
      {
#line 13152 "backend_libs.switch_util.c"
        backend_libs__switch_util__TypeCtorInfo_11_11 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 13154 "backend_libs.switch_util.c"
        backend_libs__switch_util__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 13156 "backend_libs.switch_util.c"
        {
#line 13158 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13160 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_9_9));
#line 13162 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_8));
#line 13164 "backend_libs.switch_util.c"
        }
#line 13166 "backend_libs.switch_util.c"
        {
#line 13168 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13170 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_12_12, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_11_11));
#line 13172 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_12_12, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_T_7));
#line 13174 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_12_12, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_10_10));
#line 13176 "backend_libs.switch_util.c"
        }
#line 742 "switch_util.m"
        {
#line 742 "switch_util.m"
          mercury__list__reverse_2_p_0(backend_libs__switch_util__TypeInfo_12_12, (MR_Word) backend_libs__switch_util__RevCaseValuePairs_5, &backend_libs__switch_util__conv0_CaseValuePairs_4);
        }
#line 742 "switch_util.m"
        *backend_libs__switch_util__CaseValuePairs_4 = (MR_Word) backend_libs__switch_util__conv0_CaseValuePairs_4;
#line 742 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 740 "switch_util.m"
      }
#line 740 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 740 "switch_util.m"
  }
#line 166 "switch_util.m"
}

#line 161 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util__find_int_lookup_switch_params_11_p_0(
#line 161 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_12,
#line 161 "switch_util.m"
  MR_Word backend_libs__switch_util__SwitchVarType_13,
#line 161 "switch_util.m"
  MR_Word backend_libs__switch_util__SwitchCanFail_14,
#line 161 "switch_util.m"
  MR_Integer backend_libs__switch_util__LowerLimit_15,
#line 161 "switch_util.m"
  MR_Integer backend_libs__switch_util__UpperLimit_16,
#line 161 "switch_util.m"
  MR_Integer backend_libs__switch_util__NumValues_17,
#line 161 "switch_util.m"
  MR_Integer backend_libs__switch_util__ReqDensity_18,
#line 161 "switch_util.m"
  MR_Word * backend_libs__switch_util__NeedBitVecCheck_19,
#line 161 "switch_util.m"
  MR_Word * backend_libs__switch_util__NeedRangeCheck_20,
#line 161 "switch_util.m"
  MR_Integer * backend_libs__switch_util__FirstVal_21,
#line 161 "switch_util.m"
  MR_Integer * backend_libs__switch_util__LastVal_22)
#line 161 "switch_util.m"
{
#line 692 "switch_util.m"
  {
#line 692 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 692 "switch_util.m"
    MR_Integer backend_libs__switch_util__Span_23 = (backend_libs__switch_util__UpperLimit_16 - backend_libs__switch_util__LowerLimit_15);
#line 692 "switch_util.m"
    MR_Integer backend_libs__switch_util__Range_24 = (backend_libs__switch_util__Span_23 + (MR_Integer) 1);
#line 692 "switch_util.m"
    MR_Integer backend_libs__switch_util__Density_25;
#line 692 "switch_util.m"
    MR_Word backend_libs__switch_util__NeedBitVecCheck0_26;
#line 692 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_37_37 = (backend_libs__switch_util__NumValues_17 * (MR_Integer) 100);

#line 648 "switch_util.m"
    {
#line 648 "switch_util.m"
      backend_libs__switch_util__Density_25 = mercury__int__f_47_47_2_f_0(backend_libs__switch_util__V_37_37, backend_libs__switch_util__Range_24);
    }
#line 699 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__Density_25 > backend_libs__switch_util__ReqDensity_18);
#line 692 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 692 "switch_util.m"
      {
#line 703 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumValues_17 == backend_libs__switch_util__Range_24);
#line 705 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 704 "switch_util.m"
          backend_libs__switch_util__NeedBitVecCheck0_26 = (MR_Integer) 1;
#line 705 "switch_util.m"
        else
#line 706 "switch_util.m"
          backend_libs__switch_util__NeedBitVecCheck0_26 = (MR_Integer) 0;
#line 732 "switch_util.m"
        if ((backend_libs__switch_util__SwitchCanFail_14 == (MR_Integer) 0))
#line 709 "switch_util.m"
          {
#line 709 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeCategory_27;
#line 726 "switch_util.m"
            MR_Integer backend_libs__switch_util__TypeRange_30;
#line 718 "switch_util.m"
            MR_Integer backend_libs__switch_util__DetDensity_31;
#line 718 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_42_42;
#line 718 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_43_43;
#line 717 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_28_28;
#line 717 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_29_29;

#line 715 "switch_util.m"
            {
#line 715 "switch_util.m"
              backend_libs__switch_util__TypeCategory_27 = check_hlds__type_util__classify_type_2_f_0(backend_libs__switch_util__ModuleInfo_12, backend_libs__switch_util__SwitchVarType_13);
            }
#line 717 "switch_util.m"
            {
#line 717 "switch_util.m"
              backend_libs__switch_util__succeeded = backend_libs__switch_util__type_range_6_p_0(backend_libs__switch_util__ModuleInfo_12, backend_libs__switch_util__TypeCategory_27, backend_libs__switch_util__SwitchVarType_13, &backend_libs__switch_util__V_28_28, &backend_libs__switch_util__V_29_29, &backend_libs__switch_util__TypeRange_30);
            }
#line 718 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 718 "switch_util.m"
              {
#line 648 "switch_util.m"
                backend_libs__switch_util__V_43_43 = (MR_Integer) 100;
#line 648 "switch_util.m"
                backend_libs__switch_util__V_42_42 = (backend_libs__switch_util__NumValues_17 * backend_libs__switch_util__V_43_43);
#line 648 "switch_util.m"
                {
#line 648 "switch_util.m"
                  backend_libs__switch_util__DetDensity_31 = mercury__int__f_47_47_2_f_0(backend_libs__switch_util__V_42_42, backend_libs__switch_util__TypeRange_30);
                }
#line 720 "switch_util.m"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__DetDensity_31 > backend_libs__switch_util__ReqDensity_18);
#line 718 "switch_util.m"
              }
#line 726 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 722 "switch_util.m"
              {
#line 722 "switch_util.m"
                *backend_libs__switch_util__NeedRangeCheck_20 = (MR_Integer) 1;
#line 723 "switch_util.m"
                *backend_libs__switch_util__NeedBitVecCheck_19 = (MR_Integer) 0;
#line 724 "switch_util.m"
                *backend_libs__switch_util__FirstVal_21 = (MR_Integer) 0;
#line 725 "switch_util.m"
                *backend_libs__switch_util__LastVal_22 = (backend_libs__switch_util__TypeRange_30 - (MR_Integer) 1);
#line 722 "switch_util.m"
              }
#line 726 "switch_util.m"
            else
#line 727 "switch_util.m"
              {
#line 727 "switch_util.m"
                *backend_libs__switch_util__NeedRangeCheck_20 = (MR_Integer) 0;
#line 728 "switch_util.m"
                *backend_libs__switch_util__NeedBitVecCheck_19 = backend_libs__switch_util__NeedBitVecCheck0_26;
#line 729 "switch_util.m"
                *backend_libs__switch_util__FirstVal_21 = backend_libs__switch_util__LowerLimit_15;
#line 730 "switch_util.m"
                *backend_libs__switch_util__LastVal_22 = backend_libs__switch_util__UpperLimit_16;
#line 727 "switch_util.m"
              }
#line 709 "switch_util.m"
          }
#line 732 "switch_util.m"
        else
#line 733 "switch_util.m"
          {
#line 734 "switch_util.m"
            *backend_libs__switch_util__NeedRangeCheck_20 = (MR_Integer) 1;
#line 735 "switch_util.m"
            *backend_libs__switch_util__NeedBitVecCheck_19 = backend_libs__switch_util__NeedBitVecCheck0_26;
#line 736 "switch_util.m"
            *backend_libs__switch_util__FirstVal_21 = backend_libs__switch_util__LowerLimit_15;
#line 737 "switch_util.m"
            *backend_libs__switch_util__LastVal_22 = backend_libs__switch_util__UpperLimit_16;
#line 733 "switch_util.m"
          }
#line 732 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 692 "switch_util.m"
      }
#line 692 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 692 "switch_util.m"
  }
#line 161 "switch_util.m"
}

#line 157 "switch_util.m"
void MR_CALL 
backend_libs__switch_util__filter_out_failing_cases_if_needed_5_p_0(
#line 157 "switch_util.m"
  MR_Word backend_libs__switch_util__CodeModel_6,
#line 157 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_TaggedCases_0_9,
#line 157 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_TaggedCases_10,
#line 157 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_11,
#line 157 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_12)
#line 157 "switch_util.m"
{
#line 660 "switch_util.m"
  {
#line 660 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 660 "switch_util.m"
    if ((backend_libs__switch_util__CodeModel_6 == (MR_Integer) 0))
#line 663 "switch_util.m"
      {
#line 663 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_TaggedCases_10 = backend_libs__switch_util__STATE_VARIABLE_TaggedCases_0_9;
#line 663 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_12 = backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_11;
#line 663 "switch_util.m"
      }
#line 660 "switch_util.m"
    else
#line 669 "switch_util.m"
      {
#line 669 "switch_util.m"
        MR_Word backend_libs__switch_util__RevTaggedCases_20;

#line 670 "switch_util.m"
        {
#line 670 "switch_util.m"
          backend_libs__switch_util__filter_out_failing_cases_2_5_p_0(backend_libs__switch_util__STATE_VARIABLE_TaggedCases_0_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__switch_util__RevTaggedCases_20, backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_11, backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_12);
        }
#line 672 "switch_util.m"
        {
#line 672 "switch_util.m"
          mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, backend_libs__switch_util__RevTaggedCases_20, backend_libs__switch_util__STATE_VARIABLE_TaggedCases_10);
#line 672 "switch_util.m"
          return;
        }
#line 669 "switch_util.m"
      }
#line 660 "switch_util.m"
  }
#line 157 "switch_util.m"
}

#line 117 "switch_util.m"
MR_Integer MR_CALL 
backend_libs__switch_util__switch_density_2_f_0(
#line 117 "switch_util.m"
  MR_Integer backend_libs__switch_util__NumCases_4,
#line 117 "switch_util.m"
  MR_Integer backend_libs__switch_util__Range_5)
#line 117 "switch_util.m"
{
#line 647 "switch_util.m"
  {
#line 647 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 647 "switch_util.m"
    MR_Integer backend_libs__switch_util__Density_6;
#line 647 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_7_7 = (backend_libs__switch_util__NumCases_4 * (MR_Integer) 100);

#line 648 "switch_util.m"
    {
#line 648 "switch_util.m"
      return backend_libs__switch_util__Density_6 = mercury__int__f_47_47_2_f_0(backend_libs__switch_util__V_7_7, backend_libs__switch_util__Range_5);
    }
#line 647 "switch_util.m"
    return backend_libs__switch_util__Density_6;
#line 647 "switch_util.m"
  }
#line 117 "switch_util.m"
}

#line 112 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util__type_range_6_p_0(
#line 112 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_7,
#line 112 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeCtorCat_8,
#line 112 "switch_util.m"
  MR_Word backend_libs__switch_util__Type_9,
#line 112 "switch_util.m"
  MR_Integer * backend_libs__switch_util__Min_10,
#line 112 "switch_util.m"
  MR_Integer * backend_libs__switch_util__Max_11,
#line 112 "switch_util.m"
  MR_Integer * backend_libs__switch_util__NumValues_12)
#line 112 "switch_util.m"
{
#line 615 "switch_util.m"
  {
#line 615 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 615 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_38_38;
#line 615 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_39_39;

#line 625 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__TypeCtorCat_8)) == (MR_mktag((MR_Integer) 1))))
#line 617 "switch_util.m"
      {
#line 617 "switch_util.m"
        MR_Word backend_libs__switch_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeCtorCat_8, (MR_Integer) 0)));

#line 617 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_37_37 == (MR_Integer) 2);
#line 617 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 617 "switch_util.m"
          {
#line 623 "switch_util.m"
            {
#line 623 "switch_util.m"
              mercury__char__min_char_value_1_p_0(backend_libs__switch_util__Min_10);
            }
#line 624 "switch_util.m"
            {
#line 624 "switch_util.m"
              mercury__char__max_char_value_1_p_0(backend_libs__switch_util__Max_11);
            }
#line 624 "switch_util.m"
            backend_libs__switch_util__succeeded = MR_TRUE;
#line 617 "switch_util.m"
          }
#line 617 "switch_util.m"
      }
#line 625 "switch_util.m"
    else
#line 625 "switch_util.m"
      if (((MR_tag((MR_Word) backend_libs__switch_util__TypeCtorCat_8)) == (MR_mktag((MR_Integer) 2))))
#line 626 "switch_util.m"
        {
#line 626 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeCtor_13;
#line 626 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeTable_14;
#line 626 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeDefn_15;
#line 626 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeBody_16;
#line 626 "switch_util.m"
          MR_Word backend_libs__switch_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__switch_util__TypeCtorCat_8, (MR_Integer) 0)));

#line 626 "switch_util.m"
          backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_32_32 == (MR_Integer) 0);
#line 626 "switch_util.m"
          if (backend_libs__switch_util__succeeded)
#line 626 "switch_util.m"
            {
#line 627 "switch_util.m"
              *backend_libs__switch_util__Min_10 = (MR_Integer) 0;
#line 628 "switch_util.m"
              {
#line 628 "switch_util.m"
                parse_tree__prog_type__type_to_ctor_det_2_p_0(backend_libs__switch_util__Type_9, &backend_libs__switch_util__TypeCtor_13);
              }
#line 629 "switch_util.m"
              {
#line 629 "switch_util.m"
                hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__switch_util__ModuleInfo_7, &backend_libs__switch_util__TypeTable_14);
              }
#line 630 "switch_util.m"
              {
#line 630 "switch_util.m"
                hlds__hlds_data__lookup_type_ctor_defn_3_p_0(backend_libs__switch_util__TypeTable_14, backend_libs__switch_util__TypeCtor_13, &backend_libs__switch_util__TypeDefn_15);
              }
#line 631 "switch_util.m"
              {
#line 631 "switch_util.m"
                hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__switch_util__TypeDefn_15, &backend_libs__switch_util__TypeBody_16);
              }
#line 636 "switch_util.m"
              if (((MR_tag((MR_Word) backend_libs__switch_util__TypeBody_16)) == (MR_mktag((MR_Integer) 1))))
#line 633 "switch_util.m"
                {
#line 633 "switch_util.m"
                  MR_Word backend_libs__switch_util__ConsTable_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 1)));
#line 633 "switch_util.m"
                  MR_Integer backend_libs__switch_util__TypeRange_26;
#line 633 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 0)));
#line 633 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 2)));
#line 633 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 3)));
#line 633 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 4)));
#line 633 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 5)));
#line 633 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 633 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 633 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_16, (MR_Integer) 7)));

#line 634 "switch_util.m"
                  {
#line 634 "switch_util.m"
                    mercury__map__count_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, backend_libs__switch_util__ConsTable_18, &backend_libs__switch_util__TypeRange_26);
                  }
#line 635 "switch_util.m"
                  *backend_libs__switch_util__Max_11 = (backend_libs__switch_util__TypeRange_26 - (MR_Integer) 1);
#line 633 "switch_util.m"
                }
#line 636 "switch_util.m"
              else
#line 641 "switch_util.m"
                {
#line 642 "switch_util.m"
                  {
#line 642 "switch_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.type_range\'/6", (MR_String) "enum type is not d.u. type\?");
                  }
#line 641 "switch_util.m"
                }
#line 636 "switch_util.m"
              backend_libs__switch_util__succeeded = MR_TRUE;
#line 626 "switch_util.m"
            }
#line 626 "switch_util.m"
        }
#line 625 "switch_util.m"
      else
#line 625 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_FALSE;
#line 615 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 615 "switch_util.m"
      {
#line 645 "switch_util.m"
        backend_libs__switch_util__V_38_38 = (*backend_libs__switch_util__Max_11 - *backend_libs__switch_util__Min_10);
#line 645 "switch_util.m"
        backend_libs__switch_util__V_39_39 = (MR_Integer) 1;
#line 645 "switch_util.m"
        *backend_libs__switch_util__NumValues_12 = (backend_libs__switch_util__V_38_38 + backend_libs__switch_util__V_39_39);
#line 645 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 615 "switch_util.m"
      }
#line 615 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 615 "switch_util.m"
  }
#line 112 "switch_util.m"
}

#line 97 "switch_util.m"
MR_bool MR_CALL 
backend_libs__switch_util__is_smart_indexing_disabled_category_2_p_0(
#line 97 "switch_util.m"
  MR_Word backend_libs__switch_util__Globals_3,
#line 97 "switch_util.m"
  MR_Word backend_libs__switch_util__SwitchCategory_4)
#line 97 "switch_util.m"
{
#line 596 "switch_util.m"
  {
#line 596 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 596 "switch_util.m"
    if ((backend_libs__switch_util__SwitchCategory_4 == (MR_Integer) 0))
#line 596 "switch_util.m"
      {
#line 597 "switch_util.m"
        {
#line 597 "switch_util.m"
          return backend_libs__switch_util__succeeded = libs__globals__lookup_bool_option_3_p_1(backend_libs__switch_util__Globals_3, (MR_Integer) 443, (MR_Integer) 0);
        }
#line 596 "switch_util.m"
      }
#line 596 "switch_util.m"
    else
#line 596 "switch_util.m"
      if ((backend_libs__switch_util__SwitchCategory_4 == (MR_Integer) 3))
#line 605 "switch_util.m"
        {
#line 606 "switch_util.m"
          {
#line 606 "switch_util.m"
            return backend_libs__switch_util__succeeded = libs__globals__lookup_bool_option_3_p_1(backend_libs__switch_util__Globals_3, (MR_Integer) 446, (MR_Integer) 0);
          }
#line 605 "switch_util.m"
        }
#line 596 "switch_util.m"
      else
#line 596 "switch_util.m"
        if ((backend_libs__switch_util__SwitchCategory_4 == (MR_Integer) 1))
#line 599 "switch_util.m"
          {
#line 600 "switch_util.m"
            {
#line 600 "switch_util.m"
              return backend_libs__switch_util__succeeded = libs__globals__lookup_bool_option_3_p_1(backend_libs__switch_util__Globals_3, (MR_Integer) 444, (MR_Integer) 0);
            }
#line 599 "switch_util.m"
          }
#line 596 "switch_util.m"
        else
#line 602 "switch_util.m"
          {
#line 603 "switch_util.m"
            {
#line 603 "switch_util.m"
              return backend_libs__switch_util__succeeded = libs__globals__lookup_bool_option_3_p_1(backend_libs__switch_util__Globals_3, (MR_Integer) 445, (MR_Integer) 0);
            }
#line 602 "switch_util.m"
          }
#line 596 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 596 "switch_util.m"
  }
#line 97 "switch_util.m"
}

#line 92 "switch_util.m"
MR_Integer MR_CALL 
backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(
#line 92 "switch_util.m"
  MR_Word backend_libs__switch_util__Tag_3)
#line 92 "switch_util.m"
{
#line 541 "switch_util.m"
  {
#line 541 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 541 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cost_4;

#line 541 "switch_util.m"
    if ((backend_libs__switch_util__Tag_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "switch_util.m"
      backend_libs__switch_util__Cost_4 = (MR_Integer) 2;
#line 541 "switch_util.m"
    else
#line 541 "switch_util.m"
      if (((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 2))))
#line 561 "switch_util.m"
        backend_libs__switch_util__Cost_4 = (MR_Integer) 3;
#line 541 "switch_util.m"
      else
#line 541 "switch_util.m"
        if (((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 1))))
#line 568 "switch_util.m"
          {
#line 568 "switch_util.m"
            MR_String backend_libs__switch_util__String_16 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__Tag_3, (MR_Integer) 0)));
#line 568 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_46_46;
#line 568 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_48_48;

#line 574 "switch_util.m"
            {
#line 574 "switch_util.m"
              backend_libs__switch_util__V_48_48 = mercury__string__length_1_f_0(backend_libs__switch_util__String_16);
            }
#line 574 "switch_util.m"
            backend_libs__switch_util__V_46_46 = ((MR_Integer) 2 * backend_libs__switch_util__V_48_48);
#line 574 "switch_util.m"
            backend_libs__switch_util__Cost_4 = ((MR_Integer) 1 + backend_libs__switch_util__V_46_46);
#line 568 "switch_util.m"
          }
#line 541 "switch_util.m"
        else
#line 541 "switch_util.m"
          if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 566 "switch_util.m"
            backend_libs__switch_util__Cost_4 = (MR_Integer) 4;
#line 541 "switch_util.m"
          else
#line 541 "switch_util.m"
            if (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 576 "switch_util.m"
              {
#line 576 "switch_util.m"
                MR_Word backend_libs__switch_util__RAs_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 1)));
#line 576 "switch_util.m"
                MR_Word backend_libs__switch_util__SubTag_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 2)));
#line 576 "switch_util.m"
                MR_Integer backend_libs__switch_util__V_41_41;
#line 576 "switch_util.m"
                MR_Integer backend_libs__switch_util__V_43_43;
#line 576 "switch_util.m"
                MR_Integer backend_libs__switch_util__V_44_44;

#line 578 "switch_util.m"
                {
#line 578 "switch_util.m"
                  backend_libs__switch_util__V_43_43 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, backend_libs__switch_util__RAs_17);
                }
#line 578 "switch_util.m"
                backend_libs__switch_util__V_41_41 = ((MR_Integer) 2 * backend_libs__switch_util__V_43_43);
#line 578 "switch_util.m"
                {
#line 578 "switch_util.m"
                  backend_libs__switch_util__V_44_44 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(backend_libs__switch_util__SubTag_18);
                }
#line 578 "switch_util.m"
                backend_libs__switch_util__Cost_4 = (backend_libs__switch_util__V_41_41 + backend_libs__switch_util__V_44_44);
#line 576 "switch_util.m"
              }
#line 541 "switch_util.m"
            else
#line 541 "switch_util.m"
              if (((((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 12)))) || (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 11))))))
#line 556 "switch_util.m"
                backend_libs__switch_util__Cost_4 = (MR_Integer) 2;
#line 541 "switch_util.m"
              else
#line 541 "switch_util.m"
                if (((((((((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 1)))) || (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 0)))))) || (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 15)))))) || (((((MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 14))))))
#line 543 "switch_util.m"
                  backend_libs__switch_util__Cost_4 = (MR_Integer) 1;
#line 541 "switch_util.m"
                else
#line 590 "switch_util.m"
                  {
#line 591 "switch_util.m"
                    {
#line 591 "switch_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.estimate_switch_tag_test_cost\'/1", (MR_String) "non-switch tag");
                    }
#line 590 "switch_util.m"
                  }
#line 541 "switch_util.m"
    return backend_libs__switch_util__Cost_4;
#line 541 "switch_util.m"
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
#line 509 "switch_util.m"
  {
#line 509 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 509 "switch_util.m"
    MR_Word backend_libs__switch_util__SwitchCat_4;

#line 509 "switch_util.m"
    if ((backend_libs__switch_util__CtorCat_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 529 "switch_util.m"
      {
#line 532 "switch_util.m"
        {
#line 532 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
        }
#line 529 "switch_util.m"
      }
#line 509 "switch_util.m"
    else
#line 509 "switch_util.m"
      if ((backend_libs__switch_util__CtorCat_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 529 "switch_util.m"
        {
#line 532 "switch_util.m"
          {
#line 532 "switch_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
          }
#line 529 "switch_util.m"
        }
#line 509 "switch_util.m"
      else
#line 509 "switch_util.m"
        if ((backend_libs__switch_util__CtorCat_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 529 "switch_util.m"
          {
#line 532 "switch_util.m"
            {
#line 532 "switch_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
            }
#line 529 "switch_util.m"
          }
#line 509 "switch_util.m"
        else
#line 509 "switch_util.m"
          if ((backend_libs__switch_util__CtorCat_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 529 "switch_util.m"
            {
#line 532 "switch_util.m"
              {
#line 532 "switch_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
              }
#line 529 "switch_util.m"
            }
#line 509 "switch_util.m"
          else
#line 509 "switch_util.m"
            if ((backend_libs__switch_util__CtorCat_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 529 "switch_util.m"
              {
#line 532 "switch_util.m"
                {
#line 532 "switch_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
                }
#line 529 "switch_util.m"
              }
#line 509 "switch_util.m"
            else
#line 509 "switch_util.m"
              if (((MR_tag((MR_Word) backend_libs__switch_util__CtorCat_3)) == (MR_mktag((MR_Integer) 1))))
#line 509 "switch_util.m"
                {
#line 509 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__CtorCat_3, (MR_Integer) 0)));

#line 509 "switch_util.m"
                  if ((backend_libs__switch_util__V_41_41 == (MR_Integer) 2))
#line 510 "switch_util.m"
                    backend_libs__switch_util__SwitchCat_4 = (MR_Integer) 0;
#line 509 "switch_util.m"
                  else
#line 509 "switch_util.m"
                    if ((backend_libs__switch_util__V_41_41 == (MR_Integer) 1))
#line 516 "switch_util.m"
                      backend_libs__switch_util__SwitchCat_4 = (MR_Integer) 3;
#line 509 "switch_util.m"
                    else
#line 509 "switch_util.m"
                      if ((backend_libs__switch_util__V_41_41 == (MR_Integer) 0))
#line 510 "switch_util.m"
                        backend_libs__switch_util__SwitchCat_4 = (MR_Integer) 0;
#line 509 "switch_util.m"
                      else
#line 513 "switch_util.m"
                        backend_libs__switch_util__SwitchCat_4 = (MR_Integer) 1;
#line 509 "switch_util.m"
                }
#line 509 "switch_util.m"
              else
#line 509 "switch_util.m"
                if (((MR_tag((MR_Word) backend_libs__switch_util__CtorCat_3)) == (MR_mktag((MR_Integer) 2))))
#line 510 "switch_util.m"
                  backend_libs__switch_util__SwitchCat_4 = (MR_Integer) 0;
#line 509 "switch_util.m"
                else
#line 509 "switch_util.m"
                  if (((((MR_tag((MR_Word) backend_libs__switch_util__CtorCat_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__CtorCat_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 529 "switch_util.m"
                    {
#line 532 "switch_util.m"
                      {
#line 532 "switch_util.m"
                        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
                      }
#line 529 "switch_util.m"
                    }
#line 509 "switch_util.m"
                  else
#line 509 "switch_util.m"
                    {
#line 509 "switch_util.m"
                      MR_Word backend_libs__switch_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__CtorCat_3, (MR_Integer) 1)));

#line 509 "switch_util.m"
                      if ((backend_libs__switch_util__V_42_42 == (MR_Integer) 0))
#line 529 "switch_util.m"
                        {
#line 532 "switch_util.m"
                          {
#line 532 "switch_util.m"
                            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
                          }
#line 529 "switch_util.m"
                        }
#line 509 "switch_util.m"
                      else
#line 509 "switch_util.m"
                        if ((backend_libs__switch_util__V_42_42 == (MR_Integer) 2))
#line 519 "switch_util.m"
                          backend_libs__switch_util__SwitchCat_4 = (MR_Integer) 2;
#line 509 "switch_util.m"
                        else
#line 529 "switch_util.m"
                          {
#line 532 "switch_util.m"
                            {
#line 532 "switch_util.m"
                              mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
                            }
#line 529 "switch_util.m"
                          }
#line 509 "switch_util.m"
                    }
#line 509 "switch_util.m"
    return backend_libs__switch_util__SwitchCat_4;
#line 509 "switch_util.m"
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
#line 484 "switch_util.m"
  {
#line 484 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 485 "switch_util.m"
    {
#line 485 "switch_util.m"
      backend_libs__switch_util__num_cons_ids_in_tagged_cases_2_5_p_0(backend_libs__switch_util__TaggedCases_4, (MR_Integer) 0, backend_libs__switch_util__NumConsIds_5, (MR_Integer) 0, backend_libs__switch_util__NumArms_6);
#line 485 "switch_util.m"
      return;
    }
#line 484 "switch_util.m"
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
#line 390 "switch_util.m"
  {
#line 390 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 390 "switch_util.m"
    {
#line 390 "switch_util.m"
      backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__HeadVar__3_3, backend_libs__switch_util__HeadVar__4_4, backend_libs__switch_util__MaybeIntSwitchLimits_5);
#line 390 "switch_util.m"
      return;
    }
#line 390 "switch_util.m"
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
