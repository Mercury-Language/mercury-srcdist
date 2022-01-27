/*
** Automatically generated from `switch_util.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.string_encoding.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"




#line 148 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2;

#line 151 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_2;

#line 154 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1;

#line 157 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1;

#line 160 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1;

#line 163 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

#line 166 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

#line 169 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 172 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 175 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1;

#line 178 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2;

#line 181 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_0[1];

#line 184 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0;

#line 187 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2;

#line 190 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_1[2];

#line 193 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_1;

#line 196 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_0[1];

#line 199 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_1[1];

#line 202 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_3[2];

#line 205 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_3[2];

#line 208 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_3[2];

#line 211 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 214 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 217 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_several_llds_0_0[2];

#line 220 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_several_llds_0_0;

#line 223 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_several_llds_0_0[1];

#line 226 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_several_llds_0[1];

#line 229 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_several_llds_0[1];

#line 232 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_several_llds_0[1];

#line 235 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0;

#line 238 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0;

#line 241 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1;

#line 244 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_is_int_switch_0[2];

#line 247 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_is_int_switch_0[2];

#line 250 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_is_int_switch_0[2];

#line 253 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_0;

#line 256 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_1;

#line 259 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_may_use_smart_indexing_0[2];

#line 262 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_may_use_smart_indexing_0[2];

#line 265 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_may_use_smart_indexing_0[2];

#line 268 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_maybe_int_switch_info_0_0[3];

#line 271 "backend_libs.switch_util.c"
static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__field_names_maybe_int_switch_info_0_0[3];

#line 274 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0;

#line 277 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1;

#line 280 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0[1];

#line 283 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1[1];

#line 286 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_maybe_int_switch_info_0[2];

#line 289 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0[2];

#line 292 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0[2];

#line 295 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0;

#line 298 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1;

#line 301 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_bit_vec_check_0[2];

#line 304 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_bit_vec_check_0[2];

#line 307 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_bit_vec_check_0[2];

#line 310 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0;

#line 313 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1;

#line 316 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_range_check_0[2];

#line 319 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_range_check_0[2];

#line 322 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_range_check_0[2];

#line 325 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1;

#line 328 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_1_0[2];

#line 331 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0;

#line 334 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_1_0[1];

#line 337 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_1[1];

#line 340 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_1[1];

#line 343 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_1[1];

#line 346 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_entry_1_0[2];

#line 349 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0;

#line 352 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_entry_1_0[1];

#line 355 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_entry_1[1];

#line 358 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_entry_1[1];

#line 361 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_entry_1[1];

#line 364 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0;

#line 367 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_group_entry_1_0[3];

#line 370 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0;

#line 373 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_group_entry_1_0[1];

#line 376 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_group_entry_1[1];

#line 379 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_group_entry_1[1];

#line 382 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_group_entry_1[1];

#line 385 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1;

#line 388 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1;

#line 391 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1;

#line 394 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1__pseudo_backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1;

#line 397 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_rev_map_entry_1_0[4];

#line 400 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0;

#line 403 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_rev_map_entry_1_0[1];

#line 406 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_rev_map_entry_1[1];

#line 409 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_rev_map_entry_1[1];

#line 412 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_rev_map_entry_1[1];

#line 415 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0;

#line 418 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0;

#line 421 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_1;

#line 424 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_0[1];

#line 427 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0;

#line 430 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1;

#line 433 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_1[2];

#line 436 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1;

#line 439 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_0[1];

#line 442 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_1[1];

#line 445 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_soln_consts_1[2];

#line 448 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_soln_consts_1[2];

#line 451 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_soln_consts_1[2];

#line 454 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1;

#line 457 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1;

#line 460 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_string_hash_slot_1_0[3];

#line 463 "backend_libs.switch_util.c"
static const MR_DuFunctorDesc backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0;

#line 466 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0[1];

#line 469 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_string_hash_slot_1[1];

#line 472 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_string_hash_slot_1[1];

#line 475 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_string_hash_slot_1[1];

#line 478 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0;

#line 481 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1;

#line 484 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2;

#line 487 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3;

#line 490 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_switch_category_0[4];

#line 493 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_switch_category_0[4];

#line 496 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_switch_category_0[4];

#line 499 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0;

#line 502 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1;

#line 505 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_table_size_upgrade_0[2];

#line 508 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_table_size_upgrade_0[2];

#line 511 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_table_size_upgrade_0[2];

#line 514 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_3_0_10001(
#line 517 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 519 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 521 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 523 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 525 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5);

#line 528 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_3_0_10001(
#line 531 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 533 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 535 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 537 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 539 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 541 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_6);

#line 544 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_several_llds_0_0_10001(
#line 547 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 549 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 552 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_several_llds_0_0_10001(
#line 555 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 557 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 559 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 562 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_id_ptags_map_0_0_10001(
#line 565 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 567 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 570 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_id_ptags_map_0_0_10001(
#line 573 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 575 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 577 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 580 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0_10001(
#line 583 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 585 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 588 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0_10001(
#line 591 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 593 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 595 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 598 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____may_use_smart_indexing_0_0_10001(
#line 601 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 603 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 606 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____may_use_smart_indexing_0_0_10001(
#line 609 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 611 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 613 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 616 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____maybe_int_switch_info_0_0_10001(
#line 619 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 621 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 624 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____maybe_int_switch_info_0_0_10001(
#line 627 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 629 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 631 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 634 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_bit_vec_check_0_0_10001(
#line 637 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 639 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 642 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_bit_vec_check_0_0_10001(
#line 645 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 647 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 649 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 652 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_range_check_0_0_10001(
#line 655 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 657 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 660 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_range_check_0_0_10001(
#line 663 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 665 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 667 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 670 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_1_0_10001(
#line 673 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 675 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 677 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 680 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_1_0_10001(
#line 683 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 685 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 687 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 689 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 692 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_entry_1_0_10001(
#line 695 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 697 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 699 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 702 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_entry_1_0_10001(
#line 705 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 707 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 709 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 711 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 714 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_entry_1_0_10001(
#line 717 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 719 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 721 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 724 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_entry_1_0_10001(
#line 727 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 729 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 731 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 733 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 736 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_list_1_0_10001(
#line 739 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 741 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 743 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 746 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_list_1_0_10001(
#line 749 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 751 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 753 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 755 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 758 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_list_1_0_10001(
#line 761 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 763 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 765 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 768 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_list_1_0_10001(
#line 771 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 773 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 775 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 777 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 780 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_map_1_0_10001(
#line 783 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 785 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 787 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 790 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_map_1_0_10001(
#line 793 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 795 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 797 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 799 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 802 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0_10001(
#line 805 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 807 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 809 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 812 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0_10001(
#line 815 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 817 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 819 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 821 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 824 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0_10001(
#line 827 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 829 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 831 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 834 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0_10001(
#line 837 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 839 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 841 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 843 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 846 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_count_map_0_0_10001(
#line 849 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 851 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 854 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_count_map_0_0_10001(
#line 857 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 859 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 861 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 864 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____soln_consts_1_0_10001(
#line 867 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 869 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 871 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 874 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____soln_consts_1_0_10001(
#line 877 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 879 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 881 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 883 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 886 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_list_1_0_10001(
#line 889 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 891 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 893 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 896 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_list_1_0_10001(
#line 899 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 901 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 903 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 905 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 908 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_map_1_0_10001(
#line 911 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 913 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 915 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 918 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_map_1_0_10001(
#line 921 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 923 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 925 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 927 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 930 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____string_hash_slot_1_0_10001(
#line 933 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 935 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 937 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 940 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____string_hash_slot_1_0_10001(
#line 943 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 945 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 947 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 949 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4);

#line 952 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____switch_category_0_0_10001(
#line 955 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 957 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 960 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____switch_category_0_0_10001(
#line 963 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 965 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 967 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 970 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____table_size_upgrade_0_0_10001(
#line 973 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 975 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2);

#line 978 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____table_size_upgrade_0_0_10001(
#line 981 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 983 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 985 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3);

#line 1263 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0_1(
#line 1263 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1263 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1263 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1263 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3,
#line 1263 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 1263 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_5);

#line 1248 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0(
#line 1248 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_65,
#line 1248 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1248 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1248 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1248 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1248 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1248 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1248 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1248 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1248 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9,
#line 1248 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_10,
#line 1248 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11,
#line 1248 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_12);

#line 1114 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0_1(
#line 1114 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1114 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1114 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1114 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3);

#line 1100 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(
#line 1100 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_54,
#line 1100 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1100 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1100 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1100 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1100 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1100 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1100 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1100 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1100 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9,
#line 1100 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10);

#line 789 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_115_111_108_110_95_99_111_110_115_116_115_95_116_111_95_111_110_101_95_115_111_108_110_95_95_91_49_44_32_51_93_95_48_3_p_0(
#line 789 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_8,
#line 789 "switch_util.m"
  MR_Word backend_libs__switch_util__Solns_5,
#line 789 "switch_util.m"
  MR_Word * backend_libs__switch_util__Values_6);

#line 452 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0_1(
#line 452 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 452 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 452 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 452 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 452 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 452 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 452 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_6,
#line 452 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_7,
#line 452 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_8,
#line 452 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_9,
#line 452 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_10);

#line 440 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0(
#line 440 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_1,
#line 440 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_3,
#line 440 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 440 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__5_5,
#line 440 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_6,
#line 440 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LowerLimit_7,
#line 440 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_8,
#line 440 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_UpperLimit_9,
#line 440 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_0_10,
#line 440 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumValues_11,
#line 440 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_12,
#line 440 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_13);

#line 434 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0_1(
#line 434 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 434 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 434 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2);

#line 426 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(
#line 426 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_1,
#line 426 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_3,
#line 426 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 426 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__5_5);

#line 419 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_2(
#line 419 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 419 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 419 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2);

#line 400 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_1(
#line 400 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 400 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 400 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 400 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 400 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 400 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 400 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_6,
#line 400 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_7,
#line 400 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_8,
#line 400 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_9,
#line 400 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_10);

#line 1403 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__build_ptag_case_rev_map__1403__1_3_p_0(
#line 1403 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1403 "switch_util.m"
  MR_Word backend_libs__switch_util__Case_14,
#line 1403 "switch_util.m"
  MR_Word backend_libs__switch_util__OldCase_21);

#line 1298 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1298__1_2_p_0(
#line 1298 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_21,
#line 1298 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_74);

#line 1312 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1312__1_2_p_0(
#line 1312 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_63,
#line 1312 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_94);

#line 1370 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0(
#line 1370 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1370 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1370 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1370 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3);

#line 1370 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0(
#line 1370 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_13,
#line 1370 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1370 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2);

#line 1385 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0(
#line 1385 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 1385 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1385 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1385 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3);

#line 1385 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0(
#line 1385 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 1385 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1385 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2);

#line 388 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0(
#line 388 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 388 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 388 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3);

#line 388 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0(
#line 388 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_1,
#line 388 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2);

#line 1403 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0_1(
#line 1403 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1388 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0(
#line 1388 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1388 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1388 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1388 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3,
#line 1388 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevMap_4);

#line 1363 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__interpret_rev_map_entry_2_p_0(
#line 1363 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_9,
#line 1363 "switch_util.m"
  MR_Word backend_libs__switch_util__RevEntry_3,
#line 1363 "switch_util.m"
  MR_Word * backend_libs__switch_util__GroupEntry_4);

#line 1298 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_2(
#line 1298 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1312 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_1(
#line 1312 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1268 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0(
#line 1268 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_107,
#line 1268 "switch_util.m"
  MR_Word backend_libs__switch_util__CaseId_8,
#line 1268 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_9,
#line 1268 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_10,
#line 1268 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_0_52,
#line 1268 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_53,
#line 1268 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54,
#line 1268 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55);

#line 1155 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__get_ptag_counts_loop_5_p_0(
#line 1155 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1155 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2,
#line 1155 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_3,
#line 1155 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4,
#line 1155 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_5);

#line 1117 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__add_string_binary_entry_4_p_0(
#line 1117 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 1117 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_5,
#line 1117 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_6,
#line 1117 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_12,
#line 1117 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_13);

#line 1078 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0_1(
#line 1078 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg);

#line 1072 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0(
#line 1072 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1072 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_6,
#line 1072 "switch_util.m"
  MR_Word backend_libs__switch_util__HomeMap_7,
#line 1072 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_8,
#line 1072 "switch_util.m"
  MR_Integer backend_libs__switch_util__LastUsed_9,
#line 1072 "switch_util.m"
  MR_Integer * backend_libs__switch_util__FreeSlot_10);

#line 1052 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__follow_hash_chain_3_p_0(
#line 1052 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_12,
#line 1052 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_4,
#line 1052 "switch_util.m"
  MR_Integer backend_libs__switch_util__Slot_5,
#line 1052 "switch_util.m"
  MR_Integer * backend_libs__switch_util__LastSlot_6);

#line 1018 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(
#line 1018 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_64,
#line 1018 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1018 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__2_2,
#line 1018 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__3_3,
#line 1018 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 1018 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5,
#line 1018 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_6,
#line 1018 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7,
#line 1018 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_8);

#line 1003 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hashes_7_p_0(
#line 1003 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_32,
#line 1003 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1003 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_2,
#line 1003 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_3,
#line 1003 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4,
#line 1003 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_5,
#line 1003 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6,
#line 1003 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_7);

#line 988 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_4_p_0(
#line 988 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 988 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_5,
#line 988 "switch_util.m"
  MR_Word backend_libs__switch_util__HashValList_6,
#line 988 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_7,
#line 988 "switch_util.m"
  MR_Word * backend_libs__switch_util__SlotMap_8);

#line 942 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_case_14_p_0(
#line 942 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 942 "switch_util.m"
  MR_Word backend_libs__switch_util__StrCaseRep_15,
#line 942 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_16,
#line 942 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_31,
#line 942 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap4_32,
#line 942 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_33,
#line 942 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap5_34,
#line 942 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_35,
#line 942 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap6_36,
#line 942 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_37,
#line 942 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_38,
#line 942 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_39,
#line 942 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_40,
#line 942 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_41,
#line 942 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_42);

#line 921 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_cases_14_p_0(
#line 921 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 921 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 921 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_2,
#line 921 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_3,
#line 921 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap4_4,
#line 921 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_5,
#line 921 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap5_6,
#line 921 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_7,
#line 921 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap6_8,
#line 921 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_9,
#line 921 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_10,
#line 921 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_11,
#line 921 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_12,
#line 921 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_13,
#line 921 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_14);

#line 789 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__project_soln_consts_to_one_soln_3_p_0(
#line 789 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Key_7,
#line 789 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_8,
#line 789 "switch_util.m"
  MR_Box backend_libs__switch_util___Key_4,
#line 789 "switch_util.m"
  MR_Word backend_libs__switch_util__Solns_5,
#line 789 "switch_util.m"
  MR_Word * backend_libs__switch_util__Values_6);

#line 719 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__filter_out_failing_cases_loop_5_p_0(
#line 719 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 719 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2,
#line 719 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_3,
#line 719 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_4,
#line 719 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_5);

#line 489 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__num_cons_ids_in_tagged_cases_loop_5_p_0(
#line 489 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 489 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0_2,
#line 489 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumConsIds_3,
#line 489 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumArms_0_4,
#line 489 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumArms_5);

#line 467 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__tag_cons_id_in_int_switch_11_p_0(
#line 467 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_12,
#line 467 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsId_13,
#line 467 "switch_util.m"
  MR_Word * backend_libs__switch_util__TaggedConsId_14,
#line 467 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_21,
#line 467 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LowerLimit_22,
#line 467 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_23,
#line 467 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_UpperLimit_24,
#line 467 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_0_25,
#line 467 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumValues_26,
#line 467 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_27,
#line 467 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_28);

#line 461 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__tag_cons_id_3_p_0(
#line 461 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_4,
#line 461 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsId_5,
#line 461 "switch_util.m"
  MR_Word * backend_libs__switch_util__TaggedConsId_6);

#line 1361 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__order_ptags_by_count_3_p_0_1(
#line 1361 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1361 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1361 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2);

#line 787 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__project_all_to_one_solution_2_p_0_1(
#line 787 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 787 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 787 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 787 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__switch_util_scalar_common_1[6][2];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_2[3][3];

static /* final */ const MR_Integer backend_libs__switch_util_scalar_common_4[1][3];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_5[2][8];

static /* final */ const MR_Integer backend_libs__switch_util_scalar_common_6[1][2];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_7[3][6];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_8[2][5];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_9[1][14];

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_10[1][11];


#line 511 "switch_util.m"
/* sealed */ struct backend_libs__switch_util__vector_common_type_3_0_s {
#line 511 "switch_util.m"
  const MR_Word backend_libs__switch_util__vector_common_type_3_0__vct_3_f_0;
#line 511 "switch_util.m"
};

static /* final */ const struct backend_libs__switch_util__vector_common_type_3_0_s backend_libs__switch_util_vector_common_3[4];



static /* final */ const MR_Box backend_libs__switch_util_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&backend_libs__switch_util_scalar_common_1[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) -1))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0)),
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

static /* final */ const MR_Integer backend_libs__switch_util_scalar_common_4[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 33,
    (MR_Integer) 65
  },
};

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_5[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&backend_libs__switch_util_scalar_common_4[0])),
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
    ((MR_Box) (&backend_libs__switch_util_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0)),
    ((MR_Box) (&backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1)),
    ((MR_Box) (&backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1))
  },
};

static /* final */ const MR_Integer backend_libs__switch_util_scalar_common_6[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_7[3][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&backend_libs__switch_util_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1)),
    ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&backend_libs__switch_util_scalar_common_6[0])),
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

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_8[2][5] = {
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

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_9[1][14] = {
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

static /* final */ const MR_Box backend_libs__switch_util_scalar_common_10[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&backend_libs__switch_util_scalar_common_6[0])),
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


static /* final */ const struct backend_libs__switch_util__vector_common_type_3_0_s backend_libs__switch_util_vector_common_3[4] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 3 },
  /* row 2 */   {     (MR_Integer) 0 },
  /* row 3 */   {     (MR_Integer) 1 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1859 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
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
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1883 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1891 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1899 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1908 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__pseudo_1
  }
};

#line 1916 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1924 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_hlds__hlds_goal__type_ctor_info_case_id_0__plain_set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 1933 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
  }
};

#line 1942 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_2
  }
};

#line 1951 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2
};

#line 1956 "backend_libs.switch_util.c"
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

#line 1971 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_soln_consts_1__pseudo_2
  }
};

#line 1980 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_3_1[2] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__pti_tree234_2__pseudo_1__pseudo_backend_libs__switch_util__pti_soln_consts_1__pseudo_2,
  (MR_PseudoTypeInfo) (MR_Integer) 3
};

#line 1986 "backend_libs.switch_util.c"
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

#line 2001 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0
};

#line 2006 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_3_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_1
};

#line 2011 "backend_libs.switch_util.c"
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

#line 2025 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_3[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_0,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_3_1
};

#line 2031 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_3[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2037 "backend_libs.switch_util.c"
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

#line 2054 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2062 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_TypeInfo) &backend_libs__switch_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2070 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_case_consts_several_llds_0_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__sparse_bitset__ti_sparse_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2076 "backend_libs.switch_util.c"
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

#line 2091 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_several_llds_0_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_several_llds_0_0
};

#line 2096 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_case_consts_several_llds_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_case_consts_several_llds_0_0
  }
};

#line 2105 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_case_consts_several_llds_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_case_consts_several_llds_0_0
};

#line 2110 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_case_consts_several_llds_0[1] = {
  (MR_Integer) 0
};

#line 2115 "backend_libs.switch_util.c"
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

#line 2132 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2hlds__hlds_goal__type_ctor_info_case_id_0set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0,
    (MR_TypeInfo) &backend_libs__switch_util__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_int_0
  }
};

#line 2141 "backend_libs.switch_util.c"
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

#line 2158 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0 = {
  (MR_String) "is_int_switch",
  (MR_Integer) 0
};

#line 2164 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1 = {
  (MR_String) "is_not_int_switch",
  (MR_Integer) 1
};

#line 2170 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_is_int_switch_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1
};

#line 2176 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_is_int_switch_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_is_int_switch_0_1
};

#line 2182 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_is_int_switch_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2188 "backend_libs.switch_util.c"
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

#line 2205 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_0 = {
  (MR_String) "may_not_use_smart_indexing",
  (MR_Integer) 0
};

#line 2211 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_1 = {
  (MR_String) "may_use_smart_indexing",
  (MR_Integer) 1
};

#line 2217 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_may_use_smart_indexing_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_1
};

#line 2223 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_may_use_smart_indexing_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_may_use_smart_indexing_0_1
};

#line 2229 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_may_use_smart_indexing_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2235 "backend_libs.switch_util.c"
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

#line 2252 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_maybe_int_switch_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2259 "backend_libs.switch_util.c"
static const MR_ConstString backend_libs__switch_util__backend_libs__switch_util__field_names_maybe_int_switch_info_0_0[3] = {
  (MR_String) "lower_limit",
  (MR_String) "upper_limit",
  (MR_String) "num_values"
};

#line 2266 "backend_libs.switch_util.c"
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

#line 2281 "backend_libs.switch_util.c"
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

#line 2296 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1
};

#line 2301 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_maybe_int_switch_info_0_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0
};

#line 2306 "backend_libs.switch_util.c"
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

#line 2320 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_maybe_int_switch_info_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_maybe_int_switch_info_0_1
};

#line 2326 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_maybe_int_switch_info_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2332 "backend_libs.switch_util.c"
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

#line 2349 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0 = {
  (MR_String) "need_bit_vec_check",
  (MR_Integer) 0
};

#line 2355 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1 = {
  (MR_String) "dont_need_bit_vec_check",
  (MR_Integer) 1
};

#line 2361 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_bit_vec_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1
};

#line 2367 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_bit_vec_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_bit_vec_check_0_0
};

#line 2373 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_bit_vec_check_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2379 "backend_libs.switch_util.c"
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

#line 2396 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0 = {
  (MR_String) "need_range_check",
  (MR_Integer) 0
};

#line 2402 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1 = {
  (MR_String) "dont_need_range_check",
  (MR_Integer) 1
};

#line 2408 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_need_range_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1
};

#line 2414 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_need_range_check_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_need_range_check_0_0
};

#line 2420 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_need_range_check_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2426 "backend_libs.switch_util.c"
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

#line 2443 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2452 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_1_0[2] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_1
};

#line 2458 "backend_libs.switch_util.c"
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

#line 2473 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0
};

#line 2478 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_1_0
  }
};

#line 2487 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_1_0
};

#line 2492 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_1[1] = {
  (MR_Integer) 0
};

#line 2497 "backend_libs.switch_util.c"
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

#line 2514 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_entry_1_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
};

#line 2520 "backend_libs.switch_util.c"
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

#line 2535 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_entry_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0
};

#line 2540 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_entry_1_0
  }
};

#line 2549 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_entry_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_entry_1_0
};

#line 2554 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_entry_1[1] = {
  (MR_Integer) 0
};

#line 2559 "backend_libs.switch_util.c"
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

#line 2576 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2584 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_group_entry_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
};

#line 2591 "backend_libs.switch_util.c"
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

#line 2606 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_group_entry_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0
};

#line 2611 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_group_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_group_entry_1_0
  }
};

#line 2620 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_group_entry_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_group_entry_1_0
};

#line 2625 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_group_entry_1[1] = {
  (MR_Integer) 0
};

#line 2630 "backend_libs.switch_util.c"
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

#line 2647 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_group_entry_1__pseudo_1
  }
};

#line 2655 "backend_libs.switch_util.c"
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

#line 2672 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1 = {
  &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2680 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_entry_1__pseudo_1
  }
};

#line 2688 "backend_libs.switch_util.c"
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

#line 2705 "backend_libs.switch_util.c"
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

#line 2722 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__tree234__pti_tree234_2__pseudo_backend_libs__switch_util__pti_ptag_case_1__pseudo_1__pseudo_backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1,
    (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_rev_map_entry_1__pseudo_1
  }
};

#line 2731 "backend_libs.switch_util.c"
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

#line 2748 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_ptag_case_rev_map_entry_1_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__backend_libs__switch_util__pti_ptag_case_1__pseudo_1
};

#line 2756 "backend_libs.switch_util.c"
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

#line 2771 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_rev_map_entry_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0
};

#line 2776 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_ptag_case_rev_map_entry_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_ptag_case_rev_map_entry_1_0
  }
};

#line 2785 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_ptag_case_rev_map_entry_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_ptag_case_rev_map_entry_1_0
};

#line 2790 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_ptag_case_rev_map_entry_1[1] = {
  (MR_Integer) 0
};

#line 2795 "backend_libs.switch_util.c"
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

#line 2812 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_locn_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2821 "backend_libs.switch_util.c"
static const MR_FA_TypeInfo_Struct2 backend_libs__switch_util__tree234__ti_tree234_2builtin__type_ctor_info_int_0pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &backend_libs__switch_util__pair__ti_pair_2backend_libs__rtti__type_ctor_info_sectag_locn_0builtin__type_ctor_info_int_0
  }
};

#line 2830 "backend_libs.switch_util.c"
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

#line 2847 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2855 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_1
};

#line 2860 "backend_libs.switch_util.c"
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

#line 2875 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_1
  }
};

#line 2883 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_soln_consts_1_1[2] = {
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &backend_libs__switch_util__list__pti_list_1__pseudo_list__pti_list_1__pseudo_1
};

#line 2889 "backend_libs.switch_util.c"
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

#line 2904 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0
};

#line 2909 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_soln_consts_1_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1
};

#line 2914 "backend_libs.switch_util.c"
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

#line 2928 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_soln_consts_1[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_0,
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_soln_consts_1_1
};

#line 2934 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_soln_consts_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2940 "backend_libs.switch_util.c"
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

#line 2957 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2966 "backend_libs.switch_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 backend_libs__switch_util__list__pti_list_1__pseudo_pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__switch_util__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__pseudo_1
  }
};

#line 2974 "backend_libs.switch_util.c"
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

#line 2991 "backend_libs.switch_util.c"
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

#line 3008 "backend_libs.switch_util.c"
static const MR_PseudoTypeInfo backend_libs__switch_util__backend_libs__switch_util__field_types_string_hash_slot_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 3015 "backend_libs.switch_util.c"
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

#line 3030 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0
};

#line 3035 "backend_libs.switch_util.c"
static const MR_DuPtagLayout backend_libs__switch_util__backend_libs__switch_util__du_ptag_ordered_string_hash_slot_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__switch_util__backend_libs__switch_util__du_stag_ordered_string_hash_slot_1_0
  }
};

#line 3044 "backend_libs.switch_util.c"
static const MR_DuFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__du_name_ordered_string_hash_slot_1[1] = {
  &backend_libs__switch_util__backend_libs__switch_util__du_functor_desc_string_hash_slot_1_0
};

#line 3049 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_string_hash_slot_1[1] = {
  (MR_Integer) 0
};

#line 3054 "backend_libs.switch_util.c"
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

#line 3071 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0 = {
  (MR_String) "atomic_switch",
  (MR_Integer) 0
};

#line 3077 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1 = {
  (MR_String) "string_switch",
  (MR_Integer) 1
};

#line 3083 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2 = {
  (MR_String) "tag_switch",
  (MR_Integer) 2
};

#line 3089 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3 = {
  (MR_String) "float_switch",
  (MR_Integer) 3
};

#line 3095 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_switch_category_0[4] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3
};

#line 3103 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_switch_category_0[4] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_3,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_switch_category_0_2
};

#line 3111 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_switch_category_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 3119 "backend_libs.switch_util.c"
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

#line 3136 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0 = {
  (MR_String) "keep_first_size",
  (MR_Integer) 0
};

#line 3142 "backend_libs.switch_util.c"
static const MR_EnumFunctorDesc backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1 = {
  (MR_String) "allow_doubling",
  (MR_Integer) 1
};

#line 3148 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_value_ordered_table_size_upgrade_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1
};

#line 3154 "backend_libs.switch_util.c"
static const MR_EnumFunctorDescPtr backend_libs__switch_util__backend_libs__switch_util__enum_name_ordered_table_size_upgrade_0[2] = {
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_1,
  &backend_libs__switch_util__backend_libs__switch_util__enum_functor_desc_table_size_upgrade_0_0
};

#line 3160 "backend_libs.switch_util.c"
static const MR_Integer backend_libs__switch_util__backend_libs__switch_util__functor_number_map_table_size_upgrade_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3166 "backend_libs.switch_util.c"
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

#line 3183 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_3_0_10001(
#line 3186 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3188 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3190 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3192 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 3194 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5)
#line 3196 "backend_libs.switch_util.c"
{
#line 3198 "backend_libs.switch_util.c"
  {
#line 3200 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3203 "backend_libs.switch_util.c"
    {
#line 3205 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____case_consts_3_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4), ((MR_Word) backend_libs__switch_util__wrapper_arg_5));
    }
#line 3208 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3210 "backend_libs.switch_util.c"
  }
#line 3212 "backend_libs.switch_util.c"
}

#line 3215 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_3_0_10001(
#line 3218 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3220 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3222 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3224 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 3226 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 3228 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_6)
#line 3230 "backend_libs.switch_util.c"
{
#line 3232 "backend_libs.switch_util.c"
  {
#line 3234 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3237 "backend_libs.switch_util.c"
    {
#line 3239 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____case_consts_3_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_5), ((MR_Word) backend_libs__switch_util__wrapper_arg_6));
    }
#line 3242 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_4 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3244 "backend_libs.switch_util.c"
  }
#line 3246 "backend_libs.switch_util.c"
}

#line 3249 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_consts_several_llds_0_0_10001(
#line 3252 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3254 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3256 "backend_libs.switch_util.c"
{
#line 3258 "backend_libs.switch_util.c"
  {
#line 3260 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3263 "backend_libs.switch_util.c"
    {
#line 3265 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____case_consts_several_llds_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3268 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3270 "backend_libs.switch_util.c"
  }
#line 3272 "backend_libs.switch_util.c"
}

#line 3275 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_consts_several_llds_0_0_10001(
#line 3278 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3280 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3282 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3284 "backend_libs.switch_util.c"
{
#line 3286 "backend_libs.switch_util.c"
  {
#line 3288 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3291 "backend_libs.switch_util.c"
    {
#line 3293 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____case_consts_several_llds_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3296 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3298 "backend_libs.switch_util.c"
  }
#line 3300 "backend_libs.switch_util.c"
}

#line 3303 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____case_id_ptags_map_0_0_10001(
#line 3306 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3308 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3310 "backend_libs.switch_util.c"
{
#line 3312 "backend_libs.switch_util.c"
  {
#line 3314 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3317 "backend_libs.switch_util.c"
    {
#line 3319 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____case_id_ptags_map_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3322 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3324 "backend_libs.switch_util.c"
  }
#line 3326 "backend_libs.switch_util.c"
}

#line 3329 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____case_id_ptags_map_0_0_10001(
#line 3332 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3334 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3336 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3338 "backend_libs.switch_util.c"
{
#line 3340 "backend_libs.switch_util.c"
  {
#line 3342 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3345 "backend_libs.switch_util.c"
    {
#line 3347 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____case_id_ptags_map_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3350 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3352 "backend_libs.switch_util.c"
  }
#line 3354 "backend_libs.switch_util.c"
}

#line 3357 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0_10001(
#line 3360 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3362 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3364 "backend_libs.switch_util.c"
{
#line 3366 "backend_libs.switch_util.c"
  {
#line 3368 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3371 "backend_libs.switch_util.c"
    {
#line 3373 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____is_int_switch_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3376 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3378 "backend_libs.switch_util.c"
  }
#line 3380 "backend_libs.switch_util.c"
}

#line 3383 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0_10001(
#line 3386 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3388 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3390 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3392 "backend_libs.switch_util.c"
{
#line 3394 "backend_libs.switch_util.c"
  {
#line 3396 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3399 "backend_libs.switch_util.c"
    {
#line 3401 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____is_int_switch_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3404 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3406 "backend_libs.switch_util.c"
  }
#line 3408 "backend_libs.switch_util.c"
}

#line 3411 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____may_use_smart_indexing_0_0_10001(
#line 3414 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3416 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3418 "backend_libs.switch_util.c"
{
#line 3420 "backend_libs.switch_util.c"
  {
#line 3422 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3425 "backend_libs.switch_util.c"
    {
#line 3427 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____may_use_smart_indexing_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3430 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3432 "backend_libs.switch_util.c"
  }
#line 3434 "backend_libs.switch_util.c"
}

#line 3437 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____may_use_smart_indexing_0_0_10001(
#line 3440 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3442 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3444 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3446 "backend_libs.switch_util.c"
{
#line 3448 "backend_libs.switch_util.c"
  {
#line 3450 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3453 "backend_libs.switch_util.c"
    {
#line 3455 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____may_use_smart_indexing_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3458 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3460 "backend_libs.switch_util.c"
  }
#line 3462 "backend_libs.switch_util.c"
}

#line 3465 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____maybe_int_switch_info_0_0_10001(
#line 3468 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3470 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3472 "backend_libs.switch_util.c"
{
#line 3474 "backend_libs.switch_util.c"
  {
#line 3476 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3479 "backend_libs.switch_util.c"
    {
#line 3481 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____maybe_int_switch_info_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3484 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3486 "backend_libs.switch_util.c"
  }
#line 3488 "backend_libs.switch_util.c"
}

#line 3491 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____maybe_int_switch_info_0_0_10001(
#line 3494 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3496 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3498 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3500 "backend_libs.switch_util.c"
{
#line 3502 "backend_libs.switch_util.c"
  {
#line 3504 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3507 "backend_libs.switch_util.c"
    {
#line 3509 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____maybe_int_switch_info_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3512 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3514 "backend_libs.switch_util.c"
  }
#line 3516 "backend_libs.switch_util.c"
}

#line 3519 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_bit_vec_check_0_0_10001(
#line 3522 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3524 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3526 "backend_libs.switch_util.c"
{
#line 3528 "backend_libs.switch_util.c"
  {
#line 3530 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3533 "backend_libs.switch_util.c"
    {
#line 3535 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____need_bit_vec_check_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3538 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3540 "backend_libs.switch_util.c"
  }
#line 3542 "backend_libs.switch_util.c"
}

#line 3545 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_bit_vec_check_0_0_10001(
#line 3548 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3550 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3552 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3554 "backend_libs.switch_util.c"
{
#line 3556 "backend_libs.switch_util.c"
  {
#line 3558 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3561 "backend_libs.switch_util.c"
    {
#line 3563 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____need_bit_vec_check_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3566 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3568 "backend_libs.switch_util.c"
  }
#line 3570 "backend_libs.switch_util.c"
}

#line 3573 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____need_range_check_0_0_10001(
#line 3576 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3578 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 3580 "backend_libs.switch_util.c"
{
#line 3582 "backend_libs.switch_util.c"
  {
#line 3584 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3587 "backend_libs.switch_util.c"
    {
#line 3589 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____need_range_check_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 3592 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3594 "backend_libs.switch_util.c"
  }
#line 3596 "backend_libs.switch_util.c"
}

#line 3599 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____need_range_check_0_0_10001(
#line 3602 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 3604 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3606 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3608 "backend_libs.switch_util.c"
{
#line 3610 "backend_libs.switch_util.c"
  {
#line 3612 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3615 "backend_libs.switch_util.c"
    {
#line 3617 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____need_range_check_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3620 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3622 "backend_libs.switch_util.c"
  }
#line 3624 "backend_libs.switch_util.c"
}

#line 3627 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_1_0_10001(
#line 3630 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3632 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3634 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3636 "backend_libs.switch_util.c"
{
#line 3638 "backend_libs.switch_util.c"
  {
#line 3640 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3643 "backend_libs.switch_util.c"
    {
#line 3645 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3648 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3650 "backend_libs.switch_util.c"
  }
#line 3652 "backend_libs.switch_util.c"
}

#line 3655 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_1_0_10001(
#line 3658 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3660 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3662 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3664 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3666 "backend_libs.switch_util.c"
{
#line 3668 "backend_libs.switch_util.c"
  {
#line 3670 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3673 "backend_libs.switch_util.c"
    {
#line 3675 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3678 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3680 "backend_libs.switch_util.c"
  }
#line 3682 "backend_libs.switch_util.c"
}

#line 3685 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_entry_1_0_10001(
#line 3688 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3690 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3692 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3694 "backend_libs.switch_util.c"
{
#line 3696 "backend_libs.switch_util.c"
  {
#line 3698 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3701 "backend_libs.switch_util.c"
    {
#line 3703 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3706 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3708 "backend_libs.switch_util.c"
  }
#line 3710 "backend_libs.switch_util.c"
}

#line 3713 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_entry_1_0_10001(
#line 3716 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3718 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3720 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3722 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3724 "backend_libs.switch_util.c"
{
#line 3726 "backend_libs.switch_util.c"
  {
#line 3728 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3731 "backend_libs.switch_util.c"
    {
#line 3733 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3736 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3738 "backend_libs.switch_util.c"
  }
#line 3740 "backend_libs.switch_util.c"
}

#line 3743 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_entry_1_0_10001(
#line 3746 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3748 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3750 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3752 "backend_libs.switch_util.c"
{
#line 3754 "backend_libs.switch_util.c"
  {
#line 3756 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3759 "backend_libs.switch_util.c"
    {
#line 3761 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_group_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3764 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3766 "backend_libs.switch_util.c"
  }
#line 3768 "backend_libs.switch_util.c"
}

#line 3771 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_entry_1_0_10001(
#line 3774 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3776 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3778 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3780 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3782 "backend_libs.switch_util.c"
{
#line 3784 "backend_libs.switch_util.c"
  {
#line 3786 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3789 "backend_libs.switch_util.c"
    {
#line 3791 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_group_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3794 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3796 "backend_libs.switch_util.c"
  }
#line 3798 "backend_libs.switch_util.c"
}

#line 3801 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_group_list_1_0_10001(
#line 3804 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3806 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3808 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3810 "backend_libs.switch_util.c"
{
#line 3812 "backend_libs.switch_util.c"
  {
#line 3814 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3817 "backend_libs.switch_util.c"
    {
#line 3819 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_group_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3822 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3824 "backend_libs.switch_util.c"
  }
#line 3826 "backend_libs.switch_util.c"
}

#line 3829 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_group_list_1_0_10001(
#line 3832 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3834 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3836 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3838 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3840 "backend_libs.switch_util.c"
{
#line 3842 "backend_libs.switch_util.c"
  {
#line 3844 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3847 "backend_libs.switch_util.c"
    {
#line 3849 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_group_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3852 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3854 "backend_libs.switch_util.c"
  }
#line 3856 "backend_libs.switch_util.c"
}

#line 3859 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_list_1_0_10001(
#line 3862 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3864 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3866 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3868 "backend_libs.switch_util.c"
{
#line 3870 "backend_libs.switch_util.c"
  {
#line 3872 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3875 "backend_libs.switch_util.c"
    {
#line 3877 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3880 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3882 "backend_libs.switch_util.c"
  }
#line 3884 "backend_libs.switch_util.c"
}

#line 3887 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_list_1_0_10001(
#line 3890 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3892 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3894 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3896 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3898 "backend_libs.switch_util.c"
{
#line 3900 "backend_libs.switch_util.c"
  {
#line 3902 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3905 "backend_libs.switch_util.c"
    {
#line 3907 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3910 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3912 "backend_libs.switch_util.c"
  }
#line 3914 "backend_libs.switch_util.c"
}

#line 3917 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_map_1_0_10001(
#line 3920 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3922 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3924 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3926 "backend_libs.switch_util.c"
{
#line 3928 "backend_libs.switch_util.c"
  {
#line 3930 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3933 "backend_libs.switch_util.c"
    {
#line 3935 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3938 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3940 "backend_libs.switch_util.c"
  }
#line 3942 "backend_libs.switch_util.c"
}

#line 3945 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_map_1_0_10001(
#line 3948 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3950 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 3952 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 3954 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 3956 "backend_libs.switch_util.c"
{
#line 3958 "backend_libs.switch_util.c"
  {
#line 3960 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 3963 "backend_libs.switch_util.c"
    {
#line 3965 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 3968 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 3970 "backend_libs.switch_util.c"
  }
#line 3972 "backend_libs.switch_util.c"
}

#line 3975 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0_10001(
#line 3978 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 3980 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 3982 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 3984 "backend_libs.switch_util.c"
{
#line 3986 "backend_libs.switch_util.c"
  {
#line 3988 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 3991 "backend_libs.switch_util.c"
    {
#line 3993 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_rev_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 3996 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 3998 "backend_libs.switch_util.c"
  }
#line 4000 "backend_libs.switch_util.c"
}

#line 4003 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0_10001(
#line 4006 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4008 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4010 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4012 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4014 "backend_libs.switch_util.c"
{
#line 4016 "backend_libs.switch_util.c"
  {
#line 4018 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4021 "backend_libs.switch_util.c"
    {
#line 4023 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_rev_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4026 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4028 "backend_libs.switch_util.c"
  }
#line 4030 "backend_libs.switch_util.c"
}

#line 4033 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0_10001(
#line 4036 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4038 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4040 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4042 "backend_libs.switch_util.c"
{
#line 4044 "backend_libs.switch_util.c"
  {
#line 4046 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4049 "backend_libs.switch_util.c"
    {
#line 4051 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4054 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4056 "backend_libs.switch_util.c"
  }
#line 4058 "backend_libs.switch_util.c"
}

#line 4061 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0_10001(
#line 4064 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4066 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4068 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4070 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4072 "backend_libs.switch_util.c"
{
#line 4074 "backend_libs.switch_util.c"
  {
#line 4076 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4079 "backend_libs.switch_util.c"
    {
#line 4081 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4084 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4086 "backend_libs.switch_util.c"
  }
#line 4088 "backend_libs.switch_util.c"
}

#line 4091 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_count_map_0_0_10001(
#line 4094 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4096 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 4098 "backend_libs.switch_util.c"
{
#line 4100 "backend_libs.switch_util.c"
  {
#line 4102 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4105 "backend_libs.switch_util.c"
    {
#line 4107 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_count_map_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 4110 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4112 "backend_libs.switch_util.c"
  }
#line 4114 "backend_libs.switch_util.c"
}

#line 4117 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_count_map_0_0_10001(
#line 4120 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 4122 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4124 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4126 "backend_libs.switch_util.c"
{
#line 4128 "backend_libs.switch_util.c"
  {
#line 4130 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4133 "backend_libs.switch_util.c"
    {
#line 4135 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____ptag_count_map_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4138 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4140 "backend_libs.switch_util.c"
  }
#line 4142 "backend_libs.switch_util.c"
}

#line 4145 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____soln_consts_1_0_10001(
#line 4148 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4150 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4152 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4154 "backend_libs.switch_util.c"
{
#line 4156 "backend_libs.switch_util.c"
  {
#line 4158 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4161 "backend_libs.switch_util.c"
    {
#line 4163 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____soln_consts_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4166 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4168 "backend_libs.switch_util.c"
  }
#line 4170 "backend_libs.switch_util.c"
}

#line 4173 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____soln_consts_1_0_10001(
#line 4176 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4178 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4180 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4182 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4184 "backend_libs.switch_util.c"
{
#line 4186 "backend_libs.switch_util.c"
  {
#line 4188 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4191 "backend_libs.switch_util.c"
    {
#line 4193 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____soln_consts_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4196 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4198 "backend_libs.switch_util.c"
  }
#line 4200 "backend_libs.switch_util.c"
}

#line 4203 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_list_1_0_10001(
#line 4206 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4208 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4210 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4212 "backend_libs.switch_util.c"
{
#line 4214 "backend_libs.switch_util.c"
  {
#line 4216 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4219 "backend_libs.switch_util.c"
    {
#line 4221 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____stag_goal_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4224 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4226 "backend_libs.switch_util.c"
  }
#line 4228 "backend_libs.switch_util.c"
}

#line 4231 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_list_1_0_10001(
#line 4234 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4236 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4238 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4240 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4242 "backend_libs.switch_util.c"
{
#line 4244 "backend_libs.switch_util.c"
  {
#line 4246 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4249 "backend_libs.switch_util.c"
    {
#line 4251 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____stag_goal_list_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4254 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4256 "backend_libs.switch_util.c"
  }
#line 4258 "backend_libs.switch_util.c"
}

#line 4261 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____stag_goal_map_1_0_10001(
#line 4264 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4266 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4268 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4270 "backend_libs.switch_util.c"
{
#line 4272 "backend_libs.switch_util.c"
  {
#line 4274 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4277 "backend_libs.switch_util.c"
    {
#line 4279 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____stag_goal_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4282 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4284 "backend_libs.switch_util.c"
  }
#line 4286 "backend_libs.switch_util.c"
}

#line 4289 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____stag_goal_map_1_0_10001(
#line 4292 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4294 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4296 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4298 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4300 "backend_libs.switch_util.c"
{
#line 4302 "backend_libs.switch_util.c"
  {
#line 4304 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4307 "backend_libs.switch_util.c"
    {
#line 4309 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____stag_goal_map_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4312 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4314 "backend_libs.switch_util.c"
  }
#line 4316 "backend_libs.switch_util.c"
}

#line 4319 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____string_hash_slot_1_0_10001(
#line 4322 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4324 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4326 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4328 "backend_libs.switch_util.c"
{
#line 4330 "backend_libs.switch_util.c"
  {
#line 4332 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4335 "backend_libs.switch_util.c"
    {
#line 4337 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____string_hash_slot_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4340 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4342 "backend_libs.switch_util.c"
  }
#line 4344 "backend_libs.switch_util.c"
}

#line 4347 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____string_hash_slot_1_0_10001(
#line 4350 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4352 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 4354 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 4356 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_4)
#line 4358 "backend_libs.switch_util.c"
{
#line 4360 "backend_libs.switch_util.c"
  {
#line 4362 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4365 "backend_libs.switch_util.c"
    {
#line 4367 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____string_hash_slot_1_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_3), ((MR_Word) backend_libs__switch_util__wrapper_arg_4));
    }
#line 4370 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4372 "backend_libs.switch_util.c"
  }
#line 4374 "backend_libs.switch_util.c"
}

#line 4377 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____switch_category_0_0_10001(
#line 4380 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4382 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 4384 "backend_libs.switch_util.c"
{
#line 4386 "backend_libs.switch_util.c"
  {
#line 4388 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4391 "backend_libs.switch_util.c"
    {
#line 4393 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____switch_category_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 4396 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4398 "backend_libs.switch_util.c"
  }
#line 4400 "backend_libs.switch_util.c"
}

#line 4403 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____switch_category_0_0_10001(
#line 4406 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 4408 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4410 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4412 "backend_libs.switch_util.c"
{
#line 4414 "backend_libs.switch_util.c"
  {
#line 4416 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4419 "backend_libs.switch_util.c"
    {
#line 4421 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____switch_category_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4424 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4426 "backend_libs.switch_util.c"
  }
#line 4428 "backend_libs.switch_util.c"
}

#line 4431 "backend_libs.switch_util.c"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____table_size_upgrade_0_0_10001(
#line 4434 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 4436 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2)
#line 4438 "backend_libs.switch_util.c"
{
#line 4440 "backend_libs.switch_util.c"
  {
#line 4442 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded;

#line 4445 "backend_libs.switch_util.c"
    {
#line 4447 "backend_libs.switch_util.c"
      backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____table_size_upgrade_0_0(((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2));
    }
#line 4450 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 4452 "backend_libs.switch_util.c"
  }
#line 4454 "backend_libs.switch_util.c"
}

#line 4457 "backend_libs.switch_util.c"
static void MR_CALL 
backend_libs__switch_util____Compare____table_size_upgrade_0_0_10001(
#line 4460 "backend_libs.switch_util.c"
  MR_Box * backend_libs__switch_util__wrapper_arg_1,
#line 4462 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 4464 "backend_libs.switch_util.c"
  MR_Box backend_libs__switch_util__wrapper_arg_3)
#line 4466 "backend_libs.switch_util.c"
{
#line 4468 "backend_libs.switch_util.c"
  {
#line 4470 "backend_libs.switch_util.c"
    MR_Word backend_libs__switch_util__conv0_HeadVar__1_1;

#line 4473 "backend_libs.switch_util.c"
    {
#line 4475 "backend_libs.switch_util.c"
      backend_libs__switch_util____Compare____table_size_upgrade_0_0(&backend_libs__switch_util__conv0_HeadVar__1_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), ((MR_Word) backend_libs__switch_util__wrapper_arg_3));
    }
#line 4478 "backend_libs.switch_util.c"
    *backend_libs__switch_util__wrapper_arg_1 = ((MR_Box) (backend_libs__switch_util__conv0_HeadVar__1_1));
#line 4480 "backend_libs.switch_util.c"
  }
#line 4482 "backend_libs.switch_util.c"
}

#line 1263 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0_1(
#line 1263 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1263 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1263 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1263 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3,
#line 1263 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_4,
#line 1263 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_5)
#line 1263 "switch_util.m"
{
#line 1263 "switch_util.m"
  {
#line 1263 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 1263 "switch_util.m"
    MR_Word backend_libs__switch_util__conv2_STATE_VARIABLE_CaseIdPtagsMap_53;
#line 1263 "switch_util.m"
    MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55;

#line 1263 "switch_util.m"
    {
#line 1263 "switch_util.m"
      backend_libs__switch_util__group_case_by_ptag_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))), (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 5)), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), &backend_libs__switch_util__conv2_STATE_VARIABLE_CaseIdPtagsMap_53, ((MR_Word) backend_libs__switch_util__wrapper_arg_4), &backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55);
    }
#line 1263 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_3 = ((MR_Box) (backend_libs__switch_util__conv2_STATE_VARIABLE_CaseIdPtagsMap_53));
#line 1263 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_5 = ((MR_Box) (backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55));
#line 1263 "switch_util.m"
  }
#line 1263 "switch_util.m"
}

#line 1248 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0(
#line 1248 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_65,
#line 1248 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1248 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1248 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1248 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1248 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1248 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1248 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1248 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1248 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9,
#line 1248 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_10,
#line 1248 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11,
#line 1248 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_12)
#line 1248 "switch_util.m"
{
#line 1255 "switch_util.m"
  while (MR_TRUE)
#line 1255 "switch_util.m"
    {
#line 1255 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1255 "switch_util.m"
      {
#line 1255 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 1255 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1255 "switch_util.m"
          {
#line 1256 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_12 = backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11;
#line 1256 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_10 = backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9;
#line 1256 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_StateC_8 = backend_libs__switch_util__STATE_VARIABLE_StateC_0_7;
#line 1256 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_StateB_6 = backend_libs__switch_util__STATE_VARIABLE_StateB_0_5;
#line 1256 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_StateA_4 = backend_libs__switch_util__STATE_VARIABLE_StateA_0_3;
#line 1255 "switch_util.m"
          }
#line 1255 "switch_util.m"
        else
#line 1258 "switch_util.m"
          {
#line 1258 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_78_78;
#line 1258 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_80_80;
#line 1258 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCase_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1258 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCases_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1258 "switch_util.m"
            MR_Word backend_libs__switch_util__MainTaggedConsId_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 0)));
#line 1258 "switch_util.m"
            MR_Word backend_libs__switch_util__OtherConsIds_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 1)));
#line 1258 "switch_util.m"
            MR_Word backend_libs__switch_util__CaseId_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 2)));
#line 1258 "switch_util.m"
            MR_Box backend_libs__switch_util__CaseRep_41;
#line 1258 "switch_util.m"
            MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_52_52;
#line 1258 "switch_util.m"
            MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_53_53;
#line 1258 "switch_util.m"
            MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_54_54;
#line 1258 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_55_55;
#line 1258 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_56_56;
#line 1258 "switch_util.m"
            MR_Word backend_libs__switch_util__V_57_57;
#line 1258 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_58_58;
#line 1258 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_59_59;
#line 1259 "switch_util.m"
            MR_Word backend_libs__switch_util___Goal_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_29, (MR_Integer) 3)));
#line 1260 "switch_util.m"
            void MR_CALL (* backend_libs__switch_util__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RepresentCase_2, (MR_Integer) 1)));
#line 1263 "switch_util.m"
            MR_Box backend_libs__switch_util__conv4_STATE_VARIABLE_CaseNumPtagsMap_58_58;
#line 1263 "switch_util.m"
            MR_Box backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_59_59;

#line 1260 "switch_util.m"
            {
#line 1260 "switch_util.m"
              backend_libs__switch_util__func_0(((MR_Box) backend_libs__switch_util__RepresentCase_2), ((MR_Box) (backend_libs__switch_util__TaggedCase_29)), &backend_libs__switch_util__CaseRep_41, backend_libs__switch_util__STATE_VARIABLE_StateA_0_3, &backend_libs__switch_util__STATE_VARIABLE_StateA_52_52, backend_libs__switch_util__STATE_VARIABLE_StateB_0_5, &backend_libs__switch_util__STATE_VARIABLE_StateB_53_53, backend_libs__switch_util__STATE_VARIABLE_StateC_0_7, &backend_libs__switch_util__STATE_VARIABLE_StateC_54_54);
            }
#line 1261 "switch_util.m"
            {
#line 1261 "switch_util.m"
              backend_libs__switch_util__group_case_by_ptag_7_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_65, backend_libs__switch_util__CaseId_39, backend_libs__switch_util__CaseRep_41, backend_libs__switch_util__MainTaggedConsId_37, backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9, &backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_55_55, backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11, &backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_56_56);
            }
#line 1263 "switch_util.m"
            {
#line 1263 "switch_util.m"
              backend_libs__switch_util__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1263 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_10[0]));
#line 1263 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0_1));
#line 1263 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1263 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_65));
#line 1263 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 4) = ((MR_Box) (backend_libs__switch_util__CaseId_39));
#line 1263 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 5) = backend_libs__switch_util__CaseRep_41;
#line 1263 "switch_util.m"
            }
#line 4656 "backend_libs.switch_util.c"
            {
#line 4658 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4660 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_78_78, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 4662 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_78_78, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_65));
#line 4664 "backend_libs.switch_util.c"
            }
#line 4666 "backend_libs.switch_util.c"
            {
#line 4668 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4670 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_80_80, 0) = ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2));
#line 4672 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_80_80, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 4674 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_80_80, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_78_78));
#line 4676 "backend_libs.switch_util.c"
            }
#line 1263 "switch_util.m"
            {
#line 1263 "switch_util.m"
              mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, (MR_Word) &backend_libs__switch_util_scalar_common_2[1], backend_libs__switch_util__TypeInfo_80_80, backend_libs__switch_util__V_57_57, backend_libs__switch_util__OtherConsIds_38, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_55_55)), &backend_libs__switch_util__conv4_STATE_VARIABLE_CaseNumPtagsMap_58_58, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_56_56)), &backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_59_59);
            }
#line 1263 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_58_58 = ((MR_Word) backend_libs__switch_util__conv4_STATE_VARIABLE_CaseNumPtagsMap_58_58);
#line 1263 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_59_59 = ((MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_59_59);
#line 1265 "switch_util.m"
            /* direct tailcall eliminated */
#line 1265 "switch_util.m"
            {
#line 1265 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__TaggedCases_30;
#line 1265 "switch_util.m"
              MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0__tmp_copy_3 = backend_libs__switch_util__STATE_VARIABLE_StateA_52_52;
#line 1265 "switch_util.m"
              MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0__tmp_copy_5 = backend_libs__switch_util__STATE_VARIABLE_StateB_53_53;
#line 1265 "switch_util.m"
              MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0__tmp_copy_7 = backend_libs__switch_util__STATE_VARIABLE_StateC_54_54;
#line 1265 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0__tmp_copy_9 = backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_58_58;
#line 1265 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0__tmp_copy_11 = backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_59_59;

#line 1265 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_11 = backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0__tmp_copy_11;
#line 1265 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0_9 = backend_libs__switch_util__STATE_VARIABLE_CaseNumPtagsMap_0__tmp_copy_9;
#line 1265 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_StateC_0_7 = backend_libs__switch_util__STATE_VARIABLE_StateC_0__tmp_copy_7;
#line 1265 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_StateB_0_5 = backend_libs__switch_util__STATE_VARIABLE_StateB_0__tmp_copy_5;
#line 1265 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_StateA_0_3 = backend_libs__switch_util__STATE_VARIABLE_StateA_0__tmp_copy_3;
#line 1265 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 1265 "switch_util.m"
            }
#line 1265 "switch_util.m"
            continue;
#line 1258 "switch_util.m"
          }
#line 1255 "switch_util.m"
      }
#line 1255 "switch_util.m"
      break;
#line 1255 "switch_util.m"
    }
#line 1248 "switch_util.m"
}

#line 1114 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0_1(
#line 1114 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1114 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1114 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 1114 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3)
#line 1114 "switch_util.m"
{
#line 1114 "switch_util.m"
  {
#line 1114 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 1114 "switch_util.m"
    MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_UnsortedTable_13;

#line 1114 "switch_util.m"
    {
#line 1114 "switch_util.m"
      backend_libs__switch_util__add_string_binary_entry_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4)), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), ((MR_Word) backend_libs__switch_util__wrapper_arg_2), &backend_libs__switch_util__conv1_STATE_VARIABLE_UnsortedTable_13);
    }
#line 1114 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_3 = ((MR_Box) (backend_libs__switch_util__conv1_STATE_VARIABLE_UnsortedTable_13));
#line 1114 "switch_util.m"
  }
#line 1114 "switch_util.m"
}

#line 1100 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(
#line 1100 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_54,
#line 1100 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1100 "switch_util.m"
  MR_Word backend_libs__switch_util__RepresentCase_2,
#line 1100 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_0_3,
#line 1100 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateA_4,
#line 1100 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_0_5,
#line 1100 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateB_6,
#line 1100 "switch_util.m"
  MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_0_7,
#line 1100 "switch_util.m"
  MR_Box * backend_libs__switch_util__STATE_VARIABLE_StateC_8,
#line 1100 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9,
#line 1100 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10)
#line 1100 "switch_util.m"
{
#line 1106 "switch_util.m"
  {
#line 1106 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 1106 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1106 "switch_util.m"
      {
#line 1106 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10 = backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9;
#line 1106 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_StateC_8 = backend_libs__switch_util__STATE_VARIABLE_StateC_0_7;
#line 1106 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_StateB_6 = backend_libs__switch_util__STATE_VARIABLE_StateB_0_5;
#line 1106 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_StateA_4 = backend_libs__switch_util__STATE_VARIABLE_StateA_0_3;
#line 1106 "switch_util.m"
      }
#line 1106 "switch_util.m"
    else
#line 1108 "switch_util.m"
      {
#line 1108 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_64_64;
#line 1108 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_66_66;
#line 1108 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCase_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1108 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCases_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1108 "switch_util.m"
        MR_Box backend_libs__switch_util__CaseRep_31;
#line 1108 "switch_util.m"
        MR_Word backend_libs__switch_util__MainTaggedConsId_32;
#line 1108 "switch_util.m"
        MR_Word backend_libs__switch_util__OtherTaggedConsIds_33;
#line 1108 "switch_util.m"
        MR_Box backend_libs__switch_util__STATE_VARIABLE_StateA_44_44;
#line 1108 "switch_util.m"
        MR_Box backend_libs__switch_util__STATE_VARIABLE_StateB_45_45;
#line 1108 "switch_util.m"
        MR_Box backend_libs__switch_util__STATE_VARIABLE_StateC_46_46;
#line 1108 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_47_47;
#line 1108 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_51_51;
#line 1108 "switch_util.m"
        MR_Word backend_libs__switch_util__V_52_52;
#line 1111 "switch_util.m"
        void MR_CALL (* backend_libs__switch_util__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 1112 "switch_util.m"
        MR_Word backend_libs__switch_util__V_34_34;
#line 1112 "switch_util.m"
        MR_Word backend_libs__switch_util__V_35_35;
#line 1114 "switch_util.m"
        MR_Box backend_libs__switch_util__conv2_STATE_VARIABLE_UnsortedTable_10;

#line 1109 "switch_util.m"
        {
#line 1109 "switch_util.m"
          backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_54, backend_libs__switch_util__TaggedCases_25, backend_libs__switch_util__RepresentCase_2, backend_libs__switch_util__STATE_VARIABLE_StateA_0_3, &backend_libs__switch_util__STATE_VARIABLE_StateA_44_44, backend_libs__switch_util__STATE_VARIABLE_StateB_0_5, &backend_libs__switch_util__STATE_VARIABLE_StateB_45_45, backend_libs__switch_util__STATE_VARIABLE_StateC_0_7, &backend_libs__switch_util__STATE_VARIABLE_StateC_46_46, backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_9, &backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_47_47);
        }
#line 1111 "switch_util.m"
        backend_libs__switch_util__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RepresentCase_2, (MR_Integer) 1)));
#line 1111 "switch_util.m"
        {
#line 1111 "switch_util.m"
          backend_libs__switch_util__func_0(((MR_Box) backend_libs__switch_util__RepresentCase_2), ((MR_Box) (backend_libs__switch_util__TaggedCase_24)), &backend_libs__switch_util__CaseRep_31, backend_libs__switch_util__STATE_VARIABLE_StateA_44_44, backend_libs__switch_util__STATE_VARIABLE_StateA_4, backend_libs__switch_util__STATE_VARIABLE_StateB_45_45, backend_libs__switch_util__STATE_VARIABLE_StateB_6, backend_libs__switch_util__STATE_VARIABLE_StateC_46_46, backend_libs__switch_util__STATE_VARIABLE_StateC_8);
        }
#line 1112 "switch_util.m"
        backend_libs__switch_util__MainTaggedConsId_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 0)));
#line 1112 "switch_util.m"
        backend_libs__switch_util__OtherTaggedConsIds_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 1)));
#line 1112 "switch_util.m"
        backend_libs__switch_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 2)));
#line 1112 "switch_util.m"
        backend_libs__switch_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_24, (MR_Integer) 3)));
#line 1113 "switch_util.m"
        {
#line 1113 "switch_util.m"
          backend_libs__switch_util__add_string_binary_entry_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_54, backend_libs__switch_util__CaseRep_31, backend_libs__switch_util__MainTaggedConsId_32, backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_47_47, &backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_51_51);
        }
#line 1114 "switch_util.m"
        {
#line 1114 "switch_util.m"
          backend_libs__switch_util__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1114 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_5[1]));
#line 1114 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0_1));
#line 1114 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1114 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_54));
#line 1114 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_52_52, 4) = backend_libs__switch_util__CaseRep_31;
#line 1114 "switch_util.m"
        }
#line 4889 "backend_libs.switch_util.c"
        {
#line 4891 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 4893 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_64_64, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 4895 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_64_64, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 4897 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_64_64, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_54));
#line 4899 "backend_libs.switch_util.c"
        }
#line 4901 "backend_libs.switch_util.c"
        {
#line 4903 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4905 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_66_66, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 4907 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_66_66, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_64_64));
#line 4909 "backend_libs.switch_util.c"
        }
#line 1114 "switch_util.m"
        {
#line 1114 "switch_util.m"
          mercury__list__foldl_4_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__TypeInfo_66_66, backend_libs__switch_util__V_52_52, backend_libs__switch_util__OtherTaggedConsIds_33, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_51_51)), &backend_libs__switch_util__conv2_STATE_VARIABLE_UnsortedTable_10);
        }
#line 1114 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_10 = ((MR_Word) backend_libs__switch_util__conv2_STATE_VARIABLE_UnsortedTable_10);
#line 1108 "switch_util.m"
      }
#line 1106 "switch_util.m"
  }
#line 1100 "switch_util.m"
}

#line 789 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_115_111_108_110_95_99_111_110_115_116_115_95_116_111_95_111_110_101_95_115_111_108_110_95_95_91_49_44_32_51_93_95_48_3_p_0(
#line 789 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_8,
#line 789 "switch_util.m"
  MR_Word backend_libs__switch_util__Solns_5,
#line 789 "switch_util.m"
  MR_Word * backend_libs__switch_util__Values_6)
#line 789 "switch_util.m"
{
#line 793 "switch_util.m"
  {
#line 793 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__Solns_5)) == (MR_mktag((MR_Integer) 0)));

#line 793 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 793 "switch_util.m"
      *backend_libs__switch_util__Values_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Solns_5, (MR_Integer) 0)));
#line 793 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 793 "switch_util.m"
  }
#line 789 "switch_util.m"
}

#line 452 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0_1(
#line 452 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 452 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 452 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 452 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 452 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 452 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 452 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_6,
#line 452 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_7,
#line 452 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_8,
#line 452 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_9,
#line 452 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_10)
#line 452 "switch_util.m"
{
#line 452 "switch_util.m"
  {
#line 452 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 452 "switch_util.m"
    MR_Word backend_libs__switch_util__conv4_TaggedConsId_14;
#line 452 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22;
#line 452 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24;
#line 452 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26;
#line 452 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28;

#line 452 "switch_util.m"
    {
#line 452 "switch_util.m"
      backend_libs__switch_util__tag_cons_id_in_int_switch_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv4_TaggedConsId_14, ((MR_Integer) backend_libs__switch_util__wrapper_arg_3), &backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22, ((MR_Integer) backend_libs__switch_util__wrapper_arg_5), &backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24, ((MR_Integer) backend_libs__switch_util__wrapper_arg_7), &backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26, ((MR_Word) backend_libs__switch_util__wrapper_arg_9), &backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28);
    }
#line 452 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv4_TaggedConsId_14));
#line 452 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_4 = ((MR_Box) (backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22));
#line 452 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_6 = ((MR_Box) (backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24));
#line 452 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_8 = ((MR_Box) (backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26));
#line 452 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_10 = ((MR_Box) (backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28));
#line 452 "switch_util.m"
  }
#line 452 "switch_util.m"
}

#line 440 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0(
#line 440 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_1,
#line 440 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_3,
#line 440 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 440 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__5_5,
#line 440 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_6,
#line 440 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LowerLimit_7,
#line 440 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_8,
#line 440 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_UpperLimit_9,
#line 440 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_0_10,
#line 440 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumValues_11,
#line 440 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_12,
#line 440 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_13)
#line 440 "switch_util.m"
{
#line 444 "switch_util.m"
  {
#line 444 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 444 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 444 "switch_util.m"
      {
#line 444 "switch_util.m"
        *backend_libs__switch_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 445 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_13 = backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_12;
#line 445 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumValues_11 = backend_libs__switch_util__STATE_VARIABLE_NumValues_0_10;
#line 444 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_UpperLimit_9 = backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_8;
#line 444 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_LowerLimit_7 = backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_6;
#line 444 "switch_util.m"
      }
#line 444 "switch_util.m"
    else
#line 448 "switch_util.m"
      {
#line 448 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_81_81;
#line 448 "switch_util.m"
        MR_Word backend_libs__switch_util__Case_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__4_4, (MR_Integer) 0)));
#line 448 "switch_util.m"
        MR_Word backend_libs__switch_util__Cases_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__4_4, (MR_Integer) 1)));
#line 448 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCase_34;
#line 448 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCases_35;
#line 448 "switch_util.m"
        MR_Word backend_libs__switch_util__MainConsId_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_32, (MR_Integer) 0)));
#line 448 "switch_util.m"
        MR_Word backend_libs__switch_util__OtherConsIds_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_32, (MR_Integer) 1)));
#line 448 "switch_util.m"
        MR_Word backend_libs__switch_util__Goal_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_32, (MR_Integer) 2)));
#line 448 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedMainConsId_43;
#line 448 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedOtherConsIds_44;
#line 448 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_53_53;
#line 448 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_54_54;
#line 448 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_55_55;
#line 448 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_56_56;
#line 448 "switch_util.m"
        MR_Word backend_libs__switch_util__V_57_57;
#line 448 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_58_58;
#line 448 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_59_59;
#line 448 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_60_60;
#line 448 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_61_61;
#line 448 "switch_util.m"
        MR_Word backend_libs__switch_util__V_62_62;
#line 448 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_63_63;
#line 452 "switch_util.m"
        MR_Box backend_libs__switch_util__conv8_STATE_VARIABLE_LowerLimit_58_58;
#line 452 "switch_util.m"
        MR_Box backend_libs__switch_util__conv7_STATE_VARIABLE_UpperLimit_59_59;
#line 452 "switch_util.m"
        MR_Box backend_libs__switch_util__conv6_STATE_VARIABLE_NumValues_60_60;
#line 452 "switch_util.m"
        MR_Box backend_libs__switch_util__conv5_STATE_VARIABLE_IsIntSwitch_61_61;

#line 450 "switch_util.m"
        {
#line 450 "switch_util.m"
          backend_libs__switch_util__tag_cons_id_in_int_switch_11_p_0(backend_libs__switch_util__ModuleInfo_1, backend_libs__switch_util__MainConsId_40, &backend_libs__switch_util__TaggedMainConsId_43, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_6, &backend_libs__switch_util__STATE_VARIABLE_LowerLimit_53_53, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_8, &backend_libs__switch_util__STATE_VARIABLE_UpperLimit_54_54, backend_libs__switch_util__STATE_VARIABLE_NumValues_0_10, &backend_libs__switch_util__STATE_VARIABLE_NumValues_55_55, backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_12, &backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_56_56);
        }
#line 452 "switch_util.m"
        {
#line 452 "switch_util.m"
          backend_libs__switch_util__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 452 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_9[0]));
#line 452 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0_1));
#line 452 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 452 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_57_57, 3) = ((MR_Box) (backend_libs__switch_util__ModuleInfo_1));
#line 452 "switch_util.m"
        }
#line 5138 "backend_libs.switch_util.c"
        backend_libs__switch_util__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 452 "switch_util.m"
        {
#line 452 "switch_util.m"
          mercury__list__map_foldl4_11_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__TypeCtorInfo_81_81, backend_libs__switch_util__TypeCtorInfo_81_81, backend_libs__switch_util__TypeCtorInfo_81_81, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_is_int_switch_0, backend_libs__switch_util__V_57_57, backend_libs__switch_util__OtherConsIds_41, &backend_libs__switch_util__TaggedOtherConsIds_44, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_LowerLimit_53_53)), &backend_libs__switch_util__conv8_STATE_VARIABLE_LowerLimit_58_58, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_UpperLimit_54_54)), &backend_libs__switch_util__conv7_STATE_VARIABLE_UpperLimit_59_59, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_NumValues_55_55)), &backend_libs__switch_util__conv6_STATE_VARIABLE_NumValues_60_60, ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_56_56)), &backend_libs__switch_util__conv5_STATE_VARIABLE_IsIntSwitch_61_61);
        }
#line 452 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_LowerLimit_58_58 = ((MR_Integer) backend_libs__switch_util__conv8_STATE_VARIABLE_LowerLimit_58_58);
#line 452 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_UpperLimit_59_59 = ((MR_Integer) backend_libs__switch_util__conv7_STATE_VARIABLE_UpperLimit_59_59);
#line 452 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_NumValues_60_60 = ((MR_Integer) backend_libs__switch_util__conv6_STATE_VARIABLE_NumValues_60_60);
#line 452 "switch_util.m"
        backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_61_61 = ((MR_Word) backend_libs__switch_util__conv5_STATE_VARIABLE_IsIntSwitch_61_61);
#line 456 "switch_util.m"
        backend_libs__switch_util__V_62_62 = (MR_Word) backend_libs__switch_util__CaseNum_3;
#line 455 "switch_util.m"
        {
#line 455 "switch_util.m"
          backend_libs__switch_util__TaggedCase_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 455 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 0) = ((MR_Box) (backend_libs__switch_util__TaggedMainConsId_43));
#line 455 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 1) = ((MR_Box) (backend_libs__switch_util__TaggedOtherConsIds_44));
#line 455 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 2) = ((MR_Box) (backend_libs__switch_util__V_62_62));
#line 455 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_34, 3) = ((MR_Box) (backend_libs__switch_util__Goal_42));
#line 455 "switch_util.m"
        }
#line 457 "switch_util.m"
        backend_libs__switch_util__V_63_63 = (backend_libs__switch_util__CaseNum_3 + (MR_Integer) 1);
#line 457 "switch_util.m"
        {
#line 457 "switch_util.m"
          backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0(backend_libs__switch_util__ModuleInfo_1, backend_libs__switch_util__V_63_63, backend_libs__switch_util__Cases_33, &backend_libs__switch_util__TaggedCases_35, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_58_58, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_7, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_59_59, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_9, backend_libs__switch_util__STATE_VARIABLE_NumValues_60_60, backend_libs__switch_util__STATE_VARIABLE_NumValues_11, backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_61_61, backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_13);
        }
#line 447 "switch_util.m"
        {
#line 447 "switch_util.m"
          MR_Word base;
#line 447 "switch_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "switch_util.m"
          *backend_libs__switch_util__HeadVar__5_5 = base;
#line 447 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__TaggedCase_34));
#line 447 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__TaggedCases_35));
#line 447 "switch_util.m"
        }
#line 448 "switch_util.m"
      }
#line 444 "switch_util.m"
  }
#line 440 "switch_util.m"
}

#line 434 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0_1(
#line 434 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 434 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 434 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2)
#line 434 "switch_util.m"
{
#line 434 "switch_util.m"
  {
#line 434 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 434 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_TaggedConsId_6;

#line 434 "switch_util.m"
    {
#line 434 "switch_util.m"
      backend_libs__switch_util__tag_cons_id_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv0_TaggedConsId_6);
    }
#line 434 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv0_TaggedConsId_6));
#line 434 "switch_util.m"
  }
#line 434 "switch_util.m"
}

#line 426 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(
#line 426 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_1,
#line 426 "switch_util.m"
  MR_Integer backend_libs__switch_util__CaseNum_3,
#line 426 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 426 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__5_5)
#line 426 "switch_util.m"
{
#line 429 "switch_util.m"
  {
#line 429 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 429 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 429 "switch_util.m"
      *backend_libs__switch_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "switch_util.m"
    else
#line 431 "switch_util.m"
      {
#line 431 "switch_util.m"
        MR_Word backend_libs__switch_util__Case_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__4_4, (MR_Integer) 0)));
#line 431 "switch_util.m"
        MR_Word backend_libs__switch_util__Cases_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__4_4, (MR_Integer) 1)));
#line 431 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCase_14;
#line 431 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCases_15;
#line 431 "switch_util.m"
        MR_Word backend_libs__switch_util__MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_12, (MR_Integer) 0)));
#line 431 "switch_util.m"
        MR_Word backend_libs__switch_util__OtherConsIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_12, (MR_Integer) 1)));
#line 431 "switch_util.m"
        MR_Word backend_libs__switch_util__Goal_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_12, (MR_Integer) 2)));
#line 431 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedMainConsId_19;
#line 431 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedOtherConsIds_20;
#line 431 "switch_util.m"
        MR_Word backend_libs__switch_util__V_21_21;
#line 431 "switch_util.m"
        MR_Word backend_libs__switch_util__V_22_22;
#line 431 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_23_23;
#line 431 "switch_util.m"
        MR_Word backend_libs__switch_util__ConsTag_32;

#line 464 "switch_util.m"
        {
#line 464 "switch_util.m"
          backend_libs__switch_util__ConsTag_32 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(backend_libs__switch_util__ModuleInfo_1, backend_libs__switch_util__MainConsId_16);
        }
#line 465 "switch_util.m"
        {
#line 465 "switch_util.m"
          backend_libs__switch_util__TaggedMainConsId_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 465 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedMainConsId_19, 0) = ((MR_Box) (backend_libs__switch_util__MainConsId_16));
#line 465 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedMainConsId_19, 1) = ((MR_Box) (backend_libs__switch_util__ConsTag_32));
#line 465 "switch_util.m"
        }
#line 434 "switch_util.m"
        {
#line 434 "switch_util.m"
          backend_libs__switch_util__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 434 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_21_21, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_7[2]));
#line 434 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_21_21, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0_1));
#line 434 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 434 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_21_21, 3) = ((MR_Box) (backend_libs__switch_util__ModuleInfo_1));
#line 434 "switch_util.m"
        }
#line 434 "switch_util.m"
        {
#line 434 "switch_util.m"
          mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__V_21_21, backend_libs__switch_util__OtherConsIds_17, &backend_libs__switch_util__TaggedOtherConsIds_20);
        }
#line 436 "switch_util.m"
        backend_libs__switch_util__V_22_22 = (MR_Word) backend_libs__switch_util__CaseNum_3;
#line 435 "switch_util.m"
        {
#line 435 "switch_util.m"
          backend_libs__switch_util__TaggedCase_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 435 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 0) = ((MR_Box) (backend_libs__switch_util__TaggedMainConsId_19));
#line 435 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 1) = ((MR_Box) (backend_libs__switch_util__TaggedOtherConsIds_20));
#line 435 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 2) = ((MR_Box) (backend_libs__switch_util__V_22_22));
#line 435 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_14, 3) = ((MR_Box) (backend_libs__switch_util__Goal_18));
#line 435 "switch_util.m"
        }
#line 437 "switch_util.m"
        backend_libs__switch_util__V_23_23 = (backend_libs__switch_util__CaseNum_3 + (MR_Integer) 1);
#line 437 "switch_util.m"
        {
#line 437 "switch_util.m"
          backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(backend_libs__switch_util__ModuleInfo_1, backend_libs__switch_util__V_23_23, backend_libs__switch_util__Cases_13, &backend_libs__switch_util__TaggedCases_15);
        }
#line 431 "switch_util.m"
        {
#line 431 "switch_util.m"
          MR_Word base;
#line 431 "switch_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "switch_util.m"
          *backend_libs__switch_util__HeadVar__5_5 = base;
#line 431 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__TaggedCase_14));
#line 431 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__TaggedCases_15));
#line 431 "switch_util.m"
        }
#line 431 "switch_util.m"
      }
#line 429 "switch_util.m"
  }
#line 426 "switch_util.m"
}

#line 419 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_2(
#line 419 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 419 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 419 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2)
#line 419 "switch_util.m"
{
#line 419 "switch_util.m"
  {
#line 419 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 419 "switch_util.m"
    MR_Word backend_libs__switch_util__conv9_TaggedConsId_6;

#line 419 "switch_util.m"
    {
#line 419 "switch_util.m"
      backend_libs__switch_util__tag_cons_id_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv9_TaggedConsId_6);
    }
#line 419 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv9_TaggedConsId_6));
#line 419 "switch_util.m"
  }
#line 419 "switch_util.m"
}

#line 400 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_1(
#line 400 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 400 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 400 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2,
#line 400 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_3,
#line 400 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_4,
#line 400 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_5,
#line 400 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_6,
#line 400 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_7,
#line 400 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_8,
#line 400 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_9,
#line 400 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_10)
#line 400 "switch_util.m"
{
#line 400 "switch_util.m"
  {
#line 400 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 400 "switch_util.m"
    MR_Word backend_libs__switch_util__conv4_TaggedConsId_14;
#line 400 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22;
#line 400 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24;
#line 400 "switch_util.m"
    MR_Integer backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26;
#line 400 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28;

#line 400 "switch_util.m"
    {
#line 400 "switch_util.m"
      backend_libs__switch_util__tag_cons_id_in_int_switch_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv4_TaggedConsId_14, ((MR_Integer) backend_libs__switch_util__wrapper_arg_3), &backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22, ((MR_Integer) backend_libs__switch_util__wrapper_arg_5), &backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24, ((MR_Integer) backend_libs__switch_util__wrapper_arg_7), &backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26, ((MR_Word) backend_libs__switch_util__wrapper_arg_9), &backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28);
    }
#line 400 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv4_TaggedConsId_14));
#line 400 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_4 = ((MR_Box) (backend_libs__switch_util__conv3_STATE_VARIABLE_LowerLimit_22));
#line 400 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_6 = ((MR_Box) (backend_libs__switch_util__conv2_STATE_VARIABLE_UpperLimit_24));
#line 400 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_8 = ((MR_Box) (backend_libs__switch_util__conv1_STATE_VARIABLE_NumValues_26));
#line 400 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_10 = ((MR_Box) (backend_libs__switch_util__conv0_STATE_VARIABLE_IsIntSwitch_28));
#line 400 "switch_util.m"
  }
#line 400 "switch_util.m"
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
#line 392 "switch_util.m"
  {
#line 392 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 392 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "switch_util.m"
      {
#line 392 "switch_util.m"
        *backend_libs__switch_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 393 "switch_util.m"
        {
#line 393 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.tag_cases\'/5", (MR_String) "no cases");
#line 393 "switch_util.m"
          return;
        }
#line 392 "switch_util.m"
      }
#line 392 "switch_util.m"
    else
#line 395 "switch_util.m"
      {
#line 395 "switch_util.m"
        MR_Word backend_libs__switch_util__Case_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 395 "switch_util.m"
        MR_Word backend_libs__switch_util__Cases_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 395 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCase_16;
#line 395 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedCases_17;
#line 395 "switch_util.m"
        MR_Word backend_libs__switch_util__MainConsId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_14, (MR_Integer) 0)));
#line 395 "switch_util.m"
        MR_Word backend_libs__switch_util__OtherConsIds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_14, (MR_Integer) 1)));
#line 395 "switch_util.m"
        MR_Word backend_libs__switch_util__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_14, (MR_Integer) 2)));
#line 395 "switch_util.m"
        MR_Word backend_libs__switch_util__MainConsTag_22;
#line 395 "switch_util.m"
        MR_Word backend_libs__switch_util__TaggedMainConsId_23;
#line 418 "switch_util.m"
        MR_Integer backend_libs__switch_util__IntTag_24;

#line 397 "switch_util.m"
        {
#line 397 "switch_util.m"
          backend_libs__switch_util__MainConsTag_22 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__MainConsId_19);
        }
#line 398 "switch_util.m"
        {
#line 398 "switch_util.m"
          backend_libs__switch_util__TaggedMainConsId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 398 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedMainConsId_23, 0) = ((MR_Box) (backend_libs__switch_util__MainConsId_19));
#line 398 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedMainConsId_23, 1) = ((MR_Box) (backend_libs__switch_util__MainConsTag_22));
#line 398 "switch_util.m"
        }
#line 399 "switch_util.m"
        backend_libs__switch_util__succeeded = ((((MR_tag((MR_Word) backend_libs__switch_util__MainConsTag_22)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__MainConsTag_22, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 399 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 399 "switch_util.m"
          {
#line 399 "switch_util.m"
            backend_libs__switch_util__IntTag_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__MainConsTag_22, (MR_Integer) 1)));
#line 403 "switch_util.m"
            {
#line 403 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeCtorInfo_58_58;
#line 403 "switch_util.m"
              MR_Word backend_libs__switch_util__TaggedOtherConsIds_25;
#line 403 "switch_util.m"
              MR_Integer backend_libs__switch_util__LowerLimit1_26;
#line 403 "switch_util.m"
              MR_Integer backend_libs__switch_util__UpperLimit1_27;
#line 403 "switch_util.m"
              MR_Integer backend_libs__switch_util__NumValues1_28;
#line 403 "switch_util.m"
              MR_Word backend_libs__switch_util__IsIntSwitch1_29;
#line 403 "switch_util.m"
              MR_Integer backend_libs__switch_util__LowerLimit_30;
#line 403 "switch_util.m"
              MR_Integer backend_libs__switch_util__UpperLimit_31;
#line 403 "switch_util.m"
              MR_Integer backend_libs__switch_util__NumValues_32;
#line 403 "switch_util.m"
              MR_Word backend_libs__switch_util__IsIntSwitch_33;
#line 403 "switch_util.m"
              MR_Word backend_libs__switch_util__V_34_34;
#line 400 "switch_util.m"
              MR_Box backend_libs__switch_util__conv8_LowerLimit1_26;
#line 400 "switch_util.m"
              MR_Box backend_libs__switch_util__conv7_UpperLimit1_27;
#line 400 "switch_util.m"
              MR_Box backend_libs__switch_util__conv6_NumValues1_28;
#line 400 "switch_util.m"
              MR_Box backend_libs__switch_util__conv5_IsIntSwitch1_29;

#line 400 "switch_util.m"
              {
#line 400 "switch_util.m"
                backend_libs__switch_util__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 400 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_9[0]));
#line 400 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_1));
#line 400 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 400 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_34_34, 3) = ((MR_Box) (backend_libs__switch_util__HeadVar__1_1));
#line 400 "switch_util.m"
              }
#line 5578 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeCtorInfo_58_58 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 400 "switch_util.m"
              {
#line 400 "switch_util.m"
                mercury__list__map_foldl4_11_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__TypeCtorInfo_58_58, backend_libs__switch_util__TypeCtorInfo_58_58, backend_libs__switch_util__TypeCtorInfo_58_58, (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_is_int_switch_0, backend_libs__switch_util__V_34_34, backend_libs__switch_util__OtherConsIds_20, &backend_libs__switch_util__TaggedOtherConsIds_25, ((MR_Box) (backend_libs__switch_util__IntTag_24)), &backend_libs__switch_util__conv8_LowerLimit1_26, ((MR_Box) (backend_libs__switch_util__IntTag_24)), &backend_libs__switch_util__conv7_UpperLimit1_27, ((MR_Box) ((MR_Integer) 1)), &backend_libs__switch_util__conv6_NumValues1_28, ((MR_Box) ((MR_Integer) 0)), &backend_libs__switch_util__conv5_IsIntSwitch1_29);
              }
#line 400 "switch_util.m"
              backend_libs__switch_util__LowerLimit1_26 = ((MR_Integer) backend_libs__switch_util__conv8_LowerLimit1_26);
#line 400 "switch_util.m"
              backend_libs__switch_util__UpperLimit1_27 = ((MR_Integer) backend_libs__switch_util__conv7_UpperLimit1_27);
#line 400 "switch_util.m"
              backend_libs__switch_util__NumValues1_28 = ((MR_Integer) backend_libs__switch_util__conv6_NumValues1_28);
#line 400 "switch_util.m"
              backend_libs__switch_util__IsIntSwitch1_29 = ((MR_Word) backend_libs__switch_util__conv5_IsIntSwitch1_29);
#line 404 "switch_util.m"
              {
#line 404 "switch_util.m"
                backend_libs__switch_util__TaggedCase_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 404 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 0) = ((MR_Box) (backend_libs__switch_util__TaggedMainConsId_23));
#line 404 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 1) = ((MR_Box) (backend_libs__switch_util__TaggedOtherConsIds_25));
#line 404 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 2) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
#line 404 "switch_util.m"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 3) = ((MR_Box) (backend_libs__switch_util__Goal_21));
#line 404 "switch_util.m"
              }
#line 406 "switch_util.m"
              {
#line 406 "switch_util.m"
                backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_105_110_95_105_110_116_95_115_119_105_116_99_104_95_95_91_50_93_95_48_13_p_0(backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1, backend_libs__switch_util__Cases_15, &backend_libs__switch_util__TaggedCases_17, backend_libs__switch_util__LowerLimit1_26, &backend_libs__switch_util__LowerLimit_30, backend_libs__switch_util__UpperLimit1_27, &backend_libs__switch_util__UpperLimit_31, backend_libs__switch_util__NumValues1_28, &backend_libs__switch_util__NumValues_32, backend_libs__switch_util__IsIntSwitch1_29, &backend_libs__switch_util__IsIntSwitch_33);
              }
#line 414 "switch_util.m"
#line 414 "switch_util.m"
              switch (backend_libs__switch_util__IsIntSwitch_33) {
#line 414 "switch_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 414 "switch_util.m"
                case (MR_Integer) 0:
#line 412 "switch_util.m"
                  {
#line 412 "switch_util.m"
                    MR_Word base;
#line 412 "switch_util.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 412 "switch_util.m"
                    *backend_libs__switch_util__MaybeIntSwitchLimits_5 = base;
#line 412 "switch_util.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__LowerLimit_30));
#line 412 "switch_util.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__UpperLimit_31));
#line 412 "switch_util.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (backend_libs__switch_util__NumValues_32));
#line 412 "switch_util.m"
                  }
#line 414 "switch_util.m"
                  break;
#line 414 "switch_util.m"
                case (MR_Integer) 1:
#line 416 "switch_util.m"
                  *backend_libs__switch_util__MaybeIntSwitchLimits_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 414 "switch_util.m"
                  break;
#line 414 "switch_util.m"
              }
#line 403 "switch_util.m"
            }
#line 399 "switch_util.m"
          }
#line 399 "switch_util.m"
        else
#line 419 "switch_util.m"
          {
#line 419 "switch_util.m"
            MR_Word backend_libs__switch_util__V_41_41;
#line 419 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedOtherConsIds_45;

#line 419 "switch_util.m"
            {
#line 419 "switch_util.m"
              backend_libs__switch_util__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 419 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_41_41, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_7[2]));
#line 419 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_41_41, 1) = ((MR_Box) (backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0_2));
#line 419 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 419 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_41_41, 3) = ((MR_Box) (backend_libs__switch_util__HeadVar__1_1));
#line 419 "switch_util.m"
            }
#line 419 "switch_util.m"
            {
#line 419 "switch_util.m"
              mercury__list__map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__V_41_41, backend_libs__switch_util__OtherConsIds_20, &backend_libs__switch_util__TaggedOtherConsIds_45);
            }
#line 420 "switch_util.m"
            {
#line 420 "switch_util.m"
              backend_libs__switch_util__TaggedCase_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 420 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 0) = ((MR_Box) (backend_libs__switch_util__TaggedMainConsId_23));
#line 420 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 1) = ((MR_Box) (backend_libs__switch_util__TaggedOtherConsIds_45));
#line 420 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 2) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
#line 420 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_16, 3) = ((MR_Box) (backend_libs__switch_util__Goal_21));
#line 420 "switch_util.m"
            }
#line 422 "switch_util.m"
            {
#line 422 "switch_util.m"
              backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_112_108_97_105_110_95_95_91_50_93_95_48_5_p_0(backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1, backend_libs__switch_util__Cases_15, &backend_libs__switch_util__TaggedCases_17);
            }
#line 423 "switch_util.m"
            *backend_libs__switch_util__MaybeIntSwitchLimits_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 419 "switch_util.m"
          }
#line 395 "switch_util.m"
        {
#line 395 "switch_util.m"
          MR_Word base;
#line 395 "switch_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "switch_util.m"
          *backend_libs__switch_util__HeadVar__4_4 = base;
#line 395 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__TaggedCase_16));
#line 395 "switch_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__TaggedCases_17));
#line 395 "switch_util.m"
        }
#line 395 "switch_util.m"
      }
#line 392 "switch_util.m"
  }
#line 62 "switch_util.m"
}

#line 1403 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__build_ptag_case_rev_map__1403__1_3_p_0(
#line 1403 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1403 "switch_util.m"
  MR_Word backend_libs__switch_util__Case_14,
#line 1403 "switch_util.m"
  MR_Word backend_libs__switch_util__OldCase_21)
#line 1403 "switch_util.m"
{
#line 1403 "switch_util.m"
  {
#line 1403 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 1403 "switch_util.m"
    {
#line 1403 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_42, backend_libs__switch_util__Case_14, backend_libs__switch_util__OldCase_21);
    }
#line 1403 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1403 "switch_util.m"
  }
#line 1403 "switch_util.m"
}

#line 1298 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1298__1_2_p_0(
#line 1298 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_21,
#line 1298 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_74)
#line 1298 "switch_util.m"
{
#line 1298 "switch_util.m"
  {
#line 1298 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__StagLoc_21 == backend_libs__switch_util__HeadVar__2_74);

#line 1298 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1298 "switch_util.m"
  }
#line 1298 "switch_util.m"
}

#line 1312 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1312__1_2_p_0(
#line 1312 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_63,
#line 1312 "switch_util.m"
  MR_Word backend_libs__switch_util__StagLoc_94)
#line 1312 "switch_util.m"
{
#line 1312 "switch_util.m"
  {
#line 1312 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__StagLoc_94 == backend_libs__switch_util__HeadVar__1_63);

#line 1312 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1312 "switch_util.m"
  }
#line 1312 "switch_util.m"
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
#line 5832 "backend_libs.switch_util.c"
  {
#line 5834 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 5837 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 5839 "backend_libs.switch_util.c"
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
#line 5885 "backend_libs.switch_util.c"
  {
#line 5887 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 5890 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 5892 "backend_libs.switch_util.c"
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
#line 5923 "backend_libs.switch_util.c"
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
#line 5949 "backend_libs.switch_util.c"
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
#line 5969 "backend_libs.switch_util.c"
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

#line 6038 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (strcmp(backend_libs__switch_util__V_3_3, backend_libs__switch_util__V_6_6) == 0);
#line 199 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 199 "switch_util.m"
          {
#line 6044 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_7_7);
#line 199 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 6048 "backend_libs.switch_util.c"
              {
#line 6050 "backend_libs.switch_util.c"
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

#line 6154 "backend_libs.switch_util.c"
    {
#line 6156 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6158 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6160 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 6162 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6164 "backend_libs.switch_util.c"
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

#line 6200 "backend_libs.switch_util.c"
    {
#line 6202 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 6204 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 6206 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0));
#line 6208 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6210 "backend_libs.switch_util.c"
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
#line 6250 "backend_libs.switch_util.c"
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
#line 6279 "backend_libs.switch_util.c"
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
#line 6294 "backend_libs.switch_util.c"
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
#line 6312 "backend_libs.switch_util.c"
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

#line 6327 "backend_libs.switch_util.c"
                {
#line 6329 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6331 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 6333 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_19));
#line 6335 "backend_libs.switch_util.c"
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
#line 6400 "backend_libs.switch_util.c"
            {
#line 6402 "backend_libs.switch_util.c"
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
#line 6436 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_14_14 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 6438 "backend_libs.switch_util.c"
            {
#line 6440 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6442 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_14_14));
#line 6444 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_11));
#line 6446 "backend_libs.switch_util.c"
            }
#line 6448 "backend_libs.switch_util.c"
            {
#line 6450 "backend_libs.switch_util.c"
              backend_libs__switch_util__succeeded = mercury__list____Unify____list_1_0(backend_libs__switch_util__TypeInfo_for_Rval_11, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_7_7);
            }
#line 148 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 6455 "backend_libs.switch_util.c"
              {
#line 6457 "backend_libs.switch_util.c"
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

#line 1370 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_entry_1_0(
#line 1370 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1370 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1370 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1370 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 1370 "switch_util.m"
{
#line 1370 "switch_util.m"
  {
#line 1370 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1370 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_15 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 1370 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_16 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 1370 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_15 == backend_libs__switch_util__CastY_16);
#line 1370 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 6559 "backend_libs.switch_util.c"
      *backend_libs__switch_util__HeadVar__1_1 = (MR_Integer) 0;
#line 1370 "switch_util.m"
    else
#line 1370 "switch_util.m"
      {
#line 1370 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1370 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1370 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1370 "switch_util.m"
        MR_Word backend_libs__switch_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 3)));
#line 1370 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 0)));
#line 1370 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 1)));
#line 1370 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 2)));
#line 1370 "switch_util.m"
        MR_Word backend_libs__switch_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__3_3, (MR_Integer) 3)));
#line 1370 "switch_util.m"
        MR_Word backend_libs__switch_util__V_12_12;

#line 1370 "switch_util.m"
        {
#line 1370 "switch_util.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_12_12, backend_libs__switch_util__V_4_4, backend_libs__switch_util__V_8_8);
        }
#line 6589 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_12_12 == (MR_Integer) 0);
#line 1370 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1370 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1370 "switch_util.m"
          *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_12_12;
#line 1370 "switch_util.m"
        else
#line 1370 "switch_util.m"
          {
#line 1370 "switch_util.m"
            MR_Word backend_libs__switch_util__V_13_13;

#line 1370 "switch_util.m"
            {
#line 1370 "switch_util.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__switch_util__V_13_13, backend_libs__switch_util__V_5_5, backend_libs__switch_util__V_9_9);
            }
#line 6609 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_13_13 == (MR_Integer) 0);
#line 1370 "switch_util.m"
            backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1370 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1370 "switch_util.m"
              *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_13_13;
#line 1370 "switch_util.m"
            else
#line 1370 "switch_util.m"
              {
#line 1370 "switch_util.m"
                MR_Word backend_libs__switch_util__V_14_14;

#line 1370 "switch_util.m"
                {
#line 1370 "switch_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[3], &backend_libs__switch_util__V_14_14, ((MR_Box) (backend_libs__switch_util__V_6_6)), ((MR_Box) (backend_libs__switch_util__V_10_10)));
                }
#line 6629 "backend_libs.switch_util.c"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_14_14 == (MR_Integer) 0);
#line 1370 "switch_util.m"
                backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1370 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 1370 "switch_util.m"
                  *backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__V_14_14;
#line 1370 "switch_util.m"
                else
#line 1370 "switch_util.m"
                  {
#line 1370 "switch_util.m"
                    backend_libs__switch_util____Compare____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_17, backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__V_7_7, backend_libs__switch_util__V_11_11);
#line 1370 "switch_util.m"
                    return;
                  }
#line 1370 "switch_util.m"
              }
#line 1370 "switch_util.m"
          }
#line 1370 "switch_util.m"
      }
#line 1370 "switch_util.m"
  }
#line 1370 "switch_util.m"
}

#line 1370 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_entry_1_0(
#line 1370 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_13,
#line 1370 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1370 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 1370 "switch_util.m"
{
#line 1370 "switch_util.m"
  {
#line 1370 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1370 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastX_11 = (MR_Integer) backend_libs__switch_util__HeadVar__1_1;
#line 1370 "switch_util.m"
    MR_Integer backend_libs__switch_util__CastY_12 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;

#line 1370 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__CastX_11 == backend_libs__switch_util__CastY_12);
#line 1370 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1370 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_TRUE;
#line 1370 "switch_util.m"
    else
#line 1370 "switch_util.m"
      {
#line 1370 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_14_14;
#line 1370 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1370 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1370 "switch_util.m"
        MR_Word backend_libs__switch_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 2)));
#line 1370 "switch_util.m"
        MR_Word backend_libs__switch_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 3)));
#line 1370 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1370 "switch_util.m"
        MR_Integer backend_libs__switch_util__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1370 "switch_util.m"
        MR_Word backend_libs__switch_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 2)));
#line 1370 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__HeadVar__2_2, (MR_Integer) 3)));

#line 6706 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_7_7);
#line 1370 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1370 "switch_util.m"
          {
#line 6712 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_8_8);
#line 1370 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1370 "switch_util.m"
              {
#line 6718 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_14_14 = (MR_Word) &backend_libs__switch_util_scalar_common_1[3];
#line 6720 "backend_libs.switch_util.c"
                {
#line 6722 "backend_libs.switch_util.c"
                  backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0(backend_libs__switch_util__TypeInfo_14_14, ((MR_Box) (backend_libs__switch_util__V_5_5)), ((MR_Box) (backend_libs__switch_util__V_9_9)));
                }
#line 1370 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 6727 "backend_libs.switch_util.c"
                  {
#line 6729 "backend_libs.switch_util.c"
                    return backend_libs__switch_util__succeeded = backend_libs__switch_util____Unify____ptag_case_1_0(backend_libs__switch_util__TypeInfo_for_CaseRep_13, backend_libs__switch_util__V_6_6, backend_libs__switch_util__V_10_10);
                  }
#line 1370 "switch_util.m"
              }
#line 1370 "switch_util.m"
          }
#line 1370 "switch_util.m"
      }
#line 1370 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1370 "switch_util.m"
  }
#line 1370 "switch_util.m"
}

#line 1385 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____ptag_case_rev_map_1_0(
#line 1385 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_6,
#line 1385 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 1385 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1385 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 1385 "switch_util.m"
{
#line 1385 "switch_util.m"
  {
#line 1385 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1385 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_8_8;
#line 1385 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_10_10;
#line 1385 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_4 = backend_libs__switch_util__HeadVar__2_2;
#line 1385 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_5 = backend_libs__switch_util__HeadVar__3_3;

#line 6771 "backend_libs.switch_util.c"
    {
#line 6773 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6775 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6777 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6779 "backend_libs.switch_util.c"
    }
#line 6781 "backend_libs.switch_util.c"
    {
#line 6783 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6785 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 6787 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_10_10, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6789 "backend_libs.switch_util.c"
    }
#line 1385 "switch_util.m"
    {
#line 1385 "switch_util.m"
      mercury__tree234____Compare____tree234_2_0(backend_libs__switch_util__TypeInfo_8_8, backend_libs__switch_util__TypeInfo_10_10, backend_libs__switch_util__HeadVar__1_1, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_4, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_5);
#line 1385 "switch_util.m"
      return;
    }
#line 1385 "switch_util.m"
  }
#line 1385 "switch_util.m"
}

#line 1385 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____ptag_case_rev_map_1_0(
#line 1385 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_5,
#line 1385 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1385 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 1385 "switch_util.m"
{
#line 1385 "switch_util.m"
  {
#line 1385 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1385 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_7_7;
#line 1385 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_9_9;
#line 1385 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar1_3 = backend_libs__switch_util__HeadVar__1_1;
#line 1385 "switch_util.m"
    MR_Word backend_libs__switch_util__Cast_HeadVar2_4 = backend_libs__switch_util__HeadVar__2_2;

#line 6827 "backend_libs.switch_util.c"
    {
#line 6829 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6831 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6833 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6835 "backend_libs.switch_util.c"
    }
#line 6837 "backend_libs.switch_util.c"
    {
#line 6839 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6841 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 6843 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6845 "backend_libs.switch_util.c"
    }
#line 1385 "switch_util.m"
    {
#line 1385 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__tree234____Unify____tree234_2_0(backend_libs__switch_util__TypeInfo_7_7, backend_libs__switch_util__TypeInfo_9_9, (MR_Word) backend_libs__switch_util__Cast_HeadVar1_3, (MR_Word) backend_libs__switch_util__Cast_HeadVar2_4);
    }
#line 1385 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1385 "switch_util.m"
  }
#line 1385 "switch_util.m"
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

#line 6883 "backend_libs.switch_util.c"
    {
#line 6885 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6887 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6889 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_9_9, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6891 "backend_libs.switch_util.c"
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

#line 6927 "backend_libs.switch_util.c"
    {
#line 6929 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6931 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 6933 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 6935 "backend_libs.switch_util.c"
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

#line 6973 "backend_libs.switch_util.c"
    {
#line 6975 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6977 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1));
#line 6979 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 6981 "backend_libs.switch_util.c"
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

#line 7017 "backend_libs.switch_util.c"
    {
#line 7019 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7021 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_entry_1));
#line 7023 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 7025 "backend_libs.switch_util.c"
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

#line 7063 "backend_libs.switch_util.c"
    {
#line 7065 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7067 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1));
#line 7069 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_8_8, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_6));
#line 7071 "backend_libs.switch_util.c"
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

#line 7107 "backend_libs.switch_util.c"
    {
#line 7109 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7111 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1));
#line 7113 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_7_7, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_5));
#line 7115 "backend_libs.switch_util.c"
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
#line 7155 "backend_libs.switch_util.c"
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
#line 7181 "backend_libs.switch_util.c"
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
              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[3], &backend_libs__switch_util__V_11_11, ((MR_Box) (backend_libs__switch_util__V_5_5)), ((MR_Box) (backend_libs__switch_util__V_8_8)));
            }
#line 7201 "backend_libs.switch_util.c"
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

#line 7272 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_6_6);
#line 274 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 274 "switch_util.m"
          {
#line 7278 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeInfo_12_12 = (MR_Word) &backend_libs__switch_util_scalar_common_1[3];
#line 7280 "backend_libs.switch_util.c"
            {
#line 7282 "backend_libs.switch_util.c"
              backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0(backend_libs__switch_util__TypeInfo_12_12, ((MR_Box) (backend_libs__switch_util__V_4_4)), ((MR_Box) (backend_libs__switch_util__V_7_7)));
            }
#line 274 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 7287 "backend_libs.switch_util.c"
              {
#line 7289 "backend_libs.switch_util.c"
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
#line 7329 "backend_libs.switch_util.c"
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
#line 7351 "backend_libs.switch_util.c"
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

#line 7414 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_5_5);
#line 260 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 7418 "backend_libs.switch_util.c"
          {
#line 7420 "backend_libs.switch_util.c"
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
#line 7458 "backend_libs.switch_util.c"
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
#line 7484 "backend_libs.switch_util.c"
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

#line 7553 "backend_libs.switch_util.c"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_5_5);
#line 289 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 289 "switch_util.m"
          {
#line 7559 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 7561 "backend_libs.switch_util.c"
            {
#line 7563 "backend_libs.switch_util.c"
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
#line 7618 "backend_libs.switch_util.c"
  {
#line 7620 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7623 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7625 "backend_libs.switch_util.c"
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
#line 7671 "backend_libs.switch_util.c"
  {
#line 7673 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7676 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7678 "backend_libs.switch_util.c"
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
#line 7707 "backend_libs.switch_util.c"
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
#line 7719 "backend_libs.switch_util.c"
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
#line 7734 "backend_libs.switch_util.c"
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
#line 7754 "backend_libs.switch_util.c"
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
#line 7774 "backend_libs.switch_util.c"
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
#line 7870 "backend_libs.switch_util.c"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_3_3 == backend_libs__switch_util__V_6_6);
#line 47 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 47 "switch_util.m"
              {
#line 7876 "backend_libs.switch_util.c"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_4_4 == backend_libs__switch_util__V_7_7);
#line 47 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 7880 "backend_libs.switch_util.c"
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
#line 7936 "backend_libs.switch_util.c"
  {
#line 7938 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7941 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7943 "backend_libs.switch_util.c"
  }
#line 94 "switch_util.m"
}

#line 388 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util____Compare____is_int_switch_0_0(
#line 388 "switch_util.m"
  MR_Word * backend_libs__switch_util__HeadVar__1_1,
#line 388 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 388 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__3_3)
#line 388 "switch_util.m"
{
#line 388 "switch_util.m"
  {
#line 388 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 388 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar1_4 = (MR_Integer) backend_libs__switch_util__HeadVar__2_2;
#line 388 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cast_HeadVar2_5 = (MR_Integer) backend_libs__switch_util__HeadVar__3_3;

#line 388 "switch_util.m"
    {
#line 388 "switch_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__Cast_HeadVar1_4, backend_libs__switch_util__Cast_HeadVar2_5);
#line 388 "switch_util.m"
      return;
    }
#line 388 "switch_util.m"
  }
#line 388 "switch_util.m"
}

#line 388 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util____Unify____is_int_switch_0_0(
#line 388 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_1,
#line 388 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2)
#line 388 "switch_util.m"
{
#line 7989 "backend_libs.switch_util.c"
  {
#line 7991 "backend_libs.switch_util.c"
    MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__HeadVar__2_1 == backend_libs__switch_util__HeadVar__2_2);

#line 7994 "backend_libs.switch_util.c"
    return backend_libs__switch_util__succeeded;
#line 7996 "backend_libs.switch_util.c"
  }
#line 388 "switch_util.m"
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
#line 8087 "backend_libs.switch_util.c"
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
          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[2], &backend_libs__switch_util__V_8_8, ((MR_Box) (backend_libs__switch_util__V_4_4)), ((MR_Box) (backend_libs__switch_util__V_6_6)));
        }
#line 8109 "backend_libs.switch_util.c"
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

#line 8179 "backend_libs.switch_util.c"
        {
#line 8181 "backend_libs.switch_util.c"
          backend_libs__switch_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &backend_libs__switch_util_scalar_common_1[2], ((MR_Box) (backend_libs__switch_util__V_3_3)), ((MR_Box) (backend_libs__switch_util__V_5_5)));
        }
#line 137 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 8186 "backend_libs.switch_util.c"
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
#line 8227 "backend_libs.switch_util.c"
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

#line 8247 "backend_libs.switch_util.c"
            {
#line 8249 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8251 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_27_27, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 8253 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_27_27, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_20));
#line 8255 "backend_libs.switch_util.c"
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
#line 8268 "backend_libs.switch_util.c"
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
#line 8283 "backend_libs.switch_util.c"
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

#line 8298 "backend_libs.switch_util.c"
            {
#line 8300 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8302 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1));
#line 8304 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_20));
#line 8306 "backend_libs.switch_util.c"
            }
#line 128 "switch_util.m"
            {
#line 128 "switch_util.m"
              mercury__tree234____Compare____tree234_2_0(backend_libs__switch_util__TypeInfo_for_Key_19, backend_libs__switch_util__TypeInfo_23_23, &backend_libs__switch_util__V_16_16, (MR_Word) backend_libs__switch_util__V_32_32, (MR_Word) backend_libs__switch_util__V_14_14);
            }
#line 8313 "backend_libs.switch_util.c"
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
#line 8392 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_14_14 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 8394 "backend_libs.switch_util.c"
            {
#line 8396 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8398 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_14_14));
#line 8400 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_12));
#line 8402 "backend_libs.switch_util.c"
            }
#line 8404 "backend_libs.switch_util.c"
            {
#line 8406 "backend_libs.switch_util.c"
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
#line 8440 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_18_18 = (MR_Word) &backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1;
#line 8442 "backend_libs.switch_util.c"
            {
#line 8444 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8446 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_19_19, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_18_18));
#line 8448 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_19_19, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_12));
#line 8450 "backend_libs.switch_util.c"
            }
#line 8452 "backend_libs.switch_util.c"
            {
#line 8454 "backend_libs.switch_util.c"
              backend_libs__switch_util__succeeded = mercury__tree234____Unify____tree234_2_0(backend_libs__switch_util__TypeInfo_for_Key_11, backend_libs__switch_util__TypeInfo_19_19, (MR_Word) backend_libs__switch_util__V_5_5, (MR_Word) backend_libs__switch_util__V_7_7);
            }
#line 128 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 8459 "backend_libs.switch_util.c"
              {
#line 8461 "backend_libs.switch_util.c"
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

#line 1403 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0_1(
#line 1403 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1403 "switch_util.m"
{
#line 1403 "switch_util.m"
  {
#line 1403 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1403 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1403 "switch_util.m"
    {
#line 1403 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util__IntroducedFrom__pred__build_ptag_case_rev_map__1403__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 5))));
    }
#line 1403 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1403 "switch_util.m"
  }
#line 1403 "switch_util.m"
}

#line 1388 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__build_ptag_case_rev_map_4_p_0(
#line 1388 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_42,
#line 1388 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1388 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__2_2,
#line 1388 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3,
#line 1388 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevMap_4)
#line 1388 "switch_util.m"
{
#line 1392 "switch_util.m"
  while (MR_TRUE)
#line 1392 "switch_util.m"
    {
#line 1392 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1392 "switch_util.m"
      {
#line 1392 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 1392 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1392 "switch_util.m"
          *backend_libs__switch_util__STATE_VARIABLE_RevMap_4 = backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3;
#line 1392 "switch_util.m"
        else
#line 1393 "switch_util.m"
          {
#line 1393 "switch_util.m"
            MR_Word backend_libs__switch_util__Entry_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1393 "switch_util.m"
            MR_Word backend_libs__switch_util__Entries_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1393 "switch_util.m"
            MR_Integer backend_libs__switch_util__Ptag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Entry_9, (MR_Integer) 0)));
#line 1393 "switch_util.m"
            MR_Word backend_libs__switch_util__Case_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Entry_9, (MR_Integer) 1)));
#line 1393 "switch_util.m"
            MR_Word backend_libs__switch_util__CountSecTagLocn_15;
#line 1393 "switch_util.m"
            MR_Integer backend_libs__switch_util__Count_16;
#line 1393 "switch_util.m"
            MR_Word backend_libs__switch_util__V_25_25;
#line 1393 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36;
#line 1395 "switch_util.m"
            MR_Box backend_libs__switch_util__conv0_V_25_25;

#line 1395 "switch_util.m"
            {
#line 1395 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__HeadVar__2_2, backend_libs__switch_util__Ptag_13, &backend_libs__switch_util__conv0_V_25_25);
            }
#line 1395 "switch_util.m"
            backend_libs__switch_util__V_25_25 = ((MR_Word) backend_libs__switch_util__conv0_V_25_25);
#line 1395 "switch_util.m"
            backend_libs__switch_util__CountSecTagLocn_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_25_25, (MR_Integer) 0)));
#line 1395 "switch_util.m"
            backend_libs__switch_util__Count_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_25_25, (MR_Integer) 1)));
#line 1411 "switch_util.m"
#line 1411 "switch_util.m"
            switch (backend_libs__switch_util__CountSecTagLocn_15) {
#line 1411 "switch_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1411 "switch_util.m"
              case (MR_Integer) 2:
#line 1411 "switch_util.m"
              case (MR_Integer) 3:
#line 1414 "switch_util.m"
                {
#line 1414 "switch_util.m"
                  MR_Word backend_libs__switch_util__TypeInfo_60_60;
#line 1414 "switch_util.m"
                  MR_Word backend_libs__switch_util__TypeInfo_62_62;
#line 1414 "switch_util.m"
                  MR_Word backend_libs__switch_util__NewEntry_41;
#line 1428 "switch_util.m"
                  MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_RevMap_36_36;

#line 1427 "switch_util.m"
                  {
#line 1427 "switch_util.m"
                    backend_libs__switch_util__NewEntry_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1427 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 0) = ((MR_Box) (backend_libs__switch_util__Count_16));
#line 1427 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 1) = ((MR_Box) (backend_libs__switch_util__Ptag_13));
#line 1427 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1427 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_41, 3) = ((MR_Box) (backend_libs__switch_util__Case_14));
#line 1427 "switch_util.m"
                  }
#line 8599 "backend_libs.switch_util.c"
                  {
#line 8601 "backend_libs.switch_util.c"
                    backend_libs__switch_util__TypeInfo_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8603 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_60_60, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8605 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_60_60, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8607 "backend_libs.switch_util.c"
                  }
#line 8609 "backend_libs.switch_util.c"
                  {
#line 8611 "backend_libs.switch_util.c"
                    backend_libs__switch_util__TypeInfo_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8613 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_62_62, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 8615 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_62_62, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8617 "backend_libs.switch_util.c"
                  }
#line 1428 "switch_util.m"
                  {
#line 1428 "switch_util.m"
                    mercury__map__det_insert_4_p_0(backend_libs__switch_util__TypeInfo_60_60, backend_libs__switch_util__TypeInfo_62_62, ((MR_Box) (backend_libs__switch_util__Case_14)), ((MR_Box) (backend_libs__switch_util__NewEntry_41)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, &backend_libs__switch_util__conv1_STATE_VARIABLE_RevMap_36_36);
                  }
#line 1428 "switch_util.m"
                  backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_RevMap_36_36;
#line 1414 "switch_util.m"
                }
#line 1411 "switch_util.m"
                break;
#line 1411 "switch_util.m"
              case (MR_Integer) 0:
#line 1411 "switch_util.m"
              case (MR_Integer) 1:
#line 1407 "switch_util.m"
                {
#line 1407 "switch_util.m"
                  MR_Word backend_libs__switch_util__TypeInfo_46_46;
#line 1407 "switch_util.m"
                  MR_Word backend_libs__switch_util__TypeInfo_48_48;
#line 1407 "switch_util.m"
                  MR_Word backend_libs__switch_util__OldEntry_17;
#line 1400 "switch_util.m"
                  MR_Box backend_libs__switch_util__conv2_OldEntry_17;

#line 8645 "backend_libs.switch_util.c"
                  {
#line 8647 "backend_libs.switch_util.c"
                    backend_libs__switch_util__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8649 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_46_46, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8651 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_46_46, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8653 "backend_libs.switch_util.c"
                  }
#line 8655 "backend_libs.switch_util.c"
                  {
#line 8657 "backend_libs.switch_util.c"
                    backend_libs__switch_util__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8659 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_48_48, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 8661 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_48_48, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8663 "backend_libs.switch_util.c"
                  }
#line 1400 "switch_util.m"
                  {
#line 1400 "switch_util.m"
                    backend_libs__switch_util__succeeded = mercury__map__search_3_p_0(backend_libs__switch_util__TypeInfo_46_46, backend_libs__switch_util__TypeInfo_48_48, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, ((MR_Box) (backend_libs__switch_util__Case_14)), &backend_libs__switch_util__conv2_OldEntry_17);
                  }
#line 1400 "switch_util.m"
                  if (backend_libs__switch_util__succeeded)
#line 1400 "switch_util.m"
                    {
#line 1400 "switch_util.m"
                      backend_libs__switch_util__OldEntry_17 = ((MR_Word) backend_libs__switch_util__conv2_OldEntry_17);
#line 1400 "switch_util.m"
                      backend_libs__switch_util__succeeded = MR_TRUE;
#line 1400 "switch_util.m"
                    }
#line 1407 "switch_util.m"
                  if (backend_libs__switch_util__succeeded)
#line 1402 "switch_util.m"
                    {
#line 1402 "switch_util.m"
                      MR_Integer backend_libs__switch_util__OldCount_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 0)));
#line 1402 "switch_util.m"
                      MR_Integer backend_libs__switch_util__OldFirstPtag_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 1)));
#line 1402 "switch_util.m"
                      MR_Word backend_libs__switch_util__OldLaterPtags0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 2)));
#line 1402 "switch_util.m"
                      MR_Word backend_libs__switch_util__OldCase_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__OldEntry_17, (MR_Integer) 3)));
#line 1402 "switch_util.m"
                      MR_Word backend_libs__switch_util__NewEntry_22;
#line 1402 "switch_util.m"
                      MR_Word backend_libs__switch_util__V_28_28;
#line 1402 "switch_util.m"
                      MR_Integer backend_libs__switch_util__V_32_32;
#line 1402 "switch_util.m"
                      MR_Word backend_libs__switch_util__V_33_33;
#line 1402 "switch_util.m"
                      MR_Word backend_libs__switch_util__V_34_34;
#line 1406 "switch_util.m"
                      MR_Word backend_libs__switch_util__conv3_STATE_VARIABLE_RevMap_36_36;

#line 1403 "switch_util.m"
                      {
#line 1403 "switch_util.m"
                        backend_libs__switch_util__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1403 "switch_util.m"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_7[1]));
#line 1403 "switch_util.m"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 1) = ((MR_Box) (backend_libs__switch_util__build_ptag_case_rev_map_4_p_0_1));
#line 1403 "switch_util.m"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1403 "switch_util.m"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 1403 "switch_util.m"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 4) = ((MR_Box) (backend_libs__switch_util__Case_14));
#line 1403 "switch_util.m"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_28_28, 5) = ((MR_Box) (backend_libs__switch_util__OldCase_21));
#line 1403 "switch_util.m"
                      }
#line 1403 "switch_util.m"
                      {
#line 1403 "switch_util.m"
                        mercury__require__expect_4_p_0(backend_libs__switch_util__V_28_28, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.build_ptag_case_rev_map\'/4", (MR_String) "Case != OldCase");
                      }
#line 1404 "switch_util.m"
                      backend_libs__switch_util__V_32_32 = (backend_libs__switch_util__OldCount_18 + backend_libs__switch_util__Count_16);
#line 1405 "switch_util.m"
                      {
#line 1405 "switch_util.m"
                        backend_libs__switch_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "switch_util.m"
                        MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_34_34, 0) = ((MR_Box) (backend_libs__switch_util__Ptag_13));
#line 1405 "switch_util.m"
                        MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1405 "switch_util.m"
                      }
#line 1405 "switch_util.m"
                      {
#line 1405 "switch_util.m"
                        backend_libs__switch_util__V_33_33 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__OldLaterPtags0_20, backend_libs__switch_util__V_34_34);
                      }
#line 1404 "switch_util.m"
                      {
#line 1404 "switch_util.m"
                        backend_libs__switch_util__NewEntry_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1404 "switch_util.m"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 0) = ((MR_Box) (backend_libs__switch_util__V_32_32));
#line 1404 "switch_util.m"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 1) = ((MR_Box) (backend_libs__switch_util__OldFirstPtag_19));
#line 1404 "switch_util.m"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 2) = ((MR_Box) (backend_libs__switch_util__V_33_33));
#line 1404 "switch_util.m"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_22, 3) = ((MR_Box) (backend_libs__switch_util__OldCase_21));
#line 1404 "switch_util.m"
                      }
#line 1406 "switch_util.m"
                      {
#line 1406 "switch_util.m"
                        mercury__map__det_update_4_p_0(backend_libs__switch_util__TypeInfo_46_46, backend_libs__switch_util__TypeInfo_48_48, ((MR_Box) (backend_libs__switch_util__Case_14)), ((MR_Box) (backend_libs__switch_util__NewEntry_22)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, &backend_libs__switch_util__conv3_STATE_VARIABLE_RevMap_36_36);
                      }
#line 1406 "switch_util.m"
                      backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36 = (MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_RevMap_36_36;
#line 1402 "switch_util.m"
                    }
#line 1407 "switch_util.m"
                  else
#line 1408 "switch_util.m"
                    {
#line 1408 "switch_util.m"
                      MR_Word backend_libs__switch_util__TypeInfo_56_56;
#line 1408 "switch_util.m"
                      MR_Word backend_libs__switch_util__TypeInfo_58_58;
#line 1408 "switch_util.m"
                      MR_Word backend_libs__switch_util__NewEntry_40;
#line 1409 "switch_util.m"
                      MR_Word backend_libs__switch_util__conv4_STATE_VARIABLE_RevMap_36_36;

#line 1408 "switch_util.m"
                      {
#line 1408 "switch_util.m"
                        backend_libs__switch_util__NewEntry_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1408 "switch_util.m"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 0) = ((MR_Box) (backend_libs__switch_util__Count_16));
#line 1408 "switch_util.m"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 1) = ((MR_Box) (backend_libs__switch_util__Ptag_13));
#line 1408 "switch_util.m"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1408 "switch_util.m"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewEntry_40, 3) = ((MR_Box) (backend_libs__switch_util__Case_14));
#line 1408 "switch_util.m"
                      }
#line 8795 "backend_libs.switch_util.c"
                      {
#line 8797 "backend_libs.switch_util.c"
                        backend_libs__switch_util__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8799 "backend_libs.switch_util.c"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_56_56, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 8801 "backend_libs.switch_util.c"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_56_56, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8803 "backend_libs.switch_util.c"
                      }
#line 8805 "backend_libs.switch_util.c"
                      {
#line 8807 "backend_libs.switch_util.c"
                        backend_libs__switch_util__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8809 "backend_libs.switch_util.c"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_58_58, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 8811 "backend_libs.switch_util.c"
                        MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_58_58, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_42));
#line 8813 "backend_libs.switch_util.c"
                      }
#line 1409 "switch_util.m"
                      {
#line 1409 "switch_util.m"
                        mercury__map__det_insert_4_p_0(backend_libs__switch_util__TypeInfo_56_56, backend_libs__switch_util__TypeInfo_58_58, ((MR_Box) (backend_libs__switch_util__Case_14)), ((MR_Box) (backend_libs__switch_util__NewEntry_40)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3, &backend_libs__switch_util__conv4_STATE_VARIABLE_RevMap_36_36);
                      }
#line 1409 "switch_util.m"
                      backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36 = (MR_Word) backend_libs__switch_util__conv4_STATE_VARIABLE_RevMap_36_36;
#line 1408 "switch_util.m"
                    }
#line 1407 "switch_util.m"
                }
#line 1411 "switch_util.m"
                break;
#line 1411 "switch_util.m"
            }
#line 1430 "switch_util.m"
            /* direct tailcall eliminated */
#line 1430 "switch_util.m"
            {
#line 1430 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Entries_10;
#line 1430 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_RevMap_0__tmp_copy_3 = backend_libs__switch_util__STATE_VARIABLE_RevMap_36_36;

#line 1430 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_RevMap_0_3 = backend_libs__switch_util__STATE_VARIABLE_RevMap_0__tmp_copy_3;
#line 1430 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 1430 "switch_util.m"
            }
#line 1430 "switch_util.m"
            continue;
#line 1393 "switch_util.m"
          }
#line 1392 "switch_util.m"
      }
#line 1392 "switch_util.m"
      break;
#line 1392 "switch_util.m"
    }
#line 1388 "switch_util.m"
}

#line 1363 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__interpret_rev_map_entry_2_p_0(
#line 1363 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_9,
#line 1363 "switch_util.m"
  MR_Word backend_libs__switch_util__RevEntry_3,
#line 1363 "switch_util.m"
  MR_Word * backend_libs__switch_util__GroupEntry_4)
#line 1363 "switch_util.m"
{
#line 1366 "switch_util.m"
  {
#line 1366 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1366 "switch_util.m"
    MR_Integer backend_libs__switch_util__MainPtag_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 1)));
#line 1366 "switch_util.m"
    MR_Word backend_libs__switch_util__OtherPtags_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 2)));
#line 1366 "switch_util.m"
    MR_Word backend_libs__switch_util__Case_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 3)));
#line 1367 "switch_util.m"
    MR_Integer backend_libs__switch_util___Count_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__RevEntry_3, (MR_Integer) 0)));

#line 1368 "switch_util.m"
    {
#line 1368 "switch_util.m"
      MR_Word base;
#line 1368 "switch_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1368 "switch_util.m"
      *backend_libs__switch_util__GroupEntry_4 = base;
#line 1368 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__switch_util__MainPtag_6));
#line 1368 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__switch_util__OtherPtags_7));
#line 1368 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (backend_libs__switch_util__Case_8));
#line 1368 "switch_util.m"
    }
#line 1366 "switch_util.m"
  }
#line 1363 "switch_util.m"
}

#line 1298 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_2(
#line 1298 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1298 "switch_util.m"
{
#line 1298 "switch_util.m"
  {
#line 1298 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1298 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1298 "switch_util.m"
    {
#line 1298 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1298__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))));
    }
#line 1298 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1298 "switch_util.m"
  }
#line 1298 "switch_util.m"
}

#line 1312 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0_1(
#line 1312 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1312 "switch_util.m"
{
#line 1312 "switch_util.m"
  {
#line 1312 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1312 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1312 "switch_util.m"
    {
#line 1312 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util__IntroducedFrom__pred__group_case_by_ptag__1312__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))));
    }
#line 1312 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1312 "switch_util.m"
  }
#line 1312 "switch_util.m"
}

#line 1268 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__group_case_by_ptag_7_p_0(
#line 1268 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_107,
#line 1268 "switch_util.m"
  MR_Word backend_libs__switch_util__CaseId_8,
#line 1268 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_9,
#line 1268 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_10,
#line 1268 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_0_52,
#line 1268 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_53,
#line 1268 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54,
#line 1268 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55)
#line 1268 "switch_util.m"
{
#line 1273 "switch_util.m"
  {
#line 1273 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1273 "switch_util.m"
    MR_Word backend_libs__switch_util__Tag_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_10, (MR_Integer) 1)));
#line 1273 "switch_util.m"
    MR_Integer backend_libs__switch_util__Primary_15;
#line 1274 "switch_util.m"
    MR_Word backend_libs__switch_util___ConsId_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_10, (MR_Integer) 0)));
#line 1345 "switch_util.m"
    MR_Word backend_libs__switch_util__Ptags0_50;
#line 1342 "switch_util.m"
    MR_Box backend_libs__switch_util__conv12_Ptags0_50;

#line 1294 "switch_util.m"
#line 1294 "switch_util.m"
    switch (MR_tag((MR_Word) backend_libs__switch_util__Tag_14)) {
#line 1294 "switch_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1294 "switch_util.m"
      case (MR_Integer) 0:
#line 1294 "switch_util.m"
#line 1294 "switch_util.m"
        switch (MR_unmkbody(backend_libs__switch_util__Tag_14)) {
#line 1294 "switch_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1294 "switch_util.m"
          case (MR_Integer) 0:
#line 1286 "switch_util.m"
            {
#line 1287 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_110_146;
#line 1287 "switch_util.m"
              MR_Word backend_libs__switch_util___Group_142;
#line 1287 "switch_util.m"
              MR_Box backend_libs__switch_util__conv8__Group_142;

#line 1278 "switch_util.m"
              backend_libs__switch_util__Primary_15 = (MR_Integer) 0;
#line 9016 "backend_libs.switch_util.c"
              {
#line 9018 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_110_146 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9020 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_146, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9022 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_146, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9024 "backend_libs.switch_util.c"
              }
#line 1287 "switch_util.m"
              {
#line 1287 "switch_util.m"
                backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_110_146, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv8__Group_142);
              }
#line 1287 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 1287 "switch_util.m"
                {
#line 1287 "switch_util.m"
                  backend_libs__switch_util___Group_142 = ((MR_Word) backend_libs__switch_util__conv8__Group_142);
#line 1287 "switch_util.m"
                  backend_libs__switch_util__succeeded = MR_TRUE;
#line 1287 "switch_util.m"
                }
#line 1289 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 1288 "switch_util.m"
                {
#line 1288 "switch_util.m"
                  {
#line 1288 "switch_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "unshared tag is shared");
#line 1288 "switch_util.m"
                    return;
                  }
#line 1288 "switch_util.m"
                }
#line 1289 "switch_util.m"
              else
#line 1290 "switch_util.m"
                {
#line 1290 "switch_util.m"
                  MR_Word backend_libs__switch_util__TypeInfo_113_155;
#line 1290 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagGoalMap_150;
#line 1290 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_152_152;
#line 1291 "switch_util.m"
                  MR_Word backend_libs__switch_util__conv9_STATE_VARIABLE_PtagCaseMap_55;

#line 1290 "switch_util.m"
                  {
#line 1290 "switch_util.m"
                    backend_libs__switch_util__StagGoalMap_150 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) ((MR_Integer) -1)), backend_libs__switch_util__CaseRep_9);
                  }
#line 1291 "switch_util.m"
                  {
#line 1291 "switch_util.m"
                    backend_libs__switch_util__V_152_152 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1291 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_152_152, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1291 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_152_152, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_150));
#line 1291 "switch_util.m"
                  }
#line 9082 "backend_libs.switch_util.c"
                  {
#line 9084 "backend_libs.switch_util.c"
                    backend_libs__switch_util__TypeInfo_113_155 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9086 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_155, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9088 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_155, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9090 "backend_libs.switch_util.c"
                  }
#line 1291 "switch_util.m"
                  {
#line 1291 "switch_util.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_113_155, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_152_152)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv9_STATE_VARIABLE_PtagCaseMap_55);
                  }
#line 1291 "switch_util.m"
                  *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv9_STATE_VARIABLE_PtagCaseMap_55;
#line 1290 "switch_util.m"
                }
#line 1286 "switch_util.m"
            }
#line 1294 "switch_util.m"
            break;
#line 1294 "switch_util.m"
          case (MR_Integer) 1:
#line 1339 "switch_util.m"
            {
#line 1340 "switch_util.m"
              {
#line 1340 "switch_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "non-du tag");
#line 1340 "switch_util.m"
                return;
              }
#line 1339 "switch_util.m"
            }
#line 1294 "switch_util.m"
            break;
#line 1294 "switch_util.m"
        }
#line 1294 "switch_util.m"
        break;
#line 1294 "switch_util.m"
      case (MR_Integer) 1:
#line 1294 "switch_util.m"
      case (MR_Integer) 2:
#line 1339 "switch_util.m"
        {
#line 1340 "switch_util.m"
          {
#line 1340 "switch_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "non-du tag");
#line 1340 "switch_util.m"
            return;
          }
#line 1339 "switch_util.m"
        }
#line 1294 "switch_util.m"
        break;
#line 1294 "switch_util.m"
      case (MR_Integer) 3:
#line 1294 "switch_util.m"
#line 1294 "switch_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 0)))) {
#line 1294 "switch_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1294 "switch_util.m"
          case (MR_Integer) 0:
#line 1294 "switch_util.m"
          case (MR_Integer) 1:
#line 1294 "switch_util.m"
          case (MR_Integer) 2:
#line 1294 "switch_util.m"
          case (MR_Integer) 3:
#line 1294 "switch_util.m"
          case (MR_Integer) 4:
#line 1294 "switch_util.m"
          case (MR_Integer) 5:
#line 1294 "switch_util.m"
          case (MR_Integer) 6:
#line 1294 "switch_util.m"
          case (MR_Integer) 7:
#line 1294 "switch_util.m"
          case (MR_Integer) 8:
#line 1294 "switch_util.m"
          case (MR_Integer) 9:
#line 1294 "switch_util.m"
          case (MR_Integer) 10:
#line 1294 "switch_util.m"
          case (MR_Integer) 15:
#line 1294 "switch_util.m"
          case (MR_Integer) 16:
#line 1339 "switch_util.m"
            {
#line 1340 "switch_util.m"
              {
#line 1340 "switch_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "non-du tag");
#line 1340 "switch_util.m"
                return;
              }
#line 1339 "switch_util.m"
            }
#line 1294 "switch_util.m"
            break;
#line 1294 "switch_util.m"
          case (MR_Integer) 11:
#line 1286 "switch_util.m"
            {
#line 1287 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_110_187;
#line 1287 "switch_util.m"
              MR_Word backend_libs__switch_util___Group_183;
#line 1287 "switch_util.m"
              MR_Box backend_libs__switch_util__conv10__Group_183;

#line 1281 "switch_util.m"
              backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 9200 "backend_libs.switch_util.c"
              {
#line 9202 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_110_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9204 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_187, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9206 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_187, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9208 "backend_libs.switch_util.c"
              }
#line 1287 "switch_util.m"
              {
#line 1287 "switch_util.m"
                backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_110_187, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv10__Group_183);
              }
#line 1287 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 1287 "switch_util.m"
                {
#line 1287 "switch_util.m"
                  backend_libs__switch_util___Group_183 = ((MR_Word) backend_libs__switch_util__conv10__Group_183);
#line 1287 "switch_util.m"
                  backend_libs__switch_util__succeeded = MR_TRUE;
#line 1287 "switch_util.m"
                }
#line 1289 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 1288 "switch_util.m"
                {
#line 1288 "switch_util.m"
                  {
#line 1288 "switch_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "unshared tag is shared");
#line 1288 "switch_util.m"
                    return;
                  }
#line 1288 "switch_util.m"
                }
#line 1289 "switch_util.m"
              else
#line 1290 "switch_util.m"
                {
#line 1290 "switch_util.m"
                  MR_Word backend_libs__switch_util__TypeInfo_113_196;
#line 1290 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagGoalMap_191;
#line 1290 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_193_193;
#line 1291 "switch_util.m"
                  MR_Word backend_libs__switch_util__conv11_STATE_VARIABLE_PtagCaseMap_55;

#line 1290 "switch_util.m"
                  {
#line 1290 "switch_util.m"
                    backend_libs__switch_util__StagGoalMap_191 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) ((MR_Integer) -1)), backend_libs__switch_util__CaseRep_9);
                  }
#line 1291 "switch_util.m"
                  {
#line 1291 "switch_util.m"
                    backend_libs__switch_util__V_193_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1291 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_193_193, 0) = ((MR_Box) ((MR_Integer) 0));
#line 1291 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_193_193, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_191));
#line 1291 "switch_util.m"
                  }
#line 9266 "backend_libs.switch_util.c"
                  {
#line 9268 "backend_libs.switch_util.c"
                    backend_libs__switch_util__TypeInfo_113_196 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9270 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_196, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9272 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_196, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9274 "backend_libs.switch_util.c"
                  }
#line 1291 "switch_util.m"
                  {
#line 1291 "switch_util.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_113_196, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_193_193)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv11_STATE_VARIABLE_PtagCaseMap_55);
                  }
#line 1291 "switch_util.m"
                  *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv11_STATE_VARIABLE_PtagCaseMap_55;
#line 1290 "switch_util.m"
                }
#line 1286 "switch_util.m"
            }
#line 1294 "switch_util.m"
            break;
#line 1294 "switch_util.m"
          case (MR_Integer) 12:
#line 1286 "switch_util.m"
            {
#line 1287 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_110_110;
#line 1287 "switch_util.m"
              MR_Word backend_libs__switch_util___Group_17;
#line 1287 "switch_util.m"
              MR_Box backend_libs__switch_util__conv0__Group_17;

#line 1284 "switch_util.m"
              backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 9302 "backend_libs.switch_util.c"
              {
#line 9304 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9306 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_110, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9308 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_110_110, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9310 "backend_libs.switch_util.c"
              }
#line 1287 "switch_util.m"
              {
#line 1287 "switch_util.m"
                backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_110_110, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv0__Group_17);
              }
#line 1287 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 1287 "switch_util.m"
                {
#line 1287 "switch_util.m"
                  backend_libs__switch_util___Group_17 = ((MR_Word) backend_libs__switch_util__conv0__Group_17);
#line 1287 "switch_util.m"
                  backend_libs__switch_util__succeeded = MR_TRUE;
#line 1287 "switch_util.m"
                }
#line 1289 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 1288 "switch_util.m"
                {
#line 1288 "switch_util.m"
                  {
#line 1288 "switch_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "unshared tag is shared");
#line 1288 "switch_util.m"
                    return;
                  }
#line 1288 "switch_util.m"
                }
#line 1289 "switch_util.m"
              else
#line 1290 "switch_util.m"
                {
#line 1290 "switch_util.m"
                  MR_Word backend_libs__switch_util__TypeInfo_113_113;
#line 1290 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagGoalMap_18;
#line 1290 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_85_85;
#line 1291 "switch_util.m"
                  MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55;

#line 1290 "switch_util.m"
                  {
#line 1290 "switch_util.m"
                    backend_libs__switch_util__StagGoalMap_18 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) ((MR_Integer) -1)), backend_libs__switch_util__CaseRep_9);
                  }
#line 1291 "switch_util.m"
                  {
#line 1291 "switch_util.m"
                    backend_libs__switch_util__V_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1291 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_85_85, 0) = ((MR_Box) ((MR_Integer) 1));
#line 1291 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_85_85, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_18));
#line 1291 "switch_util.m"
                  }
#line 9368 "backend_libs.switch_util.c"
                  {
#line 9370 "backend_libs.switch_util.c"
                    backend_libs__switch_util__TypeInfo_113_113 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9372 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_113, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9374 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_113_113, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9376 "backend_libs.switch_util.c"
                  }
#line 1291 "switch_util.m"
                  {
#line 1291 "switch_util.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_113_113, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_85_85)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55);
                  }
#line 1291 "switch_util.m"
                  *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_PtagCaseMap_55;
#line 1290 "switch_util.m"
                }
#line 1286 "switch_util.m"
            }
#line 1294 "switch_util.m"
            break;
#line 1294 "switch_util.m"
          case (MR_Integer) 13:
#line 1295 "switch_util.m"
            {
#line 1295 "switch_util.m"
              MR_Integer backend_libs__switch_util__Secondary_19;
#line 1303 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_116_116;
#line 1303 "switch_util.m"
              MR_Word backend_libs__switch_util__Group_20;
#line 1296 "switch_util.m"
              MR_Box backend_libs__switch_util__conv5_Group_20;

#line 1295 "switch_util.m"
              backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 1295 "switch_util.m"
              backend_libs__switch_util__Secondary_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 2)));
#line 9408 "backend_libs.switch_util.c"
              {
#line 9410 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9412 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_116_116, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9414 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_116_116, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9416 "backend_libs.switch_util.c"
              }
#line 1296 "switch_util.m"
              {
#line 1296 "switch_util.m"
                backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_116_116, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv5_Group_20);
              }
#line 1296 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 1296 "switch_util.m"
                {
#line 1296 "switch_util.m"
                  backend_libs__switch_util__Group_20 = ((MR_Word) backend_libs__switch_util__conv5_Group_20);
#line 1296 "switch_util.m"
                  backend_libs__switch_util__succeeded = MR_TRUE;
#line 1296 "switch_util.m"
                }
#line 1303 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 1297 "switch_util.m"
                {
#line 1297 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagLoc_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_20, (MR_Integer) 0)));
#line 1297 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagGoalMap0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_20, (MR_Integer) 1)));
#line 1297 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_70_70;
#line 1297 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_75_75;
#line 1297 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagGoalMap_89;
#line 1301 "switch_util.m"
                  MR_Word backend_libs__switch_util__conv6_STATE_VARIABLE_PtagCaseMap_55;

#line 1298 "switch_util.m"
                  {
#line 1298 "switch_util.m"
                    backend_libs__switch_util__V_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1298 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_8[1]));
#line 1298 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 1) = ((MR_Box) (backend_libs__switch_util__group_case_by_ptag_7_p_0_2));
#line 1298 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1298 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 3) = ((MR_Box) (backend_libs__switch_util__StagLoc_21));
#line 1298 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_70_70, 4) = ((MR_Box) ((MR_Integer) 3));
#line 1298 "switch_util.m"
                  }
#line 1298 "switch_util.m"
                  {
#line 1298 "switch_util.m"
                    mercury__require__expect_4_p_0(backend_libs__switch_util__V_70_70, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "remote tag is shared with non-remote");
                  }
#line 1300 "switch_util.m"
                  {
#line 1300 "switch_util.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_107, backend_libs__switch_util__Secondary_19, backend_libs__switch_util__CaseRep_9, backend_libs__switch_util__StagGoalMap0_22, &backend_libs__switch_util__StagGoalMap_89);
                  }
#line 1301 "switch_util.m"
                  {
#line 1301 "switch_util.m"
                    backend_libs__switch_util__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1301 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1301 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_89));
#line 1301 "switch_util.m"
                  }
#line 1301 "switch_util.m"
                  {
#line 1301 "switch_util.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_116_116, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_75_75)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv6_STATE_VARIABLE_PtagCaseMap_55);
                  }
#line 1301 "switch_util.m"
                  *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv6_STATE_VARIABLE_PtagCaseMap_55;
#line 1297 "switch_util.m"
                }
#line 1303 "switch_util.m"
              else
#line 1304 "switch_util.m"
                {
#line 1304 "switch_util.m"
                  MR_Word backend_libs__switch_util__TypeInfo_123_123;
#line 1304 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_78_78;
#line 1304 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagGoalMap_90;
#line 1305 "switch_util.m"
                  MR_Word backend_libs__switch_util__conv7_STATE_VARIABLE_PtagCaseMap_55;

#line 1304 "switch_util.m"
                  {
#line 1304 "switch_util.m"
                    backend_libs__switch_util__StagGoalMap_90 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) (backend_libs__switch_util__Secondary_19)), backend_libs__switch_util__CaseRep_9);
                  }
#line 1305 "switch_util.m"
                  {
#line 1305 "switch_util.m"
                    backend_libs__switch_util__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1305 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_78_78, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1305 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_78_78, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_90));
#line 1305 "switch_util.m"
                  }
#line 9523 "backend_libs.switch_util.c"
                  {
#line 9525 "backend_libs.switch_util.c"
                    backend_libs__switch_util__TypeInfo_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9527 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_123_123, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9529 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_123_123, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9531 "backend_libs.switch_util.c"
                  }
#line 1305 "switch_util.m"
                  {
#line 1305 "switch_util.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_123_123, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_78_78)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv7_STATE_VARIABLE_PtagCaseMap_55);
                  }
#line 1305 "switch_util.m"
                  *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv7_STATE_VARIABLE_PtagCaseMap_55;
#line 1304 "switch_util.m"
                }
#line 1295 "switch_util.m"
            }
#line 1294 "switch_util.m"
            break;
#line 1294 "switch_util.m"
          case (MR_Integer) 14:
#line 1309 "switch_util.m"
            {
#line 1309 "switch_util.m"
              MR_Integer backend_libs__switch_util__Secondary_102;
#line 1317 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeInfo_126_126;
#line 1317 "switch_util.m"
              MR_Word backend_libs__switch_util__Group_98;
#line 1310 "switch_util.m"
              MR_Box backend_libs__switch_util__conv2_Group_98;

#line 1309 "switch_util.m"
              backend_libs__switch_util__Primary_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 1)));
#line 1309 "switch_util.m"
              backend_libs__switch_util__Secondary_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_14, (MR_Integer) 2)));
#line 9563 "backend_libs.switch_util.c"
              {
#line 9565 "backend_libs.switch_util.c"
                backend_libs__switch_util__TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9567 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_126_126, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9569 "backend_libs.switch_util.c"
                MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_126_126, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9571 "backend_libs.switch_util.c"
              }
#line 1310 "switch_util.m"
              {
#line 1310 "switch_util.m"
                backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_126_126, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, backend_libs__switch_util__Primary_15, &backend_libs__switch_util__conv2_Group_98);
              }
#line 1310 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 1310 "switch_util.m"
                {
#line 1310 "switch_util.m"
                  backend_libs__switch_util__Group_98 = ((MR_Word) backend_libs__switch_util__conv2_Group_98);
#line 1310 "switch_util.m"
                  backend_libs__switch_util__succeeded = MR_TRUE;
#line 1310 "switch_util.m"
                }
#line 1317 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 1311 "switch_util.m"
                {
#line 1311 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_59_59;
#line 1311 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_64_64;
#line 1311 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagGoalMap_93;
#line 1311 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagLoc_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_98, (MR_Integer) 0)));
#line 1311 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagGoalMap0_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Group_98, (MR_Integer) 1)));
#line 1315 "switch_util.m"
                  MR_Word backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_55;

#line 1312 "switch_util.m"
                  {
#line 1312 "switch_util.m"
                    backend_libs__switch_util__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1312 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_8[1]));
#line 1312 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 1) = ((MR_Box) (backend_libs__switch_util__group_case_by_ptag_7_p_0_1));
#line 1312 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1312 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1312 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_59_59, 4) = ((MR_Box) (backend_libs__switch_util__StagLoc_94));
#line 1312 "switch_util.m"
                  }
#line 1312 "switch_util.m"
                  {
#line 1312 "switch_util.m"
                    mercury__require__expect_4_p_0(backend_libs__switch_util__V_59_59, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.group_case_by_ptag\'/7", (MR_String) "local tag is shared with non-local");
                  }
#line 1314 "switch_util.m"
                  {
#line 1314 "switch_util.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_107, backend_libs__switch_util__Secondary_102, backend_libs__switch_util__CaseRep_9, backend_libs__switch_util__StagGoalMap0_95, &backend_libs__switch_util__StagGoalMap_93);
                  }
#line 1315 "switch_util.m"
                  {
#line 1315 "switch_util.m"
                    backend_libs__switch_util__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1315 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_64_64, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1315 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_64_64, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_93));
#line 1315 "switch_util.m"
                  }
#line 1315 "switch_util.m"
                  {
#line 1315 "switch_util.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_126_126, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_64_64)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_55);
                  }
#line 1315 "switch_util.m"
                  *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_PtagCaseMap_55;
#line 1311 "switch_util.m"
                }
#line 1317 "switch_util.m"
              else
#line 1318 "switch_util.m"
                {
#line 1318 "switch_util.m"
                  MR_Word backend_libs__switch_util__TypeInfo_133_133;
#line 1318 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_67_67;
#line 1318 "switch_util.m"
                  MR_Word backend_libs__switch_util__StagGoalMap_96;
#line 1319 "switch_util.m"
                  MR_Word backend_libs__switch_util__conv4_STATE_VARIABLE_PtagCaseMap_55;

#line 1318 "switch_util.m"
                  {
#line 1318 "switch_util.m"
                    backend_libs__switch_util__StagGoalMap_96 = mercury__map__singleton_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_for_CaseRep_107, ((MR_Box) (backend_libs__switch_util__Secondary_102)), backend_libs__switch_util__CaseRep_9);
                  }
#line 1319 "switch_util.m"
                  {
#line 1319 "switch_util.m"
                    backend_libs__switch_util__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1319 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_67_67, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1319 "switch_util.m"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_67_67, 1) = ((MR_Box) (backend_libs__switch_util__StagGoalMap_96));
#line 1319 "switch_util.m"
                  }
#line 9678 "backend_libs.switch_util.c"
                  {
#line 9680 "backend_libs.switch_util.c"
                    backend_libs__switch_util__TypeInfo_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9682 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_133_133, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 9684 "backend_libs.switch_util.c"
                    MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_133_133, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_107));
#line 9686 "backend_libs.switch_util.c"
                  }
#line 1319 "switch_util.m"
                  {
#line 1319 "switch_util.m"
                    mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_133_133, backend_libs__switch_util__Primary_15, ((MR_Box) (backend_libs__switch_util__V_67_67)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_0_54, &backend_libs__switch_util__conv4_STATE_VARIABLE_PtagCaseMap_55);
                  }
#line 1319 "switch_util.m"
                  *backend_libs__switch_util__STATE_VARIABLE_PtagCaseMap_55 = (MR_Word) backend_libs__switch_util__conv4_STATE_VARIABLE_PtagCaseMap_55;
#line 1318 "switch_util.m"
                }
#line 1309 "switch_util.m"
            }
#line 1294 "switch_util.m"
            break;
#line 1294 "switch_util.m"
        }
#line 1294 "switch_util.m"
        break;
#line 1294 "switch_util.m"
    }
#line 1342 "switch_util.m"
    {
#line 1342 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &backend_libs__switch_util_scalar_common_1[0], backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_0_52, ((MR_Box) (backend_libs__switch_util__CaseId_8)), &backend_libs__switch_util__conv12_Ptags0_50);
    }
#line 1342 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1342 "switch_util.m"
      {
#line 1342 "switch_util.m"
        backend_libs__switch_util__Ptags0_50 = ((MR_Word) backend_libs__switch_util__conv12_Ptags0_50);
#line 1342 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 1342 "switch_util.m"
      }
#line 1345 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1343 "switch_util.m"
      {
#line 1343 "switch_util.m"
        MR_Word backend_libs__switch_util__Ptags_51;

#line 1343 "switch_util.m"
        {
#line 1343 "switch_util.m"
          mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (backend_libs__switch_util__Primary_15)), backend_libs__switch_util__Ptags0_50, &backend_libs__switch_util__Ptags_51);
        }
#line 1344 "switch_util.m"
        {
#line 1344 "switch_util.m"
          mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &backend_libs__switch_util_scalar_common_1[0], ((MR_Box) (backend_libs__switch_util__CaseId_8)), ((MR_Box) (backend_libs__switch_util__Ptags_51)), backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_0_52, backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_53);
#line 1344 "switch_util.m"
          return;
        }
#line 1343 "switch_util.m"
      }
#line 1345 "switch_util.m"
    else
#line 1346 "switch_util.m"
      {
#line 1346 "switch_util.m"
        MR_Word backend_libs__switch_util__Ptags_106;

#line 1346 "switch_util.m"
        {
#line 1346 "switch_util.m"
          backend_libs__switch_util__Ptags_106 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (backend_libs__switch_util__Primary_15)));
        }
#line 1347 "switch_util.m"
        {
#line 1347 "switch_util.m"
          mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &backend_libs__switch_util_scalar_common_1[0], ((MR_Box) (backend_libs__switch_util__CaseId_8)), ((MR_Box) (backend_libs__switch_util__Ptags_106)), backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_0_52, backend_libs__switch_util__STATE_VARIABLE_CaseIdPtagsMap_53);
#line 1347 "switch_util.m"
          return;
        }
#line 1346 "switch_util.m"
      }
#line 1273 "switch_util.m"
  }
#line 1268 "switch_util.m"
}

#line 1155 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__get_ptag_counts_loop_5_p_0(
#line 1155 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1155 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2,
#line 1155 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_3,
#line 1155 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4,
#line 1155 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_5)
#line 1155 "switch_util.m"
{
#line 1158 "switch_util.m"
  while (MR_TRUE)
#line 1158 "switch_util.m"
    {
#line 1158 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1158 "switch_util.m"
      {
#line 1158 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 1158 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1158 "switch_util.m"
          {
#line 1158 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_5 = backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4;
#line 1158 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_3 = backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2;
#line 1158 "switch_util.m"
          }
#line 1158 "switch_util.m"
        else
#line 1159 "switch_util.m"
          {
#line 1159 "switch_util.m"
            MR_Word backend_libs__switch_util__Tag_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1159 "switch_util.m"
            MR_Word backend_libs__switch_util__Tags_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1159 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78;
#line 1159 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83;

#line 1178 "switch_util.m"
#line 1178 "switch_util.m"
            switch (MR_tag((MR_Word) backend_libs__switch_util__Tag_12)) {
#line 1178 "switch_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1178 "switch_util.m"
              case (MR_Integer) 0:
#line 1178 "switch_util.m"
#line 1178 "switch_util.m"
                switch (MR_unmkbody(backend_libs__switch_util__Tag_12)) {
#line 1178 "switch_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1178 "switch_util.m"
                  case (MR_Integer) 0:
#line 1171 "switch_util.m"
                    {
#line 1173 "switch_util.m"
                      MR_Word backend_libs__switch_util__V_117_117;
#line 1173 "switch_util.m"
                      MR_Box backend_libs__switch_util__conv3_V_117_117;

#line 1172 "switch_util.m"
                      {
#line 1172 "switch_util.m"
                        mercury__int__max_3_p_0((MR_Integer) 0, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                      }
#line 1173 "switch_util.m"
                      {
#line 1173 "switch_util.m"
                        backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, (MR_Integer) 0, &backend_libs__switch_util__conv3_V_117_117);
                      }
#line 1173 "switch_util.m"
                      if (backend_libs__switch_util__succeeded)
#line 1173 "switch_util.m"
                        {
#line 1173 "switch_util.m"
                          backend_libs__switch_util__V_117_117 = ((MR_Word) backend_libs__switch_util__conv3_V_117_117);
#line 1173 "switch_util.m"
                          backend_libs__switch_util__succeeded = MR_TRUE;
#line 1173 "switch_util.m"
                        }
#line 1175 "switch_util.m"
                      if (backend_libs__switch_util__succeeded)
#line 1174 "switch_util.m"
                        {
#line 1174 "switch_util.m"
                          {
#line 1174 "switch_util.m"
                            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "unshared tag is shared");
#line 1174 "switch_util.m"
                            return;
                          }
#line 1174 "switch_util.m"
                        }
#line 1175 "switch_util.m"
                      else
#line 1176 "switch_util.m"
                        {
#line 1176 "switch_util.m"
                          {
#line 1176 "switch_util.m"
                            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], (MR_Integer) 0, ((MR_Box) (&backend_libs__switch_util_scalar_common_1[5])), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                          }
#line 1176 "switch_util.m"
                        }
#line 1171 "switch_util.m"
                    }
#line 1178 "switch_util.m"
                    break;
#line 1178 "switch_util.m"
                  case (MR_Integer) 1:
#line 1235 "switch_util.m"
                    {
#line 1236 "switch_util.m"
                      {
#line 1236 "switch_util.m"
                        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "non-du tag");
#line 1236 "switch_util.m"
                        return;
                      }
#line 1235 "switch_util.m"
                    }
#line 1178 "switch_util.m"
                    break;
#line 1178 "switch_util.m"
                }
#line 1178 "switch_util.m"
                break;
#line 1178 "switch_util.m"
              case (MR_Integer) 1:
#line 1178 "switch_util.m"
              case (MR_Integer) 2:
#line 1235 "switch_util.m"
                {
#line 1236 "switch_util.m"
                  {
#line 1236 "switch_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "non-du tag");
#line 1236 "switch_util.m"
                    return;
                  }
#line 1235 "switch_util.m"
                }
#line 1178 "switch_util.m"
                break;
#line 1178 "switch_util.m"
              case (MR_Integer) 3:
#line 1178 "switch_util.m"
#line 1178 "switch_util.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 0)))) {
#line 1178 "switch_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1178 "switch_util.m"
                  case (MR_Integer) 0:
#line 1178 "switch_util.m"
                  case (MR_Integer) 1:
#line 1178 "switch_util.m"
                  case (MR_Integer) 2:
#line 1178 "switch_util.m"
                  case (MR_Integer) 3:
#line 1178 "switch_util.m"
                  case (MR_Integer) 4:
#line 1178 "switch_util.m"
                  case (MR_Integer) 5:
#line 1178 "switch_util.m"
                  case (MR_Integer) 6:
#line 1178 "switch_util.m"
                  case (MR_Integer) 7:
#line 1178 "switch_util.m"
                  case (MR_Integer) 8:
#line 1178 "switch_util.m"
                  case (MR_Integer) 9:
#line 1178 "switch_util.m"
                  case (MR_Integer) 10:
#line 1178 "switch_util.m"
                  case (MR_Integer) 15:
#line 1178 "switch_util.m"
                  case (MR_Integer) 16:
#line 1235 "switch_util.m"
                    {
#line 1236 "switch_util.m"
                      {
#line 1236 "switch_util.m"
                        mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "non-du tag");
#line 1236 "switch_util.m"
                        return;
                      }
#line 1235 "switch_util.m"
                    }
#line 1178 "switch_util.m"
                    break;
#line 1178 "switch_util.m"
                  case (MR_Integer) 11:
#line 1171 "switch_util.m"
                    {
#line 1171 "switch_util.m"
                      MR_Integer backend_libs__switch_util__Primary_171 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1173 "switch_util.m"
                      MR_Word backend_libs__switch_util__V_150_150;
#line 1173 "switch_util.m"
                      MR_Box backend_libs__switch_util__conv4_V_150_150;

#line 1172 "switch_util.m"
                      {
#line 1172 "switch_util.m"
                        mercury__int__max_3_p_0(backend_libs__switch_util__Primary_171, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                      }
#line 1173 "switch_util.m"
                      {
#line 1173 "switch_util.m"
                        backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_171, &backend_libs__switch_util__conv4_V_150_150);
                      }
#line 1173 "switch_util.m"
                      if (backend_libs__switch_util__succeeded)
#line 1173 "switch_util.m"
                        {
#line 1173 "switch_util.m"
                          backend_libs__switch_util__V_150_150 = ((MR_Word) backend_libs__switch_util__conv4_V_150_150);
#line 1173 "switch_util.m"
                          backend_libs__switch_util__succeeded = MR_TRUE;
#line 1173 "switch_util.m"
                        }
#line 1175 "switch_util.m"
                      if (backend_libs__switch_util__succeeded)
#line 1174 "switch_util.m"
                        {
#line 1174 "switch_util.m"
                          {
#line 1174 "switch_util.m"
                            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "unshared tag is shared");
#line 1174 "switch_util.m"
                            return;
                          }
#line 1174 "switch_util.m"
                        }
#line 1175 "switch_util.m"
                      else
#line 1176 "switch_util.m"
                        {
#line 1176 "switch_util.m"
                          {
#line 1176 "switch_util.m"
                            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_171, ((MR_Box) (&backend_libs__switch_util_scalar_common_1[5])), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                          }
#line 1176 "switch_util.m"
                        }
#line 1171 "switch_util.m"
                    }
#line 1178 "switch_util.m"
                    break;
#line 1178 "switch_util.m"
                  case (MR_Integer) 12:
#line 1171 "switch_util.m"
                    {
#line 1171 "switch_util.m"
                      MR_Integer backend_libs__switch_util__Primary_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1173 "switch_util.m"
                      MR_Word backend_libs__switch_util__V_18_18;
#line 1173 "switch_util.m"
                      MR_Box backend_libs__switch_util__conv0_V_18_18;

#line 1172 "switch_util.m"
                      {
#line 1172 "switch_util.m"
                        mercury__int__max_3_p_0(backend_libs__switch_util__Primary_16, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                      }
#line 1173 "switch_util.m"
                      {
#line 1173 "switch_util.m"
                        backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_16, &backend_libs__switch_util__conv0_V_18_18);
                      }
#line 1173 "switch_util.m"
                      if (backend_libs__switch_util__succeeded)
#line 1173 "switch_util.m"
                        {
#line 1173 "switch_util.m"
                          backend_libs__switch_util__V_18_18 = ((MR_Word) backend_libs__switch_util__conv0_V_18_18);
#line 1173 "switch_util.m"
                          backend_libs__switch_util__succeeded = MR_TRUE;
#line 1173 "switch_util.m"
                        }
#line 1175 "switch_util.m"
                      if (backend_libs__switch_util__succeeded)
#line 1174 "switch_util.m"
                        {
#line 1174 "switch_util.m"
                          {
#line 1174 "switch_util.m"
                            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "unshared tag is shared");
#line 1174 "switch_util.m"
                            return;
                          }
#line 1174 "switch_util.m"
                        }
#line 1175 "switch_util.m"
                      else
#line 1176 "switch_util.m"
                        {
#line 1176 "switch_util.m"
                          {
#line 1176 "switch_util.m"
                            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_16, ((MR_Box) (&backend_libs__switch_util_scalar_common_1[4])), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                          }
#line 1176 "switch_util.m"
                        }
#line 1171 "switch_util.m"
                    }
#line 1178 "switch_util.m"
                    break;
#line 1178 "switch_util.m"
                  case (MR_Integer) 13:
#line 1179 "switch_util.m"
                    {
#line 1179 "switch_util.m"
                      MR_Integer backend_libs__switch_util__Secondary_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 2)));
#line 1179 "switch_util.m"
                      MR_Integer backend_libs__switch_util__Primary_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1195 "switch_util.m"
                      MR_Word backend_libs__switch_util__Target_20;
#line 1181 "switch_util.m"
                      MR_Box backend_libs__switch_util__conv2_Target_20;

#line 1180 "switch_util.m"
                      {
#line 1180 "switch_util.m"
                        mercury__int__max_3_p_0(backend_libs__switch_util__Primary_87, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                      }
#line 1181 "switch_util.m"
                      {
#line 1181 "switch_util.m"
                        backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_87, &backend_libs__switch_util__conv2_Target_20);
                      }
#line 1181 "switch_util.m"
                      if (backend_libs__switch_util__succeeded)
#line 1181 "switch_util.m"
                        {
#line 1181 "switch_util.m"
                          backend_libs__switch_util__Target_20 = ((MR_Word) backend_libs__switch_util__conv2_Target_20);
#line 1181 "switch_util.m"
                          backend_libs__switch_util__succeeded = MR_TRUE;
#line 1181 "switch_util.m"
                        }
#line 1195 "switch_util.m"
                      if (backend_libs__switch_util__succeeded)
#line 1182 "switch_util.m"
                        {
#line 1182 "switch_util.m"
                          MR_Word backend_libs__switch_util__TagType_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_20, (MR_Integer) 0)));
#line 1182 "switch_util.m"
                          MR_Integer backend_libs__switch_util__MaxSoFar_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_20, (MR_Integer) 1)));
#line 1182 "switch_util.m"
                          MR_Integer backend_libs__switch_util__Max_23;
#line 1182 "switch_util.m"
                          MR_Word backend_libs__switch_util__V_72_72;

#line 1185 "switch_util.m"
#line 1185 "switch_util.m"
                          switch (backend_libs__switch_util__TagType_21) {
#line 1185 "switch_util.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 1185 "switch_util.m"
                            case (MR_Integer) 2:
#line 1185 "switch_util.m"
                            case (MR_Integer) 0:
#line 1185 "switch_util.m"
                            case (MR_Integer) 1:
#line 1189 "switch_util.m"
                              {
#line 1190 "switch_util.m"
                                {
#line 1190 "switch_util.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "remote tag is shared with non-remote");
#line 1190 "switch_util.m"
                                  return;
                                }
#line 1189 "switch_util.m"
                              }
#line 1185 "switch_util.m"
                              break;
#line 1185 "switch_util.m"
                            case (MR_Integer) 3:
#line 1184 "switch_util.m"
                              {
#line 1184 "switch_util.m"
                              }
#line 1185 "switch_util.m"
                              break;
#line 1185 "switch_util.m"
                          }
#line 1193 "switch_util.m"
                          {
#line 1193 "switch_util.m"
                            mercury__int__max_3_p_0(backend_libs__switch_util__Secondary_19, backend_libs__switch_util__MaxSoFar_22, &backend_libs__switch_util__Max_23);
                          }
#line 1194 "switch_util.m"
                          {
#line 1194 "switch_util.m"
                            backend_libs__switch_util__V_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_72_72, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1194 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_72_72, 1) = ((MR_Box) (backend_libs__switch_util__Max_23));
#line 1194 "switch_util.m"
                          }
#line 1194 "switch_util.m"
                          {
#line 1194 "switch_util.m"
                            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_87, ((MR_Box) (backend_libs__switch_util__V_72_72)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                          }
#line 1182 "switch_util.m"
                        }
#line 1195 "switch_util.m"
                      else
#line 1196 "switch_util.m"
                        {
#line 1196 "switch_util.m"
                          MR_Word backend_libs__switch_util__V_75_75;

#line 1196 "switch_util.m"
                          {
#line 1196 "switch_util.m"
                            backend_libs__switch_util__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1196 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 0) = ((MR_Box) ((MR_Integer) 3));
#line 1196 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_75_75, 1) = ((MR_Box) (backend_libs__switch_util__Secondary_19));
#line 1196 "switch_util.m"
                          }
#line 1196 "switch_util.m"
                          {
#line 1196 "switch_util.m"
                            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_87, ((MR_Box) (backend_libs__switch_util__V_75_75)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                          }
#line 1196 "switch_util.m"
                        }
#line 1179 "switch_util.m"
                    }
#line 1178 "switch_util.m"
                    break;
#line 1178 "switch_util.m"
                  case (MR_Integer) 14:
#line 1199 "switch_util.m"
                    {
#line 1199 "switch_util.m"
                      MR_Integer backend_libs__switch_util__Primary_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 1)));
#line 1199 "switch_util.m"
                      MR_Integer backend_libs__switch_util__Secondary_96 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_12, (MR_Integer) 2)));
#line 1215 "switch_util.m"
                      MR_Word backend_libs__switch_util__Target_91;
#line 1201 "switch_util.m"
                      MR_Box backend_libs__switch_util__conv1_Target_91;

#line 1200 "switch_util.m"
                      {
#line 1200 "switch_util.m"
                        mercury__int__max_3_p_0(backend_libs__switch_util__Primary_95, backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2, &backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78);
                      }
#line 1201 "switch_util.m"
                      {
#line 1201 "switch_util.m"
                        backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, backend_libs__switch_util__Primary_95, &backend_libs__switch_util__conv1_Target_91);
                      }
#line 1201 "switch_util.m"
                      if (backend_libs__switch_util__succeeded)
#line 1201 "switch_util.m"
                        {
#line 1201 "switch_util.m"
                          backend_libs__switch_util__Target_91 = ((MR_Word) backend_libs__switch_util__conv1_Target_91);
#line 1201 "switch_util.m"
                          backend_libs__switch_util__succeeded = MR_TRUE;
#line 1201 "switch_util.m"
                        }
#line 1215 "switch_util.m"
                      if (backend_libs__switch_util__succeeded)
#line 1202 "switch_util.m"
                        {
#line 1202 "switch_util.m"
                          MR_Word backend_libs__switch_util__V_62_62;
#line 1202 "switch_util.m"
                          MR_Word backend_libs__switch_util__TagType_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_91, (MR_Integer) 0)));
#line 1202 "switch_util.m"
                          MR_Integer backend_libs__switch_util__MaxSoFar_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Target_91, (MR_Integer) 1)));
#line 1202 "switch_util.m"
                          MR_Integer backend_libs__switch_util__Max_90;

#line 1205 "switch_util.m"
#line 1205 "switch_util.m"
                          switch (backend_libs__switch_util__TagType_88) {
#line 1205 "switch_util.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 1205 "switch_util.m"
                            case (MR_Integer) 2:
#line 1204 "switch_util.m"
                              {
#line 1204 "switch_util.m"
                              }
#line 1205 "switch_util.m"
                              break;
#line 1205 "switch_util.m"
                            case (MR_Integer) 0:
#line 1205 "switch_util.m"
                            case (MR_Integer) 1:
#line 1205 "switch_util.m"
                            case (MR_Integer) 3:
#line 1209 "switch_util.m"
                              {
#line 1210 "switch_util.m"
                                {
#line 1210 "switch_util.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts_loop\'/5", (MR_String) "local tag is shared with non-local");
#line 1210 "switch_util.m"
                                  return;
                                }
#line 1209 "switch_util.m"
                              }
#line 1205 "switch_util.m"
                              break;
#line 1205 "switch_util.m"
                          }
#line 1213 "switch_util.m"
                          {
#line 1213 "switch_util.m"
                            mercury__int__max_3_p_0(backend_libs__switch_util__Secondary_96, backend_libs__switch_util__MaxSoFar_89, &backend_libs__switch_util__Max_90);
                          }
#line 1214 "switch_util.m"
                          {
#line 1214 "switch_util.m"
                            backend_libs__switch_util__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1214 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_62_62, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1214 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_62_62, 1) = ((MR_Box) (backend_libs__switch_util__Max_90));
#line 1214 "switch_util.m"
                          }
#line 1214 "switch_util.m"
                          {
#line 1214 "switch_util.m"
                            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_95, ((MR_Box) (backend_libs__switch_util__V_62_62)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                          }
#line 1202 "switch_util.m"
                        }
#line 1215 "switch_util.m"
                      else
#line 1216 "switch_util.m"
                        {
#line 1216 "switch_util.m"
                          MR_Word backend_libs__switch_util__V_65_65;

#line 1216 "switch_util.m"
                          {
#line 1216 "switch_util.m"
                            backend_libs__switch_util__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_65_65, 0) = ((MR_Box) ((MR_Integer) 2));
#line 1216 "switch_util.m"
                            MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_65_65, 1) = ((MR_Box) (backend_libs__switch_util__Secondary_96));
#line 1216 "switch_util.m"
                          }
#line 1216 "switch_util.m"
                          {
#line 1216 "switch_util.m"
                            mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &backend_libs__switch_util_scalar_common_2[0], backend_libs__switch_util__Primary_95, ((MR_Box) (backend_libs__switch_util__V_65_65)), backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83);
                          }
#line 1216 "switch_util.m"
                        }
#line 1199 "switch_util.m"
                    }
#line 1178 "switch_util.m"
                    break;
#line 1178 "switch_util.m"
                }
#line 1178 "switch_util.m"
                break;
#line 1178 "switch_util.m"
            }
#line 1238 "switch_util.m"
            /* direct tailcall eliminated */
#line 1238 "switch_util.m"
            {
#line 1238 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Tags_13;
#line 1238 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_78_78;
#line 1238 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0__tmp_copy_4 = backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_83_83;

#line 1238 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0_4 = backend_libs__switch_util__STATE_VARIABLE_PtagCountMap_0__tmp_copy_4;
#line 1238 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0_2 = backend_libs__switch_util__STATE_VARIABLE_MaxPrimary_0__tmp_copy_2;
#line 1238 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 1238 "switch_util.m"
            }
#line 1238 "switch_util.m"
            continue;
#line 1159 "switch_util.m"
          }
#line 1158 "switch_util.m"
      }
#line 1158 "switch_util.m"
      break;
#line 1158 "switch_util.m"
    }
#line 1155 "switch_util.m"
}

#line 1117 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__add_string_binary_entry_4_p_0(
#line 1117 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 1117 "switch_util.m"
  MR_Box backend_libs__switch_util__CaseRep_5,
#line 1117 "switch_util.m"
  MR_Word backend_libs__switch_util__TaggedConsId_6,
#line 1117 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_12,
#line 1117 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_13)
#line 1117 "switch_util.m"
{
#line 1120 "switch_util.m"
  {
#line 1120 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1120 "switch_util.m"
    MR_Word backend_libs__switch_util__Tag_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_6, (MR_Integer) 1)));
#line 1120 "switch_util.m"
    MR_String backend_libs__switch_util__String_11;
#line 1120 "switch_util.m"
    MR_Word backend_libs__switch_util__V_18_18;
#line 1121 "switch_util.m"
    MR_Word backend_libs__switch_util___ConsId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedConsId_6, (MR_Integer) 0)));
#line 1124 "switch_util.m"
    MR_String backend_libs__switch_util__StringPrime_10;

#line 1122 "switch_util.m"
    backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__Tag_9)) == (MR_mktag((MR_Integer) 1)));
#line 1122 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1122 "switch_util.m"
      {
#line 1122 "switch_util.m"
        backend_libs__switch_util__StringPrime_10 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__Tag_9, (MR_Integer) 0)));
#line 1123 "switch_util.m"
        backend_libs__switch_util__String_11 = backend_libs__switch_util__StringPrime_10;
#line 1122 "switch_util.m"
      }
#line 1122 "switch_util.m"
    else
#line 1125 "switch_util.m"
      {
#line 1125 "switch_util.m"
        {
#line 1125 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.add_string_binary_entry\'/4", (MR_String) "non-string case\?");
#line 1125 "switch_util.m"
          return;
        }
#line 1125 "switch_util.m"
      }
#line 1127 "switch_util.m"
    {
#line 1127 "switch_util.m"
      backend_libs__switch_util__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1127 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_18_18, 0) = ((MR_Box) (backend_libs__switch_util__String_11));
#line 1127 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_18_18, 1) = backend_libs__switch_util__CaseRep_5;
#line 1127 "switch_util.m"
    }
#line 1127 "switch_util.m"
    {
#line 1127 "switch_util.m"
      MR_Word base;
#line 1127 "switch_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "switch_util.m"
      *backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_13 = base;
#line 1127 "switch_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__V_18_18));
#line 1127 "switch_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_UnsortedTable_0_12));
#line 1127 "switch_util.m"
    }
#line 1120 "switch_util.m"
  }
#line 1117 "switch_util.m"
}

#line 1078 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0_1(
#line 1078 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg)
#line 1078 "switch_util.m"
{
#line 1078 "switch_util.m"
  {
#line 1078 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1078 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;

#line 1078 "switch_util.m"
    {
#line 1078 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__int__f_less_than_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))));
    }
#line 1078 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 1078 "switch_util.m"
  }
#line 1078 "switch_util.m"
}

#line 1072 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__next_free_hash_slot_5_p_0(
#line 1072 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_17,
#line 1072 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_6,
#line 1072 "switch_util.m"
  MR_Word backend_libs__switch_util__HomeMap_7,
#line 1072 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_8,
#line 1072 "switch_util.m"
  MR_Integer backend_libs__switch_util__LastUsed_9,
#line 1072 "switch_util.m"
  MR_Integer * backend_libs__switch_util__FreeSlot_10)
#line 1072 "switch_util.m"
{
#line 1076 "switch_util.m"
  while (MR_TRUE)
#line 1076 "switch_util.m"
    {
#line 1076 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1076 "switch_util.m"
      {
#line 1076 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;
#line 1076 "switch_util.m"
        MR_Integer backend_libs__switch_util__NextSlot_11 = (backend_libs__switch_util__LastUsed_9 + (MR_Integer) 1);
#line 1076 "switch_util.m"
        MR_Word backend_libs__switch_util__V_13_13;
#line 1080 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_20_20;
#line 1081 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_21_21;
#line 1081 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_22_22;
#line 1081 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_23_23;
#line 1081 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_24_24;
#line 1081 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtorInfo_25_25;
#line 1081 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_26_26;

#line 1078 "switch_util.m"
        {
#line 1078 "switch_util.m"
          backend_libs__switch_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1078 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_8[0]));
#line 1078 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 1) = ((MR_Box) (backend_libs__switch_util__next_free_hash_slot_5_p_0_1));
#line 1078 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1078 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 3) = ((MR_Box) (backend_libs__switch_util__NextSlot_11));
#line 1078 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 4) = ((MR_Box) (backend_libs__switch_util__TableSize_8));
#line 1078 "switch_util.m"
        }
#line 1078 "switch_util.m"
        {
#line 1078 "switch_util.m"
          mercury__require__expect_4_p_0(backend_libs__switch_util__V_13_13, (MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.next_free_hash_slot\'/5", (MR_String) "overflow");
        }
#line 10562 "backend_libs.switch_util.c"
        {
#line 10564 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10566 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10568 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_20_20, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_17));
#line 10570 "backend_libs.switch_util.c"
        }
#line 1080 "switch_util.m"
        {
#line 1080 "switch_util.m"
          backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_20_20, backend_libs__switch_util__Map_6, ((MR_Box) (backend_libs__switch_util__NextSlot_11)));
        }
#line 1080 "switch_util.m"
        backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1080 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1080 "switch_util.m"
          {
#line 10583 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 10585 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_25_25 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 10587 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_23_23 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 10589 "backend_libs.switch_util.c"
            backend_libs__switch_util__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 10591 "backend_libs.switch_util.c"
            {
#line 10593 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 10595 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_23_23));
#line 10597 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 1) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_22_22));
#line 10599 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_17));
#line 10601 "backend_libs.switch_util.c"
            }
#line 10603 "backend_libs.switch_util.c"
            {
#line 10605 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10607 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_26_26, 0) = ((MR_Box) (backend_libs__switch_util__TypeCtorInfo_25_25));
#line 10609 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_26_26, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_24_24));
#line 10611 "backend_libs.switch_util.c"
            }
#line 1081 "switch_util.m"
            {
#line 1081 "switch_util.m"
              backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0(backend_libs__switch_util__TypeCtorInfo_21_21, backend_libs__switch_util__TypeInfo_26_26, backend_libs__switch_util__HomeMap_7, ((MR_Box) (backend_libs__switch_util__NextSlot_11)));
            }
#line 1081 "switch_util.m"
            backend_libs__switch_util__succeeded = !(backend_libs__switch_util__succeeded);
#line 1080 "switch_util.m"
          }
#line 1084 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1083 "switch_util.m"
          *backend_libs__switch_util__FreeSlot_10 = backend_libs__switch_util__NextSlot_11;
#line 1084 "switch_util.m"
        else
#line 1085 "switch_util.m"
          {
#line 1085 "switch_util.m"
            /* direct tailcall eliminated */
#line 1085 "switch_util.m"
            {
#line 1085 "switch_util.m"
              MR_Integer backend_libs__switch_util__LastUsed__tmp_copy_9 = backend_libs__switch_util__NextSlot_11;

#line 1085 "switch_util.m"
              backend_libs__switch_util__LastUsed_9 = backend_libs__switch_util__LastUsed__tmp_copy_9;
#line 1085 "switch_util.m"
            }
#line 1085 "switch_util.m"
            continue;
#line 1085 "switch_util.m"
          }
#line 1076 "switch_util.m"
      }
#line 1076 "switch_util.m"
      break;
#line 1076 "switch_util.m"
    }
#line 1072 "switch_util.m"
}

#line 1052 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__follow_hash_chain_3_p_0(
#line 1052 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_12,
#line 1052 "switch_util.m"
  MR_Word backend_libs__switch_util__Map_4,
#line 1052 "switch_util.m"
  MR_Integer backend_libs__switch_util__Slot_5,
#line 1052 "switch_util.m"
  MR_Integer * backend_libs__switch_util__LastSlot_6)
#line 1052 "switch_util.m"
{
#line 1055 "switch_util.m"
  while (MR_TRUE)
#line 1055 "switch_util.m"
    {
#line 1055 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1055 "switch_util.m"
      {
#line 1055 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;
#line 1055 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_15_15;
#line 1055 "switch_util.m"
        MR_Integer backend_libs__switch_util__NextSlot_8;
#line 1055 "switch_util.m"
        MR_Word backend_libs__switch_util__V_10_10;
#line 1056 "switch_util.m"
        MR_Box backend_libs__switch_util__conv0_V_10_10;
#line 1056 "switch_util.m"
        MR_String backend_libs__switch_util__V_7_7;
#line 1056 "switch_util.m"
        MR_Box backend_libs__switch_util__V_9_9;

#line 10690 "backend_libs.switch_util.c"
        {
#line 10692 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10694 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10696 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_15_15, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_12));
#line 10698 "backend_libs.switch_util.c"
        }
#line 1056 "switch_util.m"
        {
#line 1056 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_15_15, (MR_Word) backend_libs__switch_util__Map_4, backend_libs__switch_util__Slot_5, &backend_libs__switch_util__conv0_V_10_10);
        }
#line 1056 "switch_util.m"
        backend_libs__switch_util__V_10_10 = ((MR_Word) backend_libs__switch_util__conv0_V_10_10);
#line 1056 "switch_util.m"
        backend_libs__switch_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_10_10, (MR_Integer) 0)));
#line 1056 "switch_util.m"
        backend_libs__switch_util__NextSlot_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_10_10, (MR_Integer) 1)));
#line 1056 "switch_util.m"
        backend_libs__switch_util__V_9_9 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_10_10, (MR_Integer) 2));
#line 1058 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__NextSlot_8 >= (MR_Integer) 0);
#line 1058 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1059 "switch_util.m"
          {
#line 1059 "switch_util.m"
            backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_15_15, backend_libs__switch_util__Map_4, ((MR_Box) (backend_libs__switch_util__NextSlot_8)));
          }
#line 1062 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1061 "switch_util.m"
          {
#line 1061 "switch_util.m"
            /* direct tailcall eliminated */
#line 1061 "switch_util.m"
            {
#line 1061 "switch_util.m"
              MR_Integer backend_libs__switch_util__Slot__tmp_copy_5 = backend_libs__switch_util__NextSlot_8;

#line 1061 "switch_util.m"
              backend_libs__switch_util__Slot_5 = backend_libs__switch_util__Slot__tmp_copy_5;
#line 1061 "switch_util.m"
            }
#line 1061 "switch_util.m"
            continue;
#line 1061 "switch_util.m"
          }
#line 1062 "switch_util.m"
        else
#line 1063 "switch_util.m"
          *backend_libs__switch_util__LastSlot_6 = backend_libs__switch_util__Slot_5;
#line 1055 "switch_util.m"
      }
#line 1055 "switch_util.m"
      break;
#line 1055 "switch_util.m"
    }
#line 1052 "switch_util.m"
}

#line 1018 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(
#line 1018 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_64,
#line 1018 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1018 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__2_2,
#line 1018 "switch_util.m"
  MR_Integer backend_libs__switch_util__HeadVar__3_3,
#line 1018 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__4_4,
#line 1018 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5,
#line 1018 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_6,
#line 1018 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7,
#line 1018 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_8)
#line 1018 "switch_util.m"
{
#line 1025 "switch_util.m"
  {
#line 1025 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 1025 "switch_util.m"
    if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1025 "switch_util.m"
      {
#line 1026 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_LastUsed_8 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7;
#line 1026 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_SlotMap_6 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5;
#line 1025 "switch_util.m"
      }
#line 1025 "switch_util.m"
    else
#line 1028 "switch_util.m"
      {
#line 1028 "switch_util.m"
        MR_Word backend_libs__switch_util__StringCaseRep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1028 "switch_util.m"
        MR_Word backend_libs__switch_util__StringCaseReps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1028 "switch_util.m"
        MR_String backend_libs__switch_util__String_25;
#line 1028 "switch_util.m"
        MR_Box backend_libs__switch_util__CaseRep_26;
#line 1028 "switch_util.m"
        MR_Word backend_libs__switch_util__NewSlot_27;
#line 1028 "switch_util.m"
        MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39;
#line 1028 "switch_util.m"
        MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40;
#line 1045 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_67_67;

#line 1029 "switch_util.m"
        {
#line 1029 "switch_util.m"
          backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_64, backend_libs__switch_util__StringCaseReps_19, backend_libs__switch_util__HeadVar__2_2, backend_libs__switch_util__HeadVar__3_3, backend_libs__switch_util__HeadVar__4_4, backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_5, &backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_7, &backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40);
        }
#line 1031 "switch_util.m"
        backend_libs__switch_util__String_25 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StringCaseRep_18, (MR_Integer) 0)));
#line 1031 "switch_util.m"
        backend_libs__switch_util__CaseRep_26 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StringCaseRep_18, (MR_Integer) 1));
#line 1032 "switch_util.m"
        {
#line 1032 "switch_util.m"
          backend_libs__switch_util__NewSlot_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1032 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewSlot_27, 0) = ((MR_Box) (backend_libs__switch_util__String_25));
#line 1032 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewSlot_27, 1) = ((MR_Box) ((MR_Integer) -1));
#line 1032 "switch_util.m"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__NewSlot_27, 2) = backend_libs__switch_util__CaseRep_26;
#line 1032 "switch_util.m"
        }
#line 10834 "backend_libs.switch_util.c"
        {
#line 10836 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10838 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_67_67, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10840 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_67_67, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_64));
#line 10842 "backend_libs.switch_util.c"
        }
#line 1033 "switch_util.m"
        {
#line 1033 "switch_util.m"
          backend_libs__switch_util__succeeded = mercury__map__contains_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_67_67, backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, ((MR_Box) (backend_libs__switch_util__HeadVar__3_3)));
        }
#line 1045 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1034 "switch_util.m"
          {
#line 1034 "switch_util.m"
            MR_Integer backend_libs__switch_util__ChainEnd_28;
#line 1034 "switch_util.m"
            MR_Word backend_libs__switch_util__ChainEndSlot0_29;
#line 1034 "switch_util.m"
            MR_String backend_libs__switch_util__PrevString_30;
#line 1034 "switch_util.m"
            MR_Box backend_libs__switch_util__PrevCaseRep_32;
#line 1034 "switch_util.m"
            MR_Word backend_libs__switch_util__ChainEndSlot_33;
#line 1034 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_43_43;
#line 1036 "switch_util.m"
            MR_Box backend_libs__switch_util__conv0_ChainEndSlot0_29;
#line 1037 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_31_31;
#line 1039 "switch_util.m"
            MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_SlotMap_43_43;
#line 1040 "switch_util.m"
            MR_Word backend_libs__switch_util__conv2_STATE_VARIABLE_SlotMap_6;

#line 1034 "switch_util.m"
            {
#line 1034 "switch_util.m"
              backend_libs__switch_util__follow_hash_chain_3_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_64, backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__HeadVar__3_3, &backend_libs__switch_util__ChainEnd_28);
            }
#line 1035 "switch_util.m"
            {
#line 1035 "switch_util.m"
              backend_libs__switch_util__next_free_hash_slot_5_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_64, backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__HeadVar__4_4, backend_libs__switch_util__HeadVar__2_2, backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40, backend_libs__switch_util__STATE_VARIABLE_LastUsed_8);
            }
#line 1036 "switch_util.m"
            {
#line 1036 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_67_67, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, backend_libs__switch_util__ChainEnd_28, &backend_libs__switch_util__conv0_ChainEndSlot0_29);
            }
#line 1036 "switch_util.m"
            backend_libs__switch_util__ChainEndSlot0_29 = ((MR_Word) backend_libs__switch_util__conv0_ChainEndSlot0_29);
#line 1037 "switch_util.m"
            backend_libs__switch_util__PrevString_30 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot0_29, (MR_Integer) 0)));
#line 1037 "switch_util.m"
            backend_libs__switch_util__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot0_29, (MR_Integer) 1)));
#line 1037 "switch_util.m"
            backend_libs__switch_util__PrevCaseRep_32 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot0_29, (MR_Integer) 2));
#line 1038 "switch_util.m"
            {
#line 1038 "switch_util.m"
              backend_libs__switch_util__ChainEndSlot_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot_33, 0) = ((MR_Box) (backend_libs__switch_util__PrevString_30));
#line 1038 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot_33, 1) = ((MR_Box) (*backend_libs__switch_util__STATE_VARIABLE_LastUsed_8));
#line 1038 "switch_util.m"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__ChainEndSlot_33, 2) = backend_libs__switch_util__PrevCaseRep_32;
#line 1038 "switch_util.m"
            }
#line 1039 "switch_util.m"
            {
#line 1039 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_67_67, backend_libs__switch_util__ChainEnd_28, ((MR_Box) (backend_libs__switch_util__ChainEndSlot_33)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, &backend_libs__switch_util__conv1_STATE_VARIABLE_SlotMap_43_43);
            }
#line 1039 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_SlotMap_43_43 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_SlotMap_43_43;
#line 1040 "switch_util.m"
            {
#line 1040 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_67_67, *backend_libs__switch_util__STATE_VARIABLE_LastUsed_8, ((MR_Box) (backend_libs__switch_util__NewSlot_27)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_43_43, &backend_libs__switch_util__conv2_STATE_VARIABLE_SlotMap_6);
            }
#line 1040 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_SlotMap_6 = (MR_Word) backend_libs__switch_util__conv2_STATE_VARIABLE_SlotMap_6;
#line 1034 "switch_util.m"
          }
#line 1045 "switch_util.m"
        else
#line 1046 "switch_util.m"
          {
#line 1046 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_73_73;
#line 1046 "switch_util.m"
            MR_Word backend_libs__switch_util__conv3_STATE_VARIABLE_SlotMap_6;

#line 10934 "backend_libs.switch_util.c"
            {
#line 10936 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10938 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 10940 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_64));
#line 10942 "backend_libs.switch_util.c"
            }
#line 1046 "switch_util.m"
            {
#line 1046 "switch_util.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_73_73, backend_libs__switch_util__HeadVar__3_3, ((MR_Box) (backend_libs__switch_util__NewSlot_27)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_SlotMap_39_39, &backend_libs__switch_util__conv3_STATE_VARIABLE_SlotMap_6);
            }
#line 1046 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_SlotMap_6 = (MR_Word) backend_libs__switch_util__conv3_STATE_VARIABLE_SlotMap_6;
#line 1046 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_LastUsed_8 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_40_40;
#line 1046 "switch_util.m"
          }
#line 1028 "switch_util.m"
      }
#line 1025 "switch_util.m"
  }
#line 1018 "switch_util.m"
}

#line 1003 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_loop_over_hashes_7_p_0(
#line 1003 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_32,
#line 1003 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 1003 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_2,
#line 1003 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_3,
#line 1003 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4,
#line 1003 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SlotMap_5,
#line 1003 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6,
#line 1003 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LastUsed_7)
#line 1003 "switch_util.m"
{
#line 1010 "switch_util.m"
  while (MR_TRUE)
#line 1010 "switch_util.m"
    {
#line 1010 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1010 "switch_util.m"
      {
#line 1010 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 1010 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1010 "switch_util.m"
          {
#line 1010 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_LastUsed_7 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6;
#line 1010 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_SlotMap_5 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4;
#line 1010 "switch_util.m"
          }
#line 1010 "switch_util.m"
        else
#line 1012 "switch_util.m"
          {
#line 1012 "switch_util.m"
            MR_Integer backend_libs__switch_util__HashVal_16;
#line 1012 "switch_util.m"
            MR_Word backend_libs__switch_util__StringCaseReps_17;
#line 1012 "switch_util.m"
            MR_Word backend_libs__switch_util__Rest_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1012 "switch_util.m"
            MR_Word backend_libs__switch_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 1012 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_28_28;
#line 1012 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_29_29;

#line 1011 "switch_util.m"
            backend_libs__switch_util__HashVal_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_27_27, (MR_Integer) 0)));
#line 1011 "switch_util.m"
            backend_libs__switch_util__StringCaseReps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_27_27, (MR_Integer) 1)));
#line 1013 "switch_util.m"
            {
#line 1013 "switch_util.m"
              backend_libs__switch_util__calc_string_hash_slots_loop_over_hash_strings_8_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_32, backend_libs__switch_util__StringCaseReps_17, backend_libs__switch_util__TableSize_2, backend_libs__switch_util__HashVal_16, backend_libs__switch_util__HashMap_3, backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4, &backend_libs__switch_util__STATE_VARIABLE_SlotMap_28_28, backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6, &backend_libs__switch_util__STATE_VARIABLE_LastUsed_29_29);
            }
#line 1015 "switch_util.m"
            /* direct tailcall eliminated */
#line 1015 "switch_util.m"
            {
#line 1015 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Rest_18;
#line 1015 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_SlotMap_0__tmp_copy_4 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_28_28;
#line 1015 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_LastUsed_0__tmp_copy_6 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_29_29;

#line 1015 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_LastUsed_0_6 = backend_libs__switch_util__STATE_VARIABLE_LastUsed_0__tmp_copy_6;
#line 1015 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_SlotMap_0_4 = backend_libs__switch_util__STATE_VARIABLE_SlotMap_0__tmp_copy_4;
#line 1015 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 1015 "switch_util.m"
            }
#line 1015 "switch_util.m"
            continue;
#line 1012 "switch_util.m"
          }
#line 1010 "switch_util.m"
      }
#line 1010 "switch_util.m"
      break;
#line 1010 "switch_util.m"
    }
#line 1003 "switch_util.m"
}

#line 988 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__calc_string_hash_slots_4_p_0(
#line 988 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_19,
#line 988 "switch_util.m"
  MR_Integer backend_libs__switch_util__TableSize_5,
#line 988 "switch_util.m"
  MR_Word backend_libs__switch_util__HashValList_6,
#line 988 "switch_util.m"
  MR_Word backend_libs__switch_util__HashMap_7,
#line 988 "switch_util.m"
  MR_Word * backend_libs__switch_util__SlotMap_8)
#line 988 "switch_util.m"
{
#line 993 "switch_util.m"
  {
#line 993 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 993 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_22_22;
#line 993 "switch_util.m"
    MR_Word backend_libs__switch_util__V_14_14;
#line 997 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_10_10;

#line 11088 "backend_libs.switch_util.c"
    {
#line 11090 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11092 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_string_hash_slot_1));
#line 11094 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_22_22, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_19));
#line 11096 "backend_libs.switch_util.c"
    }
#line 998 "switch_util.m"
    {
#line 998 "switch_util.m"
      backend_libs__switch_util__V_14_14 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_22_22);
    }
#line 997 "switch_util.m"
    {
#line 997 "switch_util.m"
      backend_libs__switch_util__calc_string_hash_slots_loop_over_hashes_7_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_19, backend_libs__switch_util__HashValList_6, backend_libs__switch_util__TableSize_5, backend_libs__switch_util__HashMap_7, backend_libs__switch_util__V_14_14, backend_libs__switch_util__SlotMap_8, (MR_Integer) 0, &backend_libs__switch_util__V_10_10);
    }
#line 993 "switch_util.m"
  }
#line 988 "switch_util.m"
}

#line 942 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_case_14_p_0(
#line 942 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 942 "switch_util.m"
  MR_Word backend_libs__switch_util__StrCaseRep_15,
#line 942 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_16,
#line 942 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_31,
#line 942 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap4_32,
#line 942 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_33,
#line 942 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap5_34,
#line 942 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_35,
#line 942 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap6_36,
#line 942 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_37,
#line 942 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_38,
#line 942 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_39,
#line 942 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_40,
#line 942 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_41,
#line 942 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_42)
#line 942 "switch_util.m"
{
#line 953 "switch_util.m"
  {
#line 953 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 953 "switch_util.m"
    MR_String backend_libs__switch_util__String_23 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StrCaseRep_15, (MR_Integer) 0)));
#line 953 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashVal4_25;
#line 953 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashVal5_26;
#line 953 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashVal6_27;
#line 953 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_43_43;
#line 953 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_44_44;
#line 953 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_45_45;
#line 954 "switch_util.m"
    MR_Box backend_libs__switch_util___CaseRep_24 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__StrCaseRep_15, (MR_Integer) 1));
#line 961 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_73_73;
#line 961 "switch_util.m"
    MR_Word backend_libs__switch_util__OldEntries4_28;
#line 958 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_71_71;
#line 958 "switch_util.m"
    MR_Box backend_libs__switch_util__conv0_OldEntries4_28;
#line 967 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_91_91;
#line 967 "switch_util.m"
    MR_Word backend_libs__switch_util__OldEntries5_29;
#line 964 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_89_89;
#line 964 "switch_util.m"
    MR_Box backend_libs__switch_util__conv3_OldEntries5_29;
#line 973 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_109_109;
#line 973 "switch_util.m"
    MR_Word backend_libs__switch_util__OldEntries6_30;
#line 970 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_107_107;
#line 970 "switch_util.m"
    MR_Box backend_libs__switch_util__conv6_OldEntries6_30;

#line 955 "switch_util.m"
    {
#line 955 "switch_util.m"
      backend_libs__switch_util__V_43_43 = mercury__string__hash4_1_f_0(backend_libs__switch_util__String_23);
    }
#line 955 "switch_util.m"
    backend_libs__switch_util__HashVal4_25 = (backend_libs__switch_util__V_43_43 & backend_libs__switch_util__HashMask_16);
#line 956 "switch_util.m"
    {
#line 956 "switch_util.m"
      backend_libs__switch_util__V_44_44 = mercury__string__hash5_1_f_0(backend_libs__switch_util__String_23);
    }
#line 956 "switch_util.m"
    backend_libs__switch_util__HashVal5_26 = (backend_libs__switch_util__V_44_44 & backend_libs__switch_util__HashMask_16);
#line 957 "switch_util.m"
    {
#line 957 "switch_util.m"
      backend_libs__switch_util__V_45_45 = mercury__string__hash6_1_f_0(backend_libs__switch_util__String_23);
    }
#line 957 "switch_util.m"
    backend_libs__switch_util__HashVal6_27 = (backend_libs__switch_util__V_45_45 & backend_libs__switch_util__HashMask_16);
#line 11214 "backend_libs.switch_util.c"
    {
#line 11216 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_71_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11218 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_71_71, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11220 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_71_71, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11222 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_71_71, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11224 "backend_libs.switch_util.c"
    }
#line 11226 "backend_libs.switch_util.c"
    {
#line 11228 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11230 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11232 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_73_73, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_71_71));
#line 11234 "backend_libs.switch_util.c"
    }
#line 958 "switch_util.m"
    {
#line 958 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_73_73, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_31, backend_libs__switch_util__HashVal4_25, &backend_libs__switch_util__conv0_OldEntries4_28);
    }
#line 958 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 958 "switch_util.m"
      {
#line 958 "switch_util.m"
        backend_libs__switch_util__OldEntries4_28 = ((MR_Word) backend_libs__switch_util__conv0_OldEntries4_28);
#line 958 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 958 "switch_util.m"
      }
#line 961 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 959 "switch_util.m"
      {
#line 959 "switch_util.m"
        MR_Word backend_libs__switch_util__V_46_46;
#line 959 "switch_util.m"
        MR_Word backend_libs__switch_util__conv1_STATE_VARIABLE_HashMap4_32;

#line 959 "switch_util.m"
        {
#line 959 "switch_util.m"
          backend_libs__switch_util__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_46_46, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 959 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_46_46, 1) = ((MR_Box) (backend_libs__switch_util__OldEntries4_28));
#line 959 "switch_util.m"
        }
#line 959 "switch_util.m"
        {
#line 959 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_73_73, backend_libs__switch_util__HashVal4_25, ((MR_Box) (backend_libs__switch_util__V_46_46)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_31, &backend_libs__switch_util__conv1_STATE_VARIABLE_HashMap4_32);
        }
#line 959 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap4_32 = (MR_Word) backend_libs__switch_util__conv1_STATE_VARIABLE_HashMap4_32;
#line 960 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_38 = (backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_37 + (MR_Integer) 1);
#line 959 "switch_util.m"
      }
#line 961 "switch_util.m"
    else
#line 962 "switch_util.m"
      {
#line 962 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_83_83;
#line 962 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_85_85;
#line 962 "switch_util.m"
        MR_Word backend_libs__switch_util__V_50_50;
#line 962 "switch_util.m"
        MR_Word backend_libs__switch_util__conv2_STATE_VARIABLE_HashMap4_32;

#line 962 "switch_util.m"
        {
#line 962 "switch_util.m"
          backend_libs__switch_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 962 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_50_50, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 962 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 962 "switch_util.m"
        }
#line 11304 "backend_libs.switch_util.c"
        {
#line 11306 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11308 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_83_83, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11310 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_83_83, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11312 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_83_83, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11314 "backend_libs.switch_util.c"
        }
#line 11316 "backend_libs.switch_util.c"
        {
#line 11318 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_85_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11320 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_85_85, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11322 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_85_85, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_83_83));
#line 11324 "backend_libs.switch_util.c"
        }
#line 962 "switch_util.m"
        {
#line 962 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_85_85, backend_libs__switch_util__HashVal4_25, ((MR_Box) (backend_libs__switch_util__V_50_50)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_31, &backend_libs__switch_util__conv2_STATE_VARIABLE_HashMap4_32);
        }
#line 962 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap4_32 = (MR_Word) backend_libs__switch_util__conv2_STATE_VARIABLE_HashMap4_32;
#line 962 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_38 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_37;
#line 962 "switch_util.m"
      }
#line 11337 "backend_libs.switch_util.c"
    {
#line 11339 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11341 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_89_89, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11343 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_89_89, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11345 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_89_89, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11347 "backend_libs.switch_util.c"
    }
#line 11349 "backend_libs.switch_util.c"
    {
#line 11351 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11353 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_91_91, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11355 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_91_91, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_89_89));
#line 11357 "backend_libs.switch_util.c"
    }
#line 964 "switch_util.m"
    {
#line 964 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_91_91, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_33, backend_libs__switch_util__HashVal5_26, &backend_libs__switch_util__conv3_OldEntries5_29);
    }
#line 964 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 964 "switch_util.m"
      {
#line 964 "switch_util.m"
        backend_libs__switch_util__OldEntries5_29 = ((MR_Word) backend_libs__switch_util__conv3_OldEntries5_29);
#line 964 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 964 "switch_util.m"
      }
#line 967 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 965 "switch_util.m"
      {
#line 965 "switch_util.m"
        MR_Word backend_libs__switch_util__V_53_53;
#line 965 "switch_util.m"
        MR_Word backend_libs__switch_util__conv4_STATE_VARIABLE_HashMap5_34;

#line 965 "switch_util.m"
        {
#line 965 "switch_util.m"
          backend_libs__switch_util__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_53_53, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 965 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_53_53, 1) = ((MR_Box) (backend_libs__switch_util__OldEntries5_29));
#line 965 "switch_util.m"
        }
#line 965 "switch_util.m"
        {
#line 965 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_91_91, backend_libs__switch_util__HashVal5_26, ((MR_Box) (backend_libs__switch_util__V_53_53)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_33, &backend_libs__switch_util__conv4_STATE_VARIABLE_HashMap5_34);
        }
#line 965 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap5_34 = (MR_Word) backend_libs__switch_util__conv4_STATE_VARIABLE_HashMap5_34;
#line 966 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_40 = (backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_39 + (MR_Integer) 1);
#line 965 "switch_util.m"
      }
#line 967 "switch_util.m"
    else
#line 968 "switch_util.m"
      {
#line 968 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_101_101;
#line 968 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_103_103;
#line 968 "switch_util.m"
        MR_Word backend_libs__switch_util__V_57_57;
#line 968 "switch_util.m"
        MR_Word backend_libs__switch_util__conv5_STATE_VARIABLE_HashMap5_34;

#line 968 "switch_util.m"
        {
#line 968 "switch_util.m"
          backend_libs__switch_util__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_57_57, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 968 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 968 "switch_util.m"
        }
#line 11427 "backend_libs.switch_util.c"
        {
#line 11429 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11431 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_101_101, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11433 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_101_101, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11435 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_101_101, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11437 "backend_libs.switch_util.c"
        }
#line 11439 "backend_libs.switch_util.c"
        {
#line 11441 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11443 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_103_103, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11445 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_103_103, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_101_101));
#line 11447 "backend_libs.switch_util.c"
        }
#line 968 "switch_util.m"
        {
#line 968 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_103_103, backend_libs__switch_util__HashVal5_26, ((MR_Box) (backend_libs__switch_util__V_57_57)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_33, &backend_libs__switch_util__conv5_STATE_VARIABLE_HashMap5_34);
        }
#line 968 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap5_34 = (MR_Word) backend_libs__switch_util__conv5_STATE_VARIABLE_HashMap5_34;
#line 968 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_40 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_39;
#line 968 "switch_util.m"
      }
#line 11460 "backend_libs.switch_util.c"
    {
#line 11462 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11464 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_107_107, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11466 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_107_107, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11468 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_107_107, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11470 "backend_libs.switch_util.c"
    }
#line 11472 "backend_libs.switch_util.c"
    {
#line 11474 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11476 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_109_109, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11478 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_109_109, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_107_107));
#line 11480 "backend_libs.switch_util.c"
    }
#line 970 "switch_util.m"
    {
#line 970 "switch_util.m"
      backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_109_109, (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_35, backend_libs__switch_util__HashVal6_27, &backend_libs__switch_util__conv6_OldEntries6_30);
    }
#line 970 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 970 "switch_util.m"
      {
#line 970 "switch_util.m"
        backend_libs__switch_util__OldEntries6_30 = ((MR_Word) backend_libs__switch_util__conv6_OldEntries6_30);
#line 970 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 970 "switch_util.m"
      }
#line 973 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 971 "switch_util.m"
      {
#line 971 "switch_util.m"
        MR_Word backend_libs__switch_util__V_60_60;
#line 971 "switch_util.m"
        MR_Word backend_libs__switch_util__conv7_STATE_VARIABLE_HashMap6_36;

#line 971 "switch_util.m"
        {
#line 971 "switch_util.m"
          backend_libs__switch_util__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_60_60, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 971 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_60_60, 1) = ((MR_Box) (backend_libs__switch_util__OldEntries6_30));
#line 971 "switch_util.m"
        }
#line 971 "switch_util.m"
        {
#line 971 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_109_109, backend_libs__switch_util__HashVal6_27, ((MR_Box) (backend_libs__switch_util__V_60_60)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_35, &backend_libs__switch_util__conv7_STATE_VARIABLE_HashMap6_36);
        }
#line 971 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap6_36 = (MR_Word) backend_libs__switch_util__conv7_STATE_VARIABLE_HashMap6_36;
#line 972 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_42 = (backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_41 + (MR_Integer) 1);
#line 971 "switch_util.m"
      }
#line 973 "switch_util.m"
    else
#line 974 "switch_util.m"
      {
#line 974 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_119_119;
#line 974 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeInfo_121_121;
#line 974 "switch_util.m"
        MR_Word backend_libs__switch_util__V_64_64;
#line 974 "switch_util.m"
        MR_Word backend_libs__switch_util__conv8_STATE_VARIABLE_HashMap6_36;

#line 974 "switch_util.m"
        {
#line 974 "switch_util.m"
          backend_libs__switch_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_64_64, 0) = ((MR_Box) (backend_libs__switch_util__StrCaseRep_15));
#line 974 "switch_util.m"
          MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 974 "switch_util.m"
        }
#line 11550 "backend_libs.switch_util.c"
        {
#line 11552 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11554 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_119_119, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 11556 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_119_119, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 11558 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_119_119, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_67));
#line 11560 "backend_libs.switch_util.c"
        }
#line 11562 "backend_libs.switch_util.c"
        {
#line 11564 "backend_libs.switch_util.c"
          backend_libs__switch_util__TypeInfo_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11566 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_121_121, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 11568 "backend_libs.switch_util.c"
          MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_121_121, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_119_119));
#line 11570 "backend_libs.switch_util.c"
        }
#line 974 "switch_util.m"
        {
#line 974 "switch_util.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(backend_libs__switch_util__TypeInfo_121_121, backend_libs__switch_util__HashVal6_27, ((MR_Box) (backend_libs__switch_util__V_64_64)), (MR_Word) backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_35, &backend_libs__switch_util__conv8_STATE_VARIABLE_HashMap6_36);
        }
#line 974 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_HashMap6_36 = (MR_Word) backend_libs__switch_util__conv8_STATE_VARIABLE_HashMap6_36;
#line 974 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_42 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_41;
#line 974 "switch_util.m"
      }
#line 953 "switch_util.m"
  }
#line 942 "switch_util.m"
}

#line 921 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__string_hash_cases_14_p_0(
#line 921 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_CaseRep_67,
#line 921 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 921 "switch_util.m"
  MR_Integer backend_libs__switch_util__HashMask_2,
#line 921 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_3,
#line 921 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap4_4,
#line 921 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_5,
#line 921 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap5_6,
#line 921 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_7,
#line 921 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_HashMap6_8,
#line 921 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_9,
#line 921 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_10,
#line 921 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_11,
#line 921 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_12,
#line 921 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_13,
#line 921 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_14)
#line 921 "switch_util.m"
{
#line 930 "switch_util.m"
  while (MR_TRUE)
#line 930 "switch_util.m"
    {
#line 930 "switch_util.m"
      /* tailcall optimized into a loop */
#line 930 "switch_util.m"
      {
#line 930 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 930 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 930 "switch_util.m"
          {
#line 931 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_14 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_13;
#line 931 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_12 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_11;
#line 931 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_10 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_9;
#line 930 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_HashMap6_8 = backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_7;
#line 930 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_HashMap5_6 = backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_5;
#line 930 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_HashMap4_4 = backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_3;
#line 930 "switch_util.m"
          }
#line 930 "switch_util.m"
        else
#line 934 "switch_util.m"
          {
#line 934 "switch_util.m"
            MR_Word backend_libs__switch_util__StrData_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 934 "switch_util.m"
            MR_Word backend_libs__switch_util__StrsDatas_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 934 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_55_55;
#line 934 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_56_56;
#line 934 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_57_57;
#line 934 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_58_58;
#line 934 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_59_59;
#line 934 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_60_60;

#line 935 "switch_util.m"
            {
#line 935 "switch_util.m"
              backend_libs__switch_util__string_hash_case_14_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_67, backend_libs__switch_util__StrData_34, backend_libs__switch_util__HashMask_2, backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_3, &backend_libs__switch_util__STATE_VARIABLE_HashMap4_55_55, backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_5, &backend_libs__switch_util__STATE_VARIABLE_HashMap5_56_56, backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_7, &backend_libs__switch_util__STATE_VARIABLE_HashMap6_57_57, backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_9, &backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_58_58, backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_11, &backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_59_59, backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_13, &backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_60_60);
            }
#line 938 "switch_util.m"
            /* direct tailcall eliminated */
#line 938 "switch_util.m"
            {
#line 938 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__StrsDatas_35;
#line 938 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap4_0__tmp_copy_3 = backend_libs__switch_util__STATE_VARIABLE_HashMap4_55_55;
#line 938 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap5_0__tmp_copy_5 = backend_libs__switch_util__STATE_VARIABLE_HashMap5_56_56;
#line 938 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_HashMap6_0__tmp_copy_7 = backend_libs__switch_util__STATE_VARIABLE_HashMap6_57_57;
#line 938 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0__tmp_copy_9 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_58_58;
#line 938 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0__tmp_copy_11 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_59_59;
#line 938 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0__tmp_copy_13 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_60_60;

#line 938 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0_13 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions6_0__tmp_copy_13;
#line 938 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0_11 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions5_0__tmp_copy_11;
#line 938 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0_9 = backend_libs__switch_util__STATE_VARIABLE_NumCollisions4_0__tmp_copy_9;
#line 938 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_HashMap6_0_7 = backend_libs__switch_util__STATE_VARIABLE_HashMap6_0__tmp_copy_7;
#line 938 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_HashMap5_0_5 = backend_libs__switch_util__STATE_VARIABLE_HashMap5_0__tmp_copy_5;
#line 938 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_HashMap4_0_3 = backend_libs__switch_util__STATE_VARIABLE_HashMap4_0__tmp_copy_3;
#line 938 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 938 "switch_util.m"
            }
#line 938 "switch_util.m"
            continue;
#line 934 "switch_util.m"
          }
#line 930 "switch_util.m"
      }
#line 930 "switch_util.m"
      break;
#line 930 "switch_util.m"
    }
#line 921 "switch_util.m"
}

#line 789 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__project_soln_consts_to_one_soln_3_p_0(
#line 789 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Key_7,
#line 789 "switch_util.m"
  MR_Word backend_libs__switch_util__TypeInfo_for_Rval_8,
#line 789 "switch_util.m"
  MR_Box backend_libs__switch_util___Key_4,
#line 789 "switch_util.m"
  MR_Word backend_libs__switch_util__Solns_5,
#line 789 "switch_util.m"
  MR_Word * backend_libs__switch_util__Values_6)
#line 789 "switch_util.m"
{
#line 793 "switch_util.m"
  {
#line 793 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 793 "switch_util.m"
    {
#line 793 "switch_util.m"
      return backend_libs__switch_util__succeeded = backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_115_111_108_110_95_99_111_110_115_116_115_95_116_111_95_111_110_101_95_115_111_108_110_95_95_91_49_44_32_51_93_95_48_3_p_0(backend_libs__switch_util__TypeInfo_for_Rval_8, backend_libs__switch_util__Solns_5, backend_libs__switch_util__Values_6);
    }
#line 793 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 793 "switch_util.m"
  }
#line 789 "switch_util.m"
}

#line 719 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__filter_out_failing_cases_loop_5_p_0(
#line 719 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 719 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2,
#line 719 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_3,
#line 719 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_4,
#line 719 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_5)
#line 719 "switch_util.m"
{
#line 723 "switch_util.m"
  while (MR_TRUE)
#line 723 "switch_util.m"
    {
#line 723 "switch_util.m"
      /* tailcall optimized into a loop */
#line 723 "switch_util.m"
      {
#line 723 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 723 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 723 "switch_util.m"
          {
#line 723 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_5 = backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_4;
#line 723 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_3 = backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2;
#line 723 "switch_util.m"
          }
#line 723 "switch_util.m"
        else
#line 725 "switch_util.m"
          {
#line 725 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCase_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 725 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCases_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 725 "switch_util.m"
            MR_Word backend_libs__switch_util__Goal_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 3)));
#line 725 "switch_util.m"
            MR_Word backend_libs__switch_util__GoalExpr_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Goal_19, (MR_Integer) 0)));
#line 725 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_27_27;
#line 725 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28;
#line 726 "switch_util.m"
            MR_Word backend_libs__switch_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 0)));
#line 726 "switch_util.m"
            MR_Word backend_libs__switch_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 1)));
#line 726 "switch_util.m"
            MR_Word backend_libs__switch_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 2)));
#line 727 "switch_util.m"
            MR_Word backend_libs__switch_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Goal_19, (MR_Integer) 1)));
#line 728 "switch_util.m"
            MR_Word backend_libs__switch_util__V_26_26;

#line 728 "switch_util.m"
            backend_libs__switch_util__succeeded = ((((MR_tag((MR_Word) backend_libs__switch_util__GoalExpr_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__GoalExpr_20, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 728 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 728 "switch_util.m"
              {
#line 728 "switch_util.m"
                backend_libs__switch_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__GoalExpr_20, (MR_Integer) 1)));
#line 728 "switch_util.m"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_26_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 728 "switch_util.m"
              }
#line 730 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 729 "switch_util.m"
              {
#line 729 "switch_util.m"
                backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_27_27 = (MR_Integer) 0;
#line 729 "switch_util.m"
                backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28 = backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2;
#line 729 "switch_util.m"
              }
#line 730 "switch_util.m"
            else
#line 731 "switch_util.m"
              {
#line 731 "switch_util.m"
                {
#line 731 "switch_util.m"
                  backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28, 0) = ((MR_Box) (backend_libs__switch_util__TaggedCase_12));
#line 731 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28, 1) = ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2));
#line 731 "switch_util.m"
                }
#line 731 "switch_util.m"
                backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_27_27 = backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_4;
#line 731 "switch_util.m"
              }
#line 733 "switch_util.m"
            /* direct tailcall eliminated */
#line 733 "switch_util.m"
            {
#line 733 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__TaggedCases_13;
#line 733 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_28_28;
#line 733 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0__tmp_copy_4 = backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_27_27;

#line 733 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_4 = backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0__tmp_copy_4;
#line 733 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0_2 = backend_libs__switch_util__STATE_VARIABLE_RevTaggedCases_0__tmp_copy_2;
#line 733 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 733 "switch_util.m"
            }
#line 733 "switch_util.m"
            continue;
#line 725 "switch_util.m"
          }
#line 723 "switch_util.m"
      }
#line 723 "switch_util.m"
      break;
#line 723 "switch_util.m"
    }
#line 719 "switch_util.m"
}

#line 489 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__num_cons_ids_in_tagged_cases_loop_5_p_0(
#line 489 "switch_util.m"
  MR_Word backend_libs__switch_util__HeadVar__1_1,
#line 489 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0_2,
#line 489 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumConsIds_3,
#line 489 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumArms_0_4,
#line 489 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumArms_5)
#line 489 "switch_util.m"
{
#line 492 "switch_util.m"
  while (MR_TRUE)
#line 492 "switch_util.m"
    {
#line 492 "switch_util.m"
      /* tailcall optimized into a loop */
#line 492 "switch_util.m"
      {
#line 492 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 492 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "switch_util.m"
          {
#line 492 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumArms_5 = backend_libs__switch_util__STATE_VARIABLE_NumArms_0_4;
#line 492 "switch_util.m"
            *backend_libs__switch_util__STATE_VARIABLE_NumConsIds_3 = backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0_2;
#line 492 "switch_util.m"
          }
#line 492 "switch_util.m"
        else
#line 494 "switch_util.m"
          {
#line 494 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCase_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 494 "switch_util.m"
            MR_Word backend_libs__switch_util__TaggedCases_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 494 "switch_util.m"
            MR_Word backend_libs__switch_util__OtherCondIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 1)));
#line 494 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumConsIds_24_24;
#line 494 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_25_25 = (backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0_2 + (MR_Integer) 1);
#line 494 "switch_util.m"
            MR_Integer backend_libs__switch_util__V_27_27;
#line 494 "switch_util.m"
            MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumArms_28_28;
#line 495 "switch_util.m"
            MR_Word backend_libs__switch_util___MainConsId_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 0)));
#line 495 "switch_util.m"
            MR_Word backend_libs__switch_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 2)));
#line 495 "switch_util.m"
            MR_Word backend_libs__switch_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__TaggedCase_12, (MR_Integer) 3)));

#line 496 "switch_util.m"
            {
#line 496 "switch_util.m"
              backend_libs__switch_util__V_27_27 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_tagged_cons_id_0, backend_libs__switch_util__OtherCondIds_17);
            }
#line 496 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_NumConsIds_24_24 = (backend_libs__switch_util__V_25_25 + backend_libs__switch_util__V_27_27);
#line 497 "switch_util.m"
            backend_libs__switch_util__STATE_VARIABLE_NumArms_28_28 = (backend_libs__switch_util__STATE_VARIABLE_NumArms_0_4 + (MR_Integer) 1);
#line 498 "switch_util.m"
            /* direct tailcall eliminated */
#line 498 "switch_util.m"
            {
#line 498 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__TaggedCases_13;
#line 498 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_NumConsIds_24_24;
#line 498 "switch_util.m"
              MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumArms_0__tmp_copy_4 = backend_libs__switch_util__STATE_VARIABLE_NumArms_28_28;

#line 498 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumArms_0_4 = backend_libs__switch_util__STATE_VARIABLE_NumArms_0__tmp_copy_4;
#line 498 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0_2 = backend_libs__switch_util__STATE_VARIABLE_NumConsIds_0__tmp_copy_2;
#line 498 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 498 "switch_util.m"
            }
#line 498 "switch_util.m"
            continue;
#line 494 "switch_util.m"
          }
#line 492 "switch_util.m"
      }
#line 492 "switch_util.m"
      break;
#line 492 "switch_util.m"
    }
#line 489 "switch_util.m"
}

#line 467 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__tag_cons_id_in_int_switch_11_p_0(
#line 467 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_12,
#line 467 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsId_13,
#line 467 "switch_util.m"
  MR_Word * backend_libs__switch_util__TaggedConsId_14,
#line 467 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_21,
#line 467 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_LowerLimit_22,
#line 467 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_23,
#line 467 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_UpperLimit_24,
#line 467 "switch_util.m"
  MR_Integer backend_libs__switch_util__STATE_VARIABLE_NumValues_0_25,
#line 467 "switch_util.m"
  MR_Integer * backend_libs__switch_util__STATE_VARIABLE_NumValues_26,
#line 467 "switch_util.m"
  MR_Word backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_27,
#line 467 "switch_util.m"
  MR_Word * backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_28)
#line 467 "switch_util.m"
{
#line 473 "switch_util.m"
  {
#line 473 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 473 "switch_util.m"
    MR_Word backend_libs__switch_util__ConsTag_19;
#line 480 "switch_util.m"
    MR_Integer backend_libs__switch_util__IntTag_20;

#line 474 "switch_util.m"
    {
#line 474 "switch_util.m"
      backend_libs__switch_util__ConsTag_19 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(backend_libs__switch_util__ModuleInfo_12, backend_libs__switch_util__ConsId_13);
    }
#line 475 "switch_util.m"
    {
#line 475 "switch_util.m"
      MR_Word base;
#line 475 "switch_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 475 "switch_util.m"
      *backend_libs__switch_util__TaggedConsId_14 = base;
#line 475 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__switch_util__ConsId_13));
#line 475 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__switch_util__ConsTag_19));
#line 475 "switch_util.m"
    }
#line 476 "switch_util.m"
    backend_libs__switch_util__succeeded = ((((MR_tag((MR_Word) backend_libs__switch_util__ConsTag_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__ConsTag_19, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 476 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 476 "switch_util.m"
      {
#line 476 "switch_util.m"
        backend_libs__switch_util__IntTag_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__ConsTag_19, (MR_Integer) 1)));
#line 477 "switch_util.m"
        {
#line 477 "switch_util.m"
          mercury__int__min_3_p_0(backend_libs__switch_util__IntTag_20, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_21, backend_libs__switch_util__STATE_VARIABLE_LowerLimit_22);
        }
#line 478 "switch_util.m"
        {
#line 478 "switch_util.m"
          mercury__int__max_3_p_0(backend_libs__switch_util__IntTag_20, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_23, backend_libs__switch_util__STATE_VARIABLE_UpperLimit_24);
        }
#line 479 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumValues_26 = (backend_libs__switch_util__STATE_VARIABLE_NumValues_0_25 + (MR_Integer) 1);
#line 477 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_28 = backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_0_27;
#line 476 "switch_util.m"
      }
#line 476 "switch_util.m"
    else
#line 481 "switch_util.m"
      {
#line 481 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_IsIntSwitch_28 = (MR_Integer) 1;
#line 481 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_NumValues_26 = backend_libs__switch_util__STATE_VARIABLE_NumValues_0_25;
#line 481 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_UpperLimit_24 = backend_libs__switch_util__STATE_VARIABLE_UpperLimit_0_23;
#line 481 "switch_util.m"
        *backend_libs__switch_util__STATE_VARIABLE_LowerLimit_22 = backend_libs__switch_util__STATE_VARIABLE_LowerLimit_0_21;
#line 481 "switch_util.m"
      }
#line 473 "switch_util.m"
  }
#line 467 "switch_util.m"
}

#line 461 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__tag_cons_id_3_p_0(
#line 461 "switch_util.m"
  MR_Word backend_libs__switch_util__ModuleInfo_4,
#line 461 "switch_util.m"
  MR_Word backend_libs__switch_util__ConsId_5,
#line 461 "switch_util.m"
  MR_Word * backend_libs__switch_util__TaggedConsId_6)
#line 461 "switch_util.m"
{
#line 463 "switch_util.m"
  {
#line 463 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 463 "switch_util.m"
    MR_Word backend_libs__switch_util__ConsTag_7;

#line 464 "switch_util.m"
    {
#line 464 "switch_util.m"
      backend_libs__switch_util__ConsTag_7 = hlds__hlds_code_util__cons_id_to_tag_2_f_0(backend_libs__switch_util__ModuleInfo_4, backend_libs__switch_util__ConsId_5);
    }
#line 465 "switch_util.m"
    {
#line 465 "switch_util.m"
      MR_Word base;
#line 465 "switch_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 465 "switch_util.m"
      *backend_libs__switch_util__TaggedConsId_6 = base;
#line 465 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (backend_libs__switch_util__ConsId_5));
#line 465 "switch_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (backend_libs__switch_util__ConsTag_7));
#line 465 "switch_util.m"
    }
#line 463 "switch_util.m"
  }
#line 461 "switch_util.m"
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
#line 1467 "switch_util.m"
  {
#line 1467 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__ConsTag_3)) == (MR_mktag((MR_Integer) 1)));
#line 1467 "switch_util.m"
    MR_String backend_libs__switch_util__StrPrime_5;

#line 1465 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1465 "switch_util.m"
      {
#line 1465 "switch_util.m"
        backend_libs__switch_util__StrPrime_5 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__ConsTag_3, (MR_Integer) 0)));
#line 1466 "switch_util.m"
        *backend_libs__switch_util__Str_4 = backend_libs__switch_util__StrPrime_5;
#line 1465 "switch_util.m"
      }
#line 1465 "switch_util.m"
    else
#line 1468 "switch_util.m"
      {
#line 1468 "switch_util.m"
        {
#line 1468 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_string_tag\'/2", (MR_String) "not string_tag");
#line 1468 "switch_util.m"
          return;
        }
#line 1468 "switch_util.m"
      }
#line 1467 "switch_util.m"
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
#line 1460 "switch_util.m"
  {
#line 1460 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded = ((((MR_tag((MR_Word) backend_libs__switch_util__ConsTag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__ConsTag_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1460 "switch_util.m"
    MR_Integer backend_libs__switch_util__IntPrime_5;

#line 1458 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 1458 "switch_util.m"
      {
#line 1458 "switch_util.m"
        backend_libs__switch_util__IntPrime_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__ConsTag_3, (MR_Integer) 1)));
#line 1459 "switch_util.m"
        *backend_libs__switch_util__Int_4 = backend_libs__switch_util__IntPrime_5;
#line 1458 "switch_util.m"
      }
#line 1458 "switch_util.m"
    else
#line 1461 "switch_util.m"
      {
#line 1461 "switch_util.m"
        {
#line 1461 "switch_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_int_tag\'/2", (MR_String) "not int_tag");
#line 1461 "switch_util.m"
          return;
        }
#line 1461 "switch_util.m"
      }
#line 1460 "switch_util.m"
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
#line 1135 "switch_util.m"
  {
#line 1135 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1135 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeCtor_9;
#line 1135 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeTable_10;
#line 1135 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeDefn_11;
#line 1135 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeBody_12;
#line 1135 "switch_util.m"
    MR_Word backend_libs__switch_util__TagList_23;
#line 1135 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCountMap0_29;

#line 1136 "switch_util.m"
    {
#line 1136 "switch_util.m"
      parse_tree__prog_type__type_to_ctor_det_2_p_0(backend_libs__switch_util__Type_5, &backend_libs__switch_util__TypeCtor_9);
    }
#line 1137 "switch_util.m"
    {
#line 1137 "switch_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__switch_util__ModuleInfo_6, &backend_libs__switch_util__TypeTable_10);
    }
#line 1138 "switch_util.m"
    {
#line 1138 "switch_util.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(backend_libs__switch_util__TypeTable_10, backend_libs__switch_util__TypeCtor_9, &backend_libs__switch_util__TypeDefn_11);
    }
#line 1139 "switch_util.m"
    {
#line 1139 "switch_util.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__switch_util__TypeDefn_11, &backend_libs__switch_util__TypeBody_12);
    }
#line 1144 "switch_util.m"
#line 1144 "switch_util.m"
    switch (MR_tag((MR_Word) backend_libs__switch_util__TypeBody_12)) {
#line 1144 "switch_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1144 "switch_util.m"
      case (MR_Integer) 0:
#line 1149 "switch_util.m"
        {
#line 1150 "switch_util.m"
          {
#line 1150 "switch_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts\'/4", (MR_String) "non-du type");
#line 1150 "switch_util.m"
            return;
          }
#line 1149 "switch_util.m"
        }
#line 1144 "switch_util.m"
        break;
#line 1144 "switch_util.m"
      case (MR_Integer) 1:
#line 1141 "switch_util.m"
        {
#line 1141 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 1141 "switch_util.m"
          MR_Word backend_libs__switch_util__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1141 "switch_util.m"
          MR_Word backend_libs__switch_util__ConsTable_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 1)));
#line 1141 "switch_util.m"
          MR_Word backend_libs__switch_util__ConsList_22;
#line 1141 "switch_util.m"
          MR_Word backend_libs__switch_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 0)));
#line 1141 "switch_util.m"
          MR_Word backend_libs__switch_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 2)));
#line 1141 "switch_util.m"
          MR_Word backend_libs__switch_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 3)));
#line 1141 "switch_util.m"
          MR_Word backend_libs__switch_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 4)));
#line 1141 "switch_util.m"
          MR_Word backend_libs__switch_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 5)));
#line 1141 "switch_util.m"
          MR_Word backend_libs__switch_util__V_19_19 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1141 "switch_util.m"
          MR_Word backend_libs__switch_util__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1141 "switch_util.m"
          MR_Word backend_libs__switch_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_12, (MR_Integer) 7)));

#line 1142 "switch_util.m"
          {
#line 1142 "switch_util.m"
            mercury__map__to_assoc_list_2_p_0(backend_libs__switch_util__TypeCtorInfo_34_34, backend_libs__switch_util__TypeCtorInfo_35_35, backend_libs__switch_util__ConsTable_14, &backend_libs__switch_util__ConsList_22);
          }
#line 1143 "switch_util.m"
          {
#line 1143 "switch_util.m"
            mercury__assoc_list__values_2_p_0(backend_libs__switch_util__TypeCtorInfo_34_34, backend_libs__switch_util__TypeCtorInfo_35_35, backend_libs__switch_util__ConsList_22, &backend_libs__switch_util__TagList_23);
          }
#line 1141 "switch_util.m"
        }
#line 1144 "switch_util.m"
        break;
#line 1144 "switch_util.m"
      case (MR_Integer) 2:
#line 1149 "switch_util.m"
        {
#line 1150 "switch_util.m"
          {
#line 1150 "switch_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts\'/4", (MR_String) "non-du type");
#line 1150 "switch_util.m"
            return;
          }
#line 1149 "switch_util.m"
        }
#line 1144 "switch_util.m"
        break;
#line 1144 "switch_util.m"
      case (MR_Integer) 3:
#line 1149 "switch_util.m"
        {
#line 1150 "switch_util.m"
          {
#line 1150 "switch_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.get_ptag_counts\'/4", (MR_String) "non-du type");
#line 1150 "switch_util.m"
            return;
          }
#line 1149 "switch_util.m"
        }
#line 1144 "switch_util.m"
        break;
#line 1144 "switch_util.m"
    }
#line 1152 "switch_util.m"
    {
#line 1152 "switch_util.m"
      mercury__map__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__switch_util_scalar_common_2[0], &backend_libs__switch_util__PtagCountMap0_29);
    }
#line 1153 "switch_util.m"
    {
#line 1153 "switch_util.m"
      backend_libs__switch_util__get_ptag_counts_loop_5_p_0(backend_libs__switch_util__TagList_23, (MR_Integer) -1, backend_libs__switch_util__MaxPrimary_7, backend_libs__switch_util__PtagCountMap0_29, backend_libs__switch_util__PtagCountMap_8);
#line 1153 "switch_util.m"
      return;
    }
#line 1135 "switch_util.m"
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
#line 1446 "switch_util.m"
  while (MR_TRUE)
#line 1446 "switch_util.m"
    {
#line 1446 "switch_util.m"
      /* tailcall optimized into a loop */
#line 1446 "switch_util.m"
      {
#line 1446 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded = (backend_libs__switch_util__MaxPtag_6 >= backend_libs__switch_util__Ptag_5);

#line 1446 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 1436 "switch_util.m"
          {
#line 1436 "switch_util.m"
            MR_Integer backend_libs__switch_util__NextPtag_9 = (backend_libs__switch_util__Ptag_5 + (MR_Integer) 1);
#line 1443 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_21_21;
#line 1443 "switch_util.m"
            MR_Word backend_libs__switch_util__PtagCase_10;
#line 1437 "switch_util.m"
            MR_Box backend_libs__switch_util__conv0_PtagCase_10;

#line 12424 "backend_libs.switch_util.c"
            {
#line 12426 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12428 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_21_21, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12430 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_21_21, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_18));
#line 12432 "backend_libs.switch_util.c"
            }
#line 1437 "switch_util.m"
            {
#line 1437 "switch_util.m"
              backend_libs__switch_util__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(backend_libs__switch_util__TypeInfo_21_21, (MR_Word) backend_libs__switch_util__PtagCaseMap0_7, backend_libs__switch_util__Ptag_5, &backend_libs__switch_util__conv0_PtagCase_10);
            }
#line 1437 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1437 "switch_util.m"
              {
#line 1437 "switch_util.m"
                backend_libs__switch_util__PtagCase_10 = ((MR_Word) backend_libs__switch_util__conv0_PtagCase_10);
#line 1437 "switch_util.m"
                backend_libs__switch_util__succeeded = MR_TRUE;
#line 1437 "switch_util.m"
              }
#line 1443 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1438 "switch_util.m"
              {
#line 1438 "switch_util.m"
                MR_Word backend_libs__switch_util__PtagCaseMap1_11;
#line 1438 "switch_util.m"
                MR_Word backend_libs__switch_util__PtagCaseList1_12;
#line 1438 "switch_util.m"
                MR_Word backend_libs__switch_util__PtagCaseEntry_13;

#line 1438 "switch_util.m"
                {
#line 1438 "switch_util.m"
                  mercury__map__delete_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_21_21, ((MR_Box) (backend_libs__switch_util__Ptag_5)), backend_libs__switch_util__PtagCaseMap0_7, &backend_libs__switch_util__PtagCaseMap1_11);
                }
#line 1439 "switch_util.m"
                {
#line 1439 "switch_util.m"
                  backend_libs__switch_util__order_ptags_by_value_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_18, backend_libs__switch_util__NextPtag_9, backend_libs__switch_util__MaxPtag_6, backend_libs__switch_util__PtagCaseMap1_11, &backend_libs__switch_util__PtagCaseList1_12);
                }
#line 1441 "switch_util.m"
                {
#line 1441 "switch_util.m"
                  backend_libs__switch_util__PtagCaseEntry_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1441 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__PtagCaseEntry_13, 0) = ((MR_Box) (backend_libs__switch_util__Ptag_5));
#line 1441 "switch_util.m"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__PtagCaseEntry_13, 1) = ((MR_Box) (backend_libs__switch_util__PtagCase_10));
#line 1441 "switch_util.m"
                }
#line 1442 "switch_util.m"
                {
#line 1442 "switch_util.m"
                  MR_Word base;
#line 1442 "switch_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1442 "switch_util.m"
                  *backend_libs__switch_util__PtagCaseList_8 = base;
#line 1442 "switch_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (backend_libs__switch_util__PtagCaseEntry_13));
#line 1442 "switch_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (backend_libs__switch_util__PtagCaseList1_12));
#line 1442 "switch_util.m"
                }
#line 1438 "switch_util.m"
              }
#line 1443 "switch_util.m"
            else
#line 1444 "switch_util.m"
              {
#line 1444 "switch_util.m"
                /* direct tailcall eliminated */
#line 1444 "switch_util.m"
                {
#line 1444 "switch_util.m"
                  MR_Integer backend_libs__switch_util__Ptag__tmp_copy_5 = backend_libs__switch_util__NextPtag_9;

#line 1444 "switch_util.m"
                  backend_libs__switch_util__Ptag_5 = backend_libs__switch_util__Ptag__tmp_copy_5;
#line 1444 "switch_util.m"
                }
#line 1444 "switch_util.m"
                continue;
#line 1444 "switch_util.m"
              }
#line 1436 "switch_util.m"
          }
#line 1446 "switch_util.m"
        else
#line 1449 "switch_util.m"
          {
#line 1447 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeInfo_27_27;

#line 12524 "backend_libs.switch_util.c"
            {
#line 12526 "backend_libs.switch_util.c"
              backend_libs__switch_util__TypeInfo_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12528 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_27_27, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12530 "backend_libs.switch_util.c"
              MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_27_27, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_18));
#line 12532 "backend_libs.switch_util.c"
            }
#line 1447 "switch_util.m"
            {
#line 1447 "switch_util.m"
              backend_libs__switch_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_27_27, backend_libs__switch_util__PtagCaseMap0_7);
            }
#line 1449 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 1448 "switch_util.m"
              *backend_libs__switch_util__PtagCaseList_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1449 "switch_util.m"
            else
#line 1450 "switch_util.m"
              {
#line 1450 "switch_util.m"
                {
#line 1450 "switch_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.order_ptags_by_value\'/4", (MR_String) "PtagCaseMap0 is not empty");
#line 1450 "switch_util.m"
                  return;
                }
#line 1450 "switch_util.m"
              }
#line 1449 "switch_util.m"
          }
#line 1446 "switch_util.m"
      }
#line 1446 "switch_util.m"
      break;
#line 1446 "switch_util.m"
    }
#line 345 "switch_util.m"
}

#line 1361 "switch_util.m"
static void MR_CALL 
backend_libs__switch_util__order_ptags_by_count_3_p_0_1(
#line 1361 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 1361 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 1361 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_2)
#line 1361 "switch_util.m"
{
#line 1361 "switch_util.m"
  {
#line 1361 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 1361 "switch_util.m"
    MR_Word backend_libs__switch_util__conv3_GroupEntry_4;

#line 1361 "switch_util.m"
    {
#line 1361 "switch_util.m"
      backend_libs__switch_util__interpret_rev_map_entry_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) backend_libs__switch_util__wrapper_arg_1), &backend_libs__switch_util__conv3_GroupEntry_4);
    }
#line 1361 "switch_util.m"
    *backend_libs__switch_util__wrapper_arg_2 = ((MR_Box) (backend_libs__switch_util__conv3_GroupEntry_4));
#line 1361 "switch_util.m"
  }
#line 1361 "switch_util.m"
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
#line 1352 "switch_util.m"
  {
#line 1352 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1352 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_17_17;
#line 1352 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_19_19;
#line 1352 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_23_23;
#line 1352 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseList_7;
#line 1352 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseRevMap_8;
#line 1352 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseRevList_9;
#line 1352 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseRevSortedList_10;
#line 1352 "switch_util.m"
    MR_Word backend_libs__switch_util__PtagCaseSortedList_11;
#line 1352 "switch_util.m"
    MR_Word backend_libs__switch_util__V_12_12;
#line 1352 "switch_util.m"
    MR_Word backend_libs__switch_util__V_13_13;
#line 1355 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_V_12_12;
#line 1357 "switch_util.m"
    MR_Word backend_libs__switch_util__conv1_PtagCaseRevSortedList_10;
#line 1360 "switch_util.m"
    MR_Word backend_libs__switch_util__conv2_PtagCaseSortedList_11;

#line 12641 "backend_libs.switch_util.c"
    {
#line 12643 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12645 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12647 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_17_17, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 12649 "backend_libs.switch_util.c"
    }
#line 1353 "switch_util.m"
    {
#line 1353 "switch_util.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_17_17, backend_libs__switch_util__PtagCaseMap_5, &backend_libs__switch_util__PtagCaseList_7);
    }
#line 12656 "backend_libs.switch_util.c"
    {
#line 12658 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12660 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_19_19, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_rev_map_entry_1));
#line 12662 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_19_19, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 12664 "backend_libs.switch_util.c"
    }
#line 1355 "switch_util.m"
    {
#line 1355 "switch_util.m"
      backend_libs__switch_util__conv0_V_12_12 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeInfo_17_17, backend_libs__switch_util__TypeInfo_19_19);
    }
#line 1355 "switch_util.m"
    backend_libs__switch_util__V_12_12 = (MR_Word) backend_libs__switch_util__conv0_V_12_12;
#line 1354 "switch_util.m"
    {
#line 1354 "switch_util.m"
      backend_libs__switch_util__build_ptag_case_rev_map_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_14, backend_libs__switch_util__PtagCaseList_7, backend_libs__switch_util__PtagCountMap_4, backend_libs__switch_util__V_12_12, &backend_libs__switch_util__PtagCaseRevMap_8);
    }
#line 1356 "switch_util.m"
    {
#line 1356 "switch_util.m"
      mercury__map__values_2_p_0(backend_libs__switch_util__TypeInfo_17_17, backend_libs__switch_util__TypeInfo_19_19, (MR_Word) backend_libs__switch_util__PtagCaseRevMap_8, &backend_libs__switch_util__PtagCaseRevList_9);
    }
#line 1357 "switch_util.m"
    {
#line 1357 "switch_util.m"
      mercury__list__sort_2_p_0(backend_libs__switch_util__TypeInfo_19_19, (MR_Word) backend_libs__switch_util__PtagCaseRevList_9, &backend_libs__switch_util__conv1_PtagCaseRevSortedList_10);
    }
#line 1357 "switch_util.m"
    backend_libs__switch_util__PtagCaseRevSortedList_10 = (MR_Word) backend_libs__switch_util__conv1_PtagCaseRevSortedList_10;
#line 1360 "switch_util.m"
    {
#line 1360 "switch_util.m"
      mercury__list__reverse_2_p_0(backend_libs__switch_util__TypeInfo_19_19, (MR_Word) backend_libs__switch_util__PtagCaseRevSortedList_10, &backend_libs__switch_util__conv2_PtagCaseSortedList_11);
    }
#line 1360 "switch_util.m"
    backend_libs__switch_util__PtagCaseSortedList_11 = (MR_Word) backend_libs__switch_util__conv2_PtagCaseSortedList_11;
#line 1361 "switch_util.m"
    {
#line 1361 "switch_util.m"
      backend_libs__switch_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1361 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_7[0]));
#line 1361 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 1) = ((MR_Box) (backend_libs__switch_util__order_ptags_by_count_3_p_0_1));
#line 1361 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1361 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_13_13, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 1361 "switch_util.m"
    }
#line 12711 "backend_libs.switch_util.c"
    {
#line 12713 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12715 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_group_entry_1));
#line 12717 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_23_23, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_14));
#line 12719 "backend_libs.switch_util.c"
    }
#line 1361 "switch_util.m"
    {
#line 1361 "switch_util.m"
      mercury__list__map_3_p_0(backend_libs__switch_util__TypeInfo_19_19, backend_libs__switch_util__TypeInfo_23_23, (MR_Word) backend_libs__switch_util__V_13_13, (MR_Word) backend_libs__switch_util__PtagCaseSortedList_11, backend_libs__switch_util__PtagGroupCaseList_6);
#line 1361 "switch_util.m"
      return;
    }
#line 1352 "switch_util.m"
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
#line 1243 "switch_util.m"
  {
#line 1243 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1243 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_37_37;
#line 1243 "switch_util.m"
    MR_Word backend_libs__switch_util__V_27_27;
#line 1243 "switch_util.m"
    MR_Word backend_libs__switch_util__V_28_28;

#line 1246 "switch_util.m"
    {
#line 1246 "switch_util.m"
      backend_libs__switch_util__V_27_27 = mercury__map__init_0_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_id_0, (MR_Word) &backend_libs__switch_util_scalar_common_1[0]);
    }
#line 12782 "backend_libs.switch_util.c"
    {
#line 12784 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12786 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_37_37, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_ptag_case_1));
#line 12788 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_37_37, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_29));
#line 12790 "backend_libs.switch_util.c"
    }
#line 1246 "switch_util.m"
    {
#line 1246 "switch_util.m"
      backend_libs__switch_util__V_28_28 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, backend_libs__switch_util__TypeInfo_37_37);
    }
#line 1244 "switch_util.m"
    {
#line 1244 "switch_util.m"
      backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_114_111_117_112_95_99_97_115_101_115_95_98_121_95_112_116_97_103_95_108_111_111_112_95_95_91_50_44_32_51_44_32_52_93_95_48_12_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_29, backend_libs__switch_util__TaggedCases_11, backend_libs__switch_util__RepresentCase_12, backend_libs__switch_util__STATE_VARIABLE_StateA_0_18, backend_libs__switch_util__STATE_VARIABLE_StateA_19, backend_libs__switch_util__STATE_VARIABLE_StateB_0_20, backend_libs__switch_util__STATE_VARIABLE_StateB_21, backend_libs__switch_util__STATE_VARIABLE_StateC_0_22, backend_libs__switch_util__STATE_VARIABLE_StateC_23, backend_libs__switch_util__V_27_27, backend_libs__switch_util__CaseNumPtagsMap_16, backend_libs__switch_util__V_28_28, backend_libs__switch_util__PtagCaseMap_17);
#line 1244 "switch_util.m"
      return;
    }
#line 1243 "switch_util.m"
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
#line 1095 "switch_util.m"
  {
#line 1095 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 1095 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_33_33;
#line 1095 "switch_util.m"
    MR_Word backend_libs__switch_util__UnsortedTable_16;
#line 1098 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_SortedTable_15;

#line 1096 "switch_util.m"
    {
#line 1096 "switch_util.m"
      backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_116_114_105_110_103_95_98_105_110_97_114_121_95_101_110_116_114_105_101_115_95_95_91_50_44_32_51_44_32_52_93_95_48_10_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_27, backend_libs__switch_util__TaggedCases_10, backend_libs__switch_util__RepresentCase_11, backend_libs__switch_util__STATE_VARIABLE_StateA_0_17, backend_libs__switch_util__STATE_VARIABLE_StateA_18, backend_libs__switch_util__STATE_VARIABLE_StateB_0_19, backend_libs__switch_util__STATE_VARIABLE_StateB_20, backend_libs__switch_util__STATE_VARIABLE_StateC_0_21, backend_libs__switch_util__STATE_VARIABLE_StateC_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__switch_util__UnsortedTable_16);
    }
#line 12856 "backend_libs.switch_util.c"
    {
#line 12858 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12860 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_33_33, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 12862 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_33_33, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 12864 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_33_33, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_27));
#line 12866 "backend_libs.switch_util.c"
    }
#line 1098 "switch_util.m"
    {
#line 1098 "switch_util.m"
      mercury__list__sort_2_p_0(backend_libs__switch_util__TypeInfo_33_33, (MR_Word) backend_libs__switch_util__UnsortedTable_16, &backend_libs__switch_util__conv0_SortedTable_15);
    }
#line 1098 "switch_util.m"
    *backend_libs__switch_util__SortedTable_15 = (MR_Word) backend_libs__switch_util__conv0_SortedTable_15;
#line 1095 "switch_util.m"
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
#line 827 "switch_util.m"
  {
#line 827 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 827 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_84_84;
#line 827 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeCtorInfo_85_85;
#line 827 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_87_87;
#line 827 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumStrs_13;
#line 827 "switch_util.m"
    MR_Integer backend_libs__switch_util__LogNumStrs_14;
#line 827 "switch_util.m"
    MR_Integer backend_libs__switch_util__RoundedUpNumStrs_15;
#line 827 "switch_util.m"
    MR_Integer backend_libs__switch_util__TableSizeA_16;
#line 827 "switch_util.m"
    MR_Integer backend_libs__switch_util__HashMaskA_17;
#line 827 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap4A_18;
#line 827 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap5A_19;
#line 827 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap6A_20;
#line 827 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisions4A_21;
#line 827 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisions5A_22;
#line 827 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisions6A_23;
#line 827 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMapA_25;
#line 827 "switch_util.m"
    MR_Word backend_libs__switch_util__HashOpA_26;
#line 827 "switch_util.m"
    MR_Integer backend_libs__switch_util__NumCollisionsA_27;
#line 827 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsMap_28;
#line 827 "switch_util.m"
    MR_Word backend_libs__switch_util__HashValsList_37;
#line 827 "switch_util.m"
    MR_Word backend_libs__switch_util__V_41_41;
#line 827 "switch_util.m"
    MR_Word backend_libs__switch_util__V_42_42;
#line 827 "switch_util.m"
    MR_Word backend_libs__switch_util__V_43_43;

#line 12948 "backend_libs.switch_util.c"
    {
#line 12950 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12952 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_84_84, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
#line 12954 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_84_84, 1) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0));
#line 12956 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_84_84, 2) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_CaseRep_81));
#line 12958 "backend_libs.switch_util.c"
    }
#line 834 "switch_util.m"
    {
#line 834 "switch_util.m"
      mercury__list__length_2_p_0(backend_libs__switch_util__TypeInfo_84_84, (MR_Word) backend_libs__switch_util__StrsDatas_7, &backend_libs__switch_util__NumStrs_13);
    }
#line 835 "switch_util.m"
    {
#line 835 "switch_util.m"
      mercury__int__log2_2_p_0(backend_libs__switch_util__NumStrs_13, &backend_libs__switch_util__LogNumStrs_14);
    }
#line 836 "switch_util.m"
    {
#line 836 "switch_util.m"
      mercury__int__pow_3_p_0((MR_Integer) 2, backend_libs__switch_util__LogNumStrs_14, &backend_libs__switch_util__RoundedUpNumStrs_15);
    }
#line 838 "switch_util.m"
    backend_libs__switch_util__TableSizeA_16 = ((MR_Integer) 2 * backend_libs__switch_util__RoundedUpNumStrs_15);
#line 841 "switch_util.m"
    backend_libs__switch_util__HashMaskA_17 = (backend_libs__switch_util__TableSizeA_16 - (MR_Integer) 1);
#line 12979 "backend_libs.switch_util.c"
    backend_libs__switch_util__TypeCtorInfo_85_85 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 12981 "backend_libs.switch_util.c"
    {
#line 12983 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12985 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_87_87, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 12987 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_87_87, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_84_84));
#line 12989 "backend_libs.switch_util.c"
    }
#line 843 "switch_util.m"
    {
#line 843 "switch_util.m"
      backend_libs__switch_util__V_41_41 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
    }
#line 843 "switch_util.m"
    {
#line 843 "switch_util.m"
      backend_libs__switch_util__V_42_42 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
    }
#line 844 "switch_util.m"
    {
#line 844 "switch_util.m"
      backend_libs__switch_util__V_43_43 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
    }
#line 842 "switch_util.m"
    {
#line 842 "switch_util.m"
      backend_libs__switch_util__string_hash_cases_14_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_81, backend_libs__switch_util__StrsDatas_7, backend_libs__switch_util__HashMaskA_17, backend_libs__switch_util__V_41_41, &backend_libs__switch_util__HashValsMap4A_18, backend_libs__switch_util__V_42_42, &backend_libs__switch_util__HashValsMap5A_19, backend_libs__switch_util__V_43_43, &backend_libs__switch_util__HashValsMap6A_20, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions4A_21, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions5A_22, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions6A_23);
    }
#line 850 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions4A_21 <= backend_libs__switch_util__NumCollisions5A_22);
#line 850 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 850 "switch_util.m"
      backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions4A_21 <= backend_libs__switch_util__NumCollisions6A_23);
#line 854 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 851 "switch_util.m"
      {
#line 851 "switch_util.m"
        backend_libs__switch_util__HashValsMapA_25 = backend_libs__switch_util__HashValsMap4A_18;
#line 852 "switch_util.m"
        backend_libs__switch_util__HashOpA_26 = (MR_Integer) 11;
#line 853 "switch_util.m"
        backend_libs__switch_util__NumCollisionsA_27 = backend_libs__switch_util__NumCollisions4A_21;
#line 851 "switch_util.m"
      }
#line 854 "switch_util.m"
    else
#line 858 "switch_util.m"
      {
#line 854 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions5A_22 <= backend_libs__switch_util__NumCollisions6A_23);
#line 858 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 855 "switch_util.m"
          {
#line 855 "switch_util.m"
            backend_libs__switch_util__HashValsMapA_25 = backend_libs__switch_util__HashValsMap5A_19;
#line 856 "switch_util.m"
            backend_libs__switch_util__HashOpA_26 = (MR_Integer) 12;
#line 857 "switch_util.m"
            backend_libs__switch_util__NumCollisionsA_27 = backend_libs__switch_util__NumCollisions5A_22;
#line 855 "switch_util.m"
          }
#line 858 "switch_util.m"
        else
#line 859 "switch_util.m"
          {
#line 859 "switch_util.m"
            backend_libs__switch_util__HashValsMapA_25 = backend_libs__switch_util__HashValsMap6A_20;
#line 860 "switch_util.m"
            backend_libs__switch_util__HashOpA_26 = (MR_Integer) 13;
#line 861 "switch_util.m"
            backend_libs__switch_util__NumCollisionsA_27 = backend_libs__switch_util__NumCollisions6A_23;
#line 859 "switch_util.m"
          }
#line 858 "switch_util.m"
      }
#line 865 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisionsA_27 == (MR_Integer) 0);
#line 866 "switch_util.m"
    if (!(backend_libs__switch_util__succeeded))
#line 866 "switch_util.m"
      backend_libs__switch_util__succeeded = (backend_libs__switch_util__Upgrade_8 == (MR_Integer) 0);
#line 873 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 869 "switch_util.m"
      {
#line 869 "switch_util.m"
        *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeA_16;
#line 870 "switch_util.m"
        backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMapA_25;
#line 871 "switch_util.m"
        *backend_libs__switch_util__HashOp_11 = backend_libs__switch_util__HashOpA_26;
#line 872 "switch_util.m"
        *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisionsA_27;
#line 869 "switch_util.m"
      }
#line 873 "switch_util.m"
    else
#line 874 "switch_util.m"
      {
#line 874 "switch_util.m"
        MR_Integer backend_libs__switch_util__TableSizeB_29 = ((MR_Integer) 4 * backend_libs__switch_util__RoundedUpNumStrs_15);
#line 874 "switch_util.m"
        MR_Integer backend_libs__switch_util__HashMaskB_30 = (backend_libs__switch_util__TableSizeB_29 - (MR_Integer) 1);
#line 874 "switch_util.m"
        MR_Word backend_libs__switch_util__HashValsMap4B_31;
#line 874 "switch_util.m"
        MR_Word backend_libs__switch_util__HashValsMap5B_32;
#line 874 "switch_util.m"
        MR_Word backend_libs__switch_util__HashValsMap6B_33;
#line 874 "switch_util.m"
        MR_Integer backend_libs__switch_util__NumCollisions4B_34;
#line 874 "switch_util.m"
        MR_Integer backend_libs__switch_util__NumCollisions5B_35;
#line 874 "switch_util.m"
        MR_Integer backend_libs__switch_util__NumCollisions6B_36;
#line 874 "switch_util.m"
        MR_Word backend_libs__switch_util__V_59_59;
#line 874 "switch_util.m"
        MR_Word backend_libs__switch_util__V_60_60;
#line 874 "switch_util.m"
        MR_Word backend_libs__switch_util__V_61_61;

#line 879 "switch_util.m"
        {
#line 879 "switch_util.m"
          backend_libs__switch_util__V_59_59 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
        }
#line 879 "switch_util.m"
        {
#line 879 "switch_util.m"
          backend_libs__switch_util__V_60_60 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
        }
#line 880 "switch_util.m"
        {
#line 880 "switch_util.m"
          backend_libs__switch_util__V_61_61 = mercury__map__init_0_f_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87);
        }
#line 878 "switch_util.m"
        {
#line 878 "switch_util.m"
          backend_libs__switch_util__string_hash_cases_14_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_81, backend_libs__switch_util__StrsDatas_7, backend_libs__switch_util__HashMaskB_30, backend_libs__switch_util__V_59_59, &backend_libs__switch_util__HashValsMap4B_31, backend_libs__switch_util__V_60_60, &backend_libs__switch_util__HashValsMap5B_32, backend_libs__switch_util__V_61_61, &backend_libs__switch_util__HashValsMap6B_33, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions4B_34, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions5B_35, (MR_Integer) 0, &backend_libs__switch_util__NumCollisions6B_36);
        }
#line 887 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions4B_34 == (MR_Integer) 0);
#line 892 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 888 "switch_util.m"
          {
#line 888 "switch_util.m"
            *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeB_29;
#line 889 "switch_util.m"
            backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMap4B_31;
#line 890 "switch_util.m"
            *backend_libs__switch_util__HashOp_11 = (MR_Integer) 11;
#line 891 "switch_util.m"
            *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisions4B_34;
#line 888 "switch_util.m"
          }
#line 892 "switch_util.m"
        else
#line 897 "switch_util.m"
          {
#line 892 "switch_util.m"
            backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions5B_35 == (MR_Integer) 0);
#line 897 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 893 "switch_util.m"
              {
#line 893 "switch_util.m"
                *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeB_29;
#line 894 "switch_util.m"
                backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMap5B_32;
#line 895 "switch_util.m"
                *backend_libs__switch_util__HashOp_11 = (MR_Integer) 12;
#line 896 "switch_util.m"
                *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisions5B_35;
#line 893 "switch_util.m"
              }
#line 897 "switch_util.m"
            else
#line 902 "switch_util.m"
              {
#line 897 "switch_util.m"
                backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumCollisions6B_36 == (MR_Integer) 0);
#line 902 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 898 "switch_util.m"
                  {
#line 898 "switch_util.m"
                    *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeB_29;
#line 899 "switch_util.m"
                    backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMap6B_33;
#line 900 "switch_util.m"
                    *backend_libs__switch_util__HashOp_11 = (MR_Integer) 13;
#line 901 "switch_util.m"
                    *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisions6B_36;
#line 898 "switch_util.m"
                  }
#line 902 "switch_util.m"
                else
#line 903 "switch_util.m"
                  {
#line 903 "switch_util.m"
                    *backend_libs__switch_util__TableSize_9 = backend_libs__switch_util__TableSizeA_16;
#line 904 "switch_util.m"
                    backend_libs__switch_util__HashValsMap_28 = backend_libs__switch_util__HashValsMapA_25;
#line 905 "switch_util.m"
                    *backend_libs__switch_util__HashOp_11 = backend_libs__switch_util__HashOpA_26;
#line 906 "switch_util.m"
                    *backend_libs__switch_util__NumCollisions_12 = backend_libs__switch_util__NumCollisionsA_27;
#line 903 "switch_util.m"
                  }
#line 902 "switch_util.m"
              }
#line 897 "switch_util.m"
          }
#line 874 "switch_util.m"
      }
#line 916 "switch_util.m"
    {
#line 916 "switch_util.m"
      mercury__map__to_assoc_list_2_p_0(backend_libs__switch_util__TypeCtorInfo_85_85, backend_libs__switch_util__TypeInfo_87_87, backend_libs__switch_util__HashValsMap_28, &backend_libs__switch_util__HashValsList_37);
    }
#line 917 "switch_util.m"
    {
#line 917 "switch_util.m"
      backend_libs__switch_util__calc_string_hash_slots_4_p_0(backend_libs__switch_util__TypeInfo_for_CaseRep_81, *backend_libs__switch_util__TableSize_9, backend_libs__switch_util__HashValsList_37, backend_libs__switch_util__HashValsMap_28, backend_libs__switch_util__HashSlotsMap_10);
#line 917 "switch_util.m"
      return;
    }
#line 827 "switch_util.m"
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
#line 807 "switch_util.m"
  {
#line 807 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 807 "switch_util.m"
    MR_Integer backend_libs__switch_util__HostWordBits_7;
#line 807 "switch_util.m"
    MR_Integer backend_libs__switch_util__TargetWordBits_8;
#line 807 "switch_util.m"
    MR_Integer backend_libs__switch_util__WordBits0_9;
#line 807 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_14_14;
#line 807 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_15_15;

#line 808 "switch_util.m"
    {
#line 808 "switch_util.m"
      mercury__int__bits_per_int_1_p_0(&backend_libs__switch_util__HostWordBits_7);
    }
#line 809 "switch_util.m"
    {
#line 809 "switch_util.m"
      libs__globals__lookup_int_option_3_p_0(backend_libs__switch_util__Globals_4, (MR_Integer) 242, &backend_libs__switch_util__TargetWordBits_8);
    }
#line 810 "switch_util.m"
    {
#line 810 "switch_util.m"
      mercury__int__min_3_p_0(backend_libs__switch_util__HostWordBits_7, backend_libs__switch_util__TargetWordBits_8, &backend_libs__switch_util__WordBits0_9);
    }
#line 818 "switch_util.m"
    backend_libs__switch_util__V_14_14 = (backend_libs__switch_util__WordBits0_9 + (MR_Integer) 1);
#line 818 "switch_util.m"
    {
#line 818 "switch_util.m"
      mercury__int__log2_2_p_0(backend_libs__switch_util__V_14_14, &backend_libs__switch_util__V_15_15);
    }
#line 818 "switch_util.m"
    *backend_libs__switch_util__Log2WordBits_6 = (backend_libs__switch_util__V_15_15 - (MR_Integer) 1);
#line 813 "switch_util.m"
    {
#line 813 "switch_util.m"
      mercury__int__pow_3_p_0((MR_Integer) 2, *backend_libs__switch_util__Log2WordBits_6, backend_libs__switch_util__WordBits_5);
#line 813 "switch_util.m"
      return;
    }
#line 807 "switch_util.m"
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
#line 795 "switch_util.m"
  while (MR_TRUE)
#line 795 "switch_util.m"
    {
#line 795 "switch_util.m"
      /* tailcall optimized into a loop */
#line 795 "switch_util.m"
      {
#line 795 "switch_util.m"
        MR_bool backend_libs__switch_util__succeeded;

#line 795 "switch_util.m"
        if ((backend_libs__switch_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 795 "switch_util.m"
          *backend_libs__switch_util__STATE_VARIABLE_RvalsList_3 = backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2;
#line 795 "switch_util.m"
        else
#line 796 "switch_util.m"
          {
#line 796 "switch_util.m"
            MR_Word backend_libs__switch_util__Case_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 0)));
#line 796 "switch_util.m"
            MR_Word backend_libs__switch_util__Cases_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__HeadVar__1_1, (MR_Integer) 1)));
#line 796 "switch_util.m"
            MR_Word backend_libs__switch_util__Soln_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_7, (MR_Integer) 1)));
#line 796 "switch_util.m"
            MR_Word backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19;
#line 797 "switch_util.m"
            MR_Box backend_libs__switch_util___Index_10 = (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Case_7, (MR_Integer) 0));

#line 801 "switch_util.m"
            if (((MR_tag((MR_Word) backend_libs__switch_util__Soln_11)) == (MR_mktag((MR_Integer) 0))))
#line 799 "switch_util.m"
              {
#line 799 "switch_util.m"
                MR_Word backend_libs__switch_util__Rvals_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__Soln_11, (MR_Integer) 0)));

#line 800 "switch_util.m"
                {
#line 800 "switch_util.m"
                  backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19, 0) = ((MR_Box) (backend_libs__switch_util__Rvals_12));
#line 800 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19, 1) = ((MR_Box) (backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2));
#line 800 "switch_util.m"
                }
#line 799 "switch_util.m"
              }
#line 801 "switch_util.m"
            else
#line 802 "switch_util.m"
              {
#line 802 "switch_util.m"
                MR_Word backend_libs__switch_util__TypeInfo_24_24;
#line 802 "switch_util.m"
                MR_Word backend_libs__switch_util__FirstSolnRvals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__Soln_11, (MR_Integer) 0)));
#line 802 "switch_util.m"
                MR_Word backend_libs__switch_util__LaterSolnsRvalsList_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__Soln_11, (MR_Integer) 1)));
#line 802 "switch_util.m"
                MR_Word backend_libs__switch_util__V_18_18;

#line 13360 "backend_libs.switch_util.c"
                {
#line 13362 "backend_libs.switch_util.c"
                  backend_libs__switch_util__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13364 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 13366 "backend_libs.switch_util.c"
                  MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_24_24, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_22));
#line 13368 "backend_libs.switch_util.c"
                }
#line 803 "switch_util.m"
                {
#line 803 "switch_util.m"
                  backend_libs__switch_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_18_18, 0) = ((MR_Box) (backend_libs__switch_util__FirstSolnRvals_13));
#line 803 "switch_util.m"
                  MR_hl_field(MR_mktag(1), backend_libs__switch_util__V_18_18, 1) = ((MR_Box) (backend_libs__switch_util__LaterSolnsRvalsList_14));
#line 803 "switch_util.m"
                }
#line 803 "switch_util.m"
                {
#line 803 "switch_util.m"
                  backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19 = mercury__list__f_43_43_2_f_0(backend_libs__switch_util__TypeInfo_24_24, backend_libs__switch_util__V_18_18, backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2);
                }
#line 802 "switch_util.m"
              }
#line 805 "switch_util.m"
            /* direct tailcall eliminated */
#line 805 "switch_util.m"
            {
#line 805 "switch_util.m"
              MR_Word backend_libs__switch_util__HeadVar__1__tmp_copy_1 = backend_libs__switch_util__Cases_8;
#line 805 "switch_util.m"
              MR_Word backend_libs__switch_util__STATE_VARIABLE_RvalsList_0__tmp_copy_2 = backend_libs__switch_util__STATE_VARIABLE_RvalsList_19_19;

#line 805 "switch_util.m"
              backend_libs__switch_util__STATE_VARIABLE_RvalsList_0_2 = backend_libs__switch_util__STATE_VARIABLE_RvalsList_0__tmp_copy_2;
#line 805 "switch_util.m"
              backend_libs__switch_util__HeadVar__1_1 = backend_libs__switch_util__HeadVar__1__tmp_copy_1;
#line 805 "switch_util.m"
            }
#line 805 "switch_util.m"
            continue;
#line 796 "switch_util.m"
          }
#line 795 "switch_util.m"
      }
#line 795 "switch_util.m"
      break;
#line 795 "switch_util.m"
    }
#line 173 "switch_util.m"
}

#line 787 "switch_util.m"
static MR_bool MR_CALL 
backend_libs__switch_util__project_all_to_one_solution_2_p_0_1(
#line 787 "switch_util.m"
  MR_Box backend_libs__switch_util__closure_arg,
#line 787 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_1,
#line 787 "switch_util.m"
  MR_Box backend_libs__switch_util__wrapper_arg_2,
#line 787 "switch_util.m"
  MR_Box * backend_libs__switch_util__wrapper_arg_3)
#line 787 "switch_util.m"
{
#line 787 "switch_util.m"
  {
#line 787 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 787 "switch_util.m"
    MR_Box backend_libs__switch_util__closure = backend_libs__switch_util__closure_arg;
#line 787 "switch_util.m"
    MR_Word backend_libs__switch_util__conv0_Values_6;

#line 787 "switch_util.m"
    {
#line 787 "switch_util.m"
      backend_libs__switch_util__succeeded = backend_libs__switch_util__project_soln_consts_to_one_soln_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__switch_util__closure, (MR_Integer) 4))), backend_libs__switch_util__wrapper_arg_1, ((MR_Word) backend_libs__switch_util__wrapper_arg_2), &backend_libs__switch_util__conv0_Values_6);
    }
#line 787 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 787 "switch_util.m"
      {
#line 787 "switch_util.m"
        *backend_libs__switch_util__wrapper_arg_3 = ((MR_Box) (backend_libs__switch_util__conv0_Values_6));
#line 787 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 787 "switch_util.m"
      }
#line 787 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 787 "switch_util.m"
  }
#line 787 "switch_util.m"
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
#line 786 "switch_util.m"
  {
#line 786 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_12_12;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__TypeInfo_14_14;
#line 786 "switch_util.m"
    MR_Word backend_libs__switch_util__V_5_5;

#line 787 "switch_util.m"
    {
#line 787 "switch_util.m"
      backend_libs__switch_util__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 787 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_5_5, 0) = ((MR_Box) (&backend_libs__switch_util_scalar_common_5[0]));
#line 787 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_5_5, 1) = ((MR_Box) (backend_libs__switch_util__project_all_to_one_solution_2_p_0_1));
#line 787 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_5_5, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 787 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_5_5, 3) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Key_6));
#line 787 "switch_util.m"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__V_5_5, 4) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_7));
#line 787 "switch_util.m"
    }
#line 13499 "backend_libs.switch_util.c"
    {
#line 13501 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13503 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_12_12, 0) = ((MR_Box) (&backend_libs__switch_util__backend_libs__switch_util__type_ctor_info_soln_consts_1));
#line 13505 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_12_12, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_7));
#line 13507 "backend_libs.switch_util.c"
    }
#line 13509 "backend_libs.switch_util.c"
    {
#line 13511 "backend_libs.switch_util.c"
      backend_libs__switch_util__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13513 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
#line 13515 "backend_libs.switch_util.c"
      MR_hl_field(MR_mktag(0), backend_libs__switch_util__TypeInfo_14_14, 1) = ((MR_Box) (backend_libs__switch_util__TypeInfo_for_Rval_7));
#line 13517 "backend_libs.switch_util.c"
    }
#line 787 "switch_util.m"
    {
#line 787 "switch_util.m"
      return backend_libs__switch_util__succeeded = mercury__map__map_values_3_p_1(backend_libs__switch_util__TypeInfo_for_Key_6, backend_libs__switch_util__TypeInfo_12_12, backend_libs__switch_util__TypeInfo_14_14, (MR_Word) backend_libs__switch_util__V_5_5, (MR_Word) backend_libs__switch_util__CaseSolns_3, backend_libs__switch_util__CaseValuePairs_4);
    }
#line 786 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 786 "switch_util.m"
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
#line 738 "switch_util.m"
  {
#line 738 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 738 "switch_util.m"
    MR_Integer backend_libs__switch_util__Span_23 = (backend_libs__switch_util__UpperLimit_16 - backend_libs__switch_util__LowerLimit_15);
#line 738 "switch_util.m"
    MR_Integer backend_libs__switch_util__Range_24 = (backend_libs__switch_util__Span_23 + (MR_Integer) 1);
#line 738 "switch_util.m"
    MR_Integer backend_libs__switch_util__Density_25;
#line 738 "switch_util.m"
    MR_Word backend_libs__switch_util__NeedBitVecCheck0_26;
#line 738 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_37_37 = (backend_libs__switch_util__NumValues_17 * (MR_Integer) 100);

#line 693 "switch_util.m"
    {
#line 693 "switch_util.m"
      backend_libs__switch_util__Density_25 = mercury__int__f_47_47_2_f_0(backend_libs__switch_util__V_37_37, backend_libs__switch_util__Range_24);
    }
#line 745 "switch_util.m"
    backend_libs__switch_util__succeeded = (backend_libs__switch_util__Density_25 > backend_libs__switch_util__ReqDensity_18);
#line 738 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 738 "switch_util.m"
      {
#line 749 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__NumValues_17 == backend_libs__switch_util__Range_24);
#line 751 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 750 "switch_util.m"
          backend_libs__switch_util__NeedBitVecCheck0_26 = (MR_Integer) 1;
#line 751 "switch_util.m"
        else
#line 752 "switch_util.m"
          backend_libs__switch_util__NeedBitVecCheck0_26 = (MR_Integer) 0;
#line 778 "switch_util.m"
#line 778 "switch_util.m"
        switch (backend_libs__switch_util__SwitchCanFail_14) {
#line 778 "switch_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 778 "switch_util.m"
          case (MR_Integer) 0:
#line 755 "switch_util.m"
            {
#line 755 "switch_util.m"
              MR_Word backend_libs__switch_util__TypeCategory_27;
#line 772 "switch_util.m"
              MR_Integer backend_libs__switch_util__TypeRange_30;
#line 764 "switch_util.m"
              MR_Integer backend_libs__switch_util__DetDensity_31;
#line 764 "switch_util.m"
              MR_Integer backend_libs__switch_util__V_42_42;
#line 764 "switch_util.m"
              MR_Integer backend_libs__switch_util__V_43_43;
#line 763 "switch_util.m"
              MR_Integer backend_libs__switch_util__V_28_28;
#line 763 "switch_util.m"
              MR_Integer backend_libs__switch_util__V_29_29;

#line 761 "switch_util.m"
              {
#line 761 "switch_util.m"
                backend_libs__switch_util__TypeCategory_27 = check_hlds__type_util__classify_type_2_f_0(backend_libs__switch_util__ModuleInfo_12, backend_libs__switch_util__SwitchVarType_13);
              }
#line 763 "switch_util.m"
              {
#line 763 "switch_util.m"
                backend_libs__switch_util__succeeded = backend_libs__switch_util__type_range_6_p_0(backend_libs__switch_util__ModuleInfo_12, backend_libs__switch_util__TypeCategory_27, backend_libs__switch_util__SwitchVarType_13, &backend_libs__switch_util__V_28_28, &backend_libs__switch_util__V_29_29, &backend_libs__switch_util__TypeRange_30);
              }
#line 764 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 764 "switch_util.m"
                {
#line 693 "switch_util.m"
                  backend_libs__switch_util__V_43_43 = (MR_Integer) 100;
#line 693 "switch_util.m"
                  backend_libs__switch_util__V_42_42 = (backend_libs__switch_util__NumValues_17 * backend_libs__switch_util__V_43_43);
#line 693 "switch_util.m"
                  {
#line 693 "switch_util.m"
                    backend_libs__switch_util__DetDensity_31 = mercury__int__f_47_47_2_f_0(backend_libs__switch_util__V_42_42, backend_libs__switch_util__TypeRange_30);
                  }
#line 766 "switch_util.m"
                  backend_libs__switch_util__succeeded = (backend_libs__switch_util__DetDensity_31 > backend_libs__switch_util__ReqDensity_18);
#line 764 "switch_util.m"
                }
#line 772 "switch_util.m"
              if (backend_libs__switch_util__succeeded)
#line 768 "switch_util.m"
                {
#line 768 "switch_util.m"
                  *backend_libs__switch_util__NeedRangeCheck_20 = (MR_Integer) 1;
#line 769 "switch_util.m"
                  *backend_libs__switch_util__NeedBitVecCheck_19 = (MR_Integer) 0;
#line 770 "switch_util.m"
                  *backend_libs__switch_util__FirstVal_21 = (MR_Integer) 0;
#line 771 "switch_util.m"
                  *backend_libs__switch_util__LastVal_22 = (backend_libs__switch_util__TypeRange_30 - (MR_Integer) 1);
#line 768 "switch_util.m"
                }
#line 772 "switch_util.m"
              else
#line 773 "switch_util.m"
                {
#line 773 "switch_util.m"
                  *backend_libs__switch_util__NeedRangeCheck_20 = (MR_Integer) 0;
#line 774 "switch_util.m"
                  *backend_libs__switch_util__NeedBitVecCheck_19 = backend_libs__switch_util__NeedBitVecCheck0_26;
#line 775 "switch_util.m"
                  *backend_libs__switch_util__FirstVal_21 = backend_libs__switch_util__LowerLimit_15;
#line 776 "switch_util.m"
                  *backend_libs__switch_util__LastVal_22 = backend_libs__switch_util__UpperLimit_16;
#line 773 "switch_util.m"
                }
#line 755 "switch_util.m"
            }
#line 778 "switch_util.m"
            break;
#line 778 "switch_util.m"
          case (MR_Integer) 1:
#line 779 "switch_util.m"
            {
#line 780 "switch_util.m"
              *backend_libs__switch_util__NeedRangeCheck_20 = (MR_Integer) 1;
#line 781 "switch_util.m"
              *backend_libs__switch_util__NeedBitVecCheck_19 = backend_libs__switch_util__NeedBitVecCheck0_26;
#line 782 "switch_util.m"
              *backend_libs__switch_util__FirstVal_21 = backend_libs__switch_util__LowerLimit_15;
#line 783 "switch_util.m"
              *backend_libs__switch_util__LastVal_22 = backend_libs__switch_util__UpperLimit_16;
#line 779 "switch_util.m"
            }
#line 778 "switch_util.m"
            break;
#line 778 "switch_util.m"
        }
#line 778 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 738 "switch_util.m"
      }
#line 738 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 738 "switch_util.m"
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
#line 705 "switch_util.m"
  {
#line 705 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 705 "switch_util.m"
#line 705 "switch_util.m"
    switch (backend_libs__switch_util__CodeModel_6) {
#line 705 "switch_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 705 "switch_util.m"
      case (MR_Integer) 0:
#line 708 "switch_util.m"
        {
#line 708 "switch_util.m"
          *backend_libs__switch_util__STATE_VARIABLE_TaggedCases_10 = backend_libs__switch_util__STATE_VARIABLE_TaggedCases_0_9;
#line 708 "switch_util.m"
          *backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_12 = backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_11;
#line 708 "switch_util.m"
        }
#line 705 "switch_util.m"
        break;
#line 705 "switch_util.m"
      case (MR_Integer) 2:
#line 705 "switch_util.m"
      case (MR_Integer) 1:
#line 714 "switch_util.m"
        {
#line 714 "switch_util.m"
          MR_Word backend_libs__switch_util__RevTaggedCases_20;

#line 715 "switch_util.m"
          {
#line 715 "switch_util.m"
            backend_libs__switch_util__filter_out_failing_cases_loop_5_p_0(backend_libs__switch_util__STATE_VARIABLE_TaggedCases_0_9, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &backend_libs__switch_util__RevTaggedCases_20, backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_0_11, backend_libs__switch_util__STATE_VARIABLE_SwitchCanFail_12);
          }
#line 717 "switch_util.m"
          {
#line 717 "switch_util.m"
            mercury__list__reverse_2_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_tagged_case_0, backend_libs__switch_util__RevTaggedCases_20, backend_libs__switch_util__STATE_VARIABLE_TaggedCases_10);
#line 717 "switch_util.m"
            return;
          }
#line 714 "switch_util.m"
        }
#line 705 "switch_util.m"
        break;
#line 705 "switch_util.m"
    }
#line 705 "switch_util.m"
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
#line 692 "switch_util.m"
  {
#line 692 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 692 "switch_util.m"
    MR_Integer backend_libs__switch_util__Density_6;
#line 692 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_7_7 = (backend_libs__switch_util__NumCases_4 * (MR_Integer) 100);

#line 693 "switch_util.m"
    {
#line 693 "switch_util.m"
      return backend_libs__switch_util__Density_6 = mercury__int__f_47_47_2_f_0(backend_libs__switch_util__V_7_7, backend_libs__switch_util__Range_5);
    }
#line 692 "switch_util.m"
    return backend_libs__switch_util__Density_6;
#line 692 "switch_util.m"
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
#line 662 "switch_util.m"
  {
#line 662 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 662 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_40_40;
#line 662 "switch_util.m"
    MR_Integer backend_libs__switch_util__V_41_41;

#line 670 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__TypeCtorCat_8)) == (MR_mktag((MR_Integer) 1))))
#line 664 "switch_util.m"
      {
#line 664 "switch_util.m"
        MR_Word backend_libs__switch_util__Globals_13;
#line 664 "switch_util.m"
        MR_Word backend_libs__switch_util__Target_14;
#line 664 "switch_util.m"
        MR_Word backend_libs__switch_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeCtorCat_8, (MR_Integer) 0)));

#line 664 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_39_39 == (MR_Integer) 2);
#line 664 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 664 "switch_util.m"
          {
#line 667 "switch_util.m"
            {
#line 667 "switch_util.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__switch_util__ModuleInfo_7, &backend_libs__switch_util__Globals_13);
            }
#line 668 "switch_util.m"
            {
#line 668 "switch_util.m"
              libs__globals__get_target_2_p_0(backend_libs__switch_util__Globals_13, &backend_libs__switch_util__Target_14);
            }
#line 669 "switch_util.m"
            {
#line 669 "switch_util.m"
              backend_libs__string_encoding__target_char_range_3_p_0(backend_libs__switch_util__Target_14, backend_libs__switch_util__Min_10, backend_libs__switch_util__Max_11);
            }
#line 669 "switch_util.m"
            backend_libs__switch_util__succeeded = MR_TRUE;
#line 664 "switch_util.m"
          }
#line 664 "switch_util.m"
      }
#line 670 "switch_util.m"
    else
#line 670 "switch_util.m"
    if (((MR_tag((MR_Word) backend_libs__switch_util__TypeCtorCat_8)) == (MR_mktag((MR_Integer) 2))))
#line 671 "switch_util.m"
      {
#line 671 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeCtor_15;
#line 671 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeTable_16;
#line 671 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeDefn_17;
#line 671 "switch_util.m"
        MR_Word backend_libs__switch_util__TypeBody_18;
#line 671 "switch_util.m"
        MR_Word backend_libs__switch_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__switch_util__TypeCtorCat_8, (MR_Integer) 0)));

#line 671 "switch_util.m"
        backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_34_34 == (MR_Integer) 0);
#line 671 "switch_util.m"
        if (backend_libs__switch_util__succeeded)
#line 671 "switch_util.m"
          {
#line 672 "switch_util.m"
            *backend_libs__switch_util__Min_10 = (MR_Integer) 0;
#line 673 "switch_util.m"
            {
#line 673 "switch_util.m"
              parse_tree__prog_type__type_to_ctor_det_2_p_0(backend_libs__switch_util__Type_9, &backend_libs__switch_util__TypeCtor_15);
            }
#line 674 "switch_util.m"
            {
#line 674 "switch_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__switch_util__ModuleInfo_7, &backend_libs__switch_util__TypeTable_16);
            }
#line 675 "switch_util.m"
            {
#line 675 "switch_util.m"
              hlds__hlds_data__lookup_type_ctor_defn_3_p_0(backend_libs__switch_util__TypeTable_16, backend_libs__switch_util__TypeCtor_15, &backend_libs__switch_util__TypeDefn_17);
            }
#line 676 "switch_util.m"
            {
#line 676 "switch_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__switch_util__TypeDefn_17, &backend_libs__switch_util__TypeBody_18);
            }
#line 681 "switch_util.m"
#line 681 "switch_util.m"
            switch (MR_tag((MR_Word) backend_libs__switch_util__TypeBody_18)) {
#line 681 "switch_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 681 "switch_util.m"
              case (MR_Integer) 0:
#line 686 "switch_util.m"
                {
#line 687 "switch_util.m"
                  {
#line 687 "switch_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.type_range\'/6", (MR_String) "enum type is not d.u. type\?");
                  }
#line 686 "switch_util.m"
                }
#line 681 "switch_util.m"
                break;
#line 681 "switch_util.m"
              case (MR_Integer) 1:
#line 678 "switch_util.m"
                {
#line 678 "switch_util.m"
                  MR_Word backend_libs__switch_util__ConsTable_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_18, (MR_Integer) 1)));
#line 678 "switch_util.m"
                  MR_Integer backend_libs__switch_util__TypeRange_28;
#line 678 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_18, (MR_Integer) 0)));
#line 678 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_18, (MR_Integer) 2)));
#line 678 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_18, (MR_Integer) 3)));
#line 678 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_18, (MR_Integer) 4)));
#line 678 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_18, (MR_Integer) 5)));
#line 678 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_18, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 678 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_26_26 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_18, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 678 "switch_util.m"
                  MR_Word backend_libs__switch_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__TypeBody_18, (MR_Integer) 7)));

#line 679 "switch_util.m"
                  {
#line 679 "switch_util.m"
                    mercury__map__count_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, backend_libs__switch_util__ConsTable_20, &backend_libs__switch_util__TypeRange_28);
                  }
#line 680 "switch_util.m"
                  *backend_libs__switch_util__Max_11 = (backend_libs__switch_util__TypeRange_28 - (MR_Integer) 1);
#line 678 "switch_util.m"
                }
#line 681 "switch_util.m"
                break;
#line 681 "switch_util.m"
              case (MR_Integer) 2:
#line 686 "switch_util.m"
                {
#line 687 "switch_util.m"
                  {
#line 687 "switch_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.type_range\'/6", (MR_String) "enum type is not d.u. type\?");
                  }
#line 686 "switch_util.m"
                }
#line 681 "switch_util.m"
                break;
#line 681 "switch_util.m"
              case (MR_Integer) 3:
#line 686 "switch_util.m"
                {
#line 687 "switch_util.m"
                  {
#line 687 "switch_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "predicate \140backend_libs.switch_util.type_range\'/6", (MR_String) "enum type is not d.u. type\?");
                  }
#line 686 "switch_util.m"
                }
#line 681 "switch_util.m"
                break;
#line 681 "switch_util.m"
            }
#line 681 "switch_util.m"
            backend_libs__switch_util__succeeded = MR_TRUE;
#line 671 "switch_util.m"
          }
#line 671 "switch_util.m"
      }
#line 670 "switch_util.m"
    else
#line 670 "switch_util.m"
      backend_libs__switch_util__succeeded = MR_FALSE;
#line 662 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 662 "switch_util.m"
      {
#line 690 "switch_util.m"
        backend_libs__switch_util__V_40_40 = (*backend_libs__switch_util__Max_11 - *backend_libs__switch_util__Min_10);
#line 690 "switch_util.m"
        backend_libs__switch_util__V_41_41 = (MR_Integer) 1;
#line 690 "switch_util.m"
        *backend_libs__switch_util__NumValues_12 = (backend_libs__switch_util__V_40_40 + backend_libs__switch_util__V_41_41);
#line 690 "switch_util.m"
        backend_libs__switch_util__succeeded = MR_TRUE;
#line 662 "switch_util.m"
      }
#line 662 "switch_util.m"
    return backend_libs__switch_util__succeeded;
#line 662 "switch_util.m"
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
#line 597 "switch_util.m"
  {
#line 597 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 597 "switch_util.m"
    MR_Word backend_libs__switch_util__SwitchTypeCtorCat_9;
#line 597 "switch_util.m"
    MR_Word backend_libs__switch_util__Globals_10;

#line 598 "switch_util.m"
    {
#line 598 "switch_util.m"
      backend_libs__switch_util__SwitchTypeCtorCat_9 = check_hlds__type_util__classify_type_2_f_0(backend_libs__switch_util__ModuleInfo_5, backend_libs__switch_util__SwitchVarType_6);
    }
#line 599 "switch_util.m"
    {
#line 599 "switch_util.m"
      *backend_libs__switch_util__SwitchCategory_7 = backend_libs__switch_util__type_ctor_cat_to_switch_cat_1_f_0(backend_libs__switch_util__SwitchTypeCtorCat_9);
    }
#line 601 "switch_util.m"
    {
#line 601 "switch_util.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(backend_libs__switch_util__ModuleInfo_5, &backend_libs__switch_util__Globals_10);
    }
#line 606 "switch_util.m"
    {
#line 606 "switch_util.m"
      MR_Word backend_libs__switch_util__SmartIndexing_11;

#line 606 "switch_util.m"
      {
#line 606 "switch_util.m"
        libs__globals__lookup_bool_option_3_p_0(backend_libs__switch_util__Globals_10, (MR_Integer) 435, &backend_libs__switch_util__SmartIndexing_11);
      }
#line 607 "switch_util.m"
      backend_libs__switch_util__succeeded = (backend_libs__switch_util__SmartIndexing_11 == (MR_Integer) 0);
#line 606 "switch_util.m"
    }
#line 608 "switch_util.m"
    if (!(backend_libs__switch_util__succeeded))
#line 608 "switch_util.m"
      {
#line 643 "switch_util.m"
#line 643 "switch_util.m"
        switch (*backend_libs__switch_util__SwitchCategory_7) {
#line 643 "switch_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 643 "switch_util.m"
          case (MR_Integer) 0:
#line 643 "switch_util.m"
            {
#line 643 "switch_util.m"
              MR_Word backend_libs__switch_util__SmartIndexingForCategory_12;

#line 644 "switch_util.m"
              {
#line 644 "switch_util.m"
                libs__globals__lookup_bool_option_3_p_0(backend_libs__switch_util__Globals_10, (MR_Integer) 448, &backend_libs__switch_util__SmartIndexingForCategory_12);
              }
#line 613 "switch_util.m"
              backend_libs__switch_util__succeeded = (backend_libs__switch_util__SmartIndexingForCategory_12 == (MR_Integer) 0);
#line 643 "switch_util.m"
            }
#line 643 "switch_util.m"
            break;
#line 643 "switch_util.m"
          case (MR_Integer) 3:
#line 652 "switch_util.m"
            {
#line 652 "switch_util.m"
              MR_Word backend_libs__switch_util__SmartIndexingForCategory_34;

#line 653 "switch_util.m"
              {
#line 653 "switch_util.m"
                libs__globals__lookup_bool_option_3_p_0(backend_libs__switch_util__Globals_10, (MR_Integer) 451, &backend_libs__switch_util__SmartIndexingForCategory_34);
              }
#line 613 "switch_util.m"
              backend_libs__switch_util__succeeded = (backend_libs__switch_util__SmartIndexingForCategory_34 == (MR_Integer) 0);
#line 652 "switch_util.m"
            }
#line 643 "switch_util.m"
            break;
#line 643 "switch_util.m"
          case (MR_Integer) 1:
#line 646 "switch_util.m"
            {
#line 646 "switch_util.m"
              MR_Word backend_libs__switch_util__SmartIndexingForCategory_35;

#line 647 "switch_util.m"
              {
#line 647 "switch_util.m"
                libs__globals__lookup_bool_option_3_p_0(backend_libs__switch_util__Globals_10, (MR_Integer) 449, &backend_libs__switch_util__SmartIndexingForCategory_35);
              }
#line 613 "switch_util.m"
              backend_libs__switch_util__succeeded = (backend_libs__switch_util__SmartIndexingForCategory_35 == (MR_Integer) 0);
#line 646 "switch_util.m"
            }
#line 643 "switch_util.m"
            break;
#line 643 "switch_util.m"
          case (MR_Integer) 2:
#line 649 "switch_util.m"
            {
#line 649 "switch_util.m"
              MR_Word backend_libs__switch_util__SmartIndexingForCategory_36;

#line 650 "switch_util.m"
              {
#line 650 "switch_util.m"
                libs__globals__lookup_bool_option_3_p_0(backend_libs__switch_util__Globals_10, (MR_Integer) 450, &backend_libs__switch_util__SmartIndexingForCategory_36);
              }
#line 613 "switch_util.m"
              backend_libs__switch_util__succeeded = (backend_libs__switch_util__SmartIndexingForCategory_36 == (MR_Integer) 0);
#line 649 "switch_util.m"
            }
#line 643 "switch_util.m"
            break;
#line 643 "switch_util.m"
        }
#line 608 "switch_util.m"
        if (!(backend_libs__switch_util__succeeded))
#line 623 "switch_util.m"
          {
#line 623 "switch_util.m"
            MR_Word backend_libs__switch_util__TypeTable_13;
#line 623 "switch_util.m"
            MR_Word backend_libs__switch_util__SwitchVarTypeCtor_14;
#line 623 "switch_util.m"
            MR_Word backend_libs__switch_util__SwitchVarTypeDefn_15;
#line 623 "switch_util.m"
            MR_Word backend_libs__switch_util__SwitchVarTypeBody_16;
#line 623 "switch_util.m"
            MR_Word backend_libs__switch_util__V_17_17;
#line 630 "switch_util.m"
            MR_Word backend_libs__switch_util__V_19_19;
#line 630 "switch_util.m"
            MR_Word backend_libs__switch_util__V_20_20;
#line 630 "switch_util.m"
            MR_Word backend_libs__switch_util__V_21_21;
#line 630 "switch_util.m"
            MR_Word backend_libs__switch_util__V_22_22;
#line 630 "switch_util.m"
            MR_Word backend_libs__switch_util__V_23_23;
#line 630 "switch_util.m"
            MR_Word backend_libs__switch_util__V_24_24;
#line 630 "switch_util.m"
            MR_Word backend_libs__switch_util__V_25_25;
#line 630 "switch_util.m"
            MR_Word backend_libs__switch_util__V_26_26;

#line 623 "switch_util.m"
            {
#line 623 "switch_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(backend_libs__switch_util__ModuleInfo_5, &backend_libs__switch_util__TypeTable_13);
            }
#line 624 "switch_util.m"
            {
#line 624 "switch_util.m"
              parse_tree__prog_type__type_to_ctor_det_2_p_0(backend_libs__switch_util__SwitchVarType_6, &backend_libs__switch_util__SwitchVarTypeCtor_14);
            }
#line 627 "switch_util.m"
            {
#line 627 "switch_util.m"
              backend_libs__switch_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(backend_libs__switch_util__TypeTable_13, backend_libs__switch_util__SwitchVarTypeCtor_14, &backend_libs__switch_util__SwitchVarTypeDefn_15);
            }
#line 623 "switch_util.m"
            if (backend_libs__switch_util__succeeded)
#line 623 "switch_util.m"
              {
#line 629 "switch_util.m"
                {
#line 629 "switch_util.m"
                  hlds__hlds_data__get_type_defn_body_2_p_0(backend_libs__switch_util__SwitchVarTypeDefn_15, &backend_libs__switch_util__SwitchVarTypeBody_16);
                }
#line 630 "switch_util.m"
                backend_libs__switch_util__succeeded = ((MR_tag((MR_Word) backend_libs__switch_util__SwitchVarTypeBody_16)) == (MR_mktag((MR_Integer) 1)));
#line 630 "switch_util.m"
                if (backend_libs__switch_util__succeeded)
#line 630 "switch_util.m"
                  {
#line 630 "switch_util.m"
                    backend_libs__switch_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 0)));
#line 630 "switch_util.m"
                    backend_libs__switch_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 1)));
#line 630 "switch_util.m"
                    backend_libs__switch_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 2)));
#line 630 "switch_util.m"
                    backend_libs__switch_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 3)));
#line 630 "switch_util.m"
                    backend_libs__switch_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 4)));
#line 630 "switch_util.m"
                    backend_libs__switch_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 5)));
#line 630 "switch_util.m"
                    backend_libs__switch_util__V_25_25 = ((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 630 "switch_util.m"
                    backend_libs__switch_util__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 630 "switch_util.m"
                    backend_libs__switch_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__SwitchVarTypeBody_16, (MR_Integer) 7)));
#line 630 "switch_util.m"
                    backend_libs__switch_util__succeeded = (backend_libs__switch_util__V_17_17 == (MR_Integer) 0);
#line 630 "switch_util.m"
                  }
#line 623 "switch_util.m"
              }
#line 623 "switch_util.m"
          }
#line 608 "switch_util.m"
      }
#line 634 "switch_util.m"
    if (backend_libs__switch_util__succeeded)
#line 633 "switch_util.m"
      *backend_libs__switch_util__MayUseSmartIndexing_8 = (MR_Integer) 0;
#line 634 "switch_util.m"
    else
#line 635 "switch_util.m"
      *backend_libs__switch_util__MayUseSmartIndexing_8 = (MR_Integer) 1;
#line 597 "switch_util.m"
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
#line 543 "switch_util.m"
  {
#line 543 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 543 "switch_util.m"
    MR_Integer backend_libs__switch_util__Cost_4;

#line 543 "switch_util.m"
#line 543 "switch_util.m"
    switch (MR_tag((MR_Word) backend_libs__switch_util__Tag_3)) {
#line 543 "switch_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 543 "switch_util.m"
      case (MR_Integer) 0:
#line 543 "switch_util.m"
#line 543 "switch_util.m"
        switch (MR_unmkbody(backend_libs__switch_util__Tag_3)) {
#line 543 "switch_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 543 "switch_util.m"
          case (MR_Integer) 0:
#line 552 "switch_util.m"
            backend_libs__switch_util__Cost_4 = (MR_Integer) 2;
#line 543 "switch_util.m"
            break;
#line 543 "switch_util.m"
          case (MR_Integer) 1:
#line 592 "switch_util.m"
            {
#line 593 "switch_util.m"
              {
#line 593 "switch_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.estimate_switch_tag_test_cost\'/1", (MR_String) "non-switch tag");
              }
#line 592 "switch_util.m"
            }
#line 543 "switch_util.m"
            break;
#line 543 "switch_util.m"
        }
#line 543 "switch_util.m"
        break;
#line 543 "switch_util.m"
      case (MR_Integer) 1:
#line 570 "switch_util.m"
        {
#line 570 "switch_util.m"
          MR_String backend_libs__switch_util__String_16 = ((MR_String) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__Tag_3, (MR_Integer) 0)));
#line 570 "switch_util.m"
          MR_Integer backend_libs__switch_util__V_46_46;
#line 570 "switch_util.m"
          MR_Integer backend_libs__switch_util__V_48_48;

#line 576 "switch_util.m"
          {
#line 576 "switch_util.m"
            backend_libs__switch_util__V_48_48 = mercury__string__length_1_f_0(backend_libs__switch_util__String_16);
          }
#line 576 "switch_util.m"
          backend_libs__switch_util__V_46_46 = ((MR_Integer) 2 * backend_libs__switch_util__V_48_48);
#line 576 "switch_util.m"
          backend_libs__switch_util__Cost_4 = ((MR_Integer) 1 + backend_libs__switch_util__V_46_46);
#line 570 "switch_util.m"
        }
#line 543 "switch_util.m"
        break;
#line 543 "switch_util.m"
      case (MR_Integer) 2:
#line 563 "switch_util.m"
        backend_libs__switch_util__Cost_4 = (MR_Integer) 3;
#line 543 "switch_util.m"
        break;
#line 543 "switch_util.m"
      case (MR_Integer) 3:
#line 543 "switch_util.m"
#line 543 "switch_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 0)))) {
#line 543 "switch_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 543 "switch_util.m"
          case (MR_Integer) 0:
#line 543 "switch_util.m"
          case (MR_Integer) 1:
#line 543 "switch_util.m"
          case (MR_Integer) 14:
#line 543 "switch_util.m"
          case (MR_Integer) 15:
#line 545 "switch_util.m"
            backend_libs__switch_util__Cost_4 = (MR_Integer) 1;
#line 543 "switch_util.m"
            break;
#line 543 "switch_util.m"
          case (MR_Integer) 2:
#line 543 "switch_util.m"
          case (MR_Integer) 3:
#line 543 "switch_util.m"
          case (MR_Integer) 4:
#line 543 "switch_util.m"
          case (MR_Integer) 5:
#line 543 "switch_util.m"
          case (MR_Integer) 6:
#line 543 "switch_util.m"
          case (MR_Integer) 7:
#line 543 "switch_util.m"
          case (MR_Integer) 8:
#line 543 "switch_util.m"
          case (MR_Integer) 9:
#line 543 "switch_util.m"
          case (MR_Integer) 10:
#line 592 "switch_util.m"
            {
#line 593 "switch_util.m"
              {
#line 593 "switch_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.estimate_switch_tag_test_cost\'/1", (MR_String) "non-switch tag");
              }
#line 592 "switch_util.m"
            }
#line 543 "switch_util.m"
            break;
#line 543 "switch_util.m"
          case (MR_Integer) 11:
#line 543 "switch_util.m"
          case (MR_Integer) 12:
#line 558 "switch_util.m"
            backend_libs__switch_util__Cost_4 = (MR_Integer) 2;
#line 543 "switch_util.m"
            break;
#line 543 "switch_util.m"
          case (MR_Integer) 13:
#line 568 "switch_util.m"
            backend_libs__switch_util__Cost_4 = (MR_Integer) 4;
#line 543 "switch_util.m"
            break;
#line 543 "switch_util.m"
          case (MR_Integer) 16:
#line 578 "switch_util.m"
            {
#line 578 "switch_util.m"
              MR_Word backend_libs__switch_util__RAs_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 1)));
#line 578 "switch_util.m"
              MR_Word backend_libs__switch_util__SubTag_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__Tag_3, (MR_Integer) 2)));
#line 578 "switch_util.m"
              MR_Integer backend_libs__switch_util__V_41_41;
#line 578 "switch_util.m"
              MR_Integer backend_libs__switch_util__V_43_43;
#line 578 "switch_util.m"
              MR_Integer backend_libs__switch_util__V_44_44;

#line 580 "switch_util.m"
              {
#line 580 "switch_util.m"
                backend_libs__switch_util__V_43_43 = mercury__list__length_1_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, backend_libs__switch_util__RAs_17);
              }
#line 580 "switch_util.m"
              backend_libs__switch_util__V_41_41 = ((MR_Integer) 2 * backend_libs__switch_util__V_43_43);
#line 580 "switch_util.m"
              {
#line 580 "switch_util.m"
                backend_libs__switch_util__V_44_44 = backend_libs__switch_util__estimate_switch_tag_test_cost_1_f_0(backend_libs__switch_util__SubTag_18);
              }
#line 580 "switch_util.m"
              backend_libs__switch_util__Cost_4 = (backend_libs__switch_util__V_41_41 + backend_libs__switch_util__V_44_44);
#line 578 "switch_util.m"
            }
#line 543 "switch_util.m"
            break;
#line 543 "switch_util.m"
        }
#line 543 "switch_util.m"
        break;
#line 543 "switch_util.m"
    }
#line 543 "switch_util.m"
    return backend_libs__switch_util__Cost_4;
#line 543 "switch_util.m"
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
#line 511 "switch_util.m"
  {
#line 511 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;
#line 511 "switch_util.m"
    MR_Word backend_libs__switch_util__SwitchCat_4;

#line 511 "switch_util.m"
#line 511 "switch_util.m"
    switch (MR_tag((MR_Word) backend_libs__switch_util__CtorCat_3)) {
#line 511 "switch_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 511 "switch_util.m"
      case (MR_Integer) 0:
#line 511 "switch_util.m"
#line 511 "switch_util.m"
        switch (MR_unmkbody(backend_libs__switch_util__CtorCat_3)) {
#line 511 "switch_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 511 "switch_util.m"
          case (MR_Integer) 0:
#line 531 "switch_util.m"
            {
#line 534 "switch_util.m"
              {
#line 534 "switch_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
              }
#line 531 "switch_util.m"
            }
#line 511 "switch_util.m"
            break;
#line 511 "switch_util.m"
          case (MR_Integer) 1:
#line 531 "switch_util.m"
            {
#line 534 "switch_util.m"
              {
#line 534 "switch_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
              }
#line 531 "switch_util.m"
            }
#line 511 "switch_util.m"
            break;
#line 511 "switch_util.m"
          case (MR_Integer) 2:
#line 531 "switch_util.m"
            {
#line 534 "switch_util.m"
              {
#line 534 "switch_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
              }
#line 531 "switch_util.m"
            }
#line 511 "switch_util.m"
            break;
#line 511 "switch_util.m"
          case (MR_Integer) 3:
#line 531 "switch_util.m"
            {
#line 534 "switch_util.m"
              {
#line 534 "switch_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
              }
#line 531 "switch_util.m"
            }
#line 511 "switch_util.m"
            break;
#line 511 "switch_util.m"
          case (MR_Integer) 4:
#line 531 "switch_util.m"
            {
#line 534 "switch_util.m"
              {
#line 534 "switch_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
              }
#line 531 "switch_util.m"
            }
#line 511 "switch_util.m"
            break;
#line 511 "switch_util.m"
        }
#line 511 "switch_util.m"
        break;
#line 511 "switch_util.m"
      case (MR_Integer) 1:
#line 511 "switch_util.m"
        {
#line 511 "switch_util.m"
          MR_Word backend_libs__switch_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__switch_util__CtorCat_3, (MR_Integer) 0)));

#line 511 "switch_util.m"
          backend_libs__switch_util__SwitchCat_4 = ((&backend_libs__switch_util_vector_common_3[0 + backend_libs__switch_util__V_41_41]))->backend_libs__switch_util__vector_common_type_3_0__vct_3_f_0;
#line 511 "switch_util.m"
        }
#line 511 "switch_util.m"
        break;
#line 511 "switch_util.m"
      case (MR_Integer) 2:
#line 512 "switch_util.m"
        backend_libs__switch_util__SwitchCat_4 = (MR_Integer) 0;
#line 511 "switch_util.m"
        break;
#line 511 "switch_util.m"
      case (MR_Integer) 3:
#line 511 "switch_util.m"
#line 511 "switch_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__CtorCat_3, (MR_Integer) 0)))) {
#line 511 "switch_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 511 "switch_util.m"
          case (MR_Integer) 0:
#line 531 "switch_util.m"
            {
#line 534 "switch_util.m"
              {
#line 534 "switch_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
              }
#line 531 "switch_util.m"
            }
#line 511 "switch_util.m"
            break;
#line 511 "switch_util.m"
          case (MR_Integer) 1:
#line 511 "switch_util.m"
            {
#line 511 "switch_util.m"
              MR_Word backend_libs__switch_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__switch_util__CtorCat_3, (MR_Integer) 1)));

#line 511 "switch_util.m"
#line 511 "switch_util.m"
              switch (backend_libs__switch_util__V_42_42) {
#line 511 "switch_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 511 "switch_util.m"
                case (MR_Integer) 0:
#line 531 "switch_util.m"
                  {
#line 534 "switch_util.m"
                    {
#line 534 "switch_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
                    }
#line 531 "switch_util.m"
                  }
#line 511 "switch_util.m"
                  break;
#line 511 "switch_util.m"
                case (MR_Integer) 2:
#line 521 "switch_util.m"
                  backend_libs__switch_util__SwitchCat_4 = (MR_Integer) 2;
#line 511 "switch_util.m"
                  break;
#line 511 "switch_util.m"
                case (MR_Integer) 1:
#line 531 "switch_util.m"
                  {
#line 534 "switch_util.m"
                    {
#line 534 "switch_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "backend_libs.switch_util", (MR_String) "function \140backend_libs.switch_util.type_ctor_cat_to_switch_cat\'/1", (MR_String) "bad type ctor cat");
                    }
#line 531 "switch_util.m"
                  }
#line 511 "switch_util.m"
                  break;
#line 511 "switch_util.m"
              }
#line 511 "switch_util.m"
            }
#line 511 "switch_util.m"
            break;
#line 511 "switch_util.m"
        }
#line 511 "switch_util.m"
        break;
#line 511 "switch_util.m"
    }
#line 511 "switch_util.m"
    return backend_libs__switch_util__SwitchCat_4;
#line 511 "switch_util.m"
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
#line 486 "switch_util.m"
  {
#line 486 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 487 "switch_util.m"
    {
#line 487 "switch_util.m"
      backend_libs__switch_util__num_cons_ids_in_tagged_cases_loop_5_p_0(backend_libs__switch_util__TaggedCases_4, (MR_Integer) 0, backend_libs__switch_util__NumConsIds_5, (MR_Integer) 0, backend_libs__switch_util__NumArms_6);
#line 487 "switch_util.m"
      return;
    }
#line 486 "switch_util.m"
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
#line 392 "switch_util.m"
  {
#line 392 "switch_util.m"
    MR_bool backend_libs__switch_util__succeeded;

#line 392 "switch_util.m"
    {
#line 392 "switch_util.m"
      backend_libs__switch_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_103_95_99_97_115_101_115_95_95_91_50_93_95_48_5_p_0(backend_libs__switch_util__HeadVar__1_1, backend_libs__switch_util__HeadVar__3_3, backend_libs__switch_util__HeadVar__4_4, backend_libs__switch_util__MaybeIntSwitchLimits_5);
#line 392 "switch_util.m"
      return;
    }
#line 392 "switch_util.m"
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
