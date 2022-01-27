/*
** Automatically generated from `switch_util.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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




#line 137 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1;

#line 140 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1;

#line 143 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1;

#line 146 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

#line 149 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

#line 152 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 155 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 158 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1;

#line 161 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_2;

#line 164 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2;

#line 167 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2;

#line 170 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_0[1];

#line 173 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0;

#line 176 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2;

#line 179 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2;

#line 182 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2;

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
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

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
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

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
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_maybe_int_switch_info_0_0[3];

#line 251 "backend_libs.switch_util.c"
static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__field_names_maybe_int_switch_info_0_0[3];

#line 254 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0;

#line 257 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1;

#line 260 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0[1];

#line 263 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1[1];

#line 266 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_maybe_int_switch_info_0[2];

#line 269 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0[2];

#line 272 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0[2];

#line 275 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0;

#line 278 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1;

#line 281 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_bit_vec_check_0[2];

#line 284 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_bit_vec_check_0[2];

#line 287 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_bit_vec_check_0[2];

#line 290 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0;

#line 293 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1;

#line 296 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_range_check_0[2];

#line 299 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_range_check_0[2];

#line 302 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_range_check_0[2];

#line 305 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1;

#line 308 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_1_0[2];

#line 311 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0;

#line 314 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_1_0[1];

#line 317 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_1[1];

#line 320 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_1[1];

#line 323 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_1[1];

#line 326 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_entry_1_0[2];

#line 329 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0;

#line 332 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_entry_1_0[1];

#line 335 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_entry_1[1];

#line 338 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_entry_1[1];

#line 341 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_entry_1[1];

#line 344 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0;

#line 347 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_group_entry_1_0[3];

#line 350 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0;

#line 353 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_group_entry_1_0[1];

#line 356 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_group_entry_1[1];

#line 359 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_group_entry_1[1];

#line 362 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_group_entry_1[1];

#line 365 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1;

#line 368 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1;

#line 371 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1;

#line 374 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1__pseudo_backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1;

#line 377 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_rev_map_entry_1_0[4];

#line 380 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0;

#line 383 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_rev_map_entry_1_0[1];

#line 386 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_rev_map_entry_1[1];

#line 389 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_rev_map_entry_1[1];

#line 392 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_rev_map_entry_1[1];

#line 395 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0;

#line 398 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0;

#line 401 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_1;

#line 404 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_0[1];

#line 407 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0;

#line 410 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1;

#line 413 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_1[2];

#line 416 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1;

#line 419 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_0[1];

#line 422 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_1[1];

#line 425 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_soln_consts_1[2];

#line 428 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_soln_consts_1[2];

#line 431 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_soln_consts_1[2];

#line 434 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1;

#line 437 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1;

#line 440 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_string_hash_slot_1_0[3];

#line 443 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0;

#line 446 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0[1];

#line 449 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_string_hash_slot_1[1];

#line 452 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_string_hash_slot_1[1];

#line 455 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_string_hash_slot_1[1];

#line 458 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0;

#line 461 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1;

#line 464 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2;

#line 467 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3;

#line 470 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_switch_category_0[4];

#line 473 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_switch_category_0[4];

#line 476 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_switch_category_0[4];

#line 479 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0;

#line 482 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1;

#line 485 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_table_size_upgrade_0[2];

#line 488 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_table_size_upgrade_0[2];

#line 491 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_table_size_upgrade_0[2];

#line 494 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_3_0_10001(
#line 497 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 499 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 501 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 503 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 505 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5);

#line 508 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_3_0_10001(
#line 511 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 513 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 515 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 517 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 519 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 521 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_6);

#line 524 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_several_llds_0_0_10001(
#line 527 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 529 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 532 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_several_llds_0_0_10001(
#line 535 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 537 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 539 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 542 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_num_ptags_map_0_0_10001(
#line 545 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 547 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 550 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_num_ptags_map_0_0_10001(
#line 553 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 555 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 557 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 560 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0_10001(
#line 563 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 565 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 568 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0_10001(
#line 571 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 573 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 575 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 578 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____maybe_int_switch_info_0_0_10001(
#line 581 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 583 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 586 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____maybe_int_switch_info_0_0_10001(
#line 589 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 591 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 593 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 596 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_bit_vec_check_0_0_10001(
#line 599 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 601 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 604 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_bit_vec_check_0_0_10001(
#line 607 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 609 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 611 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 614 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_range_check_0_0_10001(
#line 617 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 619 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 622 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_range_check_0_0_10001(
#line 625 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 627 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 629 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 632 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_1_0_10001(
#line 635 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 637 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 639 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 642 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_1_0_10001(
#line 645 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 647 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 649 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 651 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 654 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_entry_1_0_10001(
#line 657 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 659 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 661 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 664 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_entry_1_0_10001(
#line 667 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 669 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 671 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 673 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 676 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_entry_1_0_10001(
#line 679 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 681 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 683 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 686 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_entry_1_0_10001(
#line 689 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 691 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 693 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 695 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 698 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_list_1_0_10001(
#line 701 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 703 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 705 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 708 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_list_1_0_10001(
#line 711 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 713 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 715 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 717 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 720 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_list_1_0_10001(
#line 723 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 725 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 727 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 730 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_list_1_0_10001(
#line 733 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 735 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 737 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 739 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 742 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_map_1_0_10001(
#line 745 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 747 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 749 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 752 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_map_1_0_10001(
#line 755 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 757 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 759 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 761 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 764 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0_10001(
#line 767 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 769 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 771 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 774 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0_10001(
#line 777 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 779 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 781 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 783 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 786 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0_10001(
#line 789 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 791 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 793 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 796 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0_10001(
#line 799 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 801 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 803 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 805 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 808 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_count_map_0_0_10001(
#line 811 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 813 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 816 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_count_map_0_0_10001(
#line 819 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 821 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 823 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 826 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____soln_consts_1_0_10001(
#line 829 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 831 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 833 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 836 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____soln_consts_1_0_10001(
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
backend_libs__switch_util____Unify____stag_goal_list_1_0_10001(
#line 851 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 853 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 855 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 858 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_list_1_0_10001(
#line 861 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 863 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 865 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 867 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 870 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_map_1_0_10001(
#line 873 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 875 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 877 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 880 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_map_1_0_10001(
#line 883 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 885 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 887 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 889 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 892 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____string_hash_slot_1_0_10001(
#line 895 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 897 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 899 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 902 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____string_hash_slot_1_0_10001(
#line 905 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 907 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 909 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 911 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 914 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____switch_category_0_0_10001(
#line 917 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 919 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 922 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____switch_category_0_0_10001(
#line 925 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 927 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 929 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 932 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____table_size_upgrade_0_0_10001(
#line 935 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 937 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 940 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____table_size_upgrade_0_0_10001(
#line 943 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 945 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 947 "backend_libs.switch_util.c"
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1760 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1768 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1776 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1784 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1793 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1
  }
};

#line 1801 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1809 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1818 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
  }
};

#line 1827 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1835 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_2
  }
};

#line 1844 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2
  }
};

#line 1852 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2
};

#line 1857 "backend_libs.switch_util.c"
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

#line 1872 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1880 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2
  }
};

#line 1889 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2
  }
};

#line 1897 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_1[2] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 3
};

#line 1903 "backend_libs.switch_util.c"
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

#line 1918 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0
};

#line 1923 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_1
};

#line 1928 "backend_libs.switch_util.c"
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

#line 1942 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_3[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_1
};

#line 1948 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_3[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1954 "backend_libs.switch_util.c"
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

#line 1975 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1983 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &backend_libs__switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1991 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_several_llds_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1997 "backend_libs.switch_util.c"
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

#line 2012 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_several_llds_0_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_several_llds_0_0
};

#line 2017 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_several_llds_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_several_llds_0_0
  }
};

#line 2026 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_several_llds_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_several_llds_0_0
};

#line 2031 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_several_llds_0[1] = {
  (MR_Integer) 0
};

#line 2036 "backend_libs.switch_util.c"
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

#line 2057 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 2066 "backend_libs.switch_util.c"
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

#line 2087 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0 = {
  (MR_String) "is_int_switch",
  (MR_Integer) 0
};

#line 2093 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1 = {
  (MR_String) "is_not_int_switch",
  (MR_Integer) 1
};

#line 2099 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_is_int_switch_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1
};

#line 2105 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_is_int_switch_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1
};

#line 2111 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_is_int_switch_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2117 "backend_libs.switch_util.c"
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

#line 2138 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_maybe_int_switch_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2145 "backend_libs.switch_util.c"
static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__field_names_maybe_int_switch_info_0_0[3] = {
  (MR_String) "lower_limit",
  (MR_String) "upper_limit",
  (MR_String) "num_values"
};

#line 2152 "backend_libs.switch_util.c"
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

#line 2167 "backend_libs.switch_util.c"
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

#line 2182 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1
};

#line 2187 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0
};

#line 2192 "backend_libs.switch_util.c"
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

#line 2206 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1
};

#line 2212 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2218 "backend_libs.switch_util.c"
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

#line 2239 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0 = {
  (MR_String) "need_bit_vec_check",
  (MR_Integer) 0
};

#line 2245 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1 = {
  (MR_String) "dont_need_bit_vec_check",
  (MR_Integer) 1
};

#line 2251 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_bit_vec_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1
};

#line 2257 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_bit_vec_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0
};

#line 2263 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_bit_vec_check_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2269 "backend_libs.switch_util.c"
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

#line 2290 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0 = {
  (MR_String) "need_range_check",
  (MR_Integer) 0
};

#line 2296 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1 = {
  (MR_String) "dont_need_range_check",
  (MR_Integer) 1
};

#line 2302 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_range_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1
};

#line 2308 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_range_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0
};

#line 2314 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_range_check_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2320 "backend_libs.switch_util.c"
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

#line 2341 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2350 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_1_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1
};

#line 2356 "backend_libs.switch_util.c"
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

#line 2371 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0
};

#line 2376 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_1_0
  }
};

#line 2385 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0
};

#line 2390 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_1[1] = {
  (MR_Integer) 0
};

#line 2395 "backend_libs.switch_util.c"
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

#line 2416 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_entry_1_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
};

#line 2422 "backend_libs.switch_util.c"
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

#line 2437 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_entry_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0
};

#line 2442 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_entry_1_0
  }
};

#line 2451 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_entry_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0
};

#line 2456 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_entry_1[1] = {
  (MR_Integer) 0
};

#line 2461 "backend_libs.switch_util.c"
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

#line 2482 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2490 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_group_entry_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
};

#line 2497 "backend_libs.switch_util.c"
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

#line 2512 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_group_entry_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0
};

#line 2517 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_group_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_group_entry_1_0
  }
};

#line 2526 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_group_entry_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0
};

#line 2531 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_group_entry_1[1] = {
  (MR_Integer) 0
};

#line 2536 "backend_libs.switch_util.c"
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

#line 2557 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1
  }
};

#line 2565 "backend_libs.switch_util.c"
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

#line 2586 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2594 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1
  }
};

#line 2602 "backend_libs.switch_util.c"
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

#line 2623 "backend_libs.switch_util.c"
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

#line 2644 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1__pseudo_backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1
  }
};

#line 2653 "backend_libs.switch_util.c"
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

#line 2674 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_rev_map_entry_1_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
};

#line 2682 "backend_libs.switch_util.c"
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

#line 2697 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_rev_map_entry_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0
};

#line 2702 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_rev_map_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_rev_map_entry_1_0
  }
};

#line 2711 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_rev_map_entry_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0
};

#line 2716 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_rev_map_entry_1[1] = {
  (MR_Integer) 0
};

#line 2721 "backend_libs.switch_util.c"
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

#line 2742 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2751 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__switch_util__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0
  }
};

#line 2760 "backend_libs.switch_util.c"
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

#line 2781 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2789 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_1
};

#line 2794 "backend_libs.switch_util.c"
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

#line 2809 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_1
  }
};

#line 2817 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_1[2] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1
};

#line 2823 "backend_libs.switch_util.c"
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

#line 2838 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0
};

#line 2843 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1
};

#line 2848 "backend_libs.switch_util.c"
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

#line 2862 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_soln_consts_1[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1
};

#line 2868 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_soln_consts_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2874 "backend_libs.switch_util.c"
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

#line 2895 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2904 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1
  }
};

#line 2912 "backend_libs.switch_util.c"
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

#line 2933 "backend_libs.switch_util.c"
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

#line 2954 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_string_hash_slot_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2961 "backend_libs.switch_util.c"
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

#line 2976 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0
};

#line 2981 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_string_hash_slot_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0
  }
};

#line 2990 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_string_hash_slot_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0
};

#line 2995 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_string_hash_slot_1[1] = {
  (MR_Integer) 0
};

#line 3000 "backend_libs.switch_util.c"
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

#line 3021 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0 = {
  (MR_String) "atomic_switch",
  (MR_Integer) 0
};

#line 3027 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1 = {
  (MR_String) "string_switch",
  (MR_Integer) 1
};

#line 3033 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2 = {
  (MR_String) "tag_switch",
  (MR_Integer) 2
};

#line 3039 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3 = {
  (MR_String) "float_switch",
  (MR_Integer) 3
};

#line 3045 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_switch_category_0[4] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3
};

#line 3053 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_switch_category_0[4] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2
};

#line 3061 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_switch_category_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 3069 "backend_libs.switch_util.c"
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

#line 3090 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0 = {
  (MR_String) "keep_first_size",
  (MR_Integer) 0
};

#line 3096 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1 = {
  (MR_String) "allow_doubling",
  (MR_Integer) 1
};

#line 3102 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_table_size_upgrade_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1
};

#line 3108 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_table_size_upgrade_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0
};

#line 3114 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_table_size_upgrade_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3120 "backend_libs.switch_util.c"
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

#line 3141 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_3_0_10001(
#line 3144 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3146 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3148 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3150 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 3152 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5)
#line 3154 "backend_libs.switch_util.c"
{
#line 3156 "backend_libs.switch_util.c"
  {
#line 3158 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3161 "backend_libs.switch_util.c"
    {
#line 3163 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____case_consts_3_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4), ((MR_Word) backend_libs__switch_util__wrapper_arg_5));
    }
#line 3166 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3168 "backend_libs.switch_util.c"
  }
#line 3170 "backend_libs.switch_util.c"
}

#line 3173 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_3_0_10001(
#line 3176 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3178 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3180 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3182 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 3184 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 3186 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_6)
#line 3188 "backend_libs.switch_util.c"
{
#line 3190 "backend_libs.switch_util.c"
  {
#line 3192 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3195 "backend_libs.switch_util.c"
    {
#line 3197 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____case_consts_3_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_5), ((MR_Word) backend_libs__switch_util__wrapper_arg_6));
    }
#line 3200 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_4 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3202 "backend_libs.switch_util.c"
  }
#line 3204 "backend_libs.switch_util.c"
}

#line 3207 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_several_llds_0_0_10001(
#line 3210 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3212 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3214 "backend_libs.switch_util.c"
{
#line 3216 "backend_libs.switch_util.c"
  {
#line 3218 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3221 "backend_libs.switch_util.c"
    {
#line 3223 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____case_consts_several_llds_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3226 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3228 "backend_libs.switch_util.c"
  }
#line 3230 "backend_libs.switch_util.c"
}

#line 3233 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_several_llds_0_0_10001(
#line 3236 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3238 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3240 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3242 "backend_libs.switch_util.c"
{
#line 3244 "backend_libs.switch_util.c"
  {
#line 3246 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3249 "backend_libs.switch_util.c"
    {
#line 3251 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____case_consts_several_llds_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3254 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3256 "backend_libs.switch_util.c"
  }
#line 3258 "backend_libs.switch_util.c"
}

#line 3261 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_num_ptags_map_0_0_10001(
#line 3264 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3266 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3268 "backend_libs.switch_util.c"
{
#line 3270 "backend_libs.switch_util.c"
  {
#line 3272 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3275 "backend_libs.switch_util.c"
    {
#line 3277 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____case_num_ptags_map_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3280 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3282 "backend_libs.switch_util.c"
  }
#line 3284 "backend_libs.switch_util.c"
}

#line 3287 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_num_ptags_map_0_0_10001(
#line 3290 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3292 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3294 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3296 "backend_libs.switch_util.c"
{
#line 3298 "backend_libs.switch_util.c"
  {
#line 3300 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3303 "backend_libs.switch_util.c"
    {
#line 3305 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____case_num_ptags_map_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3308 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3310 "backend_libs.switch_util.c"
  }
#line 3312 "backend_libs.switch_util.c"
}

#line 3315 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0_10001(
#line 3318 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3320 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3322 "backend_libs.switch_util.c"
{
#line 3324 "backend_libs.switch_util.c"
  {
#line 3326 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3329 "backend_libs.switch_util.c"
    {
#line 3331 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____is_int_switch_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3334 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3336 "backend_libs.switch_util.c"
  }
#line 3338 "backend_libs.switch_util.c"
}

#line 3341 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0_10001(
#line 3344 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3346 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3348 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3350 "backend_libs.switch_util.c"
{
#line 3352 "backend_libs.switch_util.c"
  {
#line 3354 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3357 "backend_libs.switch_util.c"
    {
#line 3359 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____is_int_switch_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3362 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3364 "backend_libs.switch_util.c"
  }
#line 3366 "backend_libs.switch_util.c"
}

#line 3369 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____maybe_int_switch_info_0_0_10001(
#line 3372 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3374 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3376 "backend_libs.switch_util.c"
{
#line 3378 "backend_libs.switch_util.c"
  {
#line 3380 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3383 "backend_libs.switch_util.c"
    {
#line 3385 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____maybe_int_switch_info_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3388 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3390 "backend_libs.switch_util.c"
  }
#line 3392 "backend_libs.switch_util.c"
}

#line 3395 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____maybe_int_switch_info_0_0_10001(
#line 3398 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3400 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3402 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3404 "backend_libs.switch_util.c"
{
#line 3406 "backend_libs.switch_util.c"
  {
#line 3408 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3411 "backend_libs.switch_util.c"
    {
#line 3413 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____maybe_int_switch_info_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3416 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3418 "backend_libs.switch_util.c"
  }
#line 3420 "backend_libs.switch_util.c"
}

#line 3423 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_bit_vec_check_0_0_10001(
#line 3426 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3428 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3430 "backend_libs.switch_util.c"
{
#line 3432 "backend_libs.switch_util.c"
  {
#line 3434 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3437 "backend_libs.switch_util.c"
    {
#line 3439 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____need_bit_vec_check_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3442 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3444 "backend_libs.switch_util.c"
  }
#line 3446 "backend_libs.switch_util.c"
}

#line 3449 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_bit_vec_check_0_0_10001(
#line 3452 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3454 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3456 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3458 "backend_libs.switch_util.c"
{
#line 3460 "backend_libs.switch_util.c"
  {
#line 3462 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3465 "backend_libs.switch_util.c"
    {
#line 3467 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____need_bit_vec_check_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3470 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3472 "backend_libs.switch_util.c"
  }
#line 3474 "backend_libs.switch_util.c"
}

#line 3477 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_range_check_0_0_10001(
#line 3480 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3482 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3484 "backend_libs.switch_util.c"
{
#line 3486 "backend_libs.switch_util.c"
  {
#line 3488 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3491 "backend_libs.switch_util.c"
    {
#line 3493 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____need_range_check_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3496 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3498 "backend_libs.switch_util.c"
  }
#line 3500 "backend_libs.switch_util.c"
}

#line 3503 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_range_check_0_0_10001(
#line 3506 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3508 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3510 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3512 "backend_libs.switch_util.c"
{
#line 3514 "backend_libs.switch_util.c"
  {
#line 3516 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3519 "backend_libs.switch_util.c"
    {
#line 3521 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____need_range_check_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3524 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3526 "backend_libs.switch_util.c"
  }
#line 3528 "backend_libs.switch_util.c"
}

#line 3531 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_1_0_10001(
#line 3534 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3536 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3538 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3540 "backend_libs.switch_util.c"
{
#line 3542 "backend_libs.switch_util.c"
  {
#line 3544 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3547 "backend_libs.switch_util.c"
    {
#line 3549 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3552 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3554 "backend_libs.switch_util.c"
  }
#line 3556 "backend_libs.switch_util.c"
}

#line 3559 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_1_0_10001(
#line 3562 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3564 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3566 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3568 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3570 "backend_libs.switch_util.c"
{
#line 3572 "backend_libs.switch_util.c"
  {
#line 3574 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3577 "backend_libs.switch_util.c"
    {
#line 3579 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3582 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3584 "backend_libs.switch_util.c"
  }
#line 3586 "backend_libs.switch_util.c"
}

#line 3589 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_entry_1_0_10001(
#line 3592 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3594 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3596 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3598 "backend_libs.switch_util.c"
{
#line 3600 "backend_libs.switch_util.c"
  {
#line 3602 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3605 "backend_libs.switch_util.c"
    {
#line 3607 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3610 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3612 "backend_libs.switch_util.c"
  }
#line 3614 "backend_libs.switch_util.c"
}

#line 3617 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_entry_1_0_10001(
#line 3620 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3622 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3624 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3626 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3628 "backend_libs.switch_util.c"
{
#line 3630 "backend_libs.switch_util.c"
  {
#line 3632 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3635 "backend_libs.switch_util.c"
    {
#line 3637 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3640 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3642 "backend_libs.switch_util.c"
  }
#line 3644 "backend_libs.switch_util.c"
}

#line 3647 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_entry_1_0_10001(
#line 3650 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3652 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3654 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3656 "backend_libs.switch_util.c"
{
#line 3658 "backend_libs.switch_util.c"
  {
#line 3660 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3663 "backend_libs.switch_util.c"
    {
#line 3665 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_group_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3668 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3670 "backend_libs.switch_util.c"
  }
#line 3672 "backend_libs.switch_util.c"
}

#line 3675 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_entry_1_0_10001(
#line 3678 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3680 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3682 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3684 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3686 "backend_libs.switch_util.c"
{
#line 3688 "backend_libs.switch_util.c"
  {
#line 3690 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3693 "backend_libs.switch_util.c"
    {
#line 3695 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_group_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3698 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3700 "backend_libs.switch_util.c"
  }
#line 3702 "backend_libs.switch_util.c"
}

#line 3705 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_list_1_0_10001(
#line 3708 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3710 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3712 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3714 "backend_libs.switch_util.c"
{
#line 3716 "backend_libs.switch_util.c"
  {
#line 3718 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3721 "backend_libs.switch_util.c"
    {
#line 3723 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_group_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3726 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3728 "backend_libs.switch_util.c"
  }
#line 3730 "backend_libs.switch_util.c"
}

#line 3733 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_list_1_0_10001(
#line 3736 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3738 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3740 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3742 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3744 "backend_libs.switch_util.c"
{
#line 3746 "backend_libs.switch_util.c"
  {
#line 3748 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3751 "backend_libs.switch_util.c"
    {
#line 3753 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_group_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3756 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3758 "backend_libs.switch_util.c"
  }
#line 3760 "backend_libs.switch_util.c"
}

#line 3763 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_list_1_0_10001(
#line 3766 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3768 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3770 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3772 "backend_libs.switch_util.c"
{
#line 3774 "backend_libs.switch_util.c"
  {
#line 3776 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3779 "backend_libs.switch_util.c"
    {
#line 3781 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3784 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3786 "backend_libs.switch_util.c"
  }
#line 3788 "backend_libs.switch_util.c"
}

#line 3791 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_list_1_0_10001(
#line 3794 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3796 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3798 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3800 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3802 "backend_libs.switch_util.c"
{
#line 3804 "backend_libs.switch_util.c"
  {
#line 3806 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3809 "backend_libs.switch_util.c"
    {
#line 3811 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3814 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3816 "backend_libs.switch_util.c"
  }
#line 3818 "backend_libs.switch_util.c"
}

#line 3821 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_map_1_0_10001(
#line 3824 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3826 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3828 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3830 "backend_libs.switch_util.c"
{
#line 3832 "backend_libs.switch_util.c"
  {
#line 3834 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3837 "backend_libs.switch_util.c"
    {
#line 3839 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3842 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3844 "backend_libs.switch_util.c"
  }
#line 3846 "backend_libs.switch_util.c"
}

#line 3849 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_map_1_0_10001(
#line 3852 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3854 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3856 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3858 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3860 "backend_libs.switch_util.c"
{
#line 3862 "backend_libs.switch_util.c"
  {
#line 3864 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3867 "backend_libs.switch_util.c"
    {
#line 3869 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3872 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3874 "backend_libs.switch_util.c"
  }
#line 3876 "backend_libs.switch_util.c"
}

#line 3879 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0_10001(
#line 3882 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3884 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3886 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3888 "backend_libs.switch_util.c"
{
#line 3890 "backend_libs.switch_util.c"
  {
#line 3892 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3895 "backend_libs.switch_util.c"
    {
#line 3897 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_rev_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3900 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3902 "backend_libs.switch_util.c"
  }
#line 3904 "backend_libs.switch_util.c"
}

#line 3907 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0_10001(
#line 3910 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3912 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3914 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3916 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3918 "backend_libs.switch_util.c"
{
#line 3920 "backend_libs.switch_util.c"
  {
#line 3922 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3925 "backend_libs.switch_util.c"
    {
#line 3927 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_rev_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3930 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3932 "backend_libs.switch_util.c"
  }
#line 3934 "backend_libs.switch_util.c"
}

#line 3937 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0_10001(
#line 3940 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3942 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3944 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3946 "backend_libs.switch_util.c"
{
#line 3948 "backend_libs.switch_util.c"
  {
#line 3950 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3953 "backend_libs.switch_util.c"
    {
#line 3955 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3958 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3960 "backend_libs.switch_util.c"
  }
#line 3962 "backend_libs.switch_util.c"
}

#line 3965 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0_10001(
#line 3968 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3970 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3972 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3974 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3976 "backend_libs.switch_util.c"
{
#line 3978 "backend_libs.switch_util.c"
  {
#line 3980 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3983 "backend_libs.switch_util.c"
    {
#line 3985 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3988 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3990 "backend_libs.switch_util.c"
  }
#line 3992 "backend_libs.switch_util.c"
}

#line 3995 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_count_map_0_0_10001(
#line 3998 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4000 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 4002 "backend_libs.switch_util.c"
{
#line 4004 "backend_libs.switch_util.c"
  {
#line 4006 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4009 "backend_libs.switch_util.c"
    {
#line 4011 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_count_map_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 4014 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4016 "backend_libs.switch_util.c"
  }
#line 4018 "backend_libs.switch_util.c"
}

#line 4021 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_count_map_0_0_10001(
#line 4024 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 4026 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4028 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4030 "backend_libs.switch_util.c"
{
#line 4032 "backend_libs.switch_util.c"
  {
#line 4034 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4037 "backend_libs.switch_util.c"
    {
#line 4039 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_count_map_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4042 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4044 "backend_libs.switch_util.c"
  }
#line 4046 "backend_libs.switch_util.c"
}

#line 4049 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____soln_consts_1_0_10001(
#line 4052 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4054 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4056 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4058 "backend_libs.switch_util.c"
{
#line 4060 "backend_libs.switch_util.c"
  {
#line 4062 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4065 "backend_libs.switch_util.c"
    {
#line 4067 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____soln_consts_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4070 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4072 "backend_libs.switch_util.c"
  }
#line 4074 "backend_libs.switch_util.c"
}

#line 4077 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____soln_consts_1_0_10001(
#line 4080 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4082 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4084 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4086 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4088 "backend_libs.switch_util.c"
{
#line 4090 "backend_libs.switch_util.c"
  {
#line 4092 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4095 "backend_libs.switch_util.c"
    {
#line 4097 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____soln_consts_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4100 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4102 "backend_libs.switch_util.c"
  }
#line 4104 "backend_libs.switch_util.c"
}

#line 4107 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_list_1_0_10001(
#line 4110 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4112 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4114 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4116 "backend_libs.switch_util.c"
{
#line 4118 "backend_libs.switch_util.c"
  {
#line 4120 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4123 "backend_libs.switch_util.c"
    {
#line 4125 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____stag_goal_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4128 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4130 "backend_libs.switch_util.c"
  }
#line 4132 "backend_libs.switch_util.c"
}

#line 4135 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_list_1_0_10001(
#line 4138 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4140 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4142 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4144 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4146 "backend_libs.switch_util.c"
{
#line 4148 "backend_libs.switch_util.c"
  {
#line 4150 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4153 "backend_libs.switch_util.c"
    {
#line 4155 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____stag_goal_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4158 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4160 "backend_libs.switch_util.c"
  }
#line 4162 "backend_libs.switch_util.c"
}

#line 4165 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_map_1_0_10001(
#line 4168 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4170 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4172 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4174 "backend_libs.switch_util.c"
{
#line 4176 "backend_libs.switch_util.c"
  {
#line 4178 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4181 "backend_libs.switch_util.c"
    {
#line 4183 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____stag_goal_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4186 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4188 "backend_libs.switch_util.c"
  }
#line 4190 "backend_libs.switch_util.c"
}

#line 4193 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_map_1_0_10001(
#line 4196 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4198 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4200 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4202 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4204 "backend_libs.switch_util.c"
{
#line 4206 "backend_libs.switch_util.c"
  {
#line 4208 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4211 "backend_libs.switch_util.c"
    {
#line 4213 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____stag_goal_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4216 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4218 "backend_libs.switch_util.c"
  }
#line 4220 "backend_libs.switch_util.c"
}

#line 4223 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____string_hash_slot_1_0_10001(
#line 4226 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4228 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4230 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4232 "backend_libs.switch_util.c"
{
#line 4234 "backend_libs.switch_util.c"
  {
#line 4236 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4239 "backend_libs.switch_util.c"
    {
#line 4241 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____string_hash_slot_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4244 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4246 "backend_libs.switch_util.c"
  }
#line 4248 "backend_libs.switch_util.c"
}

#line 4251 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____string_hash_slot_1_0_10001(
#line 4254 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4256 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4258 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4260 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4262 "backend_libs.switch_util.c"
{
#line 4264 "backend_libs.switch_util.c"
  {
#line 4266 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4269 "backend_libs.switch_util.c"
    {
#line 4271 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____string_hash_slot_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4274 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4276 "backend_libs.switch_util.c"
  }
#line 4278 "backend_libs.switch_util.c"
}

#line 4281 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____switch_category_0_0_10001(
#line 4284 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4286 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 4288 "backend_libs.switch_util.c"
{
#line 4290 "backend_libs.switch_util.c"
  {
#line 4292 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4295 "backend_libs.switch_util.c"
    {
#line 4297 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____switch_category_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 4300 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4302 "backend_libs.switch_util.c"
  }
#line 4304 "backend_libs.switch_util.c"
}

#line 4307 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____switch_category_0_0_10001(
#line 4310 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 4312 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4314 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4316 "backend_libs.switch_util.c"
{
#line 4318 "backend_libs.switch_util.c"
  {
#line 4320 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4323 "backend_libs.switch_util.c"
    {
#line 4325 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____switch_category_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4328 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4330 "backend_libs.switch_util.c"
  }
#line 4332 "backend_libs.switch_util.c"
}

#line 4335 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____table_size_upgrade_0_0_10001(
#line 4338 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4340 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 4342 "backend_libs.switch_util.c"
{
#line 4344 "backend_libs.switch_util.c"
  {
#line 4346 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4349 "backend_libs.switch_util.c"
    {
#line 4351 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____table_size_upgrade_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 4354 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4356 "backend_libs.switch_util.c"
  }
#line 4358 "backend_libs.switch_util.c"
}

#line 4361 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____table_size_upgrade_0_0_10001(
#line 4364 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 4366 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4368 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4370 "backend_libs.switch_util.c"
{
#line 4372 "backend_libs.switch_util.c"
  {
#line 4374 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4377 "backend_libs.switch_util.c"
    {
#line 4379 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____table_size_upgrade_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4382 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4384 "backend_libs.switch_util.c"
  }
#line 4386 "backend_libs.switch_util.c"
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
#line 1214 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_12 = backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11;
#line 1214 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_10 = backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9;
#line 1214 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_StateC_8 = backend_libs__switch_util__STATE_VARIABLE_StateC_0_7;
#line 1214 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_StateB_6 = backend_libs__switch_util__STATE_VARIABLE_StateB_0_5;
#line 1214 "switch_util.m"
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
#line 4560 "backend_libs.switch_util.c"
            {
#line 4562 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4564 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_78_78, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 4566 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_78_78, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_65));
#line 4568 "backend_libs.switch_util.c"
            }
#line 4570 "backend_libs.switch_util.c"
            {
#line 4572 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4574 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_80_80, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 4576 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_80_80, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 4578 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_80_80, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_78_78));
#line 4580 "backend_libs.switch_util.c"
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
#line 4793 "backend_libs.switch_util.c"
        {
#line 4795 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4797 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_64_64, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 4799 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_64_64, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 4801 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_64_64, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_54));
#line 4803 "backend_libs.switch_util.c"
        }
#line 4805 "backend_libs.switch_util.c"
        {
#line 4807 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4809 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_66_66, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4811 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_66_66, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_64_64));
#line 4813 "backend_libs.switch_util.c"
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
#line 442 "switch_util.m"
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
#line 5132 "backend_libs.switch_util.c"
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
#line 446 "switch_util.m"
        {
#line 446 "switch_util.m"
          MR_Word base;
#line 446 "switch_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "switch_util.m"
          *backend_libs__switch_util__HeadVar__5_5 = base;
#line 446 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__TaggedCase_34));
#line 446 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__TaggedCases_35));
#line 446 "switch_util.m"
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
#line 5566 "backend_libs.switch_util.c"
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
#line 5809 "backend_libs.switch_util.c"
  {
#line 5811 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 5814 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 5816 "backend_libs.switch_util.c"
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
#line 5862 "backend_libs.switch_util.c"
  {
#line 5864 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 5867 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 5869 "backend_libs.switch_util.c"
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
#line 5900 "backend_libs.switch_util.c"
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
#line 5926 "backend_libs.switch_util.c"
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
#line 5946 "backend_libs.switch_util.c"
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

#line 6015 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (strcmp(backend_libs__switch_util__V_3_3, backend_libs__switch_util__V_6_6) == 0);
#line 195 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 195 "switch_util.m"
          {
#line 6021 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_7_7);
#line 195 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 6025 "backend_libs.switch_util.c"
              {
#line 6027 "backend_libs.switch_util.c"
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

#line 6131 "backend_libs.switch_util.c"
    {
#line 6133 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6135 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6137 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 6139 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6141 "backend_libs.switch_util.c"
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

#line 6177 "backend_libs.switch_util.c"
    {
#line 6179 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6181 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6183 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 6185 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6187 "backend_libs.switch_util.c"
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
#line 6227 "backend_libs.switch_util.c"
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
#line 6256 "backend_libs.switch_util.c"
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
#line 6271 "backend_libs.switch_util.c"
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
#line 6289 "backend_libs.switch_util.c"
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

#line 6304 "backend_libs.switch_util.c"
                  {
#line 6306 "backend_libs.switch_util.c"
                    backend_libs__switch_util__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6308 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6310 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_19));
#line 6312 "backend_libs.switch_util.c"
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
#line 6377 "backend_libs.switch_util.c"
              {
#line 6379 "backend_libs.switch_util.c"
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
#line 6413 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_14_14 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 6415 "backend_libs.switch_util.c"
              {
#line 6417 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6419 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_14_14));
#line 6421 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_11));
#line 6423 "backend_libs.switch_util.c"
              }
#line 6425 "backend_libs.switch_util.c"
              {
#line 6427 "backend_libs.switch_util.c"
                backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_for_Rval_11, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_7_7);
              }
#line 144 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 6432 "backend_libs.switch_util.c"
                {
#line 6434 "backend_libs.switch_util.c"
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
#line 6536 "backend_libs.switch_util.c"
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
#line 6566 "backend_libs.switch_util.c"
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
#line 6586 "backend_libs.switch_util.c"
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
#line 6606 "backend_libs.switch_util.c"
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

#line 6683 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_7_7);
#line 1329 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1329 "switch_util.m"
          {
#line 6689 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_8_8);
#line 1329 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1329 "switch_util.m"
              {
#line 6695 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_14_14 = (MR_Word) &backend_libs__switch_util_scalar_common_1[2];
#line 6697 "backend_libs.switch_util.c"
                {
#line 6699 "backend_libs.switch_util.c"
                  backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0(backend_libs__switch_util__TypeInfo_14_14, ((MR_Box) (backend_libs__switch_util__V_5_5)), ((MR_Box) (backend_libs__switch_util__V_9_9)));
                }
#line 1329 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 6704 "backend_libs.switch_util.c"
                  {
#line 6706 "backend_libs.switch_util.c"
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

#line 6748 "backend_libs.switch_util.c"
    {
#line 6750 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6752 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6754 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6756 "backend_libs.switch_util.c"
    }
#line 6758 "backend_libs.switch_util.c"
    {
#line 6760 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6762 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 6764 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6766 "backend_libs.switch_util.c"
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

#line 6804 "backend_libs.switch_util.c"
    {
#line 6806 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6808 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6810 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6812 "backend_libs.switch_util.c"
    }
#line 6814 "backend_libs.switch_util.c"
    {
#line 6816 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6818 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 6820 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6822 "backend_libs.switch_util.c"
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

#line 6860 "backend_libs.switch_util.c"
    {
#line 6862 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6864 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6866 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6868 "backend_libs.switch_util.c"
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

#line 6904 "backend_libs.switch_util.c"
    {
#line 6906 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6908 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6910 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6912 "backend_libs.switch_util.c"
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

#line 6950 "backend_libs.switch_util.c"
    {
#line 6952 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6954 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1));
#line 6956 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6958 "backend_libs.switch_util.c"
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

#line 6994 "backend_libs.switch_util.c"
    {
#line 6996 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6998 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1));
#line 7000 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 7002 "backend_libs.switch_util.c"
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

#line 7040 "backend_libs.switch_util.c"
    {
#line 7042 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7044 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1));
#line 7046 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 7048 "backend_libs.switch_util.c"
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

#line 7084 "backend_libs.switch_util.c"
    {
#line 7086 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7088 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1));
#line 7090 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 7092 "backend_libs.switch_util.c"
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
#line 7132 "backend_libs.switch_util.c"
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
#line 7158 "backend_libs.switch_util.c"
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
#line 7178 "backend_libs.switch_util.c"
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

#line 7249 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_6_6);
#line 270 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 270 "switch_util.m"
          {
#line 7255 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeInfo_12_12 = (MR_Word) &backend_libs__switch_util_scalar_common_1[2];
#line 7257 "backend_libs.switch_util.c"
            {
#line 7259 "backend_libs.switch_util.c"
              backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0(backend_libs__switch_util__TypeInfo_12_12, ((MR_Box) (backend_libs__switch_util__V_4_4)), ((MR_Box) (backend_libs__switch_util__V_7_7)));
            }
#line 270 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 7264 "backend_libs.switch_util.c"
              {
#line 7266 "backend_libs.switch_util.c"
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
#line 7306 "backend_libs.switch_util.c"
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
#line 7328 "backend_libs.switch_util.c"
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

#line 7391 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_5_5);
#line 256 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 7395 "backend_libs.switch_util.c"
          {
#line 7397 "backend_libs.switch_util.c"
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
#line 7435 "backend_libs.switch_util.c"
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
#line 7461 "backend_libs.switch_util.c"
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

#line 7530 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_5_5);
#line 285 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 285 "switch_util.m"
          {
#line 7536 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 7538 "backend_libs.switch_util.c"
            {
#line 7540 "backend_libs.switch_util.c"
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
#line 7595 "backend_libs.switch_util.c"
  {
#line 7597 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7600 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7602 "backend_libs.switch_util.c"
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
#line 7648 "backend_libs.switch_util.c"
  {
#line 7650 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7653 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7655 "backend_libs.switch_util.c"
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
#line 7684 "backend_libs.switch_util.c"
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
#line 7696 "backend_libs.switch_util.c"
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
#line 7711 "backend_libs.switch_util.c"
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
#line 7731 "backend_libs.switch_util.c"
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
#line 7751 "backend_libs.switch_util.c"
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
#line 7847 "backend_libs.switch_util.c"
              backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_6_6);
#line 47 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 47 "switch_util.m"
                {
#line 7853 "backend_libs.switch_util.c"
                  backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_7_7);
#line 47 "switch_util.m"
                  if (backend_libs__switch_util__succeeded)
#line 7857 "backend_libs.switch_util.c"
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
#line 7913 "backend_libs.switch_util.c"
  {
#line 7915 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7918 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7920 "backend_libs.switch_util.c"
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
#line 8011 "backend_libs.switch_util.c"
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
#line 8033 "backend_libs.switch_util.c"
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

#line 8103 "backend_libs.switch_util.c"
        {
#line 8105 "backend_libs.switch_util.c"
          backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[1], ((MR_Box) (backend_libs__switch_util__V_3_3)), ((MR_Box) (backend_libs__switch_util__V_5_5)));
        }
#line 133 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 8110 "backend_libs.switch_util.c"
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
#line 8151 "backend_libs.switch_util.c"
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

#line 8173 "backend_libs.switch_util.c"
              {
#line 8175 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8177 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_29_29, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 8179 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_29_29, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_20));
#line 8181 "backend_libs.switch_util.c"
              }
#line 8183 "backend_libs.switch_util.c"
              {
#line 8185 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8187 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_31_31, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 8189 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_31_31, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Key_19));
#line 8191 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_31_31, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_29_29));
#line 8193 "backend_libs.switch_util.c"
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
#line 8206 "backend_libs.switch_util.c"
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
#line 8221 "backend_libs.switch_util.c"
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

#line 8238 "backend_libs.switch_util.c"
              {
#line 8240 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8242 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1));
#line 8244 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_20));
#line 8246 "backend_libs.switch_util.c"
              }
#line 8248 "backend_libs.switch_util.c"
              {
#line 8250 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8252 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_25_25, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 8254 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_25_25, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Key_19));
#line 8256 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_25_25, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_23_23));
#line 8258 "backend_libs.switch_util.c"
              }
#line 124 "switch_util.m"
              {
#line 124 "switch_util.m"
                mercury__list____Compare____list_1_0(backend_libs__switch_util__TypeInfo_25_25, &backend_libs__switch_util__V_16_16, (MR_Word) backend_libs__switch_util__V_35_35, (MR_Word) backend_libs__switch_util__V_14_14);
              }
#line 8265 "backend_libs.switch_util.c"
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
#line 8348 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_16_16 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 8350 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_14_14 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 8352 "backend_libs.switch_util.c"
              {
#line 8354 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8356 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_14_14));
#line 8358 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_12));
#line 8360 "backend_libs.switch_util.c"
              }
#line 8362 "backend_libs.switch_util.c"
              {
#line 8364 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8366 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_16_16));
#line 8368 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Key_11));
#line 8370 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_15_15));
#line 8372 "backend_libs.switch_util.c"
              }
#line 8374 "backend_libs.switch_util.c"
              {
#line 8376 "backend_libs.switch_util.c"
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
#line 8414 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 8416 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_19_19 = (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1;
#line 8418 "backend_libs.switch_util.c"
              {
#line 8420 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8422 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_19_19));
#line 8424 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_12));
#line 8426 "backend_libs.switch_util.c"
              }
#line 8428 "backend_libs.switch_util.c"
              {
#line 8430 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 8432 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_21_21));
#line 8434 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Key_11));
#line 8436 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_20_20));
#line 8438 "backend_libs.switch_util.c"
              }
#line 8440 "backend_libs.switch_util.c"
              {
#line 8442 "backend_libs.switch_util.c"
                backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_22_22, (MR_Word) backend_libs__switch_util__V_5_5, (MR_Word) backend_libs__switch_util__V_7_7);
              }
#line 124 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 8447 "backend_libs.switch_util.c"
                {
#line 8449 "backend_libs.switch_util.c"
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
#line 8580 "backend_libs.switch_util.c"
                {
#line 8582 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8584 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_60_60, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8586 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_60_60, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8588 "backend_libs.switch_util.c"
                }
#line 8590 "backend_libs.switch_util.c"
                {
#line 8592 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8594 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_62_62, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 8596 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_62_62, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8598 "backend_libs.switch_util.c"
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

#line 8622 "backend_libs.switch_util.c"
                {
#line 8624 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8626 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_46_46, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8628 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_46_46, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8630 "backend_libs.switch_util.c"
                }
#line 8632 "backend_libs.switch_util.c"
                {
#line 8634 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8636 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_48_48, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 8638 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_48_48, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8640 "backend_libs.switch_util.c"
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
#line 1363 "switch_util.m"
                    {
#line 1363 "switch_util.m"
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
#line 8772 "backend_libs.switch_util.c"
                    {
#line 8774 "backend_libs.switch_util.c"
                      backend_libs__switch_util__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8776 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_56_56, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8778 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_56_56, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8780 "backend_libs.switch_util.c"
                    }
#line 8782 "backend_libs.switch_util.c"
                    {
#line 8784 "backend_libs.switch_util.c"
                      backend_libs__switch_util__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8786 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_58_58, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 8788 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_58_58, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8790 "backend_libs.switch_util.c"
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
#line 8977 "backend_libs.switch_util.c"
        {
#line 8979 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_110_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8981 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_144, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8983 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_144, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 8985 "backend_libs.switch_util.c"
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
#line 9043 "backend_libs.switch_util.c"
            {
#line 9045 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_113_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9047 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_153, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9049 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_153, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9051 "backend_libs.switch_util.c"
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
#line 9079 "backend_libs.switch_util.c"
          {
#line 9081 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9083 "backend_libs.switch_util.c"
            MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_110, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9085 "backend_libs.switch_util.c"
            MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_110, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9087 "backend_libs.switch_util.c"
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
#line 9145 "backend_libs.switch_util.c"
              {
#line 9147 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9149 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_113, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9151 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_113, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9153 "backend_libs.switch_util.c"
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
#line 9185 "backend_libs.switch_util.c"
            {
#line 9187 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9189 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_126_126, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9191 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_126_126, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9193 "backend_libs.switch_util.c"
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
#line 9300 "backend_libs.switch_util.c"
                {
#line 9302 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9304 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_133_133, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9306 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_133_133, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9308 "backend_libs.switch_util.c"
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
#line 9340 "backend_libs.switch_util.c"
              {
#line 9342 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9344 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_116_116, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9346 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_116_116, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9348 "backend_libs.switch_util.c"
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
#line 9455 "backend_libs.switch_util.c"
                  {
#line 9457 "backend_libs.switch_util.c"
                    backend_libs__switch_util__TypeInfo_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9459 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_123_123, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9461 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_123_123, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9463 "backend_libs.switch_util.c"
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
#line 9491 "backend_libs.switch_util.c"
                {
#line 9493 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_110_185 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9495 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_185, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9497 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_185, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9499 "backend_libs.switch_util.c"
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
#line 9557 "backend_libs.switch_util.c"
                    {
#line 9559 "backend_libs.switch_util.c"
                      backend_libs__switch_util__TypeInfo_113_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9561 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_194, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9563 "backend_libs.switch_util.c"
                      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_194, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9565 "backend_libs.switch_util.c"
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
#line 10327 "backend_libs.switch_util.c"
        {
#line 10329 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10331 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10333 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_17));
#line 10335 "backend_libs.switch_util.c"
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
#line 10348 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 10350 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_25_25 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 10352 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_23_23 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 10354 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 10356 "backend_libs.switch_util.c"
            {
#line 10358 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10360 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_23_23));
#line 10362 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 1) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_22_22));
#line 10364 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_17));
#line 10366 "backend_libs.switch_util.c"
            }
#line 10368 "backend_libs.switch_util.c"
            {
#line 10370 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10372 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_26_26, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_25_25));
#line 10374 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_26_26, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_24_24));
#line 10376 "backend_libs.switch_util.c"
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

#line 10455 "backend_libs.switch_util.c"
        {
#line 10457 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10459 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10461 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_12));
#line 10463 "backend_libs.switch_util.c"
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
#line 984 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_LastUsed_8 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7;
#line 984 "switch_util.m"
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
#line 10599 "backend_libs.switch_util.c"
        {
#line 10601 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10603 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_67_67, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10605 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_67_67, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_64));
#line 10607 "backend_libs.switch_util.c"
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

#line 10699 "backend_libs.switch_util.c"
            {
#line 10701 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10703 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10705 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_64));
#line 10707 "backend_libs.switch_util.c"
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

#line 10853 "backend_libs.switch_util.c"
    {
#line 10855 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10857 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10859 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_19));
#line 10861 "backend_libs.switch_util.c"
    }
#line 956 "switch_util.m"
    {
#line 956 "switch_util.m"
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
#line 10979 "backend_libs.switch_util.c"
    {
#line 10981 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10983 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_71_71, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 10985 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_71_71, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 10987 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_71_71, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 10989 "backend_libs.switch_util.c"
    }
#line 10991 "backend_libs.switch_util.c"
    {
#line 10993 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10995 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 10997 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_71_71));
#line 10999 "backend_libs.switch_util.c"
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
#line 11069 "backend_libs.switch_util.c"
        {
#line 11071 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11073 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_83_83, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11075 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_83_83, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11077 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_83_83, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11079 "backend_libs.switch_util.c"
        }
#line 11081 "backend_libs.switch_util.c"
        {
#line 11083 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11085 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_85_85, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11087 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_85_85, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_83_83));
#line 11089 "backend_libs.switch_util.c"
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
#line 11102 "backend_libs.switch_util.c"
    {
#line 11104 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11106 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_89_89, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11108 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_89_89, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11110 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_89_89, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11112 "backend_libs.switch_util.c"
    }
#line 11114 "backend_libs.switch_util.c"
    {
#line 11116 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11118 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_91_91, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11120 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_91_91, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_89_89));
#line 11122 "backend_libs.switch_util.c"
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
#line 11192 "backend_libs.switch_util.c"
        {
#line 11194 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11196 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_101_101, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11198 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_101_101, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11200 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_101_101, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11202 "backend_libs.switch_util.c"
        }
#line 11204 "backend_libs.switch_util.c"
        {
#line 11206 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11208 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_103_103, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11210 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_103_103, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_101_101));
#line 11212 "backend_libs.switch_util.c"
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
#line 11225 "backend_libs.switch_util.c"
    {
#line 11227 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11229 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_107_107, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11231 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_107_107, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11233 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_107_107, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11235 "backend_libs.switch_util.c"
    }
#line 11237 "backend_libs.switch_util.c"
    {
#line 11239 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11241 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_109_109, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11243 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_109_109, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_107_107));
#line 11245 "backend_libs.switch_util.c"
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
#line 11315 "backend_libs.switch_util.c"
        {
#line 11317 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11319 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_119_119, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11321 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_119_119, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11323 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_119_119, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11325 "backend_libs.switch_util.c"
        }
#line 11327 "backend_libs.switch_util.c"
        {
#line 11329 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11331 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_121_121, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11333 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_121_121, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_119_119));
#line 11335 "backend_libs.switch_util.c"
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
#line 889 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_14 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions3_0_13;
#line 889 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_12 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions2_0_11;
#line 889 "switch_util.m"
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

#line 12116 "backend_libs.switch_util.c"
            {
#line 12118 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12120 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_21_21, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12122 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_21_21, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_18));
#line 12124 "backend_libs.switch_util.c"
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

#line 12216 "backend_libs.switch_util.c"
            {
#line 12218 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12220 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_27_27, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12222 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_27_27, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_18));
#line 12224 "backend_libs.switch_util.c"
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
#line 1313 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_V_12_12;
#line 1316 "switch_util.m"
    MR_Word backend_libs__switch_util__conv1_PtagCaseRevSortedList_10;
#line 1319 "switch_util.m"
    MR_Word backend_libs__switch_util__conv2_PtagCaseSortedList_11;

#line 12333 "backend_libs.switch_util.c"
    {
#line 12335 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12337 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12339 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 12341 "backend_libs.switch_util.c"
    }
#line 1312 "switch_util.m"
    {
#line 1312 "switch_util.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_17_17, backend_libs__switch_util__PtagCaseMap_5, &backend_libs__switch_util__PtagCaseList_7);
    }
#line 12348 "backend_libs.switch_util.c"
    {
#line 12350 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12352 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_19_19, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 12354 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_19_19, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 12356 "backend_libs.switch_util.c"
    }
#line 1313 "switch_util.m"
    {
#line 1313 "switch_util.m"
      backend_libs__switch_util__conv0_V_12_12 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeInfo_17_17, backend_libs__switch_util__TypeInfo_19_19);
    }
#line 1313 "switch_util.m"
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
#line 12403 "backend_libs.switch_util.c"
    {
#line 12405 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12407 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1));
#line 12409 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 12411 "backend_libs.switch_util.c"
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

#line 1203 "switch_util.m"
    {
#line 1203 "switch_util.m"
      backend_libs__switch_util__V_27_27 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_33_33, (MR_Word) &backend_libs__switch_util_scalar_common_1[0]);
    }
#line 12476 "backend_libs.switch_util.c"
    {
#line 12478 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12480 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_36_36, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12482 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_36_36, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_29));
#line 12484 "backend_libs.switch_util.c"
    }
#line 1203 "switch_util.m"
    {
#line 1203 "switch_util.m"
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
#line 12550 "backend_libs.switch_util.c"
    {
#line 12552 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12554 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_33_33, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 12556 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_33_33, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 12558 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_33_33, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_27));
#line 12560 "backend_libs.switch_util.c"
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

#line 12642 "backend_libs.switch_util.c"
    {
#line 12644 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12646 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_84_84, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 12648 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_84_84, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 12650 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_84_84, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_81));
#line 12652 "backend_libs.switch_util.c"
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
#line 12673 "backend_libs.switch_util.c"
    backend_libs__switch_util__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 12675 "backend_libs.switch_util.c"
    {
#line 12677 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12679 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_87_87, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 12681 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_87_87, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_84_84));
#line 12683 "backend_libs.switch_util.c"
    }
#line 801 "switch_util.m"
    {
#line 801 "switch_util.m"
      backend_libs__switch_util__V_41_41 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
    }
#line 801 "switch_util.m"
    {
#line 801 "switch_util.m"
      backend_libs__switch_util__V_42_42 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
    }
#line 801 "switch_util.m"
    {
#line 801 "switch_util.m"
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

#line 837 "switch_util.m"
        {
#line 837 "switch_util.m"
          backend_libs__switch_util__V_59_59 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
        }
#line 837 "switch_util.m"
        {
#line 837 "switch_util.m"
          backend_libs__switch_util__V_60_60 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
        }
#line 837 "switch_util.m"
        {
#line 837 "switch_util.m"
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
      libs__globals__lookup_int_option_3_p_0(backend_libs__switch_util__Globals_4, (MR_Integer) 236, &backend_libs__switch_util__TargetWordBits_8);
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

#line 13054 "backend_libs.switch_util.c"
                {
#line 13056 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13058 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 13060 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_22));
#line 13062 "backend_libs.switch_util.c"
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
#line 13148 "backend_libs.switch_util.c"
        backend_libs__switch_util__TypeCtorInfo_11_11 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 13150 "backend_libs.switch_util.c"
        backend_libs__switch_util__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 13152 "backend_libs.switch_util.c"
        {
#line 13154 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13156 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_9_9));
#line 13158 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_8));
#line 13160 "backend_libs.switch_util.c"
        }
#line 13162 "backend_libs.switch_util.c"
        {
#line 13164 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 13166 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_12_12, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_11_11));
#line 13168 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_12_12, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_T_7));
#line 13170 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_12_12, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_10_10));
#line 13172 "backend_libs.switch_util.c"
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
