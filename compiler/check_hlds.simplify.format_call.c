/*
** Automatically generated from `format_call.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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


/* :- module check_hlds.simplify.format_call. */
/* :- implementation. */

/*
INIT mercury__check_hlds__simplify__format_call__init
ENDINIT
*/

#include "check_hlds.simplify.format_call.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "exception.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "stm_builtin.mih"
#include "store.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_path.mih"
#include "hlds.goal_util.mih"
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
#include "hlds.make_goal.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 141 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0;

#line 144 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0;

#line 147 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0;

#line 150 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 153 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 156 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 159 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 162 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 165 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__maybe__pti_maybe_1__plain_check_hlds__simplify__format_call__type_ctor_info_what_to_print_0;

#line 168 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

#line 171 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_id_0[1];

#line 174 "check_hlds.simplify.format_call.c"
static const MR_NotagFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0;

#line 177 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

#line 180 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0;

#line 183 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_what_to_print_0;

#line 186 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 189 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_conj_map_0_0[4];

#line 192 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_conj_map_0_0[4];

#line 195 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_conj_map_0_0;

#line 198 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_conj_map_0_0[1];

#line 201 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_conj_map_0[1];

#line 204 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_conj_map_0[1];

#line 207 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_map_0[1];

#line 210 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_map_0;

#line 213 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_id_0;

#line 216 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0;

#line 219 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 222 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_fc_opt_goal_info_0_0[2];

#line 225 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_fc_opt_goal_info_0_0[2];

#line 228 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0;

#line 231 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fc_opt_goal_info_0_0[1];

#line 234 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fc_opt_goal_info_0[1];

#line 237 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_fc_opt_goal_info_0[1];

#line 240 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_fc_opt_goal_info_0[1];

#line 243 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 246 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_skeleton_result_0_0[2];

#line 249 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_skeleton_result_0_0[2];

#line 252 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_0;

#line 255 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_1;

#line 258 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_0[1];

#line 261 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_1[1];

#line 264 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_skeleton_result_0[2];

#line 267 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_follow_skeleton_result_0[2];

#line 270 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_follow_skeleton_result_0[2];

#line 273 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_0[1];

#line 276 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_0[1];

#line 279 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0;

#line 282 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_1[2];

#line 285 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_1[2];

#line 288 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1;

#line 291 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_2[3];

#line 294 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_2[3];

#line 297 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2;

#line 300 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_3[4];

#line 303 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_3[4];

#line 306 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3;

#line 309 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_0[1];

#line 312 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_1[1];

#line 315 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_2[1];

#line 318 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_3[1];

#line 321 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_kind_0[4];

#line 324 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_kind_0[4];

#line 327 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_kind_0[4];

#line 330 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_site_0_0[9];

#line 333 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_site_0_0[9];

#line 336 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0;

#line 339 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_site_0_0[1];

#line 342 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_site_0[1];

#line 345 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_site_0[1];

#line 348 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_site_0[1];

#line 351 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_0;

#line 354 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_list_skeleton_state_0_1[2];

#line 357 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_list_skeleton_state_0_1[2];

#line 360 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_1;

#line 363 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_0[1];

#line 366 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_1[1];

#line 369 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_list_skeleton_state_0[2];

#line 372 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_list_skeleton_state_0[2];

#line 375 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_list_skeleton_state_0[2];

#line 378 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_component_0_0[1];

#line 381 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_0;

#line 384 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_component_0_1[1];

#line 387 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_1;

#line 390 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_component_0_2[1];

#line 393 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_2;

#line 396 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_component_0_3[1];

#line 399 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_3;

#line 402 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_component_0_4[1];

#line 405 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_4;

#line 408 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_component_0_0[1];

#line 411 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_component_0_1[1];

#line 414 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_component_0_2[1];

#line 417 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_component_0_3[2];

#line 420 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_string_component_0[4];

#line 423 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_string_component_0[5];

#line 426 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_string_component_0[5];

#line 429 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_what_to_print_0_0[2];

#line 432 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_what_to_print_0_0[2];

#line 435 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_what_to_print_0_0;

#line 438 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_what_to_print_0_0[1];

#line 441 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_what_to_print_0[1];

#line 444 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_what_to_print_0[1];

#line 447 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_what_to_print_0[1];

#line 450 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0_10001(
#line 453 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 455 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 458 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0_10001(
#line 461 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 463 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 465 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 468 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0_10001(
#line 471 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 473 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 476 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0_10001(
#line 479 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 481 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 483 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 486 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0_10001(
#line 489 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 491 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 494 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0_10001(
#line 497 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 499 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 501 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 504 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0_10001(
#line 507 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 509 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 512 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0_10001(
#line 515 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 517 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 519 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 522 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0_10001(
#line 525 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 527 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 530 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0_10001(
#line 533 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 535 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 537 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 540 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0_10001(
#line 543 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 545 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 548 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0_10001(
#line 551 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 553 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 555 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 558 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0_10001(
#line 561 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 563 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 566 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0_10001(
#line 569 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 571 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 573 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 576 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0_10001(
#line 579 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 581 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 584 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0_10001(
#line 587 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 589 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 591 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 594 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_kind_0_0_10001(
#line 597 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 599 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 602 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_kind_0_0_10001(
#line 605 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 607 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 609 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 612 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_site_0_0_10001(
#line 615 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 617 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 620 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0_10001(
#line 623 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 625 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 627 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 630 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0_10001(
#line 633 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 635 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 638 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0_10001(
#line 641 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 643 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 645 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 648 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0_10001(
#line 651 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 653 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 656 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0_10001(
#line 659 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 661 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 663 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 666 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0_10001(
#line 669 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 671 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 674 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0_10001(
#line 677 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 679 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 681 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 684 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_component_0_0_10001(
#line 687 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 689 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 692 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_component_0_0_10001(
#line 695 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 697 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 699 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 702 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0_10001(
#line 705 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 707 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 710 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0_10001(
#line 713 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 715 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 717 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 720 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____what_to_print_0_0_10001(
#line 723 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 725 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2);

#line 728 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____what_to_print_0_0_10001(
#line 731 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 733 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 735 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3);

#line 596 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_p_0(
#line 596 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 596 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2);

#line 208 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____what_to_print_0_0(
#line 208 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 208 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 208 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 208 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____what_to_print_0_0(
#line 208 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 208 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 197 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0(
#line 197 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 197 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 197 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 197 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0(
#line 197 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 197 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 1202 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_component_0_0(
#line 1202 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 1202 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 1202 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 1202 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_component_0_0(
#line 1202 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 1202 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 188 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0(
#line 188 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 188 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 188 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 188 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0(
#line 188 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 188 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 201 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0(
#line 201 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 201 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 201 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 201 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0(
#line 201 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 201 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 213 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0(
#line 213 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 213 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 213 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 213 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0(
#line 213 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 213 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 175 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0(
#line 175 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 175 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 175 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 175 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_site_0_0(
#line 175 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 175 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 246 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_kind_0_0(
#line 246 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 246 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 246 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 246 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_kind_0_0(
#line 246 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 246 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 530 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0(
#line 530 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 530 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 530 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 530 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0(
#line 530 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 530 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 888 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0(
#line 888 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 888 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 888 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 888 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0(
#line 888 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 888 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 894 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0(
#line 894 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 894 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 894 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 894 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0(
#line 894 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 894 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 217 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0(
#line 217 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 217 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 217 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 217 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0(
#line 217 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 217 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 241 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0(
#line 241 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 241 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 241 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 241 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0(
#line 241 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 241 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 236 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0(
#line 236 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 236 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 236 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 236 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0(
#line 236 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 236 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 222 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0(
#line 222 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 222 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 222 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 222 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0(
#line 222 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 222 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 230 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0(
#line 230 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 230 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 230 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3);

#line 230 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0(
#line 230 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 230 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2);

#line 1328 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__represent_component_9_p_0(
#line 1328 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_10,
#line 1328 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Component_11,
#line 1328 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeResultVar_12,
#line 1328 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__ResultVar_13,
#line 1328 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goals_14,
#line 1328 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_23,
#line 1328 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_24,
#line 1328 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_25,
#line 1328 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_26);

#line 1316 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(
#line 1316 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeResultVar_7,
#line 1316 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__ResultVar_8,
#line 1316 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_11,
#line 1316 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_12,
#line 1316 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_13,
#line 1316 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_14);

#line 1280 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__replace_string_format_9_p_0(
#line 1280 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_10,
#line 1280 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Components_11,
#line 1280 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeResultVar_12,
#line 1280 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__ResultVar_13,
#line 1280 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goals_14,
#line 1280 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_27,
#line 1280 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_28,
#line 1280 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_29,
#line 1280 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_30);

#line 1209 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__interpret_format_string_4_p_0(
#line 1209 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 1209 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 1209 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3,
#line 1209 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Components_4);

#line 1170 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__create_io_format_replacement_11_p_0(
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_12,
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__FormatStringChars_13,
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeStreamVar_14,
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__IOInVar_15,
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__IOOutVar_16,
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__VarsToPrint_17,
#line 1170 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goal_18,
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_31,
#line 1170 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32,
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_33,
#line 1170 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_34);

#line 1120 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__create_string_format_replacement_9_p_0(
#line 1120 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_10,
#line 1120 "format_call.m"
  MR_Word check_hlds__simplify__format_call__FormatStringChars_11,
#line 1120 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ResultVar_12,
#line 1120 "format_call.m"
  MR_Word check_hlds__simplify__format_call__VarsToPrint_13,
#line 1120 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goal_14,
#line 1120 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_25,
#line 1120 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_26,
#line 1120 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_27,
#line 1120 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_28);

#line 1097 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_switch_10_p_0(
#line 1097 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 1097 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2,
#line 1097 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3,
#line 1097 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4,
#line 1097 "format_call.m"
  MR_Word check_hlds__simplify__format_call__NeededVars0_5,
#line 1097 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6,
#line 1097 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7,
#line 1097 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ToDeleteVars0_8,
#line 1097 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9,
#line 1097 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10);

#line 1077 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_disj_10_p_0(
#line 1077 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 1077 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2,
#line 1077 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3,
#line 1077 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4,
#line 1077 "format_call.m"
  MR_Word check_hlds__simplify__format_call__NeededVars0_5,
#line 1077 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6,
#line 1077 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7,
#line 1077 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ToDeleteVars0_8,
#line 1077 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9,
#line 1077 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10);

#line 1061 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_conj_8_p_0(
#line 1061 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 1061 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2,
#line 1061 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3,
#line 1061 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4,
#line 1061 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_5,
#line 1061 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_6,
#line 1061 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_7,
#line 1061 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_8);

#line 899 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(
#line 899 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Goal0_9,
#line 899 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goal_10,
#line 899 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97,
#line 899 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98,
#line 899 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99,
#line 899 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100,
#line 899 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101,
#line 899 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);

#line 880 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__alloc_id_3_p_0(
#line 880 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__ConjId_4,
#line 880 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_7,
#line 880 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_8);

#line 871 "format_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__format_call__get_conj_map_2_f_0(
#line 871 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjMaps_4,
#line 871 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjId_5);

#line 852 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_disj_arms_11_p_0(
#line 852 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_1,
#line 852 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 852 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ContainingId_3,
#line 852 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__4_4,
#line 852 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_5,
#line 852 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_6,
#line 852 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_7,
#line 852 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_8,
#line 852 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_9,
#line 852 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_10,
#line 852 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__11_11);

#line 836 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Disjuncts_15,
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CurId_16,
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_26,
#line 836 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_27,
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_28,
#line 836 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_29,
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_30,
#line 836 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_31,
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_32,
#line 836 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_33,
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_34,
#line 836 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_35);

#line 832 "format_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__format_call__project_case_goal_1_f_0(
#line 832 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1);

#line 741 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_unify_8_p_0(
#line 741 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Unification_9,
#line 741 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CurId_10,
#line 741 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_55,
#line 741 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_56,
#line 741 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_57,
#line 741 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_58,
#line 741 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_59,
#line 741 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_60);

#line 640 "format_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0_1(
#line 640 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 640 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1);

#line 617 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3,
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4,
#line 617 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5,
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6,
#line 617 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7,
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8,
#line 617 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9,
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10,
#line 617 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11,
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_12,
#line 617 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);

#line 604 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(
#line 604 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
#line 604 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Goal_15,
#line 604 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__CurId_16,
#line 604 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_23,
#line 604 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_24,
#line 604 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_25,
#line 604 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_26,
#line 604 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_27,
#line 604 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_28,
#line 604 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_29,
#line 604 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_30,
#line 604 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_31,
#line 604 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_32);

#line 592 "format_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__format_call__project_var_to_print_1_f_0(
#line 592 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1);

#line 587 "format_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__format_call__project_dummy_to_print_1_f_0(
#line 587 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1);

#line 571 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__follow_list_value_5_p_0(
#line 571 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjMaps_6,
#line 571 "format_call.m"
  MR_Word check_hlds__simplify__format_call__PredMap_7,
#line 571 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CurId_8,
#line 571 "format_call.m"
  MR_Word check_hlds__simplify__format_call__PolytypeVar_9,
#line 571 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__MaybeResult_10);

#line 537 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(
#line 537 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjMaps_6,
#line 537 "format_call.m"
  MR_Word check_hlds__simplify__format_call__PredMap_7,
#line 537 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CurId_8,
#line 537 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ListVar_9,
#line 537 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Result_10);

#line 514 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__follow_format_string_5_p_0(
#line 514 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjMaps_6,
#line 514 "format_call.m"
  MR_Word check_hlds__simplify__format_call__PredMap_7,
#line 514 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CurId_8,
#line 514 "format_call.m"
  MR_Word check_hlds__simplify__format_call__StringVar_9,
#line 514 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__MaybeString_10);

#line 464 "format_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__format_call__try_create_replacement_goal_13_p_0_1(
#line 464 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 464 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1);

#line 454 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__try_create_replacement_goal_13_p_0(
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__GoalId_15,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Kind_16,
#line 454 "format_call.m"
  MR_String check_hlds__simplify__format_call__FormatString_17,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__StringVar_18,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ValuesToDeleteVars_19,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__WhatToPrints_20,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_38,
#line 454 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_39,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_40,
#line 454 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_41,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_42,
#line 454 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_43);

#line 407 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_13_p_0_3(
#line 407 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 407 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1);

#line 405 "format_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_13_p_0_2(
#line 405 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 405 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1);

#line 379 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_13_p_0_1(
#line 379 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 379 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 379 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_2);

#line 342 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_13_p_0(
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__OptFormatCalls_15,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjMaps_16,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__PredMap_17,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__FormatCallSite_18,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_67,
#line 342 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_68,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Specs_0_69,
#line 342 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Specs_70,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_71,
#line 342 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_72,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_73,
#line 342 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_74);

#line 272 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__is_format_call_kind_and_vars_6_p_0(
#line 272 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleName_7,
#line 272 "format_call.m"
  MR_String check_hlds__simplify__format_call__Name_8,
#line 272 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Args_9,
#line 272 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Kind_10,
#line 272 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__FormatStringVar_11,
#line 272 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__FormattedValuesVar_12);

#line 324 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__analyze_and_optimize_format_calls_8_p_0_1(
#line 324 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 324 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 324 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 324 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_3,
#line 324 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_4,
#line 324 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_5,
#line 324 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_6,
#line 324 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_7,
#line 324 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_8,
#line 324 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_9);


static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_1[11][3];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_2[14][2];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_3[2][4];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_4[6][1];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_5[1][16];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_6[1][8];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_7[3][5];

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_8[1][6];

static /* final */ const MR_Float check_hlds__simplify__format_call_scalar_common_9[1];




static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_1[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_7[0])),
    ((MR_Box) (check_hlds__simplify__format_call__check_format_call_site_13_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_7[1])),
    ((MR_Box) (check_hlds__simplify__format_call__try_create_replacement_goal_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_7[2])),
    ((MR_Box) (check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_2[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_2[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_4[0])),
    ((MR_Box) ((MR_String) "string_writer"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Unknown format string in call to"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Unknown format values in call to"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Mismatched format and values in call to"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_3[2][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 33)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 32)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_4[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "stream"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 48))
  },
  /* row 3 */
  {
    (MR_Box) &check_hlds__simplify__format_call_scalar_common_9[0]
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "0"))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_5[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__maybe__pti_maybe_1__plain_check_hlds__simplify__format_call__type_ctor_info_what_to_print_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_7[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0)),
    ((MR_Box) (&mercury__string__string__type_ctor_info_poly_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
};

static /* final */ const MR_Box check_hlds__simplify__format_call_scalar_common_8[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__simplify__format_call__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Float check_hlds__simplify__format_call_scalar_common_9[1] = {
  /* row 0 */
  (MR_Float) 0.0000000000000000,
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1907 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_map_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0,
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0
  }
};

#line 1916 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_conj_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0,
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0
  }
};

#line 1925 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0
  }
};

#line 1934 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1942 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1950 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1958 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__simplify__format_call__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1967 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1975 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__maybe__pti_maybe_1__plain_check_hlds__simplify__format_call__type_ctor_info_what_to_print_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0
  }
};

#line 1983 "check_hlds.simplify.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__simplify__format_call__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__string__string__type_ctor_info_poly_type_0
  }
};

#line 1991 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_id_0[1] = {
  (MR_Integer) 0
};

#line 1996 "check_hlds.simplify.format_call.c"
static const MR_NotagFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0 = {
  (MR_String) "conj_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2003 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_id_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_id_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_id",
  {
    &check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0
  },
  {
    &check_hlds__simplify__format_call__check_hlds__simplify__format_call__notag_functor_desc_conj_id_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_id_0
};

#line 2024 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2033 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0
  }
};

#line 2042 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_what_to_print_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0
  }
};

#line 2051 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2060 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_conj_map_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_what_to_print_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2068 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_conj_map_0_0[4] = {
  (MR_String) "cm_string_map",
  (MR_String) "cm_list_skeleton_map",
  (MR_String) "cm_list_element_map",
  (MR_String) "cm_eqv_map"
};

#line 2076 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_conj_map_0_0 = {
  (MR_String) "conj_map",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_conj_map_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_conj_map_0_0,
  NULL,
  NULL
};

#line 2091 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_conj_map_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_conj_map_0_0
};

#line 2096 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_conj_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_conj_map_0_0
  }
};

#line 2105 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_conj_map_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_conj_map_0_0
};

#line 2110 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_map_0[1] = {
  (MR_Integer) 0
};

#line 2115 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_map",
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_conj_map_0
  },
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_conj_map_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_conj_map_0
};

#line 2136 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_map_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0
  }
};

#line 2145 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_maps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_maps_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_maps_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_maps",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_map_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2166 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0
  }
};

#line 2175 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_pred_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____conj_pred_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____conj_pred_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "conj_pred_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2check_hlds__simplify__format_call__type_ctor_info_conj_id_0check_hlds__simplify__format_call__type_ctor_info_conj_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2196 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_eqv_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "fc_eqv_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2217 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__simplify__format_call__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0
  }
};

#line 2226 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_goal_id_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "fc_goal_id_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2247 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2255 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_fc_opt_goal_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2261 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_fc_opt_goal_info_0_0[2] = {
  (MR_String) "fcogi_replacement_goal",
  (MR_String) "fcogi_unneeded_vars"
};

#line 2267 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0 = {
  (MR_String) "fc_opt_goal_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_fc_opt_goal_info_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_fc_opt_goal_info_0_0,
  NULL,
  NULL
};

#line 2282 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fc_opt_goal_info_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0
};

#line 2287 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fc_opt_goal_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_fc_opt_goal_info_0_0
  }
};

#line 2296 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_fc_opt_goal_info_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_fc_opt_goal_info_0_0
};

#line 2301 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_fc_opt_goal_info_0[1] = {
  (MR_Integer) 0
};

#line 2306 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "fc_opt_goal_info",
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_fc_opt_goal_info_0
  },
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_fc_opt_goal_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_fc_opt_goal_info_0
};

#line 2327 "check_hlds.simplify.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2335 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_skeleton_result_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2341 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_skeleton_result_0_0[2] = {
  (MR_String) "fsr_polytype_vars",
  (MR_String) "fsr_skeleton_vars"
};

#line 2347 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_0 = {
  (MR_String) "follow_skeleton_result",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_follow_skeleton_result_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_follow_skeleton_result_0_0,
  NULL,
  NULL
};

#line 2362 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_1 = {
  (MR_String) "no_follow_skeleton_result",
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

#line 2377 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_1
};

#line 2382 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_1[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_0
};

#line 2387 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_skeleton_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_follow_skeleton_result_0_1
  }
};

#line 2401 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_follow_skeleton_result_0[2] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_0,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_follow_skeleton_result_0_1
};

#line 2407 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_follow_skeleton_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2413 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_follow_skeleton_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "follow_skeleton_result",
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_follow_skeleton_result_0
  },
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_follow_skeleton_result_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_follow_skeleton_result_0
};

#line 2434 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2439 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_0[1] = {
  (MR_String) "sf_result_var"
};

#line 2444 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0 = {
  (MR_String) "kind_string_format",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_0,
  NULL,
  NULL
};

#line 2459 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_1[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2465 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_1[2] = {
  (MR_String) "iofns_io_in_var",
  (MR_String) "iofns_io_out_var"
};

#line 2471 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1 = {
  (MR_String) "kind_io_format_nostream",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_1,
  NULL,
  NULL
};

#line 2486 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_2[3] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2493 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_2[3] = {
  (MR_String) "iofs_stream_var",
  (MR_String) "iofs_io_in_var",
  (MR_String) "iofs_io_out_var"
};

#line 2500 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2 = {
  (MR_String) "kind_io_format_stream",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_2,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_2,
  NULL,
  NULL
};

#line 2515 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_3[4] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2523 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_3[4] = {
  (MR_String) "ssw_tc_info_var",
  (MR_String) "ssw_stream_var",
  (MR_String) "ssw_in_var",
  (MR_String) "ssw_out_var"
};

#line 2531 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3 = {
  (MR_String) "kind_stream_string_writer",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_kind_0_3,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_kind_0_3,
  NULL,
  NULL
};

#line 2546 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0
};

#line 2551 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_1[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1
};

#line 2556 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_2[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2
};

#line 2561 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_3[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3
};

#line 2566 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_kind_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_kind_0_3
  }
};

#line 2590 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_kind_0[4] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_1,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_2,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_3,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_kind_0_0
};

#line 2598 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_kind_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2606 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____format_call_kind_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____format_call_kind_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "format_call_kind",
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_kind_0
  },
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_kind_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_kind_0
};

#line 2627 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_site_0_0[9] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_kind_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0
};

#line 2640 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_site_0_0[9] = {
  (MR_String) "fcs_goal_id",
  (MR_String) "fcs_string_var",
  (MR_String) "fcs_values_var",
  (MR_String) "fcs_call_kind",
  (MR_String) "fcs_called_pred_module",
  (MR_String) "fcs_called_pred_name",
  (MR_String) "fcs_called_pred_arity",
  (MR_String) "fcs_call_context",
  (MR_String) "fcs_containing_conj"
};

#line 2653 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0 = {
  (MR_String) "format_call_site",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_format_call_site_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_format_call_site_0_0,
  NULL,
  NULL
};

#line 2668 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_site_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0
};

#line 2673 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_site_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_format_call_site_0_0
  }
};

#line 2682 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_site_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_format_call_site_0_0
};

#line 2687 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_site_0[1] = {
  (MR_Integer) 0
};

#line 2692 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____format_call_site_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____format_call_site_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "format_call_site",
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_format_call_site_0
  },
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_format_call_site_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_format_call_site_0
};

#line 2713 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_element_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____list_element_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____list_element_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "list_element_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_what_to_print_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2734 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "list_skeleton_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2755 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_0 = {
  (MR_String) "list_skeleton_nil",
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

#line 2770 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_list_skeleton_state_0_1[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2776 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_list_skeleton_state_0_1[2] = {
  (MR_String) "head",
  (MR_String) "tail"
};

#line 2782 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_1 = {
  (MR_String) "list_skeleton_cons",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_list_skeleton_state_0_1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_list_skeleton_state_0_1,
  NULL,
  NULL
};

#line 2797 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_0
};

#line 2802 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_1[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_1
};

#line 2807 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_list_skeleton_state_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_list_skeleton_state_0_1
  }
};

#line 2821 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_list_skeleton_state_0[2] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_1,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_list_skeleton_state_0_0
};

#line 2827 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_list_skeleton_state_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2833 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "list_skeleton_state",
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_list_skeleton_state_0
  },
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_list_skeleton_state_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_list_skeleton_state_0
};

#line 2854 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_component_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2859 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_0 = {
  (MR_String) "string_constant",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_component_0_0,
  NULL,
  NULL,
  NULL
};

#line 2874 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_component_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2879 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_1 = {
  (MR_String) "var_to_print_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_component_0_1,
  NULL,
  NULL,
  NULL
};

#line 2894 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_component_0_2[1] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2899 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_2 = {
  (MR_String) "var_to_print_float",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_component_0_2,
  NULL,
  NULL,
  NULL
};

#line 2914 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_component_0_3[1] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2919 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_3 = {
  (MR_String) "var_to_print_string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_component_0_3,
  NULL,
  NULL,
  NULL
};

#line 2934 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_component_0_4[1] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2939 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_4 = {
  (MR_String) "var_to_print_char",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_string_component_0_4,
  NULL,
  NULL,
  NULL
};

#line 2954 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_component_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_0
};

#line 2959 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_component_0_1[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_1
};

#line 2964 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_component_0_2[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_2
};

#line 2969 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_component_0_3[2] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_3,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_4
};

#line 2975 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_string_component_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_component_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_component_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_component_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_string_component_0_3
  }
};

#line 2999 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_string_component_0[5] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_0,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_4,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_2,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_1,
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_string_component_0_3
};

#line 3008 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_string_component_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 1
};

#line 3017 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_component_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____string_component_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____string_component_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "string_component",
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_string_component_0
  },
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_string_component_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_string_component_0
};

#line 3038 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____string_map_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____string_map_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "string_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3059 "check_hlds.simplify.format_call.c"
static const MR_PseudoTypeInfo check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_what_to_print_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__simplify__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__string__string__type_ctor_info_poly_type_0
};

#line 3065 "check_hlds.simplify.format_call.c"
static const MR_ConstString check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_what_to_print_0_0[2] = {
  (MR_String) "var_to_print",
  (MR_String) "dummy_to_print"
};

#line 3071 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDesc check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_what_to_print_0_0 = {
  (MR_String) "what_to_print",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_types_what_to_print_0_0,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__field_names_what_to_print_0_0,
  NULL,
  NULL
};

#line 3086 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_what_to_print_0_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_what_to_print_0_0
};

#line 3091 "check_hlds.simplify.format_call.c"
static const MR_DuPtagLayout check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_what_to_print_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_stag_ordered_what_to_print_0_0
  }
};

#line 3100 "check_hlds.simplify.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_what_to_print_0[1] = {
  &check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_functor_desc_what_to_print_0_0
};

#line 3105 "check_hlds.simplify.format_call.c"
static const MR_Integer check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_what_to_print_0[1] = {
  (MR_Integer) 0
};

#line 3110 "check_hlds.simplify.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__simplify__format_call____Unify____what_to_print_0_0_10001)),
  ((MR_Box) (check_hlds__simplify__format_call____Compare____what_to_print_0_0_10001)),
  (MR_String) "check_hlds.simplify.format_call",
  (MR_String) "what_to_print",
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_name_ordered_what_to_print_0
  },
  {
    check_hlds__simplify__format_call__check_hlds__simplify__format_call__du_ptag_ordered_what_to_print_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__simplify__format_call__check_hlds__simplify__format_call__functor_number_map_what_to_print_0
};

#line 3131 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0_10001(
#line 3134 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3136 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3138 "check_hlds.simplify.format_call.c"
{
#line 3140 "check_hlds.simplify.format_call.c"
  {
#line 3142 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3145 "check_hlds.simplify.format_call.c"
    {
#line 3147 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____conj_id_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3150 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3152 "check_hlds.simplify.format_call.c"
  }
#line 3154 "check_hlds.simplify.format_call.c"
}

#line 3157 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0_10001(
#line 3160 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3162 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3164 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3166 "check_hlds.simplify.format_call.c"
{
#line 3168 "check_hlds.simplify.format_call.c"
  {
#line 3170 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3173 "check_hlds.simplify.format_call.c"
    {
#line 3175 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____conj_id_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3178 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3180 "check_hlds.simplify.format_call.c"
  }
#line 3182 "check_hlds.simplify.format_call.c"
}

#line 3185 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0_10001(
#line 3188 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3190 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3192 "check_hlds.simplify.format_call.c"
{
#line 3194 "check_hlds.simplify.format_call.c"
  {
#line 3196 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3199 "check_hlds.simplify.format_call.c"
    {
#line 3201 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____conj_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3204 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3206 "check_hlds.simplify.format_call.c"
  }
#line 3208 "check_hlds.simplify.format_call.c"
}

#line 3211 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0_10001(
#line 3214 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3216 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3218 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3220 "check_hlds.simplify.format_call.c"
{
#line 3222 "check_hlds.simplify.format_call.c"
  {
#line 3224 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3227 "check_hlds.simplify.format_call.c"
    {
#line 3229 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____conj_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3232 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3234 "check_hlds.simplify.format_call.c"
  }
#line 3236 "check_hlds.simplify.format_call.c"
}

#line 3239 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0_10001(
#line 3242 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3244 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3246 "check_hlds.simplify.format_call.c"
{
#line 3248 "check_hlds.simplify.format_call.c"
  {
#line 3250 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3253 "check_hlds.simplify.format_call.c"
    {
#line 3255 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____conj_maps_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3258 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3260 "check_hlds.simplify.format_call.c"
  }
#line 3262 "check_hlds.simplify.format_call.c"
}

#line 3265 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0_10001(
#line 3268 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3270 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3272 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3274 "check_hlds.simplify.format_call.c"
{
#line 3276 "check_hlds.simplify.format_call.c"
  {
#line 3278 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3281 "check_hlds.simplify.format_call.c"
    {
#line 3283 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____conj_maps_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3286 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3288 "check_hlds.simplify.format_call.c"
  }
#line 3290 "check_hlds.simplify.format_call.c"
}

#line 3293 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0_10001(
#line 3296 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3298 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3300 "check_hlds.simplify.format_call.c"
{
#line 3302 "check_hlds.simplify.format_call.c"
  {
#line 3304 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3307 "check_hlds.simplify.format_call.c"
    {
#line 3309 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____conj_pred_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3312 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3314 "check_hlds.simplify.format_call.c"
  }
#line 3316 "check_hlds.simplify.format_call.c"
}

#line 3319 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0_10001(
#line 3322 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3324 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3326 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3328 "check_hlds.simplify.format_call.c"
{
#line 3330 "check_hlds.simplify.format_call.c"
  {
#line 3332 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3335 "check_hlds.simplify.format_call.c"
    {
#line 3337 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____conj_pred_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3340 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3342 "check_hlds.simplify.format_call.c"
  }
#line 3344 "check_hlds.simplify.format_call.c"
}

#line 3347 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0_10001(
#line 3350 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3352 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3354 "check_hlds.simplify.format_call.c"
{
#line 3356 "check_hlds.simplify.format_call.c"
  {
#line 3358 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3361 "check_hlds.simplify.format_call.c"
    {
#line 3363 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3366 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3368 "check_hlds.simplify.format_call.c"
  }
#line 3370 "check_hlds.simplify.format_call.c"
}

#line 3373 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0_10001(
#line 3376 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3378 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3380 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3382 "check_hlds.simplify.format_call.c"
{
#line 3384 "check_hlds.simplify.format_call.c"
  {
#line 3386 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3389 "check_hlds.simplify.format_call.c"
    {
#line 3391 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3394 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3396 "check_hlds.simplify.format_call.c"
  }
#line 3398 "check_hlds.simplify.format_call.c"
}

#line 3401 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0_10001(
#line 3404 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3406 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3408 "check_hlds.simplify.format_call.c"
{
#line 3410 "check_hlds.simplify.format_call.c"
  {
#line 3412 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3415 "check_hlds.simplify.format_call.c"
    {
#line 3417 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3420 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3422 "check_hlds.simplify.format_call.c"
  }
#line 3424 "check_hlds.simplify.format_call.c"
}

#line 3427 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0_10001(
#line 3430 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3432 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3434 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3436 "check_hlds.simplify.format_call.c"
{
#line 3438 "check_hlds.simplify.format_call.c"
  {
#line 3440 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3443 "check_hlds.simplify.format_call.c"
    {
#line 3445 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3448 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3450 "check_hlds.simplify.format_call.c"
  }
#line 3452 "check_hlds.simplify.format_call.c"
}

#line 3455 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0_10001(
#line 3458 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3460 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3462 "check_hlds.simplify.format_call.c"
{
#line 3464 "check_hlds.simplify.format_call.c"
  {
#line 3466 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3469 "check_hlds.simplify.format_call.c"
    {
#line 3471 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3474 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3476 "check_hlds.simplify.format_call.c"
  }
#line 3478 "check_hlds.simplify.format_call.c"
}

#line 3481 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0_10001(
#line 3484 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3486 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3488 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3490 "check_hlds.simplify.format_call.c"
{
#line 3492 "check_hlds.simplify.format_call.c"
  {
#line 3494 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3497 "check_hlds.simplify.format_call.c"
    {
#line 3499 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3502 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3504 "check_hlds.simplify.format_call.c"
  }
#line 3506 "check_hlds.simplify.format_call.c"
}

#line 3509 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0_10001(
#line 3512 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3514 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3516 "check_hlds.simplify.format_call.c"
{
#line 3518 "check_hlds.simplify.format_call.c"
  {
#line 3520 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3523 "check_hlds.simplify.format_call.c"
    {
#line 3525 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3528 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3530 "check_hlds.simplify.format_call.c"
  }
#line 3532 "check_hlds.simplify.format_call.c"
}

#line 3535 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0_10001(
#line 3538 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3540 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3542 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3544 "check_hlds.simplify.format_call.c"
{
#line 3546 "check_hlds.simplify.format_call.c"
  {
#line 3548 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3551 "check_hlds.simplify.format_call.c"
    {
#line 3553 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3556 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3558 "check_hlds.simplify.format_call.c"
  }
#line 3560 "check_hlds.simplify.format_call.c"
}

#line 3563 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_kind_0_0_10001(
#line 3566 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3568 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3570 "check_hlds.simplify.format_call.c"
{
#line 3572 "check_hlds.simplify.format_call.c"
  {
#line 3574 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3577 "check_hlds.simplify.format_call.c"
    {
#line 3579 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____format_call_kind_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3582 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3584 "check_hlds.simplify.format_call.c"
  }
#line 3586 "check_hlds.simplify.format_call.c"
}

#line 3589 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_kind_0_0_10001(
#line 3592 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3594 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3596 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3598 "check_hlds.simplify.format_call.c"
{
#line 3600 "check_hlds.simplify.format_call.c"
  {
#line 3602 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3605 "check_hlds.simplify.format_call.c"
    {
#line 3607 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____format_call_kind_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3610 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3612 "check_hlds.simplify.format_call.c"
  }
#line 3614 "check_hlds.simplify.format_call.c"
}

#line 3617 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_site_0_0_10001(
#line 3620 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3622 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3624 "check_hlds.simplify.format_call.c"
{
#line 3626 "check_hlds.simplify.format_call.c"
  {
#line 3628 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3631 "check_hlds.simplify.format_call.c"
    {
#line 3633 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____format_call_site_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3636 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3638 "check_hlds.simplify.format_call.c"
  }
#line 3640 "check_hlds.simplify.format_call.c"
}

#line 3643 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0_10001(
#line 3646 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3648 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3650 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3652 "check_hlds.simplify.format_call.c"
{
#line 3654 "check_hlds.simplify.format_call.c"
  {
#line 3656 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3659 "check_hlds.simplify.format_call.c"
    {
#line 3661 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____format_call_site_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3664 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3666 "check_hlds.simplify.format_call.c"
  }
#line 3668 "check_hlds.simplify.format_call.c"
}

#line 3671 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0_10001(
#line 3674 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3676 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3678 "check_hlds.simplify.format_call.c"
{
#line 3680 "check_hlds.simplify.format_call.c"
  {
#line 3682 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3685 "check_hlds.simplify.format_call.c"
    {
#line 3687 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____list_element_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3690 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3692 "check_hlds.simplify.format_call.c"
  }
#line 3694 "check_hlds.simplify.format_call.c"
}

#line 3697 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0_10001(
#line 3700 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3702 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3704 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3706 "check_hlds.simplify.format_call.c"
{
#line 3708 "check_hlds.simplify.format_call.c"
  {
#line 3710 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3713 "check_hlds.simplify.format_call.c"
    {
#line 3715 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____list_element_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3718 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3720 "check_hlds.simplify.format_call.c"
  }
#line 3722 "check_hlds.simplify.format_call.c"
}

#line 3725 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0_10001(
#line 3728 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3730 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3732 "check_hlds.simplify.format_call.c"
{
#line 3734 "check_hlds.simplify.format_call.c"
  {
#line 3736 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3739 "check_hlds.simplify.format_call.c"
    {
#line 3741 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3744 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3746 "check_hlds.simplify.format_call.c"
  }
#line 3748 "check_hlds.simplify.format_call.c"
}

#line 3751 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0_10001(
#line 3754 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3756 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3758 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3760 "check_hlds.simplify.format_call.c"
{
#line 3762 "check_hlds.simplify.format_call.c"
  {
#line 3764 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3767 "check_hlds.simplify.format_call.c"
    {
#line 3769 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3772 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3774 "check_hlds.simplify.format_call.c"
  }
#line 3776 "check_hlds.simplify.format_call.c"
}

#line 3779 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0_10001(
#line 3782 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3784 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3786 "check_hlds.simplify.format_call.c"
{
#line 3788 "check_hlds.simplify.format_call.c"
  {
#line 3790 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3793 "check_hlds.simplify.format_call.c"
    {
#line 3795 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3798 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3800 "check_hlds.simplify.format_call.c"
  }
#line 3802 "check_hlds.simplify.format_call.c"
}

#line 3805 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0_10001(
#line 3808 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3810 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3812 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3814 "check_hlds.simplify.format_call.c"
{
#line 3816 "check_hlds.simplify.format_call.c"
  {
#line 3818 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3821 "check_hlds.simplify.format_call.c"
    {
#line 3823 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3826 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3828 "check_hlds.simplify.format_call.c"
  }
#line 3830 "check_hlds.simplify.format_call.c"
}

#line 3833 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_component_0_0_10001(
#line 3836 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3838 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3840 "check_hlds.simplify.format_call.c"
{
#line 3842 "check_hlds.simplify.format_call.c"
  {
#line 3844 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3847 "check_hlds.simplify.format_call.c"
    {
#line 3849 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____string_component_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3852 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3854 "check_hlds.simplify.format_call.c"
  }
#line 3856 "check_hlds.simplify.format_call.c"
}

#line 3859 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_component_0_0_10001(
#line 3862 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3864 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3866 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3868 "check_hlds.simplify.format_call.c"
{
#line 3870 "check_hlds.simplify.format_call.c"
  {
#line 3872 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3875 "check_hlds.simplify.format_call.c"
    {
#line 3877 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____string_component_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3880 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3882 "check_hlds.simplify.format_call.c"
  }
#line 3884 "check_hlds.simplify.format_call.c"
}

#line 3887 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0_10001(
#line 3890 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3892 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3894 "check_hlds.simplify.format_call.c"
{
#line 3896 "check_hlds.simplify.format_call.c"
  {
#line 3898 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3901 "check_hlds.simplify.format_call.c"
    {
#line 3903 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____string_map_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3906 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3908 "check_hlds.simplify.format_call.c"
  }
#line 3910 "check_hlds.simplify.format_call.c"
}

#line 3913 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0_10001(
#line 3916 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3918 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3920 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3922 "check_hlds.simplify.format_call.c"
{
#line 3924 "check_hlds.simplify.format_call.c"
  {
#line 3926 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3929 "check_hlds.simplify.format_call.c"
    {
#line 3931 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____string_map_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3934 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3936 "check_hlds.simplify.format_call.c"
  }
#line 3938 "check_hlds.simplify.format_call.c"
}

#line 3941 "check_hlds.simplify.format_call.c"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____what_to_print_0_0_10001(
#line 3944 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 3946 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2)
#line 3948 "check_hlds.simplify.format_call.c"
{
#line 3950 "check_hlds.simplify.format_call.c"
  {
#line 3952 "check_hlds.simplify.format_call.c"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 3955 "check_hlds.simplify.format_call.c"
    {
#line 3957 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____what_to_print_0_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2));
    }
#line 3960 "check_hlds.simplify.format_call.c"
    return check_hlds__simplify__format_call__succeeded;
#line 3962 "check_hlds.simplify.format_call.c"
  }
#line 3964 "check_hlds.simplify.format_call.c"
}

#line 3967 "check_hlds.simplify.format_call.c"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____what_to_print_0_0_10001(
#line 3970 "check_hlds.simplify.format_call.c"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1,
#line 3972 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 3974 "check_hlds.simplify.format_call.c"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_3)
#line 3976 "check_hlds.simplify.format_call.c"
{
#line 3978 "check_hlds.simplify.format_call.c"
  {
#line 3980 "check_hlds.simplify.format_call.c"
    MR_Word check_hlds__simplify__format_call__conv0_HeadVar__1_1;

#line 3983 "check_hlds.simplify.format_call.c"
    {
#line 3985 "check_hlds.simplify.format_call.c"
      check_hlds__simplify__format_call____Compare____what_to_print_0_0(&check_hlds__simplify__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_3));
    }
#line 3988 "check_hlds.simplify.format_call.c"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv0_HeadVar__1_1));
#line 3990 "check_hlds.simplify.format_call.c"
  }
#line 3992 "check_hlds.simplify.format_call.c"
}

#line 596 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_p_0(
#line 596 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 596 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2)
#line 596 "format_call.m"
{
#line 598 "format_call.m"
  {
#line 598 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 598 "format_call.m"
    if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 598 "format_call.m"
      {
#line 598 "format_call.m"
        *check_hlds__simplify__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "format_call.m"
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 598 "format_call.m"
      }
#line 598 "format_call.m"
    else
#line 599 "format_call.m"
      {
#line 599 "format_call.m"
        MR_Box check_hlds__simplify__format_call__Value_3;
#line 599 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TailMaybes_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 599 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Tail_5;
#line 599 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));

#line 599 "format_call.m"
        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 599 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 599 "format_call.m"
          {
#line 599 "format_call.m"
            check_hlds__simplify__format_call__Value_3 = (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_6_6, (MR_Integer) 0));
#line 600 "format_call.m"
            {
#line 600 "format_call.m"
              check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_p_0(check_hlds__simplify__format_call__TailMaybes_4, &check_hlds__simplify__format_call__Tail_5);
            }
#line 599 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 599 "format_call.m"
              {
#line 599 "format_call.m"
                {
#line 599 "format_call.m"
                  MR_Word base;
#line 599 "format_call.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 599 "format_call.m"
                  *check_hlds__simplify__format_call__HeadVar__2_2 = base;
#line 599 "format_call.m"
                  MR_hl_field(MR_mktag(1), base, 0) = check_hlds__simplify__format_call__Value_3;
#line 599 "format_call.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Tail_5));
#line 599 "format_call.m"
                }
#line 599 "format_call.m"
                check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 599 "format_call.m"
              }
#line 599 "format_call.m"
          }
#line 599 "format_call.m"
      }
#line 598 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 598 "format_call.m"
  }
#line 596 "format_call.m"
}

#line 208 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____what_to_print_0_0(
#line 208 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 208 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 208 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 208 "format_call.m"
{
#line 208 "format_call.m"
  {
#line 208 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 208 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_9 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 208 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_10 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 208 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_9 == check_hlds__simplify__format_call__CastY_10);
#line 208 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 4102 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 208 "format_call.m"
    else
#line 208 "format_call.m"
      {
#line 208 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 208 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 208 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 208 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 208 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_8_8;

#line 208 "format_call.m"
        {
#line 208 "format_call.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_8_8, ((MR_Box) (check_hlds__simplify__format_call__V_4_4)), ((MR_Box) (check_hlds__simplify__format_call__V_6_6)));
        }
#line 4124 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_8_8 == (MR_Integer) 0);
#line 208 "format_call.m"
        check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 208 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 208 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_8_8;
#line 208 "format_call.m"
        else
#line 208 "format_call.m"
          {
#line 208 "format_call.m"
            mercury__string____Compare____poly_type_0_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__V_5_5, check_hlds__simplify__format_call__V_7_7);
#line 208 "format_call.m"
            return;
          }
#line 208 "format_call.m"
      }
#line 208 "format_call.m"
  }
#line 208 "format_call.m"
}

#line 208 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____what_to_print_0_0(
#line 208 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 208 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 208 "format_call.m"
{
#line 208 "format_call.m"
  {
#line 208 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 208 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_7 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 208 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_8 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 208 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_7 == check_hlds__simplify__format_call__CastY_8);
#line 208 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 208 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 208 "format_call.m"
    else
#line 208 "format_call.m"
      {
#line 208 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 208 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 208 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 208 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));

#line 4185 "check_hlds.simplify.format_call.c"
        {
#line 4187 "check_hlds.simplify.format_call.c"
          check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], ((MR_Box) (check_hlds__simplify__format_call__V_3_3)), ((MR_Box) (check_hlds__simplify__format_call__V_5_5)));
        }
#line 208 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 4192 "check_hlds.simplify.format_call.c"
          {
#line 4194 "check_hlds.simplify.format_call.c"
            return check_hlds__simplify__format_call__succeeded = mercury__string____Unify____poly_type_0_0(check_hlds__simplify__format_call__V_4_4, check_hlds__simplify__format_call__V_6_6);
          }
#line 208 "format_call.m"
      }
#line 208 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 208 "format_call.m"
  }
#line 208 "format_call.m"
}

#line 197 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_map_0_0(
#line 197 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 197 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 197 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 197 "format_call.m"
{
#line 197 "format_call.m"
  {
#line 197 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 197 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
#line 197 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

#line 197 "format_call.m"
    {
#line 197 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[1], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
#line 197 "format_call.m"
      return;
    }
#line 197 "format_call.m"
  }
#line 197 "format_call.m"
}

#line 197 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_map_0_0(
#line 197 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 197 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 197 "format_call.m"
{
#line 197 "format_call.m"
  {
#line 197 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 197 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
#line 197 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

#line 197 "format_call.m"
    {
#line 197 "format_call.m"
      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
#line 197 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 197 "format_call.m"
  }
#line 197 "format_call.m"
}

#line 1202 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____string_component_0_0(
#line 1202 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 1202 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 1202 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 1202 "format_call.m"
{
#line 1202 "format_call.m"
  {
#line 1202 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 1202 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_54 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 1202 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_55 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 1202 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_54 == check_hlds__simplify__format_call__CastY_55);
#line 1202 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 4292 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 1202 "format_call.m"
    else
#line 1202 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1202 "format_call.m"
        {
#line 1202 "format_call.m"
          MR_String check_hlds__simplify__format_call__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 1202 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1202 "format_call.m"
            {
#line 1202 "format_call.m"
              MR_String check_hlds__simplify__format_call__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));

#line 1202 "format_call.m"
              {
#line 1202 "format_call.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__V_61_61, check_hlds__simplify__format_call__V_5_5);
#line 1202 "format_call.m"
                return;
              }
#line 1202 "format_call.m"
            }
#line 1202 "format_call.m"
          else
#line 1202 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4323 "check_hlds.simplify.format_call.c"
              *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1202 "format_call.m"
            else
#line 1202 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4329 "check_hlds.simplify.format_call.c"
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1202 "format_call.m"
              else
#line 1202 "format_call.m"
                if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4335 "check_hlds.simplify.format_call.c"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1202 "format_call.m"
                else
#line 4339 "check_hlds.simplify.format_call.c"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1202 "format_call.m"
        }
#line 1202 "format_call.m"
      else
#line 1202 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1202 "format_call.m"
          {
#line 1202 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 1202 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4354 "check_hlds.simplify.format_call.c"
              *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1202 "format_call.m"
            else
#line 1202 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1202 "format_call.m"
                {
#line 1202 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));

#line 1202 "format_call.m"
                  {
#line 1202 "format_call.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_63_63)), ((MR_Box) (check_hlds__simplify__format_call__V_29_29)));
#line 1202 "format_call.m"
                    return;
                  }
#line 1202 "format_call.m"
                }
#line 1202 "format_call.m"
              else
#line 1202 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4378 "check_hlds.simplify.format_call.c"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1202 "format_call.m"
                else
#line 1202 "format_call.m"
                  if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4384 "check_hlds.simplify.format_call.c"
                    *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1202 "format_call.m"
                  else
#line 4388 "check_hlds.simplify.format_call.c"
                    *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1202 "format_call.m"
          }
#line 1202 "format_call.m"
        else
#line 1202 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1202 "format_call.m"
            {
#line 1202 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 1202 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4403 "check_hlds.simplify.format_call.c"
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1202 "format_call.m"
              else
#line 1202 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4409 "check_hlds.simplify.format_call.c"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1202 "format_call.m"
                else
#line 1202 "format_call.m"
                  if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1202 "format_call.m"
                    {
#line 1202 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));

#line 1202 "format_call.m"
                      {
#line 1202 "format_call.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_64_64)), ((MR_Box) (check_hlds__simplify__format_call__V_17_17)));
#line 1202 "format_call.m"
                        return;
                      }
#line 1202 "format_call.m"
                    }
#line 1202 "format_call.m"
                  else
#line 1202 "format_call.m"
                    if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4433 "check_hlds.simplify.format_call.c"
                      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1202 "format_call.m"
                    else
#line 4437 "check_hlds.simplify.format_call.c"
                      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1202 "format_call.m"
            }
#line 1202 "format_call.m"
          else
#line 1202 "format_call.m"
            if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1202 "format_call.m"
              {
#line 1202 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));

#line 1202 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4452 "check_hlds.simplify.format_call.c"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1202 "format_call.m"
                else
#line 1202 "format_call.m"
                  if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4458 "check_hlds.simplify.format_call.c"
                    *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1202 "format_call.m"
                  else
#line 1202 "format_call.m"
                    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4464 "check_hlds.simplify.format_call.c"
                      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1202 "format_call.m"
                    else
#line 1202 "format_call.m"
                      if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1202 "format_call.m"
                        {
#line 1202 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));

#line 1202 "format_call.m"
                          {
#line 1202 "format_call.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_62_62)), ((MR_Box) (check_hlds__simplify__format_call__V_53_53)));
#line 1202 "format_call.m"
                            return;
                          }
#line 1202 "format_call.m"
                        }
#line 1202 "format_call.m"
                      else
#line 4486 "check_hlds.simplify.format_call.c"
                        *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1202 "format_call.m"
              }
#line 1202 "format_call.m"
            else
#line 1202 "format_call.m"
              {
#line 1202 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));

#line 1202 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4499 "check_hlds.simplify.format_call.c"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1202 "format_call.m"
                else
#line 1202 "format_call.m"
                  if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4505 "check_hlds.simplify.format_call.c"
                    *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1202 "format_call.m"
                  else
#line 1202 "format_call.m"
                    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4511 "check_hlds.simplify.format_call.c"
                      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1202 "format_call.m"
                    else
#line 1202 "format_call.m"
                      if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4517 "check_hlds.simplify.format_call.c"
                        *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1202 "format_call.m"
                      else
#line 1202 "format_call.m"
                        {
#line 1202 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));

#line 1202 "format_call.m"
                          {
#line 1202 "format_call.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_65_65)), ((MR_Box) (check_hlds__simplify__format_call__V_41_41)));
#line 1202 "format_call.m"
                            return;
                          }
#line 1202 "format_call.m"
                        }
#line 1202 "format_call.m"
              }
#line 1202 "format_call.m"
  }
#line 1202 "format_call.m"
}

#line 1202 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____string_component_0_0(
#line 1202 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 1202 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 1202 "format_call.m"
{
#line 1202 "format_call.m"
  {
#line 1202 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 1202 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_13 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 1202 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_14 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 1202 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_13 == check_hlds__simplify__format_call__CastY_14);
#line 1202 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 1202 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 1202 "format_call.m"
    else
#line 1202 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1202 "format_call.m"
        {
#line 1202 "format_call.m"
          MR_String check_hlds__simplify__format_call__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1202 "format_call.m"
          MR_String check_hlds__simplify__format_call__V_4_4;

#line 1202 "format_call.m"
          check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1202 "format_call.m"
          if (check_hlds__simplify__format_call__succeeded)
#line 1202 "format_call.m"
            {
#line 1202 "format_call.m"
              check_hlds__simplify__format_call__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 4585 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__V_3_3, check_hlds__simplify__format_call__V_4_4) == 0);
#line 1202 "format_call.m"
            }
#line 1202 "format_call.m"
        }
#line 1202 "format_call.m"
      else
#line 1202 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1202 "format_call.m"
          {
#line 1202 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeInfo_16_16;
#line 1202 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1202 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_8_8;

#line 1202 "format_call.m"
            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1202 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 1202 "format_call.m"
              {
#line 1202 "format_call.m"
                check_hlds__simplify__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 4612 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__TypeInfo_16_16 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4614 "check_hlds.simplify.format_call.c"
                {
#line 4616 "check_hlds.simplify.format_call.c"
                  return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_16_16, ((MR_Box) (check_hlds__simplify__format_call__V_7_7)), ((MR_Box) (check_hlds__simplify__format_call__V_8_8)));
                }
#line 1202 "format_call.m"
              }
#line 1202 "format_call.m"
          }
#line 1202 "format_call.m"
        else
#line 1202 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1202 "format_call.m"
            {
#line 1202 "format_call.m"
              MR_Word check_hlds__simplify__format_call__TypeInfo_17_17;
#line 1202 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1202 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_6_6;

#line 1202 "format_call.m"
              check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1202 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 1202 "format_call.m"
                {
#line 1202 "format_call.m"
                  check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 4644 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__TypeInfo_17_17 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4646 "check_hlds.simplify.format_call.c"
                  {
#line 4648 "check_hlds.simplify.format_call.c"
                    return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_17_17, ((MR_Box) (check_hlds__simplify__format_call__V_5_5)), ((MR_Box) (check_hlds__simplify__format_call__V_6_6)));
                  }
#line 1202 "format_call.m"
                }
#line 1202 "format_call.m"
            }
#line 1202 "format_call.m"
          else
#line 1202 "format_call.m"
            if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1202 "format_call.m"
              {
#line 1202 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeInfo_15_15;
#line 1202 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 1202 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_12_12;

#line 1202 "format_call.m"
                check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1202 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 1202 "format_call.m"
                  {
#line 1202 "format_call.m"
                    check_hlds__simplify__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 4676 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__TypeInfo_15_15 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4678 "check_hlds.simplify.format_call.c"
                    {
#line 4680 "check_hlds.simplify.format_call.c"
                      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_15_15, ((MR_Box) (check_hlds__simplify__format_call__V_11_11)), ((MR_Box) (check_hlds__simplify__format_call__V_12_12)));
                    }
#line 1202 "format_call.m"
                  }
#line 1202 "format_call.m"
              }
#line 1202 "format_call.m"
            else
#line 1202 "format_call.m"
              {
#line 1202 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeInfo_18_18;
#line 1202 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 1202 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_10_10;

#line 1202 "format_call.m"
                check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1202 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 1202 "format_call.m"
                  {
#line 1202 "format_call.m"
                    check_hlds__simplify__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 4706 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__TypeInfo_18_18 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4708 "check_hlds.simplify.format_call.c"
                    {
#line 4710 "check_hlds.simplify.format_call.c"
                      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_18_18, ((MR_Box) (check_hlds__simplify__format_call__V_9_9)), ((MR_Box) (check_hlds__simplify__format_call__V_10_10)));
                    }
#line 1202 "format_call.m"
                  }
#line 1202 "format_call.m"
              }
#line 1202 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 1202 "format_call.m"
  }
#line 1202 "format_call.m"
}

#line 188 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_state_0_0(
#line 188 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 188 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 188 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 188 "format_call.m"
{
#line 188 "format_call.m"
  {
#line 188 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 188 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_13 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 188 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_14 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 188 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_13 == check_hlds__simplify__format_call__CastY_14);
#line 188 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 4748 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 188 "format_call.m"
    else
#line 188 "format_call.m"
      if ((check_hlds__simplify__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 188 "format_call.m"
        if ((check_hlds__simplify__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 188 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 188 "format_call.m"
        else
#line 4760 "check_hlds.simplify.format_call.c"
          *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 188 "format_call.m"
      else
#line 188 "format_call.m"
        {
#line 188 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 188 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 188 "format_call.m"
          if ((check_hlds__simplify__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4773 "check_hlds.simplify.format_call.c"
            *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 188 "format_call.m"
          else
#line 188 "format_call.m"
            {
#line 188 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 188 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 188 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_12_12;

#line 188 "format_call.m"
              {
#line 188 "format_call.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_12_12, ((MR_Box) (check_hlds__simplify__format_call__V_18_18)), ((MR_Box) (check_hlds__simplify__format_call__V_10_10)));
              }
#line 4791 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_12_12 == (MR_Integer) 0);
#line 188 "format_call.m"
              check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 188 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 188 "format_call.m"
                *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_12_12;
#line 188 "format_call.m"
              else
#line 188 "format_call.m"
                {
#line 188 "format_call.m"
                  {
#line 188 "format_call.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_17_17)), ((MR_Box) (check_hlds__simplify__format_call__V_11_11)));
#line 188 "format_call.m"
                    return;
                  }
#line 188 "format_call.m"
                }
#line 188 "format_call.m"
            }
#line 188 "format_call.m"
        }
#line 188 "format_call.m"
  }
#line 188 "format_call.m"
}

#line 188 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_state_0_0(
#line 188 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 188 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 188 "format_call.m"
{
#line 188 "format_call.m"
  {
#line 188 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 188 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_9 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 188 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_10 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 188 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_9 == check_hlds__simplify__format_call__CastY_10);
#line 188 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 188 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 188 "format_call.m"
    else
#line 188 "format_call.m"
      if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 188 "format_call.m"
        {
#line 188 "format_call.m"
          MR_Integer check_hlds__simplify__format_call__CastX_3 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 188 "format_call.m"
          MR_Integer check_hlds__simplify__format_call__CastY_4 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 188 "format_call.m"
          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastY_4 == check_hlds__simplify__format_call__CastX_3);
#line 188 "format_call.m"
        }
#line 188 "format_call.m"
      else
#line 188 "format_call.m"
        {
#line 188 "format_call.m"
          MR_Word check_hlds__simplify__format_call__TypeInfo_11_11;
#line 188 "format_call.m"
          MR_Word check_hlds__simplify__format_call__TypeInfo_12_12;
#line 188 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 188 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 188 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_7_7;
#line 188 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_8_8;

#line 188 "format_call.m"
          check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 188 "format_call.m"
          if (check_hlds__simplify__format_call__succeeded)
#line 188 "format_call.m"
            {
#line 188 "format_call.m"
              check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 188 "format_call.m"
              check_hlds__simplify__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 4887 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4889 "check_hlds.simplify.format_call.c"
              {
#line 4891 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_11_11, ((MR_Box) (check_hlds__simplify__format_call__V_5_5)), ((MR_Box) (check_hlds__simplify__format_call__V_7_7)));
              }
#line 188 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 188 "format_call.m"
                {
#line 4898 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__TypeInfo_12_12 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 4900 "check_hlds.simplify.format_call.c"
                  {
#line 4902 "check_hlds.simplify.format_call.c"
                    return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_12_12, ((MR_Box) (check_hlds__simplify__format_call__V_6_6)), ((MR_Box) (check_hlds__simplify__format_call__V_8_8)));
                  }
#line 188 "format_call.m"
                }
#line 188 "format_call.m"
            }
#line 188 "format_call.m"
        }
#line 188 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 188 "format_call.m"
  }
#line 188 "format_call.m"
}

#line 201 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_skeleton_map_0_0(
#line 201 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 201 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 201 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 201 "format_call.m"
{
#line 201 "format_call.m"
  {
#line 201 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 201 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
#line 201 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

#line 201 "format_call.m"
    {
#line 201 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
#line 201 "format_call.m"
      return;
    }
#line 201 "format_call.m"
  }
#line 201 "format_call.m"
}

#line 201 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_skeleton_map_0_0(
#line 201 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 201 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 201 "format_call.m"
{
#line 201 "format_call.m"
  {
#line 201 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 201 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
#line 201 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

#line 201 "format_call.m"
    {
#line 201 "format_call.m"
      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[2], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
#line 201 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 201 "format_call.m"
  }
#line 201 "format_call.m"
}

#line 213 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____list_element_map_0_0(
#line 213 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 213 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 213 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 213 "format_call.m"
{
#line 213 "format_call.m"
  {
#line 213 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 213 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
#line 213 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

#line 213 "format_call.m"
    {
#line 213 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[3], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
#line 213 "format_call.m"
      return;
    }
#line 213 "format_call.m"
  }
#line 213 "format_call.m"
}

#line 213 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____list_element_map_0_0(
#line 213 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 213 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 213 "format_call.m"
{
#line 213 "format_call.m"
  {
#line 213 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 213 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
#line 213 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

#line 213 "format_call.m"
    {
#line 213 "format_call.m"
      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[3], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
#line 213 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 213 "format_call.m"
  }
#line 213 "format_call.m"
}

#line 175 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_site_0_0(
#line 175 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 175 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 175 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 175 "format_call.m"
{
#line 175 "format_call.m"
  {
#line 175 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 175 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_30 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 175 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_31 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 175 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_30 == check_hlds__simplify__format_call__CastY_31);
#line 175 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 5066 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 175 "format_call.m"
    else
#line 175 "format_call.m"
      {
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 4)));
#line 175 "format_call.m"
        MR_String check_hlds__simplify__format_call__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 5)));
#line 175 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 6)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 7)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 8)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 3)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 4)));
#line 175 "format_call.m"
        MR_String check_hlds__simplify__format_call__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 5)));
#line 175 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 6)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 7)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 8)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_22_22;
#line 175 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_41_41 = (MR_Integer) check_hlds__simplify__format_call__V_4_4;
#line 175 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_42_42 = (MR_Integer) check_hlds__simplify__format_call__V_13_13;

#line 175 "format_call.m"
        {
#line 175 "format_call.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__format_call__V_22_22, check_hlds__simplify__format_call__V_41_41, check_hlds__simplify__format_call__V_42_42);
        }
#line 5120 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_22_22 == (MR_Integer) 0);
#line 175 "format_call.m"
        check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 175 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_22_22;
#line 175 "format_call.m"
        else
#line 175 "format_call.m"
          {
#line 175 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_23_23;

#line 175 "format_call.m"
            {
#line 175 "format_call.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_23_23, ((MR_Box) (check_hlds__simplify__format_call__V_5_5)), ((MR_Box) (check_hlds__simplify__format_call__V_14_14)));
            }
#line 5140 "check_hlds.simplify.format_call.c"
            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_23_23 == (MR_Integer) 0);
#line 175 "format_call.m"
            check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 175 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
              *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_23_23;
#line 175 "format_call.m"
            else
#line 175 "format_call.m"
              {
#line 175 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_24_24;

#line 175 "format_call.m"
                {
#line 175 "format_call.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_24_24, ((MR_Box) (check_hlds__simplify__format_call__V_6_6)), ((MR_Box) (check_hlds__simplify__format_call__V_15_15)));
                }
#line 5160 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_24_24 == (MR_Integer) 0);
#line 175 "format_call.m"
                check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 175 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_24_24;
#line 175 "format_call.m"
                else
#line 175 "format_call.m"
                  {
#line 175 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__V_25_25;

#line 175 "format_call.m"
                    {
#line 175 "format_call.m"
                      check_hlds__simplify__format_call____Compare____format_call_kind_0_0(&check_hlds__simplify__format_call__V_25_25, check_hlds__simplify__format_call__V_7_7, check_hlds__simplify__format_call__V_16_16);
                    }
#line 5180 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_25_25 == (MR_Integer) 0);
#line 175 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 175 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
                      *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_25_25;
#line 175 "format_call.m"
                    else
#line 175 "format_call.m"
                      {
#line 175 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__V_26_26;

#line 175 "format_call.m"
                        {
#line 175 "format_call.m"
                          mdbcomp__sym_name____Compare____sym_name_0_0(&check_hlds__simplify__format_call__V_26_26, check_hlds__simplify__format_call__V_8_8, check_hlds__simplify__format_call__V_17_17);
                        }
#line 5200 "check_hlds.simplify.format_call.c"
                        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_26_26 == (MR_Integer) 0);
#line 175 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 175 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
                          *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_26_26;
#line 175 "format_call.m"
                        else
#line 175 "format_call.m"
                          {
#line 175 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__V_27_27;

#line 175 "format_call.m"
                            {
#line 175 "format_call.m"
                              mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__simplify__format_call__V_27_27, check_hlds__simplify__format_call__V_9_9, check_hlds__simplify__format_call__V_18_18);
                            }
#line 5220 "check_hlds.simplify.format_call.c"
                            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_27_27 == (MR_Integer) 0);
#line 175 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 175 "format_call.m"
                            if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
                              *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_27_27;
#line 175 "format_call.m"
                            else
#line 175 "format_call.m"
                              {
#line 175 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__V_28_28;

#line 175 "format_call.m"
                                {
#line 175 "format_call.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__simplify__format_call__V_28_28, check_hlds__simplify__format_call__V_10_10, check_hlds__simplify__format_call__V_19_19);
                                }
#line 5240 "check_hlds.simplify.format_call.c"
                                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_28_28 == (MR_Integer) 0);
#line 175 "format_call.m"
                                check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 175 "format_call.m"
                                if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
                                  *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_28_28;
#line 175 "format_call.m"
                                else
#line 175 "format_call.m"
                                  {
#line 175 "format_call.m"
                                    MR_Word check_hlds__simplify__format_call__V_29_29;

#line 175 "format_call.m"
                                    {
#line 175 "format_call.m"
                                      mercury__term____Compare____context_0_0(&check_hlds__simplify__format_call__V_29_29, check_hlds__simplify__format_call__V_11_11, check_hlds__simplify__format_call__V_20_20);
                                    }
#line 5260 "check_hlds.simplify.format_call.c"
                                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_29_29 == (MR_Integer) 0);
#line 175 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 175 "format_call.m"
                                    if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
                                      *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_29_29;
#line 175 "format_call.m"
                                    else
#line 175 "format_call.m"
                                      {
#line 175 "format_call.m"
                                        MR_Integer check_hlds__simplify__format_call__V_43_43 = (MR_Integer) check_hlds__simplify__format_call__V_12_12;
#line 175 "format_call.m"
                                        MR_Integer check_hlds__simplify__format_call__V_44_44 = (MR_Integer) check_hlds__simplify__format_call__V_21_21;

#line 175 "format_call.m"
                                        {
#line 175 "format_call.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__V_43_43, check_hlds__simplify__format_call__V_44_44);
#line 175 "format_call.m"
                                          return;
                                        }
#line 175 "format_call.m"
                                      }
#line 175 "format_call.m"
                                  }
#line 175 "format_call.m"
                              }
#line 175 "format_call.m"
                          }
#line 175 "format_call.m"
                      }
#line 175 "format_call.m"
                  }
#line 175 "format_call.m"
              }
#line 175 "format_call.m"
          }
#line 175 "format_call.m"
      }
#line 175 "format_call.m"
  }
#line 175 "format_call.m"
}

#line 175 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_site_0_0(
#line 175 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 175 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 175 "format_call.m"
{
#line 175 "format_call.m"
  {
#line 175 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 175 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_21 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 175 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_22 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 175 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_21 == check_hlds__simplify__format_call__CastY_22);
#line 175 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 175 "format_call.m"
    else
#line 175 "format_call.m"
      {
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_24_24;
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_25_25;
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 3)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 4)));
#line 175 "format_call.m"
        MR_String check_hlds__simplify__format_call__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 5)));
#line 175 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 6)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 7)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 8)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 4)));
#line 175 "format_call.m"
        MR_String check_hlds__simplify__format_call__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 5)));
#line 175 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 6)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 7)));
#line 175 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 8)));
#line 175 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_28_28 = (MR_Integer) check_hlds__simplify__format_call__V_3_3;
#line 175 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_29_29 = (MR_Integer) check_hlds__simplify__format_call__V_12_12;
#line 230 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__CastX_32;
#line 230 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__CastY_33;

#line 5384 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_28_28 == check_hlds__simplify__format_call__V_29_29);
#line 175 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
          {
#line 5390 "check_hlds.simplify.format_call.c"
            check_hlds__simplify__format_call__TypeInfo_24_24 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 5392 "check_hlds.simplify.format_call.c"
            {
#line 5394 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_24_24, ((MR_Box) (check_hlds__simplify__format_call__V_4_4)), ((MR_Box) (check_hlds__simplify__format_call__V_13_13)));
            }
#line 175 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
              {
#line 5401 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__TypeInfo_25_25 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 5403 "check_hlds.simplify.format_call.c"
                {
#line 5405 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_25_25, ((MR_Box) (check_hlds__simplify__format_call__V_5_5)), ((MR_Box) (check_hlds__simplify__format_call__V_14_14)));
                }
#line 175 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
                  {
#line 5412 "check_hlds.simplify.format_call.c"
                    {
#line 5414 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call____Unify____format_call_kind_0_0(check_hlds__simplify__format_call__V_6_6, check_hlds__simplify__format_call__V_15_15);
                    }
#line 175 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
                      {
#line 5421 "check_hlds.simplify.format_call.c"
                        {
#line 5423 "check_hlds.simplify.format_call.c"
                          check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__V_7_7, check_hlds__simplify__format_call__V_16_16);
                        }
#line 175 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
                          {
#line 5430 "check_hlds.simplify.format_call.c"
                            check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__V_8_8, check_hlds__simplify__format_call__V_17_17) == 0);
#line 175 "format_call.m"
                            if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
                              {
#line 5436 "check_hlds.simplify.format_call.c"
                                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_9_9 == check_hlds__simplify__format_call__V_18_18);
#line 175 "format_call.m"
                                if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
                                  {
#line 5442 "check_hlds.simplify.format_call.c"
                                    {
#line 5444 "check_hlds.simplify.format_call.c"
                                      check_hlds__simplify__format_call__succeeded = mercury__term____Unify____context_0_0(check_hlds__simplify__format_call__V_10_10, check_hlds__simplify__format_call__V_19_19);
                                    }
#line 175 "format_call.m"
                                    if (check_hlds__simplify__format_call__succeeded)
#line 175 "format_call.m"
                                      {
#line 230 "format_call.m"
                                        check_hlds__simplify__format_call__CastX_32 = (MR_Integer) check_hlds__simplify__format_call__V_11_11;
#line 230 "format_call.m"
                                        check_hlds__simplify__format_call__CastY_33 = (MR_Integer) check_hlds__simplify__format_call__V_20_20;
#line 230 "format_call.m"
                                        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_32 == check_hlds__simplify__format_call__CastY_33);
#line 230 "format_call.m"
                                        if (check_hlds__simplify__format_call__succeeded)
#line 230 "format_call.m"
                                          check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 230 "format_call.m"
                                        else
#line 230 "format_call.m"
                                          {
#line 230 "format_call.m"
                                            MR_Integer check_hlds__simplify__format_call__V_30_30 = (MR_Integer) check_hlds__simplify__format_call__V_11_11;
#line 230 "format_call.m"
                                            MR_Integer check_hlds__simplify__format_call__V_31_31 = (MR_Integer) check_hlds__simplify__format_call__V_20_20;

#line 5470 "check_hlds.simplify.format_call.c"
                                            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_30_30 == check_hlds__simplify__format_call__V_31_31);
#line 230 "format_call.m"
                                          }
#line 175 "format_call.m"
                                      }
#line 175 "format_call.m"
                                  }
#line 175 "format_call.m"
                              }
#line 175 "format_call.m"
                          }
#line 175 "format_call.m"
                      }
#line 175 "format_call.m"
                  }
#line 175 "format_call.m"
              }
#line 175 "format_call.m"
          }
#line 175 "format_call.m"
      }
#line 175 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 175 "format_call.m"
  }
#line 175 "format_call.m"
}

#line 246 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____format_call_kind_0_0(
#line 246 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 246 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 246 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 246 "format_call.m"
{
#line 246 "format_call.m"
  {
#line 246 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 246 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_90 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 246 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_91 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 246 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_90 == check_hlds__simplify__format_call__CastY_91);
#line 246 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 5523 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 246 "format_call.m"
    else
#line 246 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 246 "format_call.m"
        {
#line 246 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 246 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 246 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 246 "format_call.m"
            {
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_25_25;

#line 246 "format_call.m"
              {
#line 246 "format_call.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_25_25, ((MR_Box) (check_hlds__simplify__format_call__V_103_103)), ((MR_Box) (check_hlds__simplify__format_call__V_23_23)));
              }
#line 5552 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_25_25 == (MR_Integer) 0);
#line 246 "format_call.m"
              check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 246 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
                *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_25_25;
#line 246 "format_call.m"
              else
#line 246 "format_call.m"
                {
#line 246 "format_call.m"
                  {
#line 246 "format_call.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_102_102)), ((MR_Box) (check_hlds__simplify__format_call__V_24_24)));
#line 246 "format_call.m"
                    return;
                  }
#line 246 "format_call.m"
                }
#line 246 "format_call.m"
            }
#line 246 "format_call.m"
          else
#line 246 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5579 "check_hlds.simplify.format_call.c"
              *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "format_call.m"
            else
#line 246 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5585 "check_hlds.simplify.format_call.c"
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "format_call.m"
              else
#line 5589 "check_hlds.simplify.format_call.c"
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "format_call.m"
        }
#line 246 "format_call.m"
      else
#line 246 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 246 "format_call.m"
          {
#line 246 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 246 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 246 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 246 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5608 "check_hlds.simplify.format_call.c"
              *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "format_call.m"
            else
#line 246 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 246 "format_call.m"
                {
#line 246 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 246 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 246 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
#line 246 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_52_52;

#line 246 "format_call.m"
                  {
#line 246 "format_call.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_52_52, ((MR_Box) (check_hlds__simplify__format_call__V_106_106)), ((MR_Box) (check_hlds__simplify__format_call__V_49_49)));
                  }
#line 5630 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_52_52 == (MR_Integer) 0);
#line 246 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 246 "format_call.m"
                  if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
                    *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_52_52;
#line 246 "format_call.m"
                  else
#line 246 "format_call.m"
                    {
#line 246 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_53_53;

#line 246 "format_call.m"
                      {
#line 246 "format_call.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_53_53, ((MR_Box) (check_hlds__simplify__format_call__V_105_105)), ((MR_Box) (check_hlds__simplify__format_call__V_50_50)));
                      }
#line 5650 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_53_53 == (MR_Integer) 0);
#line 246 "format_call.m"
                      check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 246 "format_call.m"
                      if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
                        *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_53_53;
#line 246 "format_call.m"
                      else
#line 246 "format_call.m"
                        {
#line 246 "format_call.m"
                          {
#line 246 "format_call.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_104_104)), ((MR_Box) (check_hlds__simplify__format_call__V_51_51)));
#line 246 "format_call.m"
                            return;
                          }
#line 246 "format_call.m"
                        }
#line 246 "format_call.m"
                    }
#line 246 "format_call.m"
                }
#line 246 "format_call.m"
              else
#line 246 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5679 "check_hlds.simplify.format_call.c"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "format_call.m"
                else
#line 5683 "check_hlds.simplify.format_call.c"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "format_call.m"
          }
#line 246 "format_call.m"
        else
#line 246 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 246 "format_call.m"
            {
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 246 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5704 "check_hlds.simplify.format_call.c"
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "format_call.m"
              else
#line 246 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5710 "check_hlds.simplify.format_call.c"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "format_call.m"
                else
#line 246 "format_call.m"
                  if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 246 "format_call.m"
                    {
#line 246 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 246 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 246 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
#line 246 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 3)));
#line 246 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_87_87;

#line 246 "format_call.m"
                      {
#line 246 "format_call.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_87_87, ((MR_Box) (check_hlds__simplify__format_call__V_110_110)), ((MR_Box) (check_hlds__simplify__format_call__V_83_83)));
                      }
#line 5734 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_87_87 == (MR_Integer) 0);
#line 246 "format_call.m"
                      check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 246 "format_call.m"
                      if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
                        *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_87_87;
#line 246 "format_call.m"
                      else
#line 246 "format_call.m"
                        {
#line 246 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__V_88_88;

#line 246 "format_call.m"
                          {
#line 246 "format_call.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_88_88, ((MR_Box) (check_hlds__simplify__format_call__V_109_109)), ((MR_Box) (check_hlds__simplify__format_call__V_84_84)));
                          }
#line 5754 "check_hlds.simplify.format_call.c"
                          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_88_88 == (MR_Integer) 0);
#line 246 "format_call.m"
                          check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 246 "format_call.m"
                          if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
                            *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_88_88;
#line 246 "format_call.m"
                          else
#line 246 "format_call.m"
                            {
#line 246 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__V_89_89;

#line 246 "format_call.m"
                              {
#line 246 "format_call.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], &check_hlds__simplify__format_call__V_89_89, ((MR_Box) (check_hlds__simplify__format_call__V_108_108)), ((MR_Box) (check_hlds__simplify__format_call__V_85_85)));
                              }
#line 5774 "check_hlds.simplify.format_call.c"
                              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_89_89 == (MR_Integer) 0);
#line 246 "format_call.m"
                              check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 246 "format_call.m"
                              if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
                                *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_89_89;
#line 246 "format_call.m"
                              else
#line 246 "format_call.m"
                                {
#line 246 "format_call.m"
                                  {
#line 246 "format_call.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_107_107)), ((MR_Box) (check_hlds__simplify__format_call__V_86_86)));
#line 246 "format_call.m"
                                    return;
                                  }
#line 246 "format_call.m"
                                }
#line 246 "format_call.m"
                            }
#line 246 "format_call.m"
                        }
#line 246 "format_call.m"
                    }
#line 246 "format_call.m"
                  else
#line 5803 "check_hlds.simplify.format_call.c"
                    *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 246 "format_call.m"
            }
#line 246 "format_call.m"
          else
#line 246 "format_call.m"
            {
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 246 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5816 "check_hlds.simplify.format_call.c"
                *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "format_call.m"
              else
#line 246 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5822 "check_hlds.simplify.format_call.c"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "format_call.m"
                else
#line 246 "format_call.m"
                  if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5828 "check_hlds.simplify.format_call.c"
                    *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 246 "format_call.m"
                  else
#line 246 "format_call.m"
                    {
#line 246 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));

#line 246 "format_call.m"
                      {
#line 246 "format_call.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_111_111)), ((MR_Box) (check_hlds__simplify__format_call__V_5_5)));
#line 246 "format_call.m"
                        return;
                      }
#line 246 "format_call.m"
                    }
#line 246 "format_call.m"
            }
#line 246 "format_call.m"
  }
#line 246 "format_call.m"
}

#line 246 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____format_call_kind_0_0(
#line 246 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 246 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 246 "format_call.m"
{
#line 246 "format_call.m"
  {
#line 246 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 246 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_23 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 246 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_24 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 246 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_23 == check_hlds__simplify__format_call__CastY_24);
#line 246 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 246 "format_call.m"
    else
#line 246 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 246 "format_call.m"
        {
#line 246 "format_call.m"
          MR_Word check_hlds__simplify__format_call__TypeInfo_25_25;
#line 246 "format_call.m"
          MR_Word check_hlds__simplify__format_call__TypeInfo_26_26;
#line 246 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 246 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 246 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_7_7;
#line 246 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_8_8;

#line 246 "format_call.m"
          check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 246 "format_call.m"
          if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
            {
#line 246 "format_call.m"
              check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 246 "format_call.m"
              check_hlds__simplify__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 5906 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__TypeInfo_25_25 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 5908 "check_hlds.simplify.format_call.c"
              {
#line 5910 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_25_25, ((MR_Box) (check_hlds__simplify__format_call__V_5_5)), ((MR_Box) (check_hlds__simplify__format_call__V_7_7)));
              }
#line 246 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
                {
#line 5917 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__TypeInfo_26_26 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 5919 "check_hlds.simplify.format_call.c"
                  {
#line 5921 "check_hlds.simplify.format_call.c"
                    return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_26_26, ((MR_Box) (check_hlds__simplify__format_call__V_6_6)), ((MR_Box) (check_hlds__simplify__format_call__V_8_8)));
                  }
#line 246 "format_call.m"
                }
#line 246 "format_call.m"
            }
#line 246 "format_call.m"
        }
#line 246 "format_call.m"
      else
#line 246 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 246 "format_call.m"
          {
#line 246 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeInfo_27_27;
#line 246 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeInfo_28_28;
#line 246 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeInfo_29_29;
#line 246 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 246 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 246 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 246 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_12_12;
#line 246 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_13_13;
#line 246 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_14_14;

#line 246 "format_call.m"
            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 246 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
              {
#line 246 "format_call.m"
                check_hlds__simplify__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 246 "format_call.m"
                check_hlds__simplify__format_call__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 246 "format_call.m"
                check_hlds__simplify__format_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 5967 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__TypeInfo_27_27 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 5969 "check_hlds.simplify.format_call.c"
                {
#line 5971 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_27_27, ((MR_Box) (check_hlds__simplify__format_call__V_9_9)), ((MR_Box) (check_hlds__simplify__format_call__V_12_12)));
                }
#line 246 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
                  {
#line 5978 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__TypeInfo_28_28 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 5980 "check_hlds.simplify.format_call.c"
                    {
#line 5982 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_28_28, ((MR_Box) (check_hlds__simplify__format_call__V_10_10)), ((MR_Box) (check_hlds__simplify__format_call__V_13_13)));
                    }
#line 246 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
                      {
#line 5989 "check_hlds.simplify.format_call.c"
                        check_hlds__simplify__format_call__TypeInfo_29_29 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 5991 "check_hlds.simplify.format_call.c"
                        {
#line 5993 "check_hlds.simplify.format_call.c"
                          return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_29_29, ((MR_Box) (check_hlds__simplify__format_call__V_11_11)), ((MR_Box) (check_hlds__simplify__format_call__V_14_14)));
                        }
#line 246 "format_call.m"
                      }
#line 246 "format_call.m"
                  }
#line 246 "format_call.m"
              }
#line 246 "format_call.m"
          }
#line 246 "format_call.m"
        else
#line 246 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 246 "format_call.m"
            {
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__TypeInfo_30_30;
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__TypeInfo_31_31;
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__TypeInfo_32_32;
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__TypeInfo_33_33;
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 3)));
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_19_19;
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_20_20;
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_21_21;
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_22_22;

#line 246 "format_call.m"
              check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 246 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
                {
#line 246 "format_call.m"
                  check_hlds__simplify__format_call__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 246 "format_call.m"
                  check_hlds__simplify__format_call__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 246 "format_call.m"
                  check_hlds__simplify__format_call__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 246 "format_call.m"
                  check_hlds__simplify__format_call__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 6049 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__TypeInfo_30_30 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 6051 "check_hlds.simplify.format_call.c"
                  {
#line 6053 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_30_30, ((MR_Box) (check_hlds__simplify__format_call__V_15_15)), ((MR_Box) (check_hlds__simplify__format_call__V_19_19)));
                  }
#line 246 "format_call.m"
                  if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
                    {
#line 6060 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__TypeInfo_31_31 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 6062 "check_hlds.simplify.format_call.c"
                      {
#line 6064 "check_hlds.simplify.format_call.c"
                        check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_31_31, ((MR_Box) (check_hlds__simplify__format_call__V_16_16)), ((MR_Box) (check_hlds__simplify__format_call__V_20_20)));
                      }
#line 246 "format_call.m"
                      if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
                        {
#line 6071 "check_hlds.simplify.format_call.c"
                          check_hlds__simplify__format_call__TypeInfo_32_32 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 6073 "check_hlds.simplify.format_call.c"
                          {
#line 6075 "check_hlds.simplify.format_call.c"
                            check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_32_32, ((MR_Box) (check_hlds__simplify__format_call__V_17_17)), ((MR_Box) (check_hlds__simplify__format_call__V_21_21)));
                          }
#line 246 "format_call.m"
                          if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
                            {
#line 6082 "check_hlds.simplify.format_call.c"
                              check_hlds__simplify__format_call__TypeInfo_33_33 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 6084 "check_hlds.simplify.format_call.c"
                              {
#line 6086 "check_hlds.simplify.format_call.c"
                                return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_33_33, ((MR_Box) (check_hlds__simplify__format_call__V_18_18)), ((MR_Box) (check_hlds__simplify__format_call__V_22_22)));
                              }
#line 246 "format_call.m"
                            }
#line 246 "format_call.m"
                        }
#line 246 "format_call.m"
                    }
#line 246 "format_call.m"
                }
#line 246 "format_call.m"
            }
#line 246 "format_call.m"
          else
#line 246 "format_call.m"
            {
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__TypeInfo_34_34;
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 246 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_4_4;

#line 246 "format_call.m"
              check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 246 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 246 "format_call.m"
                {
#line 246 "format_call.m"
                  check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 6118 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__TypeInfo_34_34 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 6120 "check_hlds.simplify.format_call.c"
                  {
#line 6122 "check_hlds.simplify.format_call.c"
                    return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_34_34, ((MR_Box) (check_hlds__simplify__format_call__V_3_3)), ((MR_Box) (check_hlds__simplify__format_call__V_4_4)));
                  }
#line 246 "format_call.m"
                }
#line 246 "format_call.m"
            }
#line 246 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 246 "format_call.m"
  }
#line 246 "format_call.m"
}

#line 530 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____follow_skeleton_result_0_0(
#line 530 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 530 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 530 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 530 "format_call.m"
{
#line 530 "format_call.m"
  {
#line 530 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 530 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_13 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 530 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_14 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 530 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_13 == check_hlds__simplify__format_call__CastY_14);
#line 530 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 6160 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 530 "format_call.m"
    else
#line 530 "format_call.m"
      if ((check_hlds__simplify__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "format_call.m"
        if ((check_hlds__simplify__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 530 "format_call.m"
        else
#line 6172 "check_hlds.simplify.format_call.c"
          *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 530 "format_call.m"
      else
#line 530 "format_call.m"
        {
#line 530 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 530 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 530 "format_call.m"
          if ((check_hlds__simplify__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6185 "check_hlds.simplify.format_call.c"
            *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 530 "format_call.m"
          else
#line 530 "format_call.m"
            {
#line 530 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 530 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 530 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_8_8;

#line 530 "format_call.m"
              {
#line 530 "format_call.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[5], &check_hlds__simplify__format_call__V_8_8, ((MR_Box) (check_hlds__simplify__format_call__V_18_18)), ((MR_Box) (check_hlds__simplify__format_call__V_6_6)));
              }
#line 6203 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_8_8 == (MR_Integer) 0);
#line 530 "format_call.m"
              check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 530 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 530 "format_call.m"
                *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_8_8;
#line 530 "format_call.m"
              else
#line 530 "format_call.m"
                {
#line 530 "format_call.m"
                  {
#line 530 "format_call.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[5], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_17_17)), ((MR_Box) (check_hlds__simplify__format_call__V_7_7)));
#line 530 "format_call.m"
                    return;
                  }
#line 530 "format_call.m"
                }
#line 530 "format_call.m"
            }
#line 530 "format_call.m"
        }
#line 530 "format_call.m"
  }
#line 530 "format_call.m"
}

#line 530 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____follow_skeleton_result_0_0(
#line 530 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 530 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 530 "format_call.m"
{
#line 530 "format_call.m"
  {
#line 530 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 530 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_9 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 530 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_10 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 530 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_9 == check_hlds__simplify__format_call__CastY_10);
#line 530 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 530 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 530 "format_call.m"
    else
#line 530 "format_call.m"
      if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 530 "format_call.m"
        {
#line 530 "format_call.m"
          MR_Integer check_hlds__simplify__format_call__CastX_7 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 530 "format_call.m"
          MR_Integer check_hlds__simplify__format_call__CastY_8 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 530 "format_call.m"
          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastY_8 == check_hlds__simplify__format_call__CastX_7);
#line 530 "format_call.m"
        }
#line 530 "format_call.m"
      else
#line 530 "format_call.m"
        {
#line 530 "format_call.m"
          MR_Word check_hlds__simplify__format_call__TypeInfo_11_11;
#line 530 "format_call.m"
          MR_Word check_hlds__simplify__format_call__TypeInfo_12_12;
#line 530 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 530 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 530 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_5_5;
#line 530 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_6_6;

#line 530 "format_call.m"
          check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 530 "format_call.m"
          if (check_hlds__simplify__format_call__succeeded)
#line 530 "format_call.m"
            {
#line 530 "format_call.m"
              check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 530 "format_call.m"
              check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 6299 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__TypeInfo_11_11 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[5];
#line 6301 "check_hlds.simplify.format_call.c"
              {
#line 6303 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_11_11, ((MR_Box) (check_hlds__simplify__format_call__V_3_3)), ((MR_Box) (check_hlds__simplify__format_call__V_5_5)));
              }
#line 530 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 530 "format_call.m"
                {
#line 6310 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__TypeInfo_12_12 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[5];
#line 6312 "check_hlds.simplify.format_call.c"
                  {
#line 6314 "check_hlds.simplify.format_call.c"
                    return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_12_12, ((MR_Box) (check_hlds__simplify__format_call__V_4_4)), ((MR_Box) (check_hlds__simplify__format_call__V_6_6)));
                  }
#line 530 "format_call.m"
                }
#line 530 "format_call.m"
            }
#line 530 "format_call.m"
        }
#line 530 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 530 "format_call.m"
  }
#line 530 "format_call.m"
}

#line 888 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_opt_goal_info_0_0(
#line 888 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 888 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 888 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 888 "format_call.m"
{
#line 888 "format_call.m"
  {
#line 888 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 888 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_9 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 888 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_10 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 888 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_9 == check_hlds__simplify__format_call__CastY_10);
#line 888 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 6354 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 888 "format_call.m"
    else
#line 888 "format_call.m"
      {
#line 888 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 888 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 888 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 888 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 888 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_8_8;

#line 888 "format_call.m"
        {
#line 888 "format_call.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&check_hlds__simplify__format_call__V_8_8, check_hlds__simplify__format_call__V_4_4, check_hlds__simplify__format_call__V_6_6);
        }
#line 6376 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_8_8 == (MR_Integer) 0);
#line 888 "format_call.m"
        check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 888 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 888 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_8_8;
#line 888 "format_call.m"
        else
#line 888 "format_call.m"
          {
#line 888 "format_call.m"
            {
#line 888 "format_call.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_5_5)), ((MR_Box) (check_hlds__simplify__format_call__V_7_7)));
#line 888 "format_call.m"
              return;
            }
#line 888 "format_call.m"
          }
#line 888 "format_call.m"
      }
#line 888 "format_call.m"
  }
#line 888 "format_call.m"
}

#line 888 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_opt_goal_info_0_0(
#line 888 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 888 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 888 "format_call.m"
{
#line 888 "format_call.m"
  {
#line 888 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 888 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_7 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 888 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_8 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 888 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_7 == check_hlds__simplify__format_call__CastY_8);
#line 888 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 888 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 888 "format_call.m"
    else
#line 888 "format_call.m"
      {
#line 888 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_10_10;
#line 888 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 888 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 888 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 888 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));

#line 6443 "check_hlds.simplify.format_call.c"
        {
#line 6445 "check_hlds.simplify.format_call.c"
          check_hlds__simplify__format_call__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(check_hlds__simplify__format_call__V_3_3, check_hlds__simplify__format_call__V_5_5);
        }
#line 888 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 888 "format_call.m"
          {
#line 6452 "check_hlds.simplify.format_call.c"
            check_hlds__simplify__format_call__TypeInfo_10_10 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[4];
#line 6454 "check_hlds.simplify.format_call.c"
            {
#line 6456 "check_hlds.simplify.format_call.c"
              return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_10_10, ((MR_Box) (check_hlds__simplify__format_call__V_4_4)), ((MR_Box) (check_hlds__simplify__format_call__V_6_6)));
            }
#line 888 "format_call.m"
          }
#line 888 "format_call.m"
      }
#line 888 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 888 "format_call.m"
  }
#line 888 "format_call.m"
}

#line 894 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_goal_id_map_0_0(
#line 894 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 894 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 894 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 894 "format_call.m"
{
#line 894 "format_call.m"
  {
#line 894 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 894 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
#line 894 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

#line 894 "format_call.m"
    {
#line 894 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[0], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
#line 894 "format_call.m"
      return;
    }
#line 894 "format_call.m"
  }
#line 894 "format_call.m"
}

#line 894 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_goal_id_map_0_0(
#line 894 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 894 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 894 "format_call.m"
{
#line 894 "format_call.m"
  {
#line 894 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 894 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
#line 894 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

#line 894 "format_call.m"
    {
#line 894 "format_call.m"
      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[0], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
#line 894 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 894 "format_call.m"
  }
#line 894 "format_call.m"
}

#line 217 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____fc_eqv_map_0_0(
#line 217 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 217 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 217 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 217 "format_call.m"
{
#line 217 "format_call.m"
  {
#line 217 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 217 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
#line 217 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

#line 217 "format_call.m"
    {
#line 217 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[4], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
#line 217 "format_call.m"
      return;
    }
#line 217 "format_call.m"
  }
#line 217 "format_call.m"
}

#line 217 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____fc_eqv_map_0_0(
#line 217 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 217 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 217 "format_call.m"
{
#line 217 "format_call.m"
  {
#line 217 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 217 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
#line 217 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

#line 217 "format_call.m"
    {
#line 217 "format_call.m"
      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[4], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
#line 217 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 217 "format_call.m"
  }
#line 217 "format_call.m"
}

#line 241 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_pred_map_0_0(
#line 241 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 241 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 241 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 241 "format_call.m"
{
#line 241 "format_call.m"
  {
#line 241 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 241 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
#line 241 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

#line 241 "format_call.m"
    {
#line 241 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[6], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
#line 241 "format_call.m"
      return;
    }
#line 241 "format_call.m"
  }
#line 241 "format_call.m"
}

#line 241 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_pred_map_0_0(
#line 241 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 241 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 241 "format_call.m"
{
#line 241 "format_call.m"
  {
#line 241 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 241 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
#line 241 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

#line 241 "format_call.m"
    {
#line 241 "format_call.m"
      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[6], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
#line 241 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 241 "format_call.m"
  }
#line 241 "format_call.m"
}

#line 236 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_maps_0_0(
#line 236 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 236 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 236 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 236 "format_call.m"
{
#line 236 "format_call.m"
  {
#line 236 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 236 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_4 = check_hlds__simplify__format_call__HeadVar__2_2;
#line 236 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_5 = check_hlds__simplify__format_call__HeadVar__3_3;

#line 236 "format_call.m"
    {
#line 236 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[5], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_5)));
#line 236 "format_call.m"
      return;
    }
#line 236 "format_call.m"
  }
#line 236 "format_call.m"
}

#line 236 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_maps_0_0(
#line 236 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 236 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 236 "format_call.m"
{
#line 236 "format_call.m"
  {
#line 236 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 236 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar1_3 = check_hlds__simplify__format_call__HeadVar__1_1;
#line 236 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Cast_HeadVar2_4 = check_hlds__simplify__format_call__HeadVar__2_2;

#line 236 "format_call.m"
    {
#line 236 "format_call.m"
      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[5], ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__simplify__format_call__Cast_HeadVar2_4)));
    }
#line 236 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 236 "format_call.m"
  }
#line 236 "format_call.m"
}

#line 222 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_map_0_0(
#line 222 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 222 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 222 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 222 "format_call.m"
{
#line 222 "format_call.m"
  {
#line 222 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 222 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_15 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 222 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_16 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 222 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_15 == check_hlds__simplify__format_call__CastY_16);
#line 222 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 6742 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 222 "format_call.m"
    else
#line 222 "format_call.m"
      {
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 2)));
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 3)));
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_12_12;

#line 222 "format_call.m"
        {
#line 222 "format_call.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[1], &check_hlds__simplify__format_call__V_12_12, ((MR_Box) (check_hlds__simplify__format_call__V_4_4)), ((MR_Box) (check_hlds__simplify__format_call__V_8_8)));
        }
#line 6772 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_12_12 == (MR_Integer) 0);
#line 222 "format_call.m"
        check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 222 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 222 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_12_12;
#line 222 "format_call.m"
        else
#line 222 "format_call.m"
          {
#line 222 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_13_13;

#line 222 "format_call.m"
            {
#line 222 "format_call.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[2], &check_hlds__simplify__format_call__V_13_13, ((MR_Box) (check_hlds__simplify__format_call__V_5_5)), ((MR_Box) (check_hlds__simplify__format_call__V_9_9)));
            }
#line 6792 "check_hlds.simplify.format_call.c"
            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_13_13 == (MR_Integer) 0);
#line 222 "format_call.m"
            check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 222 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 222 "format_call.m"
              *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_13_13;
#line 222 "format_call.m"
            else
#line 222 "format_call.m"
              {
#line 222 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_14_14;

#line 222 "format_call.m"
                {
#line 222 "format_call.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[3], &check_hlds__simplify__format_call__V_14_14, ((MR_Box) (check_hlds__simplify__format_call__V_6_6)), ((MR_Box) (check_hlds__simplify__format_call__V_10_10)));
                }
#line 6812 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_14_14 == (MR_Integer) 0);
#line 222 "format_call.m"
                check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 222 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 222 "format_call.m"
                  *check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__V_14_14;
#line 222 "format_call.m"
                else
#line 222 "format_call.m"
                  {
#line 222 "format_call.m"
                    {
#line 222 "format_call.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[4], check_hlds__simplify__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__simplify__format_call__V_7_7)), ((MR_Box) (check_hlds__simplify__format_call__V_11_11)));
#line 222 "format_call.m"
                      return;
                    }
#line 222 "format_call.m"
                  }
#line 222 "format_call.m"
              }
#line 222 "format_call.m"
          }
#line 222 "format_call.m"
      }
#line 222 "format_call.m"
  }
#line 222 "format_call.m"
}

#line 222 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_map_0_0(
#line 222 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 222 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 222 "format_call.m"
{
#line 222 "format_call.m"
  {
#line 222 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 222 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_11 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 222 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_12 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 222 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_11 == check_hlds__simplify__format_call__CastY_12);
#line 222 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 222 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 222 "format_call.m"
    else
#line 222 "format_call.m"
      {
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_14_14;
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_15_15;
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_16_16;
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 3)));
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 222 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 3)));

#line 6895 "check_hlds.simplify.format_call.c"
        {
#line 6897 "check_hlds.simplify.format_call.c"
          check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_1[1], ((MR_Box) (check_hlds__simplify__format_call__V_3_3)), ((MR_Box) (check_hlds__simplify__format_call__V_7_7)));
        }
#line 222 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 222 "format_call.m"
          {
#line 6904 "check_hlds.simplify.format_call.c"
            check_hlds__simplify__format_call__TypeInfo_14_14 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[2];
#line 6906 "check_hlds.simplify.format_call.c"
            {
#line 6908 "check_hlds.simplify.format_call.c"
              check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_14_14, ((MR_Box) (check_hlds__simplify__format_call__V_4_4)), ((MR_Box) (check_hlds__simplify__format_call__V_8_8)));
            }
#line 222 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 222 "format_call.m"
              {
#line 6915 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__TypeInfo_15_15 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[3];
#line 6917 "check_hlds.simplify.format_call.c"
                {
#line 6919 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_15_15, ((MR_Box) (check_hlds__simplify__format_call__V_5_5)), ((MR_Box) (check_hlds__simplify__format_call__V_9_9)));
                }
#line 222 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 222 "format_call.m"
                  {
#line 6926 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__TypeInfo_16_16 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[4];
#line 6928 "check_hlds.simplify.format_call.c"
                    {
#line 6930 "check_hlds.simplify.format_call.c"
                      return check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_16_16, ((MR_Box) (check_hlds__simplify__format_call__V_6_6)), ((MR_Box) (check_hlds__simplify__format_call__V_10_10)));
                    }
#line 222 "format_call.m"
                  }
#line 222 "format_call.m"
              }
#line 222 "format_call.m"
          }
#line 222 "format_call.m"
      }
#line 222 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 222 "format_call.m"
  }
#line 222 "format_call.m"
}

#line 230 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call____Compare____conj_id_0_0(
#line 230 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__1_1,
#line 230 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 230 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3)
#line 230 "format_call.m"
{
#line 230 "format_call.m"
  {
#line 230 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 230 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_6 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 230 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_7 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 230 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_6 == check_hlds__simplify__format_call__CastY_7);
#line 230 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 6972 "check_hlds.simplify.format_call.c"
      *check_hlds__simplify__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 230 "format_call.m"
    else
#line 230 "format_call.m"
      {
#line 230 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_4_4 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;
#line 230 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_5_5 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__3_3;

#line 230 "format_call.m"
        {
#line 230 "format_call.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__V_4_4, check_hlds__simplify__format_call__V_5_5);
#line 230 "format_call.m"
          return;
        }
#line 230 "format_call.m"
      }
#line 230 "format_call.m"
  }
#line 230 "format_call.m"
}

#line 230 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call____Unify____conj_id_0_0(
#line 230 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 230 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2)
#line 230 "format_call.m"
{
#line 230 "format_call.m"
  {
#line 230 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 230 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastX_5 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 230 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__CastY_6 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 230 "format_call.m"
    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__CastX_5 == check_hlds__simplify__format_call__CastY_6);
#line 230 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 230 "format_call.m"
      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 230 "format_call.m"
    else
#line 230 "format_call.m"
      {
#line 230 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_3_3 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__1_1;
#line 230 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__V_4_4 = (MR_Integer) check_hlds__simplify__format_call__HeadVar__2_2;

#line 7030 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_3_3 == check_hlds__simplify__format_call__V_4_4);
#line 230 "format_call.m"
      }
#line 230 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 230 "format_call.m"
  }
#line 230 "format_call.m"
}

#line 1328 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__represent_component_9_p_0(
#line 1328 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_10,
#line 1328 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Component_11,
#line 1328 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeResultVar_12,
#line 1328 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__ResultVar_13,
#line 1328 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goals_14,
#line 1328 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_23,
#line 1328 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_24,
#line 1328 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_25,
#line 1328 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_26)
#line 1328 "format_call.m"
{
#line 1335 "format_call.m"
  {
#line 1335 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1335 "format_call.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Component_11)) == (MR_mktag((MR_Integer) 0))))
#line 1335 "format_call.m"
      {
#line 1335 "format_call.m"
        MR_String check_hlds__simplify__format_call__StringConstant_17 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Component_11, (MR_Integer) 0)));
#line 1335 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal_18;

#line 1336 "format_call.m"
        {
#line 1336 "format_call.m"
          check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_12, check_hlds__simplify__format_call__ResultVar_13, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_23, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_24, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_25, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_26);
        }
#line 1338 "format_call.m"
        {
#line 1338 "format_call.m"
          hlds__make_goal__make_string_const_construction_3_p_0(*check_hlds__simplify__format_call__ResultVar_13, check_hlds__simplify__format_call__StringConstant_17, &check_hlds__simplify__format_call__Goal_18);
        }
#line 1339 "format_call.m"
        {
#line 1339 "format_call.m"
          MR_Word base;
#line 1339 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1339 "format_call.m"
          *check_hlds__simplify__format_call__Goals_14 = base;
#line 1339 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_18));
#line 1339 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1339 "format_call.m"
        }
#line 1335 "format_call.m"
      }
#line 1335 "format_call.m"
    else
#line 1335 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Component_11)) == (MR_mktag((MR_Integer) 2))))
#line 1352 "format_call.m"
        {
#line 1352 "format_call.m"
          MR_Word check_hlds__simplify__format_call__FloatVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Component_11, (MR_Integer) 0)));
#line 1352 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_50_50;
#line 1352 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_56_56;
#line 1352 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_58_58;
#line 1352 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_59_59;
#line 1352 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_60_60;
#line 1352 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_62_62;
#line 1352 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_63_63;
#line 1352 "format_call.m"
          MR_Word check_hlds__simplify__format_call__Goal_94;

#line 1353 "format_call.m"
          {
#line 1353 "format_call.m"
            check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_12, check_hlds__simplify__format_call__ResultVar_13, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_23, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_24, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_25, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_26);
          }
#line 1355 "format_call.m"
          {
#line 1355 "format_call.m"
            check_hlds__simplify__format_call__V_50_50 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
          }
#line 1357 "format_call.m"
          {
#line 1357 "format_call.m"
            check_hlds__simplify__format_call__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1357 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_60_60, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_13));
#line 1357 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1357 "format_call.m"
          }
#line 1357 "format_call.m"
          {
#line 1357 "format_call.m"
            check_hlds__simplify__format_call__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1357 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_56_56, 0) = ((MR_Box) (check_hlds__simplify__format_call__FloatVar_20));
#line 1357 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_56_56, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_60_60));
#line 1357 "format_call.m"
          }
#line 1359 "format_call.m"
          {
#line 1359 "format_call.m"
            check_hlds__simplify__format_call__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1359 "format_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_63_63, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_13));
#line 1359 "format_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[10])));
#line 1359 "format_call.m"
          }
#line 1359 "format_call.m"
          {
#line 1359 "format_call.m"
            check_hlds__simplify__format_call__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1359 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_62_62, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_63_63));
#line 1359 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1359 "format_call.m"
          }
#line 1358 "format_call.m"
          {
#line 1358 "format_call.m"
            check_hlds__simplify__format_call__V_58_58 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__V_62_62);
          }
#line 1360 "format_call.m"
          {
#line 1360 "format_call.m"
            check_hlds__simplify__format_call__V_59_59 = mercury__term__context_init_0_f_0();
          }
#line 1355 "format_call.m"
          {
#line 1355 "format_call.m"
            hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__V_50_50, (MR_String) "float_to_string", (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__V_56_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__V_58_58, check_hlds__simplify__format_call__ModuleInfo_10, check_hlds__simplify__format_call__V_59_59, &check_hlds__simplify__format_call__Goal_94);
          }
#line 1361 "format_call.m"
          {
#line 1361 "format_call.m"
            MR_Word base;
#line 1361 "format_call.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1361 "format_call.m"
            *check_hlds__simplify__format_call__Goals_14 = base;
#line 1361 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_94));
#line 1361 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1361 "format_call.m"
          }
#line 1352 "format_call.m"
        }
#line 1335 "format_call.m"
      else
#line 1335 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Component_11)) == (MR_mktag((MR_Integer) 1))))
#line 1341 "format_call.m"
          {
#line 1341 "format_call.m"
            MR_Word check_hlds__simplify__format_call__IntVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Component_11, (MR_Integer) 0)));
#line 1341 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_71_71;
#line 1341 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_77_77;
#line 1341 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_79_79;
#line 1341 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_80_80;
#line 1341 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_81_81;
#line 1341 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_83_83;
#line 1341 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_84_84;
#line 1341 "format_call.m"
            MR_Word check_hlds__simplify__format_call__Goal_93;

#line 1342 "format_call.m"
            {
#line 1342 "format_call.m"
              check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_12, check_hlds__simplify__format_call__ResultVar_13, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_23, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_24, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_25, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_26);
            }
#line 1344 "format_call.m"
            {
#line 1344 "format_call.m"
              check_hlds__simplify__format_call__V_71_71 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
            }
#line 1346 "format_call.m"
            {
#line 1346 "format_call.m"
              check_hlds__simplify__format_call__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_81_81, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_13));
#line 1346 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1346 "format_call.m"
            }
#line 1346 "format_call.m"
            {
#line 1346 "format_call.m"
              check_hlds__simplify__format_call__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_77_77, 0) = ((MR_Box) (check_hlds__simplify__format_call__IntVar_19));
#line 1346 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_77_77, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_81_81));
#line 1346 "format_call.m"
            }
#line 1348 "format_call.m"
            {
#line 1348 "format_call.m"
              check_hlds__simplify__format_call__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1348 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_84_84, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_13));
#line 1348 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[10])));
#line 1348 "format_call.m"
            }
#line 1348 "format_call.m"
            {
#line 1348 "format_call.m"
              check_hlds__simplify__format_call__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_83_83, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_84_84));
#line 1348 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1348 "format_call.m"
            }
#line 1347 "format_call.m"
            {
#line 1347 "format_call.m"
              check_hlds__simplify__format_call__V_79_79 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__V_83_83);
            }
#line 1349 "format_call.m"
            {
#line 1349 "format_call.m"
              check_hlds__simplify__format_call__V_80_80 = mercury__term__context_init_0_f_0();
            }
#line 1344 "format_call.m"
            {
#line 1344 "format_call.m"
              hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__V_71_71, (MR_String) "int_to_string", (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__V_77_77, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__V_79_79, check_hlds__simplify__format_call__ModuleInfo_10, check_hlds__simplify__format_call__V_80_80, &check_hlds__simplify__format_call__Goal_93);
            }
#line 1350 "format_call.m"
            {
#line 1350 "format_call.m"
              MR_Word base;
#line 1350 "format_call.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1350 "format_call.m"
              *check_hlds__simplify__format_call__Goals_14 = base;
#line 1350 "format_call.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_93));
#line 1350 "format_call.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1350 "format_call.m"
            }
#line 1341 "format_call.m"
          }
#line 1335 "format_call.m"
        else
#line 1335 "format_call.m"
          if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__Component_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Component_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1363 "format_call.m"
            {
#line 1363 "format_call.m"
              MR_Word check_hlds__simplify__format_call__CharVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Component_11, (MR_Integer) 1)));
#line 1363 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_29_29;
#line 1363 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_35_35;
#line 1363 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_37_37;
#line 1363 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_38_38;
#line 1363 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_39_39;
#line 1363 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_41_41;
#line 1363 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_42_42;
#line 1363 "format_call.m"
              MR_Word check_hlds__simplify__format_call__Goal_95;

#line 1364 "format_call.m"
              {
#line 1364 "format_call.m"
                check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(check_hlds__simplify__format_call__MaybeResultVar_12, check_hlds__simplify__format_call__ResultVar_13, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_23, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_24, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_25, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_26);
              }
#line 1366 "format_call.m"
              {
#line 1366 "format_call.m"
                check_hlds__simplify__format_call__V_29_29 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
              }
#line 1368 "format_call.m"
              {
#line 1368 "format_call.m"
                check_hlds__simplify__format_call__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_39_39, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_13));
#line 1368 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1368 "format_call.m"
              }
#line 1368 "format_call.m"
              {
#line 1368 "format_call.m"
                check_hlds__simplify__format_call__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_35_35, 0) = ((MR_Box) (check_hlds__simplify__format_call__CharVar_21));
#line 1368 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_35_35, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_39_39));
#line 1368 "format_call.m"
              }
#line 1370 "format_call.m"
              {
#line 1370 "format_call.m"
                check_hlds__simplify__format_call__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1370 "format_call.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_42_42, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_13));
#line 1370 "format_call.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[10])));
#line 1370 "format_call.m"
              }
#line 1370 "format_call.m"
              {
#line 1370 "format_call.m"
                check_hlds__simplify__format_call__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1370 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_41_41, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_42_42));
#line 1370 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1370 "format_call.m"
              }
#line 1369 "format_call.m"
              {
#line 1369 "format_call.m"
                check_hlds__simplify__format_call__V_37_37 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__V_41_41);
              }
#line 1371 "format_call.m"
              {
#line 1371 "format_call.m"
                check_hlds__simplify__format_call__V_38_38 = mercury__term__context_init_0_f_0();
              }
#line 1366 "format_call.m"
              {
#line 1366 "format_call.m"
                hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__V_29_29, (MR_String) "char_to_string", (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__V_35_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__V_37_37, check_hlds__simplify__format_call__ModuleInfo_10, check_hlds__simplify__format_call__V_38_38, &check_hlds__simplify__format_call__Goal_95);
              }
#line 1372 "format_call.m"
              {
#line 1372 "format_call.m"
                MR_Word base;
#line 1372 "format_call.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1372 "format_call.m"
                *check_hlds__simplify__format_call__Goals_14 = base;
#line 1372 "format_call.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_95));
#line 1372 "format_call.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1372 "format_call.m"
              }
#line 1363 "format_call.m"
            }
#line 1335 "format_call.m"
          else
#line 1374 "format_call.m"
            {
#line 1374 "format_call.m"
              *check_hlds__simplify__format_call__ResultVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Component_11, (MR_Integer) 1)));
#line 1376 "format_call.m"
              *check_hlds__simplify__format_call__Goals_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1376 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_24 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_23;
#line 1376 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_26 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_25;
#line 1374 "format_call.m"
            }
#line 1335 "format_call.m"
  }
#line 1328 "format_call.m"
}

#line 1316 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__make_result_var_if_needed_6_p_0(
#line 1316 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeResultVar_7,
#line 1316 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__ResultVar_8,
#line 1316 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_11,
#line 1316 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_12,
#line 1316 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_13,
#line 1316 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_14)
#line 1316 "format_call.m"
{
#line 1321 "format_call.m"
  {
#line 1321 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1321 "format_call.m"
    if ((check_hlds__simplify__format_call__MaybeResultVar_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1323 "format_call.m"
      {
#line 1323 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_16_16;

#line 1324 "format_call.m"
        {
#line 1324 "format_call.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ResultVar_8, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_11, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_12);
        }
#line 1325 "format_call.m"
        {
#line 1325 "format_call.m"
          check_hlds__simplify__format_call__V_16_16 = parse_tree__builtin_lib_types__string_type_0_f_0();
        }
#line 1325 "format_call.m"
        {
#line 1325 "format_call.m"
          parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__simplify__format_call__ResultVar_8, check_hlds__simplify__format_call__V_16_16, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_13, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_14);
#line 1325 "format_call.m"
          return;
        }
#line 1323 "format_call.m"
      }
#line 1321 "format_call.m"
    else
#line 1321 "format_call.m"
      {
#line 1321 "format_call.m"
        *check_hlds__simplify__format_call__ResultVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeResultVar_7, (MR_Integer) 0)));
#line 1321 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_12 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_11;
#line 1321 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_14 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_13;
#line 1321 "format_call.m"
      }
#line 1321 "format_call.m"
  }
#line 1316 "format_call.m"
}

#line 1280 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__replace_string_format_9_p_0(
#line 1280 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_10,
#line 1280 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Components_11,
#line 1280 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeResultVar_12,
#line 1280 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__ResultVar_13,
#line 1280 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goals_14,
#line 1280 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_27,
#line 1280 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_28,
#line 1280 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_29,
#line 1280 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_30)
#line 1280 "format_call.m"
{
#line 1287 "format_call.m"
  {
#line 1287 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1287 "format_call.m"
    if ((check_hlds__simplify__format_call__Components_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1287 "format_call.m"
      {
#line 1287 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal_17;

#line 1321 "format_call.m"
        if ((check_hlds__simplify__format_call__MaybeResultVar_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1323 "format_call.m"
          {
#line 1323 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_77_77;

#line 1324 "format_call.m"
            {
#line 1324 "format_call.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ResultVar_13, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_27, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_28);
            }
#line 1325 "format_call.m"
            {
#line 1325 "format_call.m"
              check_hlds__simplify__format_call__V_77_77 = parse_tree__builtin_lib_types__string_type_0_f_0();
            }
#line 1325 "format_call.m"
            {
#line 1325 "format_call.m"
              parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__simplify__format_call__ResultVar_13, check_hlds__simplify__format_call__V_77_77, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_29, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_30);
            }
#line 1323 "format_call.m"
          }
#line 1321 "format_call.m"
        else
#line 1321 "format_call.m"
          {
#line 1321 "format_call.m"
            *check_hlds__simplify__format_call__ResultVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeResultVar_12, (MR_Integer) 0)));
#line 1321 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_28 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_27;
#line 1321 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_30 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_29;
#line 1321 "format_call.m"
          }
#line 1290 "format_call.m"
        {
#line 1290 "format_call.m"
          hlds__make_goal__make_string_const_construction_3_p_0(*check_hlds__simplify__format_call__ResultVar_13, (MR_String) "", &check_hlds__simplify__format_call__Goal_17);
        }
#line 1291 "format_call.m"
        {
#line 1291 "format_call.m"
          MR_Word base;
#line 1291 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "format_call.m"
          *check_hlds__simplify__format_call__Goals_14 = base;
#line 1291 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_17));
#line 1291 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1291 "format_call.m"
        }
#line 1287 "format_call.m"
      }
#line 1287 "format_call.m"
    else
#line 1293 "format_call.m"
      {
#line 1293 "format_call.m"
        MR_Word check_hlds__simplify__format_call__FirstComponent_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Components_11, (MR_Integer) 0)));
#line 1293 "format_call.m"
        MR_Word check_hlds__simplify__format_call__LaterComponents_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Components_11, (MR_Integer) 1)));

#line 1298 "format_call.m"
        if ((check_hlds__simplify__format_call__LaterComponents_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1296 "format_call.m"
          {
#line 1296 "format_call.m"
            check_hlds__simplify__format_call__represent_component_9_p_0(check_hlds__simplify__format_call__ModuleInfo_10, check_hlds__simplify__format_call__FirstComponent_18, check_hlds__simplify__format_call__MaybeResultVar_12, check_hlds__simplify__format_call__ResultVar_13, check_hlds__simplify__format_call__Goals_14, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_27, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_28, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_29, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_30);
#line 1296 "format_call.m"
            return;
          }
#line 1298 "format_call.m"
        else
#line 1299 "format_call.m"
          {
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeCtorInfo_67_67;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__LaterResultVar_22;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__LaterGoals_23;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__FirstResultVar_24;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__FirstGoals_25;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__AppendGoal_26;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32_32;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_33_33;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35_35;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_36_36;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_39_39;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_45_45;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_47_47;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_48_48;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_49_49;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_50_50;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_52_52;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_53_53;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_58_58;
#line 1299 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_59_59;

#line 1300 "format_call.m"
            {
#line 1300 "format_call.m"
              check_hlds__simplify__format_call__replace_string_format_9_p_0(check_hlds__simplify__format_call__ModuleInfo_10, check_hlds__simplify__format_call__LaterComponents_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__LaterResultVar_22, &check_hlds__simplify__format_call__LaterGoals_23, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_27, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32_32, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_29, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_33_33);
            }
#line 1302 "format_call.m"
            {
#line 1302 "format_call.m"
              check_hlds__simplify__format_call__represent_component_9_p_0(check_hlds__simplify__format_call__ModuleInfo_10, check_hlds__simplify__format_call__FirstComponent_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__FirstResultVar_24, &check_hlds__simplify__format_call__FirstGoals_25, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32_32, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_33_33, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_36_36);
            }
#line 1321 "format_call.m"
            if ((check_hlds__simplify__format_call__MaybeResultVar_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1323 "format_call.m"
              {
#line 1323 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_89_89;

#line 1324 "format_call.m"
                {
#line 1324 "format_call.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__ResultVar_13, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35_35, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_28);
                }
#line 1325 "format_call.m"
                {
#line 1325 "format_call.m"
                  check_hlds__simplify__format_call__V_89_89 = parse_tree__builtin_lib_types__string_type_0_f_0();
                }
#line 1325 "format_call.m"
                {
#line 1325 "format_call.m"
                  parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__simplify__format_call__ResultVar_13, check_hlds__simplify__format_call__V_89_89, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_36_36, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_30);
                }
#line 1323 "format_call.m"
              }
#line 1321 "format_call.m"
            else
#line 1321 "format_call.m"
              {
#line 1321 "format_call.m"
                *check_hlds__simplify__format_call__ResultVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeResultVar_12, (MR_Integer) 0)));
#line 1321 "format_call.m"
                *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_28 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_35_35;
#line 1321 "format_call.m"
                *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_30 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_36_36;
#line 1321 "format_call.m"
              }
#line 1306 "format_call.m"
            {
#line 1306 "format_call.m"
              check_hlds__simplify__format_call__V_39_39 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
            }
#line 1308 "format_call.m"
            {
#line 1308 "format_call.m"
              check_hlds__simplify__format_call__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_50_50, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_13));
#line 1308 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1308 "format_call.m"
            }
#line 1308 "format_call.m"
            {
#line 1308 "format_call.m"
              check_hlds__simplify__format_call__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_49_49, 0) = ((MR_Box) (check_hlds__simplify__format_call__LaterResultVar_22));
#line 1308 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_49_49, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_50_50));
#line 1308 "format_call.m"
            }
#line 1308 "format_call.m"
            {
#line 1308 "format_call.m"
              check_hlds__simplify__format_call__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_45_45, 0) = ((MR_Box) (check_hlds__simplify__format_call__FirstResultVar_24));
#line 1308 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_45_45, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_49_49));
#line 1308 "format_call.m"
            }
#line 1310 "format_call.m"
            {
#line 1310 "format_call.m"
              check_hlds__simplify__format_call__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1310 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_53_53, 0) = ((MR_Box) (*check_hlds__simplify__format_call__ResultVar_13));
#line 1310 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[10])));
#line 1310 "format_call.m"
            }
#line 1310 "format_call.m"
            {
#line 1310 "format_call.m"
              check_hlds__simplify__format_call__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_52_52, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_53_53));
#line 1310 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1310 "format_call.m"
            }
#line 1309 "format_call.m"
            {
#line 1309 "format_call.m"
              check_hlds__simplify__format_call__V_47_47 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__V_52_52);
            }
#line 1311 "format_call.m"
            {
#line 1311 "format_call.m"
              check_hlds__simplify__format_call__V_48_48 = mercury__term__context_init_0_f_0();
            }
#line 1306 "format_call.m"
            {
#line 1306 "format_call.m"
              hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__V_39_39, (MR_String) "++", (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__simplify__format_call__V_45_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__V_47_47, check_hlds__simplify__format_call__ModuleInfo_10, check_hlds__simplify__format_call__V_48_48, &check_hlds__simplify__format_call__AppendGoal_26);
            }
#line 7777 "check_hlds.simplify.format_call.c"
            check_hlds__simplify__format_call__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1312 "format_call.m"
            {
#line 1312 "format_call.m"
              check_hlds__simplify__format_call__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1312 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_59_59, 0) = ((MR_Box) (check_hlds__simplify__format_call__AppendGoal_26));
#line 1312 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1312 "format_call.m"
            }
#line 1312 "format_call.m"
            {
#line 1312 "format_call.m"
              check_hlds__simplify__format_call__V_58_58 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_67_67, check_hlds__simplify__format_call__FirstGoals_25, check_hlds__simplify__format_call__V_59_59);
            }
#line 1312 "format_call.m"
            {
#line 1312 "format_call.m"
              *check_hlds__simplify__format_call__Goals_14 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_67_67, check_hlds__simplify__format_call__LaterGoals_23, check_hlds__simplify__format_call__V_58_58);
            }
#line 1299 "format_call.m"
          }
#line 1293 "format_call.m"
      }
#line 1287 "format_call.m"
  }
#line 1280 "format_call.m"
}

#line 1209 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__interpret_format_string_4_p_0(
#line 1209 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 1209 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 1209 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3,
#line 1209 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Components_4)
#line 1209 "format_call.m"
{
#line 1212 "format_call.m"
  while (MR_TRUE)
#line 1212 "format_call.m"
    {
#line 1212 "format_call.m"
      /* tailcall optimized into a loop */
#line 1212 "format_call.m"
      {
#line 1212 "format_call.m"
        MR_bool check_hlds__simplify__format_call__succeeded;

#line 1212 "format_call.m"
        if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1212 "format_call.m"
          {
#line 1212 "format_call.m"
            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1212 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 1212 "format_call.m"
              {
#line 1216 "format_call.m"
                if ((check_hlds__simplify__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1215 "format_call.m"
                  *check_hlds__simplify__format_call__Components_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1216 "format_call.m"
                else
#line 1217 "format_call.m"
                  {
#line 1217 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__ConstChars_9;
#line 1217 "format_call.m"
                    MR_String check_hlds__simplify__format_call__ConstString_10;
#line 1217 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__V_11_11;

#line 1218 "format_call.m"
                    {
#line 1218 "format_call.m"
                      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, check_hlds__simplify__format_call__HeadVar__2_2, &check_hlds__simplify__format_call__ConstChars_9);
                    }
#line 1219 "format_call.m"
                    {
#line 1219 "format_call.m"
                      mercury__string__from_char_list_2_p_0(check_hlds__simplify__format_call__ConstChars_9, &check_hlds__simplify__format_call__ConstString_10);
                    }
#line 1220 "format_call.m"
                    {
#line 1220 "format_call.m"
                      check_hlds__simplify__format_call__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1220 "format_call.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_11_11, 0) = ((MR_Box) (check_hlds__simplify__format_call__ConstString_10));
#line 1220 "format_call.m"
                    }
#line 1220 "format_call.m"
                    {
#line 1220 "format_call.m"
                      MR_Word base;
#line 1220 "format_call.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1220 "format_call.m"
                      *check_hlds__simplify__format_call__Components_4 = base;
#line 1220 "format_call.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_11_11));
#line 1220 "format_call.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1220 "format_call.m"
                    }
#line 1217 "format_call.m"
                  }
#line 1216 "format_call.m"
                check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 1212 "format_call.m"
              }
#line 1212 "format_call.m"
          }
#line 1212 "format_call.m"
        else
#line 1223 "format_call.m"
          {
#line 1223 "format_call.m"
            MR_Char check_hlds__simplify__format_call__Char0_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1223 "format_call.m"
            MR_Word check_hlds__simplify__format_call__Chars0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));

#line 1224 "format_call.m"
            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Char0_13 == (MR_Char) 37);
#line 1267 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 1226 "format_call.m"
              {
#line 1226 "format_call.m"
                MR_Char check_hlds__simplify__format_call__Char1_18;
#line 1226 "format_call.m"
                MR_Word check_hlds__simplify__format_call__Chars1_19;

#line 1226 "format_call.m"
                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Chars0_14)) == (MR_mktag((MR_Integer) 1)));
#line 1226 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 1226 "format_call.m"
                  {
#line 1226 "format_call.m"
                    check_hlds__simplify__format_call__Char1_18 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Chars0_14, (MR_Integer) 0)));
#line 1226 "format_call.m"
                    check_hlds__simplify__format_call__Chars1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Chars0_14, (MR_Integer) 1)));
#line 1227 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Char1_18 == (MR_Char) 37);
#line 1231 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 1229 "format_call.m"
                      {
#line 1229 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RevConstChars_30_30;

#line 1229 "format_call.m"
                        {
#line 1229 "format_call.m"
                          check_hlds__simplify__format_call__STATE_VARIABLE_RevConstChars_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1229 "format_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_RevConstChars_30_30, 0) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__Char1_18));
#line 1229 "format_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_RevConstChars_30_30, 1) = ((MR_Box) (check_hlds__simplify__format_call__HeadVar__2_2));
#line 1229 "format_call.m"
                        }
#line 1230 "format_call.m"
                        /* direct tailcall eliminated */
#line 1230 "format_call.m"
                        {
#line 1230 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__HeadVar__1__tmp_copy_1 = check_hlds__simplify__format_call__Chars1_19;
#line 1230 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__HeadVar__2__tmp_copy_2 = check_hlds__simplify__format_call__STATE_VARIABLE_RevConstChars_30_30;

#line 1230 "format_call.m"
                          check_hlds__simplify__format_call__HeadVar__2_2 = check_hlds__simplify__format_call__HeadVar__2__tmp_copy_2;
#line 1230 "format_call.m"
                          check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__HeadVar__1__tmp_copy_1;
#line 1230 "format_call.m"
                        }
#line 1230 "format_call.m"
                        continue;
#line 1229 "format_call.m"
                      }
#line 1231 "format_call.m"
                    else
#line 1232 "format_call.m"
                      {
#line 1232 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__TypeCtorInfo_41_41;
#line 1232 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__Var0_20;
#line 1232 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__Vars1_21;
#line 1232 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__ConstComponents_22;
#line 1232 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__VarComponent_27;
#line 1232 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__TailComponents_28;
#line 1232 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__V_33_33;
#line 1232 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__V_34_34;

#line 1232 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1232 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 1232 "format_call.m"
                          {
#line 1232 "format_call.m"
                            check_hlds__simplify__format_call__Var0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 1232 "format_call.m"
                            check_hlds__simplify__format_call__Vars1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 1236 "format_call.m"
                            if ((check_hlds__simplify__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1235 "format_call.m"
                              check_hlds__simplify__format_call__ConstComponents_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1236 "format_call.m"
                            else
#line 1237 "format_call.m"
                              {
#line 1237 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__ConstChars_25;
#line 1237 "format_call.m"
                                MR_String check_hlds__simplify__format_call__ConstString_26;
#line 1237 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__V_31_31;

#line 1238 "format_call.m"
                                {
#line 1238 "format_call.m"
                                  mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, check_hlds__simplify__format_call__HeadVar__2_2, &check_hlds__simplify__format_call__ConstChars_25);
                                }
#line 1239 "format_call.m"
                                {
#line 1239 "format_call.m"
                                  mercury__string__from_char_list_2_p_0(check_hlds__simplify__format_call__ConstChars_25, &check_hlds__simplify__format_call__ConstString_26);
                                }
#line 1240 "format_call.m"
                                {
#line 1240 "format_call.m"
                                  check_hlds__simplify__format_call__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1240 "format_call.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_31_31, 0) = ((MR_Box) (check_hlds__simplify__format_call__ConstString_26));
#line 1240 "format_call.m"
                                }
#line 1240 "format_call.m"
                                {
#line 1240 "format_call.m"
                                  check_hlds__simplify__format_call__ConstComponents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "format_call.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ConstComponents_22, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_31_31));
#line 1240 "format_call.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ConstComponents_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1240 "format_call.m"
                                }
#line 1237 "format_call.m"
                              }
#line 1245 "format_call.m"
                            if ((check_hlds__simplify__format_call__Char1_18 == (MR_Char) 99))
#line 1262 "format_call.m"
                              {
#line 1262 "format_call.m"
                                {
#line 1262 "format_call.m"
                                  check_hlds__simplify__format_call__VarComponent_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "format_call.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__VarComponent_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1262 "format_call.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__VarComponent_27, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var0_20));
#line 1262 "format_call.m"
                                }
#line 1262 "format_call.m"
                                check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 1262 "format_call.m"
                              }
#line 1245 "format_call.m"
                            else
#line 1245 "format_call.m"
                              if ((check_hlds__simplify__format_call__Char1_18 == (MR_Char) 100))
#line 1244 "format_call.m"
                                {
#line 1244 "format_call.m"
                                  {
#line 1244 "format_call.m"
                                    check_hlds__simplify__format_call__VarComponent_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "format_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__VarComponent_27, 0) = ((MR_Box) (check_hlds__simplify__format_call__Var0_20));
#line 1244 "format_call.m"
                                  }
#line 1244 "format_call.m"
                                  check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 1244 "format_call.m"
                                }
#line 1245 "format_call.m"
                              else
#line 1245 "format_call.m"
                                if ((check_hlds__simplify__format_call__Char1_18 == (MR_Char) 115))
#line 1259 "format_call.m"
                                  {
#line 1259 "format_call.m"
                                    {
#line 1259 "format_call.m"
                                      check_hlds__simplify__format_call__VarComponent_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "format_call.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__VarComponent_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1259 "format_call.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__VarComponent_27, 1) = ((MR_Box) (check_hlds__simplify__format_call__Var0_20));
#line 1259 "format_call.m"
                                    }
#line 1259 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 1259 "format_call.m"
                                  }
#line 1245 "format_call.m"
                                else
#line 1245 "format_call.m"
                                  check_hlds__simplify__format_call__succeeded = MR_FALSE;
#line 1232 "format_call.m"
                            if (check_hlds__simplify__format_call__succeeded)
#line 1232 "format_call.m"
                              {
#line 1264 "format_call.m"
                                check_hlds__simplify__format_call__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1264 "format_call.m"
                                {
#line 1264 "format_call.m"
                                  check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__interpret_format_string_4_p_0(check_hlds__simplify__format_call__Chars1_19, check_hlds__simplify__format_call__V_33_33, check_hlds__simplify__format_call__Vars1_21, &check_hlds__simplify__format_call__TailComponents_28);
                                }
#line 1232 "format_call.m"
                                if (check_hlds__simplify__format_call__succeeded)
#line 1232 "format_call.m"
                                  {
#line 8116 "check_hlds.simplify.format_call.c"
                                    check_hlds__simplify__format_call__TypeCtorInfo_41_41 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_component_0;
#line 1265 "format_call.m"
                                    {
#line 1265 "format_call.m"
                                      check_hlds__simplify__format_call__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "format_call.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_34_34, 0) = ((MR_Box) (check_hlds__simplify__format_call__VarComponent_27));
#line 1265 "format_call.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_34_34, 1) = ((MR_Box) (check_hlds__simplify__format_call__TailComponents_28));
#line 1265 "format_call.m"
                                    }
#line 1265 "format_call.m"
                                    {
#line 1265 "format_call.m"
                                      *check_hlds__simplify__format_call__Components_4 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_41_41, check_hlds__simplify__format_call__ConstComponents_22, check_hlds__simplify__format_call__V_34_34);
                                    }
#line 1265 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 1232 "format_call.m"
                                  }
#line 1232 "format_call.m"
                              }
#line 1232 "format_call.m"
                          }
#line 1232 "format_call.m"
                      }
#line 1226 "format_call.m"
                  }
#line 1226 "format_call.m"
              }
#line 1267 "format_call.m"
            else
#line 1276 "format_call.m"
              {
#line 1276 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RevConstChars_30_38;

#line 1276 "format_call.m"
                {
#line 1276 "format_call.m"
                  check_hlds__simplify__format_call__STATE_VARIABLE_RevConstChars_30_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1276 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_RevConstChars_30_38, 0) = ((MR_Box) (MR_Word) (check_hlds__simplify__format_call__Char0_13));
#line 1276 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_RevConstChars_30_38, 1) = ((MR_Box) (check_hlds__simplify__format_call__HeadVar__2_2));
#line 1276 "format_call.m"
                }
#line 1277 "format_call.m"
                /* direct tailcall eliminated */
#line 1277 "format_call.m"
                {
#line 1277 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__HeadVar__1__tmp_copy_1 = check_hlds__simplify__format_call__Chars0_14;
#line 1277 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__HeadVar__2__tmp_copy_2 = check_hlds__simplify__format_call__STATE_VARIABLE_RevConstChars_30_38;

#line 1277 "format_call.m"
                  check_hlds__simplify__format_call__HeadVar__2_2 = check_hlds__simplify__format_call__HeadVar__2__tmp_copy_2;
#line 1277 "format_call.m"
                  check_hlds__simplify__format_call__HeadVar__1_1 = check_hlds__simplify__format_call__HeadVar__1__tmp_copy_1;
#line 1277 "format_call.m"
                }
#line 1277 "format_call.m"
                continue;
#line 1276 "format_call.m"
              }
#line 1223 "format_call.m"
          }
#line 1212 "format_call.m"
        return check_hlds__simplify__format_call__succeeded;
#line 1212 "format_call.m"
      }
#line 1212 "format_call.m"
      break;
#line 1212 "format_call.m"
    }
#line 1209 "format_call.m"
}

#line 1170 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__create_io_format_replacement_11_p_0(
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_12,
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__FormatStringChars_13,
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__MaybeStreamVar_14,
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__IOInVar_15,
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__IOOutVar_16,
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__VarsToPrint_17,
#line 1170 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goal_18,
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_31,
#line 1170 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32,
#line 1170 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_33,
#line 1170 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_34)
#line 1170 "format_call.m"
{
#line 1177 "format_call.m"
  {
#line 1177 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_66_66;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_67_67;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeInfo_68_68;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Components_21;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ResultVar_22;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Goals_23;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ArgVars_25;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__InstMapDelta_26;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__CallGoal_27;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__AllGoals_28;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__NonLocals_29;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalInfo_30;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_36_36;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_46_46;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_47_47;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_48_48;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_49_49;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_50_50;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_51_51;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_52_52;
#line 1177 "format_call.m"
    MR_String check_hlds__simplify__format_call__V_53_53;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_54_54;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_55_55;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_56_56;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_57_57;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_58_58;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_59_59;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_60_60;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_61_61;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_62_62;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_63_63;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_64_64;
#line 1177 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_65_65;

#line 1178 "format_call.m"
    {
#line 1178 "format_call.m"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__interpret_format_string_4_p_0(check_hlds__simplify__format_call__FormatStringChars_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__VarsToPrint_17, &check_hlds__simplify__format_call__Components_21);
    }
#line 1177 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 1177 "format_call.m"
      {
#line 1179 "format_call.m"
        check_hlds__simplify__format_call__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1179 "format_call.m"
        {
#line 1179 "format_call.m"
          check_hlds__simplify__format_call__replace_string_format_9_p_0(check_hlds__simplify__format_call__ModuleInfo_12, check_hlds__simplify__format_call__Components_21, check_hlds__simplify__format_call__V_36_36, &check_hlds__simplify__format_call__ResultVar_22, &check_hlds__simplify__format_call__Goals_23, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_31, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_32, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_33, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_34);
        }
#line 1184 "format_call.m"
        if ((check_hlds__simplify__format_call__MaybeStreamVar_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1185 "format_call.m"
          {
#line 1185 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_39_39;
#line 1185 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_40_40;

#line 1186 "format_call.m"
            {
#line 1186 "format_call.m"
              check_hlds__simplify__format_call__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_40_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOOutVar_16));
#line 1186 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1186 "format_call.m"
            }
#line 1186 "format_call.m"
            {
#line 1186 "format_call.m"
              check_hlds__simplify__format_call__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_39_39, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOInVar_15));
#line 1186 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_39_39, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_40_40));
#line 1186 "format_call.m"
            }
#line 1186 "format_call.m"
            {
#line 1186 "format_call.m"
              check_hlds__simplify__format_call__ArgVars_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1186 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_25, 0) = ((MR_Box) (check_hlds__simplify__format_call__ResultVar_22));
#line 1186 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_25, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_39_39));
#line 1186 "format_call.m"
            }
#line 1185 "format_call.m"
          }
#line 1184 "format_call.m"
        else
#line 1182 "format_call.m"
          {
#line 1182 "format_call.m"
            MR_Word check_hlds__simplify__format_call__StreamVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeStreamVar_14, (MR_Integer) 0)));
#line 1182 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_42_42;
#line 1182 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_43_43;
#line 1182 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_44_44;

#line 1183 "format_call.m"
            {
#line 1183 "format_call.m"
              check_hlds__simplify__format_call__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_44_44, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOOutVar_16));
#line 1183 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1183 "format_call.m"
            }
#line 1183 "format_call.m"
            {
#line 1183 "format_call.m"
              check_hlds__simplify__format_call__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_43_43, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOInVar_15));
#line 1183 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_43_43, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_44_44));
#line 1183 "format_call.m"
            }
#line 1183 "format_call.m"
            {
#line 1183 "format_call.m"
              check_hlds__simplify__format_call__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_42_42, 0) = ((MR_Box) (check_hlds__simplify__format_call__ResultVar_22));
#line 1183 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_42_42, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_43_43));
#line 1183 "format_call.m"
            }
#line 1183 "format_call.m"
            {
#line 1183 "format_call.m"
              check_hlds__simplify__format_call__ArgVars_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_25, 0) = ((MR_Box) (check_hlds__simplify__format_call__StreamVar_24));
#line 1183 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_25, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_42_42));
#line 1183 "format_call.m"
            }
#line 1182 "format_call.m"
          }
#line 1189 "format_call.m"
        check_hlds__simplify__format_call__V_49_49 = (MR_Integer) 1;
#line 1189 "format_call.m"
        check_hlds__simplify__format_call__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1189 "format_call.m"
        check_hlds__simplify__format_call__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1189 "format_call.m"
        check_hlds__simplify__format_call__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_1[10]);
#line 1189 "format_call.m"
        {
#line 1189 "format_call.m"
          check_hlds__simplify__format_call__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1189 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_47_47, 0) = ((MR_Box) (check_hlds__simplify__format_call__IOOutVar_16));
#line 1189 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_47_47, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_48_48));
#line 1189 "format_call.m"
        }
#line 1189 "format_call.m"
        {
#line 1189 "format_call.m"
          check_hlds__simplify__format_call__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1189 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_46_46, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_47_47));
#line 1189 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_46_46, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_51_51));
#line 1189 "format_call.m"
        }
#line 1188 "format_call.m"
        {
#line 1188 "format_call.m"
          check_hlds__simplify__format_call__InstMapDelta_26 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__simplify__format_call__V_46_46);
        }
#line 1190 "format_call.m"
        {
#line 1190 "format_call.m"
          check_hlds__simplify__format_call__V_52_52 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
        }
#line 1190 "format_call.m"
        check_hlds__simplify__format_call__V_53_53 = (MR_String) "write_string";
#line 1191 "format_call.m"
        check_hlds__simplify__format_call__V_54_54 = (MR_Integer) 0;
#line 1191 "format_call.m"
        check_hlds__simplify__format_call__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1191 "format_call.m"
        check_hlds__simplify__format_call__V_56_56 = (MR_Integer) 0;
#line 1191 "format_call.m"
        check_hlds__simplify__format_call__V_57_57 = (MR_Integer) 0;
#line 1191 "format_call.m"
        check_hlds__simplify__format_call__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1192 "format_call.m"
        {
#line 1192 "format_call.m"
          check_hlds__simplify__format_call__V_59_59 = mercury__term__context_init_0_f_0();
        }
#line 1190 "format_call.m"
        {
#line 1190 "format_call.m"
          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__simplify__format_call__V_52_52, check_hlds__simplify__format_call__V_53_53, check_hlds__simplify__format_call__V_54_54, check_hlds__simplify__format_call__V_55_55, check_hlds__simplify__format_call__V_56_56, check_hlds__simplify__format_call__V_57_57, check_hlds__simplify__format_call__ArgVars_25, check_hlds__simplify__format_call__V_58_58, check_hlds__simplify__format_call__InstMapDelta_26, check_hlds__simplify__format_call__ModuleInfo_12, check_hlds__simplify__format_call__V_59_59, &check_hlds__simplify__format_call__CallGoal_27);
        }
#line 8466 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1194 "format_call.m"
        check_hlds__simplify__format_call__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1194 "format_call.m"
        {
#line 1194 "format_call.m"
          check_hlds__simplify__format_call__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1194 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_60_60, 0) = ((MR_Box) (check_hlds__simplify__format_call__CallGoal_27));
#line 1194 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_60_60, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_61_61));
#line 1194 "format_call.m"
        }
#line 1194 "format_call.m"
        {
#line 1194 "format_call.m"
          check_hlds__simplify__format_call__AllGoals_28 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_66_66, check_hlds__simplify__format_call__Goals_23, check_hlds__simplify__format_call__V_60_60);
        }
#line 8485 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 8487 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeInfo_68_68 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 1195 "format_call.m"
        {
#line 1195 "format_call.m"
          check_hlds__simplify__format_call__V_62_62 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeInfo_68_68, check_hlds__simplify__format_call__ArgVars_25, check_hlds__simplify__format_call__VarsToPrint_17);
        }
#line 1195 "format_call.m"
        {
#line 1195 "format_call.m"
          check_hlds__simplify__format_call__NonLocals_29 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_67_67, check_hlds__simplify__format_call__V_62_62);
        }
#line 1196 "format_call.m"
        check_hlds__simplify__format_call__V_63_63 = (MR_Integer) 0;
#line 1196 "format_call.m"
        check_hlds__simplify__format_call__V_64_64 = (MR_Integer) 0;
#line 1197 "format_call.m"
        {
#line 1197 "format_call.m"
          check_hlds__simplify__format_call__V_65_65 = mercury__term__context_init_0_f_0();
        }
#line 1196 "format_call.m"
        {
#line 1196 "format_call.m"
          hlds__hlds_goal__goal_info_init_6_p_0(check_hlds__simplify__format_call__NonLocals_29, check_hlds__simplify__format_call__InstMapDelta_26, check_hlds__simplify__format_call__V_63_63, check_hlds__simplify__format_call__V_64_64, check_hlds__simplify__format_call__V_65_65, &check_hlds__simplify__format_call__GoalInfo_30);
        }
#line 1198 "format_call.m"
        {
#line 1198 "format_call.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__simplify__format_call__AllGoals_28, check_hlds__simplify__format_call__GoalInfo_30, check_hlds__simplify__format_call__Goal_18);
        }
#line 1198 "format_call.m"
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 1177 "format_call.m"
      }
#line 1177 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 1177 "format_call.m"
  }
#line 1170 "format_call.m"
}

#line 1120 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__create_string_format_replacement_9_p_0(
#line 1120 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_10,
#line 1120 "format_call.m"
  MR_Word check_hlds__simplify__format_call__FormatStringChars_11,
#line 1120 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ResultVar_12,
#line 1120 "format_call.m"
  MR_Word check_hlds__simplify__format_call__VarsToPrint_13,
#line 1120 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goal_14,
#line 1120 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_25,
#line 1120 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_26,
#line 1120 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_27,
#line 1120 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_28)
#line 1120 "format_call.m"
{
#line 1125 "format_call.m"
  {
#line 1125 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 1125 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_42_42;
#line 1125 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Components_17;
#line 1125 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ActualResultVar_18;
#line 1125 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Goals_19;
#line 1125 "format_call.m"
    MR_Word check_hlds__simplify__format_call__AllGoals_20;
#line 1125 "format_call.m"
    MR_Word check_hlds__simplify__format_call__NonLocals_22;
#line 1125 "format_call.m"
    MR_Word check_hlds__simplify__format_call__InstMapDelta_23;
#line 1125 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalInfo_24;
#line 1125 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_30_30;
#line 1125 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_37_37;
#line 1125 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_38_38;
#line 1125 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_39_39;
#line 1125 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_40_40;
#line 1129 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeInfo_43_43;

#line 1126 "format_call.m"
    {
#line 1126 "format_call.m"
      check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__interpret_format_string_4_p_0(check_hlds__simplify__format_call__FormatStringChars_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__VarsToPrint_13, &check_hlds__simplify__format_call__Components_17);
    }
#line 1125 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 1125 "format_call.m"
      {
#line 1127 "format_call.m"
        {
#line 1127 "format_call.m"
          check_hlds__simplify__format_call__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_30_30, 0) = ((MR_Box) (check_hlds__simplify__format_call__ResultVar_12));
#line 1127 "format_call.m"
        }
#line 1127 "format_call.m"
        {
#line 1127 "format_call.m"
          check_hlds__simplify__format_call__replace_string_format_9_p_0(check_hlds__simplify__format_call__ModuleInfo_10, check_hlds__simplify__format_call__Components_17, check_hlds__simplify__format_call__V_30_30, &check_hlds__simplify__format_call__ActualResultVar_18, &check_hlds__simplify__format_call__Goals_19, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_25, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_26, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_27, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_28);
        }
#line 8607 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeInfo_43_43 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 1129 "format_call.m"
        {
#line 1129 "format_call.m"
          check_hlds__simplify__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__simplify__format_call__TypeInfo_43_43, ((MR_Box) (check_hlds__simplify__format_call__ActualResultVar_18)), ((MR_Box) (check_hlds__simplify__format_call__ResultVar_12)));
        }
#line 1131 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 1130 "format_call.m"
          check_hlds__simplify__format_call__AllGoals_20 = check_hlds__simplify__format_call__Goals_19;
#line 1131 "format_call.m"
        else
#line 1133 "format_call.m"
          {
#line 1133 "format_call.m"
            MR_Word check_hlds__simplify__format_call__AssignGoal_21;
#line 1133 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_35_35;

#line 1132 "format_call.m"
            {
#line 1132 "format_call.m"
              hlds__make_goal__make_simple_assign_5_p_0(check_hlds__simplify__format_call__ResultVar_12, check_hlds__simplify__format_call__ActualResultVar_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__AssignGoal_21);
            }
#line 1134 "format_call.m"
            {
#line 1134 "format_call.m"
              check_hlds__simplify__format_call__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1134 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_35_35, 0) = ((MR_Box) (check_hlds__simplify__format_call__AssignGoal_21));
#line 1134 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1134 "format_call.m"
            }
#line 1134 "format_call.m"
            {
#line 1134 "format_call.m"
              check_hlds__simplify__format_call__AllGoals_20 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__format_call__Goals_19, check_hlds__simplify__format_call__V_35_35);
            }
#line 1133 "format_call.m"
          }
#line 8649 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1136 "format_call.m"
        {
#line 1136 "format_call.m"
          check_hlds__simplify__format_call__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_37_37, 0) = ((MR_Box) (check_hlds__simplify__format_call__ResultVar_12));
#line 1136 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_37_37, 1) = ((MR_Box) (check_hlds__simplify__format_call__VarsToPrint_13));
#line 1136 "format_call.m"
        }
#line 1136 "format_call.m"
        {
#line 1136 "format_call.m"
          check_hlds__simplify__format_call__NonLocals_22 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_42_42, check_hlds__simplify__format_call__V_37_37);
        }
#line 1137 "format_call.m"
        {
#line 1137 "format_call.m"
          check_hlds__simplify__format_call__InstMapDelta_23 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__simplify__format_call__ResultVar_12);
        }
#line 1138 "format_call.m"
        check_hlds__simplify__format_call__V_38_38 = (MR_Integer) 0;
#line 1138 "format_call.m"
        check_hlds__simplify__format_call__V_39_39 = (MR_Integer) 0;
#line 1139 "format_call.m"
        {
#line 1139 "format_call.m"
          check_hlds__simplify__format_call__V_40_40 = mercury__term__context_init_0_f_0();
        }
#line 1138 "format_call.m"
        {
#line 1138 "format_call.m"
          hlds__hlds_goal__goal_info_init_6_p_0(check_hlds__simplify__format_call__NonLocals_22, check_hlds__simplify__format_call__InstMapDelta_23, check_hlds__simplify__format_call__V_38_38, check_hlds__simplify__format_call__V_39_39, check_hlds__simplify__format_call__V_40_40, &check_hlds__simplify__format_call__GoalInfo_24);
        }
#line 1140 "format_call.m"
        {
#line 1140 "format_call.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__simplify__format_call__AllGoals_20, check_hlds__simplify__format_call__GoalInfo_24, check_hlds__simplify__format_call__Goal_14);
        }
#line 1140 "format_call.m"
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 1125 "format_call.m"
      }
#line 1125 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 1125 "format_call.m"
  }
#line 1120 "format_call.m"
}

#line 1097 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_switch_10_p_0(
#line 1097 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 1097 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2,
#line 1097 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3,
#line 1097 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4,
#line 1097 "format_call.m"
  MR_Word check_hlds__simplify__format_call__NeededVars0_5,
#line 1097 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6,
#line 1097 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7,
#line 1097 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ToDeleteVars0_8,
#line 1097 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9,
#line 1097 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10)
#line 1097 "format_call.m"
{
#line 1103 "format_call.m"
  {
#line 1103 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1103 "format_call.m"
    if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1103 "format_call.m"
      {
#line 1103 "format_call.m"
        *check_hlds__simplify__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1104 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9;
#line 1104 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6;
#line 1103 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3;
#line 1103 "format_call.m"
      }
#line 1103 "format_call.m"
    else
#line 1106 "format_call.m"
      {
#line 1106 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Case0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1106 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 1106 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Case_24;
#line 1106 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Cases_25;
#line 1106 "format_call.m"
        MR_Word check_hlds__simplify__format_call__FirstConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case0_22, (MR_Integer) 0)));
#line 1106 "format_call.m"
        MR_Word check_hlds__simplify__format_call__LaterConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case0_22, (MR_Integer) 1)));
#line 1106 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case0_22, (MR_Integer) 2)));
#line 1106 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal_34;
#line 1106 "format_call.m"
        MR_Word check_hlds__simplify__format_call__NeededVars_35;
#line 1106 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ToDeleteVars_36;
#line 1106 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_43_43;
#line 1106 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_44_44;
#line 1106 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_45_45;

#line 1110 "format_call.m"
        {
#line 1110 "format_call.m"
          check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__Goal0_33, &check_hlds__simplify__format_call__Goal_34, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_43_43, check_hlds__simplify__format_call__NeededVars0_5, &check_hlds__simplify__format_call__NeededVars_35, check_hlds__simplify__format_call__ToDeleteVars0_8, &check_hlds__simplify__format_call__ToDeleteVars_36);
        }
#line 1112 "format_call.m"
        {
#line 1112 "format_call.m"
          check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_44_44, 0) = ((MR_Box) (check_hlds__simplify__format_call__NeededVars_35));
#line 1112 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_44_44, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6));
#line 1112 "format_call.m"
        }
#line 1113 "format_call.m"
        {
#line 1113 "format_call.m"
          check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1113 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_45_45, 0) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteVars_36));
#line 1113 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_45_45, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9));
#line 1113 "format_call.m"
        }
#line 1114 "format_call.m"
        {
#line 1114 "format_call.m"
          check_hlds__simplify__format_call__Case_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1114 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case_24, 0) = ((MR_Box) (check_hlds__simplify__format_call__FirstConsId_31));
#line 1114 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case_24, 1) = ((MR_Box) (check_hlds__simplify__format_call__LaterConsIds_32));
#line 1114 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Case_24, 2) = ((MR_Box) (check_hlds__simplify__format_call__Goal_34));
#line 1114 "format_call.m"
        }
#line 1115 "format_call.m"
        {
#line 1115 "format_call.m"
          check_hlds__simplify__format_call__opt_format_call_sites_in_switch_10_p_0(check_hlds__simplify__format_call__Cases0_23, &check_hlds__simplify__format_call__Cases_25, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_43_43, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4, check_hlds__simplify__format_call__NeededVars0_5, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_44_44, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7, check_hlds__simplify__format_call__ToDeleteVars0_8, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_45_45, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10);
        }
#line 1105 "format_call.m"
        {
#line 1105 "format_call.m"
          MR_Word base;
#line 1105 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__2_2 = base;
#line 1105 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Case_24));
#line 1105 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Cases_25));
#line 1105 "format_call.m"
        }
#line 1106 "format_call.m"
      }
#line 1103 "format_call.m"
  }
#line 1097 "format_call.m"
}

#line 1077 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_disj_10_p_0(
#line 1077 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 1077 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2,
#line 1077 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3,
#line 1077 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4,
#line 1077 "format_call.m"
  MR_Word check_hlds__simplify__format_call__NeededVars0_5,
#line 1077 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6,
#line 1077 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7,
#line 1077 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ToDeleteVars0_8,
#line 1077 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9,
#line 1077 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10)
#line 1077 "format_call.m"
{
#line 1084 "format_call.m"
  {
#line 1084 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1084 "format_call.m"
    if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1084 "format_call.m"
      {
#line 1084 "format_call.m"
        *check_hlds__simplify__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1085 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9;
#line 1085 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6;
#line 1084 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3;
#line 1084 "format_call.m"
      }
#line 1084 "format_call.m"
    else
#line 1087 "format_call.m"
      {
#line 1087 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1087 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 1087 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal_24;
#line 1087 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goals_25;
#line 1087 "format_call.m"
        MR_Word check_hlds__simplify__format_call__NeededVars_31;
#line 1087 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ToDeleteVars_32;
#line 1087 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_39_39;
#line 1087 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_40_40;
#line 1087 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_41_41;

#line 1090 "format_call.m"
        {
#line 1090 "format_call.m"
          check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__Goal0_22, &check_hlds__simplify__format_call__Goal_24, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_39_39, check_hlds__simplify__format_call__NeededVars0_5, &check_hlds__simplify__format_call__NeededVars_31, check_hlds__simplify__format_call__ToDeleteVars0_8, &check_hlds__simplify__format_call__ToDeleteVars_32);
        }
#line 1092 "format_call.m"
        {
#line 1092 "format_call.m"
          check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1092 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_40_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__NeededVars_31));
#line 1092 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_40_40, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_0_6));
#line 1092 "format_call.m"
        }
#line 1093 "format_call.m"
        {
#line 1093 "format_call.m"
          check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_41_41, 0) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteVars_32));
#line 1093 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_41_41, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9));
#line 1093 "format_call.m"
        }
#line 1094 "format_call.m"
        {
#line 1094 "format_call.m"
          check_hlds__simplify__format_call__opt_format_call_sites_in_disj_10_p_0(check_hlds__simplify__format_call__Goals0_23, &check_hlds__simplify__format_call__Goals_25, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_39_39, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4, check_hlds__simplify__format_call__NeededVars0_5, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_40_40, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVarsSets_7, check_hlds__simplify__format_call__ToDeleteVars0_8, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_41_41, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVarsSets_10);
        }
#line 1086 "format_call.m"
        {
#line 1086 "format_call.m"
          MR_Word base;
#line 1086 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1086 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__2_2 = base;
#line 1086 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_24));
#line 1086 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Goals_25));
#line 1086 "format_call.m"
        }
#line 1087 "format_call.m"
      }
#line 1084 "format_call.m"
  }
#line 1077 "format_call.m"
}

#line 1061 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_conj_8_p_0(
#line 1061 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 1061 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__2_2,
#line 1061 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3,
#line 1061 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4,
#line 1061 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_5,
#line 1061 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_6,
#line 1061 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_7,
#line 1061 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_8)
#line 1061 "format_call.m"
{
#line 1067 "format_call.m"
  {
#line 1067 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 1067 "format_call.m"
    if ((check_hlds__simplify__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1067 "format_call.m"
      {
#line 1067 "format_call.m"
        *check_hlds__simplify__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1068 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_8 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_7;
#line 1068 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_6 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_5;
#line 1067 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3;
#line 1067 "format_call.m"
      }
#line 1067 "format_call.m"
    else
#line 1070 "format_call.m"
      {
#line 1070 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1070 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 1070 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal_20;
#line 1070 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goals_21;
#line 1070 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_31_31;
#line 1070 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_32_32;
#line 1070 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_33_33;

#line 1072 "format_call.m"
        {
#line 1072 "format_call.m"
          check_hlds__simplify__format_call__opt_format_call_sites_in_conj_8_p_0(check_hlds__simplify__format_call__Goals0_19, &check_hlds__simplify__format_call__Goals_21, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_3, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_31_31, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_5, &check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_32_32, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_7, &check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_33_33);
        }
#line 1074 "format_call.m"
        {
#line 1074 "format_call.m"
          check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__Goal0_18, &check_hlds__simplify__format_call__Goal_20, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_31_31, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_4, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_32_32, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_6, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_33_33, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_8);
        }
#line 1069 "format_call.m"
        {
#line 1069 "format_call.m"
          MR_Word base;
#line 1069 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__2_2 = base;
#line 1069 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_20));
#line 1069 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__Goals_21));
#line 1069 "format_call.m"
        }
#line 1070 "format_call.m"
      }
#line 1067 "format_call.m"
  }
#line 1061 "format_call.m"
}

#line 899 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(
#line 899 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Goal0_9,
#line 899 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Goal_10,
#line 899 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97,
#line 899 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98,
#line 899 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99,
#line 899 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100,
#line 899 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101,
#line 899 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102)
#line 899 "format_call.m"
{
#line 905 "format_call.m"
  while (MR_TRUE)
#line 905 "format_call.m"
    {
#line 905 "format_call.m"
      /* tailcall optimized into a loop */
#line 905 "format_call.m"
      {
#line 905 "format_call.m"
        MR_bool check_hlds__simplify__format_call__succeeded;
#line 905 "format_call.m"
        MR_Word check_hlds__simplify__format_call__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal0_9, (MR_Integer) 0)));
#line 905 "format_call.m"
        MR_Word check_hlds__simplify__format_call__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal0_9, (MR_Integer) 1)));

#line 921 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 0))))
#line 1001 "format_call.m"
          {
#line 1001 "format_call.m"
            MR_Word check_hlds__simplify__format_call__SubGoal0_76 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14), (MR_Integer) 0);
#line 1001 "format_call.m"
            MR_Word check_hlds__simplify__format_call__SubGoal_77;
#line 1001 "format_call.m"
            MR_Word check_hlds__simplify__format_call__GoalExpr_165;

#line 1004 "format_call.m"
            {
#line 1004 "format_call.m"
              check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__SubGoal0_76, &check_hlds__simplify__format_call__SubGoal_77, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
            }
#line 1006 "format_call.m"
            check_hlds__simplify__format_call__GoalExpr_165 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__simplify__format_call__SubGoal_77);
#line 1007 "format_call.m"
            {
#line 1007 "format_call.m"
              MR_Word base;
#line 1007 "format_call.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "format_call.m"
              *check_hlds__simplify__format_call__Goal_10 = base;
#line 1007 "format_call.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_165));
#line 1007 "format_call.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_15));
#line 1007 "format_call.m"
            }
#line 1001 "format_call.m"
          }
#line 921 "format_call.m"
        else
#line 921 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 2))))
#line 908 "format_call.m"
            {
#line 908 "format_call.m"
              MR_Word check_hlds__simplify__format_call__GoalId_22;
#line 914 "format_call.m"
              MR_Word check_hlds__simplify__format_call__OptGoalInfo_23;
#line 914 "format_call.m"
              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_151_151;
#line 910 "format_call.m"
              MR_Box check_hlds__simplify__format_call__conv0_OptGoalInfo_23;

#line 909 "format_call.m"
              {
#line 909 "format_call.m"
                check_hlds__simplify__format_call__GoalId_22 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__simplify__format_call__GoalInfo_15);
              }
#line 910 "format_call.m"
              {
#line 910 "format_call.m"
                check_hlds__simplify__format_call__succeeded = mercury__map__remove_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0, ((MR_Box) (check_hlds__simplify__format_call__GoalId_22)), &check_hlds__simplify__format_call__conv0_OptGoalInfo_23, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_151_151);
              }
#line 910 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 910 "format_call.m"
                {
#line 910 "format_call.m"
                  check_hlds__simplify__format_call__OptGoalInfo_23 = ((MR_Word) check_hlds__simplify__format_call__conv0_OptGoalInfo_23);
#line 910 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 910 "format_call.m"
                }
#line 914 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 911 "format_call.m"
                {
#line 911 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__GoalToDeleteVars_25;

#line 911 "format_call.m"
                  *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_151_151;
#line 911 "format_call.m"
                  *check_hlds__simplify__format_call__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__OptGoalInfo_23, (MR_Integer) 0)));
#line 911 "format_call.m"
                  check_hlds__simplify__format_call__GoalToDeleteVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__OptGoalInfo_23, (MR_Integer) 1)));
#line 913 "format_call.m"
                  {
#line 913 "format_call.m"
                    parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__GoalToDeleteVars_25, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                  }
#line 913 "format_call.m"
                  *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99;
#line 911 "format_call.m"
                }
#line 914 "format_call.m"
              else
#line 915 "format_call.m"
                {
#line 915 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__TypeCtorInfo_190_190;
#line 915 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__NonLocals_26;

#line 915 "format_call.m"
                  *check_hlds__simplify__format_call__Goal_10 = check_hlds__simplify__format_call__Goal0_9;
#line 916 "format_call.m"
                  {
#line 916 "format_call.m"
                    check_hlds__simplify__format_call__NonLocals_26 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__format_call__GoalInfo_15);
                  }
#line 9190 "check_hlds.simplify.format_call.c"
                  check_hlds__simplify__format_call__TypeCtorInfo_190_190 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 918 "format_call.m"
                  {
#line 918 "format_call.m"
                    parse_tree__set_of_var__union_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_190_190, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__NonLocals_26, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100);
                  }
#line 919 "format_call.m"
                  {
#line 919 "format_call.m"
                    parse_tree__set_of_var__difference_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_190_190, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__NonLocals_26, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                  }
#line 919 "format_call.m"
                  *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97;
#line 915 "format_call.m"
                }
#line 908 "format_call.m"
            }
#line 921 "format_call.m"
          else
#line 921 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 1))))
#line 931 "format_call.m"
              {
#line 931 "format_call.m"
                MR_Word check_hlds__simplify__format_call__Unification_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 3)));
#line 931 "format_call.m"
                MR_Word check_hlds__simplify__format_call___LHS_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 0)));
#line 931 "format_call.m"
                MR_Word check_hlds__simplify__format_call___RHS_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 931 "format_call.m"
                MR_Word check_hlds__simplify__format_call___UnifyModes_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 2)));
#line 931 "format_call.m"
                MR_Word check_hlds__simplify__format_call___UnifyContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 4)));
#line 942 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_146_146;
#line 934 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_193_193;
#line 934 "format_call.m"
                MR_Word check_hlds__simplify__format_call__LHSVar_44;
#line 933 "format_call.m"
                MR_Word check_hlds__simplify__format_call___ConsId_45;
#line 933 "format_call.m"
                MR_Word check_hlds__simplify__format_call___RHSVars_46;
#line 933 "format_call.m"
                MR_Word check_hlds__simplify__format_call___ArgModes_47;
#line 933 "format_call.m"
                MR_Word check_hlds__simplify__format_call___How_48;
#line 933 "format_call.m"
                MR_Word check_hlds__simplify__format_call___Unique_49;
#line 933 "format_call.m"
                MR_Word check_hlds__simplify__format_call___SubInfo_50;
#line 935 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_192_192;

#line 933 "format_call.m"
                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Unification_42)) == (MR_mktag((MR_Integer) 0)));
#line 933 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 933 "format_call.m"
                  {
#line 933 "format_call.m"
                    check_hlds__simplify__format_call__LHSVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_42, (MR_Integer) 0)));
#line 933 "format_call.m"
                    check_hlds__simplify__format_call___ConsId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_42, (MR_Integer) 1)));
#line 933 "format_call.m"
                    check_hlds__simplify__format_call___RHSVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_42, (MR_Integer) 2)));
#line 933 "format_call.m"
                    check_hlds__simplify__format_call___ArgModes_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_42, (MR_Integer) 3)));
#line 933 "format_call.m"
                    check_hlds__simplify__format_call___How_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_42, (MR_Integer) 4)));
#line 933 "format_call.m"
                    check_hlds__simplify__format_call___Unique_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_42, (MR_Integer) 5)));
#line 933 "format_call.m"
                    check_hlds__simplify__format_call___SubInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_42, (MR_Integer) 6)));
#line 9265 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__TypeCtorInfo_192_192 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 935 "format_call.m"
                    {
#line 935 "format_call.m"
                      check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__format_call__TypeCtorInfo_192_192, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__LHSVar_44);
                    }
#line 935 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 934 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 934 "format_call.m"
                      {
#line 9278 "check_hlds.simplify.format_call.c"
                        check_hlds__simplify__format_call__TypeCtorInfo_193_193 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 938 "format_call.m"
                        {
#line 938 "format_call.m"
                          check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__remove_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_193_193, check_hlds__simplify__format_call__LHSVar_44, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, &check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_146_146);
                        }
#line 934 "format_call.m"
                      }
#line 933 "format_call.m"
                  }
#line 942 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 941 "format_call.m"
                  {
#line 941 "format_call.m"
                    *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_146_146;
#line 941 "format_call.m"
                    {
#line 941 "format_call.m"
                      *check_hlds__simplify__format_call__Goal_10 = hlds__make_goal__true_goal_0_f_0();
                    }
#line 941 "format_call.m"
                    *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100 = check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99;
#line 941 "format_call.m"
                  }
#line 942 "format_call.m"
                else
#line 952 "format_call.m"
                  {
#line 952 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_194_194;
#line 952 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__NonLocals_157;

#line 952 "format_call.m"
                    *check_hlds__simplify__format_call__Goal_10 = check_hlds__simplify__format_call__Goal0_9;
#line 953 "format_call.m"
                    {
#line 953 "format_call.m"
                      check_hlds__simplify__format_call__NonLocals_157 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__format_call__GoalInfo_15);
                    }
#line 9320 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__TypeCtorInfo_194_194 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 955 "format_call.m"
                    {
#line 955 "format_call.m"
                      parse_tree__set_of_var__union_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_194_194, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__NonLocals_157, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100);
                    }
#line 956 "format_call.m"
                    {
#line 956 "format_call.m"
                      parse_tree__set_of_var__difference_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_194_194, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__NonLocals_157, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                    }
#line 952 "format_call.m"
                  }
#line 956 "format_call.m"
                *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97;
#line 931 "format_call.m"
              }
#line 921 "format_call.m"
            else
#line 921 "format_call.m"
              if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 960 "format_call.m"
                {
#line 960 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__ConjType_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 960 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__Conjuncts0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 2)));
#line 960 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__Conjuncts_53;
#line 960 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__GoalExpr_54;

#line 961 "format_call.m"
                  {
#line 961 "format_call.m"
                    check_hlds__simplify__format_call__opt_format_call_sites_in_conj_8_p_0(check_hlds__simplify__format_call__Conjuncts0_52, &check_hlds__simplify__format_call__Conjuncts_53, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                  }
#line 963 "format_call.m"
                  {
#line 963 "format_call.m"
                    check_hlds__simplify__format_call__GoalExpr_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 963 "format_call.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 963 "format_call.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_54, 1) = ((MR_Box) (check_hlds__simplify__format_call__ConjType_51));
#line 963 "format_call.m"
                    MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_54, 2) = ((MR_Box) (check_hlds__simplify__format_call__Conjuncts_53));
#line 963 "format_call.m"
                  }
#line 964 "format_call.m"
                  {
#line 964 "format_call.m"
                    MR_Word base;
#line 964 "format_call.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 964 "format_call.m"
                    *check_hlds__simplify__format_call__Goal_10 = base;
#line 964 "format_call.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_54));
#line 964 "format_call.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_15));
#line 964 "format_call.m"
                  }
#line 960 "format_call.m"
                }
#line 921 "format_call.m"
              else
#line 921 "format_call.m"
                if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 966 "format_call.m"
                  {
#line 966 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_195_195;
#line 966 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__Disjuncts0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 966 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__Disjuncts_56;
#line 966 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__NeededVarsSets_57;
#line 966 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__ToDeleteVarsSets_58;
#line 966 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__GoalExpr_160;

#line 967 "format_call.m"
                    {
#line 967 "format_call.m"
                      check_hlds__simplify__format_call__opt_format_call_sites_in_disj_10_p_0(check_hlds__simplify__format_call__Disjuncts0_55, &check_hlds__simplify__format_call__Disjuncts_56, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__NeededVarsSets_57, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__ToDeleteVarsSets_58);
                    }
#line 9410 "check_hlds.simplify.format_call.c"
                    check_hlds__simplify__format_call__TypeCtorInfo_195_195 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 970 "format_call.m"
                    {
#line 970 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_195_195, check_hlds__simplify__format_call__NeededVarsSets_57);
                    }
#line 971 "format_call.m"
                    {
#line 971 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102 = parse_tree__set_of_var__intersect_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_195_195, check_hlds__simplify__format_call__ToDeleteVarsSets_58);
                    }
#line 972 "format_call.m"
                    {
#line 972 "format_call.m"
                      check_hlds__simplify__format_call__GoalExpr_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "format_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 972 "format_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_160, 1) = ((MR_Box) (check_hlds__simplify__format_call__Disjuncts_56));
#line 972 "format_call.m"
                    }
#line 973 "format_call.m"
                    {
#line 973 "format_call.m"
                      MR_Word base;
#line 973 "format_call.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 973 "format_call.m"
                      *check_hlds__simplify__format_call__Goal_10 = base;
#line 973 "format_call.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_160));
#line 973 "format_call.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_15));
#line 973 "format_call.m"
                    }
#line 966 "format_call.m"
                  }
#line 921 "format_call.m"
                else
#line 921 "format_call.m"
                  if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 984 "format_call.m"
                    {
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__TypeCtorInfo_197_197;
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Vars_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Cond0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 2)));
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Then0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 3)));
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Else0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 4)));
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Else_67;
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__NeededVarsBeforeElse_68;
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__ToDeleteVarsBeforeElse_69;
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Then_70;
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__NeededVarsBeforeThen_71;
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__ToDeleteVarsBeforeThen_72;
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Cond_73;
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__NeededVarsBeforeCond_74;
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__ToDeleteVarsBeforeCond_75;
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_128_128;
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_129_129;
#line 984 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__GoalExpr_164;

#line 985 "format_call.m"
                      {
#line 985 "format_call.m"
                        check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__Else0_66, &check_hlds__simplify__format_call__Else_67, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_128_128, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, &check_hlds__simplify__format_call__NeededVarsBeforeElse_68, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, &check_hlds__simplify__format_call__ToDeleteVarsBeforeElse_69);
                      }
#line 988 "format_call.m"
                      {
#line 988 "format_call.m"
                        check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__Then0_65, &check_hlds__simplify__format_call__Then_70, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_128_128, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, &check_hlds__simplify__format_call__NeededVarsBeforeThen_71, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, &check_hlds__simplify__format_call__ToDeleteVarsBeforeThen_72);
                      }
#line 991 "format_call.m"
                      {
#line 991 "format_call.m"
                        check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__Cond0_64, &check_hlds__simplify__format_call__Cond_73, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__NeededVarsBeforeThen_71, &check_hlds__simplify__format_call__NeededVarsBeforeCond_74, check_hlds__simplify__format_call__ToDeleteVarsBeforeThen_72, &check_hlds__simplify__format_call__ToDeleteVarsBeforeCond_75);
                      }
#line 9504 "check_hlds.simplify.format_call.c"
                      check_hlds__simplify__format_call__TypeCtorInfo_197_197 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 994 "format_call.m"
                      {
#line 994 "format_call.m"
                        parse_tree__set_of_var__union_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_197_197, check_hlds__simplify__format_call__NeededVarsBeforeCond_74, check_hlds__simplify__format_call__NeededVarsBeforeElse_68, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100);
                      }
#line 996 "format_call.m"
                      {
#line 996 "format_call.m"
                        parse_tree__set_of_var__intersect_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_197_197, check_hlds__simplify__format_call__ToDeleteVarsBeforeCond_75, check_hlds__simplify__format_call__ToDeleteVarsBeforeElse_69, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                      }
#line 998 "format_call.m"
                      {
#line 998 "format_call.m"
                        check_hlds__simplify__format_call__GoalExpr_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 998 "format_call.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 998 "format_call.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_164, 1) = ((MR_Box) (check_hlds__simplify__format_call__Vars_63));
#line 998 "format_call.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_164, 2) = ((MR_Box) (check_hlds__simplify__format_call__Cond_73));
#line 998 "format_call.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_164, 3) = ((MR_Box) (check_hlds__simplify__format_call__Then_70));
#line 998 "format_call.m"
                        MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_164, 4) = ((MR_Box) (check_hlds__simplify__format_call__Else_67));
#line 998 "format_call.m"
                      }
#line 999 "format_call.m"
                      {
#line 999 "format_call.m"
                        MR_Word base;
#line 999 "format_call.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 999 "format_call.m"
                        *check_hlds__simplify__format_call__Goal_10 = base;
#line 999 "format_call.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_164));
#line 999 "format_call.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_15));
#line 999 "format_call.m"
                      }
#line 984 "format_call.m"
                    }
#line 921 "format_call.m"
                  else
#line 921 "format_call.m"
                    if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1009 "format_call.m"
                      {
#line 1009 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__Reason_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 1009 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__SubGoal0_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 2)));
#line 1022 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_118_118;
#line 1011 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__TypeCtorInfo_199_199;
#line 1011 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__TermVar_79;
#line 1011 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__V_117_117;
#line 1012 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__TypeCtorInfo_198_198;

#line 1011 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__Reason_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_78, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1011 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 1011 "format_call.m"
                          {
#line 1011 "format_call.m"
                            check_hlds__simplify__format_call__TermVar_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_78, (MR_Integer) 1)));
#line 1011 "format_call.m"
                            check_hlds__simplify__format_call__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_78, (MR_Integer) 2)));
#line 1011 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_117_117 == (MR_Integer) 1);
#line 1011 "format_call.m"
                            if (check_hlds__simplify__format_call__succeeded)
#line 1011 "format_call.m"
                              {
#line 9585 "check_hlds.simplify.format_call.c"
                                check_hlds__simplify__format_call__TypeCtorInfo_198_198 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1012 "format_call.m"
                                {
#line 1012 "format_call.m"
                                  check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__format_call__TypeCtorInfo_198_198, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__TermVar_79);
                                }
#line 1012 "format_call.m"
                                check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 1011 "format_call.m"
                                if (check_hlds__simplify__format_call__succeeded)
#line 1011 "format_call.m"
                                  {
#line 9598 "check_hlds.simplify.format_call.c"
                                    check_hlds__simplify__format_call__TypeCtorInfo_199_199 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1015 "format_call.m"
                                    {
#line 1015 "format_call.m"
                                      check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__remove_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_199_199, check_hlds__simplify__format_call__TermVar_79, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, &check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_118_118);
                                    }
#line 1011 "format_call.m"
                                  }
#line 1011 "format_call.m"
                              }
#line 1011 "format_call.m"
                          }
#line 1022 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 1020 "format_call.m"
                          {
#line 1020 "format_call.m"
                            /* direct tailcall eliminated */
#line 1020 "format_call.m"
                            {
#line 1020 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__Goal0__tmp_copy_9 = check_hlds__simplify__format_call__SubGoal0_171;
#line 1020 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0__tmp_copy_101 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_118_118;

#line 1020 "format_call.m"
                              check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101 = check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0__tmp_copy_101;
#line 1020 "format_call.m"
                              check_hlds__simplify__format_call__Goal0_9 = check_hlds__simplify__format_call__Goal0__tmp_copy_9;
#line 1020 "format_call.m"
                            }
#line 1020 "format_call.m"
                            continue;
#line 1020 "format_call.m"
                          }
#line 1022 "format_call.m"
                        else
#line 1024 "format_call.m"
                          {
#line 1024 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__GoalExpr_166;
#line 1024 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__SubGoal_167;

#line 1023 "format_call.m"
                            {
#line 1023 "format_call.m"
                              check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__SubGoal0_171, &check_hlds__simplify__format_call__SubGoal_167, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                            }
#line 1025 "format_call.m"
                            {
#line 1025 "format_call.m"
                              check_hlds__simplify__format_call__GoalExpr_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1025 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_166, 1) = ((MR_Box) (check_hlds__simplify__format_call__Reason_78));
#line 1025 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_166, 2) = ((MR_Box) (check_hlds__simplify__format_call__SubGoal_167));
#line 1025 "format_call.m"
                            }
#line 1026 "format_call.m"
                            {
#line 1026 "format_call.m"
                              MR_Word base;
#line 1026 "format_call.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "format_call.m"
                              *check_hlds__simplify__format_call__Goal_10 = base;
#line 1026 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_166));
#line 1026 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_15));
#line 1026 "format_call.m"
                            }
#line 1024 "format_call.m"
                          }
#line 1009 "format_call.m"
                      }
#line 921 "format_call.m"
                    else
#line 921 "format_call.m"
                      if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1029 "format_call.m"
                        {
#line 1029 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__ShortHand0_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 1029 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__GoalExpr_182;

#line 1047 "format_call.m"
                          if (((MR_tag((MR_Word) check_hlds__simplify__format_call__ShortHand0_80)) == (MR_mktag((MR_Integer) 1))))
#line 1032 "format_call.m"
                            {
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__TypeCtorInfo_200_200;
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__AtomicType_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 0)));
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__OuterVars_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 1)));
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__InnerVars_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 2)));
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__OutputVars_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 3)));
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__MainGoal0_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 4)));
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__OrElseGoals0_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 5)));
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__OrElseInners_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 6)));
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__MainGoal_88;
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__NeededVarsMain_89;
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__ToDeleteVarsMain_90;
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__OrElseGoals_91;
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__ShortHand_92;
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109_109;
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__V_114_114;
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__V_116_116;
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__NeededVarsSets_173;
#line 1032 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__ToDeleteVarsSets_174;

#line 1033 "format_call.m"
                              {
#line 1033 "format_call.m"
                                check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__MainGoal0_85, &check_hlds__simplify__format_call__MainGoal_88, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, &check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109_109, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, &check_hlds__simplify__format_call__NeededVarsMain_89, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, &check_hlds__simplify__format_call__ToDeleteVarsMain_90);
                              }
#line 1036 "format_call.m"
                              {
#line 1036 "format_call.m"
                                check_hlds__simplify__format_call__opt_format_call_sites_in_disj_10_p_0(check_hlds__simplify__format_call__OrElseGoals0_86, &check_hlds__simplify__format_call__OrElseGoals_91, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_109_109, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__NeededVarsSets_173, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__ToDeleteVarsSets_174);
                              }
#line 9740 "check_hlds.simplify.format_call.c"
                              check_hlds__simplify__format_call__TypeCtorInfo_200_200 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1040 "format_call.m"
                              {
#line 1040 "format_call.m"
                                check_hlds__simplify__format_call__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_114_114, 0) = ((MR_Box) (check_hlds__simplify__format_call__NeededVarsMain_89));
#line 1040 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_114_114, 1) = ((MR_Box) (check_hlds__simplify__format_call__NeededVarsSets_173));
#line 1040 "format_call.m"
                              }
#line 1040 "format_call.m"
                              {
#line 1040 "format_call.m"
                                *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_200_200, check_hlds__simplify__format_call__V_114_114);
                              }
#line 1043 "format_call.m"
                              {
#line 1043 "format_call.m"
                                check_hlds__simplify__format_call__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_116_116, 0) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteVarsMain_90));
#line 1043 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_116_116, 1) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteVarsSets_174));
#line 1043 "format_call.m"
                              }
#line 1042 "format_call.m"
                              {
#line 1042 "format_call.m"
                                *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102 = parse_tree__set_of_var__intersect_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_200_200, check_hlds__simplify__format_call__V_116_116);
                              }
#line 1044 "format_call.m"
                              {
#line 1044 "format_call.m"
                                check_hlds__simplify__format_call__ShortHand_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1044 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_92, 0) = ((MR_Box) (check_hlds__simplify__format_call__AtomicType_81));
#line 1044 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_92, 1) = ((MR_Box) (check_hlds__simplify__format_call__OuterVars_82));
#line 1044 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_92, 2) = ((MR_Box) (check_hlds__simplify__format_call__InnerVars_83));
#line 1044 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_92, 3) = ((MR_Box) (check_hlds__simplify__format_call__OutputVars_84));
#line 1044 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_92, 4) = ((MR_Box) (check_hlds__simplify__format_call__MainGoal_88));
#line 1044 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_92, 5) = ((MR_Box) (check_hlds__simplify__format_call__OrElseGoals_91));
#line 1044 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_92, 6) = ((MR_Box) (check_hlds__simplify__format_call__OrElseInners_87));
#line 1044 "format_call.m"
                              }
#line 1046 "format_call.m"
                              {
#line 1046 "format_call.m"
                                check_hlds__simplify__format_call__GoalExpr_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "format_call.m"
                                MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1046 "format_call.m"
                                MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_182, 1) = ((MR_Box) (check_hlds__simplify__format_call__ShortHand_92));
#line 1046 "format_call.m"
                              }
#line 1032 "format_call.m"
                            }
#line 1047 "format_call.m"
                          else
#line 1047 "format_call.m"
                            if (((MR_tag((MR_Word) check_hlds__simplify__format_call__ShortHand0_80)) == (MR_mktag((MR_Integer) 0))))
#line 1054 "format_call.m"
                              {
#line 1056 "format_call.m"
                                {
#line 1056 "format_call.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.opt_format_call_sites_in_goal\'/8", (MR_String) "bi_implication");
#line 1056 "format_call.m"
                                  return;
                                }
#line 1054 "format_call.m"
                              }
#line 1047 "format_call.m"
                            else
#line 1048 "format_call.m"
                              {
#line 1048 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__MaybeIO_93 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 0)));
#line 1048 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__ResultVar_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 1)));
#line 1048 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__SubGoal0_175 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand0_80, (MR_Integer) 2)));
#line 1048 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__SubGoal_176;
#line 1048 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__ShortHand_177;

#line 1049 "format_call.m"
                                {
#line 1049 "format_call.m"
                                  check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__SubGoal0_175, &check_hlds__simplify__format_call__SubGoal_176, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                                }
#line 1051 "format_call.m"
                                {
#line 1051 "format_call.m"
                                  check_hlds__simplify__format_call__ShortHand_177 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "format_call.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_177, 0) = ((MR_Box) (check_hlds__simplify__format_call__MaybeIO_93));
#line 1051 "format_call.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_177, 1) = ((MR_Box) (check_hlds__simplify__format_call__ResultVar_94));
#line 1051 "format_call.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_177, 2) = ((MR_Box) (check_hlds__simplify__format_call__SubGoal_176));
#line 1051 "format_call.m"
                                }
#line 1052 "format_call.m"
                                {
#line 1052 "format_call.m"
                                  check_hlds__simplify__format_call__GoalExpr_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "format_call.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1052 "format_call.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_182, 1) = ((MR_Box) (check_hlds__simplify__format_call__ShortHand_177));
#line 1052 "format_call.m"
                                }
#line 1048 "format_call.m"
                              }
#line 1058 "format_call.m"
                          {
#line 1058 "format_call.m"
                            MR_Word base;
#line 1058 "format_call.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1058 "format_call.m"
                            *check_hlds__simplify__format_call__Goal_10 = base;
#line 1058 "format_call.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_182));
#line 1058 "format_call.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_15));
#line 1058 "format_call.m"
                          }
#line 1029 "format_call.m"
                        }
#line 921 "format_call.m"
                      else
#line 921 "format_call.m"
                        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 975 "format_call.m"
                          {
#line 975 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__TypeCtorInfo_196_196;
#line 975 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__SwitchVar_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 975 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__CanFail_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 2)));
#line 975 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__Cases0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr0_14, (MR_Integer) 3)));
#line 975 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__Cases_62;
#line 975 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__GoalExpr_161;
#line 975 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__NeededVarsSets_162;
#line 975 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__ToDeleteVarsSets_163;

#line 976 "format_call.m"
                            {
#line 976 "format_call.m"
                              check_hlds__simplify__format_call__opt_format_call_sites_in_switch_10_p_0(check_hlds__simplify__format_call__Cases0_61, &check_hlds__simplify__format_call__Cases_62, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__NeededVarsSets_162, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__ToDeleteVarsSets_163);
                            }
#line 9907 "check_hlds.simplify.format_call.c"
                            check_hlds__simplify__format_call__TypeCtorInfo_196_196 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 979 "format_call.m"
                            {
#line 979 "format_call.m"
                              *check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_196_196, check_hlds__simplify__format_call__NeededVarsSets_162);
                            }
#line 980 "format_call.m"
                            {
#line 980 "format_call.m"
                              *check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102 = parse_tree__set_of_var__intersect_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_196_196, check_hlds__simplify__format_call__ToDeleteVarsSets_163);
                            }
#line 981 "format_call.m"
                            {
#line 981 "format_call.m"
                              check_hlds__simplify__format_call__GoalExpr_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 981 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 981 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_161, 1) = ((MR_Box) (check_hlds__simplify__format_call__SwitchVar_59));
#line 981 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_161, 2) = ((MR_Box) (check_hlds__simplify__format_call__CanFail_60));
#line 981 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_161, 3) = ((MR_Box) (check_hlds__simplify__format_call__Cases_62));
#line 981 "format_call.m"
                            }
#line 982 "format_call.m"
                            {
#line 982 "format_call.m"
                              MR_Word base;
#line 982 "format_call.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 982 "format_call.m"
                              *check_hlds__simplify__format_call__Goal_10 = base;
#line 982 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalExpr_161));
#line 982 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalInfo_15));
#line 982 "format_call.m"
                            }
#line 975 "format_call.m"
                          }
#line 921 "format_call.m"
                        else
#line 924 "format_call.m"
                          {
#line 924 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__TypeCtorInfo_191_191;
#line 924 "format_call.m"
                            MR_Word check_hlds__simplify__format_call__NonLocals_156;

#line 925 "format_call.m"
                            *check_hlds__simplify__format_call__Goal_10 = check_hlds__simplify__format_call__Goal0_9;
#line 926 "format_call.m"
                            {
#line 926 "format_call.m"
                              check_hlds__simplify__format_call__NonLocals_156 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__simplify__format_call__GoalInfo_15);
                            }
#line 9965 "check_hlds.simplify.format_call.c"
                            check_hlds__simplify__format_call__TypeCtorInfo_191_191 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 928 "format_call.m"
                            {
#line 928 "format_call.m"
                              parse_tree__set_of_var__union_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_191_191, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__simplify__format_call__NonLocals_156, check_hlds__simplify__format_call__STATE_VARIABLE_NeededVars_100);
                            }
#line 929 "format_call.m"
                            {
#line 929 "format_call.m"
                              parse_tree__set_of_var__difference_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_191_191, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__simplify__format_call__NonLocals_156, check_hlds__simplify__format_call__STATE_VARIABLE_ToDeleteVars_102);
                            }
#line 929 "format_call.m"
                            *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_98 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_97;
#line 924 "format_call.m"
                          }
#line 905 "format_call.m"
      }
#line 905 "format_call.m"
      break;
#line 905 "format_call.m"
    }
#line 899 "format_call.m"
}

#line 880 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__alloc_id_3_p_0(
#line 880 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__ConjId_4,
#line 880 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_7,
#line 880 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_8)
#line 880 "format_call.m"
{
#line 882 "format_call.m"
  {
#line 882 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 882 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__N_6;

#line 883 "format_call.m"
    {
#line 883 "format_call.m"
      mercury__counter__allocate_3_p_0(&check_hlds__simplify__format_call__N_6, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_7, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_8);
    }
#line 884 "format_call.m"
    *check_hlds__simplify__format_call__ConjId_4 = (MR_Word) check_hlds__simplify__format_call__N_6;
#line 882 "format_call.m"
  }
#line 880 "format_call.m"
}

#line 871 "format_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__format_call__get_conj_map_2_f_0(
#line 871 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjMaps_4,
#line 871 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjId_5)
#line 871 "format_call.m"
{
#line 876 "format_call.m"
  {
#line 876 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 876 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConjMap_6;
#line 876 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConjMapPrime_7;
#line 874 "format_call.m"
    MR_Box check_hlds__simplify__format_call__conv0_ConjMapPrime_7;

#line 874 "format_call.m"
    {
#line 874 "format_call.m"
      check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, check_hlds__simplify__format_call__ConjMaps_4, ((MR_Box) (check_hlds__simplify__format_call__ConjId_5)), &check_hlds__simplify__format_call__conv0_ConjMapPrime_7);
    }
#line 874 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 874 "format_call.m"
      {
#line 874 "format_call.m"
        check_hlds__simplify__format_call__ConjMapPrime_7 = ((MR_Word) check_hlds__simplify__format_call__conv0_ConjMapPrime_7);
#line 874 "format_call.m"
        check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 874 "format_call.m"
      }
#line 876 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 875 "format_call.m"
      check_hlds__simplify__format_call__ConjMap_6 = check_hlds__simplify__format_call__ConjMapPrime_7;
#line 876 "format_call.m"
    else
#line 877 "format_call.m"
      {
#line 877 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_14_14 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 877 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_8_8;
#line 877 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_9_9;
#line 877 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_10_10;
#line 877 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_11_11;

#line 877 "format_call.m"
        {
#line 877 "format_call.m"
          check_hlds__simplify__format_call__V_8_8 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_14, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 877 "format_call.m"
        {
#line 877 "format_call.m"
          check_hlds__simplify__format_call__V_9_9 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_14, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0);
        }
#line 877 "format_call.m"
        {
#line 877 "format_call.m"
          check_hlds__simplify__format_call__V_10_10 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_14, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0);
        }
#line 877 "format_call.m"
        {
#line 877 "format_call.m"
          check_hlds__simplify__format_call__V_11_11 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_14, check_hlds__simplify__format_call__TypeInfo_14_14);
        }
#line 877 "format_call.m"
        {
#line 877 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 877 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_6, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_8_8));
#line 877 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_6, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_9_9));
#line 877 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_6, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_10_10));
#line 877 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_6, 3) = ((MR_Box) (check_hlds__simplify__format_call__V_11_11));
#line 877 "format_call.m"
        }
#line 877 "format_call.m"
      }
#line 876 "format_call.m"
    return check_hlds__simplify__format_call__ConjMap_6;
#line 876 "format_call.m"
  }
#line 871 "format_call.m"
}

#line 852 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_disj_arms_11_p_0(
#line 852 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_1,
#line 852 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 852 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ContainingId_3,
#line 852 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__4_4,
#line 852 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_5,
#line 852 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_6,
#line 852 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_7,
#line 852 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_8,
#line 852 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_9,
#line 852 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_10,
#line 852 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__HeadVar__11_11)
#line 852 "format_call.m"
{
#line 858 "format_call.m"
  {
#line 858 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 858 "format_call.m"
    if ((check_hlds__simplify__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 858 "format_call.m"
      {
#line 858 "format_call.m"
        *check_hlds__simplify__format_call__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 859 "format_call.m"
        *check_hlds__simplify__format_call__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 858 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_10 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_9;
#line 858 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_8 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_7;
#line 858 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_6 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_5;
#line 858 "format_call.m"
      }
#line 858 "format_call.m"
    else
#line 862 "format_call.m"
      {
#line 862 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeCtorInfo_51_51;
#line 862 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 862 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goals_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 862 "format_call.m"
        MR_Word check_hlds__simplify__format_call__GoalFormatCallSites_27;
#line 862 "format_call.m"
        MR_Word check_hlds__simplify__format_call__GoalsFormatCallSites_28;
#line 862 "format_call.m"
        MR_Word check_hlds__simplify__format_call__GoalRelevantVars_32;
#line 862 "format_call.m"
        MR_Word check_hlds__simplify__format_call__GoalsRelevantVars_33;
#line 862 "format_call.m"
        MR_Word check_hlds__simplify__format_call__DisjId_34;
#line 862 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_42_42;
#line 862 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_43_43;
#line 862 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_44_44;
#line 862 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_45_45;
#line 862 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_46_46;
#line 862 "format_call.m"
        MR_Word check_hlds__simplify__format_call__GoalConj_70;
#line 862 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_33_71;
#line 862 "format_call.m"
        MR_Integer check_hlds__simplify__format_call__N_81;

#line 865 "format_call.m"
        {
#line 865 "format_call.m"
          check_hlds__simplify__format_call__V_45_45 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 883 "format_call.m"
        {
#line 883 "format_call.m"
          mercury__counter__allocate_3_p_0(&check_hlds__simplify__format_call__N_81, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_5, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_33_71);
        }
#line 884 "format_call.m"
        check_hlds__simplify__format_call__DisjId_34 = (MR_Word) check_hlds__simplify__format_call__N_81;
#line 613 "format_call.m"
        {
#line 613 "format_call.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__format_call__Goal_24, &check_hlds__simplify__format_call__GoalConj_70);
        }
#line 614 "format_call.m"
        {
#line 614 "format_call.m"
          check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(check_hlds__simplify__format_call__ModuleInfo_1, check_hlds__simplify__format_call__GoalConj_70, check_hlds__simplify__format_call__DisjId_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__GoalFormatCallSites_27, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_33_71, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_42_42, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_7, &check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_43_43, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_9, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_44_44, check_hlds__simplify__format_call__V_45_45, &check_hlds__simplify__format_call__GoalRelevantVars_32);
        }
#line 10224 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeCtorInfo_51_51 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 866 "format_call.m"
        {
#line 866 "format_call.m"
          mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_51_51, check_hlds__simplify__format_call__TypeCtorInfo_51_51, ((MR_Box) (check_hlds__simplify__format_call__DisjId_34)), ((MR_Box) (check_hlds__simplify__format_call__ContainingId_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_44_44, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_46_46);
        }
#line 867 "format_call.m"
        {
#line 867 "format_call.m"
          check_hlds__simplify__format_call__format_call_traverse_disj_arms_11_p_0(check_hlds__simplify__format_call__ModuleInfo_1, check_hlds__simplify__format_call__Goals_25, check_hlds__simplify__format_call__ContainingId_3, &check_hlds__simplify__format_call__GoalsFormatCallSites_28, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_42_42, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_6, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_43_43, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_8, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_46_46, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_10, &check_hlds__simplify__format_call__GoalsRelevantVars_33);
        }
#line 861 "format_call.m"
        {
#line 861 "format_call.m"
          MR_Word base;
#line 861 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 861 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__4_4 = base;
#line 861 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalFormatCallSites_27));
#line 861 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalsFormatCallSites_28));
#line 861 "format_call.m"
        }
#line 862 "format_call.m"
        {
#line 862 "format_call.m"
          MR_Word base;
#line 862 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 862 "format_call.m"
          *check_hlds__simplify__format_call__HeadVar__11_11 = base;
#line 862 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalRelevantVars_32));
#line 862 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__GoalsRelevantVars_33));
#line 862 "format_call.m"
        }
#line 862 "format_call.m"
      }
#line 858 "format_call.m"
  }
#line 852 "format_call.m"
}

#line 836 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Disjuncts_15,
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CurId_16,
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_26,
#line 836 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_27,
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_28,
#line 836 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_29,
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_30,
#line 836 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_31,
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_32,
#line 836 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_33,
#line 836 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_34,
#line 836 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_35)
#line 836 "format_call.m"
{
#line 843 "format_call.m"
  {
#line 843 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 843 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_41_41;
#line 843 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_42_42;
#line 843 "format_call.m"
    MR_Word check_hlds__simplify__format_call__DisjFormatCallSitesLists_22;
#line 843 "format_call.m"
    MR_Word check_hlds__simplify__format_call__DisjRelevantVarSets_23;
#line 843 "format_call.m"
    MR_Word check_hlds__simplify__format_call__DisjFormatCallSites_24;
#line 843 "format_call.m"
    MR_Word check_hlds__simplify__format_call__DisjRelevantVars_25;

#line 844 "format_call.m"
    {
#line 844 "format_call.m"
      check_hlds__simplify__format_call__format_call_traverse_disj_arms_11_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__Disjuncts_15, check_hlds__simplify__format_call__CurId_16, &check_hlds__simplify__format_call__DisjFormatCallSitesLists_22, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_28, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_29, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_30, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_31, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_32, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_33, &check_hlds__simplify__format_call__DisjRelevantVarSets_23);
    }
#line 10324 "check_hlds.simplify.format_call.c"
    check_hlds__simplify__format_call__TypeCtorInfo_41_41 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0;
#line 847 "format_call.m"
    {
#line 847 "format_call.m"
      mercury__list__condense_2_p_0(check_hlds__simplify__format_call__TypeCtorInfo_41_41, check_hlds__simplify__format_call__DisjFormatCallSitesLists_22, &check_hlds__simplify__format_call__DisjFormatCallSites_24);
    }
#line 848 "format_call.m"
    {
#line 848 "format_call.m"
      *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_27 = mercury__list__f_43_43_2_f_0(check_hlds__simplify__format_call__TypeCtorInfo_41_41, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_26, check_hlds__simplify__format_call__DisjFormatCallSites_24);
    }
#line 10336 "check_hlds.simplify.format_call.c"
    check_hlds__simplify__format_call__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 849 "format_call.m"
    {
#line 849 "format_call.m"
      check_hlds__simplify__format_call__DisjRelevantVars_25 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__simplify__format_call__TypeCtorInfo_42_42, check_hlds__simplify__format_call__DisjRelevantVarSets_23);
    }
#line 850 "format_call.m"
    {
#line 850 "format_call.m"
      parse_tree__set_of_var__union_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_42_42, check_hlds__simplify__format_call__DisjRelevantVars_25, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_34, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_35);
#line 850 "format_call.m"
      return;
    }
#line 843 "format_call.m"
  }
#line 836 "format_call.m"
}

#line 832 "format_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__format_call__project_case_goal_1_f_0(
#line 832 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1)
#line 832 "format_call.m"
{
#line 834 "format_call.m"
  {
#line 834 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 834 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 834 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 834 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));

#line 834 "format_call.m"
    return check_hlds__simplify__format_call__Goal_5;
#line 834 "format_call.m"
  }
#line 832 "format_call.m"
}

#line 741 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_unify_8_p_0(
#line 741 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Unification_9,
#line 741 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CurId_10,
#line 741 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_55,
#line 741 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_56,
#line 741 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_57,
#line 741 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_58,
#line 741 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_59,
#line 741 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_60)
#line 741 "format_call.m"
{
#line 746 "format_call.m"
  {
#line 746 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;

#line 760 "format_call.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Unification_9)) == (MR_mktag((MR_Integer) 2))))
#line 748 "format_call.m"
      {
#line 748 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TargetVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Unification_9, (MR_Integer) 0)));
#line 748 "format_call.m"
        MR_Word check_hlds__simplify__format_call__SourceVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Unification_9, (MR_Integer) 1)));

#line 749 "format_call.m"
        {
#line 749 "format_call.m"
          check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_59, check_hlds__simplify__format_call__TargetVar_14);
        }
#line 757 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 750 "format_call.m"
          {
#line 750 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeCtorInfo_115_115 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 750 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeInfo_116_116;
#line 750 "format_call.m"
            MR_Word check_hlds__simplify__format_call__ConjMap0_16;
#line 750 "format_call.m"
            MR_Word check_hlds__simplify__format_call__StringMap_17;
#line 750 "format_call.m"
            MR_Word check_hlds__simplify__format_call__ListMap_18;
#line 750 "format_call.m"
            MR_Word check_hlds__simplify__format_call__ElementMap_19;
#line 750 "format_call.m"
            MR_Word check_hlds__simplify__format_call__EqvMap0_20;
#line 750 "format_call.m"
            MR_Word check_hlds__simplify__format_call__EqvMap_21;
#line 750 "format_call.m"
            MR_Word check_hlds__simplify__format_call__ConjMap_22;
#line 750 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_76_76;

#line 750 "format_call.m"
            {
#line 750 "format_call.m"
              parse_tree__set_of_var__delete_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_115_115, check_hlds__simplify__format_call__TargetVar_14, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_59, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_76_76);
            }
#line 751 "format_call.m"
            {
#line 751 "format_call.m"
              parse_tree__set_of_var__insert_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_115_115, check_hlds__simplify__format_call__SourceVar_15, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_76_76, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_60);
            }
#line 752 "format_call.m"
            {
#line 752 "format_call.m"
              check_hlds__simplify__format_call__ConjMap0_16 = check_hlds__simplify__format_call__get_conj_map_2_f_0(check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_55, check_hlds__simplify__format_call__CurId_10);
            }
#line 753 "format_call.m"
            check_hlds__simplify__format_call__StringMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_16, (MR_Integer) 0)));
#line 753 "format_call.m"
            check_hlds__simplify__format_call__ListMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_16, (MR_Integer) 1)));
#line 753 "format_call.m"
            check_hlds__simplify__format_call__ElementMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_16, (MR_Integer) 2)));
#line 753 "format_call.m"
            check_hlds__simplify__format_call__EqvMap0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_16, (MR_Integer) 3)));
#line 10468 "check_hlds.simplify.format_call.c"
            check_hlds__simplify__format_call__TypeInfo_116_116 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 754 "format_call.m"
            {
#line 754 "format_call.m"
              mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeInfo_116_116, check_hlds__simplify__format_call__TypeInfo_116_116, ((MR_Box) (check_hlds__simplify__format_call__TargetVar_14)), ((MR_Box) (check_hlds__simplify__format_call__SourceVar_15)), check_hlds__simplify__format_call__EqvMap0_20, &check_hlds__simplify__format_call__EqvMap_21);
            }
#line 755 "format_call.m"
            {
#line 755 "format_call.m"
              check_hlds__simplify__format_call__ConjMap_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 755 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_22, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringMap_17));
#line 755 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_22, 1) = ((MR_Box) (check_hlds__simplify__format_call__ListMap_18));
#line 755 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_22, 2) = ((MR_Box) (check_hlds__simplify__format_call__ElementMap_19));
#line 755 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_22, 3) = ((MR_Box) (check_hlds__simplify__format_call__EqvMap_21));
#line 755 "format_call.m"
            }
#line 756 "format_call.m"
            {
#line 756 "format_call.m"
              mercury__map__set_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__CurId_10)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_22)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_55, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_56);
            }
#line 750 "format_call.m"
          }
#line 757 "format_call.m"
        else
#line 758 "format_call.m"
          {
#line 758 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_60 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_59;
#line 758 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_56 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_55;
#line 758 "format_call.m"
          }
#line 748 "format_call.m"
      }
#line 760 "format_call.m"
    else
#line 760 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Unification_9)) == (MR_mktag((MR_Integer) 0))))
#line 761 "format_call.m"
        {
#line 761 "format_call.m"
          MR_Word check_hlds__simplify__format_call__CellVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_9, (MR_Integer) 0)));
#line 761 "format_call.m"
          MR_Word check_hlds__simplify__format_call__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_9, (MR_Integer) 1)));
#line 761 "format_call.m"
          MR_Word check_hlds__simplify__format_call__ArgVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_9, (MR_Integer) 2)));
#line 761 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_9, (MR_Integer) 3)));
#line 761 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_9, (MR_Integer) 4)));
#line 761 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_9, (MR_Integer) 5)));
#line 761 "format_call.m"
          MR_Word check_hlds__simplify__format_call__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Unification_9, (MR_Integer) 6)));

#line 762 "format_call.m"
          {
#line 762 "format_call.m"
            check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_59, check_hlds__simplify__format_call__CellVar_23);
          }
#line 822 "format_call.m"
          if (check_hlds__simplify__format_call__succeeded)
#line 763 "format_call.m"
            {
#line 763 "format_call.m"
              MR_Word check_hlds__simplify__format_call__StringMap0_30;
#line 763 "format_call.m"
              MR_Word check_hlds__simplify__format_call__ListMap0_31;
#line 763 "format_call.m"
              MR_Word check_hlds__simplify__format_call__ElementMap0_32;
#line 763 "format_call.m"
              MR_Word check_hlds__simplify__format_call__ConjMap0_96;
#line 763 "format_call.m"
              MR_Word check_hlds__simplify__format_call__EqvMap0_100;
#line 763 "format_call.m"
              MR_Word check_hlds__simplify__format_call__ConjMap_101;
#line 771 "format_call.m"
              MR_String check_hlds__simplify__format_call__StringConst_33;

#line 763 "format_call.m"
              {
#line 763 "format_call.m"
                check_hlds__simplify__format_call__ConjMap0_96 = check_hlds__simplify__format_call__get_conj_map_2_f_0(check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_55, check_hlds__simplify__format_call__CurId_10);
              }
#line 764 "format_call.m"
              check_hlds__simplify__format_call__StringMap0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_96, (MR_Integer) 0)));
#line 764 "format_call.m"
              check_hlds__simplify__format_call__ListMap0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_96, (MR_Integer) 1)));
#line 764 "format_call.m"
              check_hlds__simplify__format_call__ElementMap0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_96, (MR_Integer) 2)));
#line 764 "format_call.m"
              check_hlds__simplify__format_call__EqvMap0_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap0_96, (MR_Integer) 3)));
#line 766 "format_call.m"
              check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__ConsId_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_24, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 766 "format_call.m"
              if (check_hlds__simplify__format_call__succeeded)
#line 766 "format_call.m"
                {
#line 766 "format_call.m"
                  check_hlds__simplify__format_call__StringConst_33 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_24, (MR_Integer) 1)));
#line 768 "format_call.m"
                  {
#line 768 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__StringMap_79;

#line 768 "format_call.m"
                    {
#line 768 "format_call.m"
                      parse_tree__set_of_var__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__CellVar_23, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_59, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_60);
                    }
#line 769 "format_call.m"
                    {
#line 769 "format_call.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (check_hlds__simplify__format_call__CellVar_23)), ((MR_Box) (check_hlds__simplify__format_call__StringConst_33)), check_hlds__simplify__format_call__StringMap0_30, &check_hlds__simplify__format_call__StringMap_79);
                    }
#line 770 "format_call.m"
                    {
#line 770 "format_call.m"
                      check_hlds__simplify__format_call__ConjMap_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 770 "format_call.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_101, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringMap_79));
#line 770 "format_call.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_101, 1) = ((MR_Box) (check_hlds__simplify__format_call__ListMap0_31));
#line 770 "format_call.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_101, 2) = ((MR_Box) (check_hlds__simplify__format_call__ElementMap0_32));
#line 770 "format_call.m"
                      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_101, 3) = ((MR_Box) (check_hlds__simplify__format_call__EqvMap0_100));
#line 770 "format_call.m"
                    }
#line 768 "format_call.m"
                  }
#line 766 "format_call.m"
                }
#line 766 "format_call.m"
              else
#line 791 "format_call.m"
                {
#line 791 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__List_40;
#line 772 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__SymName_34;
#line 772 "format_call.m"
                  MR_Integer check_hlds__simplify__format_call__Arity_35;
#line 772 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__TypeCtor_36;
#line 772 "format_call.m"
                  MR_String check_hlds__simplify__format_call__Functor_37;
#line 772 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_131_131;

#line 772 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__ConsId_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_24, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 772 "format_call.m"
                  if (check_hlds__simplify__format_call__succeeded)
#line 772 "format_call.m"
                    {
#line 772 "format_call.m"
                      check_hlds__simplify__format_call__SymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_24, (MR_Integer) 1)));
#line 772 "format_call.m"
                      check_hlds__simplify__format_call__Arity_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_24, (MR_Integer) 2)));
#line 772 "format_call.m"
                      check_hlds__simplify__format_call__TypeCtor_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_24, (MR_Integer) 3)));
#line 773 "format_call.m"
                      {
#line 773 "format_call.m"
                        check_hlds__simplify__format_call__V_131_131 = parse_tree__builtin_lib_types__list_type_ctor_0_f_0();
                      }
#line 773 "format_call.m"
                      {
#line 773 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__simplify__format_call__TypeCtor_36, check_hlds__simplify__format_call__V_131_131);
                      }
#line 772 "format_call.m"
                      if (check_hlds__simplify__format_call__succeeded)
#line 772 "format_call.m"
                        {
#line 774 "format_call.m"
                          {
#line 774 "format_call.m"
                            check_hlds__simplify__format_call__Functor_37 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__simplify__format_call__SymName_34);
                          }
#line 780 "format_call.m"
                          if ((check_hlds__simplify__format_call__ArgVars_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 781 "format_call.m"
                            {
#line 781 "format_call.m"
                              check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__Functor_37, (MR_String) "[]") == 0);
#line 781 "format_call.m"
                              if (check_hlds__simplify__format_call__succeeded)
#line 781 "format_call.m"
                                {
#line 782 "format_call.m"
                                  check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Arity_35 == (MR_Integer) 0);
#line 781 "format_call.m"
                                  if (check_hlds__simplify__format_call__succeeded)
#line 781 "format_call.m"
                                    {
#line 784 "format_call.m"
                                      check_hlds__simplify__format_call__List_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 784 "format_call.m"
                                      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 781 "format_call.m"
                                    }
#line 781 "format_call.m"
                                }
#line 781 "format_call.m"
                            }
#line 780 "format_call.m"
                          else
#line 776 "format_call.m"
                            {
#line 776 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__ArgVar1_38;
#line 776 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__ArgVar2_39;
#line 776 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__V_62_62;
#line 776 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__V_63_63;

#line 776 "format_call.m"
                              check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__Functor_37, (MR_String) "[|]") == 0);
#line 776 "format_call.m"
                              if (check_hlds__simplify__format_call__succeeded)
#line 776 "format_call.m"
                                {
#line 777 "format_call.m"
                                  check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Arity_35 == (MR_Integer) 2);
#line 776 "format_call.m"
                                  if (check_hlds__simplify__format_call__succeeded)
#line 776 "format_call.m"
                                    {
#line 778 "format_call.m"
                                      check_hlds__simplify__format_call__ArgVar1_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_25, (MR_Integer) 0)));
#line 778 "format_call.m"
                                      check_hlds__simplify__format_call__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_25, (MR_Integer) 1)));
#line 778 "format_call.m"
                                      check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 778 "format_call.m"
                                      if (check_hlds__simplify__format_call__succeeded)
#line 778 "format_call.m"
                                        {
#line 778 "format_call.m"
                                          check_hlds__simplify__format_call__ArgVar2_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_62_62, (MR_Integer) 0)));
#line 778 "format_call.m"
                                          check_hlds__simplify__format_call__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_62_62, (MR_Integer) 1)));
#line 778 "format_call.m"
                                          check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 776 "format_call.m"
                                          if (check_hlds__simplify__format_call__succeeded)
#line 776 "format_call.m"
                                            {
#line 779 "format_call.m"
                                              {
#line 779 "format_call.m"
                                                check_hlds__simplify__format_call__List_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "format_call.m"
                                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__List_40, 0) = ((MR_Box) (check_hlds__simplify__format_call__ArgVar1_38));
#line 779 "format_call.m"
                                                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__List_40, 1) = ((MR_Box) (check_hlds__simplify__format_call__ArgVar2_39));
#line 779 "format_call.m"
                                              }
#line 779 "format_call.m"
                                              check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 776 "format_call.m"
                                            }
#line 778 "format_call.m"
                                        }
#line 776 "format_call.m"
                                    }
#line 776 "format_call.m"
                                }
#line 776 "format_call.m"
                            }
#line 772 "format_call.m"
                        }
#line 772 "format_call.m"
                    }
#line 791 "format_call.m"
                  if (check_hlds__simplify__format_call__succeeded)
#line 787 "format_call.m"
                    {
#line 787 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__TypeCtorInfo_123_123 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 787 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_64_64;
#line 787 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__ListMap_80;

#line 787 "format_call.m"
                      {
#line 787 "format_call.m"
                        parse_tree__set_of_var__delete_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_123_123, check_hlds__simplify__format_call__CellVar_23, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_59, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_64_64);
                      }
#line 788 "format_call.m"
                      {
#line 788 "format_call.m"
                        parse_tree__set_of_var__insert_list_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_123_123, check_hlds__simplify__format_call__ArgVars_25, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_64_64, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_60);
                      }
#line 789 "format_call.m"
                      {
#line 789 "format_call.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0, ((MR_Box) (check_hlds__simplify__format_call__CellVar_23)), ((MR_Box) (check_hlds__simplify__format_call__List_40)), check_hlds__simplify__format_call__ListMap0_31, &check_hlds__simplify__format_call__ListMap_80);
                      }
#line 790 "format_call.m"
                      {
#line 790 "format_call.m"
                        check_hlds__simplify__format_call__ConjMap_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 790 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_101, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringMap0_30));
#line 790 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_101, 1) = ((MR_Box) (check_hlds__simplify__format_call__ListMap_80));
#line 790 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_101, 2) = ((MR_Box) (check_hlds__simplify__format_call__ElementMap0_32));
#line 790 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_101, 3) = ((MR_Box) (check_hlds__simplify__format_call__EqvMap0_100));
#line 790 "format_call.m"
                      }
#line 787 "format_call.m"
                    }
#line 791 "format_call.m"
                  else
#line 818 "format_call.m"
                    {
#line 818 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Dummy_41;
#line 792 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__SymName_81;
#line 792 "format_call.m"
                      MR_Integer check_hlds__simplify__format_call__Arity_82;
#line 792 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__TypeCtor_83;
#line 792 "format_call.m"
                      MR_String check_hlds__simplify__format_call__Functor_84;
#line 792 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_132_132;

#line 792 "format_call.m"
                      check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__ConsId_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_24, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 792 "format_call.m"
                      if (check_hlds__simplify__format_call__succeeded)
#line 792 "format_call.m"
                        {
#line 792 "format_call.m"
                          check_hlds__simplify__format_call__SymName_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_24, (MR_Integer) 1)));
#line 792 "format_call.m"
                          check_hlds__simplify__format_call__Arity_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_24, (MR_Integer) 2)));
#line 792 "format_call.m"
                          check_hlds__simplify__format_call__TypeCtor_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__ConsId_24, (MR_Integer) 3)));
#line 793 "format_call.m"
                          {
#line 793 "format_call.m"
                            check_hlds__simplify__format_call__V_132_132 = parse_tree__builtin_lib_types__poly_type_type_ctor_0_f_0();
                          }
#line 793 "format_call.m"
                          {
#line 793 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__simplify__format_call__TypeCtor_83, check_hlds__simplify__format_call__V_132_132);
                          }
#line 792 "format_call.m"
                          if (check_hlds__simplify__format_call__succeeded)
#line 792 "format_call.m"
                            {
#line 794 "format_call.m"
                              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__Arity_82 == (MR_Integer) 1);
#line 792 "format_call.m"
                              if (check_hlds__simplify__format_call__succeeded)
#line 792 "format_call.m"
                                {
#line 795 "format_call.m"
                                  {
#line 795 "format_call.m"
                                    check_hlds__simplify__format_call__Functor_84 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__simplify__format_call__SymName_81);
                                  }
#line 799 "format_call.m"
                                  if ((strcmp(check_hlds__simplify__format_call__Functor_84, (MR_String) "c") == 0))
#line 806 "format_call.m"
                                    {
#line 807 "format_call.m"
                                      check_hlds__simplify__format_call__Dummy_41 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_4[2]);
#line 806 "format_call.m"
                                      check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 806 "format_call.m"
                                    }
#line 799 "format_call.m"
                                  else
#line 799 "format_call.m"
                                    if ((strcmp(check_hlds__simplify__format_call__Functor_84, (MR_String) "f") == 0))
#line 797 "format_call.m"
                                      {
#line 798 "format_call.m"
                                        check_hlds__simplify__format_call__Dummy_41 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_4[3];
#line 797 "format_call.m"
                                        check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 797 "format_call.m"
                                      }
#line 799 "format_call.m"
                                    else
#line 799 "format_call.m"
                                      if ((strcmp(check_hlds__simplify__format_call__Functor_84, (MR_String) "i") == 0))
#line 800 "format_call.m"
                                        {
#line 801 "format_call.m"
                                          check_hlds__simplify__format_call__Dummy_41 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_4[4]);
#line 800 "format_call.m"
                                          check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 800 "format_call.m"
                                        }
#line 799 "format_call.m"
                                      else
#line 799 "format_call.m"
                                        if ((strcmp(check_hlds__simplify__format_call__Functor_84, (MR_String) "s") == 0))
#line 803 "format_call.m"
                                          {
#line 804 "format_call.m"
                                            check_hlds__simplify__format_call__Dummy_41 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__simplify__format_call_scalar_common_4[5]);
#line 803 "format_call.m"
                                            check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 803 "format_call.m"
                                          }
#line 799 "format_call.m"
                                        else
#line 799 "format_call.m"
                                          check_hlds__simplify__format_call__succeeded = MR_FALSE;
#line 792 "format_call.m"
                                }
#line 792 "format_call.m"
                            }
#line 792 "format_call.m"
                        }
#line 818 "format_call.m"
                      if (check_hlds__simplify__format_call__succeeded)
#line 810 "format_call.m"
                        {
#line 810 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__WhatToPrint_43;
#line 810 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__ElementMap_85;
#line 813 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__ArgVar_42;
#line 811 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__V_71_71;

#line 810 "format_call.m"
                          {
#line 810 "format_call.m"
                            parse_tree__set_of_var__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__CellVar_23, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_59, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_60);
                          }
#line 811 "format_call.m"
                          check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__ArgVars_25)) == (MR_mktag((MR_Integer) 1)));
#line 811 "format_call.m"
                          if (check_hlds__simplify__format_call__succeeded)
#line 811 "format_call.m"
                            {
#line 811 "format_call.m"
                              check_hlds__simplify__format_call__ArgVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_25, (MR_Integer) 0)));
#line 811 "format_call.m"
                              check_hlds__simplify__format_call__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ArgVars_25, (MR_Integer) 1)));
#line 811 "format_call.m"
                              check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 811 "format_call.m"
                            }
#line 813 "format_call.m"
                          if (check_hlds__simplify__format_call__succeeded)
#line 812 "format_call.m"
                            {
#line 812 "format_call.m"
                              check_hlds__simplify__format_call__WhatToPrint_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 812 "format_call.m"
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__WhatToPrint_43, 0) = ((MR_Box) (check_hlds__simplify__format_call__ArgVar_42));
#line 812 "format_call.m"
                              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__WhatToPrint_43, 1) = ((MR_Box) (check_hlds__simplify__format_call__Dummy_41));
#line 812 "format_call.m"
                            }
#line 813 "format_call.m"
                          else
#line 814 "format_call.m"
                            {
#line 814 "format_call.m"
                              {
#line 814 "format_call.m"
                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_unify\'/8", (MR_String) "arity mismatch");
#line 814 "format_call.m"
                                return;
                              }
#line 814 "format_call.m"
                            }
#line 816 "format_call.m"
                          {
#line 816 "format_call.m"
                            mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0, ((MR_Box) (check_hlds__simplify__format_call__CellVar_23)), ((MR_Box) (check_hlds__simplify__format_call__WhatToPrint_43)), check_hlds__simplify__format_call__ElementMap0_32, &check_hlds__simplify__format_call__ElementMap_85);
                          }
#line 817 "format_call.m"
                          {
#line 817 "format_call.m"
                            check_hlds__simplify__format_call__ConjMap_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 817 "format_call.m"
                            MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_101, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringMap0_30));
#line 817 "format_call.m"
                            MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_101, 1) = ((MR_Box) (check_hlds__simplify__format_call__ListMap0_31));
#line 817 "format_call.m"
                            MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_101, 2) = ((MR_Box) (check_hlds__simplify__format_call__ElementMap_85));
#line 817 "format_call.m"
                            MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_101, 3) = ((MR_Box) (check_hlds__simplify__format_call__EqvMap0_100));
#line 817 "format_call.m"
                          }
#line 810 "format_call.m"
                        }
#line 818 "format_call.m"
                      else
#line 819 "format_call.m"
                        {
#line 819 "format_call.m"
                          check_hlds__simplify__format_call__ConjMap_101 = check_hlds__simplify__format_call__ConjMap0_96;
#line 819 "format_call.m"
                          *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_60 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_59;
#line 819 "format_call.m"
                        }
#line 818 "format_call.m"
                    }
#line 791 "format_call.m"
                }
#line 821 "format_call.m"
              {
#line 821 "format_call.m"
                mercury__map__set_4_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__simplify__format_call__CurId_10)), ((MR_Box) (check_hlds__simplify__format_call__ConjMap_101)), check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_55, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_56);
              }
#line 763 "format_call.m"
            }
#line 822 "format_call.m"
          else
#line 823 "format_call.m"
            {
#line 823 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_60 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_59;
#line 823 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_56 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_55;
#line 823 "format_call.m"
            }
#line 761 "format_call.m"
        }
#line 760 "format_call.m"
      else
#line 760 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Unification_9)) == (MR_mktag((MR_Integer) 1))))
#line 826 "format_call.m"
          {
#line 826 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_56 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_55;
#line 826 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_60 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_59;
#line 826 "format_call.m"
          }
#line 760 "format_call.m"
        else
#line 760 "format_call.m"
          if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__Unification_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Unification_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 828 "format_call.m"
            {
#line 828 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_56 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_55;
#line 828 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_60 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_59;
#line 828 "format_call.m"
            }
#line 760 "format_call.m"
          else
#line 827 "format_call.m"
            {
#line 827 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_56 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_55;
#line 827 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_60 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_59;
#line 827 "format_call.m"
            }
#line 828 "format_call.m"
    *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_58 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_57;
#line 746 "format_call.m"
  }
#line 741 "format_call.m"
}

#line 640 "format_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0_1(
#line 640 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 640 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1)
#line 640 "format_call.m"
{
#line 640 "format_call.m"
  {
#line 640 "format_call.m"
    MR_Box check_hlds__simplify__format_call__wrapper_arg_2;
#line 640 "format_call.m"
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;
#line 640 "format_call.m"
    MR_Word check_hlds__simplify__format_call__conv0_Goal_5;

#line 640 "format_call.m"
    {
#line 640 "format_call.m"
      check_hlds__simplify__format_call__conv0_Goal_5 = check_hlds__simplify__format_call__project_case_goal_1_f_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1));
    }
#line 640 "format_call.m"
    check_hlds__simplify__format_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__format_call__conv0_Goal_5));
#line 640 "format_call.m"
    return check_hlds__simplify__format_call__wrapper_arg_2;
#line 640 "format_call.m"
  }
#line 640 "format_call.m"
}

#line 617 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1,
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__2_2,
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__3_3,
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4,
#line 617 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5,
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6,
#line 617 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7,
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8,
#line 617 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9,
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10,
#line 617 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11,
#line 617 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_12,
#line 617 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13)
#line 617 "format_call.m"
{
#line 623 "format_call.m"
  while (MR_TRUE)
#line 623 "format_call.m"
    {
#line 623 "format_call.m"
      /* tailcall optimized into a loop */
#line 623 "format_call.m"
      {
#line 623 "format_call.m"
        MR_bool check_hlds__simplify__format_call__succeeded;

#line 623 "format_call.m"
        if ((check_hlds__simplify__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 623 "format_call.m"
          {
#line 624 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_12;
#line 624 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10;
#line 624 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8;
#line 623 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6;
#line 623 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4;
#line 623 "format_call.m"
          }
#line 623 "format_call.m"
        else
#line 626 "format_call.m"
          {
#line 626 "format_call.m"
            MR_Word check_hlds__simplify__format_call__Goal_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 626 "format_call.m"
            MR_Word check_hlds__simplify__format_call__Goals_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 626 "format_call.m"
            MR_Word check_hlds__simplify__format_call__GoalExpr_40;
#line 626 "format_call.m"
            MR_Word check_hlds__simplify__format_call__GoalInfo_41;
#line 626 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 626 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 626 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 626 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132;
#line 626 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133;

#line 627 "format_call.m"
            {
#line 627 "format_call.m"
              check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Goals_33, check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4, &check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8, &check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_12, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133);
            }
#line 629 "format_call.m"
            check_hlds__simplify__format_call__GoalExpr_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal_32, (MR_Integer) 0)));
#line 629 "format_call.m"
            check_hlds__simplify__format_call__GoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal_32, (MR_Integer) 1)));
#line 634 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 0))))
#line 657 "format_call.m"
              {
#line 657 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_221_221;
#line 657 "format_call.m"
                MR_Word check_hlds__simplify__format_call__SubGoal_56 = (MR_Word) MR_body(((MR_Word) check_hlds__simplify__format_call__GoalExpr_40), (MR_Integer) 0);
#line 657 "format_call.m"
                MR_Word check_hlds__simplify__format_call__SubGoalId_57;
#line 657 "format_call.m"
                MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_174_174;

#line 658 "format_call.m"
                {
#line 658 "format_call.m"
                  check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__SubGoal_56, &check_hlds__simplify__format_call__SubGoalId_57, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_174_174, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                }
#line 11196 "check_hlds.simplify.format_call.c"
                check_hlds__simplify__format_call__TypeCtorInfo_221_221 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 660 "format_call.m"
                {
#line 660 "format_call.m"
                  mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_221_221, check_hlds__simplify__format_call__TypeCtorInfo_221_221, ((MR_Box) (check_hlds__simplify__format_call__SubGoalId_57)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_174_174, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11);
#line 660 "format_call.m"
                  return;
                }
#line 657 "format_call.m"
              }
#line 634 "format_call.m"
            else
#line 634 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 2))))
#line 686 "format_call.m"
                {
#line 686 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__PredId_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)));
#line 686 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__Args_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));
#line 686 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__PredInfo_78;
#line 686 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__ModuleName_79;
#line 686 "format_call.m"
                  MR_String check_hlds__simplify__format_call__Name_80;
#line 686 "format_call.m"
                  MR_Integer check_hlds__simplify__format_call___ProcId_73 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));
#line 686 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 3)));
#line 686 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 4)));
#line 686 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 5)));
#line 701 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__Kind_81;
#line 701 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__StringVar_82;
#line 701 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__ValuesVar_83;

#line 687 "format_call.m"
                  {
#line 687 "format_call.m"
                    hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__PredId_72, &check_hlds__simplify__format_call__PredInfo_78);
                  }
#line 688 "format_call.m"
                  {
#line 688 "format_call.m"
                    check_hlds__simplify__format_call__ModuleName_79 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__simplify__format_call__PredInfo_78);
                  }
#line 689 "format_call.m"
                  {
#line 689 "format_call.m"
                    check_hlds__simplify__format_call__Name_80 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__simplify__format_call__PredInfo_78);
                  }
#line 691 "format_call.m"
                  {
#line 691 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__is_format_call_kind_and_vars_6_p_0(check_hlds__simplify__format_call__ModuleName_79, check_hlds__simplify__format_call__Name_80, check_hlds__simplify__format_call__Args_74, &check_hlds__simplify__format_call__Kind_81, &check_hlds__simplify__format_call__StringVar_82, &check_hlds__simplify__format_call__ValuesVar_83);
                  }
#line 701 "format_call.m"
                  if (check_hlds__simplify__format_call__succeeded)
#line 694 "format_call.m"
                    {
#line 694 "format_call.m"
                      MR_Integer check_hlds__simplify__format_call__Arity_84;
#line 694 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__GoalId_85;
#line 694 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__Context_86;
#line 694 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__FormatCallSite_87;
#line 694 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_159_159;
#line 694 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__V_161_161;

#line 694 "format_call.m"
                      {
#line 694 "format_call.m"
                        check_hlds__simplify__format_call__Arity_84 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__simplify__format_call__PredInfo_78);
                      }
#line 695 "format_call.m"
                      {
#line 695 "format_call.m"
                        check_hlds__simplify__format_call__GoalId_85 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__simplify__format_call__GoalInfo_41);
                      }
#line 696 "format_call.m"
                      {
#line 696 "format_call.m"
                        check_hlds__simplify__format_call__Context_86 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__simplify__format_call__GoalInfo_41);
                      }
#line 697 "format_call.m"
                      {
#line 697 "format_call.m"
                        check_hlds__simplify__format_call__FormatCallSite_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 697 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 0) = ((MR_Box) (check_hlds__simplify__format_call__GoalId_85));
#line 697 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 1) = ((MR_Box) (check_hlds__simplify__format_call__StringVar_82));
#line 697 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 2) = ((MR_Box) (check_hlds__simplify__format_call__ValuesVar_83));
#line 697 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 3) = ((MR_Box) (check_hlds__simplify__format_call__Kind_81));
#line 697 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 4) = ((MR_Box) (check_hlds__simplify__format_call__ModuleName_79));
#line 697 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 5) = ((MR_Box) (check_hlds__simplify__format_call__Name_80));
#line 697 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 6) = ((MR_Box) (check_hlds__simplify__format_call__Arity_84));
#line 697 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 7) = ((MR_Box) (check_hlds__simplify__format_call__Context_86));
#line 697 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_87, 8) = ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3));
#line 697 "format_call.m"
                      }
#line 699 "format_call.m"
                      {
#line 699 "format_call.m"
                        MR_Word base;
#line 699 "format_call.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "format_call.m"
                        *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = base;
#line 699 "format_call.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__FormatCallSite_87));
#line 699 "format_call.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129));
#line 699 "format_call.m"
                      }
#line 700 "format_call.m"
                      {
#line 700 "format_call.m"
                        check_hlds__simplify__format_call__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_161_161, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValuesVar_83));
#line 700 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 700 "format_call.m"
                      }
#line 700 "format_call.m"
                      {
#line 700 "format_call.m"
                        check_hlds__simplify__format_call__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_159_159, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringVar_82));
#line 700 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_159_159, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_161_161));
#line 700 "format_call.m"
                      }
#line 700 "format_call.m"
                      {
#line 700 "format_call.m"
                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__V_159_159, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                      }
#line 694 "format_call.m"
                    }
#line 701 "format_call.m"
                  else
#line 702 "format_call.m"
                    {
#line 702 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133;
#line 702 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 702 "format_call.m"
                    }
#line 702 "format_call.m"
                  *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 702 "format_call.m"
                  *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 702 "format_call.m"
                  *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132;
#line 686 "format_call.m"
                }
#line 634 "format_call.m"
              else
#line 634 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 1))))
#line 705 "format_call.m"
                  {
#line 705 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__RHS_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));
#line 705 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__Unification_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 3)));
#line 705 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_149_149;
#line 705 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_150_150;
#line 705 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_151_151;
#line 705 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)));
#line 705 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));
#line 705 "format_call.m"
                    MR_Word check_hlds__simplify__format_call__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 4)));

#line 706 "format_call.m"
                    {
#line 706 "format_call.m"
                      check_hlds__simplify__format_call__format_call_traverse_unify_8_p_0(check_hlds__simplify__format_call__Unification_91, check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, &check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_149_149, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_150_150, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_151_151);
                    }
#line 716 "format_call.m"
                    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__RHS_89)) == (MR_mktag((MR_Integer) 1))))
#line 718 "format_call.m"
                      {
#line 718 "format_call.m"
                        *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 718 "format_call.m"
                        *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 718 "format_call.m"
                        *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_149_149;
#line 718 "format_call.m"
                        *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_150_150;
#line 718 "format_call.m"
                        *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_151_151;
#line 718 "format_call.m"
                      }
#line 716 "format_call.m"
                    else
#line 716 "format_call.m"
                      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__RHS_89)) == (MR_mktag((MR_Integer) 2))))
#line 711 "format_call.m"
                        {
#line 711 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__TypeCtorInfo_224_224;
#line 711 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__LambdaGoal_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 6)));
#line 711 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__LambdaGoalId_102;
#line 711 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_155_155;
#line 709 "format_call.m"
                          MR_Word check_hlds__simplify__format_call___Purity_93 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 709 "format_call.m"
                          MR_Word check_hlds__simplify__format_call___HOGroundness_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 709 "format_call.m"
                          MR_Word check_hlds__simplify__format_call___PredFunc_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 709 "format_call.m"
                          MR_Word check_hlds__simplify__format_call___LambdaNonLocals_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 2)));
#line 709 "format_call.m"
                          MR_Word check_hlds__simplify__format_call___LambdaQuantVars_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 3)));
#line 709 "format_call.m"
                          MR_Word check_hlds__simplify__format_call___LambdaModes_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 4)));
#line 709 "format_call.m"
                          MR_Word check_hlds__simplify__format_call___LambdaDetism_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__RHS_89, (MR_Integer) 5)));

#line 712 "format_call.m"
                          {
#line 712 "format_call.m"
                            check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__LambdaGoal_101, &check_hlds__simplify__format_call__LambdaGoalId_102, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_149_149, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_150_150, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_155_155, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_151_151, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                          }
#line 11451 "check_hlds.simplify.format_call.c"
                          check_hlds__simplify__format_call__TypeCtorInfo_224_224 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 715 "format_call.m"
                          {
#line 715 "format_call.m"
                            mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_224_224, check_hlds__simplify__format_call__TypeCtorInfo_224_224, ((MR_Box) (check_hlds__simplify__format_call__LambdaGoalId_102)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_155_155, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11);
#line 715 "format_call.m"
                            return;
                          }
#line 711 "format_call.m"
                        }
#line 716 "format_call.m"
                      else
#line 717 "format_call.m"
                        {
#line 717 "format_call.m"
                          *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 717 "format_call.m"
                          *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 717 "format_call.m"
                          *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_149_149;
#line 717 "format_call.m"
                          *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_150_150;
#line 717 "format_call.m"
                          *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_151_151;
#line 717 "format_call.m"
                        }
#line 705 "format_call.m"
                  }
#line 634 "format_call.m"
                else
#line 634 "format_call.m"
                  if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 684 "format_call.m"
                    {
#line 684 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 684 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 684 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 684 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132;
#line 684 "format_call.m"
                      *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133;
#line 684 "format_call.m"
                    }
#line 634 "format_call.m"
                  else
#line 634 "format_call.m"
                    if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 631 "format_call.m"
                      {
#line 631 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__Conjuncts_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));
#line 631 "format_call.m"
                        MR_Word check_hlds__simplify__format_call__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));

#line 632 "format_call.m"
                        /* direct tailcall eliminated */
#line 632 "format_call.m"
                        {
#line 632 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__HeadVar__2__tmp_copy_2 = check_hlds__simplify__format_call__Conjuncts_43;
#line 632 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0__tmp_copy_4 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 632 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0__tmp_copy_6 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 632 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0__tmp_copy_8 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 632 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0__tmp_copy_10 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132;
#line 632 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0__tmp_copy_12 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133;

#line 632 "format_call.m"
                          check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_12 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0__tmp_copy_12;
#line 632 "format_call.m"
                          check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0__tmp_copy_10;
#line 632 "format_call.m"
                          check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0__tmp_copy_8;
#line 632 "format_call.m"
                          check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0__tmp_copy_6;
#line 632 "format_call.m"
                          check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0__tmp_copy_4;
#line 632 "format_call.m"
                          check_hlds__simplify__format_call__HeadVar__2_2 = check_hlds__simplify__format_call__HeadVar__2__tmp_copy_2;
#line 632 "format_call.m"
                        }
#line 632 "format_call.m"
                        continue;
#line 631 "format_call.m"
                      }
#line 634 "format_call.m"
                    else
#line 634 "format_call.m"
                      if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 635 "format_call.m"
                        {
#line 635 "format_call.m"
                          MR_Word check_hlds__simplify__format_call__Disjuncts_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));

#line 636 "format_call.m"
                          {
#line 636 "format_call.m"
                            check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Disjuncts_44, check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
#line 636 "format_call.m"
                            return;
                          }
#line 635 "format_call.m"
                        }
#line 634 "format_call.m"
                      else
#line 634 "format_call.m"
                        if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 682 "format_call.m"
                          {
#line 682 "format_call.m"
                            *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 682 "format_call.m"
                            *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 682 "format_call.m"
                            *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 682 "format_call.m"
                            *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132;
#line 682 "format_call.m"
                            *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133;
#line 682 "format_call.m"
                          }
#line 634 "format_call.m"
                        else
#line 634 "format_call.m"
                          if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 644 "format_call.m"
                            {
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__TypeCtorInfo_219_219;
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__Cond_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__Then_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 3)));
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__Else_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 4)));
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__ElseId_52;
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__CondThenId_53;
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__ThenConj_54;
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__CondConj_55;
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_177_177;
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_178_178;
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_179_179;
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_180_180;
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_181_181;
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_182_182;
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_183_183;
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__V_184_184;
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_188_188;
#line 644 "format_call.m"
                              MR_Word check_hlds__simplify__format_call__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));

#line 646 "format_call.m"
                              {
#line 646 "format_call.m"
                                check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Else_51, &check_hlds__simplify__format_call__ElseId_52, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, &check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_177_177, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_178_178, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, &check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_179_179, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_180_180, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, &check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_181_181);
                              }
#line 11628 "check_hlds.simplify.format_call.c"
                              check_hlds__simplify__format_call__TypeCtorInfo_219_219 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 648 "format_call.m"
                              {
#line 648 "format_call.m"
                                mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_219_219, check_hlds__simplify__format_call__TypeCtorInfo_219_219, ((MR_Box) (check_hlds__simplify__format_call__ElseId_52)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_180_180, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_182_182);
                              }
#line 650 "format_call.m"
                              {
#line 650 "format_call.m"
                                check_hlds__simplify__format_call__alloc_id_3_p_0(&check_hlds__simplify__format_call__CondThenId_53, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_178_178, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_183_183);
                              }
#line 651 "format_call.m"
                              {
#line 651 "format_call.m"
                                hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__format_call__Then_50, &check_hlds__simplify__format_call__ThenConj_54);
                              }
#line 652 "format_call.m"
                              {
#line 652 "format_call.m"
                                hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__format_call__Cond_49, &check_hlds__simplify__format_call__CondConj_55);
                              }
#line 653 "format_call.m"
                              {
#line 653 "format_call.m"
                                check_hlds__simplify__format_call__V_184_184 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__simplify__format_call__CondConj_55, check_hlds__simplify__format_call__ThenConj_54);
                              }
#line 653 "format_call.m"
                              {
#line 653 "format_call.m"
                                check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__V_184_184, check_hlds__simplify__format_call__CondThenId_53, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_177_177, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_183_183, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_179_179, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_182_182, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_188_188, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_181_181, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                              }
#line 655 "format_call.m"
                              {
#line 655 "format_call.m"
                                mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_219_219, check_hlds__simplify__format_call__TypeCtorInfo_219_219, ((MR_Box) (check_hlds__simplify__format_call__CondThenId_53)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_188_188, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11);
#line 655 "format_call.m"
                                return;
                              }
#line 644 "format_call.m"
                            }
#line 634 "format_call.m"
                          else
#line 634 "format_call.m"
                            if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 662 "format_call.m"
                              {
#line 662 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__Reason_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));
#line 662 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__SubGoal_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));
#line 664 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__TermVar_59;
#line 664 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__V_163_163;
#line 671 "format_call.m"
                                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_222_222;

#line 664 "format_call.m"
                                check_hlds__simplify__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__simplify__format_call__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 664 "format_call.m"
                                if (check_hlds__simplify__format_call__succeeded)
#line 664 "format_call.m"
                                  {
#line 664 "format_call.m"
                                    check_hlds__simplify__format_call__TermVar_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_58, (MR_Integer) 1)));
#line 664 "format_call.m"
                                    check_hlds__simplify__format_call__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__Reason_58, (MR_Integer) 2)));
#line 664 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_163_163 == (MR_Integer) 1);
#line 664 "format_call.m"
                                    if (check_hlds__simplify__format_call__succeeded)
#line 664 "format_call.m"
                                      {
#line 11702 "check_hlds.simplify.format_call.c"
                                        check_hlds__simplify__format_call__TypeCtorInfo_222_222 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 671 "format_call.m"
                                        {
#line 671 "format_call.m"
                                          check_hlds__simplify__format_call__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__simplify__format_call__TypeCtorInfo_222_222, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__simplify__format_call__TermVar_59);
                                        }
#line 671 "format_call.m"
                                        check_hlds__simplify__format_call__succeeded = !(check_hlds__simplify__format_call__succeeded);
#line 664 "format_call.m"
                                      }
#line 664 "format_call.m"
                                  }
#line 677 "format_call.m"
                                if (check_hlds__simplify__format_call__succeeded)
#line 676 "format_call.m"
                                  {
#line 676 "format_call.m"
                                    *check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133;
#line 676 "format_call.m"
                                    *check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132;
#line 676 "format_call.m"
                                    *check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 676 "format_call.m"
                                    *check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 676 "format_call.m"
                                    *check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 676 "format_call.m"
                                  }
#line 677 "format_call.m"
                                else
#line 678 "format_call.m"
                                  {
#line 678 "format_call.m"
                                    MR_Word check_hlds__simplify__format_call__V_164_164;

#line 678 "format_call.m"
                                    {
#line 678 "format_call.m"
                                      check_hlds__simplify__format_call__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "format_call.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_164_164, 0) = ((MR_Box) (check_hlds__simplify__format_call__SubGoal_208));
#line 678 "format_call.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "format_call.m"
                                    }
#line 678 "format_call.m"
                                    /* direct tailcall eliminated */
#line 678 "format_call.m"
                                    {
#line 678 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__HeadVar__2__tmp_copy_2 = check_hlds__simplify__format_call__V_164_164;
#line 678 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0__tmp_copy_4 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 678 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0__tmp_copy_6 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130;
#line 678 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0__tmp_copy_8 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 678 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0__tmp_copy_10 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132;
#line 678 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0__tmp_copy_12 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133;

#line 678 "format_call.m"
                                      check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_12 = check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0__tmp_copy_12;
#line 678 "format_call.m"
                                      check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_10 = check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0__tmp_copy_10;
#line 678 "format_call.m"
                                      check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_8 = check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0__tmp_copy_8;
#line 678 "format_call.m"
                                      check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_6 = check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0__tmp_copy_6;
#line 678 "format_call.m"
                                      check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_4 = check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0__tmp_copy_4;
#line 678 "format_call.m"
                                      check_hlds__simplify__format_call__HeadVar__2_2 = check_hlds__simplify__format_call__HeadVar__2__tmp_copy_2;
#line 678 "format_call.m"
                                    }
#line 678 "format_call.m"
                                    continue;
#line 678 "format_call.m"
                                  }
#line 662 "format_call.m"
                              }
#line 634 "format_call.m"
                            else
#line 634 "format_call.m"
                              if (((((MR_tag((MR_Word) check_hlds__simplify__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 722 "format_call.m"
                                {
#line 722 "format_call.m"
                                  MR_Word check_hlds__simplify__format_call__ShortHand_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));

#line 728 "format_call.m"
                                  if (((MR_tag((MR_Word) check_hlds__simplify__format_call__ShortHand_107)) == (MR_mktag((MR_Integer) 1))))
#line 724 "format_call.m"
                                    {
#line 724 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__MainGoal_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 4)));
#line 724 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__OrElseGoals_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 5)));
#line 724 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__V_143_143;
#line 724 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 0)));
#line 724 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 1)));
#line 724 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 2)));
#line 724 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 3)));
#line 724 "format_call.m"
                                      MR_Word check_hlds__simplify__format_call__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 6)));

#line 725 "format_call.m"
                                      {
#line 725 "format_call.m"
                                        check_hlds__simplify__format_call__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "format_call.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_143_143, 0) = ((MR_Box) (check_hlds__simplify__format_call__MainGoal_112));
#line 725 "format_call.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_143_143, 1) = ((MR_Box) (check_hlds__simplify__format_call__OrElseGoals_113));
#line 725 "format_call.m"
                                      }
#line 725 "format_call.m"
                                      {
#line 725 "format_call.m"
                                        check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__V_143_143, check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
#line 725 "format_call.m"
                                        return;
                                      }
#line 724 "format_call.m"
                                    }
#line 728 "format_call.m"
                                  else
#line 728 "format_call.m"
                                    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__ShortHand_107)) == (MR_mktag((MR_Integer) 0))))
#line 735 "format_call.m"
                                      {
#line 737 "format_call.m"
                                        {
#line 737 "format_call.m"
                                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.simplify.format_call", (MR_String) "predicate \140check_hlds.simplify.format_call.format_call_traverse_conj\'/13", (MR_String) "bi_implication");
#line 737 "format_call.m"
                                          return;
                                        }
#line 735 "format_call.m"
                                      }
#line 728 "format_call.m"
                                    else
#line 729 "format_call.m"
                                      {
#line 729 "format_call.m"
                                        MR_Word check_hlds__simplify__format_call__TypeCtorInfo_225_225;
#line 729 "format_call.m"
                                        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_140_140;
#line 729 "format_call.m"
                                        MR_Word check_hlds__simplify__format_call__SubGoal_209 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 2)));
#line 729 "format_call.m"
                                        MR_Word check_hlds__simplify__format_call__SubGoalId_210;
#line 729 "format_call.m"
                                        MR_Word check_hlds__simplify__format_call__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 0)));
#line 729 "format_call.m"
                                        MR_Word check_hlds__simplify__format_call__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__ShortHand_107, (MR_Integer) 1)));

#line 730 "format_call.m"
                                        {
#line 730 "format_call.m"
                                          check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__SubGoal_209, &check_hlds__simplify__format_call__SubGoalId_210, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, &check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_140_140, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
                                        }
#line 11871 "check_hlds.simplify.format_call.c"
                                        check_hlds__simplify__format_call__TypeCtorInfo_225_225 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 733 "format_call.m"
                                        {
#line 733 "format_call.m"
                                          mercury__map__det_insert_4_p_0(check_hlds__simplify__format_call__TypeCtorInfo_225_225, check_hlds__simplify__format_call__TypeCtorInfo_225_225, ((MR_Box) (check_hlds__simplify__format_call__SubGoalId_210)), ((MR_Box) (check_hlds__simplify__format_call__HeadVar__3_3)), check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_140_140, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11);
#line 733 "format_call.m"
                                          return;
                                        }
#line 729 "format_call.m"
                                      }
#line 722 "format_call.m"
                                }
#line 634 "format_call.m"
                              else
#line 639 "format_call.m"
                                {
#line 639 "format_call.m"
                                  MR_Word check_hlds__simplify__format_call__Cases_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 3)));
#line 639 "format_call.m"
                                  MR_Word check_hlds__simplify__format_call__Disjuncts_207;
#line 639 "format_call.m"
                                  MR_Word check_hlds__simplify__format_call__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 1)));
#line 639 "format_call.m"
                                  MR_Word check_hlds__simplify__format_call__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__GoalExpr_40, (MR_Integer) 2)));

#line 640 "format_call.m"
                                  {
#line 640 "format_call.m"
                                    check_hlds__simplify__format_call__Disjuncts_207 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[9], check_hlds__simplify__format_call__Cases_47);
                                  }
#line 641 "format_call.m"
                                  {
#line 641 "format_call.m"
                                    check_hlds__simplify__format_call__format_call_traverse_disj_13_p_0(check_hlds__simplify__format_call__HeadVar__1_1, check_hlds__simplify__format_call__Disjuncts_207, check_hlds__simplify__format_call__HeadVar__3_3, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_7, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_132_132, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_11, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_13);
#line 641 "format_call.m"
                                    return;
                                  }
#line 639 "format_call.m"
                                }
#line 626 "format_call.m"
          }
#line 623 "format_call.m"
      }
#line 623 "format_call.m"
      break;
#line 623 "format_call.m"
    }
#line 617 "format_call.m"
}

#line 604 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(
#line 604 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
#line 604 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Goal_15,
#line 604 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__CurId_16,
#line 604 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_23,
#line 604 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_24,
#line 604 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_25,
#line 604 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Counter_26,
#line 604 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_27,
#line 604 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_28,
#line 604 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_29,
#line 604 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_30,
#line 604 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_31,
#line 604 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_32)
#line 604 "format_call.m"
{
#line 611 "format_call.m"
  {
#line 611 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 611 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalConj_22;
#line 611 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Counter_33_33;
#line 611 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__N_43;

#line 883 "format_call.m"
    {
#line 883 "format_call.m"
      mercury__counter__allocate_3_p_0(&check_hlds__simplify__format_call__N_43, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_0_25, &check_hlds__simplify__format_call__STATE_VARIABLE_Counter_33_33);
    }
#line 884 "format_call.m"
    *check_hlds__simplify__format_call__CurId_16 = (MR_Word) check_hlds__simplify__format_call__N_43;
#line 613 "format_call.m"
    {
#line 613 "format_call.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__simplify__format_call__Goal_15, &check_hlds__simplify__format_call__GoalConj_22);
    }
#line 614 "format_call.m"
    {
#line 614 "format_call.m"
      check_hlds__simplify__format_call__format_call_traverse_conj_13_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__GoalConj_22, *check_hlds__simplify__format_call__CurId_16, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_0_23, check_hlds__simplify__format_call__STATE_VARIABLE_FormatCallSites_24, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_33_33, check_hlds__simplify__format_call__STATE_VARIABLE_Counter_26, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_0_27, check_hlds__simplify__format_call__STATE_VARIABLE_ConjMaps_28, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_0_29, check_hlds__simplify__format_call__STATE_VARIABLE_PredMap_30, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_0_31, check_hlds__simplify__format_call__STATE_VARIABLE_RelevantVars_32);
#line 614 "format_call.m"
      return;
    }
#line 611 "format_call.m"
  }
#line 604 "format_call.m"
}

#line 592 "format_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__format_call__project_var_to_print_1_f_0(
#line 592 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1)
#line 592 "format_call.m"
{
#line 594 "format_call.m"
  {
#line 594 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 594 "format_call.m"
    MR_Word check_hlds__simplify__format_call__VarToPrint_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 594 "format_call.m"
    MR_Word check_hlds__simplify__format_call___DummyToPrint_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));

#line 594 "format_call.m"
    return check_hlds__simplify__format_call__VarToPrint_3;
#line 594 "format_call.m"
  }
#line 592 "format_call.m"
}

#line 587 "format_call.m"
static MR_Word MR_CALL 
check_hlds__simplify__format_call__project_dummy_to_print_1_f_0(
#line 587 "format_call.m"
  MR_Word check_hlds__simplify__format_call__HeadVar__1_1)
#line 587 "format_call.m"
{
#line 589 "format_call.m"
  {
#line 589 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 589 "format_call.m"
    MR_Word check_hlds__simplify__format_call__DummyToPrint_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 589 "format_call.m"
    MR_Word check_hlds__simplify__format_call___VarToPrint_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__HeadVar__1_1, (MR_Integer) 0)));

#line 589 "format_call.m"
    return check_hlds__simplify__format_call__DummyToPrint_4;
#line 589 "format_call.m"
  }
#line 587 "format_call.m"
}

#line 571 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__follow_list_value_5_p_0(
#line 571 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjMaps_6,
#line 571 "format_call.m"
  MR_Word check_hlds__simplify__format_call__PredMap_7,
#line 571 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CurId_8,
#line 571 "format_call.m"
  MR_Word check_hlds__simplify__format_call__PolytypeVar_9,
#line 571 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__MaybeResult_10)
#line 571 "format_call.m"
{
#line 574 "format_call.m"
  while (MR_TRUE)
#line 574 "format_call.m"
    {
#line 574 "format_call.m"
      /* tailcall optimized into a loop */
#line 574 "format_call.m"
      {
#line 574 "format_call.m"
        MR_bool check_hlds__simplify__format_call__succeeded;
#line 574 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMap_11;
#line 574 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ElementMap_14;
#line 574 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvMap_15;
#line 876 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMapPrime_26;
#line 874 "format_call.m"
        MR_Box check_hlds__simplify__format_call__conv0_ConjMapPrime_26;
#line 576 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_12_12;
#line 576 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_13_13;
#line 579 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvVar_16;
#line 577 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_19_19;
#line 577 "format_call.m"
        MR_Box check_hlds__simplify__format_call__conv1_EqvVar_16;

#line 874 "format_call.m"
        {
#line 874 "format_call.m"
          check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, check_hlds__simplify__format_call__ConjMaps_6, ((MR_Box) (check_hlds__simplify__format_call__CurId_8)), &check_hlds__simplify__format_call__conv0_ConjMapPrime_26);
        }
#line 874 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 874 "format_call.m"
          {
#line 874 "format_call.m"
            check_hlds__simplify__format_call__ConjMapPrime_26 = ((MR_Word) check_hlds__simplify__format_call__conv0_ConjMapPrime_26);
#line 874 "format_call.m"
            check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 874 "format_call.m"
          }
#line 876 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 875 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_11 = check_hlds__simplify__format_call__ConjMapPrime_26;
#line 876 "format_call.m"
        else
#line 877 "format_call.m"
          {
#line 877 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeInfo_14_33 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 877 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_27_27;
#line 877 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_28_28;
#line 877 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_29_29;
#line 877 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_30_30;

#line 877 "format_call.m"
            {
#line 877 "format_call.m"
              check_hlds__simplify__format_call__V_27_27 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_33, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 877 "format_call.m"
            {
#line 877 "format_call.m"
              check_hlds__simplify__format_call__V_28_28 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_33, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0);
            }
#line 877 "format_call.m"
            {
#line 877 "format_call.m"
              check_hlds__simplify__format_call__V_29_29 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_33, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0);
            }
#line 877 "format_call.m"
            {
#line 877 "format_call.m"
              check_hlds__simplify__format_call__V_30_30 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_33, check_hlds__simplify__format_call__TypeInfo_14_33);
            }
#line 877 "format_call.m"
            {
#line 877 "format_call.m"
              check_hlds__simplify__format_call__ConjMap_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 877 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_27_27));
#line 877 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_28_28));
#line 877 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_29_29));
#line 877 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, 3) = ((MR_Box) (check_hlds__simplify__format_call__V_30_30));
#line 877 "format_call.m"
            }
#line 877 "format_call.m"
          }
#line 576 "format_call.m"
        check_hlds__simplify__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 0)));
#line 576 "format_call.m"
        check_hlds__simplify__format_call__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 1)));
#line 576 "format_call.m"
        check_hlds__simplify__format_call__ElementMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 2)));
#line 576 "format_call.m"
        check_hlds__simplify__format_call__EqvMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 3)));
#line 12158 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeInfo_19_19 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 577 "format_call.m"
        {
#line 577 "format_call.m"
          check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeInfo_19_19, check_hlds__simplify__format_call__TypeInfo_19_19, check_hlds__simplify__format_call__EqvMap_15, ((MR_Box) (check_hlds__simplify__format_call__PolytypeVar_9)), &check_hlds__simplify__format_call__conv1_EqvVar_16);
        }
#line 577 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 577 "format_call.m"
          {
#line 577 "format_call.m"
            check_hlds__simplify__format_call__EqvVar_16 = ((MR_Word) check_hlds__simplify__format_call__conv1_EqvVar_16);
#line 577 "format_call.m"
            check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 577 "format_call.m"
          }
#line 579 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 578 "format_call.m"
          {
#line 578 "format_call.m"
            /* direct tailcall eliminated */
#line 578 "format_call.m"
            {
#line 578 "format_call.m"
              MR_Word check_hlds__simplify__format_call__PolytypeVar__tmp_copy_9 = check_hlds__simplify__format_call__EqvVar_16;

#line 578 "format_call.m"
              check_hlds__simplify__format_call__PolytypeVar_9 = check_hlds__simplify__format_call__PolytypeVar__tmp_copy_9;
#line 578 "format_call.m"
            }
#line 578 "format_call.m"
            continue;
#line 578 "format_call.m"
          }
#line 579 "format_call.m"
        else
#line 581 "format_call.m"
          {
#line 581 "format_call.m"
            MR_Word check_hlds__simplify__format_call__WhatToPrint_17;
#line 579 "format_call.m"
            MR_Box check_hlds__simplify__format_call__conv2_WhatToPrint_17;

#line 579 "format_call.m"
            {
#line 579 "format_call.m"
              check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0, check_hlds__simplify__format_call__ElementMap_14, ((MR_Box) (check_hlds__simplify__format_call__PolytypeVar_9)), &check_hlds__simplify__format_call__conv2_WhatToPrint_17);
            }
#line 579 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 579 "format_call.m"
              {
#line 579 "format_call.m"
                check_hlds__simplify__format_call__WhatToPrint_17 = ((MR_Word) check_hlds__simplify__format_call__conv2_WhatToPrint_17);
#line 579 "format_call.m"
                check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 579 "format_call.m"
              }
#line 581 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 580 "format_call.m"
              {
#line 580 "format_call.m"
                MR_Word base;
#line 580 "format_call.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 580 "format_call.m"
                *check_hlds__simplify__format_call__MaybeResult_10 = base;
#line 580 "format_call.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__WhatToPrint_17));
#line 580 "format_call.m"
              }
#line 581 "format_call.m"
            else
#line 583 "format_call.m"
              {
#line 583 "format_call.m"
                MR_Word check_hlds__simplify__format_call__PredId_18;
#line 581 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 581 "format_call.m"
                MR_Box check_hlds__simplify__format_call__conv3_PredId_18;

#line 581 "format_call.m"
                {
#line 581 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_22_22, check_hlds__simplify__format_call__TypeCtorInfo_22_22, check_hlds__simplify__format_call__PredMap_7, ((MR_Box) (check_hlds__simplify__format_call__CurId_8)), &check_hlds__simplify__format_call__conv3_PredId_18);
                }
#line 581 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 581 "format_call.m"
                  {
#line 581 "format_call.m"
                    check_hlds__simplify__format_call__PredId_18 = ((MR_Word) check_hlds__simplify__format_call__conv3_PredId_18);
#line 581 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 581 "format_call.m"
                  }
#line 583 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 582 "format_call.m"
                  {
#line 582 "format_call.m"
                    /* direct tailcall eliminated */
#line 582 "format_call.m"
                    {
#line 582 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__CurId__tmp_copy_8 = check_hlds__simplify__format_call__PredId_18;

#line 582 "format_call.m"
                      check_hlds__simplify__format_call__CurId_8 = check_hlds__simplify__format_call__CurId__tmp_copy_8;
#line 582 "format_call.m"
                    }
#line 582 "format_call.m"
                    continue;
#line 582 "format_call.m"
                  }
#line 583 "format_call.m"
                else
#line 584 "format_call.m"
                  *check_hlds__simplify__format_call__MaybeResult_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 583 "format_call.m"
              }
#line 581 "format_call.m"
          }
#line 574 "format_call.m"
      }
#line 574 "format_call.m"
      break;
#line 574 "format_call.m"
    }
#line 571 "format_call.m"
}

#line 537 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(
#line 537 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjMaps_6,
#line 537 "format_call.m"
  MR_Word check_hlds__simplify__format_call__PredMap_7,
#line 537 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CurId_8,
#line 537 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ListVar_9,
#line 537 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Result_10)
#line 537 "format_call.m"
{
#line 540 "format_call.m"
  while (MR_TRUE)
#line 540 "format_call.m"
    {
#line 540 "format_call.m"
      /* tailcall optimized into a loop */
#line 540 "format_call.m"
      {
#line 540 "format_call.m"
        MR_bool check_hlds__simplify__format_call__succeeded;
#line 540 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMap_11;
#line 540 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ListMap_13;
#line 540 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvMap_15;
#line 876 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMapPrime_36;
#line 874 "format_call.m"
        MR_Box check_hlds__simplify__format_call__conv0_ConjMapPrime_36;
#line 542 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_12_12;
#line 542 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_14_14;
#line 545 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvVar_16;
#line 543 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_29_29;
#line 543 "format_call.m"
        MR_Box check_hlds__simplify__format_call__conv1_EqvVar_16;

#line 874 "format_call.m"
        {
#line 874 "format_call.m"
          check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, check_hlds__simplify__format_call__ConjMaps_6, ((MR_Box) (check_hlds__simplify__format_call__CurId_8)), &check_hlds__simplify__format_call__conv0_ConjMapPrime_36);
        }
#line 874 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 874 "format_call.m"
          {
#line 874 "format_call.m"
            check_hlds__simplify__format_call__ConjMapPrime_36 = ((MR_Word) check_hlds__simplify__format_call__conv0_ConjMapPrime_36);
#line 874 "format_call.m"
            check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 874 "format_call.m"
          }
#line 876 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 875 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_11 = check_hlds__simplify__format_call__ConjMapPrime_36;
#line 876 "format_call.m"
        else
#line 877 "format_call.m"
          {
#line 877 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeInfo_14_43 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 877 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_37_37;
#line 877 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_38_38;
#line 877 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_39_39;
#line 877 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_40_40;

#line 877 "format_call.m"
            {
#line 877 "format_call.m"
              check_hlds__simplify__format_call__V_37_37 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_43, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 877 "format_call.m"
            {
#line 877 "format_call.m"
              check_hlds__simplify__format_call__V_38_38 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_43, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0);
            }
#line 877 "format_call.m"
            {
#line 877 "format_call.m"
              check_hlds__simplify__format_call__V_39_39 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_43, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0);
            }
#line 877 "format_call.m"
            {
#line 877 "format_call.m"
              check_hlds__simplify__format_call__V_40_40 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_43, check_hlds__simplify__format_call__TypeInfo_14_43);
            }
#line 877 "format_call.m"
            {
#line 877 "format_call.m"
              check_hlds__simplify__format_call__ConjMap_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 877 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_37_37));
#line 877 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_38_38));
#line 877 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_39_39));
#line 877 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, 3) = ((MR_Box) (check_hlds__simplify__format_call__V_40_40));
#line 877 "format_call.m"
            }
#line 877 "format_call.m"
          }
#line 542 "format_call.m"
        check_hlds__simplify__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 0)));
#line 542 "format_call.m"
        check_hlds__simplify__format_call__ListMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 1)));
#line 542 "format_call.m"
        check_hlds__simplify__format_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 2)));
#line 542 "format_call.m"
        check_hlds__simplify__format_call__EqvMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 3)));
#line 12418 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeInfo_29_29 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 543 "format_call.m"
        {
#line 543 "format_call.m"
          check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeInfo_29_29, check_hlds__simplify__format_call__TypeInfo_29_29, check_hlds__simplify__format_call__EqvMap_15, ((MR_Box) (check_hlds__simplify__format_call__ListVar_9)), &check_hlds__simplify__format_call__conv1_EqvVar_16);
        }
#line 543 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 543 "format_call.m"
          {
#line 543 "format_call.m"
            check_hlds__simplify__format_call__EqvVar_16 = ((MR_Word) check_hlds__simplify__format_call__conv1_EqvVar_16);
#line 543 "format_call.m"
            check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 543 "format_call.m"
          }
#line 545 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 544 "format_call.m"
          {
#line 544 "format_call.m"
            /* direct tailcall eliminated */
#line 544 "format_call.m"
            {
#line 544 "format_call.m"
              MR_Word check_hlds__simplify__format_call__ListVar__tmp_copy_9 = check_hlds__simplify__format_call__EqvVar_16;

#line 544 "format_call.m"
              check_hlds__simplify__format_call__ListVar_9 = check_hlds__simplify__format_call__ListVar__tmp_copy_9;
#line 544 "format_call.m"
            }
#line 544 "format_call.m"
            continue;
#line 544 "format_call.m"
          }
#line 545 "format_call.m"
        else
#line 565 "format_call.m"
          {
#line 565 "format_call.m"
            MR_Word check_hlds__simplify__format_call__ListState_17;
#line 545 "format_call.m"
            MR_Box check_hlds__simplify__format_call__conv2_ListState_17;

#line 545 "format_call.m"
            {
#line 545 "format_call.m"
              check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0, check_hlds__simplify__format_call__ListMap_13, ((MR_Box) (check_hlds__simplify__format_call__ListVar_9)), &check_hlds__simplify__format_call__conv2_ListState_17);
            }
#line 545 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 545 "format_call.m"
              {
#line 545 "format_call.m"
                check_hlds__simplify__format_call__ListState_17 = ((MR_Word) check_hlds__simplify__format_call__conv2_ListState_17);
#line 545 "format_call.m"
                check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 545 "format_call.m"
              }
#line 565 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 549 "format_call.m"
              if ((check_hlds__simplify__format_call__ListState_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 547 "format_call.m"
                {
#line 547 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__V_27_27;

#line 548 "format_call.m"
                  {
#line 548 "format_call.m"
                    check_hlds__simplify__format_call__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "format_call.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_27_27, 0) = ((MR_Box) (check_hlds__simplify__format_call__ListVar_9));
#line 548 "format_call.m"
                    MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "format_call.m"
                  }
#line 548 "format_call.m"
                  {
#line 548 "format_call.m"
                    MR_Word base;
#line 548 "format_call.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 548 "format_call.m"
                    *check_hlds__simplify__format_call__Result_10 = base;
#line 548 "format_call.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 548 "format_call.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_27_27));
#line 548 "format_call.m"
                  }
#line 547 "format_call.m"
                }
#line 549 "format_call.m"
              else
#line 550 "format_call.m"
                {
#line 550 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__HeadVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ListState_17, (MR_Integer) 0)));
#line 550 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__TailVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__ListState_17, (MR_Integer) 1)));
#line 550 "format_call.m"
                  MR_Word check_hlds__simplify__format_call__TailResult_20;

#line 551 "format_call.m"
                  {
#line 551 "format_call.m"
                    check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(check_hlds__simplify__format_call__ConjMaps_6, check_hlds__simplify__format_call__PredMap_7, check_hlds__simplify__format_call__CurId_8, check_hlds__simplify__format_call__TailVar_19, &check_hlds__simplify__format_call__TailResult_20);
                  }
#line 556 "format_call.m"
                  if ((check_hlds__simplify__format_call__TailResult_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 555 "format_call.m"
                    *check_hlds__simplify__format_call__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 556 "format_call.m"
                  else
#line 558 "format_call.m"
                    {
#line 558 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__TailPolytypeVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TailResult_20, (MR_Integer) 0)));
#line 558 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__TailSkeletonVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__TailResult_20, (MR_Integer) 1)));
#line 558 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__PolytypeVars_23;
#line 558 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__SkeletonVars_24;

#line 559 "format_call.m"
                      {
#line 559 "format_call.m"
                        check_hlds__simplify__format_call__PolytypeVars_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__PolytypeVars_23, 0) = ((MR_Box) (check_hlds__simplify__format_call__HeadVar_18));
#line 559 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__PolytypeVars_23, 1) = ((MR_Box) (check_hlds__simplify__format_call__TailPolytypeVars_21));
#line 559 "format_call.m"
                      }
#line 560 "format_call.m"
                      {
#line 560 "format_call.m"
                        check_hlds__simplify__format_call__SkeletonVars_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SkeletonVars_24, 0) = ((MR_Box) (check_hlds__simplify__format_call__TailVar_19));
#line 560 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SkeletonVars_24, 1) = ((MR_Box) (check_hlds__simplify__format_call__TailSkeletonVars_22));
#line 560 "format_call.m"
                      }
#line 561 "format_call.m"
                      {
#line 561 "format_call.m"
                        MR_Word base;
#line 561 "format_call.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 561 "format_call.m"
                        *check_hlds__simplify__format_call__Result_10 = base;
#line 561 "format_call.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__PolytypeVars_23));
#line 561 "format_call.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__SkeletonVars_24));
#line 561 "format_call.m"
                      }
#line 558 "format_call.m"
                    }
#line 550 "format_call.m"
                }
#line 565 "format_call.m"
            else
#line 567 "format_call.m"
              {
#line 567 "format_call.m"
                MR_Word check_hlds__simplify__format_call__PredId_25;
#line 565 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_32_32 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 565 "format_call.m"
                MR_Box check_hlds__simplify__format_call__conv3_PredId_25;

#line 565 "format_call.m"
                {
#line 565 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_32_32, check_hlds__simplify__format_call__TypeCtorInfo_32_32, check_hlds__simplify__format_call__PredMap_7, ((MR_Box) (check_hlds__simplify__format_call__CurId_8)), &check_hlds__simplify__format_call__conv3_PredId_25);
                }
#line 565 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 565 "format_call.m"
                  {
#line 565 "format_call.m"
                    check_hlds__simplify__format_call__PredId_25 = ((MR_Word) check_hlds__simplify__format_call__conv3_PredId_25);
#line 565 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 565 "format_call.m"
                  }
#line 567 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 566 "format_call.m"
                  {
#line 566 "format_call.m"
                    /* direct tailcall eliminated */
#line 566 "format_call.m"
                    {
#line 566 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__CurId__tmp_copy_8 = check_hlds__simplify__format_call__PredId_25;

#line 566 "format_call.m"
                      check_hlds__simplify__format_call__CurId_8 = check_hlds__simplify__format_call__CurId__tmp_copy_8;
#line 566 "format_call.m"
                    }
#line 566 "format_call.m"
                    continue;
#line 566 "format_call.m"
                  }
#line 567 "format_call.m"
                else
#line 568 "format_call.m"
                  *check_hlds__simplify__format_call__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 567 "format_call.m"
              }
#line 565 "format_call.m"
          }
#line 540 "format_call.m"
      }
#line 540 "format_call.m"
      break;
#line 540 "format_call.m"
    }
#line 537 "format_call.m"
}

#line 514 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__follow_format_string_5_p_0(
#line 514 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjMaps_6,
#line 514 "format_call.m"
  MR_Word check_hlds__simplify__format_call__PredMap_7,
#line 514 "format_call.m"
  MR_Word check_hlds__simplify__format_call__CurId_8,
#line 514 "format_call.m"
  MR_Word check_hlds__simplify__format_call__StringVar_9,
#line 514 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__MaybeString_10)
#line 514 "format_call.m"
{
#line 517 "format_call.m"
  while (MR_TRUE)
#line 517 "format_call.m"
    {
#line 517 "format_call.m"
      /* tailcall optimized into a loop */
#line 517 "format_call.m"
      {
#line 517 "format_call.m"
        MR_bool check_hlds__simplify__format_call__succeeded;
#line 517 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMap_11;
#line 517 "format_call.m"
        MR_Word check_hlds__simplify__format_call__StringMap_12;
#line 517 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvMap_15;
#line 876 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ConjMapPrime_26;
#line 874 "format_call.m"
        MR_Box check_hlds__simplify__format_call__conv0_ConjMapPrime_26;
#line 519 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_13_13;
#line 519 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_14_14;
#line 522 "format_call.m"
        MR_Word check_hlds__simplify__format_call__EqvVar_16;
#line 520 "format_call.m"
        MR_Word check_hlds__simplify__format_call__TypeInfo_19_19;
#line 520 "format_call.m"
        MR_Box check_hlds__simplify__format_call__conv1_EqvVar_16;

#line 874 "format_call.m"
        {
#line 874 "format_call.m"
          check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, check_hlds__simplify__format_call__ConjMaps_6, ((MR_Box) (check_hlds__simplify__format_call__CurId_8)), &check_hlds__simplify__format_call__conv0_ConjMapPrime_26);
        }
#line 874 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 874 "format_call.m"
          {
#line 874 "format_call.m"
            check_hlds__simplify__format_call__ConjMapPrime_26 = ((MR_Word) check_hlds__simplify__format_call__conv0_ConjMapPrime_26);
#line 874 "format_call.m"
            check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 874 "format_call.m"
          }
#line 876 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 875 "format_call.m"
          check_hlds__simplify__format_call__ConjMap_11 = check_hlds__simplify__format_call__ConjMapPrime_26;
#line 876 "format_call.m"
        else
#line 877 "format_call.m"
          {
#line 877 "format_call.m"
            MR_Word check_hlds__simplify__format_call__TypeInfo_14_33 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 877 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_27_27;
#line 877 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_28_28;
#line 877 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_29_29;
#line 877 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_30_30;

#line 877 "format_call.m"
            {
#line 877 "format_call.m"
              check_hlds__simplify__format_call__V_27_27 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_33, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 877 "format_call.m"
            {
#line 877 "format_call.m"
              check_hlds__simplify__format_call__V_28_28 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_33, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0);
            }
#line 877 "format_call.m"
            {
#line 877 "format_call.m"
              check_hlds__simplify__format_call__V_29_29 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_33, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0);
            }
#line 877 "format_call.m"
            {
#line 877 "format_call.m"
              check_hlds__simplify__format_call__V_30_30 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeInfo_14_33, check_hlds__simplify__format_call__TypeInfo_14_33);
            }
#line 877 "format_call.m"
            {
#line 877 "format_call.m"
              check_hlds__simplify__format_call__ConjMap_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 877 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_27_27));
#line 877 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_28_28));
#line 877 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_29_29));
#line 877 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, 3) = ((MR_Box) (check_hlds__simplify__format_call__V_30_30));
#line 877 "format_call.m"
            }
#line 877 "format_call.m"
          }
#line 519 "format_call.m"
        check_hlds__simplify__format_call__StringMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 0)));
#line 519 "format_call.m"
        check_hlds__simplify__format_call__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 1)));
#line 519 "format_call.m"
        check_hlds__simplify__format_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 2)));
#line 519 "format_call.m"
        check_hlds__simplify__format_call__EqvMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__ConjMap_11, (MR_Integer) 3)));
#line 12770 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeInfo_19_19 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 520 "format_call.m"
        {
#line 520 "format_call.m"
          check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeInfo_19_19, check_hlds__simplify__format_call__TypeInfo_19_19, check_hlds__simplify__format_call__EqvMap_15, ((MR_Box) (check_hlds__simplify__format_call__StringVar_9)), &check_hlds__simplify__format_call__conv1_EqvVar_16);
        }
#line 520 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 520 "format_call.m"
          {
#line 520 "format_call.m"
            check_hlds__simplify__format_call__EqvVar_16 = ((MR_Word) check_hlds__simplify__format_call__conv1_EqvVar_16);
#line 520 "format_call.m"
            check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 520 "format_call.m"
          }
#line 522 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 521 "format_call.m"
          {
#line 521 "format_call.m"
            /* direct tailcall eliminated */
#line 521 "format_call.m"
            {
#line 521 "format_call.m"
              MR_Word check_hlds__simplify__format_call__StringVar__tmp_copy_9 = check_hlds__simplify__format_call__EqvVar_16;

#line 521 "format_call.m"
              check_hlds__simplify__format_call__StringVar_9 = check_hlds__simplify__format_call__StringVar__tmp_copy_9;
#line 521 "format_call.m"
            }
#line 521 "format_call.m"
            continue;
#line 521 "format_call.m"
          }
#line 522 "format_call.m"
        else
#line 524 "format_call.m"
          {
#line 524 "format_call.m"
            MR_String check_hlds__simplify__format_call__String_17;
#line 522 "format_call.m"
            MR_Box check_hlds__simplify__format_call__conv2_String_17;

#line 522 "format_call.m"
            {
#line 522 "format_call.m"
              check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__simplify__format_call__StringMap_12, ((MR_Box) (check_hlds__simplify__format_call__StringVar_9)), &check_hlds__simplify__format_call__conv2_String_17);
            }
#line 522 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 522 "format_call.m"
              {
#line 522 "format_call.m"
                check_hlds__simplify__format_call__String_17 = ((MR_String) check_hlds__simplify__format_call__conv2_String_17);
#line 522 "format_call.m"
                check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 522 "format_call.m"
              }
#line 524 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 523 "format_call.m"
              {
#line 523 "format_call.m"
                MR_Word base;
#line 523 "format_call.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 523 "format_call.m"
                *check_hlds__simplify__format_call__MaybeString_10 = base;
#line 523 "format_call.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__String_17));
#line 523 "format_call.m"
              }
#line 524 "format_call.m"
            else
#line 526 "format_call.m"
              {
#line 526 "format_call.m"
                MR_Word check_hlds__simplify__format_call__PredId_18;
#line 524 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 524 "format_call.m"
                MR_Box check_hlds__simplify__format_call__conv3_PredId_18;

#line 524 "format_call.m"
                {
#line 524 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__simplify__format_call__TypeCtorInfo_22_22, check_hlds__simplify__format_call__TypeCtorInfo_22_22, check_hlds__simplify__format_call__PredMap_7, ((MR_Box) (check_hlds__simplify__format_call__CurId_8)), &check_hlds__simplify__format_call__conv3_PredId_18);
                }
#line 524 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 524 "format_call.m"
                  {
#line 524 "format_call.m"
                    check_hlds__simplify__format_call__PredId_18 = ((MR_Word) check_hlds__simplify__format_call__conv3_PredId_18);
#line 524 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 524 "format_call.m"
                  }
#line 526 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 525 "format_call.m"
                  {
#line 525 "format_call.m"
                    /* direct tailcall eliminated */
#line 525 "format_call.m"
                    {
#line 525 "format_call.m"
                      MR_Word check_hlds__simplify__format_call__CurId__tmp_copy_8 = check_hlds__simplify__format_call__PredId_18;

#line 525 "format_call.m"
                      check_hlds__simplify__format_call__CurId_8 = check_hlds__simplify__format_call__CurId__tmp_copy_8;
#line 525 "format_call.m"
                    }
#line 525 "format_call.m"
                    continue;
#line 525 "format_call.m"
                  }
#line 526 "format_call.m"
                else
#line 527 "format_call.m"
                  *check_hlds__simplify__format_call__MaybeString_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 526 "format_call.m"
              }
#line 524 "format_call.m"
          }
#line 517 "format_call.m"
      }
#line 517 "format_call.m"
      break;
#line 517 "format_call.m"
    }
#line 514 "format_call.m"
}

#line 464 "format_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__format_call__try_create_replacement_goal_13_p_0_1(
#line 464 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 464 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1)
#line 464 "format_call.m"
{
#line 464 "format_call.m"
  {
#line 464 "format_call.m"
    MR_Box check_hlds__simplify__format_call__wrapper_arg_2;
#line 464 "format_call.m"
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;
#line 464 "format_call.m"
    MR_Word check_hlds__simplify__format_call__conv0_VarToPrint_3;

#line 464 "format_call.m"
    {
#line 464 "format_call.m"
      check_hlds__simplify__format_call__conv0_VarToPrint_3 = check_hlds__simplify__format_call__project_var_to_print_1_f_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1));
    }
#line 464 "format_call.m"
    check_hlds__simplify__format_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__format_call__conv0_VarToPrint_3));
#line 464 "format_call.m"
    return check_hlds__simplify__format_call__wrapper_arg_2;
#line 464 "format_call.m"
  }
#line 464 "format_call.m"
}

#line 454 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__try_create_replacement_goal_13_p_0(
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__GoalId_15,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Kind_16,
#line 454 "format_call.m"
  MR_String check_hlds__simplify__format_call__FormatString_17,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__StringVar_18,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ValuesToDeleteVars_19,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__WhatToPrints_20,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_38,
#line 454 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_39,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_40,
#line 454 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_41,
#line 454 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_42,
#line 454 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_43)
#line 454 "format_call.m"
{
#line 462 "format_call.m"
  {
#line 462 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 462 "format_call.m"
    MR_Word check_hlds__simplify__format_call__FormatStringChars_24;
#line 462 "format_call.m"
    MR_Word check_hlds__simplify__format_call__VarsToPrint_25;

#line 463 "format_call.m"
    {
#line 463 "format_call.m"
      mercury__string__to_char_list_2_p_0(check_hlds__simplify__format_call__FormatString_17, &check_hlds__simplify__format_call__FormatStringChars_24);
    }
#line 464 "format_call.m"
    {
#line 464 "format_call.m"
      check_hlds__simplify__format_call__VarsToPrint_25 = mercury__list__map_2_f_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0, (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[8], check_hlds__simplify__format_call__WhatToPrints_20);
    }
#line 486 "format_call.m"
    if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Kind_16)) == (MR_mktag((MR_Integer) 1))))
#line 493 "format_call.m"
      {
#line 493 "format_call.m"
        MR_Word check_hlds__simplify__format_call__IOInVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Kind_16, (MR_Integer) 0)));
#line 493 "format_call.m"
        MR_Word check_hlds__simplify__format_call__IOOutVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Kind_16, (MR_Integer) 1)));
#line 503 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_45_45;
#line 503 "format_call.m"
        MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_46_46;
#line 503 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ReplacementGoal_59;

#line 495 "format_call.m"
        {
#line 495 "format_call.m"
          check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__create_io_format_replacement_11_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__FormatStringChars_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__simplify__format_call__IOInVar_30, check_hlds__simplify__format_call__IOOutVar_31, check_hlds__simplify__format_call__VarsToPrint_25, &check_hlds__simplify__format_call__ReplacementGoal_59, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_40, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_45_45, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_42, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_46_46);
        }
#line 503 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 499 "format_call.m"
          {
#line 499 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_47_47;
#line 499 "format_call.m"
            MR_Word check_hlds__simplify__format_call__AllToDeleteVars_57;
#line 499 "format_call.m"
            MR_Word check_hlds__simplify__format_call__FCOptGoalInfo_58;

#line 499 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_43 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_46_46;
#line 499 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_41 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_45_45;
#line 499 "format_call.m"
            {
#line 499 "format_call.m"
              check_hlds__simplify__format_call__AllToDeleteVars_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__AllToDeleteVars_57, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringVar_18));
#line 499 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__AllToDeleteVars_57, 1) = ((MR_Box) (check_hlds__simplify__format_call__ValuesToDeleteVars_19));
#line 499 "format_call.m"
            }
#line 501 "format_call.m"
            {
#line 501 "format_call.m"
              check_hlds__simplify__format_call__V_47_47 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__AllToDeleteVars_57);
            }
#line 500 "format_call.m"
            {
#line 500 "format_call.m"
              check_hlds__simplify__format_call__FCOptGoalInfo_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FCOptGoalInfo_58, 0) = ((MR_Box) (check_hlds__simplify__format_call__ReplacementGoal_59));
#line 500 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FCOptGoalInfo_58, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_47_47));
#line 500 "format_call.m"
            }
#line 502 "format_call.m"
            {
#line 502 "format_call.m"
              mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0, ((MR_Box) (check_hlds__simplify__format_call__GoalId_15)), ((MR_Box) (check_hlds__simplify__format_call__FCOptGoalInfo_58)), check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_38, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_39);
#line 502 "format_call.m"
              return;
            }
#line 499 "format_call.m"
          }
#line 503 "format_call.m"
        else
#line 507 "format_call.m"
          {
#line 507 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_43 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_42;
#line 507 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_41 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_40;
#line 507 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_39 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_38;
#line 507 "format_call.m"
          }
#line 493 "format_call.m"
      }
#line 486 "format_call.m"
    else
#line 486 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Kind_16)) == (MR_mktag((MR_Integer) 2))))
#line 493 "format_call.m"
        {
#line 493 "format_call.m"
          MR_Word check_hlds__simplify__format_call__StreamVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Kind_16, (MR_Integer) 0)));
#line 493 "format_call.m"
          MR_Word check_hlds__simplify__format_call__IOInVar_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Kind_16, (MR_Integer) 1)));
#line 493 "format_call.m"
          MR_Word check_hlds__simplify__format_call__IOOutVar_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Kind_16, (MR_Integer) 2)));
#line 493 "format_call.m"
          MR_Word check_hlds__simplify__format_call__MaybeStreamVar_92;
#line 503 "format_call.m"
          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_45_81;
#line 503 "format_call.m"
          MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_46_82;
#line 503 "format_call.m"
          MR_Word check_hlds__simplify__format_call__ReplacementGoal_86;

#line 492 "format_call.m"
          {
#line 492 "format_call.m"
            check_hlds__simplify__format_call__MaybeStreamVar_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 492 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeStreamVar_92, 0) = ((MR_Box) (check_hlds__simplify__format_call__StreamVar_33));
#line 492 "format_call.m"
          }
#line 495 "format_call.m"
          {
#line 495 "format_call.m"
            check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__create_io_format_replacement_11_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__FormatStringChars_24, check_hlds__simplify__format_call__MaybeStreamVar_92, check_hlds__simplify__format_call__IOInVar_90, check_hlds__simplify__format_call__IOOutVar_91, check_hlds__simplify__format_call__VarsToPrint_25, &check_hlds__simplify__format_call__ReplacementGoal_86, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_40, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_45_81, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_42, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_46_82);
          }
#line 503 "format_call.m"
          if (check_hlds__simplify__format_call__succeeded)
#line 499 "format_call.m"
            {
#line 499 "format_call.m"
              MR_Word check_hlds__simplify__format_call__V_75_75;
#line 499 "format_call.m"
              MR_Word check_hlds__simplify__format_call__AllToDeleteVars_76;
#line 499 "format_call.m"
              MR_Word check_hlds__simplify__format_call__FCOptGoalInfo_77;

#line 499 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_43 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_46_82;
#line 499 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_41 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_45_81;
#line 499 "format_call.m"
              {
#line 499 "format_call.m"
                check_hlds__simplify__format_call__AllToDeleteVars_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__AllToDeleteVars_76, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringVar_18));
#line 499 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__AllToDeleteVars_76, 1) = ((MR_Box) (check_hlds__simplify__format_call__ValuesToDeleteVars_19));
#line 499 "format_call.m"
              }
#line 501 "format_call.m"
              {
#line 501 "format_call.m"
                check_hlds__simplify__format_call__V_75_75 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__AllToDeleteVars_76);
              }
#line 500 "format_call.m"
              {
#line 500 "format_call.m"
                check_hlds__simplify__format_call__FCOptGoalInfo_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 500 "format_call.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FCOptGoalInfo_77, 0) = ((MR_Box) (check_hlds__simplify__format_call__ReplacementGoal_86));
#line 500 "format_call.m"
                MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FCOptGoalInfo_77, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_75_75));
#line 500 "format_call.m"
              }
#line 502 "format_call.m"
              {
#line 502 "format_call.m"
                mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0, ((MR_Box) (check_hlds__simplify__format_call__GoalId_15)), ((MR_Box) (check_hlds__simplify__format_call__FCOptGoalInfo_77)), check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_38, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_39);
#line 502 "format_call.m"
                return;
              }
#line 499 "format_call.m"
            }
#line 503 "format_call.m"
          else
#line 507 "format_call.m"
            {
#line 507 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_43 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_42;
#line 507 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_41 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_40;
#line 507 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_39 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_38;
#line 507 "format_call.m"
            }
#line 493 "format_call.m"
        }
#line 486 "format_call.m"
      else
#line 486 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Kind_16)) == (MR_mktag((MR_Integer) 3))))
#line 510 "format_call.m"
          {
#line 510 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_39 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_38;
#line 510 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_41 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_40;
#line 510 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_43 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_42;
#line 510 "format_call.m"
          }
#line 486 "format_call.m"
        else
#line 470 "format_call.m"
          {
#line 470 "format_call.m"
            MR_Word check_hlds__simplify__format_call__ResultVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Kind_16, (MR_Integer) 0)));
#line 480 "format_call.m"
            MR_Word check_hlds__simplify__format_call__ReplacementGoal_27;
#line 480 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_51_51;
#line 480 "format_call.m"
            MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_52_52;

#line 472 "format_call.m"
            {
#line 472 "format_call.m"
              check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__create_string_format_replacement_9_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__FormatStringChars_24, check_hlds__simplify__format_call__ResultVar_26, check_hlds__simplify__format_call__VarsToPrint_25, &check_hlds__simplify__format_call__ReplacementGoal_27, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_40, &check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_51_51, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_42, &check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_52_52);
            }
#line 480 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 476 "format_call.m"
              {
#line 476 "format_call.m"
                MR_Word check_hlds__simplify__format_call__AllToDeleteVars_28;
#line 476 "format_call.m"
                MR_Word check_hlds__simplify__format_call__FCOptGoalInfo_29;
#line 476 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_53_53;

#line 476 "format_call.m"
                *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_43 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_52_52;
#line 476 "format_call.m"
                *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_41 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_51_51;
#line 476 "format_call.m"
                {
#line 476 "format_call.m"
                  check_hlds__simplify__format_call__AllToDeleteVars_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__AllToDeleteVars_28, 0) = ((MR_Box) (check_hlds__simplify__format_call__StringVar_18));
#line 476 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__AllToDeleteVars_28, 1) = ((MR_Box) (check_hlds__simplify__format_call__ValuesToDeleteVars_19));
#line 476 "format_call.m"
                }
#line 478 "format_call.m"
                {
#line 478 "format_call.m"
                  check_hlds__simplify__format_call__V_53_53 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__simplify__format_call__AllToDeleteVars_28);
                }
#line 477 "format_call.m"
                {
#line 477 "format_call.m"
                  check_hlds__simplify__format_call__FCOptGoalInfo_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 477 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FCOptGoalInfo_29, 0) = ((MR_Box) (check_hlds__simplify__format_call__ReplacementGoal_27));
#line 477 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FCOptGoalInfo_29, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_53_53));
#line 477 "format_call.m"
                }
#line 479 "format_call.m"
                {
#line 479 "format_call.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0, ((MR_Box) (check_hlds__simplify__format_call__GoalId_15)), ((MR_Box) (check_hlds__simplify__format_call__FCOptGoalInfo_29)), check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_38, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_39);
#line 479 "format_call.m"
                  return;
                }
#line 476 "format_call.m"
              }
#line 480 "format_call.m"
            else
#line 484 "format_call.m"
              {
#line 484 "format_call.m"
                *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_43 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_42;
#line 484 "format_call.m"
                *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_41 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_40;
#line 484 "format_call.m"
                *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_39 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_38;
#line 484 "format_call.m"
              }
#line 470 "format_call.m"
          }
#line 462 "format_call.m"
  }
#line 454 "format_call.m"
}

#line 407 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_13_p_0_3(
#line 407 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 407 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_1)
#line 407 "format_call.m"
{
#line 407 "format_call.m"
  {
#line 407 "format_call.m"
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;
#line 407 "format_call.m"
    MR_String check_hlds__simplify__format_call__conv2_HeadVar__3_3;

#line 407 "format_call.m"
    {
#line 407 "format_call.m"
      mercury__string__format_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 4))), &check_hlds__simplify__format_call__conv2_HeadVar__3_3);
    }
#line 407 "format_call.m"
    *check_hlds__simplify__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__simplify__format_call__conv2_HeadVar__3_3));
#line 407 "format_call.m"
  }
#line 407 "format_call.m"
}

#line 405 "format_call.m"
static MR_Box MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_13_p_0_2(
#line 405 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 405 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1)
#line 405 "format_call.m"
{
#line 405 "format_call.m"
  {
#line 405 "format_call.m"
    MR_Box check_hlds__simplify__format_call__wrapper_arg_2;
#line 405 "format_call.m"
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;
#line 405 "format_call.m"
    MR_Word check_hlds__simplify__format_call__conv1_DummyToPrint_4;

#line 405 "format_call.m"
    {
#line 405 "format_call.m"
      check_hlds__simplify__format_call__conv1_DummyToPrint_4 = check_hlds__simplify__format_call__project_dummy_to_print_1_f_0(((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1));
    }
#line 405 "format_call.m"
    check_hlds__simplify__format_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__format_call__conv1_DummyToPrint_4));
#line 405 "format_call.m"
    return check_hlds__simplify__format_call__wrapper_arg_2;
#line 405 "format_call.m"
  }
#line 405 "format_call.m"
}

#line 379 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_13_p_0_1(
#line 379 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 379 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 379 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_2)
#line 379 "format_call.m"
{
#line 379 "format_call.m"
  {
#line 379 "format_call.m"
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;
#line 379 "format_call.m"
    MR_Word check_hlds__simplify__format_call__conv0_MaybeResult_10;

#line 379 "format_call.m"
    {
#line 379 "format_call.m"
      check_hlds__simplify__format_call__follow_list_value_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), &check_hlds__simplify__format_call__conv0_MaybeResult_10);
    }
#line 379 "format_call.m"
    *check_hlds__simplify__format_call__wrapper_arg_2 = ((MR_Box) (check_hlds__simplify__format_call__conv0_MaybeResult_10));
#line 379 "format_call.m"
  }
#line 379 "format_call.m"
}

#line 342 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__check_format_call_site_13_p_0(
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_14,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__OptFormatCalls_15,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ConjMaps_16,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__PredMap_17,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__FormatCallSite_18,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_67,
#line 342 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_68,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Specs_0_69,
#line 342 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_Specs_70,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_71,
#line 342 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_72,
#line 342 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_73,
#line 342 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_74)
#line 342 "format_call.m"
{
#line 349 "format_call.m"
  {
#line 349 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 349 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 0)));
#line 349 "format_call.m"
    MR_Word check_hlds__simplify__format_call__StringVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 1)));
#line 349 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ValuesVar_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 2)));
#line 349 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Kind_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 3)));
#line 349 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 4)));
#line 349 "format_call.m"
    MR_String check_hlds__simplify__format_call__Name_28 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 5)));
#line 349 "format_call.m"
    MR_Integer check_hlds__simplify__format_call__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 6)));
#line 349 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 7)));
#line 349 "format_call.m"
    MR_Word check_hlds__simplify__format_call__CurId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__FormatCallSite_18, (MR_Integer) 8)));
#line 349 "format_call.m"
    MR_Word check_hlds__simplify__format_call__SymName_32;
#line 349 "format_call.m"
    MR_Word check_hlds__simplify__format_call__MaybeFormatStringVar_35;
#line 349 "format_call.m"
    MR_Word check_hlds__simplify__format_call__MaybeSkeletonInfo_46;
#line 349 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Specs_102_102;
#line 349 "format_call.m"
    MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_Specs_132_132;
#line 360 "format_call.m"
    MR_String check_hlds__simplify__format_call__FormatString0_34;
#line 356 "format_call.m"
    MR_Word check_hlds__simplify__format_call__MaybeFormatString0_33;
#line 385 "format_call.m"
    MR_Word check_hlds__simplify__format_call__PolytypeVars0_41;
#line 385 "format_call.m"
    MR_Word check_hlds__simplify__format_call__SkeletonVars0_42;
#line 385 "format_call.m"
    MR_Word check_hlds__simplify__format_call__WhatToPrints0_44;
#line 377 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeInfo_173_173;
#line 377 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeInfo_174_174;
#line 377 "format_call.m"
    MR_Word check_hlds__simplify__format_call__SkeletonResult_40;
#line 377 "format_call.m"
    MR_Word check_hlds__simplify__format_call__WhatToPrintMaybes0_43;
#line 377 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_103_103;
#line 449 "format_call.m"
    MR_String check_hlds__simplify__format_call__FormatString_51;
#line 449 "format_call.m"
    MR_Word check_hlds__simplify__format_call__StringVar1_52;
#line 449 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ValuesToDeleteVars_53;
#line 449 "format_call.m"
    MR_Word check_hlds__simplify__format_call__WhatToPrints_54;
#line 402 "format_call.m"
    MR_Tuple check_hlds__simplify__format_call__V_133_133;
#line 402 "format_call.m"
    MR_Tuple check_hlds__simplify__format_call__V_134_134;

#line 352 "format_call.m"
    {
#line 352 "format_call.m"
      check_hlds__simplify__format_call__SymName_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SymName_32, 0) = ((MR_Box) (check_hlds__simplify__format_call__ModuleName_27));
#line 352 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SymName_32, 1) = ((MR_Box) (check_hlds__simplify__format_call__Name_28));
#line 352 "format_call.m"
    }
#line 355 "format_call.m"
    {
#line 355 "format_call.m"
      check_hlds__simplify__format_call__follow_format_string_5_p_0(check_hlds__simplify__format_call__ConjMaps_16, check_hlds__simplify__format_call__PredMap_17, check_hlds__simplify__format_call__CurId_31, check_hlds__simplify__format_call__StringVar_24, &check_hlds__simplify__format_call__MaybeFormatString0_33);
    }
#line 357 "format_call.m"
    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__MaybeFormatString0_33)) == (MR_mktag((MR_Integer) 1)));
#line 357 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 357 "format_call.m"
      {
#line 357 "format_call.m"
        check_hlds__simplify__format_call__FormatString0_34 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeFormatString0_33, (MR_Integer) 0)));
#line 359 "format_call.m"
        {
#line 359 "format_call.m"
          MR_Tuple check_hlds__simplify__format_call__V_75_75;

#line 359 "format_call.m"
          {
#line 359 "format_call.m"
            check_hlds__simplify__format_call__V_75_75 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 359 "format_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_75_75, 0) = ((MR_Box) (check_hlds__simplify__format_call__FormatString0_34));
#line 359 "format_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_75_75, 1) = ((MR_Box) (check_hlds__simplify__format_call__StringVar_24));
#line 359 "format_call.m"
          }
#line 359 "format_call.m"
          {
#line 359 "format_call.m"
            check_hlds__simplify__format_call__MaybeFormatStringVar_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 359 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeFormatStringVar_35, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_75_75));
#line 359 "format_call.m"
          }
#line 359 "format_call.m"
          check_hlds__simplify__format_call__STATE_VARIABLE_Specs_102_102 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_0_69;
#line 359 "format_call.m"
        }
#line 357 "format_call.m"
      }
#line 357 "format_call.m"
    else
#line 361 "format_call.m"
      {
#line 361 "format_call.m"
        MR_Word check_hlds__simplify__format_call__UnknownFormatPieces_36;
#line 361 "format_call.m"
        MR_Word check_hlds__simplify__format_call__UnknownFormatMsg_38;
#line 361 "format_call.m"
        MR_Word check_hlds__simplify__format_call__UnknownFormatSpec_39;
#line 361 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_78_78;
#line 361 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_79_79;
#line 361 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_80_80;
#line 361 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_91_91;
#line 361 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_92_92;
#line 361 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_95_95;
#line 361 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_96_96;
#line 361 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_100_100;

#line 361 "format_call.m"
        check_hlds__simplify__format_call__MaybeFormatStringVar_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 363 "format_call.m"
        {
#line 363 "format_call.m"
          check_hlds__simplify__format_call__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 363 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_80_80, 0) = ((MR_Box) (check_hlds__simplify__format_call__SymName_32));
#line 363 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_80_80, 1) = ((MR_Box) (check_hlds__simplify__format_call__Arity_29));
#line 363 "format_call.m"
        }
#line 363 "format_call.m"
        {
#line 363 "format_call.m"
          check_hlds__simplify__format_call__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "format_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 363 "format_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__V_79_79, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_80_80));
#line 363 "format_call.m"
        }
#line 363 "format_call.m"
        {
#line 363 "format_call.m"
          check_hlds__simplify__format_call__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_78_78, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_79_79));
#line 363 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[8])));
#line 363 "format_call.m"
        }
#line 362 "format_call.m"
        {
#line 362 "format_call.m"
          check_hlds__simplify__format_call__UnknownFormatPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__UnknownFormatPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[10])));
#line 362 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__UnknownFormatPieces_36, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_78_78));
#line 362 "format_call.m"
        }
#line 369 "format_call.m"
        {
#line 369 "format_call.m"
          check_hlds__simplify__format_call__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 369 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_96_96, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatPieces_36));
#line 369 "format_call.m"
        }
#line 369 "format_call.m"
        {
#line 369 "format_call.m"
          check_hlds__simplify__format_call__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_95_95, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_96_96));
#line 369 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "format_call.m"
        }
#line 368 "format_call.m"
        {
#line 368 "format_call.m"
          check_hlds__simplify__format_call__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_92_92, 0) = ((MR_Box) (((MR_Integer) 33 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 368 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_92_92, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_95_95));
#line 368 "format_call.m"
        }
#line 369 "format_call.m"
        {
#line 369 "format_call.m"
          check_hlds__simplify__format_call__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_91_91, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_92_92));
#line 369 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "format_call.m"
        }
#line 367 "format_call.m"
        {
#line 367 "format_call.m"
          check_hlds__simplify__format_call__UnknownFormatMsg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 367 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatMsg_38, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_30));
#line 367 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatMsg_38, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_91_91));
#line 367 "format_call.m"
        }
#line 371 "format_call.m"
        {
#line 371 "format_call.m"
          check_hlds__simplify__format_call__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_100_100, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatMsg_38));
#line 371 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 371 "format_call.m"
        }
#line 370 "format_call.m"
        {
#line 370 "format_call.m"
          check_hlds__simplify__format_call__UnknownFormatSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 370 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_3[0])));
#line 370 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 370 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatSpec_39, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_100_100));
#line 370 "format_call.m"
        }
#line 372 "format_call.m"
        {
#line 372 "format_call.m"
          check_hlds__simplify__format_call__STATE_VARIABLE_Specs_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_Specs_102_102, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatSpec_39));
#line 372 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_Specs_102_102, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_Specs_0_69));
#line 372 "format_call.m"
        }
#line 361 "format_call.m"
      }
#line 376 "format_call.m"
    {
#line 376 "format_call.m"
      check_hlds__simplify__format_call__follow_list_skeleton_5_p_0(check_hlds__simplify__format_call__ConjMaps_16, check_hlds__simplify__format_call__PredMap_17, check_hlds__simplify__format_call__CurId_31, check_hlds__simplify__format_call__ValuesVar_25, &check_hlds__simplify__format_call__SkeletonResult_40);
    }
#line 378 "format_call.m"
    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__SkeletonResult_40)) == (MR_mktag((MR_Integer) 1)));
#line 378 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 378 "format_call.m"
      {
#line 378 "format_call.m"
        check_hlds__simplify__format_call__PolytypeVars0_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SkeletonResult_40, (MR_Integer) 0)));
#line 378 "format_call.m"
        check_hlds__simplify__format_call__SkeletonVars0_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__SkeletonResult_40, (MR_Integer) 1)));
#line 13672 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeInfo_173_173 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2];
#line 13674 "check_hlds.simplify.format_call.c"
        check_hlds__simplify__format_call__TypeInfo_174_174 = (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[3];
#line 379 "format_call.m"
        {
#line 379 "format_call.m"
          check_hlds__simplify__format_call__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 379 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_103_103, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_6[0]));
#line 379 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_103_103, 1) = ((MR_Box) (check_hlds__simplify__format_call__check_format_call_site_13_p_0_1));
#line 379 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 379 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_103_103, 3) = ((MR_Box) (check_hlds__simplify__format_call__ConjMaps_16));
#line 379 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_103_103, 4) = ((MR_Box) (check_hlds__simplify__format_call__PredMap_17));
#line 379 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_103_103, 5) = ((MR_Box) (check_hlds__simplify__format_call__CurId_31));
#line 379 "format_call.m"
        }
#line 379 "format_call.m"
        {
#line 379 "format_call.m"
          mercury__list__map_3_p_0(check_hlds__simplify__format_call__TypeInfo_173_173, check_hlds__simplify__format_call__TypeInfo_174_174, check_hlds__simplify__format_call__V_103_103, check_hlds__simplify__format_call__PolytypeVars0_41, &check_hlds__simplify__format_call__WhatToPrintMaybes0_43);
        }
#line 381 "format_call.m"
        {
#line 381 "format_call.m"
          check_hlds__simplify__format_call__succeeded = check_hlds__simplify__format_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_p_0(check_hlds__simplify__format_call__WhatToPrintMaybes0_43, &check_hlds__simplify__format_call__WhatToPrints0_44);
        }
#line 378 "format_call.m"
      }
#line 385 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 383 "format_call.m"
      {
#line 383 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ToDeleteVars0_45;
#line 383 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_104_104;
#line 383 "format_call.m"
        MR_Tuple check_hlds__simplify__format_call__V_105_105;

#line 383 "format_call.m"
        {
#line 383 "format_call.m"
          check_hlds__simplify__format_call__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_104_104, 0) = ((MR_Box) (check_hlds__simplify__format_call__ValuesVar_25));
#line 383 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_104_104, 1) = ((MR_Box) (check_hlds__simplify__format_call__SkeletonVars0_42));
#line 383 "format_call.m"
        }
#line 383 "format_call.m"
        {
#line 383 "format_call.m"
          check_hlds__simplify__format_call__ToDeleteVars0_45 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__simplify__format_call_scalar_common_2[2], check_hlds__simplify__format_call__V_104_104, check_hlds__simplify__format_call__PolytypeVars0_41);
        }
#line 384 "format_call.m"
        {
#line 384 "format_call.m"
          check_hlds__simplify__format_call__V_105_105 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 384 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_105_105, 0) = ((MR_Box) (check_hlds__simplify__format_call__ToDeleteVars0_45));
#line 384 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_105_105, 1) = ((MR_Box) (check_hlds__simplify__format_call__WhatToPrints0_44));
#line 384 "format_call.m"
        }
#line 384 "format_call.m"
        {
#line 384 "format_call.m"
          check_hlds__simplify__format_call__MaybeSkeletonInfo_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 384 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeSkeletonInfo_46, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_105_105));
#line 384 "format_call.m"
        }
#line 384 "format_call.m"
        check_hlds__simplify__format_call__STATE_VARIABLE_Specs_132_132 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_102_102;
#line 383 "format_call.m"
      }
#line 385 "format_call.m"
    else
#line 386 "format_call.m"
      {
#line 386 "format_call.m"
        MR_Word check_hlds__simplify__format_call__UnknownFormatValuesPieces_47;
#line 386 "format_call.m"
        MR_Word check_hlds__simplify__format_call__UnknownFormatValuesMsg_49;
#line 386 "format_call.m"
        MR_Word check_hlds__simplify__format_call__UnknownFormatValuesSpec_50;
#line 386 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_108_108;
#line 386 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_109_109;
#line 386 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_110_110;
#line 386 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_121_121;
#line 386 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_122_122;
#line 386 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_125_125;
#line 386 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_126_126;
#line 386 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_130_130;

#line 386 "format_call.m"
        check_hlds__simplify__format_call__MaybeSkeletonInfo_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 389 "format_call.m"
        {
#line 389 "format_call.m"
          check_hlds__simplify__format_call__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 389 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_110_110, 0) = ((MR_Box) (check_hlds__simplify__format_call__SymName_32));
#line 389 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_110_110, 1) = ((MR_Box) (check_hlds__simplify__format_call__Arity_29));
#line 389 "format_call.m"
        }
#line 389 "format_call.m"
        {
#line 389 "format_call.m"
          check_hlds__simplify__format_call__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "format_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 389 "format_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__V_109_109, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_110_110));
#line 389 "format_call.m"
        }
#line 389 "format_call.m"
        {
#line 389 "format_call.m"
          check_hlds__simplify__format_call__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_108_108, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_109_109));
#line 389 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[8])));
#line 389 "format_call.m"
        }
#line 388 "format_call.m"
        {
#line 388 "format_call.m"
          check_hlds__simplify__format_call__UnknownFormatValuesPieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__UnknownFormatValuesPieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[11])));
#line 388 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__UnknownFormatValuesPieces_47, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_108_108));
#line 388 "format_call.m"
        }
#line 395 "format_call.m"
        {
#line 395 "format_call.m"
          check_hlds__simplify__format_call__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 395 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_126_126, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatValuesPieces_47));
#line 395 "format_call.m"
        }
#line 395 "format_call.m"
        {
#line 395 "format_call.m"
          check_hlds__simplify__format_call__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_125_125, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_126_126));
#line 395 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "format_call.m"
        }
#line 394 "format_call.m"
        {
#line 394 "format_call.m"
          check_hlds__simplify__format_call__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_122_122, 0) = ((MR_Box) (((MR_Integer) 33 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 394 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_122_122, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_125_125));
#line 394 "format_call.m"
        }
#line 395 "format_call.m"
        {
#line 395 "format_call.m"
          check_hlds__simplify__format_call__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_121_121, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_122_122));
#line 395 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 395 "format_call.m"
        }
#line 393 "format_call.m"
        {
#line 393 "format_call.m"
          check_hlds__simplify__format_call__UnknownFormatValuesMsg_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 393 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatValuesMsg_49, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_30));
#line 393 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatValuesMsg_49, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_121_121));
#line 393 "format_call.m"
        }
#line 397 "format_call.m"
        {
#line 397 "format_call.m"
          check_hlds__simplify__format_call__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_130_130, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatValuesMsg_49));
#line 397 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 397 "format_call.m"
        }
#line 396 "format_call.m"
        {
#line 396 "format_call.m"
          check_hlds__simplify__format_call__UnknownFormatValuesSpec_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 396 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatValuesSpec_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_3[0])));
#line 396 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatValuesSpec_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 396 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__UnknownFormatValuesSpec_50, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_130_130));
#line 396 "format_call.m"
        }
#line 398 "format_call.m"
        {
#line 398 "format_call.m"
          check_hlds__simplify__format_call__STATE_VARIABLE_Specs_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_Specs_132_132, 0) = ((MR_Box) (check_hlds__simplify__format_call__UnknownFormatValuesSpec_50));
#line 398 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__STATE_VARIABLE_Specs_132_132, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_Specs_102_102));
#line 398 "format_call.m"
        }
#line 386 "format_call.m"
      }
#line 402 "format_call.m"
    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__MaybeFormatStringVar_35)) == (MR_mktag((MR_Integer) 1)));
#line 402 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 402 "format_call.m"
      {
#line 402 "format_call.m"
        check_hlds__simplify__format_call__V_133_133 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeFormatStringVar_35, (MR_Integer) 0)));
#line 402 "format_call.m"
        check_hlds__simplify__format_call__FormatString_51 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_133_133, (MR_Integer) 0)));
#line 402 "format_call.m"
        check_hlds__simplify__format_call__StringVar1_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_133_133, (MR_Integer) 1)));
#line 403 "format_call.m"
        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__MaybeSkeletonInfo_46)) == (MR_mktag((MR_Integer) 1)));
#line 403 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 403 "format_call.m"
          {
#line 403 "format_call.m"
            check_hlds__simplify__format_call__V_134_134 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__MaybeSkeletonInfo_46, (MR_Integer) 0)));
#line 403 "format_call.m"
            check_hlds__simplify__format_call__ValuesToDeleteVars_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_134_134, (MR_Integer) 0)));
#line 403 "format_call.m"
            check_hlds__simplify__format_call__WhatToPrints_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_134_134, (MR_Integer) 1)));
#line 403 "format_call.m"
            check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 403 "format_call.m"
          }
#line 402 "format_call.m"
      }
#line 449 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 405 "format_call.m"
      {
#line 405 "format_call.m"
        MR_Word check_hlds__simplify__format_call__DummiesToPrint_55;
#line 405 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Result_56;
#line 407 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_136_136;

#line 405 "format_call.m"
        {
#line 405 "format_call.m"
          check_hlds__simplify__format_call__DummiesToPrint_55 = mercury__list__map_2_f_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0, (MR_Word) &mercury__string__string__type_ctor_info_poly_type_0, (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[7], check_hlds__simplify__format_call__WhatToPrints_54);
        }
#line 407 "format_call.m"
        {
#line 407 "format_call.m"
          check_hlds__simplify__format_call__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 407 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_136_136, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_8[0]));
#line 407 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_136_136, 1) = ((MR_Box) (check_hlds__simplify__format_call__check_format_call_site_13_p_0_3));
#line 407 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_136_136, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 407 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_136_136, 3) = ((MR_Box) (check_hlds__simplify__format_call__FormatString_51));
#line 407 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_136_136, 4) = ((MR_Box) (check_hlds__simplify__format_call__DummiesToPrint_55));
#line 407 "format_call.m"
        }
#line 407 "format_call.m"
        {
#line 407 "format_call.m"
          mercury__exception__try_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__simplify__format_call__V_136_136, &check_hlds__simplify__format_call__Result_56);
        }
#line 436 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__simplify__format_call__Result_56)) == (MR_mktag((MR_Integer) 2))))
#line 410 "format_call.m"
          {
#line 410 "format_call.m"
            MR_Word check_hlds__simplify__format_call__ExceptionUniv_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__simplify__format_call__Result_56, (MR_Integer) 0)));
#line 430 "format_call.m"
            MR_Word check_hlds__simplify__format_call__ExceptionError_58;
#line 411 "format_call.m"
            MR_Box check_hlds__simplify__format_call__conv3_ExceptionError_58;

#line 411 "format_call.m"
            {
#line 411 "format_call.m"
              check_hlds__simplify__format_call__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0, check_hlds__simplify__format_call__ExceptionUniv_57, &check_hlds__simplify__format_call__conv3_ExceptionError_58);
            }
#line 411 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 411 "format_call.m"
              {
#line 411 "format_call.m"
                check_hlds__simplify__format_call__ExceptionError_58 = ((MR_Word) check_hlds__simplify__format_call__conv3_ExceptionError_58);
#line 411 "format_call.m"
                check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 411 "format_call.m"
              }
#line 430 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 412 "format_call.m"
              {
#line 412 "format_call.m"
                MR_String check_hlds__simplify__format_call__ExceptionMsg0_59 = (MR_String) check_hlds__simplify__format_call__ExceptionError_58;
#line 412 "format_call.m"
                MR_String check_hlds__simplify__format_call__ExceptionMsg_61;
#line 412 "format_call.m"
                MR_Word check_hlds__simplify__format_call__BadFormatPieces_62;
#line 412 "format_call.m"
                MR_Word check_hlds__simplify__format_call__BadFormatMsg_63;
#line 412 "format_call.m"
                MR_Word check_hlds__simplify__format_call__BadFormatSpec_65;
#line 412 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_143_143;
#line 412 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_144_144;
#line 412 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_145_145;
#line 412 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_146_146;
#line 412 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_149_149;
#line 412 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_151_151;
#line 412 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_152_152;
#line 412 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_154_154;
#line 412 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_155_155;
#line 412 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_158_158;
#line 412 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_159_159;
#line 412 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_168_168;
#line 415 "format_call.m"
                MR_String check_hlds__simplify__format_call__Msg_60;

#line 413 "format_call.m"
                {
#line 413 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = mercury__string__append_3_p_1((MR_String) "string.format: ", &check_hlds__simplify__format_call__Msg_60, check_hlds__simplify__format_call__ExceptionMsg0_59);
                }
#line 415 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 414 "format_call.m"
                  check_hlds__simplify__format_call__ExceptionMsg_61 = check_hlds__simplify__format_call__Msg_60;
#line 415 "format_call.m"
                else
#line 416 "format_call.m"
                  check_hlds__simplify__format_call__ExceptionMsg_61 = check_hlds__simplify__format_call__ExceptionMsg0_59;
#line 420 "format_call.m"
                {
#line 420 "format_call.m"
                  check_hlds__simplify__format_call__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 420 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_145_145, 0) = ((MR_Box) (check_hlds__simplify__format_call__SymName_32));
#line 420 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_145_145, 1) = ((MR_Box) (check_hlds__simplify__format_call__Arity_29));
#line 420 "format_call.m"
                }
#line 420 "format_call.m"
                {
#line 420 "format_call.m"
                  check_hlds__simplify__format_call__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "format_call.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 420 "format_call.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__V_144_144, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_145_145));
#line 420 "format_call.m"
                }
#line 421 "format_call.m"
                {
#line 421 "format_call.m"
                  check_hlds__simplify__format_call__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "format_call.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 421 "format_call.m"
                  MR_hl_field(MR_mktag(3), check_hlds__simplify__format_call__V_152_152, 1) = ((MR_Box) (check_hlds__simplify__format_call__ExceptionMsg_61));
#line 421 "format_call.m"
                }
#line 421 "format_call.m"
                {
#line 421 "format_call.m"
                  check_hlds__simplify__format_call__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_151_151, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_152_152));
#line 421 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 421 "format_call.m"
                }
#line 420 "format_call.m"
                {
#line 420 "format_call.m"
                  check_hlds__simplify__format_call__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_149_149, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 420 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_149_149, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_151_151));
#line 420 "format_call.m"
                }
#line 420 "format_call.m"
                {
#line 420 "format_call.m"
                  check_hlds__simplify__format_call__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_146_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[13])));
#line 420 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_146_146, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_149_149));
#line 420 "format_call.m"
                }
#line 420 "format_call.m"
                {
#line 420 "format_call.m"
                  check_hlds__simplify__format_call__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_143_143, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_144_144));
#line 420 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_143_143, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_146_146));
#line 420 "format_call.m"
                }
#line 419 "format_call.m"
                {
#line 419 "format_call.m"
                  check_hlds__simplify__format_call__BadFormatPieces_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__BadFormatPieces_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__simplify__format_call_scalar_common_2[12])));
#line 419 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__BadFormatPieces_62, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_143_143));
#line 419 "format_call.m"
                }
#line 424 "format_call.m"
                {
#line 424 "format_call.m"
                  check_hlds__simplify__format_call__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 424 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_159_159, 0) = ((MR_Box) (check_hlds__simplify__format_call__BadFormatPieces_62));
#line 424 "format_call.m"
                }
#line 424 "format_call.m"
                {
#line 424 "format_call.m"
                  check_hlds__simplify__format_call__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_158_158, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_159_159));
#line 424 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "format_call.m"
                }
#line 423 "format_call.m"
                {
#line 423 "format_call.m"
                  check_hlds__simplify__format_call__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 423 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_155_155, 0) = ((MR_Box) (((MR_Integer) 32 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 423 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_155_155, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_158_158));
#line 423 "format_call.m"
                }
#line 424 "format_call.m"
                {
#line 424 "format_call.m"
                  check_hlds__simplify__format_call__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_154_154, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_155_155));
#line 424 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "format_call.m"
                }
#line 422 "format_call.m"
                {
#line 422 "format_call.m"
                  check_hlds__simplify__format_call__BadFormatMsg_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 422 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__BadFormatMsg_63, 0) = ((MR_Box) (check_hlds__simplify__format_call__Context_30));
#line 422 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__BadFormatMsg_63, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_154_154));
#line 422 "format_call.m"
                }
#line 428 "format_call.m"
                {
#line 428 "format_call.m"
                  check_hlds__simplify__format_call__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_168_168, 0) = ((MR_Box) (check_hlds__simplify__format_call__BadFormatMsg_63));
#line 428 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_168_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 428 "format_call.m"
                }
#line 427 "format_call.m"
                {
#line 427 "format_call.m"
                  check_hlds__simplify__format_call__BadFormatSpec_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 427 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__BadFormatSpec_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_3[1])));
#line 427 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__BadFormatSpec_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__simplify__format_call_scalar_common_4[1])));
#line 427 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__BadFormatSpec_65, 2) = ((MR_Box) (check_hlds__simplify__format_call__V_168_168));
#line 427 "format_call.m"
                }
#line 429 "format_call.m"
                {
#line 429 "format_call.m"
                  MR_Word base;
#line 429 "format_call.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "format_call.m"
                  *check_hlds__simplify__format_call__STATE_VARIABLE_Specs_70 = base;
#line 429 "format_call.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__BadFormatSpec_65));
#line 429 "format_call.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_Specs_132_132));
#line 429 "format_call.m"
                }
#line 412 "format_call.m"
              }
#line 430 "format_call.m"
            else
#line 429 "format_call.m"
              *check_hlds__simplify__format_call__STATE_VARIABLE_Specs_70 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_132_132;
#line 429 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_68 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_67;
#line 429 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_72 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_71;
#line 429 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_74 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_73;
#line 410 "format_call.m"
          }
#line 436 "format_call.m"
        else
#line 438 "format_call.m"
          {
#line 441 "format_call.m"
            if ((check_hlds__simplify__format_call__OptFormatCalls_15 == (MR_Integer) 0))
#line 440 "format_call.m"
              {
#line 440 "format_call.m"
                *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_68 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_67;
#line 440 "format_call.m"
                *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_72 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_71;
#line 440 "format_call.m"
                *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_74 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_73;
#line 440 "format_call.m"
              }
#line 441 "format_call.m"
            else
#line 443 "format_call.m"
              {
#line 443 "format_call.m"
                check_hlds__simplify__format_call__try_create_replacement_goal_13_p_0(check_hlds__simplify__format_call__ModuleInfo_14, check_hlds__simplify__format_call__GoalId_23, check_hlds__simplify__format_call__Kind_26, check_hlds__simplify__format_call__FormatString_51, check_hlds__simplify__format_call__StringVar1_52, check_hlds__simplify__format_call__ValuesToDeleteVars_53, check_hlds__simplify__format_call__WhatToPrints_54, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_67, check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_68, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_71, check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_72, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_73, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_74);
              }
#line 443 "format_call.m"
            *check_hlds__simplify__format_call__STATE_VARIABLE_Specs_70 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_132_132;
#line 438 "format_call.m"
          }
#line 405 "format_call.m"
      }
#line 449 "format_call.m"
    else
#line 451 "format_call.m"
      {
#line 451 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_74 = check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_73;
#line 451 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_72 = check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_71;
#line 451 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_Specs_70 = check_hlds__simplify__format_call__STATE_VARIABLE_Specs_132_132;
#line 451 "format_call.m"
        *check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_68 = check_hlds__simplify__format_call__STATE_VARIABLE_GoalIdMap_0_67;
#line 451 "format_call.m"
      }
#line 349 "format_call.m"
  }
#line 342 "format_call.m"
}

#line 272 "format_call.m"
static MR_bool MR_CALL 
check_hlds__simplify__format_call__is_format_call_kind_and_vars_6_p_0(
#line 272 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleName_7,
#line 272 "format_call.m"
  MR_String check_hlds__simplify__format_call__Name_8,
#line 272 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Args_9,
#line 272 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Kind_10,
#line 272 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__FormatStringVar_11,
#line 272 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__FormattedValuesVar_12)
#line 272 "format_call.m"
{
#line 277 "format_call.m"
  {
#line 277 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__Name_8, (MR_String) "format") == 0);
#line 280 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_46_46;

#line 277 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 277 "format_call.m"
      {
#line 280 "format_call.m"
        {
#line 280 "format_call.m"
          check_hlds__simplify__format_call__V_46_46 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
        }
#line 280 "format_call.m"
        {
#line 280 "format_call.m"
          check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_7, check_hlds__simplify__format_call__V_46_46);
        }
#line 286 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 284 "format_call.m"
          {
#line 284 "format_call.m"
            MR_Word check_hlds__simplify__format_call__ResultVar_13;
#line 284 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_20_20;
#line 284 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_21_21;
#line 284 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_22_22;

#line 284 "format_call.m"
            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 284 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 284 "format_call.m"
              {
#line 284 "format_call.m"
                *check_hlds__simplify__format_call__FormatStringVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_9, (MR_Integer) 0)));
#line 284 "format_call.m"
                check_hlds__simplify__format_call__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_9, (MR_Integer) 1)));
#line 284 "format_call.m"
                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 284 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 284 "format_call.m"
                  {
#line 284 "format_call.m"
                    *check_hlds__simplify__format_call__FormattedValuesVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_20_20, (MR_Integer) 0)));
#line 284 "format_call.m"
                    check_hlds__simplify__format_call__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_20_20, (MR_Integer) 1)));
#line 284 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 284 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 284 "format_call.m"
                      {
#line 284 "format_call.m"
                        check_hlds__simplify__format_call__ResultVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_21_21, (MR_Integer) 0)));
#line 284 "format_call.m"
                        check_hlds__simplify__format_call__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_21_21, (MR_Integer) 1)));
#line 284 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 284 "format_call.m"
                          {
#line 285 "format_call.m"
                            {
#line 285 "format_call.m"
                              MR_Word base;
#line 285 "format_call.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 285 "format_call.m"
                              *check_hlds__simplify__format_call__Kind_10 = base;
#line 285 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__ResultVar_13));
#line 285 "format_call.m"
                            }
#line 285 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 284 "format_call.m"
                          }
#line 284 "format_call.m"
                      }
#line 284 "format_call.m"
                  }
#line 284 "format_call.m"
              }
#line 284 "format_call.m"
          }
#line 286 "format_call.m"
        else
#line 297 "format_call.m"
          {
#line 287 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_47_47;

#line 287 "format_call.m"
            {
#line 287 "format_call.m"
              check_hlds__simplify__format_call__V_47_47 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
#line 287 "format_call.m"
            {
#line 287 "format_call.m"
              check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_7, check_hlds__simplify__format_call__V_47_47);
            }
#line 297 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 292 "format_call.m"
              {
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_50_50;
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_51_51;
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_52_52;
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_53_53;
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_54_54;
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_55_55;
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_56_56;
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_57_57;

#line 290 "format_call.m"
                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 290 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 290 "format_call.m"
                  {
#line 290 "format_call.m"
                    check_hlds__simplify__format_call__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_9, (MR_Integer) 0)));
#line 290 "format_call.m"
                    check_hlds__simplify__format_call__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_9, (MR_Integer) 1)));
#line 290 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 290 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 290 "format_call.m"
                      {
#line 290 "format_call.m"
                        check_hlds__simplify__format_call__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_50_50, (MR_Integer) 0)));
#line 290 "format_call.m"
                        check_hlds__simplify__format_call__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_50_50, (MR_Integer) 1)));
#line 290 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 290 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 290 "format_call.m"
                          {
#line 290 "format_call.m"
                            check_hlds__simplify__format_call__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_52_52, (MR_Integer) 0)));
#line 290 "format_call.m"
                            check_hlds__simplify__format_call__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_52_52, (MR_Integer) 1)));
#line 290 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 290 "format_call.m"
                            if (check_hlds__simplify__format_call__succeeded)
#line 290 "format_call.m"
                              {
#line 290 "format_call.m"
                                check_hlds__simplify__format_call__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_54_54, (MR_Integer) 0)));
#line 290 "format_call.m"
                                check_hlds__simplify__format_call__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_54_54, (MR_Integer) 1)));
#line 292 "format_call.m"
                                if ((check_hlds__simplify__format_call__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "format_call.m"
                                  {
#line 290 "format_call.m"
                                    *check_hlds__simplify__format_call__FormatStringVar_11 = check_hlds__simplify__format_call__V_51_51;
#line 290 "format_call.m"
                                    *check_hlds__simplify__format_call__FormattedValuesVar_12 = check_hlds__simplify__format_call__V_53_53;
#line 291 "format_call.m"
                                    {
#line 291 "format_call.m"
                                      MR_Word base;
#line 291 "format_call.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "format_call.m"
                                      *check_hlds__simplify__format_call__Kind_10 = base;
#line 291 "format_call.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_55_55));
#line 291 "format_call.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_57_57));
#line 291 "format_call.m"
                                    }
#line 290 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 290 "format_call.m"
                                  }
#line 292 "format_call.m"
                                else
#line 294 "format_call.m"
                                  {
#line 294 "format_call.m"
                                    MR_Word check_hlds__simplify__format_call__V_27_27;
#line 294 "format_call.m"
                                    MR_Word check_hlds__simplify__format_call__IOOut_43;

#line 293 "format_call.m"
                                    *check_hlds__simplify__format_call__FormatStringVar_11 = check_hlds__simplify__format_call__V_53_53;
#line 293 "format_call.m"
                                    *check_hlds__simplify__format_call__FormattedValuesVar_12 = check_hlds__simplify__format_call__V_55_55;
#line 294 "format_call.m"
                                    check_hlds__simplify__format_call__IOOut_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_56_56, (MR_Integer) 0)));
#line 294 "format_call.m"
                                    check_hlds__simplify__format_call__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_56_56, (MR_Integer) 1)));
#line 294 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "format_call.m"
                                    if (check_hlds__simplify__format_call__succeeded)
#line 294 "format_call.m"
                                      {
#line 295 "format_call.m"
                                        {
#line 295 "format_call.m"
                                          MR_Word base;
#line 295 "format_call.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 295 "format_call.m"
                                          *check_hlds__simplify__format_call__Kind_10 = base;
#line 295 "format_call.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__V_51_51));
#line 295 "format_call.m"
                                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__V_57_57));
#line 295 "format_call.m"
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__simplify__format_call__IOOut_43));
#line 295 "format_call.m"
                                        }
#line 295 "format_call.m"
                                        check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 294 "format_call.m"
                                      }
#line 294 "format_call.m"
                                  }
#line 290 "format_call.m"
                              }
#line 290 "format_call.m"
                          }
#line 290 "format_call.m"
                      }
#line 290 "format_call.m"
                  }
#line 292 "format_call.m"
              }
#line 297 "format_call.m"
            else
#line 307 "format_call.m"
              {
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TC_InfoVarForStream_17;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__StateInVar_18;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__StateOutVar_19;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_36_36;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_37_37;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_38_38;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_39_39;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_40_40;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_41_41;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__StreamVar_44;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_49_49;

#line 298 "format_call.m"
                {
#line 298 "format_call.m"
                  check_hlds__simplify__format_call__V_49_49 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[9]));
                }
#line 298 "format_call.m"
                {
#line 298 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_7, check_hlds__simplify__format_call__V_49_49);
                }
#line 307 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 307 "format_call.m"
                  {
#line 303 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 303 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 303 "format_call.m"
                      {
#line 303 "format_call.m"
                        check_hlds__simplify__format_call__TC_InfoVarForStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_9, (MR_Integer) 0)));
#line 303 "format_call.m"
                        check_hlds__simplify__format_call__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_9, (MR_Integer) 1)));
#line 303 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 303 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 303 "format_call.m"
                          {
#line 303 "format_call.m"
                            check_hlds__simplify__format_call__StreamVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_36_36, (MR_Integer) 0)));
#line 303 "format_call.m"
                            check_hlds__simplify__format_call__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_36_36, (MR_Integer) 1)));
#line 303 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 303 "format_call.m"
                            if (check_hlds__simplify__format_call__succeeded)
#line 303 "format_call.m"
                              {
#line 303 "format_call.m"
                                *check_hlds__simplify__format_call__FormatStringVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_37_37, (MR_Integer) 0)));
#line 303 "format_call.m"
                                check_hlds__simplify__format_call__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_37_37, (MR_Integer) 1)));
#line 304 "format_call.m"
                                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 304 "format_call.m"
                                if (check_hlds__simplify__format_call__succeeded)
#line 304 "format_call.m"
                                  {
#line 304 "format_call.m"
                                    *check_hlds__simplify__format_call__FormattedValuesVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_38_38, (MR_Integer) 0)));
#line 304 "format_call.m"
                                    check_hlds__simplify__format_call__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_38_38, (MR_Integer) 1)));
#line 304 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 304 "format_call.m"
                                    if (check_hlds__simplify__format_call__succeeded)
#line 304 "format_call.m"
                                      {
#line 304 "format_call.m"
                                        check_hlds__simplify__format_call__StateInVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_39_39, (MR_Integer) 0)));
#line 304 "format_call.m"
                                        check_hlds__simplify__format_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_39_39, (MR_Integer) 1)));
#line 304 "format_call.m"
                                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 304 "format_call.m"
                                        if (check_hlds__simplify__format_call__succeeded)
#line 304 "format_call.m"
                                          {
#line 304 "format_call.m"
                                            check_hlds__simplify__format_call__StateOutVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_40_40, (MR_Integer) 0)));
#line 304 "format_call.m"
                                            check_hlds__simplify__format_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_40_40, (MR_Integer) 1)));
#line 304 "format_call.m"
                                            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 307 "format_call.m"
                                            if (check_hlds__simplify__format_call__succeeded)
#line 307 "format_call.m"
                                              {
#line 305 "format_call.m"
                                                {
#line 305 "format_call.m"
                                                  MR_Word base;
#line 305 "format_call.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 305 "format_call.m"
                                                  *check_hlds__simplify__format_call__Kind_10 = base;
#line 305 "format_call.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__TC_InfoVarForStream_17));
#line 305 "format_call.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__simplify__format_call__StreamVar_44));
#line 305 "format_call.m"
                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__simplify__format_call__StateInVar_18));
#line 305 "format_call.m"
                                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__simplify__format_call__StateOutVar_19));
#line 305 "format_call.m"
                                                }
#line 305 "format_call.m"
                                                check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 307 "format_call.m"
                                              }
#line 304 "format_call.m"
                                          }
#line 304 "format_call.m"
                                      }
#line 304 "format_call.m"
                                  }
#line 303 "format_call.m"
                              }
#line 303 "format_call.m"
                          }
#line 303 "format_call.m"
                      }
#line 307 "format_call.m"
                  }
#line 307 "format_call.m"
              }
#line 297 "format_call.m"
          }
#line 277 "format_call.m"
      }
#line 277 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 277 "format_call.m"
  }
#line 272 "format_call.m"
}

#line 324 "format_call.m"
static void MR_CALL 
check_hlds__simplify__format_call__analyze_and_optimize_format_calls_8_p_0_1(
#line 324 "format_call.m"
  MR_Box check_hlds__simplify__format_call__closure_arg,
#line 324 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_1,
#line 324 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_2,
#line 324 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_3,
#line 324 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_4,
#line 324 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_5,
#line 324 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_6,
#line 324 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_7,
#line 324 "format_call.m"
  MR_Box check_hlds__simplify__format_call__wrapper_arg_8,
#line 324 "format_call.m"
  MR_Box * check_hlds__simplify__format_call__wrapper_arg_9)
#line 324 "format_call.m"
{
#line 324 "format_call.m"
  {
#line 324 "format_call.m"
    MR_Box check_hlds__simplify__format_call__closure = check_hlds__simplify__format_call__closure_arg;
#line 324 "format_call.m"
    MR_Word check_hlds__simplify__format_call__conv3_STATE_VARIABLE_GoalIdMap_68;
#line 324 "format_call.m"
    MR_Word check_hlds__simplify__format_call__conv2_STATE_VARIABLE_Specs_70;
#line 324 "format_call.m"
    MR_Word check_hlds__simplify__format_call__conv1_STATE_VARIABLE_VarSet_72;
#line 324 "format_call.m"
    MR_Word check_hlds__simplify__format_call__conv0_STATE_VARIABLE_VarTypes_74;

#line 324 "format_call.m"
    {
#line 324 "format_call.m"
      check_hlds__simplify__format_call__check_format_call_site_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_1), ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_2), &check_hlds__simplify__format_call__conv3_STATE_VARIABLE_GoalIdMap_68, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_4), &check_hlds__simplify__format_call__conv2_STATE_VARIABLE_Specs_70, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_6), &check_hlds__simplify__format_call__conv1_STATE_VARIABLE_VarSet_72, ((MR_Word) check_hlds__simplify__format_call__wrapper_arg_8), &check_hlds__simplify__format_call__conv0_STATE_VARIABLE_VarTypes_74);
    }
#line 324 "format_call.m"
    *check_hlds__simplify__format_call__wrapper_arg_3 = ((MR_Box) (check_hlds__simplify__format_call__conv3_STATE_VARIABLE_GoalIdMap_68));
#line 324 "format_call.m"
    *check_hlds__simplify__format_call__wrapper_arg_5 = ((MR_Box) (check_hlds__simplify__format_call__conv2_STATE_VARIABLE_Specs_70));
#line 324 "format_call.m"
    *check_hlds__simplify__format_call__wrapper_arg_7 = ((MR_Box) (check_hlds__simplify__format_call__conv1_STATE_VARIABLE_VarSet_72));
#line 324 "format_call.m"
    *check_hlds__simplify__format_call__wrapper_arg_9 = ((MR_Box) (check_hlds__simplify__format_call__conv0_STATE_VARIABLE_VarTypes_74));
#line 324 "format_call.m"
  }
#line 324 "format_call.m"
}

#line 135 "format_call.m"
void MR_CALL 
check_hlds__simplify__format_call__analyze_and_optimize_format_calls_8_p_0(
#line 135 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleInfo_9,
#line 135 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Goal0_10,
#line 135 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__MaybeGoal_11,
#line 135 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__Specs_12,
#line 135 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_37,
#line 135 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_38,
#line 135 "format_call.m"
  MR_Word check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_39,
#line 135 "format_call.m"
  MR_Word * check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_40)
#line 135 "format_call.m"
{
#line 314 "format_call.m"
  {
#line 314 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_51_51 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_53_53;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_63_63;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__TypeCtorInfo_64_64;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConjMaps0_15;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Counter0_16;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Goal1_18;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__FormatCallSites_20;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__ConjMaps_22;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__PredMap_23;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__Globals_25;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__OptFormatCalls_26;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__GoalIdMap_27;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_43_43;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_44_44;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_46_46;
#line 314 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_47_47;
#line 317 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_17_17;
#line 318 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_19_19;
#line 318 "format_call.m"
    MR_Word check_hlds__simplify__format_call___Counter_21;
#line 318 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_24_24;
#line 323 "format_call.m"
    MR_Box check_hlds__simplify__format_call__conv7_GoalIdMap_27;
#line 323 "format_call.m"
    MR_Box check_hlds__simplify__format_call__conv6_Specs_12;
#line 323 "format_call.m"
    MR_Box check_hlds__simplify__format_call__conv5_STATE_VARIABLE_VarSet_38;
#line 323 "format_call.m"
    MR_Box check_hlds__simplify__format_call__conv4_STATE_VARIABLE_VarTypes_40;

#line 315 "format_call.m"
    {
#line 315 "format_call.m"
      mercury__map__init_1_p_0(check_hlds__simplify__format_call__TypeCtorInfo_51_51, (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0, &check_hlds__simplify__format_call__ConjMaps0_15);
    }
#line 316 "format_call.m"
    {
#line 316 "format_call.m"
      mercury__counter__init_2_p_0((MR_Integer) 0, &check_hlds__simplify__format_call__Counter0_16);
    }
#line 317 "format_call.m"
    {
#line 317 "format_call.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(check_hlds__simplify__format_call__ModuleInfo_9, check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_39, &check_hlds__simplify__format_call__V_17_17, check_hlds__simplify__format_call__Goal0_10, &check_hlds__simplify__format_call__Goal1_18);
    }
#line 319 "format_call.m"
    {
#line 319 "format_call.m"
      check_hlds__simplify__format_call__V_43_43 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeCtorInfo_51_51, check_hlds__simplify__format_call__TypeCtorInfo_51_51);
    }
#line 14856 "check_hlds.simplify.format_call.c"
    check_hlds__simplify__format_call__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 320 "format_call.m"
    {
#line 320 "format_call.m"
      check_hlds__simplify__format_call__V_44_44 = parse_tree__set_of_var__init_0_f_0(check_hlds__simplify__format_call__TypeCtorInfo_53_53);
    }
#line 318 "format_call.m"
    {
#line 318 "format_call.m"
      check_hlds__simplify__format_call__format_call_traverse_goal_13_p_0(check_hlds__simplify__format_call__ModuleInfo_9, check_hlds__simplify__format_call__Goal1_18, &check_hlds__simplify__format_call__V_19_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__simplify__format_call__FormatCallSites_20, check_hlds__simplify__format_call__Counter0_16, &check_hlds__simplify__format_call___Counter_21, check_hlds__simplify__format_call__ConjMaps0_15, &check_hlds__simplify__format_call__ConjMaps_22, check_hlds__simplify__format_call__V_43_43, &check_hlds__simplify__format_call__PredMap_23, check_hlds__simplify__format_call__V_44_44, &check_hlds__simplify__format_call__V_24_24);
    }
#line 321 "format_call.m"
    {
#line 321 "format_call.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__simplify__format_call__ModuleInfo_9, &check_hlds__simplify__format_call__Globals_25);
    }
#line 322 "format_call.m"
    {
#line 322 "format_call.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__simplify__format_call__Globals_25, (MR_Integer) 365, &check_hlds__simplify__format_call__OptFormatCalls_26);
    }
#line 324 "format_call.m"
    {
#line 324 "format_call.m"
      check_hlds__simplify__format_call__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 324 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_46_46, 0) = ((MR_Box) (&check_hlds__simplify__format_call_scalar_common_5[0]));
#line 324 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_46_46, 1) = ((MR_Box) (check_hlds__simplify__format_call__analyze_and_optimize_format_calls_8_p_0_1));
#line 324 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 324 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_46_46, 3) = ((MR_Box) (check_hlds__simplify__format_call__ModuleInfo_9));
#line 324 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_46_46, 4) = ((MR_Box) (check_hlds__simplify__format_call__OptFormatCalls_26));
#line 324 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_46_46, 5) = ((MR_Box) (check_hlds__simplify__format_call__ConjMaps_22));
#line 324 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__V_46_46, 6) = ((MR_Box) (check_hlds__simplify__format_call__PredMap_23));
#line 324 "format_call.m"
    }
#line 14898 "check_hlds.simplify.format_call.c"
    check_hlds__simplify__format_call__TypeCtorInfo_63_63 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 14900 "check_hlds.simplify.format_call.c"
    check_hlds__simplify__format_call__TypeCtorInfo_64_64 = (MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0;
#line 325 "format_call.m"
    {
#line 325 "format_call.m"
      check_hlds__simplify__format_call__V_47_47 = mercury__map__init_0_f_0(check_hlds__simplify__format_call__TypeCtorInfo_63_63, check_hlds__simplify__format_call__TypeCtorInfo_64_64);
    }
#line 323 "format_call.m"
    {
#line 323 "format_call.m"
      mercury__list__foldl4_10_p_0((MR_Word) &check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0, (MR_Word) &check_hlds__simplify__format_call_scalar_common_1[0], (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[0], (MR_Word) &check_hlds__simplify__format_call_scalar_common_2[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, check_hlds__simplify__format_call__V_46_46, check_hlds__simplify__format_call__FormatCallSites_20, ((MR_Box) (check_hlds__simplify__format_call__V_47_47)), &check_hlds__simplify__format_call__conv7_GoalIdMap_27, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__simplify__format_call__conv6_Specs_12, ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_0_37)), &check_hlds__simplify__format_call__conv5_STATE_VARIABLE_VarSet_38, ((MR_Box) (check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_0_39)), &check_hlds__simplify__format_call__conv4_STATE_VARIABLE_VarTypes_40);
    }
#line 323 "format_call.m"
    check_hlds__simplify__format_call__GoalIdMap_27 = ((MR_Word) check_hlds__simplify__format_call__conv7_GoalIdMap_27);
#line 323 "format_call.m"
    *check_hlds__simplify__format_call__Specs_12 = ((MR_Word) check_hlds__simplify__format_call__conv6_Specs_12);
#line 323 "format_call.m"
    *check_hlds__simplify__format_call__STATE_VARIABLE_VarSet_38 = ((MR_Word) check_hlds__simplify__format_call__conv5_STATE_VARIABLE_VarSet_38);
#line 323 "format_call.m"
    *check_hlds__simplify__format_call__STATE_VARIABLE_VarTypes_40 = ((MR_Word) check_hlds__simplify__format_call__conv4_STATE_VARIABLE_VarTypes_40);
#line 326 "format_call.m"
    {
#line 326 "format_call.m"
      check_hlds__simplify__format_call__succeeded = mercury__map__is_empty_1_p_0(check_hlds__simplify__format_call__TypeCtorInfo_63_63, check_hlds__simplify__format_call__TypeCtorInfo_64_64, check_hlds__simplify__format_call__GoalIdMap_27);
    }
#line 329 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 328 "format_call.m"
      *check_hlds__simplify__format_call__MaybeGoal_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 329 "format_call.m"
    else
#line 333 "format_call.m"
      {
#line 333 "format_call.m"
        MR_Word check_hlds__simplify__format_call__GoalInfo1_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal1_18, (MR_Integer) 1)));
#line 333 "format_call.m"
        MR_Word check_hlds__simplify__format_call__InstMapDelta_30;
#line 333 "format_call.m"
        MR_Word check_hlds__simplify__format_call__NeededVars0_31;
#line 333 "format_call.m"
        MR_Word check_hlds__simplify__format_call__ToDeleteVars0_32;
#line 333 "format_call.m"
        MR_Word check_hlds__simplify__format_call__Goal_33;
#line 333 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__simplify__format_call__Goal1_18, (MR_Integer) 0)));
#line 337 "format_call.m"
        MR_Word check_hlds__simplify__format_call__V_34_34;
#line 337 "format_call.m"
        MR_Word check_hlds__simplify__format_call___NeededVars_35;
#line 337 "format_call.m"
        MR_Word check_hlds__simplify__format_call___ToDeleteVars_36;

#line 334 "format_call.m"
        {
#line 334 "format_call.m"
          check_hlds__simplify__format_call__InstMapDelta_30 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__simplify__format_call__GoalInfo1_29);
        }
#line 335 "format_call.m"
        {
#line 335 "format_call.m"
          hlds__instmap__instmap_delta_changed_vars_2_p_0(check_hlds__simplify__format_call__InstMapDelta_30, &check_hlds__simplify__format_call__NeededVars0_31);
        }
#line 336 "format_call.m"
        {
#line 336 "format_call.m"
          check_hlds__simplify__format_call__ToDeleteVars0_32 = parse_tree__set_of_var__init_0_f_0(check_hlds__simplify__format_call__TypeCtorInfo_53_53);
        }
#line 337 "format_call.m"
        {
#line 337 "format_call.m"
          check_hlds__simplify__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__simplify__format_call__Goal1_18, &check_hlds__simplify__format_call__Goal_33, check_hlds__simplify__format_call__GoalIdMap_27, &check_hlds__simplify__format_call__V_34_34, check_hlds__simplify__format_call__NeededVars0_31, &check_hlds__simplify__format_call___NeededVars_35, check_hlds__simplify__format_call__ToDeleteVars0_32, &check_hlds__simplify__format_call___ToDeleteVars_36);
        }
#line 339 "format_call.m"
        {
#line 339 "format_call.m"
          MR_Word base;
#line 339 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 339 "format_call.m"
          *check_hlds__simplify__format_call__MaybeGoal_11 = base;
#line 339 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__simplify__format_call__Goal_33));
#line 339 "format_call.m"
        }
#line 333 "format_call.m"
      }
#line 314 "format_call.m"
  }
#line 135 "format_call.m"
}

#line 132 "format_call.m"
MR_bool MR_CALL 
check_hlds__simplify__format_call__is_format_call_3_p_0(
#line 132 "format_call.m"
  MR_Word check_hlds__simplify__format_call__ModuleName_4,
#line 132 "format_call.m"
  MR_String check_hlds__simplify__format_call__Name_5,
#line 132 "format_call.m"
  MR_Word check_hlds__simplify__format_call__Args_6)
#line 132 "format_call.m"
{
#line 277 "format_call.m"
  {
#line 277 "format_call.m"
    MR_bool check_hlds__simplify__format_call__succeeded = (strcmp(check_hlds__simplify__format_call__Name_5, (MR_String) "format") == 0);
#line 280 "format_call.m"
    MR_Word check_hlds__simplify__format_call__V_49_49;

#line 277 "format_call.m"
    if (check_hlds__simplify__format_call__succeeded)
#line 277 "format_call.m"
      {
#line 280 "format_call.m"
        {
#line 280 "format_call.m"
          check_hlds__simplify__format_call__V_49_49 = mdbcomp__builtin_modules__mercury_string_module_0_f_0();
        }
#line 280 "format_call.m"
        {
#line 280 "format_call.m"
          check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_4, check_hlds__simplify__format_call__V_49_49);
        }
#line 286 "format_call.m"
        if (check_hlds__simplify__format_call__succeeded)
#line 284 "format_call.m"
          {
#line 284 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_23_23;
#line 284 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_24_24;
#line 284 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_25_25;
#line 284 "format_call.m"
            MR_Word check_hlds__simplify__format_call___FormatStringVar_8;
#line 284 "format_call.m"
            MR_Word check_hlds__simplify__format_call___FormattedValuesVar_9;
#line 284 "format_call.m"
            MR_Word check_hlds__simplify__format_call__ResultVar_16;

#line 284 "format_call.m"
            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 284 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 284 "format_call.m"
              {
#line 284 "format_call.m"
                check_hlds__simplify__format_call___FormatStringVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 0)));
#line 284 "format_call.m"
                check_hlds__simplify__format_call__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 1)));
#line 284 "format_call.m"
                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 284 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 284 "format_call.m"
                  {
#line 284 "format_call.m"
                    check_hlds__simplify__format_call___FormattedValuesVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_23_23, (MR_Integer) 0)));
#line 284 "format_call.m"
                    check_hlds__simplify__format_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_23_23, (MR_Integer) 1)));
#line 284 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 284 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 284 "format_call.m"
                      {
#line 284 "format_call.m"
                        check_hlds__simplify__format_call__ResultVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_24_24, (MR_Integer) 0)));
#line 284 "format_call.m"
                        check_hlds__simplify__format_call__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_24_24, (MR_Integer) 1)));
#line 284 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "format_call.m"
                      }
#line 284 "format_call.m"
                  }
#line 284 "format_call.m"
              }
#line 284 "format_call.m"
          }
#line 286 "format_call.m"
        else
#line 297 "format_call.m"
          {
#line 287 "format_call.m"
            MR_Word check_hlds__simplify__format_call__V_50_50;

#line 287 "format_call.m"
            {
#line 287 "format_call.m"
              check_hlds__simplify__format_call__V_50_50 = mdbcomp__builtin_modules__mercury_io_module_0_f_0();
            }
#line 287 "format_call.m"
            {
#line 287 "format_call.m"
              check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_4, check_hlds__simplify__format_call__V_50_50);
            }
#line 297 "format_call.m"
            if (check_hlds__simplify__format_call__succeeded)
#line 292 "format_call.m"
              {
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_53_53;
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_55_55;
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_57_57;
#line 292 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_59_59;
#line 290 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_54_54;
#line 290 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_56_56;
#line 290 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_58_58;
#line 290 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_60_60;

#line 290 "format_call.m"
                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 290 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 290 "format_call.m"
                  {
#line 290 "format_call.m"
                    check_hlds__simplify__format_call__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 0)));
#line 290 "format_call.m"
                    check_hlds__simplify__format_call__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 1)));
#line 290 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 290 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 290 "format_call.m"
                      {
#line 290 "format_call.m"
                        check_hlds__simplify__format_call__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_53_53, (MR_Integer) 0)));
#line 290 "format_call.m"
                        check_hlds__simplify__format_call__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_53_53, (MR_Integer) 1)));
#line 290 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 290 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 290 "format_call.m"
                          {
#line 290 "format_call.m"
                            check_hlds__simplify__format_call__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_55_55, (MR_Integer) 0)));
#line 290 "format_call.m"
                            check_hlds__simplify__format_call__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_55_55, (MR_Integer) 1)));
#line 290 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_57_57)) == (MR_mktag((MR_Integer) 1)));
#line 290 "format_call.m"
                            if (check_hlds__simplify__format_call__succeeded)
#line 290 "format_call.m"
                              {
#line 290 "format_call.m"
                                check_hlds__simplify__format_call__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_57_57, (MR_Integer) 0)));
#line 290 "format_call.m"
                                check_hlds__simplify__format_call__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_57_57, (MR_Integer) 1)));
#line 292 "format_call.m"
                                if ((check_hlds__simplify__format_call__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 290 "format_call.m"
                                  check_hlds__simplify__format_call__succeeded = MR_TRUE;
#line 292 "format_call.m"
                                else
#line 294 "format_call.m"
                                  {
#line 294 "format_call.m"
                                    MR_Word check_hlds__simplify__format_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_59_59, (MR_Integer) 1)));
#line 294 "format_call.m"
                                    MR_Word check_hlds__simplify__format_call__IOOut_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_59_59, (MR_Integer) 0)));

#line 294 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "format_call.m"
                                  }
#line 290 "format_call.m"
                              }
#line 290 "format_call.m"
                          }
#line 290 "format_call.m"
                      }
#line 290 "format_call.m"
                  }
#line 292 "format_call.m"
              }
#line 297 "format_call.m"
            else
#line 307 "format_call.m"
              {
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_39_39;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_40_40;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_41_41;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_42_42;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_43_43;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_44_44;
#line 307 "format_call.m"
                MR_Word check_hlds__simplify__format_call__V_52_52;
#line 303 "format_call.m"
                MR_Word check_hlds__simplify__format_call__TC_InfoVarForStream_20;
#line 303 "format_call.m"
                MR_Word check_hlds__simplify__format_call__StreamVar_47;
#line 303 "format_call.m"
                MR_Word check_hlds__simplify__format_call___FormatStringVar_82;
#line 304 "format_call.m"
                MR_Word check_hlds__simplify__format_call___FormattedValuesVar_83;
#line 304 "format_call.m"
                MR_Word check_hlds__simplify__format_call__StateInVar_21;
#line 304 "format_call.m"
                MR_Word check_hlds__simplify__format_call__StateOutVar_22;

#line 298 "format_call.m"
                {
#line 298 "format_call.m"
                  check_hlds__simplify__format_call__V_52_52 = mdbcomp__builtin_modules__mercury_std_lib_module_name_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__simplify__format_call_scalar_common_2[9]));
                }
#line 298 "format_call.m"
                {
#line 298 "format_call.m"
                  check_hlds__simplify__format_call__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__simplify__format_call__ModuleName_4, check_hlds__simplify__format_call__V_52_52);
                }
#line 307 "format_call.m"
                if (check_hlds__simplify__format_call__succeeded)
#line 307 "format_call.m"
                  {
#line 303 "format_call.m"
                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 303 "format_call.m"
                    if (check_hlds__simplify__format_call__succeeded)
#line 303 "format_call.m"
                      {
#line 303 "format_call.m"
                        check_hlds__simplify__format_call__TC_InfoVarForStream_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 0)));
#line 303 "format_call.m"
                        check_hlds__simplify__format_call__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__Args_6, (MR_Integer) 1)));
#line 303 "format_call.m"
                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 303 "format_call.m"
                        if (check_hlds__simplify__format_call__succeeded)
#line 303 "format_call.m"
                          {
#line 303 "format_call.m"
                            check_hlds__simplify__format_call__StreamVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_39_39, (MR_Integer) 0)));
#line 303 "format_call.m"
                            check_hlds__simplify__format_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_39_39, (MR_Integer) 1)));
#line 303 "format_call.m"
                            check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 303 "format_call.m"
                            if (check_hlds__simplify__format_call__succeeded)
#line 303 "format_call.m"
                              {
#line 303 "format_call.m"
                                check_hlds__simplify__format_call___FormatStringVar_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_40_40, (MR_Integer) 0)));
#line 303 "format_call.m"
                                check_hlds__simplify__format_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_40_40, (MR_Integer) 1)));
#line 304 "format_call.m"
                                check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 304 "format_call.m"
                                if (check_hlds__simplify__format_call__succeeded)
#line 304 "format_call.m"
                                  {
#line 304 "format_call.m"
                                    check_hlds__simplify__format_call___FormattedValuesVar_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_41_41, (MR_Integer) 0)));
#line 304 "format_call.m"
                                    check_hlds__simplify__format_call__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_41_41, (MR_Integer) 1)));
#line 304 "format_call.m"
                                    check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 304 "format_call.m"
                                    if (check_hlds__simplify__format_call__succeeded)
#line 304 "format_call.m"
                                      {
#line 304 "format_call.m"
                                        check_hlds__simplify__format_call__StateInVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_42_42, (MR_Integer) 0)));
#line 304 "format_call.m"
                                        check_hlds__simplify__format_call__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_42_42, (MR_Integer) 1)));
#line 304 "format_call.m"
                                        check_hlds__simplify__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__simplify__format_call__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 304 "format_call.m"
                                        if (check_hlds__simplify__format_call__succeeded)
#line 304 "format_call.m"
                                          {
#line 304 "format_call.m"
                                            check_hlds__simplify__format_call__StateOutVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_43_43, (MR_Integer) 0)));
#line 304 "format_call.m"
                                            check_hlds__simplify__format_call__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__simplify__format_call__V_43_43, (MR_Integer) 1)));
#line 304 "format_call.m"
                                            check_hlds__simplify__format_call__succeeded = (check_hlds__simplify__format_call__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "format_call.m"
                                          }
#line 304 "format_call.m"
                                      }
#line 304 "format_call.m"
                                  }
#line 303 "format_call.m"
                              }
#line 303 "format_call.m"
                          }
#line 303 "format_call.m"
                      }
#line 307 "format_call.m"
                  }
#line 307 "format_call.m"
              }
#line 297 "format_call.m"
          }
#line 277 "format_call.m"
      }
#line 277 "format_call.m"
    return check_hlds__simplify__format_call__succeeded;
#line 277 "format_call.m"
  }
#line 132 "format_call.m"
}

void mercury__check_hlds__simplify__format_call__init(void)
{
}

void mercury__check_hlds__simplify__format_call__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_id_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_maps_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_conj_pred_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_eqv_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_goal_id_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_fc_opt_goal_info_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_follow_skeleton_result_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_kind_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_format_call_site_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_element_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_list_skeleton_state_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_component_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_string_map_0);
	MR_register_type_ctor_info(&check_hlds__simplify__format_call__check_hlds__simplify__format_call__type_ctor_info_what_to_print_0);
}

void mercury__check_hlds__simplify__format_call__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.simplify.format_call. */
