/*
** Automatically generated from `format_call.m'
** by the Mercury compiler,
** version 14.01-beta-2014-02-06, configured for x86_64-apple-darwin13.0.0.
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


/* :- module check_hlds.format_call. */
/* :- implementation. */

/*
INIT mercury__check_hlds__format_call__init
ENDINIT
*/

#include "check_hlds.format_call.mih"


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




#line 136 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__format_call__tree234__pti_tree234_2__plain_check_hlds__format_call__type_ctor_info_conj_id_0__plain_check_hlds__format_call__type_ctor_info_conj_map_0;

#line 139 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__format_call__tree234__pti_tree234_2__plain_check_hlds__format_call__type_ctor_info_conj_id_0__plain_check_hlds__format_call__type_ctor_info_conj_id_0;

#line 142 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0;

#line 145 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__format_call__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 148 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__format_call__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 151 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 154 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__format_call__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 157 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 160 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__format_call__maybe__pti_maybe_1__plain_check_hlds__format_call__type_ctor_info_what_to_print_0;

#line 163 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__format_call__list__pti_list_1__plain_string__type_ctor_info_poly_type_0;

#line 166 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_conj_id_0[1];

#line 169 "check_hlds.format_call.c"
static const MR_NotagFunctorDesc check_hlds__format_call__check_hlds__format_call__notag_functor_desc_conj_id_0;

#line 172 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0;

#line 175 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__format_call__type_ctor_info_list_skeleton_state_0;

#line 178 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__format_call__type_ctor_info_what_to_print_0;

#line 181 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 184 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_conj_map_0_0[4];

#line 187 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_conj_map_0_0[4];

#line 190 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_conj_map_0_0;

#line 193 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_conj_map_0_0[1];

#line 196 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_conj_map_0[1];

#line 199 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_conj_map_0[1];

#line 202 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_conj_map_0[1];

#line 205 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__format_call__tree234__ti_tree234_2check_hlds__format_call__type_ctor_info_conj_id_0check_hlds__format_call__type_ctor_info_conj_map_0;

#line 208 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__format_call__tree234__ti_tree234_2check_hlds__format_call__type_ctor_info_conj_id_0check_hlds__format_call__type_ctor_info_conj_id_0;

#line 211 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__format_call__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0;

#line 214 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__format_call__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 217 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_fc_opt_goal_info_0_0[2];

#line 220 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_fc_opt_goal_info_0_0[2];

#line 223 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_fc_opt_goal_info_0_0;

#line 226 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_fc_opt_goal_info_0_0[1];

#line 229 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_fc_opt_goal_info_0[1];

#line 232 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_fc_opt_goal_info_0[1];

#line 235 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_fc_opt_goal_info_0[1];

#line 238 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 241 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_follow_skeleton_result_0_0[2];

#line 244 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_follow_skeleton_result_0_0[2];

#line 247 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_follow_skeleton_result_0_0;

#line 250 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_follow_skeleton_result_0_1;

#line 253 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_follow_skeleton_result_0_0[1];

#line 256 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_follow_skeleton_result_0_1[1];

#line 259 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_follow_skeleton_result_0[2];

#line 262 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_follow_skeleton_result_0[2];

#line 265 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_follow_skeleton_result_0[2];

#line 268 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_format_call_kind_0_0[1];

#line 271 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_format_call_kind_0_0[1];

#line 274 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_0;

#line 277 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_format_call_kind_0_1[2];

#line 280 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_format_call_kind_0_1[2];

#line 283 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_1;

#line 286 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_format_call_kind_0_2[3];

#line 289 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_format_call_kind_0_2[3];

#line 292 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_2;

#line 295 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_format_call_kind_0_3[4];

#line 298 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_format_call_kind_0_3[4];

#line 301 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_3;

#line 304 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_format_call_kind_0_0[1];

#line 307 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_format_call_kind_0_1[1];

#line 310 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_format_call_kind_0_2[1];

#line 313 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_format_call_kind_0_3[1];

#line 316 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_format_call_kind_0[4];

#line 319 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_format_call_kind_0[4];

#line 322 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_format_call_kind_0[4];

#line 325 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_format_call_site_0_0[9];

#line 328 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_format_call_site_0_0[9];

#line 331 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_site_0_0;

#line 334 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_format_call_site_0_0[1];

#line 337 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_format_call_site_0[1];

#line 340 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_format_call_site_0[1];

#line 343 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_format_call_site_0[1];

#line 346 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_list_skeleton_state_0_0;

#line 349 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_list_skeleton_state_0_1[2];

#line 352 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_list_skeleton_state_0_1[2];

#line 355 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_list_skeleton_state_0_1;

#line 358 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_list_skeleton_state_0_0[1];

#line 361 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_list_skeleton_state_0_1[1];

#line 364 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_list_skeleton_state_0[2];

#line 367 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_list_skeleton_state_0[2];

#line 370 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_list_skeleton_state_0[2];

#line 373 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_string_component_0_0[1];

#line 376 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_0;

#line 379 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_string_component_0_1[1];

#line 382 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_1;

#line 385 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_string_component_0_2[1];

#line 388 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_2;

#line 391 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_string_component_0_3[1];

#line 394 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_3;

#line 397 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_string_component_0_4[1];

#line 400 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_4;

#line 403 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_string_component_0_0[1];

#line 406 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_string_component_0_1[1];

#line 409 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_string_component_0_2[1];

#line 412 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_string_component_0_3[2];

#line 415 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_string_component_0[4];

#line 418 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_string_component_0[5];

#line 421 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_string_component_0[5];

#line 424 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_what_to_print_0_0[2];

#line 427 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_what_to_print_0_0[2];

#line 430 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_what_to_print_0_0;

#line 433 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_what_to_print_0_0[1];

#line 436 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_what_to_print_0[1];

#line 439 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_what_to_print_0[1];

#line 442 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_what_to_print_0[1];

#line 445 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_id_0_0_10001(
#line 448 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 450 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 453 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____conj_id_0_0_10001(
#line 456 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 458 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 460 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 463 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_map_0_0_10001(
#line 466 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 468 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 471 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____conj_map_0_0_10001(
#line 474 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 476 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 478 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 481 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_maps_0_0_10001(
#line 484 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 486 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 489 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____conj_maps_0_0_10001(
#line 492 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 494 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 496 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 499 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_pred_map_0_0_10001(
#line 502 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 504 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 507 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____conj_pred_map_0_0_10001(
#line 510 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 512 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 514 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 517 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____fc_eqv_map_0_0_10001(
#line 520 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 522 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 525 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____fc_eqv_map_0_0_10001(
#line 528 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 530 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 532 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 535 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____fc_goal_id_map_0_0_10001(
#line 538 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 540 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 543 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____fc_goal_id_map_0_0_10001(
#line 546 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 548 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 550 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 553 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____fc_opt_goal_info_0_0_10001(
#line 556 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 558 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 561 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____fc_opt_goal_info_0_0_10001(
#line 564 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 566 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 568 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 571 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____follow_skeleton_result_0_0_10001(
#line 574 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 576 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 579 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____follow_skeleton_result_0_0_10001(
#line 582 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 584 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 586 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 589 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____format_call_kind_0_0_10001(
#line 592 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 594 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 597 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____format_call_kind_0_0_10001(
#line 600 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 602 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 604 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 607 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____format_call_site_0_0_10001(
#line 610 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 612 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 615 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____format_call_site_0_0_10001(
#line 618 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 620 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 622 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 625 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____list_element_map_0_0_10001(
#line 628 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 630 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 633 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____list_element_map_0_0_10001(
#line 636 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 638 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 640 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 643 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____list_skeleton_map_0_0_10001(
#line 646 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 648 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 651 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____list_skeleton_map_0_0_10001(
#line 654 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 656 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 658 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 661 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____list_skeleton_state_0_0_10001(
#line 664 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 666 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 669 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____list_skeleton_state_0_0_10001(
#line 672 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 674 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 676 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 679 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____string_component_0_0_10001(
#line 682 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 684 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 687 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____string_component_0_0_10001(
#line 690 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 692 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 694 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 697 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____string_map_0_0_10001(
#line 700 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 702 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 705 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____string_map_0_0_10001(
#line 708 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 710 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 712 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 715 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____what_to_print_0_0_10001(
#line 718 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 720 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2);

#line 723 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____what_to_print_0_0_10001(
#line 726 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 728 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 730 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3);

#line 593 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_p_0(
#line 593 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 593 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__2_2);

#line 205 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____what_to_print_0_0(
#line 205 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 205 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 205 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 205 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____what_to_print_0_0(
#line 205 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 205 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 194 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____string_map_0_0(
#line 194 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 194 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 194 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 194 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____string_map_0_0(
#line 194 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 194 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 1199 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____string_component_0_0(
#line 1199 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 1199 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 1199 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 1199 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____string_component_0_0(
#line 1199 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 1199 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 185 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____list_skeleton_state_0_0(
#line 185 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 185 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 185 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 185 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____list_skeleton_state_0_0(
#line 185 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 185 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 198 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____list_skeleton_map_0_0(
#line 198 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 198 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 198 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 198 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____list_skeleton_map_0_0(
#line 198 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 198 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 210 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____list_element_map_0_0(
#line 210 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 210 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 210 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 210 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____list_element_map_0_0(
#line 210 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 210 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 172 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____format_call_site_0_0(
#line 172 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 172 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 172 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 172 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____format_call_site_0_0(
#line 172 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 172 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 243 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____format_call_kind_0_0(
#line 243 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 243 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 243 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 243 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____format_call_kind_0_0(
#line 243 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 243 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 527 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____follow_skeleton_result_0_0(
#line 527 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 527 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 527 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 527 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____follow_skeleton_result_0_0(
#line 527 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 527 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 885 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____fc_opt_goal_info_0_0(
#line 885 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 885 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 885 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 885 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____fc_opt_goal_info_0_0(
#line 885 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 885 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 891 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____fc_goal_id_map_0_0(
#line 891 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 891 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 891 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 891 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____fc_goal_id_map_0_0(
#line 891 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 891 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 214 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____fc_eqv_map_0_0(
#line 214 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 214 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 214 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 214 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____fc_eqv_map_0_0(
#line 214 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 214 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 238 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____conj_pred_map_0_0(
#line 238 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 238 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 238 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 238 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_pred_map_0_0(
#line 238 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 238 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 233 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____conj_maps_0_0(
#line 233 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 233 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 233 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 233 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_maps_0_0(
#line 233 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 233 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 219 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____conj_map_0_0(
#line 219 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 219 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 219 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 219 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_map_0_0(
#line 219 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 219 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 227 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____conj_id_0_0(
#line 227 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 227 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 227 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3);

#line 227 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_id_0_0(
#line 227 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 227 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2);

#line 1325 "format_call.m"
static void MR_CALL 
check_hlds__format_call__represent_component_9_p_0(
#line 1325 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_10,
#line 1325 "format_call.m"
  MR_Word check_hlds__format_call__Component_11,
#line 1325 "format_call.m"
  MR_Word check_hlds__format_call__MaybeResultVar_12,
#line 1325 "format_call.m"
  MR_Word * check_hlds__format_call__ResultVar_13,
#line 1325 "format_call.m"
  MR_Word * check_hlds__format_call__Goals_14,
#line 1325 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_0_23,
#line 1325 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarSet_24,
#line 1325 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_0_25,
#line 1325 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarTypes_26);

#line 1313 "format_call.m"
static void MR_CALL 
check_hlds__format_call__make_result_var_if_needed_6_p_0(
#line 1313 "format_call.m"
  MR_Word check_hlds__format_call__MaybeResultVar_7,
#line 1313 "format_call.m"
  MR_Word * check_hlds__format_call__ResultVar_8,
#line 1313 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_0_11,
#line 1313 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarSet_12,
#line 1313 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_0_13,
#line 1313 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarTypes_14);

#line 1277 "format_call.m"
static void MR_CALL 
check_hlds__format_call__replace_string_format_9_p_0(
#line 1277 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_10,
#line 1277 "format_call.m"
  MR_Word check_hlds__format_call__Components_11,
#line 1277 "format_call.m"
  MR_Word check_hlds__format_call__MaybeResultVar_12,
#line 1277 "format_call.m"
  MR_Word * check_hlds__format_call__ResultVar_13,
#line 1277 "format_call.m"
  MR_Word * check_hlds__format_call__Goals_14,
#line 1277 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_0_27,
#line 1277 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarSet_28,
#line 1277 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_0_29,
#line 1277 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarTypes_30);

#line 1206 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call__interpret_format_string_4_p_0(
#line 1206 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 1206 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 1206 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3,
#line 1206 "format_call.m"
  MR_Word * check_hlds__format_call__Components_4);

#line 1167 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call__create_io_format_replacement_11_p_0(
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_12,
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__FormatStringChars_13,
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__MaybeStreamVar_14,
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__IOInVar_15,
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__IOOutVar_16,
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__VarsToPrint_17,
#line 1167 "format_call.m"
  MR_Word * check_hlds__format_call__Goal_18,
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_0_31,
#line 1167 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarSet_32,
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_0_33,
#line 1167 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarTypes_34);

#line 1117 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call__create_string_format_replacement_9_p_0(
#line 1117 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_10,
#line 1117 "format_call.m"
  MR_Word check_hlds__format_call__FormatStringChars_11,
#line 1117 "format_call.m"
  MR_Word check_hlds__format_call__ResultVar_12,
#line 1117 "format_call.m"
  MR_Word check_hlds__format_call__VarsToPrint_13,
#line 1117 "format_call.m"
  MR_Word * check_hlds__format_call__Goal_14,
#line 1117 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_0_25,
#line 1117 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarSet_26,
#line 1117 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_0_27,
#line 1117 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarTypes_28);

#line 1094 "format_call.m"
static void MR_CALL 
check_hlds__format_call__opt_format_call_sites_in_switch_10_p_0(
#line 1094 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 1094 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__2_2,
#line 1094 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_3,
#line 1094 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_GoalIdMap_4,
#line 1094 "format_call.m"
  MR_Word check_hlds__format_call__NeededVars0_5,
#line 1094 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_0_6,
#line 1094 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_7,
#line 1094 "format_call.m"
  MR_Word check_hlds__format_call__ToDeleteVars0_8,
#line 1094 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9,
#line 1094 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_10);

#line 1074 "format_call.m"
static void MR_CALL 
check_hlds__format_call__opt_format_call_sites_in_disj_10_p_0(
#line 1074 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 1074 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__2_2,
#line 1074 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_3,
#line 1074 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_GoalIdMap_4,
#line 1074 "format_call.m"
  MR_Word check_hlds__format_call__NeededVars0_5,
#line 1074 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_0_6,
#line 1074 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_7,
#line 1074 "format_call.m"
  MR_Word check_hlds__format_call__ToDeleteVars0_8,
#line 1074 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9,
#line 1074 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_10);

#line 1058 "format_call.m"
static void MR_CALL 
check_hlds__format_call__opt_format_call_sites_in_conj_8_p_0(
#line 1058 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 1058 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__2_2,
#line 1058 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_3,
#line 1058 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_GoalIdMap_4,
#line 1058 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_NeededVars_0_5,
#line 1058 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_NeededVars_6,
#line 1058 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_7,
#line 1058 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_8);

#line 896 "format_call.m"
static void MR_CALL 
check_hlds__format_call__opt_format_call_sites_in_goal_8_p_0(
#line 896 "format_call.m"
  MR_Word check_hlds__format_call__Goal0_9,
#line 896 "format_call.m"
  MR_Word * check_hlds__format_call__Goal_10,
#line 896 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_97,
#line 896 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_GoalIdMap_98,
#line 896 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99,
#line 896 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_NeededVars_100,
#line 896 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101,
#line 896 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_102);

#line 877 "format_call.m"
static void MR_CALL 
check_hlds__format_call__alloc_id_3_p_0(
#line 877 "format_call.m"
  MR_Word * check_hlds__format_call__ConjId_4,
#line 877 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_0_7,
#line 877 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_Counter_8);

#line 868 "format_call.m"
static MR_Word MR_CALL 
check_hlds__format_call__get_conj_map_2_f_0(
#line 868 "format_call.m"
  MR_Word check_hlds__format_call__ConjMaps_4,
#line 868 "format_call.m"
  MR_Word check_hlds__format_call__ConjId_5);

#line 849 "format_call.m"
static void MR_CALL 
check_hlds__format_call__format_call_traverse_disj_arms_11_p_0(
#line 849 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_1,
#line 849 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 849 "format_call.m"
  MR_Word check_hlds__format_call__ContainingId_3,
#line 849 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__4_4,
#line 849 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_0_5,
#line 849 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_Counter_6,
#line 849 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_7,
#line 849 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ConjMaps_8,
#line 849 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_0_9,
#line 849 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_PredMap_10,
#line 849 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__11_11);

#line 833 "format_call.m"
static void MR_CALL 
check_hlds__format_call__format_call_traverse_disj_13_p_0(
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_14,
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__Disjuncts_15,
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__CurId_16,
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0_26,
#line 833 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_FormatCallSites_27,
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_0_28,
#line 833 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_Counter_29,
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_30,
#line 833 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ConjMaps_31,
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_0_32,
#line 833 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_PredMap_33,
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_34,
#line 833 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_RelevantVars_35);

#line 829 "format_call.m"
static MR_Word MR_CALL 
check_hlds__format_call__project_case_goal_1_f_0(
#line 829 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1);

#line 738 "format_call.m"
static void MR_CALL 
check_hlds__format_call__format_call_traverse_unify_8_p_0(
#line 738 "format_call.m"
  MR_Word check_hlds__format_call__Unification_9,
#line 738 "format_call.m"
  MR_Word check_hlds__format_call__CurId_10,
#line 738 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_55,
#line 738 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ConjMaps_56,
#line 738 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_0_57,
#line 738 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_PredMap_58,
#line 738 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_59,
#line 738 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_RelevantVars_60);

#line 637 "format_call.m"
static MR_Box MR_CALL 
check_hlds__format_call__format_call_traverse_conj_13_p_0_1(
#line 637 "format_call.m"
  MR_Box check_hlds__format_call__closure_arg,
#line 637 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_1);

#line 614 "format_call.m"
static void MR_CALL 
check_hlds__format_call__format_call_traverse_conj_13_p_0(
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3,
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0_4,
#line 614 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5,
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_0_6,
#line 614 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_Counter_7,
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_8,
#line 614 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ConjMaps_9,
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_0_10,
#line 614 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_PredMap_11,
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_12,
#line 614 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_RelevantVars_13);

#line 601 "format_call.m"
static void MR_CALL 
check_hlds__format_call__format_call_traverse_goal_13_p_0(
#line 601 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_14,
#line 601 "format_call.m"
  MR_Word check_hlds__format_call__Goal_15,
#line 601 "format_call.m"
  MR_Word * check_hlds__format_call__CurId_16,
#line 601 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0_23,
#line 601 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_FormatCallSites_24,
#line 601 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_0_25,
#line 601 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_Counter_26,
#line 601 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_27,
#line 601 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ConjMaps_28,
#line 601 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_0_29,
#line 601 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_PredMap_30,
#line 601 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_31,
#line 601 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_RelevantVars_32);

#line 589 "format_call.m"
static MR_Word MR_CALL 
check_hlds__format_call__project_var_to_print_1_f_0(
#line 589 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1);

#line 584 "format_call.m"
static MR_Word MR_CALL 
check_hlds__format_call__project_dummy_to_print_1_f_0(
#line 584 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1);

#line 568 "format_call.m"
static void MR_CALL 
check_hlds__format_call__follow_list_value_5_p_0(
#line 568 "format_call.m"
  MR_Word check_hlds__format_call__ConjMaps_6,
#line 568 "format_call.m"
  MR_Word check_hlds__format_call__PredMap_7,
#line 568 "format_call.m"
  MR_Word check_hlds__format_call__CurId_8,
#line 568 "format_call.m"
  MR_Word check_hlds__format_call__PolytypeVar_9,
#line 568 "format_call.m"
  MR_Word * check_hlds__format_call__MaybeResult_10);

#line 534 "format_call.m"
static void MR_CALL 
check_hlds__format_call__follow_list_skeleton_5_p_0(
#line 534 "format_call.m"
  MR_Word check_hlds__format_call__ConjMaps_6,
#line 534 "format_call.m"
  MR_Word check_hlds__format_call__PredMap_7,
#line 534 "format_call.m"
  MR_Word check_hlds__format_call__CurId_8,
#line 534 "format_call.m"
  MR_Word check_hlds__format_call__ListVar_9,
#line 534 "format_call.m"
  MR_Word * check_hlds__format_call__Result_10);

#line 511 "format_call.m"
static void MR_CALL 
check_hlds__format_call__follow_format_string_5_p_0(
#line 511 "format_call.m"
  MR_Word check_hlds__format_call__ConjMaps_6,
#line 511 "format_call.m"
  MR_Word check_hlds__format_call__PredMap_7,
#line 511 "format_call.m"
  MR_Word check_hlds__format_call__CurId_8,
#line 511 "format_call.m"
  MR_Word check_hlds__format_call__StringVar_9,
#line 511 "format_call.m"
  MR_Word * check_hlds__format_call__MaybeString_10);

#line 461 "format_call.m"
static MR_Box MR_CALL 
check_hlds__format_call__try_create_replacement_goal_13_p_0_1(
#line 461 "format_call.m"
  MR_Box check_hlds__format_call__closure_arg,
#line 461 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_1);

#line 451 "format_call.m"
static void MR_CALL 
check_hlds__format_call__try_create_replacement_goal_13_p_0(
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_14,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__GoalId_15,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__Kind_16,
#line 451 "format_call.m"
  MR_String check_hlds__format_call__FormatString_17,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__StringVar_18,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__ValuesToDeleteVars_19,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__WhatToPrints_20,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_38,
#line 451 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_GoalIdMap_39,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_0_40,
#line 451 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarSet_41,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_0_42,
#line 451 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarTypes_43);

#line 404 "format_call.m"
static void MR_CALL 
check_hlds__format_call__check_format_call_site_13_p_0_3(
#line 404 "format_call.m"
  MR_Box check_hlds__format_call__closure_arg,
#line 404 "format_call.m"
  MR_Box * check_hlds__format_call__wrapper_arg_1);

#line 402 "format_call.m"
static MR_Box MR_CALL 
check_hlds__format_call__check_format_call_site_13_p_0_2(
#line 402 "format_call.m"
  MR_Box check_hlds__format_call__closure_arg,
#line 402 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_1);

#line 376 "format_call.m"
static void MR_CALL 
check_hlds__format_call__check_format_call_site_13_p_0_1(
#line 376 "format_call.m"
  MR_Box check_hlds__format_call__closure_arg,
#line 376 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 376 "format_call.m"
  MR_Box * check_hlds__format_call__wrapper_arg_2);

#line 339 "format_call.m"
static void MR_CALL 
check_hlds__format_call__check_format_call_site_13_p_0(
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_14,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__OptFormatCalls_15,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__ConjMaps_16,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__PredMap_17,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__FormatCallSite_18,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_67,
#line 339 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_GoalIdMap_68,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_Specs_0_69,
#line 339 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_Specs_70,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_0_71,
#line 339 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarSet_72,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_0_73,
#line 339 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarTypes_74);

#line 269 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call__is_format_call_kind_and_vars_6_p_0(
#line 269 "format_call.m"
  MR_Word check_hlds__format_call__ModuleName_7,
#line 269 "format_call.m"
  MR_String check_hlds__format_call__Name_8,
#line 269 "format_call.m"
  MR_Word check_hlds__format_call__Args_9,
#line 269 "format_call.m"
  MR_Word * check_hlds__format_call__Kind_10,
#line 269 "format_call.m"
  MR_Word * check_hlds__format_call__FormatStringVar_11,
#line 269 "format_call.m"
  MR_Word * check_hlds__format_call__FormattedValuesVar_12);

#line 320 "format_call.m"
static void MR_CALL 
check_hlds__format_call__analyze_and_optimize_format_calls_8_p_0_1(
#line 320 "format_call.m"
  MR_Box check_hlds__format_call__closure_arg,
#line 320 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 320 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 320 "format_call.m"
  MR_Box * check_hlds__format_call__wrapper_arg_3,
#line 320 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_4,
#line 320 "format_call.m"
  MR_Box * check_hlds__format_call__wrapper_arg_5,
#line 320 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_6,
#line 320 "format_call.m"
  MR_Box * check_hlds__format_call__wrapper_arg_7,
#line 320 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_8,
#line 320 "format_call.m"
  MR_Box * check_hlds__format_call__wrapper_arg_9);


static /* final */ const MR_Box check_hlds__format_call_scalar_common_1[11][3];

static /* final */ const MR_Box check_hlds__format_call_scalar_common_2[14][2];

static /* final */ const MR_Box check_hlds__format_call_scalar_common_3[2][4];

static /* final */ const MR_Box check_hlds__format_call_scalar_common_4[6][1];

static /* final */ const MR_Box check_hlds__format_call_scalar_common_5[1][16];

static /* final */ const MR_Box check_hlds__format_call_scalar_common_6[1][8];

static /* final */ const MR_Box check_hlds__format_call_scalar_common_7[3][5];

static /* final */ const MR_Box check_hlds__format_call_scalar_common_8[1][6];

static /* final */ const MR_Float check_hlds__format_call_scalar_common_9[1];




static /* final */ const MR_Box check_hlds__format_call_scalar_common_1[11][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&check_hlds__format_call__check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__format_call_scalar_common_2[2])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__format_call__check_hlds__format_call__type_ctor_info_list_skeleton_state_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__format_call_scalar_common_2[2])),
    ((MR_Box) (&check_hlds__format_call_scalar_common_2[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_map_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__format_call_scalar_common_7[0])),
    ((MR_Box) (check_hlds__format_call__check_format_call_site_13_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&check_hlds__format_call_scalar_common_7[1])),
    ((MR_Box) (check_hlds__format_call__try_create_replacement_goal_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__format_call_scalar_common_7[2])),
    ((MR_Box) (check_hlds__format_call__format_call_traverse_conj_13_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__format_call_scalar_common_2[14][2] = {
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
    ((MR_Box) (&check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__format_call_scalar_common_2[2]))
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
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__format_call_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__format_call_scalar_common_2[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (&check_hlds__format_call_scalar_common_4[0])),
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

static /* final */ const MR_Box check_hlds__format_call_scalar_common_3[2][4] = {
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

static /* final */ const MR_Box check_hlds__format_call_scalar_common_4[6][1] = {
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
    (MR_Box) &check_hlds__format_call_scalar_common_9[0]
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

static /* final */ const MR_Box check_hlds__format_call_scalar_common_5[1][16] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&check_hlds__format_call__tree234__pti_tree234_2__plain_check_hlds__format_call__type_ctor_info_conj_id_0__plain_check_hlds__format_call__type_ctor_info_conj_map_0)),
    ((MR_Box) (&check_hlds__format_call__tree234__pti_tree234_2__plain_check_hlds__format_call__type_ctor_info_conj_id_0__plain_check_hlds__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__format_call__check_hlds__format_call__type_ctor_info_format_call_site_0)),
    ((MR_Box) (&check_hlds__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0)),
    ((MR_Box) (&check_hlds__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0)),
    ((MR_Box) (&check_hlds__format_call__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__format_call__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__format_call__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__format_call__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__format_call__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__format_call__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__format_call_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__format_call__tree234__pti_tree234_2__plain_check_hlds__format_call__type_ctor_info_conj_id_0__plain_check_hlds__format_call__type_ctor_info_conj_map_0)),
    ((MR_Box) (&check_hlds__format_call__tree234__pti_tree234_2__plain_check_hlds__format_call__type_ctor_info_conj_id_0__plain_check_hlds__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0)),
    ((MR_Box) (&check_hlds__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&check_hlds__format_call__maybe__pti_maybe_1__plain_check_hlds__format_call__type_ctor_info_what_to_print_0))
  },
};

static /* final */ const MR_Box check_hlds__format_call_scalar_common_7[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0)),
    ((MR_Box) (&mercury__string__string__type_ctor_info_poly_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0)),
    ((MR_Box) (&check_hlds__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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

static /* final */ const MR_Box check_hlds__format_call_scalar_common_8[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&check_hlds__format_call__list__pti_list_1__plain_string__type_ctor_info_poly_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Float check_hlds__format_call_scalar_common_9[1] = {
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



#line 1902 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__format_call__tree234__pti_tree234_2__plain_check_hlds__format_call__type_ctor_info_conj_id_0__plain_check_hlds__format_call__type_ctor_info_conj_map_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0,
    (MR_PseudoTypeInfo) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_map_0
  }
};

#line 1911 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__format_call__tree234__pti_tree234_2__plain_check_hlds__format_call__type_ctor_info_conj_id_0__plain_check_hlds__format_call__type_ctor_info_conj_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0,
    (MR_PseudoTypeInfo) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0
  }
};

#line 1920 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__format_call__tree234__pti_tree234_2__plain_mdbcomp__goal_path__type_ctor_info_goal_id_0__plain_check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_PseudoTypeInfo) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0
  }
};

#line 1929 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__format_call__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1937 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__format_call__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1945 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1953 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__format_call__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1962 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__format_call__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1970 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__format_call__maybe__pti_maybe_1__plain_check_hlds__format_call__type_ctor_info_what_to_print_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0
  }
};

#line 1978 "check_hlds.format_call.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__format_call__list__pti_list_1__plain_string__type_ctor_info_poly_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__string__string__type_ctor_info_poly_type_0
  }
};

#line 1986 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_conj_id_0[1] = {
  (MR_Integer) 0
};

#line 1991 "check_hlds.format_call.c"
static const MR_NotagFunctorDesc check_hlds__format_call__check_hlds__format_call__notag_functor_desc_conj_id_0 = {
  (MR_String) "conj_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1998 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (check_hlds__format_call____Unify____conj_id_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____conj_id_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "conj_id",
  {
    &check_hlds__format_call__check_hlds__format_call__notag_functor_desc_conj_id_0
  },
  {
    &check_hlds__format_call__check_hlds__format_call__notag_functor_desc_conj_id_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__format_call__check_hlds__format_call__functor_number_map_conj_id_0
};

#line 2019 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2028 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__format_call__type_ctor_info_list_skeleton_state_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_list_skeleton_state_0
  }
};

#line 2037 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__format_call__type_ctor_info_what_to_print_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0
  }
};

#line 2046 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2055 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_conj_map_0_0[4] = {
  (MR_PseudoTypeInfo) &check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__format_call__type_ctor_info_list_skeleton_state_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__format_call__type_ctor_info_what_to_print_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2063 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_conj_map_0_0[4] = {
  (MR_String) "cm_string_map",
  (MR_String) "cm_list_skeleton_map",
  (MR_String) "cm_list_element_map",
  (MR_String) "cm_eqv_map"
};

#line 2071 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_conj_map_0_0 = {
  (MR_String) "conj_map",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__format_call__check_hlds__format_call__field_types_conj_map_0_0,
  check_hlds__format_call__check_hlds__format_call__field_names_conj_map_0_0,
  NULL,
  NULL
};

#line 2086 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_conj_map_0_0[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_conj_map_0_0
};

#line 2091 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_conj_map_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_conj_map_0_0
  }
};

#line 2100 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_conj_map_0[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_conj_map_0_0
};

#line 2105 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_conj_map_0[1] = {
  (MR_Integer) 0
};

#line 2110 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__format_call____Unify____conj_map_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____conj_map_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "conj_map",
  {
    check_hlds__format_call__check_hlds__format_call__du_name_ordered_conj_map_0
  },
  {
    check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_conj_map_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__format_call__check_hlds__format_call__functor_number_map_conj_map_0
};

#line 2131 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__format_call__tree234__ti_tree234_2check_hlds__format_call__type_ctor_info_conj_id_0check_hlds__format_call__type_ctor_info_conj_map_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0,
    (MR_TypeInfo) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_map_0
  }
};

#line 2140 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_maps_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__format_call____Unify____conj_maps_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____conj_maps_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "conj_maps",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__format_call__tree234__ti_tree234_2check_hlds__format_call__type_ctor_info_conj_id_0check_hlds__format_call__type_ctor_info_conj_map_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2161 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__format_call__tree234__ti_tree234_2check_hlds__format_call__type_ctor_info_conj_id_0check_hlds__format_call__type_ctor_info_conj_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0,
    (MR_TypeInfo) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0
  }
};

#line 2170 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_pred_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__format_call____Unify____conj_pred_map_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____conj_pred_map_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "conj_pred_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__format_call__tree234__ti_tree234_2check_hlds__format_call__type_ctor_info_conj_id_0check_hlds__format_call__type_ctor_info_conj_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2191 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_fc_eqv_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__format_call____Unify____fc_eqv_map_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____fc_eqv_map_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "fc_eqv_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2212 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__format_call__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0
  }
};

#line 2221 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_fc_goal_id_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__format_call____Unify____fc_goal_id_map_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____fc_goal_id_map_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "fc_goal_id_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__format_call__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2242 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__format_call__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__tree_bitset__tree_bitset__type_ctor_info_tree_bitset_1,
  {
    (MR_TypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2250 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_fc_opt_goal_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__tree_bitset__ti_tree_bitset_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2256 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_fc_opt_goal_info_0_0[2] = {
  (MR_String) "fcogi_replacement_goal",
  (MR_String) "fcogi_unneeded_vars"
};

#line 2262 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_fc_opt_goal_info_0_0 = {
  (MR_String) "fc_opt_goal_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__format_call__check_hlds__format_call__field_types_fc_opt_goal_info_0_0,
  check_hlds__format_call__check_hlds__format_call__field_names_fc_opt_goal_info_0_0,
  NULL,
  NULL
};

#line 2277 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_fc_opt_goal_info_0_0[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_fc_opt_goal_info_0_0
};

#line 2282 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_fc_opt_goal_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_fc_opt_goal_info_0_0
  }
};

#line 2291 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_fc_opt_goal_info_0[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_fc_opt_goal_info_0_0
};

#line 2296 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_fc_opt_goal_info_0[1] = {
  (MR_Integer) 0
};

#line 2301 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__format_call____Unify____fc_opt_goal_info_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____fc_opt_goal_info_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "fc_opt_goal_info",
  {
    check_hlds__format_call__check_hlds__format_call__du_name_ordered_fc_opt_goal_info_0
  },
  {
    check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_fc_opt_goal_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__format_call__check_hlds__format_call__functor_number_map_fc_opt_goal_info_0
};

#line 2322 "check_hlds.format_call.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 2330 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_follow_skeleton_result_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2336 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_follow_skeleton_result_0_0[2] = {
  (MR_String) "fsr_polytype_vars",
  (MR_String) "fsr_skeleton_vars"
};

#line 2342 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_follow_skeleton_result_0_0 = {
  (MR_String) "follow_skeleton_result",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__format_call__check_hlds__format_call__field_types_follow_skeleton_result_0_0,
  check_hlds__format_call__check_hlds__format_call__field_names_follow_skeleton_result_0_0,
  NULL,
  NULL
};

#line 2357 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_follow_skeleton_result_0_1 = {
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

#line 2372 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_follow_skeleton_result_0_0[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_follow_skeleton_result_0_1
};

#line 2377 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_follow_skeleton_result_0_1[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_follow_skeleton_result_0_0
};

#line 2382 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_follow_skeleton_result_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_follow_skeleton_result_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_follow_skeleton_result_0_1
  }
};

#line 2396 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_follow_skeleton_result_0[2] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_follow_skeleton_result_0_0,
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_follow_skeleton_result_0_1
};

#line 2402 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_follow_skeleton_result_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2408 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_follow_skeleton_result_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__format_call____Unify____follow_skeleton_result_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____follow_skeleton_result_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "follow_skeleton_result",
  {
    check_hlds__format_call__check_hlds__format_call__du_name_ordered_follow_skeleton_result_0
  },
  {
    check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_follow_skeleton_result_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__format_call__check_hlds__format_call__functor_number_map_follow_skeleton_result_0
};

#line 2429 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_format_call_kind_0_0[1] = {
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2434 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_format_call_kind_0_0[1] = {
  (MR_String) "sf_result_var"
};

#line 2439 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_0 = {
  (MR_String) "kind_string_format",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__format_call__check_hlds__format_call__field_types_format_call_kind_0_0,
  check_hlds__format_call__check_hlds__format_call__field_names_format_call_kind_0_0,
  NULL,
  NULL
};

#line 2454 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_format_call_kind_0_1[2] = {
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2460 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_format_call_kind_0_1[2] = {
  (MR_String) "iofns_io_in_var",
  (MR_String) "iofns_io_out_var"
};

#line 2466 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_1 = {
  (MR_String) "kind_io_format_nostream",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__format_call__check_hlds__format_call__field_types_format_call_kind_0_1,
  check_hlds__format_call__check_hlds__format_call__field_names_format_call_kind_0_1,
  NULL,
  NULL
};

#line 2481 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_format_call_kind_0_2[3] = {
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2488 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_format_call_kind_0_2[3] = {
  (MR_String) "iofs_stream_var",
  (MR_String) "iofs_io_in_var",
  (MR_String) "iofs_io_out_var"
};

#line 2495 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_2 = {
  (MR_String) "kind_io_format_stream",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__format_call__check_hlds__format_call__field_types_format_call_kind_0_2,
  check_hlds__format_call__check_hlds__format_call__field_names_format_call_kind_0_2,
  NULL,
  NULL
};

#line 2510 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_format_call_kind_0_3[4] = {
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2518 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_format_call_kind_0_3[4] = {
  (MR_String) "ssw_tc_info_var",
  (MR_String) "ssw_stream_var",
  (MR_String) "ssw_in_var",
  (MR_String) "ssw_out_var"
};

#line 2526 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_3 = {
  (MR_String) "kind_stream_string_writer",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  check_hlds__format_call__check_hlds__format_call__field_types_format_call_kind_0_3,
  check_hlds__format_call__check_hlds__format_call__field_names_format_call_kind_0_3,
  NULL,
  NULL
};

#line 2541 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_format_call_kind_0_0[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_0
};

#line 2546 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_format_call_kind_0_1[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_1
};

#line 2551 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_format_call_kind_0_2[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_2
};

#line 2556 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_format_call_kind_0_3[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_3
};

#line 2561 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_format_call_kind_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_format_call_kind_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_format_call_kind_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_format_call_kind_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_format_call_kind_0_3
  }
};

#line 2585 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_format_call_kind_0[4] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_1,
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_2,
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_3,
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_kind_0_0
};

#line 2593 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_format_call_kind_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2601 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_format_call_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__format_call____Unify____format_call_kind_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____format_call_kind_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "format_call_kind",
  {
    check_hlds__format_call__check_hlds__format_call__du_name_ordered_format_call_kind_0
  },
  {
    check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_format_call_kind_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__format_call__check_hlds__format_call__functor_number_map_format_call_kind_0
};

#line 2622 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_format_call_site_0_0[9] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_format_call_kind_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0
};

#line 2635 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_format_call_site_0_0[9] = {
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

#line 2648 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_site_0_0 = {
  (MR_String) "format_call_site",
  (MR_Integer) 9,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__format_call__check_hlds__format_call__field_types_format_call_site_0_0,
  check_hlds__format_call__check_hlds__format_call__field_names_format_call_site_0_0,
  NULL,
  NULL
};

#line 2663 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_format_call_site_0_0[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_site_0_0
};

#line 2668 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_format_call_site_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_format_call_site_0_0
  }
};

#line 2677 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_format_call_site_0[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_format_call_site_0_0
};

#line 2682 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_format_call_site_0[1] = {
  (MR_Integer) 0
};

#line 2687 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_format_call_site_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__format_call____Unify____format_call_site_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____format_call_site_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "format_call_site",
  {
    check_hlds__format_call__check_hlds__format_call__du_name_ordered_format_call_site_0
  },
  {
    check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_format_call_site_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__format_call__check_hlds__format_call__functor_number_map_format_call_site_0
};

#line 2708 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_list_element_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__format_call____Unify____list_element_map_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____list_element_map_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "list_element_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__format_call__type_ctor_info_what_to_print_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2729 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_list_skeleton_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__format_call____Unify____list_skeleton_map_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____list_skeleton_map_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "list_skeleton_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0check_hlds__format_call__type_ctor_info_list_skeleton_state_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2750 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_list_skeleton_state_0_0 = {
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

#line 2765 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_list_skeleton_state_0_1[2] = {
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2771 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_list_skeleton_state_0_1[2] = {
  (MR_String) "head",
  (MR_String) "tail"
};

#line 2777 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_list_skeleton_state_0_1 = {
  (MR_String) "list_skeleton_cons",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__format_call__check_hlds__format_call__field_types_list_skeleton_state_0_1,
  check_hlds__format_call__check_hlds__format_call__field_names_list_skeleton_state_0_1,
  NULL,
  NULL
};

#line 2792 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_list_skeleton_state_0_0[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_list_skeleton_state_0_0
};

#line 2797 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_list_skeleton_state_0_1[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_list_skeleton_state_0_1
};

#line 2802 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_list_skeleton_state_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_list_skeleton_state_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_list_skeleton_state_0_1
  }
};

#line 2816 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_list_skeleton_state_0[2] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_list_skeleton_state_0_1,
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_list_skeleton_state_0_0
};

#line 2822 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_list_skeleton_state_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2828 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_list_skeleton_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__format_call____Unify____list_skeleton_state_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____list_skeleton_state_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "list_skeleton_state",
  {
    check_hlds__format_call__check_hlds__format_call__du_name_ordered_list_skeleton_state_0
  },
  {
    check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_list_skeleton_state_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__format_call__check_hlds__format_call__functor_number_map_list_skeleton_state_0
};

#line 2849 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_string_component_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2854 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_0 = {
  (MR_String) "string_constant",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__format_call__check_hlds__format_call__field_types_string_component_0_0,
  NULL,
  NULL,
  NULL
};

#line 2869 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_string_component_0_1[1] = {
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2874 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_1 = {
  (MR_String) "var_to_print_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__format_call__check_hlds__format_call__field_types_string_component_0_1,
  NULL,
  NULL,
  NULL
};

#line 2889 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_string_component_0_2[1] = {
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2894 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_2 = {
  (MR_String) "var_to_print_float",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  check_hlds__format_call__check_hlds__format_call__field_types_string_component_0_2,
  NULL,
  NULL,
  NULL
};

#line 2909 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_string_component_0_3[1] = {
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2914 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_3 = {
  (MR_String) "var_to_print_string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  check_hlds__format_call__check_hlds__format_call__field_types_string_component_0_3,
  NULL,
  NULL,
  NULL
};

#line 2929 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_string_component_0_4[1] = {
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
};

#line 2934 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_4 = {
  (MR_String) "var_to_print_char",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__format_call__check_hlds__format_call__field_types_string_component_0_4,
  NULL,
  NULL,
  NULL
};

#line 2949 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_string_component_0_0[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_0
};

#line 2954 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_string_component_0_1[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_1
};

#line 2959 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_string_component_0_2[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_2
};

#line 2964 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_string_component_0_3[2] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_3,
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_4
};

#line 2970 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_string_component_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_string_component_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_string_component_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_string_component_0_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_string_component_0_3
  }
};

#line 2994 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_string_component_0[5] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_0,
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_4,
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_2,
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_1,
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_string_component_0_3
};

#line 3003 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_string_component_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 1
};

#line 3012 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_string_component_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__format_call____Unify____string_component_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____string_component_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "string_component",
  {
    check_hlds__format_call__check_hlds__format_call__du_name_ordered_string_component_0
  },
  {
    check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_string_component_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  check_hlds__format_call__check_hlds__format_call__functor_number_map_string_component_0
};

#line 3033 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_string_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__format_call____Unify____string_map_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____string_map_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "string_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__format_call__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3054 "check_hlds.format_call.c"
static const MR_PseudoTypeInfo check_hlds__format_call__check_hlds__format_call__field_types_what_to_print_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__format_call__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
  (MR_PseudoTypeInfo) &mercury__string__string__type_ctor_info_poly_type_0
};

#line 3060 "check_hlds.format_call.c"
static const MR_ConstString check_hlds__format_call__check_hlds__format_call__field_names_what_to_print_0_0[2] = {
  (MR_String) "var_to_print",
  (MR_String) "dummy_to_print"
};

#line 3066 "check_hlds.format_call.c"
static const MR_DuFunctorDesc check_hlds__format_call__check_hlds__format_call__du_functor_desc_what_to_print_0_0 = {
  (MR_String) "what_to_print",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__format_call__check_hlds__format_call__field_types_what_to_print_0_0,
  check_hlds__format_call__check_hlds__format_call__field_names_what_to_print_0_0,
  NULL,
  NULL
};

#line 3081 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_stag_ordered_what_to_print_0_0[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_what_to_print_0_0
};

#line 3086 "check_hlds.format_call.c"
static const MR_DuPtagLayout check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_what_to_print_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__format_call__check_hlds__format_call__du_stag_ordered_what_to_print_0_0
  }
};

#line 3095 "check_hlds.format_call.c"
static const MR_DuFunctorDescPtr check_hlds__format_call__check_hlds__format_call__du_name_ordered_what_to_print_0[1] = {
  &check_hlds__format_call__check_hlds__format_call__du_functor_desc_what_to_print_0_0
};

#line 3100 "check_hlds.format_call.c"
static const MR_Integer check_hlds__format_call__check_hlds__format_call__functor_number_map_what_to_print_0[1] = {
  (MR_Integer) 0
};

#line 3105 "check_hlds.format_call.c"
const MR_TypeCtorInfo_Struct check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__format_call____Unify____what_to_print_0_0_10001)),
  ((MR_Box) (check_hlds__format_call____Compare____what_to_print_0_0_10001)),
  (MR_String) "check_hlds.format_call",
  (MR_String) "what_to_print",
  {
    check_hlds__format_call__check_hlds__format_call__du_name_ordered_what_to_print_0
  },
  {
    check_hlds__format_call__check_hlds__format_call__du_ptag_ordered_what_to_print_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__format_call__check_hlds__format_call__functor_number_map_what_to_print_0
};

#line 3126 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_id_0_0_10001(
#line 3129 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3131 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3133 "check_hlds.format_call.c"
{
#line 3135 "check_hlds.format_call.c"
  {
#line 3137 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3140 "check_hlds.format_call.c"
    {
#line 3142 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____conj_id_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3145 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3147 "check_hlds.format_call.c"
  }
#line 3149 "check_hlds.format_call.c"
}

#line 3152 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____conj_id_0_0_10001(
#line 3155 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3157 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3159 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3161 "check_hlds.format_call.c"
{
#line 3163 "check_hlds.format_call.c"
  {
#line 3165 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3168 "check_hlds.format_call.c"
    {
#line 3170 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____conj_id_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3173 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3175 "check_hlds.format_call.c"
  }
#line 3177 "check_hlds.format_call.c"
}

#line 3180 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_map_0_0_10001(
#line 3183 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3185 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3187 "check_hlds.format_call.c"
{
#line 3189 "check_hlds.format_call.c"
  {
#line 3191 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3194 "check_hlds.format_call.c"
    {
#line 3196 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____conj_map_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3199 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3201 "check_hlds.format_call.c"
  }
#line 3203 "check_hlds.format_call.c"
}

#line 3206 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____conj_map_0_0_10001(
#line 3209 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3211 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3213 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3215 "check_hlds.format_call.c"
{
#line 3217 "check_hlds.format_call.c"
  {
#line 3219 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3222 "check_hlds.format_call.c"
    {
#line 3224 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____conj_map_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3227 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3229 "check_hlds.format_call.c"
  }
#line 3231 "check_hlds.format_call.c"
}

#line 3234 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_maps_0_0_10001(
#line 3237 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3239 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3241 "check_hlds.format_call.c"
{
#line 3243 "check_hlds.format_call.c"
  {
#line 3245 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3248 "check_hlds.format_call.c"
    {
#line 3250 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____conj_maps_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3253 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3255 "check_hlds.format_call.c"
  }
#line 3257 "check_hlds.format_call.c"
}

#line 3260 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____conj_maps_0_0_10001(
#line 3263 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3265 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3267 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3269 "check_hlds.format_call.c"
{
#line 3271 "check_hlds.format_call.c"
  {
#line 3273 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3276 "check_hlds.format_call.c"
    {
#line 3278 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____conj_maps_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3281 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3283 "check_hlds.format_call.c"
  }
#line 3285 "check_hlds.format_call.c"
}

#line 3288 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_pred_map_0_0_10001(
#line 3291 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3293 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3295 "check_hlds.format_call.c"
{
#line 3297 "check_hlds.format_call.c"
  {
#line 3299 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3302 "check_hlds.format_call.c"
    {
#line 3304 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____conj_pred_map_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3307 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3309 "check_hlds.format_call.c"
  }
#line 3311 "check_hlds.format_call.c"
}

#line 3314 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____conj_pred_map_0_0_10001(
#line 3317 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3319 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3321 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3323 "check_hlds.format_call.c"
{
#line 3325 "check_hlds.format_call.c"
  {
#line 3327 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3330 "check_hlds.format_call.c"
    {
#line 3332 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____conj_pred_map_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3335 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3337 "check_hlds.format_call.c"
  }
#line 3339 "check_hlds.format_call.c"
}

#line 3342 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____fc_eqv_map_0_0_10001(
#line 3345 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3347 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3349 "check_hlds.format_call.c"
{
#line 3351 "check_hlds.format_call.c"
  {
#line 3353 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3356 "check_hlds.format_call.c"
    {
#line 3358 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____fc_eqv_map_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3361 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3363 "check_hlds.format_call.c"
  }
#line 3365 "check_hlds.format_call.c"
}

#line 3368 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____fc_eqv_map_0_0_10001(
#line 3371 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3373 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3375 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3377 "check_hlds.format_call.c"
{
#line 3379 "check_hlds.format_call.c"
  {
#line 3381 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3384 "check_hlds.format_call.c"
    {
#line 3386 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____fc_eqv_map_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3389 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3391 "check_hlds.format_call.c"
  }
#line 3393 "check_hlds.format_call.c"
}

#line 3396 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____fc_goal_id_map_0_0_10001(
#line 3399 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3401 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3403 "check_hlds.format_call.c"
{
#line 3405 "check_hlds.format_call.c"
  {
#line 3407 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3410 "check_hlds.format_call.c"
    {
#line 3412 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____fc_goal_id_map_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3415 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3417 "check_hlds.format_call.c"
  }
#line 3419 "check_hlds.format_call.c"
}

#line 3422 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____fc_goal_id_map_0_0_10001(
#line 3425 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3427 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3429 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3431 "check_hlds.format_call.c"
{
#line 3433 "check_hlds.format_call.c"
  {
#line 3435 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3438 "check_hlds.format_call.c"
    {
#line 3440 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____fc_goal_id_map_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3443 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3445 "check_hlds.format_call.c"
  }
#line 3447 "check_hlds.format_call.c"
}

#line 3450 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____fc_opt_goal_info_0_0_10001(
#line 3453 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3455 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3457 "check_hlds.format_call.c"
{
#line 3459 "check_hlds.format_call.c"
  {
#line 3461 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3464 "check_hlds.format_call.c"
    {
#line 3466 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____fc_opt_goal_info_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3469 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3471 "check_hlds.format_call.c"
  }
#line 3473 "check_hlds.format_call.c"
}

#line 3476 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____fc_opt_goal_info_0_0_10001(
#line 3479 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3481 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3483 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3485 "check_hlds.format_call.c"
{
#line 3487 "check_hlds.format_call.c"
  {
#line 3489 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3492 "check_hlds.format_call.c"
    {
#line 3494 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____fc_opt_goal_info_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3497 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3499 "check_hlds.format_call.c"
  }
#line 3501 "check_hlds.format_call.c"
}

#line 3504 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____follow_skeleton_result_0_0_10001(
#line 3507 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3509 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3511 "check_hlds.format_call.c"
{
#line 3513 "check_hlds.format_call.c"
  {
#line 3515 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3518 "check_hlds.format_call.c"
    {
#line 3520 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____follow_skeleton_result_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3523 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3525 "check_hlds.format_call.c"
  }
#line 3527 "check_hlds.format_call.c"
}

#line 3530 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____follow_skeleton_result_0_0_10001(
#line 3533 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3535 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3537 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3539 "check_hlds.format_call.c"
{
#line 3541 "check_hlds.format_call.c"
  {
#line 3543 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3546 "check_hlds.format_call.c"
    {
#line 3548 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____follow_skeleton_result_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3551 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3553 "check_hlds.format_call.c"
  }
#line 3555 "check_hlds.format_call.c"
}

#line 3558 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____format_call_kind_0_0_10001(
#line 3561 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3563 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3565 "check_hlds.format_call.c"
{
#line 3567 "check_hlds.format_call.c"
  {
#line 3569 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3572 "check_hlds.format_call.c"
    {
#line 3574 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____format_call_kind_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3577 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3579 "check_hlds.format_call.c"
  }
#line 3581 "check_hlds.format_call.c"
}

#line 3584 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____format_call_kind_0_0_10001(
#line 3587 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3589 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3591 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3593 "check_hlds.format_call.c"
{
#line 3595 "check_hlds.format_call.c"
  {
#line 3597 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3600 "check_hlds.format_call.c"
    {
#line 3602 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____format_call_kind_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3605 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3607 "check_hlds.format_call.c"
  }
#line 3609 "check_hlds.format_call.c"
}

#line 3612 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____format_call_site_0_0_10001(
#line 3615 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3617 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3619 "check_hlds.format_call.c"
{
#line 3621 "check_hlds.format_call.c"
  {
#line 3623 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3626 "check_hlds.format_call.c"
    {
#line 3628 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____format_call_site_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3631 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3633 "check_hlds.format_call.c"
  }
#line 3635 "check_hlds.format_call.c"
}

#line 3638 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____format_call_site_0_0_10001(
#line 3641 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3643 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3645 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3647 "check_hlds.format_call.c"
{
#line 3649 "check_hlds.format_call.c"
  {
#line 3651 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3654 "check_hlds.format_call.c"
    {
#line 3656 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____format_call_site_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3659 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3661 "check_hlds.format_call.c"
  }
#line 3663 "check_hlds.format_call.c"
}

#line 3666 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____list_element_map_0_0_10001(
#line 3669 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3671 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3673 "check_hlds.format_call.c"
{
#line 3675 "check_hlds.format_call.c"
  {
#line 3677 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3680 "check_hlds.format_call.c"
    {
#line 3682 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____list_element_map_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3685 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3687 "check_hlds.format_call.c"
  }
#line 3689 "check_hlds.format_call.c"
}

#line 3692 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____list_element_map_0_0_10001(
#line 3695 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3697 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3699 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3701 "check_hlds.format_call.c"
{
#line 3703 "check_hlds.format_call.c"
  {
#line 3705 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3708 "check_hlds.format_call.c"
    {
#line 3710 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____list_element_map_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3713 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3715 "check_hlds.format_call.c"
  }
#line 3717 "check_hlds.format_call.c"
}

#line 3720 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____list_skeleton_map_0_0_10001(
#line 3723 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3725 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3727 "check_hlds.format_call.c"
{
#line 3729 "check_hlds.format_call.c"
  {
#line 3731 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3734 "check_hlds.format_call.c"
    {
#line 3736 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____list_skeleton_map_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3739 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3741 "check_hlds.format_call.c"
  }
#line 3743 "check_hlds.format_call.c"
}

#line 3746 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____list_skeleton_map_0_0_10001(
#line 3749 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3751 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3753 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3755 "check_hlds.format_call.c"
{
#line 3757 "check_hlds.format_call.c"
  {
#line 3759 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3762 "check_hlds.format_call.c"
    {
#line 3764 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____list_skeleton_map_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3767 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3769 "check_hlds.format_call.c"
  }
#line 3771 "check_hlds.format_call.c"
}

#line 3774 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____list_skeleton_state_0_0_10001(
#line 3777 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3779 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3781 "check_hlds.format_call.c"
{
#line 3783 "check_hlds.format_call.c"
  {
#line 3785 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3788 "check_hlds.format_call.c"
    {
#line 3790 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____list_skeleton_state_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3793 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3795 "check_hlds.format_call.c"
  }
#line 3797 "check_hlds.format_call.c"
}

#line 3800 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____list_skeleton_state_0_0_10001(
#line 3803 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3805 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3807 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3809 "check_hlds.format_call.c"
{
#line 3811 "check_hlds.format_call.c"
  {
#line 3813 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3816 "check_hlds.format_call.c"
    {
#line 3818 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____list_skeleton_state_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3821 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3823 "check_hlds.format_call.c"
  }
#line 3825 "check_hlds.format_call.c"
}

#line 3828 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____string_component_0_0_10001(
#line 3831 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3833 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3835 "check_hlds.format_call.c"
{
#line 3837 "check_hlds.format_call.c"
  {
#line 3839 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3842 "check_hlds.format_call.c"
    {
#line 3844 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____string_component_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3847 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3849 "check_hlds.format_call.c"
  }
#line 3851 "check_hlds.format_call.c"
}

#line 3854 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____string_component_0_0_10001(
#line 3857 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3859 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3861 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3863 "check_hlds.format_call.c"
{
#line 3865 "check_hlds.format_call.c"
  {
#line 3867 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3870 "check_hlds.format_call.c"
    {
#line 3872 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____string_component_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3875 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3877 "check_hlds.format_call.c"
  }
#line 3879 "check_hlds.format_call.c"
}

#line 3882 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____string_map_0_0_10001(
#line 3885 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3887 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3889 "check_hlds.format_call.c"
{
#line 3891 "check_hlds.format_call.c"
  {
#line 3893 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3896 "check_hlds.format_call.c"
    {
#line 3898 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____string_map_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3901 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3903 "check_hlds.format_call.c"
  }
#line 3905 "check_hlds.format_call.c"
}

#line 3908 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____string_map_0_0_10001(
#line 3911 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3913 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3915 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3917 "check_hlds.format_call.c"
{
#line 3919 "check_hlds.format_call.c"
  {
#line 3921 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3924 "check_hlds.format_call.c"
    {
#line 3926 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____string_map_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3929 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3931 "check_hlds.format_call.c"
  }
#line 3933 "check_hlds.format_call.c"
}

#line 3936 "check_hlds.format_call.c"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____what_to_print_0_0_10001(
#line 3939 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 3941 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2)
#line 3943 "check_hlds.format_call.c"
{
#line 3945 "check_hlds.format_call.c"
  {
#line 3947 "check_hlds.format_call.c"
    MR_bool check_hlds__format_call__succeeded;

#line 3950 "check_hlds.format_call.c"
    {
#line 3952 "check_hlds.format_call.c"
      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____what_to_print_0_0(((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2));
    }
#line 3955 "check_hlds.format_call.c"
    return check_hlds__format_call__succeeded;
#line 3957 "check_hlds.format_call.c"
  }
#line 3959 "check_hlds.format_call.c"
}

#line 3962 "check_hlds.format_call.c"
static void MR_CALL 
check_hlds__format_call____Compare____what_to_print_0_0_10001(
#line 3965 "check_hlds.format_call.c"
  MR_Box * check_hlds__format_call__wrapper_arg_1,
#line 3967 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 3969 "check_hlds.format_call.c"
  MR_Box check_hlds__format_call__wrapper_arg_3)
#line 3971 "check_hlds.format_call.c"
{
#line 3973 "check_hlds.format_call.c"
  {
#line 3975 "check_hlds.format_call.c"
    MR_Word check_hlds__format_call__conv0_HeadVar__1_1;

#line 3978 "check_hlds.format_call.c"
    {
#line 3980 "check_hlds.format_call.c"
      check_hlds__format_call____Compare____what_to_print_0_0(&check_hlds__format_call__conv0_HeadVar__1_1, ((MR_Word) check_hlds__format_call__wrapper_arg_2), ((MR_Word) check_hlds__format_call__wrapper_arg_3));
    }
#line 3983 "check_hlds.format_call.c"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv0_HeadVar__1_1));
#line 3985 "check_hlds.format_call.c"
  }
#line 3987 "check_hlds.format_call.c"
}

#line 593 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_p_0(
#line 593 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 593 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__2_2)
#line 593 "format_call.m"
{
#line 595 "format_call.m"
  {
#line 595 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;

#line 595 "format_call.m"
    if ((check_hlds__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 595 "format_call.m"
      {
#line 595 "format_call.m"
        *check_hlds__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "format_call.m"
        check_hlds__format_call__succeeded = MR_TRUE;
#line 595 "format_call.m"
      }
#line 595 "format_call.m"
    else
#line 596 "format_call.m"
      {
#line 596 "format_call.m"
        MR_Box check_hlds__format_call__Value_3;
#line 596 "format_call.m"
        MR_Word check_hlds__format_call__TailMaybes_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 596 "format_call.m"
        MR_Word check_hlds__format_call__Tail_5;
#line 596 "format_call.m"
        MR_Word check_hlds__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));

#line 596 "format_call.m"
        check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 596 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 596 "format_call.m"
          {
#line 596 "format_call.m"
            check_hlds__format_call__Value_3 = (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_6_6, (MR_Integer) 0));
#line 597 "format_call.m"
            {
#line 597 "format_call.m"
              check_hlds__format_call__succeeded = check_hlds__format_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_p_0(check_hlds__format_call__TailMaybes_4, &check_hlds__format_call__Tail_5);
            }
#line 596 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 596 "format_call.m"
              {
#line 596 "format_call.m"
                {
#line 596 "format_call.m"
                  MR_Word base;
#line 596 "format_call.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "format_call.m"
                  *check_hlds__format_call__HeadVar__2_2 = base;
#line 596 "format_call.m"
                  MR_hl_field(MR_mktag(1), base, 0) = check_hlds__format_call__Value_3;
#line 596 "format_call.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__format_call__Tail_5));
#line 596 "format_call.m"
                }
#line 596 "format_call.m"
                check_hlds__format_call__succeeded = MR_TRUE;
#line 596 "format_call.m"
              }
#line 596 "format_call.m"
          }
#line 596 "format_call.m"
      }
#line 595 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 595 "format_call.m"
  }
#line 593 "format_call.m"
}

#line 205 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____what_to_print_0_0(
#line 205 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 205 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 205 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 205 "format_call.m"
{
#line 205 "format_call.m"
  {
#line 205 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 205 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_9 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;
#line 205 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_10 = (MR_Integer) check_hlds__format_call__HeadVar__3_3;

#line 205 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_9 == check_hlds__format_call__CastY_10);
#line 205 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 4097 "check_hlds.format_call.c"
      *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "format_call.m"
    else
#line 205 "format_call.m"
      {
#line 205 "format_call.m"
        MR_Word check_hlds__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 205 "format_call.m"
        MR_Word check_hlds__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "format_call.m"
        MR_Word check_hlds__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 205 "format_call.m"
        MR_Word check_hlds__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "format_call.m"
        MR_Word check_hlds__format_call__V_8_8;

#line 205 "format_call.m"
        {
#line 205 "format_call.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], &check_hlds__format_call__V_8_8, ((MR_Box) (check_hlds__format_call__V_4_4)), ((MR_Box) (check_hlds__format_call__V_6_6)));
        }
#line 4119 "check_hlds.format_call.c"
        check_hlds__format_call__succeeded = (check_hlds__format_call__V_8_8 == (MR_Integer) 0);
#line 205 "format_call.m"
        check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 205 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 205 "format_call.m"
          *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_8_8;
#line 205 "format_call.m"
        else
#line 205 "format_call.m"
          {
#line 205 "format_call.m"
            mercury__string____Compare____poly_type_0_0(check_hlds__format_call__HeadVar__1_1, check_hlds__format_call__V_5_5, check_hlds__format_call__V_7_7);
#line 205 "format_call.m"
            return;
          }
#line 205 "format_call.m"
      }
#line 205 "format_call.m"
  }
#line 205 "format_call.m"
}

#line 205 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____what_to_print_0_0(
#line 205 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 205 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 205 "format_call.m"
{
#line 205 "format_call.m"
  {
#line 205 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 205 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_7 = (MR_Integer) check_hlds__format_call__HeadVar__1_1;
#line 205 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_8 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;

#line 205 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_7 == check_hlds__format_call__CastY_8);
#line 205 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 205 "format_call.m"
      check_hlds__format_call__succeeded = MR_TRUE;
#line 205 "format_call.m"
    else
#line 205 "format_call.m"
      {
#line 205 "format_call.m"
        MR_Word check_hlds__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 205 "format_call.m"
        MR_Word check_hlds__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "format_call.m"
        MR_Word check_hlds__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 205 "format_call.m"
        MR_Word check_hlds__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));

#line 4180 "check_hlds.format_call.c"
        {
#line 4182 "check_hlds.format_call.c"
          check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], ((MR_Box) (check_hlds__format_call__V_3_3)), ((MR_Box) (check_hlds__format_call__V_5_5)));
        }
#line 205 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 4187 "check_hlds.format_call.c"
          {
#line 4189 "check_hlds.format_call.c"
            return check_hlds__format_call__succeeded = mercury__string____Unify____poly_type_0_0(check_hlds__format_call__V_4_4, check_hlds__format_call__V_6_6);
          }
#line 205 "format_call.m"
      }
#line 205 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 205 "format_call.m"
  }
#line 205 "format_call.m"
}

#line 194 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____string_map_0_0(
#line 194 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 194 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 194 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 194 "format_call.m"
{
#line 194 "format_call.m"
  {
#line 194 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 194 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar1_4 = check_hlds__format_call__HeadVar__2_2;
#line 194 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar2_5 = check_hlds__format_call__HeadVar__3_3;

#line 194 "format_call.m"
    {
#line 194 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[1], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__format_call__Cast_HeadVar2_5)));
#line 194 "format_call.m"
      return;
    }
#line 194 "format_call.m"
  }
#line 194 "format_call.m"
}

#line 194 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____string_map_0_0(
#line 194 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 194 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 194 "format_call.m"
{
#line 194 "format_call.m"
  {
#line 194 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 194 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar1_3 = check_hlds__format_call__HeadVar__1_1;
#line 194 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar2_4 = check_hlds__format_call__HeadVar__2_2;

#line 194 "format_call.m"
    {
#line 194 "format_call.m"
      return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[1], ((MR_Box) (check_hlds__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__format_call__Cast_HeadVar2_4)));
    }
#line 194 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 194 "format_call.m"
  }
#line 194 "format_call.m"
}

#line 1199 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____string_component_0_0(
#line 1199 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 1199 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 1199 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 1199 "format_call.m"
{
#line 1199 "format_call.m"
  {
#line 1199 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 1199 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_54 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;
#line 1199 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_55 = (MR_Integer) check_hlds__format_call__HeadVar__3_3;

#line 1199 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_54 == check_hlds__format_call__CastY_55);
#line 1199 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 4287 "check_hlds.format_call.c"
      *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 1199 "format_call.m"
    else
#line 1199 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1199 "format_call.m"
        {
#line 1199 "format_call.m"
          MR_String check_hlds__format_call__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 1199 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1199 "format_call.m"
            {
#line 1199 "format_call.m"
              MR_String check_hlds__format_call__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)));

#line 1199 "format_call.m"
              {
#line 1199 "format_call.m"
                mercury__private_builtin__builtin_compare_string_3_p_0(check_hlds__format_call__HeadVar__1_1, check_hlds__format_call__V_61_61, check_hlds__format_call__V_5_5);
#line 1199 "format_call.m"
                return;
              }
#line 1199 "format_call.m"
            }
#line 1199 "format_call.m"
          else
#line 1199 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4318 "check_hlds.format_call.c"
              *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1199 "format_call.m"
            else
#line 1199 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4324 "check_hlds.format_call.c"
                *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1199 "format_call.m"
              else
#line 1199 "format_call.m"
                if (((((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4330 "check_hlds.format_call.c"
                  *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1199 "format_call.m"
                else
#line 4334 "check_hlds.format_call.c"
                  *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1199 "format_call.m"
        }
#line 1199 "format_call.m"
      else
#line 1199 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1199 "format_call.m"
          {
#line 1199 "format_call.m"
            MR_Word check_hlds__format_call__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 1199 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4349 "check_hlds.format_call.c"
              *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1199 "format_call.m"
            else
#line 1199 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1199 "format_call.m"
                {
#line 1199 "format_call.m"
                  MR_Word check_hlds__format_call__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)));

#line 1199 "format_call.m"
                  {
#line 1199 "format_call.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__V_63_63)), ((MR_Box) (check_hlds__format_call__V_29_29)));
#line 1199 "format_call.m"
                    return;
                  }
#line 1199 "format_call.m"
                }
#line 1199 "format_call.m"
              else
#line 1199 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4373 "check_hlds.format_call.c"
                  *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1199 "format_call.m"
                else
#line 1199 "format_call.m"
                  if (((((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4379 "check_hlds.format_call.c"
                    *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1199 "format_call.m"
                  else
#line 4383 "check_hlds.format_call.c"
                    *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1199 "format_call.m"
          }
#line 1199 "format_call.m"
        else
#line 1199 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1199 "format_call.m"
            {
#line 1199 "format_call.m"
              MR_Word check_hlds__format_call__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 1199 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4398 "check_hlds.format_call.c"
                *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1199 "format_call.m"
              else
#line 1199 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4404 "check_hlds.format_call.c"
                  *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1199 "format_call.m"
                else
#line 1199 "format_call.m"
                  if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1199 "format_call.m"
                    {
#line 1199 "format_call.m"
                      MR_Word check_hlds__format_call__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)));

#line 1199 "format_call.m"
                      {
#line 1199 "format_call.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__V_64_64)), ((MR_Box) (check_hlds__format_call__V_17_17)));
#line 1199 "format_call.m"
                        return;
                      }
#line 1199 "format_call.m"
                    }
#line 1199 "format_call.m"
                  else
#line 1199 "format_call.m"
                    if (((((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4428 "check_hlds.format_call.c"
                      *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1199 "format_call.m"
                    else
#line 4432 "check_hlds.format_call.c"
                      *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1199 "format_call.m"
            }
#line 1199 "format_call.m"
          else
#line 1199 "format_call.m"
            if (((((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1199 "format_call.m"
              {
#line 1199 "format_call.m"
                MR_Word check_hlds__format_call__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));

#line 1199 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4447 "check_hlds.format_call.c"
                  *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1199 "format_call.m"
                else
#line 1199 "format_call.m"
                  if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4453 "check_hlds.format_call.c"
                    *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1199 "format_call.m"
                  else
#line 1199 "format_call.m"
                    if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4459 "check_hlds.format_call.c"
                      *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1199 "format_call.m"
                    else
#line 1199 "format_call.m"
                      if (((((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1199 "format_call.m"
                        {
#line 1199 "format_call.m"
                          MR_Word check_hlds__format_call__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 1)));

#line 1199 "format_call.m"
                          {
#line 1199 "format_call.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__V_62_62)), ((MR_Box) (check_hlds__format_call__V_53_53)));
#line 1199 "format_call.m"
                            return;
                          }
#line 1199 "format_call.m"
                        }
#line 1199 "format_call.m"
                      else
#line 4481 "check_hlds.format_call.c"
                        *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1199 "format_call.m"
              }
#line 1199 "format_call.m"
            else
#line 1199 "format_call.m"
              {
#line 1199 "format_call.m"
                MR_Word check_hlds__format_call__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));

#line 1199 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4494 "check_hlds.format_call.c"
                  *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1199 "format_call.m"
                else
#line 1199 "format_call.m"
                  if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4500 "check_hlds.format_call.c"
                    *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1199 "format_call.m"
                  else
#line 1199 "format_call.m"
                    if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4506 "check_hlds.format_call.c"
                      *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 1199 "format_call.m"
                    else
#line 1199 "format_call.m"
                      if (((((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4512 "check_hlds.format_call.c"
                        *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 1199 "format_call.m"
                      else
#line 1199 "format_call.m"
                        {
#line 1199 "format_call.m"
                          MR_Word check_hlds__format_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 1)));

#line 1199 "format_call.m"
                          {
#line 1199 "format_call.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__V_65_65)), ((MR_Box) (check_hlds__format_call__V_41_41)));
#line 1199 "format_call.m"
                            return;
                          }
#line 1199 "format_call.m"
                        }
#line 1199 "format_call.m"
              }
#line 1199 "format_call.m"
  }
#line 1199 "format_call.m"
}

#line 1199 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____string_component_0_0(
#line 1199 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 1199 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 1199 "format_call.m"
{
#line 1199 "format_call.m"
  {
#line 1199 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 1199 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_13 = (MR_Integer) check_hlds__format_call__HeadVar__1_1;
#line 1199 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_14 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;

#line 1199 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_13 == check_hlds__format_call__CastY_14);
#line 1199 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 1199 "format_call.m"
      check_hlds__format_call__succeeded = MR_TRUE;
#line 1199 "format_call.m"
    else
#line 1199 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1199 "format_call.m"
        {
#line 1199 "format_call.m"
          MR_String check_hlds__format_call__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1199 "format_call.m"
          MR_String check_hlds__format_call__V_4_4;

#line 1199 "format_call.m"
          check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1199 "format_call.m"
          if (check_hlds__format_call__succeeded)
#line 1199 "format_call.m"
            {
#line 1199 "format_call.m"
              check_hlds__format_call__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 4580 "check_hlds.format_call.c"
              check_hlds__format_call__succeeded = (strcmp(check_hlds__format_call__V_3_3, check_hlds__format_call__V_4_4) == 0);
#line 1199 "format_call.m"
            }
#line 1199 "format_call.m"
        }
#line 1199 "format_call.m"
      else
#line 1199 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1199 "format_call.m"
          {
#line 1199 "format_call.m"
            MR_Word check_hlds__format_call__TypeInfo_16_16;
#line 1199 "format_call.m"
            MR_Word check_hlds__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1199 "format_call.m"
            MR_Word check_hlds__format_call__V_8_8;

#line 1199 "format_call.m"
            check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1199 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 1199 "format_call.m"
              {
#line 1199 "format_call.m"
                check_hlds__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 4607 "check_hlds.format_call.c"
                check_hlds__format_call__TypeInfo_16_16 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 4609 "check_hlds.format_call.c"
                {
#line 4611 "check_hlds.format_call.c"
                  return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_16_16, ((MR_Box) (check_hlds__format_call__V_7_7)), ((MR_Box) (check_hlds__format_call__V_8_8)));
                }
#line 1199 "format_call.m"
              }
#line 1199 "format_call.m"
          }
#line 1199 "format_call.m"
        else
#line 1199 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1199 "format_call.m"
            {
#line 1199 "format_call.m"
              MR_Word check_hlds__format_call__TypeInfo_17_17;
#line 1199 "format_call.m"
              MR_Word check_hlds__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1199 "format_call.m"
              MR_Word check_hlds__format_call__V_6_6;

#line 1199 "format_call.m"
              check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1199 "format_call.m"
              if (check_hlds__format_call__succeeded)
#line 1199 "format_call.m"
                {
#line 1199 "format_call.m"
                  check_hlds__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 4639 "check_hlds.format_call.c"
                  check_hlds__format_call__TypeInfo_17_17 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 4641 "check_hlds.format_call.c"
                  {
#line 4643 "check_hlds.format_call.c"
                    return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_17_17, ((MR_Box) (check_hlds__format_call__V_5_5)), ((MR_Box) (check_hlds__format_call__V_6_6)));
                  }
#line 1199 "format_call.m"
                }
#line 1199 "format_call.m"
            }
#line 1199 "format_call.m"
          else
#line 1199 "format_call.m"
            if (((((MR_tag((MR_Word) check_hlds__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1199 "format_call.m"
              {
#line 1199 "format_call.m"
                MR_Word check_hlds__format_call__TypeInfo_15_15;
#line 1199 "format_call.m"
                MR_Word check_hlds__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 1199 "format_call.m"
                MR_Word check_hlds__format_call__V_12_12;

#line 1199 "format_call.m"
                check_hlds__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1199 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 1199 "format_call.m"
                  {
#line 1199 "format_call.m"
                    check_hlds__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 4671 "check_hlds.format_call.c"
                    check_hlds__format_call__TypeInfo_15_15 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 4673 "check_hlds.format_call.c"
                    {
#line 4675 "check_hlds.format_call.c"
                      return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_15_15, ((MR_Box) (check_hlds__format_call__V_11_11)), ((MR_Box) (check_hlds__format_call__V_12_12)));
                    }
#line 1199 "format_call.m"
                  }
#line 1199 "format_call.m"
              }
#line 1199 "format_call.m"
            else
#line 1199 "format_call.m"
              {
#line 1199 "format_call.m"
                MR_Word check_hlds__format_call__TypeInfo_18_18;
#line 1199 "format_call.m"
                MR_Word check_hlds__format_call__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 1199 "format_call.m"
                MR_Word check_hlds__format_call__V_10_10;

#line 1199 "format_call.m"
                check_hlds__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1199 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 1199 "format_call.m"
                  {
#line 1199 "format_call.m"
                    check_hlds__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 4701 "check_hlds.format_call.c"
                    check_hlds__format_call__TypeInfo_18_18 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 4703 "check_hlds.format_call.c"
                    {
#line 4705 "check_hlds.format_call.c"
                      return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_18_18, ((MR_Box) (check_hlds__format_call__V_9_9)), ((MR_Box) (check_hlds__format_call__V_10_10)));
                    }
#line 1199 "format_call.m"
                  }
#line 1199 "format_call.m"
              }
#line 1199 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 1199 "format_call.m"
  }
#line 1199 "format_call.m"
}

#line 185 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____list_skeleton_state_0_0(
#line 185 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 185 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 185 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 185 "format_call.m"
{
#line 185 "format_call.m"
  {
#line 185 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 185 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_13 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;
#line 185 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_14 = (MR_Integer) check_hlds__format_call__HeadVar__3_3;

#line 185 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_13 == check_hlds__format_call__CastY_14);
#line 185 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 4743 "check_hlds.format_call.c"
      *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 185 "format_call.m"
    else
#line 185 "format_call.m"
      if ((check_hlds__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 185 "format_call.m"
        if ((check_hlds__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 185 "format_call.m"
          *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 185 "format_call.m"
        else
#line 4755 "check_hlds.format_call.c"
          *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 185 "format_call.m"
      else
#line 185 "format_call.m"
        {
#line 185 "format_call.m"
          MR_Word check_hlds__format_call__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 185 "format_call.m"
          MR_Word check_hlds__format_call__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 185 "format_call.m"
          if ((check_hlds__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4768 "check_hlds.format_call.c"
            *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 185 "format_call.m"
          else
#line 185 "format_call.m"
            {
#line 185 "format_call.m"
              MR_Word check_hlds__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 185 "format_call.m"
              MR_Word check_hlds__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 185 "format_call.m"
              MR_Word check_hlds__format_call__V_12_12;

#line 185 "format_call.m"
              {
#line 185 "format_call.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], &check_hlds__format_call__V_12_12, ((MR_Box) (check_hlds__format_call__V_18_18)), ((MR_Box) (check_hlds__format_call__V_10_10)));
              }
#line 4786 "check_hlds.format_call.c"
              check_hlds__format_call__succeeded = (check_hlds__format_call__V_12_12 == (MR_Integer) 0);
#line 185 "format_call.m"
              check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 185 "format_call.m"
              if (check_hlds__format_call__succeeded)
#line 185 "format_call.m"
                *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_12_12;
#line 185 "format_call.m"
              else
#line 185 "format_call.m"
                {
#line 185 "format_call.m"
                  {
#line 185 "format_call.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__V_17_17)), ((MR_Box) (check_hlds__format_call__V_11_11)));
#line 185 "format_call.m"
                    return;
                  }
#line 185 "format_call.m"
                }
#line 185 "format_call.m"
            }
#line 185 "format_call.m"
        }
#line 185 "format_call.m"
  }
#line 185 "format_call.m"
}

#line 185 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____list_skeleton_state_0_0(
#line 185 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 185 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 185 "format_call.m"
{
#line 185 "format_call.m"
  {
#line 185 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 185 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_9 = (MR_Integer) check_hlds__format_call__HeadVar__1_1;
#line 185 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_10 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;

#line 185 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_9 == check_hlds__format_call__CastY_10);
#line 185 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 185 "format_call.m"
      check_hlds__format_call__succeeded = MR_TRUE;
#line 185 "format_call.m"
    else
#line 185 "format_call.m"
      if ((check_hlds__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 185 "format_call.m"
        {
#line 185 "format_call.m"
          MR_Integer check_hlds__format_call__CastX_3 = (MR_Integer) check_hlds__format_call__HeadVar__1_1;
#line 185 "format_call.m"
          MR_Integer check_hlds__format_call__CastY_4 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;

#line 185 "format_call.m"
          check_hlds__format_call__succeeded = (check_hlds__format_call__CastY_4 == check_hlds__format_call__CastX_3);
#line 185 "format_call.m"
        }
#line 185 "format_call.m"
      else
#line 185 "format_call.m"
        {
#line 185 "format_call.m"
          MR_Word check_hlds__format_call__TypeInfo_11_11;
#line 185 "format_call.m"
          MR_Word check_hlds__format_call__TypeInfo_12_12;
#line 185 "format_call.m"
          MR_Word check_hlds__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 185 "format_call.m"
          MR_Word check_hlds__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 185 "format_call.m"
          MR_Word check_hlds__format_call__V_7_7;
#line 185 "format_call.m"
          MR_Word check_hlds__format_call__V_8_8;

#line 185 "format_call.m"
          check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 185 "format_call.m"
          if (check_hlds__format_call__succeeded)
#line 185 "format_call.m"
            {
#line 185 "format_call.m"
              check_hlds__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 185 "format_call.m"
              check_hlds__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 4882 "check_hlds.format_call.c"
              check_hlds__format_call__TypeInfo_11_11 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 4884 "check_hlds.format_call.c"
              {
#line 4886 "check_hlds.format_call.c"
                check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_11_11, ((MR_Box) (check_hlds__format_call__V_5_5)), ((MR_Box) (check_hlds__format_call__V_7_7)));
              }
#line 185 "format_call.m"
              if (check_hlds__format_call__succeeded)
#line 185 "format_call.m"
                {
#line 4893 "check_hlds.format_call.c"
                  check_hlds__format_call__TypeInfo_12_12 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 4895 "check_hlds.format_call.c"
                  {
#line 4897 "check_hlds.format_call.c"
                    return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_12_12, ((MR_Box) (check_hlds__format_call__V_6_6)), ((MR_Box) (check_hlds__format_call__V_8_8)));
                  }
#line 185 "format_call.m"
                }
#line 185 "format_call.m"
            }
#line 185 "format_call.m"
        }
#line 185 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 185 "format_call.m"
  }
#line 185 "format_call.m"
}

#line 198 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____list_skeleton_map_0_0(
#line 198 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 198 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 198 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 198 "format_call.m"
{
#line 198 "format_call.m"
  {
#line 198 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 198 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar1_4 = check_hlds__format_call__HeadVar__2_2;
#line 198 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar2_5 = check_hlds__format_call__HeadVar__3_3;

#line 198 "format_call.m"
    {
#line 198 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[2], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__format_call__Cast_HeadVar2_5)));
#line 198 "format_call.m"
      return;
    }
#line 198 "format_call.m"
  }
#line 198 "format_call.m"
}

#line 198 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____list_skeleton_map_0_0(
#line 198 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 198 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 198 "format_call.m"
{
#line 198 "format_call.m"
  {
#line 198 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 198 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar1_3 = check_hlds__format_call__HeadVar__1_1;
#line 198 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar2_4 = check_hlds__format_call__HeadVar__2_2;

#line 198 "format_call.m"
    {
#line 198 "format_call.m"
      return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[2], ((MR_Box) (check_hlds__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__format_call__Cast_HeadVar2_4)));
    }
#line 198 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 198 "format_call.m"
  }
#line 198 "format_call.m"
}

#line 210 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____list_element_map_0_0(
#line 210 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 210 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 210 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 210 "format_call.m"
{
#line 210 "format_call.m"
  {
#line 210 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 210 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar1_4 = check_hlds__format_call__HeadVar__2_2;
#line 210 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar2_5 = check_hlds__format_call__HeadVar__3_3;

#line 210 "format_call.m"
    {
#line 210 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[3], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__format_call__Cast_HeadVar2_5)));
#line 210 "format_call.m"
      return;
    }
#line 210 "format_call.m"
  }
#line 210 "format_call.m"
}

#line 210 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____list_element_map_0_0(
#line 210 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 210 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 210 "format_call.m"
{
#line 210 "format_call.m"
  {
#line 210 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 210 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar1_3 = check_hlds__format_call__HeadVar__1_1;
#line 210 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar2_4 = check_hlds__format_call__HeadVar__2_2;

#line 210 "format_call.m"
    {
#line 210 "format_call.m"
      return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[3], ((MR_Box) (check_hlds__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__format_call__Cast_HeadVar2_4)));
    }
#line 210 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 210 "format_call.m"
  }
#line 210 "format_call.m"
}

#line 172 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____format_call_site_0_0(
#line 172 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 172 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 172 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 172 "format_call.m"
{
#line 172 "format_call.m"
  {
#line 172 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 172 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_30 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;
#line 172 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_31 = (MR_Integer) check_hlds__format_call__HeadVar__3_3;

#line 172 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_30 == check_hlds__format_call__CastY_31);
#line 172 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 5061 "check_hlds.format_call.c"
      *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 172 "format_call.m"
    else
#line 172 "format_call.m"
      {
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 4)));
#line 172 "format_call.m"
        MR_String check_hlds__format_call__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 5)));
#line 172 "format_call.m"
        MR_Integer check_hlds__format_call__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 6)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 7)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 8)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 2)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 3)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 4)));
#line 172 "format_call.m"
        MR_String check_hlds__format_call__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 5)));
#line 172 "format_call.m"
        MR_Integer check_hlds__format_call__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 6)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 7)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 8)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_22_22;
#line 172 "format_call.m"
        MR_Integer check_hlds__format_call__V_41_41 = (MR_Integer) check_hlds__format_call__V_4_4;
#line 172 "format_call.m"
        MR_Integer check_hlds__format_call__V_42_42 = (MR_Integer) check_hlds__format_call__V_13_13;

#line 172 "format_call.m"
        {
#line 172 "format_call.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__format_call__V_22_22, check_hlds__format_call__V_41_41, check_hlds__format_call__V_42_42);
        }
#line 5115 "check_hlds.format_call.c"
        check_hlds__format_call__succeeded = (check_hlds__format_call__V_22_22 == (MR_Integer) 0);
#line 172 "format_call.m"
        check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 172 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
          *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_22_22;
#line 172 "format_call.m"
        else
#line 172 "format_call.m"
          {
#line 172 "format_call.m"
            MR_Word check_hlds__format_call__V_23_23;

#line 172 "format_call.m"
            {
#line 172 "format_call.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], &check_hlds__format_call__V_23_23, ((MR_Box) (check_hlds__format_call__V_5_5)), ((MR_Box) (check_hlds__format_call__V_14_14)));
            }
#line 5135 "check_hlds.format_call.c"
            check_hlds__format_call__succeeded = (check_hlds__format_call__V_23_23 == (MR_Integer) 0);
#line 172 "format_call.m"
            check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 172 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
              *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_23_23;
#line 172 "format_call.m"
            else
#line 172 "format_call.m"
              {
#line 172 "format_call.m"
                MR_Word check_hlds__format_call__V_24_24;

#line 172 "format_call.m"
                {
#line 172 "format_call.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], &check_hlds__format_call__V_24_24, ((MR_Box) (check_hlds__format_call__V_6_6)), ((MR_Box) (check_hlds__format_call__V_15_15)));
                }
#line 5155 "check_hlds.format_call.c"
                check_hlds__format_call__succeeded = (check_hlds__format_call__V_24_24 == (MR_Integer) 0);
#line 172 "format_call.m"
                check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 172 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
                  *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_24_24;
#line 172 "format_call.m"
                else
#line 172 "format_call.m"
                  {
#line 172 "format_call.m"
                    MR_Word check_hlds__format_call__V_25_25;

#line 172 "format_call.m"
                    {
#line 172 "format_call.m"
                      check_hlds__format_call____Compare____format_call_kind_0_0(&check_hlds__format_call__V_25_25, check_hlds__format_call__V_7_7, check_hlds__format_call__V_16_16);
                    }
#line 5175 "check_hlds.format_call.c"
                    check_hlds__format_call__succeeded = (check_hlds__format_call__V_25_25 == (MR_Integer) 0);
#line 172 "format_call.m"
                    check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 172 "format_call.m"
                    if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
                      *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_25_25;
#line 172 "format_call.m"
                    else
#line 172 "format_call.m"
                      {
#line 172 "format_call.m"
                        MR_Word check_hlds__format_call__V_26_26;

#line 172 "format_call.m"
                        {
#line 172 "format_call.m"
                          mdbcomp__prim_data____Compare____sym_name_0_0(&check_hlds__format_call__V_26_26, check_hlds__format_call__V_8_8, check_hlds__format_call__V_17_17);
                        }
#line 5195 "check_hlds.format_call.c"
                        check_hlds__format_call__succeeded = (check_hlds__format_call__V_26_26 == (MR_Integer) 0);
#line 172 "format_call.m"
                        check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 172 "format_call.m"
                        if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
                          *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_26_26;
#line 172 "format_call.m"
                        else
#line 172 "format_call.m"
                          {
#line 172 "format_call.m"
                            MR_Word check_hlds__format_call__V_27_27;

#line 172 "format_call.m"
                            {
#line 172 "format_call.m"
                              mercury__private_builtin__builtin_compare_string_3_p_0(&check_hlds__format_call__V_27_27, check_hlds__format_call__V_9_9, check_hlds__format_call__V_18_18);
                            }
#line 5215 "check_hlds.format_call.c"
                            check_hlds__format_call__succeeded = (check_hlds__format_call__V_27_27 == (MR_Integer) 0);
#line 172 "format_call.m"
                            check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 172 "format_call.m"
                            if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
                              *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_27_27;
#line 172 "format_call.m"
                            else
#line 172 "format_call.m"
                              {
#line 172 "format_call.m"
                                MR_Word check_hlds__format_call__V_28_28;

#line 172 "format_call.m"
                                {
#line 172 "format_call.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&check_hlds__format_call__V_28_28, check_hlds__format_call__V_10_10, check_hlds__format_call__V_19_19);
                                }
#line 5235 "check_hlds.format_call.c"
                                check_hlds__format_call__succeeded = (check_hlds__format_call__V_28_28 == (MR_Integer) 0);
#line 172 "format_call.m"
                                check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 172 "format_call.m"
                                if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
                                  *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_28_28;
#line 172 "format_call.m"
                                else
#line 172 "format_call.m"
                                  {
#line 172 "format_call.m"
                                    MR_Word check_hlds__format_call__V_29_29;

#line 172 "format_call.m"
                                    {
#line 172 "format_call.m"
                                      mercury__term____Compare____context_0_0(&check_hlds__format_call__V_29_29, check_hlds__format_call__V_11_11, check_hlds__format_call__V_20_20);
                                    }
#line 5255 "check_hlds.format_call.c"
                                    check_hlds__format_call__succeeded = (check_hlds__format_call__V_29_29 == (MR_Integer) 0);
#line 172 "format_call.m"
                                    check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 172 "format_call.m"
                                    if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
                                      *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_29_29;
#line 172 "format_call.m"
                                    else
#line 172 "format_call.m"
                                      {
#line 172 "format_call.m"
                                        MR_Integer check_hlds__format_call__V_43_43 = (MR_Integer) check_hlds__format_call__V_12_12;
#line 172 "format_call.m"
                                        MR_Integer check_hlds__format_call__V_44_44 = (MR_Integer) check_hlds__format_call__V_21_21;

#line 172 "format_call.m"
                                        {
#line 172 "format_call.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__format_call__HeadVar__1_1, check_hlds__format_call__V_43_43, check_hlds__format_call__V_44_44);
#line 172 "format_call.m"
                                          return;
                                        }
#line 172 "format_call.m"
                                      }
#line 172 "format_call.m"
                                  }
#line 172 "format_call.m"
                              }
#line 172 "format_call.m"
                          }
#line 172 "format_call.m"
                      }
#line 172 "format_call.m"
                  }
#line 172 "format_call.m"
              }
#line 172 "format_call.m"
          }
#line 172 "format_call.m"
      }
#line 172 "format_call.m"
  }
#line 172 "format_call.m"
}

#line 172 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____format_call_site_0_0(
#line 172 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 172 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 172 "format_call.m"
{
#line 172 "format_call.m"
  {
#line 172 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 172 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_21 = (MR_Integer) check_hlds__format_call__HeadVar__1_1;
#line 172 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_22 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;

#line 172 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_21 == check_hlds__format_call__CastY_22);
#line 172 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
      check_hlds__format_call__succeeded = MR_TRUE;
#line 172 "format_call.m"
    else
#line 172 "format_call.m"
      {
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__TypeInfo_24_24;
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__TypeInfo_25_25;
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 3)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 4)));
#line 172 "format_call.m"
        MR_String check_hlds__format_call__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 5)));
#line 172 "format_call.m"
        MR_Integer check_hlds__format_call__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 6)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 7)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 8)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 4)));
#line 172 "format_call.m"
        MR_String check_hlds__format_call__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 5)));
#line 172 "format_call.m"
        MR_Integer check_hlds__format_call__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 6)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 7)));
#line 172 "format_call.m"
        MR_Word check_hlds__format_call__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 8)));
#line 172 "format_call.m"
        MR_Integer check_hlds__format_call__V_28_28 = (MR_Integer) check_hlds__format_call__V_3_3;
#line 172 "format_call.m"
        MR_Integer check_hlds__format_call__V_29_29 = (MR_Integer) check_hlds__format_call__V_12_12;
#line 227 "format_call.m"
        MR_Integer check_hlds__format_call__CastX_32;
#line 227 "format_call.m"
        MR_Integer check_hlds__format_call__CastY_33;

#line 5379 "check_hlds.format_call.c"
        check_hlds__format_call__succeeded = (check_hlds__format_call__V_28_28 == check_hlds__format_call__V_29_29);
#line 172 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
          {
#line 5385 "check_hlds.format_call.c"
            check_hlds__format_call__TypeInfo_24_24 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 5387 "check_hlds.format_call.c"
            {
#line 5389 "check_hlds.format_call.c"
              check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_24_24, ((MR_Box) (check_hlds__format_call__V_4_4)), ((MR_Box) (check_hlds__format_call__V_13_13)));
            }
#line 172 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
              {
#line 5396 "check_hlds.format_call.c"
                check_hlds__format_call__TypeInfo_25_25 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 5398 "check_hlds.format_call.c"
                {
#line 5400 "check_hlds.format_call.c"
                  check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_25_25, ((MR_Box) (check_hlds__format_call__V_5_5)), ((MR_Box) (check_hlds__format_call__V_14_14)));
                }
#line 172 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
                  {
#line 5407 "check_hlds.format_call.c"
                    {
#line 5409 "check_hlds.format_call.c"
                      check_hlds__format_call__succeeded = check_hlds__format_call____Unify____format_call_kind_0_0(check_hlds__format_call__V_6_6, check_hlds__format_call__V_15_15);
                    }
#line 172 "format_call.m"
                    if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
                      {
#line 5416 "check_hlds.format_call.c"
                        {
#line 5418 "check_hlds.format_call.c"
                          check_hlds__format_call__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__format_call__V_7_7, check_hlds__format_call__V_16_16);
                        }
#line 172 "format_call.m"
                        if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
                          {
#line 5425 "check_hlds.format_call.c"
                            check_hlds__format_call__succeeded = (strcmp(check_hlds__format_call__V_8_8, check_hlds__format_call__V_17_17) == 0);
#line 172 "format_call.m"
                            if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
                              {
#line 5431 "check_hlds.format_call.c"
                                check_hlds__format_call__succeeded = (check_hlds__format_call__V_9_9 == check_hlds__format_call__V_18_18);
#line 172 "format_call.m"
                                if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
                                  {
#line 5437 "check_hlds.format_call.c"
                                    {
#line 5439 "check_hlds.format_call.c"
                                      check_hlds__format_call__succeeded = mercury__term____Unify____context_0_0(check_hlds__format_call__V_10_10, check_hlds__format_call__V_19_19);
                                    }
#line 172 "format_call.m"
                                    if (check_hlds__format_call__succeeded)
#line 172 "format_call.m"
                                      {
#line 227 "format_call.m"
                                        check_hlds__format_call__CastX_32 = (MR_Integer) check_hlds__format_call__V_11_11;
#line 227 "format_call.m"
                                        check_hlds__format_call__CastY_33 = (MR_Integer) check_hlds__format_call__V_20_20;
#line 227 "format_call.m"
                                        check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_32 == check_hlds__format_call__CastY_33);
#line 227 "format_call.m"
                                        if (check_hlds__format_call__succeeded)
#line 227 "format_call.m"
                                          check_hlds__format_call__succeeded = MR_TRUE;
#line 227 "format_call.m"
                                        else
#line 227 "format_call.m"
                                          {
#line 227 "format_call.m"
                                            MR_Integer check_hlds__format_call__V_30_30 = (MR_Integer) check_hlds__format_call__V_11_11;
#line 227 "format_call.m"
                                            MR_Integer check_hlds__format_call__V_31_31 = (MR_Integer) check_hlds__format_call__V_20_20;

#line 5465 "check_hlds.format_call.c"
                                            check_hlds__format_call__succeeded = (check_hlds__format_call__V_30_30 == check_hlds__format_call__V_31_31);
#line 227 "format_call.m"
                                          }
#line 172 "format_call.m"
                                      }
#line 172 "format_call.m"
                                  }
#line 172 "format_call.m"
                              }
#line 172 "format_call.m"
                          }
#line 172 "format_call.m"
                      }
#line 172 "format_call.m"
                  }
#line 172 "format_call.m"
              }
#line 172 "format_call.m"
          }
#line 172 "format_call.m"
      }
#line 172 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 172 "format_call.m"
  }
#line 172 "format_call.m"
}

#line 243 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____format_call_kind_0_0(
#line 243 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 243 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 243 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 243 "format_call.m"
{
#line 243 "format_call.m"
  {
#line 243 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 243 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_90 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;
#line 243 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_91 = (MR_Integer) check_hlds__format_call__HeadVar__3_3;

#line 243 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_90 == check_hlds__format_call__CastY_91);
#line 243 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 5518 "check_hlds.format_call.c"
      *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 243 "format_call.m"
    else
#line 243 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 243 "format_call.m"
        {
#line 243 "format_call.m"
          MR_Word check_hlds__format_call__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 243 "format_call.m"
          MR_Word check_hlds__format_call__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 243 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 243 "format_call.m"
            {
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_25_25;

#line 243 "format_call.m"
              {
#line 243 "format_call.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], &check_hlds__format_call__V_25_25, ((MR_Box) (check_hlds__format_call__V_103_103)), ((MR_Box) (check_hlds__format_call__V_23_23)));
              }
#line 5547 "check_hlds.format_call.c"
              check_hlds__format_call__succeeded = (check_hlds__format_call__V_25_25 == (MR_Integer) 0);
#line 243 "format_call.m"
              check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 243 "format_call.m"
              if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
                *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_25_25;
#line 243 "format_call.m"
              else
#line 243 "format_call.m"
                {
#line 243 "format_call.m"
                  {
#line 243 "format_call.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__V_102_102)), ((MR_Box) (check_hlds__format_call__V_24_24)));
#line 243 "format_call.m"
                    return;
                  }
#line 243 "format_call.m"
                }
#line 243 "format_call.m"
            }
#line 243 "format_call.m"
          else
#line 243 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5574 "check_hlds.format_call.c"
              *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 243 "format_call.m"
            else
#line 243 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5580 "check_hlds.format_call.c"
                *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 243 "format_call.m"
              else
#line 5584 "check_hlds.format_call.c"
                *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 243 "format_call.m"
        }
#line 243 "format_call.m"
      else
#line 243 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 243 "format_call.m"
          {
#line 243 "format_call.m"
            MR_Word check_hlds__format_call__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 243 "format_call.m"
            MR_Word check_hlds__format_call__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 243 "format_call.m"
            MR_Word check_hlds__format_call__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 243 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5603 "check_hlds.format_call.c"
              *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 243 "format_call.m"
            else
#line 243 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 243 "format_call.m"
                {
#line 243 "format_call.m"
                  MR_Word check_hlds__format_call__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 243 "format_call.m"
                  MR_Word check_hlds__format_call__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 243 "format_call.m"
                  MR_Word check_hlds__format_call__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 2)));
#line 243 "format_call.m"
                  MR_Word check_hlds__format_call__V_52_52;

#line 243 "format_call.m"
                  {
#line 243 "format_call.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], &check_hlds__format_call__V_52_52, ((MR_Box) (check_hlds__format_call__V_106_106)), ((MR_Box) (check_hlds__format_call__V_49_49)));
                  }
#line 5625 "check_hlds.format_call.c"
                  check_hlds__format_call__succeeded = (check_hlds__format_call__V_52_52 == (MR_Integer) 0);
#line 243 "format_call.m"
                  check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 243 "format_call.m"
                  if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
                    *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_52_52;
#line 243 "format_call.m"
                  else
#line 243 "format_call.m"
                    {
#line 243 "format_call.m"
                      MR_Word check_hlds__format_call__V_53_53;

#line 243 "format_call.m"
                      {
#line 243 "format_call.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], &check_hlds__format_call__V_53_53, ((MR_Box) (check_hlds__format_call__V_105_105)), ((MR_Box) (check_hlds__format_call__V_50_50)));
                      }
#line 5645 "check_hlds.format_call.c"
                      check_hlds__format_call__succeeded = (check_hlds__format_call__V_53_53 == (MR_Integer) 0);
#line 243 "format_call.m"
                      check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 243 "format_call.m"
                      if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
                        *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_53_53;
#line 243 "format_call.m"
                      else
#line 243 "format_call.m"
                        {
#line 243 "format_call.m"
                          {
#line 243 "format_call.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__V_104_104)), ((MR_Box) (check_hlds__format_call__V_51_51)));
#line 243 "format_call.m"
                            return;
                          }
#line 243 "format_call.m"
                        }
#line 243 "format_call.m"
                    }
#line 243 "format_call.m"
                }
#line 243 "format_call.m"
              else
#line 243 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5674 "check_hlds.format_call.c"
                  *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 243 "format_call.m"
                else
#line 5678 "check_hlds.format_call.c"
                  *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 243 "format_call.m"
          }
#line 243 "format_call.m"
        else
#line 243 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 243 "format_call.m"
            {
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 243 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5699 "check_hlds.format_call.c"
                *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 243 "format_call.m"
              else
#line 243 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5705 "check_hlds.format_call.c"
                  *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 243 "format_call.m"
                else
#line 243 "format_call.m"
                  if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 243 "format_call.m"
                    {
#line 243 "format_call.m"
                      MR_Word check_hlds__format_call__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 243 "format_call.m"
                      MR_Word check_hlds__format_call__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 243 "format_call.m"
                      MR_Word check_hlds__format_call__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 2)));
#line 243 "format_call.m"
                      MR_Word check_hlds__format_call__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 3)));
#line 243 "format_call.m"
                      MR_Word check_hlds__format_call__V_87_87;

#line 243 "format_call.m"
                      {
#line 243 "format_call.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], &check_hlds__format_call__V_87_87, ((MR_Box) (check_hlds__format_call__V_110_110)), ((MR_Box) (check_hlds__format_call__V_83_83)));
                      }
#line 5729 "check_hlds.format_call.c"
                      check_hlds__format_call__succeeded = (check_hlds__format_call__V_87_87 == (MR_Integer) 0);
#line 243 "format_call.m"
                      check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 243 "format_call.m"
                      if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
                        *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_87_87;
#line 243 "format_call.m"
                      else
#line 243 "format_call.m"
                        {
#line 243 "format_call.m"
                          MR_Word check_hlds__format_call__V_88_88;

#line 243 "format_call.m"
                          {
#line 243 "format_call.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], &check_hlds__format_call__V_88_88, ((MR_Box) (check_hlds__format_call__V_109_109)), ((MR_Box) (check_hlds__format_call__V_84_84)));
                          }
#line 5749 "check_hlds.format_call.c"
                          check_hlds__format_call__succeeded = (check_hlds__format_call__V_88_88 == (MR_Integer) 0);
#line 243 "format_call.m"
                          check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 243 "format_call.m"
                          if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
                            *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_88_88;
#line 243 "format_call.m"
                          else
#line 243 "format_call.m"
                            {
#line 243 "format_call.m"
                              MR_Word check_hlds__format_call__V_89_89;

#line 243 "format_call.m"
                              {
#line 243 "format_call.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], &check_hlds__format_call__V_89_89, ((MR_Box) (check_hlds__format_call__V_108_108)), ((MR_Box) (check_hlds__format_call__V_85_85)));
                              }
#line 5769 "check_hlds.format_call.c"
                              check_hlds__format_call__succeeded = (check_hlds__format_call__V_89_89 == (MR_Integer) 0);
#line 243 "format_call.m"
                              check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 243 "format_call.m"
                              if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
                                *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_89_89;
#line 243 "format_call.m"
                              else
#line 243 "format_call.m"
                                {
#line 243 "format_call.m"
                                  {
#line 243 "format_call.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__V_107_107)), ((MR_Box) (check_hlds__format_call__V_86_86)));
#line 243 "format_call.m"
                                    return;
                                  }
#line 243 "format_call.m"
                                }
#line 243 "format_call.m"
                            }
#line 243 "format_call.m"
                        }
#line 243 "format_call.m"
                    }
#line 243 "format_call.m"
                  else
#line 5798 "check_hlds.format_call.c"
                    *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 243 "format_call.m"
            }
#line 243 "format_call.m"
          else
#line 243 "format_call.m"
            {
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 243 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5811 "check_hlds.format_call.c"
                *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 243 "format_call.m"
              else
#line 243 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5817 "check_hlds.format_call.c"
                  *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 243 "format_call.m"
                else
#line 243 "format_call.m"
                  if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5823 "check_hlds.format_call.c"
                    *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 243 "format_call.m"
                  else
#line 243 "format_call.m"
                    {
#line 243 "format_call.m"
                      MR_Word check_hlds__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)));

#line 243 "format_call.m"
                      {
#line 243 "format_call.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__V_111_111)), ((MR_Box) (check_hlds__format_call__V_5_5)));
#line 243 "format_call.m"
                        return;
                      }
#line 243 "format_call.m"
                    }
#line 243 "format_call.m"
            }
#line 243 "format_call.m"
  }
#line 243 "format_call.m"
}

#line 243 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____format_call_kind_0_0(
#line 243 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 243 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 243 "format_call.m"
{
#line 243 "format_call.m"
  {
#line 243 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 243 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_23 = (MR_Integer) check_hlds__format_call__HeadVar__1_1;
#line 243 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_24 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;

#line 243 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_23 == check_hlds__format_call__CastY_24);
#line 243 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
      check_hlds__format_call__succeeded = MR_TRUE;
#line 243 "format_call.m"
    else
#line 243 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 243 "format_call.m"
        {
#line 243 "format_call.m"
          MR_Word check_hlds__format_call__TypeInfo_25_25;
#line 243 "format_call.m"
          MR_Word check_hlds__format_call__TypeInfo_26_26;
#line 243 "format_call.m"
          MR_Word check_hlds__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 243 "format_call.m"
          MR_Word check_hlds__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 243 "format_call.m"
          MR_Word check_hlds__format_call__V_7_7;
#line 243 "format_call.m"
          MR_Word check_hlds__format_call__V_8_8;

#line 243 "format_call.m"
          check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 243 "format_call.m"
          if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
            {
#line 243 "format_call.m"
              check_hlds__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 243 "format_call.m"
              check_hlds__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 5901 "check_hlds.format_call.c"
              check_hlds__format_call__TypeInfo_25_25 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 5903 "check_hlds.format_call.c"
              {
#line 5905 "check_hlds.format_call.c"
                check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_25_25, ((MR_Box) (check_hlds__format_call__V_5_5)), ((MR_Box) (check_hlds__format_call__V_7_7)));
              }
#line 243 "format_call.m"
              if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
                {
#line 5912 "check_hlds.format_call.c"
                  check_hlds__format_call__TypeInfo_26_26 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 5914 "check_hlds.format_call.c"
                  {
#line 5916 "check_hlds.format_call.c"
                    return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_26_26, ((MR_Box) (check_hlds__format_call__V_6_6)), ((MR_Box) (check_hlds__format_call__V_8_8)));
                  }
#line 243 "format_call.m"
                }
#line 243 "format_call.m"
            }
#line 243 "format_call.m"
        }
#line 243 "format_call.m"
      else
#line 243 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 243 "format_call.m"
          {
#line 243 "format_call.m"
            MR_Word check_hlds__format_call__TypeInfo_27_27;
#line 243 "format_call.m"
            MR_Word check_hlds__format_call__TypeInfo_28_28;
#line 243 "format_call.m"
            MR_Word check_hlds__format_call__TypeInfo_29_29;
#line 243 "format_call.m"
            MR_Word check_hlds__format_call__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 243 "format_call.m"
            MR_Word check_hlds__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 243 "format_call.m"
            MR_Word check_hlds__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 243 "format_call.m"
            MR_Word check_hlds__format_call__V_12_12;
#line 243 "format_call.m"
            MR_Word check_hlds__format_call__V_13_13;
#line 243 "format_call.m"
            MR_Word check_hlds__format_call__V_14_14;

#line 243 "format_call.m"
            check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 243 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
              {
#line 243 "format_call.m"
                check_hlds__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 243 "format_call.m"
                check_hlds__format_call__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 243 "format_call.m"
                check_hlds__format_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 5962 "check_hlds.format_call.c"
                check_hlds__format_call__TypeInfo_27_27 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 5964 "check_hlds.format_call.c"
                {
#line 5966 "check_hlds.format_call.c"
                  check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_27_27, ((MR_Box) (check_hlds__format_call__V_9_9)), ((MR_Box) (check_hlds__format_call__V_12_12)));
                }
#line 243 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
                  {
#line 5973 "check_hlds.format_call.c"
                    check_hlds__format_call__TypeInfo_28_28 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 5975 "check_hlds.format_call.c"
                    {
#line 5977 "check_hlds.format_call.c"
                      check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_28_28, ((MR_Box) (check_hlds__format_call__V_10_10)), ((MR_Box) (check_hlds__format_call__V_13_13)));
                    }
#line 243 "format_call.m"
                    if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
                      {
#line 5984 "check_hlds.format_call.c"
                        check_hlds__format_call__TypeInfo_29_29 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 5986 "check_hlds.format_call.c"
                        {
#line 5988 "check_hlds.format_call.c"
                          return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_29_29, ((MR_Box) (check_hlds__format_call__V_11_11)), ((MR_Box) (check_hlds__format_call__V_14_14)));
                        }
#line 243 "format_call.m"
                      }
#line 243 "format_call.m"
                  }
#line 243 "format_call.m"
              }
#line 243 "format_call.m"
          }
#line 243 "format_call.m"
        else
#line 243 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__format_call__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 243 "format_call.m"
            {
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__TypeInfo_30_30;
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__TypeInfo_31_31;
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__TypeInfo_32_32;
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__TypeInfo_33_33;
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 3)));
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_19_19;
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_20_20;
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_21_21;
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_22_22;

#line 243 "format_call.m"
              check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 243 "format_call.m"
              if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
                {
#line 243 "format_call.m"
                  check_hlds__format_call__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 243 "format_call.m"
                  check_hlds__format_call__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 243 "format_call.m"
                  check_hlds__format_call__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 243 "format_call.m"
                  check_hlds__format_call__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 6044 "check_hlds.format_call.c"
                  check_hlds__format_call__TypeInfo_30_30 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 6046 "check_hlds.format_call.c"
                  {
#line 6048 "check_hlds.format_call.c"
                    check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_30_30, ((MR_Box) (check_hlds__format_call__V_15_15)), ((MR_Box) (check_hlds__format_call__V_19_19)));
                  }
#line 243 "format_call.m"
                  if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
                    {
#line 6055 "check_hlds.format_call.c"
                      check_hlds__format_call__TypeInfo_31_31 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 6057 "check_hlds.format_call.c"
                      {
#line 6059 "check_hlds.format_call.c"
                        check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_31_31, ((MR_Box) (check_hlds__format_call__V_16_16)), ((MR_Box) (check_hlds__format_call__V_20_20)));
                      }
#line 243 "format_call.m"
                      if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
                        {
#line 6066 "check_hlds.format_call.c"
                          check_hlds__format_call__TypeInfo_32_32 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 6068 "check_hlds.format_call.c"
                          {
#line 6070 "check_hlds.format_call.c"
                            check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_32_32, ((MR_Box) (check_hlds__format_call__V_17_17)), ((MR_Box) (check_hlds__format_call__V_21_21)));
                          }
#line 243 "format_call.m"
                          if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
                            {
#line 6077 "check_hlds.format_call.c"
                              check_hlds__format_call__TypeInfo_33_33 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 6079 "check_hlds.format_call.c"
                              {
#line 6081 "check_hlds.format_call.c"
                                return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_33_33, ((MR_Box) (check_hlds__format_call__V_18_18)), ((MR_Box) (check_hlds__format_call__V_22_22)));
                              }
#line 243 "format_call.m"
                            }
#line 243 "format_call.m"
                        }
#line 243 "format_call.m"
                    }
#line 243 "format_call.m"
                }
#line 243 "format_call.m"
            }
#line 243 "format_call.m"
          else
#line 243 "format_call.m"
            {
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__TypeInfo_34_34;
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 243 "format_call.m"
              MR_Word check_hlds__format_call__V_4_4;

#line 243 "format_call.m"
              check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 243 "format_call.m"
              if (check_hlds__format_call__succeeded)
#line 243 "format_call.m"
                {
#line 243 "format_call.m"
                  check_hlds__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 6113 "check_hlds.format_call.c"
                  check_hlds__format_call__TypeInfo_34_34 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 6115 "check_hlds.format_call.c"
                  {
#line 6117 "check_hlds.format_call.c"
                    return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_34_34, ((MR_Box) (check_hlds__format_call__V_3_3)), ((MR_Box) (check_hlds__format_call__V_4_4)));
                  }
#line 243 "format_call.m"
                }
#line 243 "format_call.m"
            }
#line 243 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 243 "format_call.m"
  }
#line 243 "format_call.m"
}

#line 527 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____follow_skeleton_result_0_0(
#line 527 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 527 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 527 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 527 "format_call.m"
{
#line 527 "format_call.m"
  {
#line 527 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 527 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_13 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;
#line 527 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_14 = (MR_Integer) check_hlds__format_call__HeadVar__3_3;

#line 527 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_13 == check_hlds__format_call__CastY_14);
#line 527 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 6155 "check_hlds.format_call.c"
      *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 527 "format_call.m"
    else
#line 527 "format_call.m"
      if ((check_hlds__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 527 "format_call.m"
        if ((check_hlds__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 527 "format_call.m"
          *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 527 "format_call.m"
        else
#line 6167 "check_hlds.format_call.c"
          *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 2;
#line 527 "format_call.m"
      else
#line 527 "format_call.m"
        {
#line 527 "format_call.m"
          MR_Word check_hlds__format_call__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 527 "format_call.m"
          MR_Word check_hlds__format_call__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));

#line 527 "format_call.m"
          if ((check_hlds__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6180 "check_hlds.format_call.c"
            *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 1;
#line 527 "format_call.m"
          else
#line 527 "format_call.m"
            {
#line 527 "format_call.m"
              MR_Word check_hlds__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 527 "format_call.m"
              MR_Word check_hlds__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 527 "format_call.m"
              MR_Word check_hlds__format_call__V_8_8;

#line 527 "format_call.m"
              {
#line 527 "format_call.m"
                mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[5], &check_hlds__format_call__V_8_8, ((MR_Box) (check_hlds__format_call__V_18_18)), ((MR_Box) (check_hlds__format_call__V_6_6)));
              }
#line 6198 "check_hlds.format_call.c"
              check_hlds__format_call__succeeded = (check_hlds__format_call__V_8_8 == (MR_Integer) 0);
#line 527 "format_call.m"
              check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 527 "format_call.m"
              if (check_hlds__format_call__succeeded)
#line 527 "format_call.m"
                *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_8_8;
#line 527 "format_call.m"
              else
#line 527 "format_call.m"
                {
#line 527 "format_call.m"
                  {
#line 527 "format_call.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[5], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__V_17_17)), ((MR_Box) (check_hlds__format_call__V_7_7)));
#line 527 "format_call.m"
                    return;
                  }
#line 527 "format_call.m"
                }
#line 527 "format_call.m"
            }
#line 527 "format_call.m"
        }
#line 527 "format_call.m"
  }
#line 527 "format_call.m"
}

#line 527 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____follow_skeleton_result_0_0(
#line 527 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 527 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 527 "format_call.m"
{
#line 527 "format_call.m"
  {
#line 527 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 527 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_9 = (MR_Integer) check_hlds__format_call__HeadVar__1_1;
#line 527 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_10 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;

#line 527 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_9 == check_hlds__format_call__CastY_10);
#line 527 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 527 "format_call.m"
      check_hlds__format_call__succeeded = MR_TRUE;
#line 527 "format_call.m"
    else
#line 527 "format_call.m"
      if ((check_hlds__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 527 "format_call.m"
        {
#line 527 "format_call.m"
          MR_Integer check_hlds__format_call__CastX_7 = (MR_Integer) check_hlds__format_call__HeadVar__1_1;
#line 527 "format_call.m"
          MR_Integer check_hlds__format_call__CastY_8 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;

#line 527 "format_call.m"
          check_hlds__format_call__succeeded = (check_hlds__format_call__CastY_8 == check_hlds__format_call__CastX_7);
#line 527 "format_call.m"
        }
#line 527 "format_call.m"
      else
#line 527 "format_call.m"
        {
#line 527 "format_call.m"
          MR_Word check_hlds__format_call__TypeInfo_11_11;
#line 527 "format_call.m"
          MR_Word check_hlds__format_call__TypeInfo_12_12;
#line 527 "format_call.m"
          MR_Word check_hlds__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 527 "format_call.m"
          MR_Word check_hlds__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 527 "format_call.m"
          MR_Word check_hlds__format_call__V_5_5;
#line 527 "format_call.m"
          MR_Word check_hlds__format_call__V_6_6;

#line 527 "format_call.m"
          check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 527 "format_call.m"
          if (check_hlds__format_call__succeeded)
#line 527 "format_call.m"
            {
#line 527 "format_call.m"
              check_hlds__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 527 "format_call.m"
              check_hlds__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 6294 "check_hlds.format_call.c"
              check_hlds__format_call__TypeInfo_11_11 = (MR_Word) &check_hlds__format_call_scalar_common_2[5];
#line 6296 "check_hlds.format_call.c"
              {
#line 6298 "check_hlds.format_call.c"
                check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_11_11, ((MR_Box) (check_hlds__format_call__V_3_3)), ((MR_Box) (check_hlds__format_call__V_5_5)));
              }
#line 527 "format_call.m"
              if (check_hlds__format_call__succeeded)
#line 527 "format_call.m"
                {
#line 6305 "check_hlds.format_call.c"
                  check_hlds__format_call__TypeInfo_12_12 = (MR_Word) &check_hlds__format_call_scalar_common_2[5];
#line 6307 "check_hlds.format_call.c"
                  {
#line 6309 "check_hlds.format_call.c"
                    return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_12_12, ((MR_Box) (check_hlds__format_call__V_4_4)), ((MR_Box) (check_hlds__format_call__V_6_6)));
                  }
#line 527 "format_call.m"
                }
#line 527 "format_call.m"
            }
#line 527 "format_call.m"
        }
#line 527 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 527 "format_call.m"
  }
#line 527 "format_call.m"
}

#line 885 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____fc_opt_goal_info_0_0(
#line 885 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 885 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 885 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 885 "format_call.m"
{
#line 885 "format_call.m"
  {
#line 885 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 885 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_9 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;
#line 885 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_10 = (MR_Integer) check_hlds__format_call__HeadVar__3_3;

#line 885 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_9 == check_hlds__format_call__CastY_10);
#line 885 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 6349 "check_hlds.format_call.c"
      *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 885 "format_call.m"
    else
#line 885 "format_call.m"
      {
#line 885 "format_call.m"
        MR_Word check_hlds__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 885 "format_call.m"
        MR_Word check_hlds__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 885 "format_call.m"
        MR_Word check_hlds__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 885 "format_call.m"
        MR_Word check_hlds__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 885 "format_call.m"
        MR_Word check_hlds__format_call__V_8_8;

#line 885 "format_call.m"
        {
#line 885 "format_call.m"
          hlds__hlds_goal____Compare____hlds_goal_0_0(&check_hlds__format_call__V_8_8, check_hlds__format_call__V_4_4, check_hlds__format_call__V_6_6);
        }
#line 6371 "check_hlds.format_call.c"
        check_hlds__format_call__succeeded = (check_hlds__format_call__V_8_8 == (MR_Integer) 0);
#line 885 "format_call.m"
        check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 885 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 885 "format_call.m"
          *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_8_8;
#line 885 "format_call.m"
        else
#line 885 "format_call.m"
          {
#line 885 "format_call.m"
            {
#line 885 "format_call.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[4], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__V_5_5)), ((MR_Box) (check_hlds__format_call__V_7_7)));
#line 885 "format_call.m"
              return;
            }
#line 885 "format_call.m"
          }
#line 885 "format_call.m"
      }
#line 885 "format_call.m"
  }
#line 885 "format_call.m"
}

#line 885 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____fc_opt_goal_info_0_0(
#line 885 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 885 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 885 "format_call.m"
{
#line 885 "format_call.m"
  {
#line 885 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 885 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_7 = (MR_Integer) check_hlds__format_call__HeadVar__1_1;
#line 885 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_8 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;

#line 885 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_7 == check_hlds__format_call__CastY_8);
#line 885 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 885 "format_call.m"
      check_hlds__format_call__succeeded = MR_TRUE;
#line 885 "format_call.m"
    else
#line 885 "format_call.m"
      {
#line 885 "format_call.m"
        MR_Word check_hlds__format_call__TypeInfo_10_10;
#line 885 "format_call.m"
        MR_Word check_hlds__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 885 "format_call.m"
        MR_Word check_hlds__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 885 "format_call.m"
        MR_Word check_hlds__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 885 "format_call.m"
        MR_Word check_hlds__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));

#line 6438 "check_hlds.format_call.c"
        {
#line 6440 "check_hlds.format_call.c"
          check_hlds__format_call__succeeded = hlds__hlds_goal____Unify____hlds_goal_0_0(check_hlds__format_call__V_3_3, check_hlds__format_call__V_5_5);
        }
#line 885 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 885 "format_call.m"
          {
#line 6447 "check_hlds.format_call.c"
            check_hlds__format_call__TypeInfo_10_10 = (MR_Word) &check_hlds__format_call_scalar_common_2[4];
#line 6449 "check_hlds.format_call.c"
            {
#line 6451 "check_hlds.format_call.c"
              return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_10_10, ((MR_Box) (check_hlds__format_call__V_4_4)), ((MR_Box) (check_hlds__format_call__V_6_6)));
            }
#line 885 "format_call.m"
          }
#line 885 "format_call.m"
      }
#line 885 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 885 "format_call.m"
  }
#line 885 "format_call.m"
}

#line 891 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____fc_goal_id_map_0_0(
#line 891 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 891 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 891 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 891 "format_call.m"
{
#line 891 "format_call.m"
  {
#line 891 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 891 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar1_4 = check_hlds__format_call__HeadVar__2_2;
#line 891 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar2_5 = check_hlds__format_call__HeadVar__3_3;

#line 891 "format_call.m"
    {
#line 891 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[0], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__format_call__Cast_HeadVar2_5)));
#line 891 "format_call.m"
      return;
    }
#line 891 "format_call.m"
  }
#line 891 "format_call.m"
}

#line 891 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____fc_goal_id_map_0_0(
#line 891 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 891 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 891 "format_call.m"
{
#line 891 "format_call.m"
  {
#line 891 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 891 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar1_3 = check_hlds__format_call__HeadVar__1_1;
#line 891 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar2_4 = check_hlds__format_call__HeadVar__2_2;

#line 891 "format_call.m"
    {
#line 891 "format_call.m"
      return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[0], ((MR_Box) (check_hlds__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__format_call__Cast_HeadVar2_4)));
    }
#line 891 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 891 "format_call.m"
  }
#line 891 "format_call.m"
}

#line 214 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____fc_eqv_map_0_0(
#line 214 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 214 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 214 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 214 "format_call.m"
{
#line 214 "format_call.m"
  {
#line 214 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 214 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar1_4 = check_hlds__format_call__HeadVar__2_2;
#line 214 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar2_5 = check_hlds__format_call__HeadVar__3_3;

#line 214 "format_call.m"
    {
#line 214 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[4], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__format_call__Cast_HeadVar2_5)));
#line 214 "format_call.m"
      return;
    }
#line 214 "format_call.m"
  }
#line 214 "format_call.m"
}

#line 214 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____fc_eqv_map_0_0(
#line 214 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 214 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 214 "format_call.m"
{
#line 214 "format_call.m"
  {
#line 214 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 214 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar1_3 = check_hlds__format_call__HeadVar__1_1;
#line 214 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar2_4 = check_hlds__format_call__HeadVar__2_2;

#line 214 "format_call.m"
    {
#line 214 "format_call.m"
      return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[4], ((MR_Box) (check_hlds__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__format_call__Cast_HeadVar2_4)));
    }
#line 214 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 214 "format_call.m"
  }
#line 214 "format_call.m"
}

#line 238 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____conj_pred_map_0_0(
#line 238 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 238 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 238 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 238 "format_call.m"
{
#line 238 "format_call.m"
  {
#line 238 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 238 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar1_4 = check_hlds__format_call__HeadVar__2_2;
#line 238 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar2_5 = check_hlds__format_call__HeadVar__3_3;

#line 238 "format_call.m"
    {
#line 238 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[6], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__format_call__Cast_HeadVar2_5)));
#line 238 "format_call.m"
      return;
    }
#line 238 "format_call.m"
  }
#line 238 "format_call.m"
}

#line 238 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_pred_map_0_0(
#line 238 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 238 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 238 "format_call.m"
{
#line 238 "format_call.m"
  {
#line 238 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 238 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar1_3 = check_hlds__format_call__HeadVar__1_1;
#line 238 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar2_4 = check_hlds__format_call__HeadVar__2_2;

#line 238 "format_call.m"
    {
#line 238 "format_call.m"
      return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[6], ((MR_Box) (check_hlds__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__format_call__Cast_HeadVar2_4)));
    }
#line 238 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 238 "format_call.m"
  }
#line 238 "format_call.m"
}

#line 233 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____conj_maps_0_0(
#line 233 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 233 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 233 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 233 "format_call.m"
{
#line 233 "format_call.m"
  {
#line 233 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 233 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar1_4 = check_hlds__format_call__HeadVar__2_2;
#line 233 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar2_5 = check_hlds__format_call__HeadVar__3_3;

#line 233 "format_call.m"
    {
#line 233 "format_call.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[5], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__format_call__Cast_HeadVar2_5)));
#line 233 "format_call.m"
      return;
    }
#line 233 "format_call.m"
  }
#line 233 "format_call.m"
}

#line 233 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_maps_0_0(
#line 233 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 233 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 233 "format_call.m"
{
#line 233 "format_call.m"
  {
#line 233 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 233 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar1_3 = check_hlds__format_call__HeadVar__1_1;
#line 233 "format_call.m"
    MR_Word check_hlds__format_call__Cast_HeadVar2_4 = check_hlds__format_call__HeadVar__2_2;

#line 233 "format_call.m"
    {
#line 233 "format_call.m"
      return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[5], ((MR_Box) (check_hlds__format_call__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__format_call__Cast_HeadVar2_4)));
    }
#line 233 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 233 "format_call.m"
  }
#line 233 "format_call.m"
}

#line 219 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____conj_map_0_0(
#line 219 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 219 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 219 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 219 "format_call.m"
{
#line 219 "format_call.m"
  {
#line 219 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 219 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_15 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;
#line 219 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_16 = (MR_Integer) check_hlds__format_call__HeadVar__3_3;

#line 219 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_15 == check_hlds__format_call__CastY_16);
#line 219 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 6737 "check_hlds.format_call.c"
      *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 219 "format_call.m"
    else
#line 219 "format_call.m"
      {
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 3)));
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 2)));
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 3)));
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_12_12;

#line 219 "format_call.m"
        {
#line 219 "format_call.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[1], &check_hlds__format_call__V_12_12, ((MR_Box) (check_hlds__format_call__V_4_4)), ((MR_Box) (check_hlds__format_call__V_8_8)));
        }
#line 6767 "check_hlds.format_call.c"
        check_hlds__format_call__succeeded = (check_hlds__format_call__V_12_12 == (MR_Integer) 0);
#line 219 "format_call.m"
        check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 219 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 219 "format_call.m"
          *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_12_12;
#line 219 "format_call.m"
        else
#line 219 "format_call.m"
          {
#line 219 "format_call.m"
            MR_Word check_hlds__format_call__V_13_13;

#line 219 "format_call.m"
            {
#line 219 "format_call.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[2], &check_hlds__format_call__V_13_13, ((MR_Box) (check_hlds__format_call__V_5_5)), ((MR_Box) (check_hlds__format_call__V_9_9)));
            }
#line 6787 "check_hlds.format_call.c"
            check_hlds__format_call__succeeded = (check_hlds__format_call__V_13_13 == (MR_Integer) 0);
#line 219 "format_call.m"
            check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 219 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 219 "format_call.m"
              *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_13_13;
#line 219 "format_call.m"
            else
#line 219 "format_call.m"
              {
#line 219 "format_call.m"
                MR_Word check_hlds__format_call__V_14_14;

#line 219 "format_call.m"
                {
#line 219 "format_call.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[3], &check_hlds__format_call__V_14_14, ((MR_Box) (check_hlds__format_call__V_6_6)), ((MR_Box) (check_hlds__format_call__V_10_10)));
                }
#line 6807 "check_hlds.format_call.c"
                check_hlds__format_call__succeeded = (check_hlds__format_call__V_14_14 == (MR_Integer) 0);
#line 219 "format_call.m"
                check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 219 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 219 "format_call.m"
                  *check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__V_14_14;
#line 219 "format_call.m"
                else
#line 219 "format_call.m"
                  {
#line 219 "format_call.m"
                    {
#line 219 "format_call.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[4], check_hlds__format_call__HeadVar__1_1, ((MR_Box) (check_hlds__format_call__V_7_7)), ((MR_Box) (check_hlds__format_call__V_11_11)));
#line 219 "format_call.m"
                      return;
                    }
#line 219 "format_call.m"
                  }
#line 219 "format_call.m"
              }
#line 219 "format_call.m"
          }
#line 219 "format_call.m"
      }
#line 219 "format_call.m"
  }
#line 219 "format_call.m"
}

#line 219 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_map_0_0(
#line 219 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 219 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 219 "format_call.m"
{
#line 219 "format_call.m"
  {
#line 219 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 219 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_11 = (MR_Integer) check_hlds__format_call__HeadVar__1_1;
#line 219 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_12 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;

#line 219 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_11 == check_hlds__format_call__CastY_12);
#line 219 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 219 "format_call.m"
      check_hlds__format_call__succeeded = MR_TRUE;
#line 219 "format_call.m"
    else
#line 219 "format_call.m"
      {
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__TypeInfo_14_14;
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__TypeInfo_15_15;
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__TypeInfo_16_16;
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 3)));
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 2)));
#line 219 "format_call.m"
        MR_Word check_hlds__format_call__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 3)));

#line 6890 "check_hlds.format_call.c"
        {
#line 6892 "check_hlds.format_call.c"
          check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__format_call_scalar_common_1[1], ((MR_Box) (check_hlds__format_call__V_3_3)), ((MR_Box) (check_hlds__format_call__V_7_7)));
        }
#line 219 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 219 "format_call.m"
          {
#line 6899 "check_hlds.format_call.c"
            check_hlds__format_call__TypeInfo_14_14 = (MR_Word) &check_hlds__format_call_scalar_common_1[2];
#line 6901 "check_hlds.format_call.c"
            {
#line 6903 "check_hlds.format_call.c"
              check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_14_14, ((MR_Box) (check_hlds__format_call__V_4_4)), ((MR_Box) (check_hlds__format_call__V_8_8)));
            }
#line 219 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 219 "format_call.m"
              {
#line 6910 "check_hlds.format_call.c"
                check_hlds__format_call__TypeInfo_15_15 = (MR_Word) &check_hlds__format_call_scalar_common_1[3];
#line 6912 "check_hlds.format_call.c"
                {
#line 6914 "check_hlds.format_call.c"
                  check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_15_15, ((MR_Box) (check_hlds__format_call__V_5_5)), ((MR_Box) (check_hlds__format_call__V_9_9)));
                }
#line 219 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 219 "format_call.m"
                  {
#line 6921 "check_hlds.format_call.c"
                    check_hlds__format_call__TypeInfo_16_16 = (MR_Word) &check_hlds__format_call_scalar_common_1[4];
#line 6923 "check_hlds.format_call.c"
                    {
#line 6925 "check_hlds.format_call.c"
                      return check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_16_16, ((MR_Box) (check_hlds__format_call__V_6_6)), ((MR_Box) (check_hlds__format_call__V_10_10)));
                    }
#line 219 "format_call.m"
                  }
#line 219 "format_call.m"
              }
#line 219 "format_call.m"
          }
#line 219 "format_call.m"
      }
#line 219 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 219 "format_call.m"
  }
#line 219 "format_call.m"
}

#line 227 "format_call.m"
static void MR_CALL 
check_hlds__format_call____Compare____conj_id_0_0(
#line 227 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__1_1,
#line 227 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 227 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3)
#line 227 "format_call.m"
{
#line 227 "format_call.m"
  {
#line 227 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 227 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_6 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;
#line 227 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_7 = (MR_Integer) check_hlds__format_call__HeadVar__3_3;

#line 227 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_6 == check_hlds__format_call__CastY_7);
#line 227 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 6967 "check_hlds.format_call.c"
      *check_hlds__format_call__HeadVar__1_1 = (MR_Integer) 0;
#line 227 "format_call.m"
    else
#line 227 "format_call.m"
      {
#line 227 "format_call.m"
        MR_Integer check_hlds__format_call__V_4_4 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;
#line 227 "format_call.m"
        MR_Integer check_hlds__format_call__V_5_5 = (MR_Integer) check_hlds__format_call__HeadVar__3_3;

#line 227 "format_call.m"
        {
#line 227 "format_call.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__format_call__HeadVar__1_1, check_hlds__format_call__V_4_4, check_hlds__format_call__V_5_5);
#line 227 "format_call.m"
          return;
        }
#line 227 "format_call.m"
      }
#line 227 "format_call.m"
  }
#line 227 "format_call.m"
}

#line 227 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call____Unify____conj_id_0_0(
#line 227 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 227 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2)
#line 227 "format_call.m"
{
#line 227 "format_call.m"
  {
#line 227 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 227 "format_call.m"
    MR_Integer check_hlds__format_call__CastX_5 = (MR_Integer) check_hlds__format_call__HeadVar__1_1;
#line 227 "format_call.m"
    MR_Integer check_hlds__format_call__CastY_6 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;

#line 227 "format_call.m"
    check_hlds__format_call__succeeded = (check_hlds__format_call__CastX_5 == check_hlds__format_call__CastY_6);
#line 227 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 227 "format_call.m"
      check_hlds__format_call__succeeded = MR_TRUE;
#line 227 "format_call.m"
    else
#line 227 "format_call.m"
      {
#line 227 "format_call.m"
        MR_Integer check_hlds__format_call__V_3_3 = (MR_Integer) check_hlds__format_call__HeadVar__1_1;
#line 227 "format_call.m"
        MR_Integer check_hlds__format_call__V_4_4 = (MR_Integer) check_hlds__format_call__HeadVar__2_2;

#line 7025 "check_hlds.format_call.c"
        check_hlds__format_call__succeeded = (check_hlds__format_call__V_3_3 == check_hlds__format_call__V_4_4);
#line 227 "format_call.m"
      }
#line 227 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 227 "format_call.m"
  }
#line 227 "format_call.m"
}

#line 1325 "format_call.m"
static void MR_CALL 
check_hlds__format_call__represent_component_9_p_0(
#line 1325 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_10,
#line 1325 "format_call.m"
  MR_Word check_hlds__format_call__Component_11,
#line 1325 "format_call.m"
  MR_Word check_hlds__format_call__MaybeResultVar_12,
#line 1325 "format_call.m"
  MR_Word * check_hlds__format_call__ResultVar_13,
#line 1325 "format_call.m"
  MR_Word * check_hlds__format_call__Goals_14,
#line 1325 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_0_23,
#line 1325 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarSet_24,
#line 1325 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_0_25,
#line 1325 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarTypes_26)
#line 1325 "format_call.m"
{
#line 1332 "format_call.m"
  {
#line 1332 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;

#line 1332 "format_call.m"
    if (((MR_tag((MR_Word) check_hlds__format_call__Component_11)) == (MR_mktag((MR_Integer) 0))))
#line 1332 "format_call.m"
      {
#line 1332 "format_call.m"
        MR_String check_hlds__format_call__StringConstant_17 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Component_11, (MR_Integer) 0)));
#line 1332 "format_call.m"
        MR_Word check_hlds__format_call__Goal_18;

#line 1333 "format_call.m"
        {
#line 1333 "format_call.m"
          check_hlds__format_call__make_result_var_if_needed_6_p_0(check_hlds__format_call__MaybeResultVar_12, check_hlds__format_call__ResultVar_13, check_hlds__format_call__STATE_VARIABLE_VarSet_0_23, check_hlds__format_call__STATE_VARIABLE_VarSet_24, check_hlds__format_call__STATE_VARIABLE_VarTypes_0_25, check_hlds__format_call__STATE_VARIABLE_VarTypes_26);
        }
#line 1335 "format_call.m"
        {
#line 1335 "format_call.m"
          hlds__hlds_goal__make_string_const_construction_3_p_0(*check_hlds__format_call__ResultVar_13, check_hlds__format_call__StringConstant_17, &check_hlds__format_call__Goal_18);
        }
#line 1336 "format_call.m"
        {
#line 1336 "format_call.m"
          MR_Word base;
#line 1336 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "format_call.m"
          *check_hlds__format_call__Goals_14 = base;
#line 1336 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__Goal_18));
#line 1336 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1336 "format_call.m"
        }
#line 1332 "format_call.m"
      }
#line 1332 "format_call.m"
    else
#line 1332 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__format_call__Component_11)) == (MR_mktag((MR_Integer) 2))))
#line 1349 "format_call.m"
        {
#line 1349 "format_call.m"
          MR_Word check_hlds__format_call__FloatVar_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__Component_11, (MR_Integer) 0)));
#line 1349 "format_call.m"
          MR_Word check_hlds__format_call__V_50_50;
#line 1349 "format_call.m"
          MR_Word check_hlds__format_call__V_56_56;
#line 1349 "format_call.m"
          MR_Word check_hlds__format_call__V_58_58;
#line 1349 "format_call.m"
          MR_Word check_hlds__format_call__V_59_59;
#line 1349 "format_call.m"
          MR_Word check_hlds__format_call__V_60_60;
#line 1349 "format_call.m"
          MR_Word check_hlds__format_call__V_62_62;
#line 1349 "format_call.m"
          MR_Word check_hlds__format_call__V_63_63;
#line 1349 "format_call.m"
          MR_Word check_hlds__format_call__Goal_94;

#line 1350 "format_call.m"
          {
#line 1350 "format_call.m"
            check_hlds__format_call__make_result_var_if_needed_6_p_0(check_hlds__format_call__MaybeResultVar_12, check_hlds__format_call__ResultVar_13, check_hlds__format_call__STATE_VARIABLE_VarSet_0_23, check_hlds__format_call__STATE_VARIABLE_VarSet_24, check_hlds__format_call__STATE_VARIABLE_VarTypes_0_25, check_hlds__format_call__STATE_VARIABLE_VarTypes_26);
          }
#line 1352 "format_call.m"
          {
#line 1352 "format_call.m"
            check_hlds__format_call__V_50_50 = mdbcomp__prim_data__mercury_string_module_0_f_0();
          }
#line 1354 "format_call.m"
          {
#line 1354 "format_call.m"
            check_hlds__format_call__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1354 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__format_call__V_60_60, 0) = ((MR_Box) (*check_hlds__format_call__ResultVar_13));
#line 1354 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__format_call__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1354 "format_call.m"
          }
#line 1352 "format_call.m"
          {
#line 1352 "format_call.m"
            check_hlds__format_call__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1352 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__format_call__V_56_56, 0) = ((MR_Box) (check_hlds__format_call__FloatVar_20));
#line 1352 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__format_call__V_56_56, 1) = ((MR_Box) (check_hlds__format_call__V_60_60));
#line 1352 "format_call.m"
          }
#line 1356 "format_call.m"
          {
#line 1356 "format_call.m"
            check_hlds__format_call__V_63_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1356 "format_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__format_call__V_63_63, 0) = ((MR_Box) (*check_hlds__format_call__ResultVar_13));
#line 1356 "format_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__format_call__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__format_call_scalar_common_1[10])));
#line 1356 "format_call.m"
          }
#line 1355 "format_call.m"
          {
#line 1355 "format_call.m"
            check_hlds__format_call__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1355 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__format_call__V_62_62, 0) = ((MR_Box) (check_hlds__format_call__V_63_63));
#line 1355 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__format_call__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1355 "format_call.m"
          }
#line 1352 "format_call.m"
          {
#line 1352 "format_call.m"
            check_hlds__format_call__V_58_58 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__format_call__V_62_62);
          }
#line 1352 "format_call.m"
          {
#line 1352 "format_call.m"
            check_hlds__format_call__V_59_59 = mercury__term__context_init_0_f_0();
          }
#line 1352 "format_call.m"
          {
#line 1352 "format_call.m"
            hlds__goal_util__generate_simple_call_12_p_0(check_hlds__format_call__V_50_50, (MR_String) "float_to_string", (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__format_call__V_56_56, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__format_call__V_58_58, check_hlds__format_call__ModuleInfo_10, check_hlds__format_call__V_59_59, &check_hlds__format_call__Goal_94);
          }
#line 1358 "format_call.m"
          {
#line 1358 "format_call.m"
            MR_Word base;
#line 1358 "format_call.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1358 "format_call.m"
            *check_hlds__format_call__Goals_14 = base;
#line 1358 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__Goal_94));
#line 1358 "format_call.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1358 "format_call.m"
          }
#line 1349 "format_call.m"
        }
#line 1332 "format_call.m"
      else
#line 1332 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__format_call__Component_11)) == (MR_mktag((MR_Integer) 1))))
#line 1338 "format_call.m"
          {
#line 1338 "format_call.m"
            MR_Word check_hlds__format_call__IntVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Component_11, (MR_Integer) 0)));
#line 1338 "format_call.m"
            MR_Word check_hlds__format_call__V_71_71;
#line 1338 "format_call.m"
            MR_Word check_hlds__format_call__V_77_77;
#line 1338 "format_call.m"
            MR_Word check_hlds__format_call__V_79_79;
#line 1338 "format_call.m"
            MR_Word check_hlds__format_call__V_80_80;
#line 1338 "format_call.m"
            MR_Word check_hlds__format_call__V_81_81;
#line 1338 "format_call.m"
            MR_Word check_hlds__format_call__V_83_83;
#line 1338 "format_call.m"
            MR_Word check_hlds__format_call__V_84_84;
#line 1338 "format_call.m"
            MR_Word check_hlds__format_call__Goal_93;

#line 1339 "format_call.m"
            {
#line 1339 "format_call.m"
              check_hlds__format_call__make_result_var_if_needed_6_p_0(check_hlds__format_call__MaybeResultVar_12, check_hlds__format_call__ResultVar_13, check_hlds__format_call__STATE_VARIABLE_VarSet_0_23, check_hlds__format_call__STATE_VARIABLE_VarSet_24, check_hlds__format_call__STATE_VARIABLE_VarTypes_0_25, check_hlds__format_call__STATE_VARIABLE_VarTypes_26);
            }
#line 1341 "format_call.m"
            {
#line 1341 "format_call.m"
              check_hlds__format_call__V_71_71 = mdbcomp__prim_data__mercury_string_module_0_f_0();
            }
#line 1343 "format_call.m"
            {
#line 1343 "format_call.m"
              check_hlds__format_call__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_81_81, 0) = ((MR_Box) (*check_hlds__format_call__ResultVar_13));
#line 1343 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1343 "format_call.m"
            }
#line 1341 "format_call.m"
            {
#line 1341 "format_call.m"
              check_hlds__format_call__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_77_77, 0) = ((MR_Box) (check_hlds__format_call__IntVar_19));
#line 1341 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_77_77, 1) = ((MR_Box) (check_hlds__format_call__V_81_81));
#line 1341 "format_call.m"
            }
#line 1345 "format_call.m"
            {
#line 1345 "format_call.m"
              check_hlds__format_call__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1345 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__V_84_84, 0) = ((MR_Box) (*check_hlds__format_call__ResultVar_13));
#line 1345 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__format_call_scalar_common_1[10])));
#line 1345 "format_call.m"
            }
#line 1344 "format_call.m"
            {
#line 1344 "format_call.m"
              check_hlds__format_call__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1344 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_83_83, 0) = ((MR_Box) (check_hlds__format_call__V_84_84));
#line 1344 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1344 "format_call.m"
            }
#line 1341 "format_call.m"
            {
#line 1341 "format_call.m"
              check_hlds__format_call__V_79_79 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__format_call__V_83_83);
            }
#line 1341 "format_call.m"
            {
#line 1341 "format_call.m"
              check_hlds__format_call__V_80_80 = mercury__term__context_init_0_f_0();
            }
#line 1341 "format_call.m"
            {
#line 1341 "format_call.m"
              hlds__goal_util__generate_simple_call_12_p_0(check_hlds__format_call__V_71_71, (MR_String) "int_to_string", (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__format_call__V_77_77, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__format_call__V_79_79, check_hlds__format_call__ModuleInfo_10, check_hlds__format_call__V_80_80, &check_hlds__format_call__Goal_93);
            }
#line 1347 "format_call.m"
            {
#line 1347 "format_call.m"
              MR_Word base;
#line 1347 "format_call.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1347 "format_call.m"
              *check_hlds__format_call__Goals_14 = base;
#line 1347 "format_call.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__Goal_93));
#line 1347 "format_call.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1347 "format_call.m"
            }
#line 1338 "format_call.m"
          }
#line 1332 "format_call.m"
        else
#line 1332 "format_call.m"
          if (((((MR_tag((MR_Word) check_hlds__format_call__Component_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__Component_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1360 "format_call.m"
            {
#line 1360 "format_call.m"
              MR_Word check_hlds__format_call__CharVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__Component_11, (MR_Integer) 1)));
#line 1360 "format_call.m"
              MR_Word check_hlds__format_call__V_29_29;
#line 1360 "format_call.m"
              MR_Word check_hlds__format_call__V_35_35;
#line 1360 "format_call.m"
              MR_Word check_hlds__format_call__V_37_37;
#line 1360 "format_call.m"
              MR_Word check_hlds__format_call__V_38_38;
#line 1360 "format_call.m"
              MR_Word check_hlds__format_call__V_39_39;
#line 1360 "format_call.m"
              MR_Word check_hlds__format_call__V_41_41;
#line 1360 "format_call.m"
              MR_Word check_hlds__format_call__V_42_42;
#line 1360 "format_call.m"
              MR_Word check_hlds__format_call__Goal_95;

#line 1361 "format_call.m"
              {
#line 1361 "format_call.m"
                check_hlds__format_call__make_result_var_if_needed_6_p_0(check_hlds__format_call__MaybeResultVar_12, check_hlds__format_call__ResultVar_13, check_hlds__format_call__STATE_VARIABLE_VarSet_0_23, check_hlds__format_call__STATE_VARIABLE_VarSet_24, check_hlds__format_call__STATE_VARIABLE_VarTypes_0_25, check_hlds__format_call__STATE_VARIABLE_VarTypes_26);
              }
#line 1363 "format_call.m"
              {
#line 1363 "format_call.m"
                check_hlds__format_call__V_29_29 = mdbcomp__prim_data__mercury_string_module_0_f_0();
              }
#line 1365 "format_call.m"
              {
#line 1365 "format_call.m"
                check_hlds__format_call__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__format_call__V_39_39, 0) = ((MR_Box) (*check_hlds__format_call__ResultVar_13));
#line 1365 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__format_call__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1365 "format_call.m"
              }
#line 1363 "format_call.m"
              {
#line 1363 "format_call.m"
                check_hlds__format_call__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1363 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__format_call__V_35_35, 0) = ((MR_Box) (check_hlds__format_call__CharVar_21));
#line 1363 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__format_call__V_35_35, 1) = ((MR_Box) (check_hlds__format_call__V_39_39));
#line 1363 "format_call.m"
              }
#line 1367 "format_call.m"
              {
#line 1367 "format_call.m"
                check_hlds__format_call__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "format_call.m"
                MR_hl_field(MR_mktag(0), check_hlds__format_call__V_42_42, 0) = ((MR_Box) (*check_hlds__format_call__ResultVar_13));
#line 1367 "format_call.m"
                MR_hl_field(MR_mktag(0), check_hlds__format_call__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__format_call_scalar_common_1[10])));
#line 1367 "format_call.m"
              }
#line 1366 "format_call.m"
              {
#line 1366 "format_call.m"
                check_hlds__format_call__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1366 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__format_call__V_41_41, 0) = ((MR_Box) (check_hlds__format_call__V_42_42));
#line 1366 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__format_call__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1366 "format_call.m"
              }
#line 1363 "format_call.m"
              {
#line 1363 "format_call.m"
                check_hlds__format_call__V_37_37 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__format_call__V_41_41);
              }
#line 1363 "format_call.m"
              {
#line 1363 "format_call.m"
                check_hlds__format_call__V_38_38 = mercury__term__context_init_0_f_0();
              }
#line 1363 "format_call.m"
              {
#line 1363 "format_call.m"
                hlds__goal_util__generate_simple_call_12_p_0(check_hlds__format_call__V_29_29, (MR_String) "char_to_string", (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__format_call__V_35_35, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__format_call__V_37_37, check_hlds__format_call__ModuleInfo_10, check_hlds__format_call__V_38_38, &check_hlds__format_call__Goal_95);
              }
#line 1369 "format_call.m"
              {
#line 1369 "format_call.m"
                MR_Word base;
#line 1369 "format_call.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "format_call.m"
                *check_hlds__format_call__Goals_14 = base;
#line 1369 "format_call.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__Goal_95));
#line 1369 "format_call.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1369 "format_call.m"
              }
#line 1360 "format_call.m"
            }
#line 1332 "format_call.m"
          else
#line 1371 "format_call.m"
            {
#line 1371 "format_call.m"
              *check_hlds__format_call__ResultVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__Component_11, (MR_Integer) 1)));
#line 1373 "format_call.m"
              *check_hlds__format_call__Goals_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1373 "format_call.m"
              *check_hlds__format_call__STATE_VARIABLE_VarSet_24 = check_hlds__format_call__STATE_VARIABLE_VarSet_0_23;
#line 1373 "format_call.m"
              *check_hlds__format_call__STATE_VARIABLE_VarTypes_26 = check_hlds__format_call__STATE_VARIABLE_VarTypes_0_25;
#line 1371 "format_call.m"
            }
#line 1332 "format_call.m"
  }
#line 1325 "format_call.m"
}

#line 1313 "format_call.m"
static void MR_CALL 
check_hlds__format_call__make_result_var_if_needed_6_p_0(
#line 1313 "format_call.m"
  MR_Word check_hlds__format_call__MaybeResultVar_7,
#line 1313 "format_call.m"
  MR_Word * check_hlds__format_call__ResultVar_8,
#line 1313 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_0_11,
#line 1313 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarSet_12,
#line 1313 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_0_13,
#line 1313 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarTypes_14)
#line 1313 "format_call.m"
{
#line 1318 "format_call.m"
  {
#line 1318 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;

#line 1318 "format_call.m"
    if ((check_hlds__format_call__MaybeResultVar_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1320 "format_call.m"
      {
#line 1320 "format_call.m"
        MR_Word check_hlds__format_call__V_16_16;

#line 1321 "format_call.m"
        {
#line 1321 "format_call.m"
          mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__format_call__ResultVar_8, check_hlds__format_call__STATE_VARIABLE_VarSet_0_11, check_hlds__format_call__STATE_VARIABLE_VarSet_12);
        }
#line 1322 "format_call.m"
        {
#line 1322 "format_call.m"
          check_hlds__format_call__V_16_16 = parse_tree__builtin_lib_types__string_type_0_f_0();
        }
#line 1322 "format_call.m"
        {
#line 1322 "format_call.m"
          parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__format_call__ResultVar_8, check_hlds__format_call__V_16_16, check_hlds__format_call__STATE_VARIABLE_VarTypes_0_13, check_hlds__format_call__STATE_VARIABLE_VarTypes_14);
#line 1322 "format_call.m"
          return;
        }
#line 1320 "format_call.m"
      }
#line 1318 "format_call.m"
    else
#line 1318 "format_call.m"
      {
#line 1318 "format_call.m"
        *check_hlds__format_call__ResultVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__MaybeResultVar_7, (MR_Integer) 0)));
#line 1318 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_VarSet_12 = check_hlds__format_call__STATE_VARIABLE_VarSet_0_11;
#line 1318 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_VarTypes_14 = check_hlds__format_call__STATE_VARIABLE_VarTypes_0_13;
#line 1318 "format_call.m"
      }
#line 1318 "format_call.m"
  }
#line 1313 "format_call.m"
}

#line 1277 "format_call.m"
static void MR_CALL 
check_hlds__format_call__replace_string_format_9_p_0(
#line 1277 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_10,
#line 1277 "format_call.m"
  MR_Word check_hlds__format_call__Components_11,
#line 1277 "format_call.m"
  MR_Word check_hlds__format_call__MaybeResultVar_12,
#line 1277 "format_call.m"
  MR_Word * check_hlds__format_call__ResultVar_13,
#line 1277 "format_call.m"
  MR_Word * check_hlds__format_call__Goals_14,
#line 1277 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_0_27,
#line 1277 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarSet_28,
#line 1277 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_0_29,
#line 1277 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarTypes_30)
#line 1277 "format_call.m"
{
#line 1284 "format_call.m"
  {
#line 1284 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;

#line 1284 "format_call.m"
    if ((check_hlds__format_call__Components_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1284 "format_call.m"
      {
#line 1284 "format_call.m"
        MR_Word check_hlds__format_call__Goal_17;

#line 1318 "format_call.m"
        if ((check_hlds__format_call__MaybeResultVar_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1320 "format_call.m"
          {
#line 1320 "format_call.m"
            MR_Word check_hlds__format_call__V_77_77;

#line 1321 "format_call.m"
            {
#line 1321 "format_call.m"
              mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__format_call__ResultVar_13, check_hlds__format_call__STATE_VARIABLE_VarSet_0_27, check_hlds__format_call__STATE_VARIABLE_VarSet_28);
            }
#line 1322 "format_call.m"
            {
#line 1322 "format_call.m"
              check_hlds__format_call__V_77_77 = parse_tree__builtin_lib_types__string_type_0_f_0();
            }
#line 1322 "format_call.m"
            {
#line 1322 "format_call.m"
              parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__format_call__ResultVar_13, check_hlds__format_call__V_77_77, check_hlds__format_call__STATE_VARIABLE_VarTypes_0_29, check_hlds__format_call__STATE_VARIABLE_VarTypes_30);
            }
#line 1320 "format_call.m"
          }
#line 1318 "format_call.m"
        else
#line 1318 "format_call.m"
          {
#line 1318 "format_call.m"
            *check_hlds__format_call__ResultVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__MaybeResultVar_12, (MR_Integer) 0)));
#line 1318 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_VarSet_28 = check_hlds__format_call__STATE_VARIABLE_VarSet_0_27;
#line 1318 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_VarTypes_30 = check_hlds__format_call__STATE_VARIABLE_VarTypes_0_29;
#line 1318 "format_call.m"
          }
#line 1287 "format_call.m"
        {
#line 1287 "format_call.m"
          hlds__hlds_goal__make_string_const_construction_3_p_0(*check_hlds__format_call__ResultVar_13, (MR_String) "", &check_hlds__format_call__Goal_17);
        }
#line 1288 "format_call.m"
        {
#line 1288 "format_call.m"
          MR_Word base;
#line 1288 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1288 "format_call.m"
          *check_hlds__format_call__Goals_14 = base;
#line 1288 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__Goal_17));
#line 1288 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1288 "format_call.m"
        }
#line 1284 "format_call.m"
      }
#line 1284 "format_call.m"
    else
#line 1290 "format_call.m"
      {
#line 1290 "format_call.m"
        MR_Word check_hlds__format_call__FirstComponent_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Components_11, (MR_Integer) 0)));
#line 1290 "format_call.m"
        MR_Word check_hlds__format_call__LaterComponents_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Components_11, (MR_Integer) 1)));

#line 1295 "format_call.m"
        if ((check_hlds__format_call__LaterComponents_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1293 "format_call.m"
          {
#line 1293 "format_call.m"
            check_hlds__format_call__represent_component_9_p_0(check_hlds__format_call__ModuleInfo_10, check_hlds__format_call__FirstComponent_18, check_hlds__format_call__MaybeResultVar_12, check_hlds__format_call__ResultVar_13, check_hlds__format_call__Goals_14, check_hlds__format_call__STATE_VARIABLE_VarSet_0_27, check_hlds__format_call__STATE_VARIABLE_VarSet_28, check_hlds__format_call__STATE_VARIABLE_VarTypes_0_29, check_hlds__format_call__STATE_VARIABLE_VarTypes_30);
#line 1293 "format_call.m"
            return;
          }
#line 1295 "format_call.m"
        else
#line 1296 "format_call.m"
          {
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__TypeCtorInfo_67_67;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__LaterResultVar_22;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__LaterGoals_23;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__FirstResultVar_24;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__FirstGoals_25;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__AppendGoal_26;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_32_32;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_33_33;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_35_35;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_36_36;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__V_39_39;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__V_45_45;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__V_47_47;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__V_48_48;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__V_49_49;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__V_50_50;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__V_52_52;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__V_53_53;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__V_58_58;
#line 1296 "format_call.m"
            MR_Word check_hlds__format_call__V_59_59;

#line 1297 "format_call.m"
            {
#line 1297 "format_call.m"
              check_hlds__format_call__replace_string_format_9_p_0(check_hlds__format_call__ModuleInfo_10, check_hlds__format_call__LaterComponents_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__format_call__LaterResultVar_22, &check_hlds__format_call__LaterGoals_23, check_hlds__format_call__STATE_VARIABLE_VarSet_0_27, &check_hlds__format_call__STATE_VARIABLE_VarSet_32_32, check_hlds__format_call__STATE_VARIABLE_VarTypes_0_29, &check_hlds__format_call__STATE_VARIABLE_VarTypes_33_33);
            }
#line 1299 "format_call.m"
            {
#line 1299 "format_call.m"
              check_hlds__format_call__represent_component_9_p_0(check_hlds__format_call__ModuleInfo_10, check_hlds__format_call__FirstComponent_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__format_call__FirstResultVar_24, &check_hlds__format_call__FirstGoals_25, check_hlds__format_call__STATE_VARIABLE_VarSet_32_32, &check_hlds__format_call__STATE_VARIABLE_VarSet_35_35, check_hlds__format_call__STATE_VARIABLE_VarTypes_33_33, &check_hlds__format_call__STATE_VARIABLE_VarTypes_36_36);
            }
#line 1318 "format_call.m"
            if ((check_hlds__format_call__MaybeResultVar_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1320 "format_call.m"
              {
#line 1320 "format_call.m"
                MR_Word check_hlds__format_call__V_89_89;

#line 1321 "format_call.m"
                {
#line 1321 "format_call.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__format_call__ResultVar_13, check_hlds__format_call__STATE_VARIABLE_VarSet_35_35, check_hlds__format_call__STATE_VARIABLE_VarSet_28);
                }
#line 1322 "format_call.m"
                {
#line 1322 "format_call.m"
                  check_hlds__format_call__V_89_89 = parse_tree__builtin_lib_types__string_type_0_f_0();
                }
#line 1322 "format_call.m"
                {
#line 1322 "format_call.m"
                  parse_tree__prog_data__add_var_type_4_p_0(*check_hlds__format_call__ResultVar_13, check_hlds__format_call__V_89_89, check_hlds__format_call__STATE_VARIABLE_VarTypes_36_36, check_hlds__format_call__STATE_VARIABLE_VarTypes_30);
                }
#line 1320 "format_call.m"
              }
#line 1318 "format_call.m"
            else
#line 1318 "format_call.m"
              {
#line 1318 "format_call.m"
                *check_hlds__format_call__ResultVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__MaybeResultVar_12, (MR_Integer) 0)));
#line 1318 "format_call.m"
                *check_hlds__format_call__STATE_VARIABLE_VarSet_28 = check_hlds__format_call__STATE_VARIABLE_VarSet_35_35;
#line 1318 "format_call.m"
                *check_hlds__format_call__STATE_VARIABLE_VarTypes_30 = check_hlds__format_call__STATE_VARIABLE_VarTypes_36_36;
#line 1318 "format_call.m"
              }
#line 1303 "format_call.m"
            {
#line 1303 "format_call.m"
              check_hlds__format_call__V_39_39 = mdbcomp__prim_data__mercury_string_module_0_f_0();
            }
#line 1305 "format_call.m"
            {
#line 1305 "format_call.m"
              check_hlds__format_call__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_50_50, 0) = ((MR_Box) (*check_hlds__format_call__ResultVar_13));
#line 1305 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1305 "format_call.m"
            }
#line 1305 "format_call.m"
            {
#line 1305 "format_call.m"
              check_hlds__format_call__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_49_49, 0) = ((MR_Box) (check_hlds__format_call__LaterResultVar_22));
#line 1305 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_49_49, 1) = ((MR_Box) (check_hlds__format_call__V_50_50));
#line 1305 "format_call.m"
            }
#line 1303 "format_call.m"
            {
#line 1303 "format_call.m"
              check_hlds__format_call__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_45_45, 0) = ((MR_Box) (check_hlds__format_call__FirstResultVar_24));
#line 1303 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_45_45, 1) = ((MR_Box) (check_hlds__format_call__V_49_49));
#line 1303 "format_call.m"
            }
#line 1307 "format_call.m"
            {
#line 1307 "format_call.m"
              check_hlds__format_call__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1307 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__V_53_53, 0) = ((MR_Box) (*check_hlds__format_call__ResultVar_13));
#line 1307 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__format_call_scalar_common_1[10])));
#line 1307 "format_call.m"
            }
#line 1306 "format_call.m"
            {
#line 1306 "format_call.m"
              check_hlds__format_call__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_52_52, 0) = ((MR_Box) (check_hlds__format_call__V_53_53));
#line 1306 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1306 "format_call.m"
            }
#line 1303 "format_call.m"
            {
#line 1303 "format_call.m"
              check_hlds__format_call__V_47_47 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__format_call__V_52_52);
            }
#line 1303 "format_call.m"
            {
#line 1303 "format_call.m"
              check_hlds__format_call__V_48_48 = mercury__term__context_init_0_f_0();
            }
#line 1303 "format_call.m"
            {
#line 1303 "format_call.m"
              hlds__goal_util__generate_simple_call_12_p_0(check_hlds__format_call__V_39_39, (MR_String) "++", (MR_Integer) 1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, (MR_Integer) 0, check_hlds__format_call__V_45_45, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__format_call__V_47_47, check_hlds__format_call__ModuleInfo_10, check_hlds__format_call__V_48_48, &check_hlds__format_call__AppendGoal_26);
            }
#line 7772 "check_hlds.format_call.c"
            check_hlds__format_call__TypeCtorInfo_67_67 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1309 "format_call.m"
            {
#line 1309 "format_call.m"
              check_hlds__format_call__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_59_59, 0) = ((MR_Box) (check_hlds__format_call__AppendGoal_26));
#line 1309 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1309 "format_call.m"
            }
#line 1309 "format_call.m"
            {
#line 1309 "format_call.m"
              check_hlds__format_call__V_58_58 = mercury__list__f_43_43_2_f_0(check_hlds__format_call__TypeCtorInfo_67_67, check_hlds__format_call__FirstGoals_25, check_hlds__format_call__V_59_59);
            }
#line 1309 "format_call.m"
            {
#line 1309 "format_call.m"
              *check_hlds__format_call__Goals_14 = mercury__list__f_43_43_2_f_0(check_hlds__format_call__TypeCtorInfo_67_67, check_hlds__format_call__LaterGoals_23, check_hlds__format_call__V_58_58);
            }
#line 1296 "format_call.m"
          }
#line 1290 "format_call.m"
      }
#line 1284 "format_call.m"
  }
#line 1277 "format_call.m"
}

#line 1206 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call__interpret_format_string_4_p_0(
#line 1206 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 1206 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 1206 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3,
#line 1206 "format_call.m"
  MR_Word * check_hlds__format_call__Components_4)
#line 1206 "format_call.m"
{
#line 1209 "format_call.m"
  while (MR_TRUE)
#line 1209 "format_call.m"
    {
#line 1209 "format_call.m"
      /* tailcall optimized into a loop */
#line 1209 "format_call.m"
      {
#line 1209 "format_call.m"
        MR_bool check_hlds__format_call__succeeded;

#line 1209 "format_call.m"
        if ((check_hlds__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1209 "format_call.m"
          {
#line 1209 "format_call.m"
            check_hlds__format_call__succeeded = (check_hlds__format_call__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1209 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 1209 "format_call.m"
              {
#line 1213 "format_call.m"
                if ((check_hlds__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1212 "format_call.m"
                  *check_hlds__format_call__Components_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1213 "format_call.m"
                else
#line 1214 "format_call.m"
                  {
#line 1214 "format_call.m"
                    MR_Word check_hlds__format_call__ConstChars_9;
#line 1214 "format_call.m"
                    MR_String check_hlds__format_call__ConstString_10;
#line 1214 "format_call.m"
                    MR_Word check_hlds__format_call__V_11_11;

#line 1215 "format_call.m"
                    {
#line 1215 "format_call.m"
                      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, check_hlds__format_call__HeadVar__2_2, &check_hlds__format_call__ConstChars_9);
                    }
#line 1216 "format_call.m"
                    {
#line 1216 "format_call.m"
                      mercury__string__from_char_list_2_p_0(check_hlds__format_call__ConstChars_9, &check_hlds__format_call__ConstString_10);
                    }
#line 1217 "format_call.m"
                    {
#line 1217 "format_call.m"
                      check_hlds__format_call__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1217 "format_call.m"
                      MR_hl_field(MR_mktag(0), check_hlds__format_call__V_11_11, 0) = ((MR_Box) (check_hlds__format_call__ConstString_10));
#line 1217 "format_call.m"
                    }
#line 1217 "format_call.m"
                    {
#line 1217 "format_call.m"
                      MR_Word base;
#line 1217 "format_call.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1217 "format_call.m"
                      *check_hlds__format_call__Components_4 = base;
#line 1217 "format_call.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__V_11_11));
#line 1217 "format_call.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1217 "format_call.m"
                    }
#line 1214 "format_call.m"
                  }
#line 1213 "format_call.m"
                check_hlds__format_call__succeeded = MR_TRUE;
#line 1209 "format_call.m"
              }
#line 1209 "format_call.m"
          }
#line 1209 "format_call.m"
        else
#line 1220 "format_call.m"
          {
#line 1220 "format_call.m"
            MR_Char check_hlds__format_call__Char0_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1220 "format_call.m"
            MR_Word check_hlds__format_call__Chars0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));

#line 1221 "format_call.m"
            check_hlds__format_call__succeeded = (check_hlds__format_call__Char0_13 == (MR_Char) 37);
#line 1264 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 1223 "format_call.m"
              {
#line 1223 "format_call.m"
                MR_Char check_hlds__format_call__Char1_18;
#line 1223 "format_call.m"
                MR_Word check_hlds__format_call__Chars1_19;

#line 1223 "format_call.m"
                check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__Chars0_14)) == (MR_mktag((MR_Integer) 1)));
#line 1223 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 1223 "format_call.m"
                  {
#line 1223 "format_call.m"
                    check_hlds__format_call__Char1_18 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Chars0_14, (MR_Integer) 0)));
#line 1223 "format_call.m"
                    check_hlds__format_call__Chars1_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Chars0_14, (MR_Integer) 1)));
#line 1224 "format_call.m"
                    check_hlds__format_call__succeeded = (check_hlds__format_call__Char1_18 == (MR_Char) 37);
#line 1228 "format_call.m"
                    if (check_hlds__format_call__succeeded)
#line 1226 "format_call.m"
                      {
#line 1226 "format_call.m"
                        MR_Word check_hlds__format_call__STATE_VARIABLE_RevConstChars_30_30;

#line 1226 "format_call.m"
                        {
#line 1226 "format_call.m"
                          check_hlds__format_call__STATE_VARIABLE_RevConstChars_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1226 "format_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_RevConstChars_30_30, 0) = ((MR_Box) (MR_Word) (check_hlds__format_call__Char1_18));
#line 1226 "format_call.m"
                          MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_RevConstChars_30_30, 1) = ((MR_Box) (check_hlds__format_call__HeadVar__2_2));
#line 1226 "format_call.m"
                        }
#line 1227 "format_call.m"
                        /* direct tailcall eliminated */
#line 1227 "format_call.m"
                        {
#line 1227 "format_call.m"
                          MR_Word check_hlds__format_call__HeadVar__1__tmp_copy_1 = check_hlds__format_call__Chars1_19;
#line 1227 "format_call.m"
                          MR_Word check_hlds__format_call__HeadVar__2__tmp_copy_2 = check_hlds__format_call__STATE_VARIABLE_RevConstChars_30_30;

#line 1227 "format_call.m"
                          check_hlds__format_call__HeadVar__2_2 = check_hlds__format_call__HeadVar__2__tmp_copy_2;
#line 1227 "format_call.m"
                          check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__HeadVar__1__tmp_copy_1;
#line 1227 "format_call.m"
                        }
#line 1227 "format_call.m"
                        continue;
#line 1226 "format_call.m"
                      }
#line 1228 "format_call.m"
                    else
#line 1229 "format_call.m"
                      {
#line 1229 "format_call.m"
                        MR_Word check_hlds__format_call__TypeCtorInfo_41_41;
#line 1229 "format_call.m"
                        MR_Word check_hlds__format_call__Var0_20;
#line 1229 "format_call.m"
                        MR_Word check_hlds__format_call__Vars1_21;
#line 1229 "format_call.m"
                        MR_Word check_hlds__format_call__ConstComponents_22;
#line 1229 "format_call.m"
                        MR_Word check_hlds__format_call__VarComponent_27;
#line 1229 "format_call.m"
                        MR_Word check_hlds__format_call__TailComponents_28;
#line 1229 "format_call.m"
                        MR_Word check_hlds__format_call__V_33_33;
#line 1229 "format_call.m"
                        MR_Word check_hlds__format_call__V_34_34;

#line 1229 "format_call.m"
                        check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 1229 "format_call.m"
                        if (check_hlds__format_call__succeeded)
#line 1229 "format_call.m"
                          {
#line 1229 "format_call.m"
                            check_hlds__format_call__Var0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 0)));
#line 1229 "format_call.m"
                            check_hlds__format_call__Vars1_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__3_3, (MR_Integer) 1)));
#line 1233 "format_call.m"
                            if ((check_hlds__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1232 "format_call.m"
                              check_hlds__format_call__ConstComponents_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1233 "format_call.m"
                            else
#line 1234 "format_call.m"
                              {
#line 1234 "format_call.m"
                                MR_Word check_hlds__format_call__ConstChars_25;
#line 1234 "format_call.m"
                                MR_String check_hlds__format_call__ConstString_26;
#line 1234 "format_call.m"
                                MR_Word check_hlds__format_call__V_31_31;

#line 1235 "format_call.m"
                                {
#line 1235 "format_call.m"
                                  mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0, check_hlds__format_call__HeadVar__2_2, &check_hlds__format_call__ConstChars_25);
                                }
#line 1236 "format_call.m"
                                {
#line 1236 "format_call.m"
                                  mercury__string__from_char_list_2_p_0(check_hlds__format_call__ConstChars_25, &check_hlds__format_call__ConstString_26);
                                }
#line 1237 "format_call.m"
                                {
#line 1237 "format_call.m"
                                  check_hlds__format_call__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "format_call.m"
                                  MR_hl_field(MR_mktag(0), check_hlds__format_call__V_31_31, 0) = ((MR_Box) (check_hlds__format_call__ConstString_26));
#line 1237 "format_call.m"
                                }
#line 1237 "format_call.m"
                                {
#line 1237 "format_call.m"
                                  check_hlds__format_call__ConstComponents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "format_call.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__format_call__ConstComponents_22, 0) = ((MR_Box) (check_hlds__format_call__V_31_31));
#line 1237 "format_call.m"
                                  MR_hl_field(MR_mktag(1), check_hlds__format_call__ConstComponents_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1237 "format_call.m"
                                }
#line 1234 "format_call.m"
                              }
#line 1242 "format_call.m"
                            if ((check_hlds__format_call__Char1_18 == (MR_Char) 99))
#line 1259 "format_call.m"
                              {
#line 1259 "format_call.m"
                                {
#line 1259 "format_call.m"
                                  check_hlds__format_call__VarComponent_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "format_call.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__format_call__VarComponent_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1259 "format_call.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__format_call__VarComponent_27, 1) = ((MR_Box) (check_hlds__format_call__Var0_20));
#line 1259 "format_call.m"
                                }
#line 1259 "format_call.m"
                                check_hlds__format_call__succeeded = MR_TRUE;
#line 1259 "format_call.m"
                              }
#line 1242 "format_call.m"
                            else
#line 1242 "format_call.m"
                              if ((check_hlds__format_call__Char1_18 == (MR_Char) 100))
#line 1241 "format_call.m"
                                {
#line 1241 "format_call.m"
                                  {
#line 1241 "format_call.m"
                                    check_hlds__format_call__VarComponent_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "format_call.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__format_call__VarComponent_27, 0) = ((MR_Box) (check_hlds__format_call__Var0_20));
#line 1241 "format_call.m"
                                  }
#line 1241 "format_call.m"
                                  check_hlds__format_call__succeeded = MR_TRUE;
#line 1241 "format_call.m"
                                }
#line 1242 "format_call.m"
                              else
#line 1242 "format_call.m"
                                if ((check_hlds__format_call__Char1_18 == (MR_Char) 115))
#line 1256 "format_call.m"
                                  {
#line 1256 "format_call.m"
                                    {
#line 1256 "format_call.m"
                                      check_hlds__format_call__VarComponent_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1256 "format_call.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__format_call__VarComponent_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1256 "format_call.m"
                                      MR_hl_field(MR_mktag(3), check_hlds__format_call__VarComponent_27, 1) = ((MR_Box) (check_hlds__format_call__Var0_20));
#line 1256 "format_call.m"
                                    }
#line 1256 "format_call.m"
                                    check_hlds__format_call__succeeded = MR_TRUE;
#line 1256 "format_call.m"
                                  }
#line 1242 "format_call.m"
                                else
#line 1242 "format_call.m"
                                  check_hlds__format_call__succeeded = MR_FALSE;
#line 1229 "format_call.m"
                            if (check_hlds__format_call__succeeded)
#line 1229 "format_call.m"
                              {
#line 1261 "format_call.m"
                                check_hlds__format_call__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1261 "format_call.m"
                                {
#line 1261 "format_call.m"
                                  check_hlds__format_call__succeeded = check_hlds__format_call__interpret_format_string_4_p_0(check_hlds__format_call__Chars1_19, check_hlds__format_call__V_33_33, check_hlds__format_call__Vars1_21, &check_hlds__format_call__TailComponents_28);
                                }
#line 1229 "format_call.m"
                                if (check_hlds__format_call__succeeded)
#line 1229 "format_call.m"
                                  {
#line 8111 "check_hlds.format_call.c"
                                    check_hlds__format_call__TypeCtorInfo_41_41 = (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_string_component_0;
#line 1262 "format_call.m"
                                    {
#line 1262 "format_call.m"
                                      check_hlds__format_call__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "format_call.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__format_call__V_34_34, 0) = ((MR_Box) (check_hlds__format_call__VarComponent_27));
#line 1262 "format_call.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__format_call__V_34_34, 1) = ((MR_Box) (check_hlds__format_call__TailComponents_28));
#line 1262 "format_call.m"
                                    }
#line 1262 "format_call.m"
                                    {
#line 1262 "format_call.m"
                                      *check_hlds__format_call__Components_4 = mercury__list__f_43_43_2_f_0(check_hlds__format_call__TypeCtorInfo_41_41, check_hlds__format_call__ConstComponents_22, check_hlds__format_call__V_34_34);
                                    }
#line 1262 "format_call.m"
                                    check_hlds__format_call__succeeded = MR_TRUE;
#line 1229 "format_call.m"
                                  }
#line 1229 "format_call.m"
                              }
#line 1229 "format_call.m"
                          }
#line 1229 "format_call.m"
                      }
#line 1223 "format_call.m"
                  }
#line 1223 "format_call.m"
              }
#line 1264 "format_call.m"
            else
#line 1273 "format_call.m"
              {
#line 1273 "format_call.m"
                MR_Word check_hlds__format_call__STATE_VARIABLE_RevConstChars_30_38;

#line 1273 "format_call.m"
                {
#line 1273 "format_call.m"
                  check_hlds__format_call__STATE_VARIABLE_RevConstChars_30_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1273 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_RevConstChars_30_38, 0) = ((MR_Box) (MR_Word) (check_hlds__format_call__Char0_13));
#line 1273 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_RevConstChars_30_38, 1) = ((MR_Box) (check_hlds__format_call__HeadVar__2_2));
#line 1273 "format_call.m"
                }
#line 1274 "format_call.m"
                /* direct tailcall eliminated */
#line 1274 "format_call.m"
                {
#line 1274 "format_call.m"
                  MR_Word check_hlds__format_call__HeadVar__1__tmp_copy_1 = check_hlds__format_call__Chars0_14;
#line 1274 "format_call.m"
                  MR_Word check_hlds__format_call__HeadVar__2__tmp_copy_2 = check_hlds__format_call__STATE_VARIABLE_RevConstChars_30_38;

#line 1274 "format_call.m"
                  check_hlds__format_call__HeadVar__2_2 = check_hlds__format_call__HeadVar__2__tmp_copy_2;
#line 1274 "format_call.m"
                  check_hlds__format_call__HeadVar__1_1 = check_hlds__format_call__HeadVar__1__tmp_copy_1;
#line 1274 "format_call.m"
                }
#line 1274 "format_call.m"
                continue;
#line 1273 "format_call.m"
              }
#line 1220 "format_call.m"
          }
#line 1209 "format_call.m"
        return check_hlds__format_call__succeeded;
#line 1209 "format_call.m"
      }
#line 1209 "format_call.m"
      break;
#line 1209 "format_call.m"
    }
#line 1206 "format_call.m"
}

#line 1167 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call__create_io_format_replacement_11_p_0(
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_12,
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__FormatStringChars_13,
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__MaybeStreamVar_14,
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__IOInVar_15,
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__IOOutVar_16,
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__VarsToPrint_17,
#line 1167 "format_call.m"
  MR_Word * check_hlds__format_call__Goal_18,
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_0_31,
#line 1167 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarSet_32,
#line 1167 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_0_33,
#line 1167 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarTypes_34)
#line 1167 "format_call.m"
{
#line 1174 "format_call.m"
  {
#line 1174 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__TypeCtorInfo_66_66;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__TypeCtorInfo_67_67;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__TypeInfo_68_68;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__Components_21;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__ResultVar_22;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__Goals_23;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__ArgVars_25;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__InstMapDelta_26;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__CallGoal_27;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__AllGoals_28;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__NonLocals_29;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__GoalInfo_30;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_36_36;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_46_46;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_47_47;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_48_48;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_49_49;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_50_50;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_51_51;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_52_52;
#line 1174 "format_call.m"
    MR_String check_hlds__format_call__V_53_53;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_54_54;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_55_55;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_56_56;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_57_57;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_58_58;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_59_59;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_60_60;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_61_61;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_62_62;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_63_63;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_64_64;
#line 1174 "format_call.m"
    MR_Word check_hlds__format_call__V_65_65;

#line 1175 "format_call.m"
    {
#line 1175 "format_call.m"
      check_hlds__format_call__succeeded = check_hlds__format_call__interpret_format_string_4_p_0(check_hlds__format_call__FormatStringChars_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__format_call__VarsToPrint_17, &check_hlds__format_call__Components_21);
    }
#line 1174 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 1174 "format_call.m"
      {
#line 1176 "format_call.m"
        check_hlds__format_call__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1176 "format_call.m"
        {
#line 1176 "format_call.m"
          check_hlds__format_call__replace_string_format_9_p_0(check_hlds__format_call__ModuleInfo_12, check_hlds__format_call__Components_21, check_hlds__format_call__V_36_36, &check_hlds__format_call__ResultVar_22, &check_hlds__format_call__Goals_23, check_hlds__format_call__STATE_VARIABLE_VarSet_0_31, check_hlds__format_call__STATE_VARIABLE_VarSet_32, check_hlds__format_call__STATE_VARIABLE_VarTypes_0_33, check_hlds__format_call__STATE_VARIABLE_VarTypes_34);
        }
#line 1181 "format_call.m"
        if ((check_hlds__format_call__MaybeStreamVar_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1182 "format_call.m"
          {
#line 1182 "format_call.m"
            MR_Word check_hlds__format_call__V_39_39;
#line 1182 "format_call.m"
            MR_Word check_hlds__format_call__V_40_40;

#line 1183 "format_call.m"
            {
#line 1183 "format_call.m"
              check_hlds__format_call__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_40_40, 0) = ((MR_Box) (check_hlds__format_call__IOOutVar_16));
#line 1183 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1183 "format_call.m"
            }
#line 1183 "format_call.m"
            {
#line 1183 "format_call.m"
              check_hlds__format_call__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_39_39, 0) = ((MR_Box) (check_hlds__format_call__IOInVar_15));
#line 1183 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_39_39, 1) = ((MR_Box) (check_hlds__format_call__V_40_40));
#line 1183 "format_call.m"
            }
#line 1183 "format_call.m"
            {
#line 1183 "format_call.m"
              check_hlds__format_call__ArgVars_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__ArgVars_25, 0) = ((MR_Box) (check_hlds__format_call__ResultVar_22));
#line 1183 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__ArgVars_25, 1) = ((MR_Box) (check_hlds__format_call__V_39_39));
#line 1183 "format_call.m"
            }
#line 1182 "format_call.m"
          }
#line 1181 "format_call.m"
        else
#line 1179 "format_call.m"
          {
#line 1179 "format_call.m"
            MR_Word check_hlds__format_call__StreamVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__MaybeStreamVar_14, (MR_Integer) 0)));
#line 1179 "format_call.m"
            MR_Word check_hlds__format_call__V_42_42;
#line 1179 "format_call.m"
            MR_Word check_hlds__format_call__V_43_43;
#line 1179 "format_call.m"
            MR_Word check_hlds__format_call__V_44_44;

#line 1180 "format_call.m"
            {
#line 1180 "format_call.m"
              check_hlds__format_call__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_44_44, 0) = ((MR_Box) (check_hlds__format_call__IOOutVar_16));
#line 1180 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1180 "format_call.m"
            }
#line 1180 "format_call.m"
            {
#line 1180 "format_call.m"
              check_hlds__format_call__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_43_43, 0) = ((MR_Box) (check_hlds__format_call__IOInVar_15));
#line 1180 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_43_43, 1) = ((MR_Box) (check_hlds__format_call__V_44_44));
#line 1180 "format_call.m"
            }
#line 1180 "format_call.m"
            {
#line 1180 "format_call.m"
              check_hlds__format_call__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_42_42, 0) = ((MR_Box) (check_hlds__format_call__ResultVar_22));
#line 1180 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_42_42, 1) = ((MR_Box) (check_hlds__format_call__V_43_43));
#line 1180 "format_call.m"
            }
#line 1180 "format_call.m"
            {
#line 1180 "format_call.m"
              check_hlds__format_call__ArgVars_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__ArgVars_25, 0) = ((MR_Box) (check_hlds__format_call__StreamVar_24));
#line 1180 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__ArgVars_25, 1) = ((MR_Box) (check_hlds__format_call__V_42_42));
#line 1180 "format_call.m"
            }
#line 1179 "format_call.m"
          }
#line 1186 "format_call.m"
        check_hlds__format_call__V_49_49 = (MR_Integer) 1;
#line 1186 "format_call.m"
        check_hlds__format_call__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1186 "format_call.m"
        check_hlds__format_call__V_51_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1186 "format_call.m"
        check_hlds__format_call__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__format_call_scalar_common_1[10]);
#line 1186 "format_call.m"
        {
#line 1186 "format_call.m"
          check_hlds__format_call__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1186 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_47_47, 0) = ((MR_Box) (check_hlds__format_call__IOOutVar_16));
#line 1186 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_47_47, 1) = ((MR_Box) (check_hlds__format_call__V_48_48));
#line 1186 "format_call.m"
        }
#line 1185 "format_call.m"
        {
#line 1185 "format_call.m"
          check_hlds__format_call__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1185 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_46_46, 0) = ((MR_Box) (check_hlds__format_call__V_47_47));
#line 1185 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_46_46, 1) = ((MR_Box) (check_hlds__format_call__V_51_51));
#line 1185 "format_call.m"
        }
#line 1185 "format_call.m"
        {
#line 1185 "format_call.m"
          check_hlds__format_call__InstMapDelta_26 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__format_call__V_46_46);
        }
#line 1187 "format_call.m"
        {
#line 1187 "format_call.m"
          check_hlds__format_call__V_52_52 = mdbcomp__prim_data__mercury_io_module_0_f_0();
        }
#line 1187 "format_call.m"
        check_hlds__format_call__V_53_53 = (MR_String) "write_string";
#line 1187 "format_call.m"
        check_hlds__format_call__V_54_54 = (MR_Integer) 0;
#line 1187 "format_call.m"
        check_hlds__format_call__V_55_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1187 "format_call.m"
        check_hlds__format_call__V_56_56 = (MR_Integer) 0;
#line 1187 "format_call.m"
        check_hlds__format_call__V_57_57 = (MR_Integer) 0;
#line 1187 "format_call.m"
        check_hlds__format_call__V_58_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1187 "format_call.m"
        {
#line 1187 "format_call.m"
          check_hlds__format_call__V_59_59 = mercury__term__context_init_0_f_0();
        }
#line 1187 "format_call.m"
        {
#line 1187 "format_call.m"
          hlds__goal_util__generate_simple_call_12_p_0(check_hlds__format_call__V_52_52, check_hlds__format_call__V_53_53, check_hlds__format_call__V_54_54, check_hlds__format_call__V_55_55, check_hlds__format_call__V_56_56, check_hlds__format_call__V_57_57, check_hlds__format_call__ArgVars_25, check_hlds__format_call__V_58_58, check_hlds__format_call__InstMapDelta_26, check_hlds__format_call__ModuleInfo_12, check_hlds__format_call__V_59_59, &check_hlds__format_call__CallGoal_27);
        }
#line 8461 "check_hlds.format_call.c"
        check_hlds__format_call__TypeCtorInfo_66_66 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 1191 "format_call.m"
        check_hlds__format_call__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1191 "format_call.m"
        {
#line 1191 "format_call.m"
          check_hlds__format_call__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_60_60, 0) = ((MR_Box) (check_hlds__format_call__CallGoal_27));
#line 1191 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_60_60, 1) = ((MR_Box) (check_hlds__format_call__V_61_61));
#line 1191 "format_call.m"
        }
#line 1191 "format_call.m"
        {
#line 1191 "format_call.m"
          check_hlds__format_call__AllGoals_28 = mercury__list__f_43_43_2_f_0(check_hlds__format_call__TypeCtorInfo_66_66, check_hlds__format_call__Goals_23, check_hlds__format_call__V_60_60);
        }
#line 8480 "check_hlds.format_call.c"
        check_hlds__format_call__TypeCtorInfo_67_67 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 8482 "check_hlds.format_call.c"
        check_hlds__format_call__TypeInfo_68_68 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 1192 "format_call.m"
        {
#line 1192 "format_call.m"
          check_hlds__format_call__V_62_62 = mercury__list__f_43_43_2_f_0(check_hlds__format_call__TypeInfo_68_68, check_hlds__format_call__ArgVars_25, check_hlds__format_call__VarsToPrint_17);
        }
#line 1192 "format_call.m"
        {
#line 1192 "format_call.m"
          check_hlds__format_call__NonLocals_29 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__format_call__TypeCtorInfo_67_67, check_hlds__format_call__V_62_62);
        }
#line 1193 "format_call.m"
        check_hlds__format_call__V_63_63 = (MR_Integer) 0;
#line 1193 "format_call.m"
        check_hlds__format_call__V_64_64 = (MR_Integer) 0;
#line 1193 "format_call.m"
        {
#line 1193 "format_call.m"
          check_hlds__format_call__V_65_65 = mercury__term__context_init_0_f_0();
        }
#line 1193 "format_call.m"
        {
#line 1193 "format_call.m"
          hlds__hlds_goal__goal_info_init_6_p_0(check_hlds__format_call__NonLocals_29, check_hlds__format_call__InstMapDelta_26, check_hlds__format_call__V_63_63, check_hlds__format_call__V_64_64, check_hlds__format_call__V_65_65, &check_hlds__format_call__GoalInfo_30);
        }
#line 1195 "format_call.m"
        {
#line 1195 "format_call.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__format_call__AllGoals_28, check_hlds__format_call__GoalInfo_30, check_hlds__format_call__Goal_18);
        }
#line 1195 "format_call.m"
        check_hlds__format_call__succeeded = MR_TRUE;
#line 1174 "format_call.m"
      }
#line 1174 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 1174 "format_call.m"
  }
#line 1167 "format_call.m"
}

#line 1117 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call__create_string_format_replacement_9_p_0(
#line 1117 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_10,
#line 1117 "format_call.m"
  MR_Word check_hlds__format_call__FormatStringChars_11,
#line 1117 "format_call.m"
  MR_Word check_hlds__format_call__ResultVar_12,
#line 1117 "format_call.m"
  MR_Word check_hlds__format_call__VarsToPrint_13,
#line 1117 "format_call.m"
  MR_Word * check_hlds__format_call__Goal_14,
#line 1117 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_0_25,
#line 1117 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarSet_26,
#line 1117 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_0_27,
#line 1117 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarTypes_28)
#line 1117 "format_call.m"
{
#line 1122 "format_call.m"
  {
#line 1122 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 1122 "format_call.m"
    MR_Word check_hlds__format_call__TypeCtorInfo_42_42;
#line 1122 "format_call.m"
    MR_Word check_hlds__format_call__Components_17;
#line 1122 "format_call.m"
    MR_Word check_hlds__format_call__ActualResultVar_18;
#line 1122 "format_call.m"
    MR_Word check_hlds__format_call__Goals_19;
#line 1122 "format_call.m"
    MR_Word check_hlds__format_call__AllGoals_20;
#line 1122 "format_call.m"
    MR_Word check_hlds__format_call__NonLocals_22;
#line 1122 "format_call.m"
    MR_Word check_hlds__format_call__InstMapDelta_23;
#line 1122 "format_call.m"
    MR_Word check_hlds__format_call__GoalInfo_24;
#line 1122 "format_call.m"
    MR_Word check_hlds__format_call__V_30_30;
#line 1122 "format_call.m"
    MR_Word check_hlds__format_call__V_37_37;
#line 1122 "format_call.m"
    MR_Word check_hlds__format_call__V_38_38;
#line 1122 "format_call.m"
    MR_Word check_hlds__format_call__V_39_39;
#line 1122 "format_call.m"
    MR_Word check_hlds__format_call__V_40_40;
#line 1126 "format_call.m"
    MR_Word check_hlds__format_call__TypeInfo_43_43;

#line 1123 "format_call.m"
    {
#line 1123 "format_call.m"
      check_hlds__format_call__succeeded = check_hlds__format_call__interpret_format_string_4_p_0(check_hlds__format_call__FormatStringChars_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__format_call__VarsToPrint_13, &check_hlds__format_call__Components_17);
    }
#line 1122 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 1122 "format_call.m"
      {
#line 1124 "format_call.m"
        {
#line 1124 "format_call.m"
          check_hlds__format_call__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_30_30, 0) = ((MR_Box) (check_hlds__format_call__ResultVar_12));
#line 1124 "format_call.m"
        }
#line 1124 "format_call.m"
        {
#line 1124 "format_call.m"
          check_hlds__format_call__replace_string_format_9_p_0(check_hlds__format_call__ModuleInfo_10, check_hlds__format_call__Components_17, check_hlds__format_call__V_30_30, &check_hlds__format_call__ActualResultVar_18, &check_hlds__format_call__Goals_19, check_hlds__format_call__STATE_VARIABLE_VarSet_0_25, check_hlds__format_call__STATE_VARIABLE_VarSet_26, check_hlds__format_call__STATE_VARIABLE_VarTypes_0_27, check_hlds__format_call__STATE_VARIABLE_VarTypes_28);
        }
#line 8602 "check_hlds.format_call.c"
        check_hlds__format_call__TypeInfo_43_43 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 1126 "format_call.m"
        {
#line 1126 "format_call.m"
          check_hlds__format_call__succeeded = mercury__builtin__unify_2_p_0(check_hlds__format_call__TypeInfo_43_43, ((MR_Box) (check_hlds__format_call__ActualResultVar_18)), ((MR_Box) (check_hlds__format_call__ResultVar_12)));
        }
#line 1128 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 1127 "format_call.m"
          check_hlds__format_call__AllGoals_20 = check_hlds__format_call__Goals_19;
#line 1128 "format_call.m"
        else
#line 1130 "format_call.m"
          {
#line 1130 "format_call.m"
            MR_Word check_hlds__format_call__AssignGoal_21;
#line 1130 "format_call.m"
            MR_Word check_hlds__format_call__V_35_35;

#line 1129 "format_call.m"
            {
#line 1129 "format_call.m"
              hlds__hlds_goal__make_simple_assign_5_p_0(check_hlds__format_call__ResultVar_12, check_hlds__format_call__ActualResultVar_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__format_call__AssignGoal_21);
            }
#line 1131 "format_call.m"
            {
#line 1131 "format_call.m"
              check_hlds__format_call__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_35_35, 0) = ((MR_Box) (check_hlds__format_call__AssignGoal_21));
#line 1131 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1131 "format_call.m"
            }
#line 1131 "format_call.m"
            {
#line 1131 "format_call.m"
              check_hlds__format_call__AllGoals_20 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__format_call__Goals_19, check_hlds__format_call__V_35_35);
            }
#line 1130 "format_call.m"
          }
#line 8644 "check_hlds.format_call.c"
        check_hlds__format_call__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1133 "format_call.m"
        {
#line 1133 "format_call.m"
          check_hlds__format_call__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1133 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_37_37, 0) = ((MR_Box) (check_hlds__format_call__ResultVar_12));
#line 1133 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_37_37, 1) = ((MR_Box) (check_hlds__format_call__VarsToPrint_13));
#line 1133 "format_call.m"
        }
#line 1133 "format_call.m"
        {
#line 1133 "format_call.m"
          check_hlds__format_call__NonLocals_22 = parse_tree__set_of_var__list_to_set_1_f_0(check_hlds__format_call__TypeCtorInfo_42_42, check_hlds__format_call__V_37_37);
        }
#line 1134 "format_call.m"
        {
#line 1134 "format_call.m"
          check_hlds__format_call__InstMapDelta_23 = hlds__instmap__instmap_delta_bind_var_1_f_0(check_hlds__format_call__ResultVar_12);
        }
#line 1135 "format_call.m"
        check_hlds__format_call__V_38_38 = (MR_Integer) 0;
#line 1135 "format_call.m"
        check_hlds__format_call__V_39_39 = (MR_Integer) 0;
#line 1135 "format_call.m"
        {
#line 1135 "format_call.m"
          check_hlds__format_call__V_40_40 = mercury__term__context_init_0_f_0();
        }
#line 1135 "format_call.m"
        {
#line 1135 "format_call.m"
          hlds__hlds_goal__goal_info_init_6_p_0(check_hlds__format_call__NonLocals_22, check_hlds__format_call__InstMapDelta_23, check_hlds__format_call__V_38_38, check_hlds__format_call__V_39_39, check_hlds__format_call__V_40_40, &check_hlds__format_call__GoalInfo_24);
        }
#line 1137 "format_call.m"
        {
#line 1137 "format_call.m"
          hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__format_call__AllGoals_20, check_hlds__format_call__GoalInfo_24, check_hlds__format_call__Goal_14);
        }
#line 1137 "format_call.m"
        check_hlds__format_call__succeeded = MR_TRUE;
#line 1122 "format_call.m"
      }
#line 1122 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 1122 "format_call.m"
  }
#line 1117 "format_call.m"
}

#line 1094 "format_call.m"
static void MR_CALL 
check_hlds__format_call__opt_format_call_sites_in_switch_10_p_0(
#line 1094 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 1094 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__2_2,
#line 1094 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_3,
#line 1094 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_GoalIdMap_4,
#line 1094 "format_call.m"
  MR_Word check_hlds__format_call__NeededVars0_5,
#line 1094 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_0_6,
#line 1094 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_7,
#line 1094 "format_call.m"
  MR_Word check_hlds__format_call__ToDeleteVars0_8,
#line 1094 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9,
#line 1094 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_10)
#line 1094 "format_call.m"
{
#line 1100 "format_call.m"
  {
#line 1100 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;

#line 1100 "format_call.m"
    if ((check_hlds__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1100 "format_call.m"
      {
#line 1100 "format_call.m"
        *check_hlds__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1100 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_10 = check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9;
#line 1100 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_7 = check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_0_6;
#line 1100 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_GoalIdMap_4 = check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_3;
#line 1100 "format_call.m"
      }
#line 1100 "format_call.m"
    else
#line 1103 "format_call.m"
      {
#line 1103 "format_call.m"
        MR_Word check_hlds__format_call__Case0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1103 "format_call.m"
        MR_Word check_hlds__format_call__Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 1103 "format_call.m"
        MR_Word check_hlds__format_call__Case_24;
#line 1103 "format_call.m"
        MR_Word check_hlds__format_call__Cases_25;
#line 1103 "format_call.m"
        MR_Word check_hlds__format_call__FirstConsId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Case0_22, (MR_Integer) 0)));
#line 1103 "format_call.m"
        MR_Word check_hlds__format_call__LaterConsIds_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Case0_22, (MR_Integer) 1)));
#line 1103 "format_call.m"
        MR_Word check_hlds__format_call__Goal0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Case0_22, (MR_Integer) 2)));
#line 1103 "format_call.m"
        MR_Word check_hlds__format_call__Goal_34;
#line 1103 "format_call.m"
        MR_Word check_hlds__format_call__NeededVars_35;
#line 1103 "format_call.m"
        MR_Word check_hlds__format_call__ToDeleteVars_36;
#line 1103 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_43_43;
#line 1103 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_44_44;
#line 1103 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_45_45;

#line 1107 "format_call.m"
        {
#line 1107 "format_call.m"
          check_hlds__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__format_call__Goal0_33, &check_hlds__format_call__Goal_34, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_3, &check_hlds__format_call__STATE_VARIABLE_GoalIdMap_43_43, check_hlds__format_call__NeededVars0_5, &check_hlds__format_call__NeededVars_35, check_hlds__format_call__ToDeleteVars0_8, &check_hlds__format_call__ToDeleteVars_36);
        }
#line 1109 "format_call.m"
        {
#line 1109 "format_call.m"
          check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1109 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_44_44, 0) = ((MR_Box) (check_hlds__format_call__NeededVars_35));
#line 1109 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_44_44, 1) = ((MR_Box) (check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_0_6));
#line 1109 "format_call.m"
        }
#line 1110 "format_call.m"
        {
#line 1110 "format_call.m"
          check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_45_45, 0) = ((MR_Box) (check_hlds__format_call__ToDeleteVars_36));
#line 1110 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_45_45, 1) = ((MR_Box) (check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9));
#line 1110 "format_call.m"
        }
#line 1111 "format_call.m"
        {
#line 1111 "format_call.m"
          check_hlds__format_call__Case_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1111 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__Case_24, 0) = ((MR_Box) (check_hlds__format_call__FirstConsId_31));
#line 1111 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__Case_24, 1) = ((MR_Box) (check_hlds__format_call__LaterConsIds_32));
#line 1111 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__Case_24, 2) = ((MR_Box) (check_hlds__format_call__Goal_34));
#line 1111 "format_call.m"
        }
#line 1112 "format_call.m"
        {
#line 1112 "format_call.m"
          check_hlds__format_call__opt_format_call_sites_in_switch_10_p_0(check_hlds__format_call__Cases0_23, &check_hlds__format_call__Cases_25, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_43_43, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_4, check_hlds__format_call__NeededVars0_5, check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_44_44, check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_7, check_hlds__format_call__ToDeleteVars0_8, check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_45_45, check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_10);
        }
#line 1103 "format_call.m"
        {
#line 1103 "format_call.m"
          MR_Word base;
#line 1103 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "format_call.m"
          *check_hlds__format_call__HeadVar__2_2 = base;
#line 1103 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__Case_24));
#line 1103 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__format_call__Cases_25));
#line 1103 "format_call.m"
        }
#line 1103 "format_call.m"
      }
#line 1100 "format_call.m"
  }
#line 1094 "format_call.m"
}

#line 1074 "format_call.m"
static void MR_CALL 
check_hlds__format_call__opt_format_call_sites_in_disj_10_p_0(
#line 1074 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 1074 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__2_2,
#line 1074 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_3,
#line 1074 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_GoalIdMap_4,
#line 1074 "format_call.m"
  MR_Word check_hlds__format_call__NeededVars0_5,
#line 1074 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_0_6,
#line 1074 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_7,
#line 1074 "format_call.m"
  MR_Word check_hlds__format_call__ToDeleteVars0_8,
#line 1074 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9,
#line 1074 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_10)
#line 1074 "format_call.m"
{
#line 1081 "format_call.m"
  {
#line 1081 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;

#line 1081 "format_call.m"
    if ((check_hlds__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1081 "format_call.m"
      {
#line 1081 "format_call.m"
        *check_hlds__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1081 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_10 = check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9;
#line 1081 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_7 = check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_0_6;
#line 1081 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_GoalIdMap_4 = check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_3;
#line 1081 "format_call.m"
      }
#line 1081 "format_call.m"
    else
#line 1084 "format_call.m"
      {
#line 1084 "format_call.m"
        MR_Word check_hlds__format_call__Goal0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1084 "format_call.m"
        MR_Word check_hlds__format_call__Goals0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 1084 "format_call.m"
        MR_Word check_hlds__format_call__Goal_24;
#line 1084 "format_call.m"
        MR_Word check_hlds__format_call__Goals_25;
#line 1084 "format_call.m"
        MR_Word check_hlds__format_call__NeededVars_31;
#line 1084 "format_call.m"
        MR_Word check_hlds__format_call__ToDeleteVars_32;
#line 1084 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_39_39;
#line 1084 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_40_40;
#line 1084 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_41_41;

#line 1087 "format_call.m"
        {
#line 1087 "format_call.m"
          check_hlds__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__format_call__Goal0_22, &check_hlds__format_call__Goal_24, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_3, &check_hlds__format_call__STATE_VARIABLE_GoalIdMap_39_39, check_hlds__format_call__NeededVars0_5, &check_hlds__format_call__NeededVars_31, check_hlds__format_call__ToDeleteVars0_8, &check_hlds__format_call__ToDeleteVars_32);
        }
#line 1089 "format_call.m"
        {
#line 1089 "format_call.m"
          check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1089 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_40_40, 0) = ((MR_Box) (check_hlds__format_call__NeededVars_31));
#line 1089 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_40_40, 1) = ((MR_Box) (check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_0_6));
#line 1089 "format_call.m"
        }
#line 1090 "format_call.m"
        {
#line 1090 "format_call.m"
          check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1090 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_41_41, 0) = ((MR_Box) (check_hlds__format_call__ToDeleteVars_32));
#line 1090 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_41_41, 1) = ((MR_Box) (check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_0_9));
#line 1090 "format_call.m"
        }
#line 1091 "format_call.m"
        {
#line 1091 "format_call.m"
          check_hlds__format_call__opt_format_call_sites_in_disj_10_p_0(check_hlds__format_call__Goals0_23, &check_hlds__format_call__Goals_25, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_39_39, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_4, check_hlds__format_call__NeededVars0_5, check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_40_40, check_hlds__format_call__STATE_VARIABLE_NeededVarsSets_7, check_hlds__format_call__ToDeleteVars0_8, check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_41_41, check_hlds__format_call__STATE_VARIABLE_ToDeleteVarsSets_10);
        }
#line 1084 "format_call.m"
        {
#line 1084 "format_call.m"
          MR_Word base;
#line 1084 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1084 "format_call.m"
          *check_hlds__format_call__HeadVar__2_2 = base;
#line 1084 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__Goal_24));
#line 1084 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__format_call__Goals_25));
#line 1084 "format_call.m"
        }
#line 1084 "format_call.m"
      }
#line 1081 "format_call.m"
  }
#line 1074 "format_call.m"
}

#line 1058 "format_call.m"
static void MR_CALL 
check_hlds__format_call__opt_format_call_sites_in_conj_8_p_0(
#line 1058 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 1058 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__2_2,
#line 1058 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_3,
#line 1058 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_GoalIdMap_4,
#line 1058 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_NeededVars_0_5,
#line 1058 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_NeededVars_6,
#line 1058 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_7,
#line 1058 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_8)
#line 1058 "format_call.m"
{
#line 1064 "format_call.m"
  {
#line 1064 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;

#line 1064 "format_call.m"
    if ((check_hlds__format_call__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1064 "format_call.m"
      {
#line 1064 "format_call.m"
        *check_hlds__format_call__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1064 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_8 = check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_7;
#line 1064 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_NeededVars_6 = check_hlds__format_call__STATE_VARIABLE_NeededVars_0_5;
#line 1064 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_GoalIdMap_4 = check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_3;
#line 1064 "format_call.m"
      }
#line 1064 "format_call.m"
    else
#line 1067 "format_call.m"
      {
#line 1067 "format_call.m"
        MR_Word check_hlds__format_call__Goal0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 1067 "format_call.m"
        MR_Word check_hlds__format_call__Goals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 1067 "format_call.m"
        MR_Word check_hlds__format_call__Goal_20;
#line 1067 "format_call.m"
        MR_Word check_hlds__format_call__Goals_21;
#line 1067 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_31_31;
#line 1067 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_NeededVars_32_32;
#line 1067 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_33_33;

#line 1069 "format_call.m"
        {
#line 1069 "format_call.m"
          check_hlds__format_call__opt_format_call_sites_in_conj_8_p_0(check_hlds__format_call__Goals0_19, &check_hlds__format_call__Goals_21, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_3, &check_hlds__format_call__STATE_VARIABLE_GoalIdMap_31_31, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_5, &check_hlds__format_call__STATE_VARIABLE_NeededVars_32_32, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_7, &check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_33_33);
        }
#line 1071 "format_call.m"
        {
#line 1071 "format_call.m"
          check_hlds__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__format_call__Goal0_18, &check_hlds__format_call__Goal_20, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_31_31, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_4, check_hlds__format_call__STATE_VARIABLE_NeededVars_32_32, check_hlds__format_call__STATE_VARIABLE_NeededVars_6, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_33_33, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_8);
        }
#line 1067 "format_call.m"
        {
#line 1067 "format_call.m"
          MR_Word base;
#line 1067 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "format_call.m"
          *check_hlds__format_call__HeadVar__2_2 = base;
#line 1067 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__Goal_20));
#line 1067 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__format_call__Goals_21));
#line 1067 "format_call.m"
        }
#line 1067 "format_call.m"
      }
#line 1064 "format_call.m"
  }
#line 1058 "format_call.m"
}

#line 896 "format_call.m"
static void MR_CALL 
check_hlds__format_call__opt_format_call_sites_in_goal_8_p_0(
#line 896 "format_call.m"
  MR_Word check_hlds__format_call__Goal0_9,
#line 896 "format_call.m"
  MR_Word * check_hlds__format_call__Goal_10,
#line 896 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_97,
#line 896 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_GoalIdMap_98,
#line 896 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99,
#line 896 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_NeededVars_100,
#line 896 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101,
#line 896 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_102)
#line 896 "format_call.m"
{
#line 902 "format_call.m"
  while (MR_TRUE)
#line 902 "format_call.m"
    {
#line 902 "format_call.m"
      /* tailcall optimized into a loop */
#line 902 "format_call.m"
      {
#line 902 "format_call.m"
        MR_bool check_hlds__format_call__succeeded;
#line 902 "format_call.m"
        MR_Word check_hlds__format_call__GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Goal0_9, (MR_Integer) 0)));
#line 902 "format_call.m"
        MR_Word check_hlds__format_call__GoalInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Goal0_9, (MR_Integer) 1)));

#line 918 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 0))))
#line 998 "format_call.m"
          {
#line 998 "format_call.m"
            MR_Word check_hlds__format_call__SubGoal0_76 = (MR_Word) MR_body(((MR_Word) check_hlds__format_call__GoalExpr0_14), (MR_Integer) 0);
#line 998 "format_call.m"
            MR_Word check_hlds__format_call__SubGoal_77;
#line 998 "format_call.m"
            MR_Word check_hlds__format_call__GoalExpr_165;

#line 1001 "format_call.m"
            {
#line 1001 "format_call.m"
              check_hlds__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__format_call__SubGoal0_76, &check_hlds__format_call__SubGoal_77, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__format_call__STATE_VARIABLE_NeededVars_100, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_102);
            }
#line 1003 "format_call.m"
            check_hlds__format_call__GoalExpr_165 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) check_hlds__format_call__SubGoal_77);
#line 1004 "format_call.m"
            {
#line 1004 "format_call.m"
              MR_Word base;
#line 1004 "format_call.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1004 "format_call.m"
              *check_hlds__format_call__Goal_10 = base;
#line 1004 "format_call.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__format_call__GoalExpr_165));
#line 1004 "format_call.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__format_call__GoalInfo_15));
#line 1004 "format_call.m"
            }
#line 998 "format_call.m"
          }
#line 918 "format_call.m"
        else
#line 918 "format_call.m"
          if (((MR_tag((MR_Word) check_hlds__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 2))))
#line 905 "format_call.m"
            {
#line 905 "format_call.m"
              MR_Word check_hlds__format_call__GoalId_22;
#line 911 "format_call.m"
              MR_Word check_hlds__format_call__OptGoalInfo_23;
#line 911 "format_call.m"
              MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_151_151;
#line 907 "format_call.m"
              MR_Box check_hlds__format_call__conv0_OptGoalInfo_23;

#line 906 "format_call.m"
              {
#line 906 "format_call.m"
                check_hlds__format_call__GoalId_22 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__format_call__GoalInfo_15);
              }
#line 907 "format_call.m"
              {
#line 907 "format_call.m"
                check_hlds__format_call__succeeded = mercury__map__remove_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0, ((MR_Box) (check_hlds__format_call__GoalId_22)), &check_hlds__format_call__conv0_OptGoalInfo_23, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_97, &check_hlds__format_call__STATE_VARIABLE_GoalIdMap_151_151);
              }
#line 907 "format_call.m"
              if (check_hlds__format_call__succeeded)
#line 907 "format_call.m"
                {
#line 907 "format_call.m"
                  check_hlds__format_call__OptGoalInfo_23 = ((MR_Word) check_hlds__format_call__conv0_OptGoalInfo_23);
#line 907 "format_call.m"
                  check_hlds__format_call__succeeded = MR_TRUE;
#line 907 "format_call.m"
                }
#line 911 "format_call.m"
              if (check_hlds__format_call__succeeded)
#line 908 "format_call.m"
                {
#line 908 "format_call.m"
                  MR_Word check_hlds__format_call__GoalToDeleteVars_25;

#line 908 "format_call.m"
                  *check_hlds__format_call__STATE_VARIABLE_GoalIdMap_98 = check_hlds__format_call__STATE_VARIABLE_GoalIdMap_151_151;
#line 908 "format_call.m"
                  *check_hlds__format_call__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__OptGoalInfo_23, (MR_Integer) 0)));
#line 908 "format_call.m"
                  check_hlds__format_call__GoalToDeleteVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__OptGoalInfo_23, (MR_Integer) 1)));
#line 910 "format_call.m"
                  {
#line 910 "format_call.m"
                    parse_tree__set_of_var__union_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__format_call__GoalToDeleteVars_25, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_102);
                  }
#line 910 "format_call.m"
                  *check_hlds__format_call__STATE_VARIABLE_NeededVars_100 = check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99;
#line 908 "format_call.m"
                }
#line 911 "format_call.m"
              else
#line 912 "format_call.m"
                {
#line 912 "format_call.m"
                  MR_Word check_hlds__format_call__TypeCtorInfo_190_190;
#line 912 "format_call.m"
                  MR_Word check_hlds__format_call__NonLocals_26;

#line 912 "format_call.m"
                  *check_hlds__format_call__Goal_10 = check_hlds__format_call__Goal0_9;
#line 913 "format_call.m"
                  {
#line 913 "format_call.m"
                    check_hlds__format_call__NonLocals_26 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__format_call__GoalInfo_15);
                  }
#line 9185 "check_hlds.format_call.c"
                  check_hlds__format_call__TypeCtorInfo_190_190 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 915 "format_call.m"
                  {
#line 915 "format_call.m"
                    parse_tree__set_of_var__union_3_p_0(check_hlds__format_call__TypeCtorInfo_190_190, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__format_call__NonLocals_26, check_hlds__format_call__STATE_VARIABLE_NeededVars_100);
                  }
#line 916 "format_call.m"
                  {
#line 916 "format_call.m"
                    parse_tree__set_of_var__difference_3_p_0(check_hlds__format_call__TypeCtorInfo_190_190, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__format_call__NonLocals_26, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_102);
                  }
#line 916 "format_call.m"
                  *check_hlds__format_call__STATE_VARIABLE_GoalIdMap_98 = check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_97;
#line 912 "format_call.m"
                }
#line 905 "format_call.m"
            }
#line 918 "format_call.m"
          else
#line 918 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 1))))
#line 928 "format_call.m"
              {
#line 928 "format_call.m"
                MR_Word check_hlds__format_call__Unification_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 3)));
#line 928 "format_call.m"
                MR_Word check_hlds__format_call___LHS_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 0)));
#line 928 "format_call.m"
                MR_Word check_hlds__format_call___RHS_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 928 "format_call.m"
                MR_Word check_hlds__format_call___UnifyModes_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 2)));
#line 928 "format_call.m"
                MR_Word check_hlds__format_call___UnifyContext_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 4)));
#line 939 "format_call.m"
                MR_Word check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_146_146;
#line 931 "format_call.m"
                MR_Word check_hlds__format_call__TypeCtorInfo_193_193;
#line 931 "format_call.m"
                MR_Word check_hlds__format_call__LHSVar_44;
#line 930 "format_call.m"
                MR_Word check_hlds__format_call___ConsId_45;
#line 930 "format_call.m"
                MR_Word check_hlds__format_call___RHSVars_46;
#line 930 "format_call.m"
                MR_Word check_hlds__format_call___ArgModes_47;
#line 930 "format_call.m"
                MR_Word check_hlds__format_call___How_48;
#line 930 "format_call.m"
                MR_Word check_hlds__format_call___Unique_49;
#line 930 "format_call.m"
                MR_Word check_hlds__format_call___SubInfo_50;
#line 932 "format_call.m"
                MR_Word check_hlds__format_call__TypeCtorInfo_192_192;

#line 930 "format_call.m"
                check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__Unification_42)) == (MR_mktag((MR_Integer) 0)));
#line 930 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 930 "format_call.m"
                  {
#line 930 "format_call.m"
                    check_hlds__format_call__LHSVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Unification_42, (MR_Integer) 0)));
#line 930 "format_call.m"
                    check_hlds__format_call___ConsId_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Unification_42, (MR_Integer) 1)));
#line 930 "format_call.m"
                    check_hlds__format_call___RHSVars_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Unification_42, (MR_Integer) 2)));
#line 930 "format_call.m"
                    check_hlds__format_call___ArgModes_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Unification_42, (MR_Integer) 3)));
#line 930 "format_call.m"
                    check_hlds__format_call___How_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Unification_42, (MR_Integer) 4)));
#line 930 "format_call.m"
                    check_hlds__format_call___Unique_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Unification_42, (MR_Integer) 5)));
#line 930 "format_call.m"
                    check_hlds__format_call___SubInfo_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Unification_42, (MR_Integer) 6)));
#line 9260 "check_hlds.format_call.c"
                    check_hlds__format_call__TypeCtorInfo_192_192 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 932 "format_call.m"
                    {
#line 932 "format_call.m"
                      check_hlds__format_call__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__format_call__TypeCtorInfo_192_192, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__format_call__LHSVar_44);
                    }
#line 932 "format_call.m"
                    check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 931 "format_call.m"
                    if (check_hlds__format_call__succeeded)
#line 931 "format_call.m"
                      {
#line 9273 "check_hlds.format_call.c"
                        check_hlds__format_call__TypeCtorInfo_193_193 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 935 "format_call.m"
                        {
#line 935 "format_call.m"
                          check_hlds__format_call__succeeded = parse_tree__set_of_var__remove_3_p_0(check_hlds__format_call__TypeCtorInfo_193_193, check_hlds__format_call__LHSVar_44, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, &check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_146_146);
                        }
#line 931 "format_call.m"
                      }
#line 930 "format_call.m"
                  }
#line 939 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 938 "format_call.m"
                  {
#line 938 "format_call.m"
                    *check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_102 = check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_146_146;
#line 938 "format_call.m"
                    {
#line 938 "format_call.m"
                      *check_hlds__format_call__Goal_10 = hlds__hlds_goal__true_goal_0_f_0();
                    }
#line 938 "format_call.m"
                    *check_hlds__format_call__STATE_VARIABLE_NeededVars_100 = check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99;
#line 938 "format_call.m"
                  }
#line 939 "format_call.m"
                else
#line 949 "format_call.m"
                  {
#line 949 "format_call.m"
                    MR_Word check_hlds__format_call__TypeCtorInfo_194_194;
#line 949 "format_call.m"
                    MR_Word check_hlds__format_call__NonLocals_157;

#line 949 "format_call.m"
                    *check_hlds__format_call__Goal_10 = check_hlds__format_call__Goal0_9;
#line 950 "format_call.m"
                    {
#line 950 "format_call.m"
                      check_hlds__format_call__NonLocals_157 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__format_call__GoalInfo_15);
                    }
#line 9315 "check_hlds.format_call.c"
                    check_hlds__format_call__TypeCtorInfo_194_194 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 952 "format_call.m"
                    {
#line 952 "format_call.m"
                      parse_tree__set_of_var__union_3_p_0(check_hlds__format_call__TypeCtorInfo_194_194, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__format_call__NonLocals_157, check_hlds__format_call__STATE_VARIABLE_NeededVars_100);
                    }
#line 953 "format_call.m"
                    {
#line 953 "format_call.m"
                      parse_tree__set_of_var__difference_3_p_0(check_hlds__format_call__TypeCtorInfo_194_194, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__format_call__NonLocals_157, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_102);
                    }
#line 949 "format_call.m"
                  }
#line 953 "format_call.m"
                *check_hlds__format_call__STATE_VARIABLE_GoalIdMap_98 = check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_97;
#line 928 "format_call.m"
              }
#line 918 "format_call.m"
            else
#line 918 "format_call.m"
              if (((((MR_tag((MR_Word) check_hlds__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 957 "format_call.m"
                {
#line 957 "format_call.m"
                  MR_Word check_hlds__format_call__ConjType_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 957 "format_call.m"
                  MR_Word check_hlds__format_call__Conjuncts0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 2)));
#line 957 "format_call.m"
                  MR_Word check_hlds__format_call__Conjuncts_53;
#line 957 "format_call.m"
                  MR_Word check_hlds__format_call__GoalExpr_54;

#line 958 "format_call.m"
                  {
#line 958 "format_call.m"
                    check_hlds__format_call__opt_format_call_sites_in_conj_8_p_0(check_hlds__format_call__Conjuncts0_52, &check_hlds__format_call__Conjuncts_53, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__format_call__STATE_VARIABLE_NeededVars_100, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_102);
                  }
#line 960 "format_call.m"
                  {
#line 960 "format_call.m"
                    check_hlds__format_call__GoalExpr_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 960 "format_call.m"
                    MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 960 "format_call.m"
                    MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_54, 1) = ((MR_Box) (check_hlds__format_call__ConjType_51));
#line 960 "format_call.m"
                    MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_54, 2) = ((MR_Box) (check_hlds__format_call__Conjuncts_53));
#line 960 "format_call.m"
                  }
#line 961 "format_call.m"
                  {
#line 961 "format_call.m"
                    MR_Word base;
#line 961 "format_call.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 961 "format_call.m"
                    *check_hlds__format_call__Goal_10 = base;
#line 961 "format_call.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__format_call__GoalExpr_54));
#line 961 "format_call.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__format_call__GoalInfo_15));
#line 961 "format_call.m"
                  }
#line 957 "format_call.m"
                }
#line 918 "format_call.m"
              else
#line 918 "format_call.m"
                if (((((MR_tag((MR_Word) check_hlds__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 963 "format_call.m"
                  {
#line 963 "format_call.m"
                    MR_Word check_hlds__format_call__TypeCtorInfo_195_195;
#line 963 "format_call.m"
                    MR_Word check_hlds__format_call__Disjuncts0_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 963 "format_call.m"
                    MR_Word check_hlds__format_call__Disjuncts_56;
#line 963 "format_call.m"
                    MR_Word check_hlds__format_call__NeededVarsSets_57;
#line 963 "format_call.m"
                    MR_Word check_hlds__format_call__ToDeleteVarsSets_58;
#line 963 "format_call.m"
                    MR_Word check_hlds__format_call__GoalExpr_160;

#line 964 "format_call.m"
                    {
#line 964 "format_call.m"
                      check_hlds__format_call__opt_format_call_sites_in_disj_10_p_0(check_hlds__format_call__Disjuncts0_55, &check_hlds__format_call__Disjuncts_56, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__format_call__NeededVarsSets_57, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__format_call__ToDeleteVarsSets_58);
                    }
#line 9405 "check_hlds.format_call.c"
                    check_hlds__format_call__TypeCtorInfo_195_195 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 967 "format_call.m"
                    {
#line 967 "format_call.m"
                      *check_hlds__format_call__STATE_VARIABLE_NeededVars_100 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__format_call__TypeCtorInfo_195_195, check_hlds__format_call__NeededVarsSets_57);
                    }
#line 968 "format_call.m"
                    {
#line 968 "format_call.m"
                      *check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_102 = parse_tree__set_of_var__intersect_list_1_f_0(check_hlds__format_call__TypeCtorInfo_195_195, check_hlds__format_call__ToDeleteVarsSets_58);
                    }
#line 969 "format_call.m"
                    {
#line 969 "format_call.m"
                      check_hlds__format_call__GoalExpr_160 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "format_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_160, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 969 "format_call.m"
                      MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_160, 1) = ((MR_Box) (check_hlds__format_call__Disjuncts_56));
#line 969 "format_call.m"
                    }
#line 970 "format_call.m"
                    {
#line 970 "format_call.m"
                      MR_Word base;
#line 970 "format_call.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 970 "format_call.m"
                      *check_hlds__format_call__Goal_10 = base;
#line 970 "format_call.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__format_call__GoalExpr_160));
#line 970 "format_call.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__format_call__GoalInfo_15));
#line 970 "format_call.m"
                    }
#line 963 "format_call.m"
                  }
#line 918 "format_call.m"
                else
#line 918 "format_call.m"
                  if (((((MR_tag((MR_Word) check_hlds__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 981 "format_call.m"
                    {
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__TypeCtorInfo_197_197;
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__Vars_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__Cond0_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 2)));
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__Then0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 3)));
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__Else0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 4)));
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__Else_67;
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__NeededVarsBeforeElse_68;
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__ToDeleteVarsBeforeElse_69;
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__Then_70;
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__NeededVarsBeforeThen_71;
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__ToDeleteVarsBeforeThen_72;
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__Cond_73;
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__NeededVarsBeforeCond_74;
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__ToDeleteVarsBeforeCond_75;
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_128_128;
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_129_129;
#line 981 "format_call.m"
                      MR_Word check_hlds__format_call__GoalExpr_164;

#line 982 "format_call.m"
                      {
#line 982 "format_call.m"
                        check_hlds__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__format_call__Else0_66, &check_hlds__format_call__Else_67, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_97, &check_hlds__format_call__STATE_VARIABLE_GoalIdMap_128_128, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99, &check_hlds__format_call__NeededVarsBeforeElse_68, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, &check_hlds__format_call__ToDeleteVarsBeforeElse_69);
                      }
#line 985 "format_call.m"
                      {
#line 985 "format_call.m"
                        check_hlds__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__format_call__Then0_65, &check_hlds__format_call__Then_70, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_128_128, &check_hlds__format_call__STATE_VARIABLE_GoalIdMap_129_129, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99, &check_hlds__format_call__NeededVarsBeforeThen_71, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, &check_hlds__format_call__ToDeleteVarsBeforeThen_72);
                      }
#line 988 "format_call.m"
                      {
#line 988 "format_call.m"
                        check_hlds__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__format_call__Cond0_64, &check_hlds__format_call__Cond_73, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_129_129, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__format_call__NeededVarsBeforeThen_71, &check_hlds__format_call__NeededVarsBeforeCond_74, check_hlds__format_call__ToDeleteVarsBeforeThen_72, &check_hlds__format_call__ToDeleteVarsBeforeCond_75);
                      }
#line 9499 "check_hlds.format_call.c"
                      check_hlds__format_call__TypeCtorInfo_197_197 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 991 "format_call.m"
                      {
#line 991 "format_call.m"
                        parse_tree__set_of_var__union_3_p_0(check_hlds__format_call__TypeCtorInfo_197_197, check_hlds__format_call__NeededVarsBeforeCond_74, check_hlds__format_call__NeededVarsBeforeElse_68, check_hlds__format_call__STATE_VARIABLE_NeededVars_100);
                      }
#line 993 "format_call.m"
                      {
#line 993 "format_call.m"
                        parse_tree__set_of_var__intersect_3_p_0(check_hlds__format_call__TypeCtorInfo_197_197, check_hlds__format_call__ToDeleteVarsBeforeCond_75, check_hlds__format_call__ToDeleteVarsBeforeElse_69, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_102);
                      }
#line 995 "format_call.m"
                      {
#line 995 "format_call.m"
                        check_hlds__format_call__GoalExpr_164 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 995 "format_call.m"
                        MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_164, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 995 "format_call.m"
                        MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_164, 1) = ((MR_Box) (check_hlds__format_call__Vars_63));
#line 995 "format_call.m"
                        MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_164, 2) = ((MR_Box) (check_hlds__format_call__Cond_73));
#line 995 "format_call.m"
                        MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_164, 3) = ((MR_Box) (check_hlds__format_call__Then_70));
#line 995 "format_call.m"
                        MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_164, 4) = ((MR_Box) (check_hlds__format_call__Else_67));
#line 995 "format_call.m"
                      }
#line 996 "format_call.m"
                      {
#line 996 "format_call.m"
                        MR_Word base;
#line 996 "format_call.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 996 "format_call.m"
                        *check_hlds__format_call__Goal_10 = base;
#line 996 "format_call.m"
                        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__format_call__GoalExpr_164));
#line 996 "format_call.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__format_call__GoalInfo_15));
#line 996 "format_call.m"
                      }
#line 981 "format_call.m"
                    }
#line 918 "format_call.m"
                  else
#line 918 "format_call.m"
                    if (((((MR_tag((MR_Word) check_hlds__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1006 "format_call.m"
                      {
#line 1006 "format_call.m"
                        MR_Word check_hlds__format_call__Reason_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 1006 "format_call.m"
                        MR_Word check_hlds__format_call__SubGoal0_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 2)));
#line 1019 "format_call.m"
                        MR_Word check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_118_118;
#line 1008 "format_call.m"
                        MR_Word check_hlds__format_call__TypeCtorInfo_199_199;
#line 1008 "format_call.m"
                        MR_Word check_hlds__format_call__TermVar_79;
#line 1008 "format_call.m"
                        MR_Word check_hlds__format_call__V_117_117;
#line 1009 "format_call.m"
                        MR_Word check_hlds__format_call__TypeCtorInfo_198_198;

#line 1008 "format_call.m"
                        check_hlds__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__format_call__Reason_78)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__Reason_78, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 1008 "format_call.m"
                        if (check_hlds__format_call__succeeded)
#line 1008 "format_call.m"
                          {
#line 1008 "format_call.m"
                            check_hlds__format_call__TermVar_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__Reason_78, (MR_Integer) 1)));
#line 1008 "format_call.m"
                            check_hlds__format_call__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__Reason_78, (MR_Integer) 2)));
#line 1008 "format_call.m"
                            check_hlds__format_call__succeeded = (check_hlds__format_call__V_117_117 == (MR_Integer) 1);
#line 1008 "format_call.m"
                            if (check_hlds__format_call__succeeded)
#line 1008 "format_call.m"
                              {
#line 9580 "check_hlds.format_call.c"
                                check_hlds__format_call__TypeCtorInfo_198_198 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1009 "format_call.m"
                                {
#line 1009 "format_call.m"
                                  check_hlds__format_call__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__format_call__TypeCtorInfo_198_198, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__format_call__TermVar_79);
                                }
#line 1009 "format_call.m"
                                check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 1008 "format_call.m"
                                if (check_hlds__format_call__succeeded)
#line 1008 "format_call.m"
                                  {
#line 9593 "check_hlds.format_call.c"
                                    check_hlds__format_call__TypeCtorInfo_199_199 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1012 "format_call.m"
                                    {
#line 1012 "format_call.m"
                                      check_hlds__format_call__succeeded = parse_tree__set_of_var__remove_3_p_0(check_hlds__format_call__TypeCtorInfo_199_199, check_hlds__format_call__TermVar_79, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, &check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_118_118);
                                    }
#line 1008 "format_call.m"
                                  }
#line 1008 "format_call.m"
                              }
#line 1008 "format_call.m"
                          }
#line 1019 "format_call.m"
                        if (check_hlds__format_call__succeeded)
#line 1017 "format_call.m"
                          {
#line 1017 "format_call.m"
                            /* direct tailcall eliminated */
#line 1017 "format_call.m"
                            {
#line 1017 "format_call.m"
                              MR_Word check_hlds__format_call__Goal0__tmp_copy_9 = check_hlds__format_call__SubGoal0_171;
#line 1017 "format_call.m"
                              MR_Word check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0__tmp_copy_101 = check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_118_118;

#line 1017 "format_call.m"
                              check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101 = check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0__tmp_copy_101;
#line 1017 "format_call.m"
                              check_hlds__format_call__Goal0_9 = check_hlds__format_call__Goal0__tmp_copy_9;
#line 1017 "format_call.m"
                            }
#line 1017 "format_call.m"
                            continue;
#line 1017 "format_call.m"
                          }
#line 1019 "format_call.m"
                        else
#line 1021 "format_call.m"
                          {
#line 1021 "format_call.m"
                            MR_Word check_hlds__format_call__GoalExpr_166;
#line 1021 "format_call.m"
                            MR_Word check_hlds__format_call__SubGoal_167;

#line 1020 "format_call.m"
                            {
#line 1020 "format_call.m"
                              check_hlds__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__format_call__SubGoal0_171, &check_hlds__format_call__SubGoal_167, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__format_call__STATE_VARIABLE_NeededVars_100, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_102);
                            }
#line 1022 "format_call.m"
                            {
#line 1022 "format_call.m"
                              check_hlds__format_call__GoalExpr_166 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_166, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1022 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_166, 1) = ((MR_Box) (check_hlds__format_call__Reason_78));
#line 1022 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_166, 2) = ((MR_Box) (check_hlds__format_call__SubGoal_167));
#line 1022 "format_call.m"
                            }
#line 1023 "format_call.m"
                            {
#line 1023 "format_call.m"
                              MR_Word base;
#line 1023 "format_call.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1023 "format_call.m"
                              *check_hlds__format_call__Goal_10 = base;
#line 1023 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__format_call__GoalExpr_166));
#line 1023 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__format_call__GoalInfo_15));
#line 1023 "format_call.m"
                            }
#line 1021 "format_call.m"
                          }
#line 1006 "format_call.m"
                      }
#line 918 "format_call.m"
                    else
#line 918 "format_call.m"
                      if (((((MR_tag((MR_Word) check_hlds__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1026 "format_call.m"
                        {
#line 1026 "format_call.m"
                          MR_Word check_hlds__format_call__ShortHand0_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 1026 "format_call.m"
                          MR_Word check_hlds__format_call__GoalExpr_182;

#line 1044 "format_call.m"
                          if (((MR_tag((MR_Word) check_hlds__format_call__ShortHand0_80)) == (MR_mktag((MR_Integer) 1))))
#line 1029 "format_call.m"
                            {
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__TypeCtorInfo_200_200;
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__AtomicType_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand0_80, (MR_Integer) 0)));
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__OuterVars_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand0_80, (MR_Integer) 1)));
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__InnerVars_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand0_80, (MR_Integer) 2)));
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__OutputVars_84 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand0_80, (MR_Integer) 3)));
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__MainGoal0_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand0_80, (MR_Integer) 4)));
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__OrElseGoals0_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand0_80, (MR_Integer) 5)));
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__OrElseInners_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand0_80, (MR_Integer) 6)));
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__MainGoal_88;
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__NeededVarsMain_89;
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__ToDeleteVarsMain_90;
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__OrElseGoals_91;
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__ShortHand_92;
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_109_109;
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__V_114_114;
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__V_116_116;
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__NeededVarsSets_173;
#line 1029 "format_call.m"
                              MR_Word check_hlds__format_call__ToDeleteVarsSets_174;

#line 1030 "format_call.m"
                              {
#line 1030 "format_call.m"
                                check_hlds__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__format_call__MainGoal0_85, &check_hlds__format_call__MainGoal_88, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_97, &check_hlds__format_call__STATE_VARIABLE_GoalIdMap_109_109, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99, &check_hlds__format_call__NeededVarsMain_89, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, &check_hlds__format_call__ToDeleteVarsMain_90);
                              }
#line 1033 "format_call.m"
                              {
#line 1033 "format_call.m"
                                check_hlds__format_call__opt_format_call_sites_in_disj_10_p_0(check_hlds__format_call__OrElseGoals0_86, &check_hlds__format_call__OrElseGoals_91, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_109_109, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__format_call__NeededVarsSets_173, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__format_call__ToDeleteVarsSets_174);
                              }
#line 9735 "check_hlds.format_call.c"
                              check_hlds__format_call__TypeCtorInfo_200_200 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1037 "format_call.m"
                              {
#line 1037 "format_call.m"
                                check_hlds__format_call__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1037 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__format_call__V_114_114, 0) = ((MR_Box) (check_hlds__format_call__NeededVarsMain_89));
#line 1037 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__format_call__V_114_114, 1) = ((MR_Box) (check_hlds__format_call__NeededVarsSets_173));
#line 1037 "format_call.m"
                              }
#line 1036 "format_call.m"
                              {
#line 1036 "format_call.m"
                                *check_hlds__format_call__STATE_VARIABLE_NeededVars_100 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__format_call__TypeCtorInfo_200_200, check_hlds__format_call__V_114_114);
                              }
#line 1039 "format_call.m"
                              {
#line 1039 "format_call.m"
                                check_hlds__format_call__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__format_call__V_116_116, 0) = ((MR_Box) (check_hlds__format_call__ToDeleteVarsMain_90));
#line 1039 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__format_call__V_116_116, 1) = ((MR_Box) (check_hlds__format_call__ToDeleteVarsSets_174));
#line 1039 "format_call.m"
                              }
#line 1038 "format_call.m"
                              {
#line 1038 "format_call.m"
                                *check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_102 = parse_tree__set_of_var__intersect_list_1_f_0(check_hlds__format_call__TypeCtorInfo_200_200, check_hlds__format_call__V_116_116);
                              }
#line 1041 "format_call.m"
                              {
#line 1041 "format_call.m"
                                check_hlds__format_call__ShortHand_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand_92, 0) = ((MR_Box) (check_hlds__format_call__AtomicType_81));
#line 1041 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand_92, 1) = ((MR_Box) (check_hlds__format_call__OuterVars_82));
#line 1041 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand_92, 2) = ((MR_Box) (check_hlds__format_call__InnerVars_83));
#line 1041 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand_92, 3) = ((MR_Box) (check_hlds__format_call__OutputVars_84));
#line 1041 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand_92, 4) = ((MR_Box) (check_hlds__format_call__MainGoal_88));
#line 1041 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand_92, 5) = ((MR_Box) (check_hlds__format_call__OrElseGoals_91));
#line 1041 "format_call.m"
                                MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand_92, 6) = ((MR_Box) (check_hlds__format_call__OrElseInners_87));
#line 1041 "format_call.m"
                              }
#line 1043 "format_call.m"
                              {
#line 1043 "format_call.m"
                                check_hlds__format_call__GoalExpr_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "format_call.m"
                                MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1043 "format_call.m"
                                MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_182, 1) = ((MR_Box) (check_hlds__format_call__ShortHand_92));
#line 1043 "format_call.m"
                              }
#line 1029 "format_call.m"
                            }
#line 1044 "format_call.m"
                          else
#line 1044 "format_call.m"
                            if (((MR_tag((MR_Word) check_hlds__format_call__ShortHand0_80)) == (MR_mktag((MR_Integer) 0))))
#line 1051 "format_call.m"
                              {
#line 1053 "format_call.m"
                                {
#line 1053 "format_call.m"
                                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.format_call", (MR_String) "predicate \140check_hlds.format_call.opt_format_call_sites_in_goal\'/8", (MR_String) "bi_implication");
#line 1053 "format_call.m"
                                  return;
                                }
#line 1051 "format_call.m"
                              }
#line 1044 "format_call.m"
                            else
#line 1045 "format_call.m"
                              {
#line 1045 "format_call.m"
                                MR_Word check_hlds__format_call__MaybeIO_93 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__ShortHand0_80, (MR_Integer) 0)));
#line 1045 "format_call.m"
                                MR_Word check_hlds__format_call__ResultVar_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__ShortHand0_80, (MR_Integer) 1)));
#line 1045 "format_call.m"
                                MR_Word check_hlds__format_call__SubGoal0_175 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__ShortHand0_80, (MR_Integer) 2)));
#line 1045 "format_call.m"
                                MR_Word check_hlds__format_call__SubGoal_176;
#line 1045 "format_call.m"
                                MR_Word check_hlds__format_call__ShortHand_177;

#line 1046 "format_call.m"
                                {
#line 1046 "format_call.m"
                                  check_hlds__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__format_call__SubGoal0_175, &check_hlds__format_call__SubGoal_176, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__format_call__STATE_VARIABLE_NeededVars_100, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_102);
                                }
#line 1048 "format_call.m"
                                {
#line 1048 "format_call.m"
                                  check_hlds__format_call__ShortHand_177 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1048 "format_call.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__format_call__ShortHand_177, 0) = ((MR_Box) (check_hlds__format_call__MaybeIO_93));
#line 1048 "format_call.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__format_call__ShortHand_177, 1) = ((MR_Box) (check_hlds__format_call__ResultVar_94));
#line 1048 "format_call.m"
                                  MR_hl_field(MR_mktag(2), check_hlds__format_call__ShortHand_177, 2) = ((MR_Box) (check_hlds__format_call__SubGoal_176));
#line 1048 "format_call.m"
                                }
#line 1049 "format_call.m"
                                {
#line 1049 "format_call.m"
                                  check_hlds__format_call__GoalExpr_182 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "format_call.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_182, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1049 "format_call.m"
                                  MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_182, 1) = ((MR_Box) (check_hlds__format_call__ShortHand_177));
#line 1049 "format_call.m"
                                }
#line 1045 "format_call.m"
                              }
#line 1055 "format_call.m"
                          {
#line 1055 "format_call.m"
                            MR_Word base;
#line 1055 "format_call.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1055 "format_call.m"
                            *check_hlds__format_call__Goal_10 = base;
#line 1055 "format_call.m"
                            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__format_call__GoalExpr_182));
#line 1055 "format_call.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__format_call__GoalInfo_15));
#line 1055 "format_call.m"
                          }
#line 1026 "format_call.m"
                        }
#line 918 "format_call.m"
                      else
#line 918 "format_call.m"
                        if (((((MR_tag((MR_Word) check_hlds__format_call__GoalExpr0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 972 "format_call.m"
                          {
#line 972 "format_call.m"
                            MR_Word check_hlds__format_call__TypeCtorInfo_196_196;
#line 972 "format_call.m"
                            MR_Word check_hlds__format_call__SwitchVar_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 1)));
#line 972 "format_call.m"
                            MR_Word check_hlds__format_call__CanFail_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 2)));
#line 972 "format_call.m"
                            MR_Word check_hlds__format_call__Cases0_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr0_14, (MR_Integer) 3)));
#line 972 "format_call.m"
                            MR_Word check_hlds__format_call__Cases_62;
#line 972 "format_call.m"
                            MR_Word check_hlds__format_call__GoalExpr_161;
#line 972 "format_call.m"
                            MR_Word check_hlds__format_call__NeededVarsSets_162;
#line 972 "format_call.m"
                            MR_Word check_hlds__format_call__ToDeleteVarsSets_163;

#line 973 "format_call.m"
                            {
#line 973 "format_call.m"
                              check_hlds__format_call__opt_format_call_sites_in_switch_10_p_0(check_hlds__format_call__Cases0_61, &check_hlds__format_call__Cases_62, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_97, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_98, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__format_call__NeededVarsSets_162, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__format_call__ToDeleteVarsSets_163);
                            }
#line 9902 "check_hlds.format_call.c"
                            check_hlds__format_call__TypeCtorInfo_196_196 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 976 "format_call.m"
                            {
#line 976 "format_call.m"
                              *check_hlds__format_call__STATE_VARIABLE_NeededVars_100 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__format_call__TypeCtorInfo_196_196, check_hlds__format_call__NeededVarsSets_162);
                            }
#line 977 "format_call.m"
                            {
#line 977 "format_call.m"
                              *check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_102 = parse_tree__set_of_var__intersect_list_1_f_0(check_hlds__format_call__TypeCtorInfo_196_196, check_hlds__format_call__ToDeleteVarsSets_163);
                            }
#line 978 "format_call.m"
                            {
#line 978 "format_call.m"
                              check_hlds__format_call__GoalExpr_161 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 978 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_161, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 978 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_161, 1) = ((MR_Box) (check_hlds__format_call__SwitchVar_59));
#line 978 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_161, 2) = ((MR_Box) (check_hlds__format_call__CanFail_60));
#line 978 "format_call.m"
                              MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_161, 3) = ((MR_Box) (check_hlds__format_call__Cases_62));
#line 978 "format_call.m"
                            }
#line 979 "format_call.m"
                            {
#line 979 "format_call.m"
                              MR_Word base;
#line 979 "format_call.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 979 "format_call.m"
                              *check_hlds__format_call__Goal_10 = base;
#line 979 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__format_call__GoalExpr_161));
#line 979 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__format_call__GoalInfo_15));
#line 979 "format_call.m"
                            }
#line 972 "format_call.m"
                          }
#line 918 "format_call.m"
                        else
#line 921 "format_call.m"
                          {
#line 921 "format_call.m"
                            MR_Word check_hlds__format_call__TypeCtorInfo_191_191;
#line 921 "format_call.m"
                            MR_Word check_hlds__format_call__NonLocals_156;

#line 922 "format_call.m"
                            *check_hlds__format_call__Goal_10 = check_hlds__format_call__Goal0_9;
#line 923 "format_call.m"
                            {
#line 923 "format_call.m"
                              check_hlds__format_call__NonLocals_156 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__format_call__GoalInfo_15);
                            }
#line 9960 "check_hlds.format_call.c"
                            check_hlds__format_call__TypeCtorInfo_191_191 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 925 "format_call.m"
                            {
#line 925 "format_call.m"
                              parse_tree__set_of_var__union_3_p_0(check_hlds__format_call__TypeCtorInfo_191_191, check_hlds__format_call__STATE_VARIABLE_NeededVars_0_99, check_hlds__format_call__NonLocals_156, check_hlds__format_call__STATE_VARIABLE_NeededVars_100);
                            }
#line 926 "format_call.m"
                            {
#line 926 "format_call.m"
                              parse_tree__set_of_var__difference_3_p_0(check_hlds__format_call__TypeCtorInfo_191_191, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_0_101, check_hlds__format_call__NonLocals_156, check_hlds__format_call__STATE_VARIABLE_ToDeleteVars_102);
                            }
#line 926 "format_call.m"
                            *check_hlds__format_call__STATE_VARIABLE_GoalIdMap_98 = check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_97;
#line 921 "format_call.m"
                          }
#line 902 "format_call.m"
      }
#line 902 "format_call.m"
      break;
#line 902 "format_call.m"
    }
#line 896 "format_call.m"
}

#line 877 "format_call.m"
static void MR_CALL 
check_hlds__format_call__alloc_id_3_p_0(
#line 877 "format_call.m"
  MR_Word * check_hlds__format_call__ConjId_4,
#line 877 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_0_7,
#line 877 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_Counter_8)
#line 877 "format_call.m"
{
#line 879 "format_call.m"
  {
#line 879 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 879 "format_call.m"
    MR_Integer check_hlds__format_call__N_6;

#line 880 "format_call.m"
    {
#line 880 "format_call.m"
      mercury__counter__allocate_3_p_0(&check_hlds__format_call__N_6, check_hlds__format_call__STATE_VARIABLE_Counter_0_7, check_hlds__format_call__STATE_VARIABLE_Counter_8);
    }
#line 881 "format_call.m"
    *check_hlds__format_call__ConjId_4 = (MR_Word) check_hlds__format_call__N_6;
#line 879 "format_call.m"
  }
#line 877 "format_call.m"
}

#line 868 "format_call.m"
static MR_Word MR_CALL 
check_hlds__format_call__get_conj_map_2_f_0(
#line 868 "format_call.m"
  MR_Word check_hlds__format_call__ConjMaps_4,
#line 868 "format_call.m"
  MR_Word check_hlds__format_call__ConjId_5)
#line 868 "format_call.m"
{
#line 873 "format_call.m"
  {
#line 873 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 873 "format_call.m"
    MR_Word check_hlds__format_call__ConjMap_6;
#line 873 "format_call.m"
    MR_Word check_hlds__format_call__ConjMapPrime_7;
#line 871 "format_call.m"
    MR_Box check_hlds__format_call__conv0_ConjMapPrime_7;

#line 871 "format_call.m"
    {
#line 871 "format_call.m"
      check_hlds__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_map_0, check_hlds__format_call__ConjMaps_4, ((MR_Box) (check_hlds__format_call__ConjId_5)), &check_hlds__format_call__conv0_ConjMapPrime_7);
    }
#line 871 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 871 "format_call.m"
      {
#line 871 "format_call.m"
        check_hlds__format_call__ConjMapPrime_7 = ((MR_Word) check_hlds__format_call__conv0_ConjMapPrime_7);
#line 871 "format_call.m"
        check_hlds__format_call__succeeded = MR_TRUE;
#line 871 "format_call.m"
      }
#line 873 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 872 "format_call.m"
      check_hlds__format_call__ConjMap_6 = check_hlds__format_call__ConjMapPrime_7;
#line 873 "format_call.m"
    else
#line 874 "format_call.m"
      {
#line 874 "format_call.m"
        MR_Word check_hlds__format_call__TypeInfo_14_14 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 874 "format_call.m"
        MR_Word check_hlds__format_call__V_8_8;
#line 874 "format_call.m"
        MR_Word check_hlds__format_call__V_9_9;
#line 874 "format_call.m"
        MR_Word check_hlds__format_call__V_10_10;
#line 874 "format_call.m"
        MR_Word check_hlds__format_call__V_11_11;

#line 874 "format_call.m"
        {
#line 874 "format_call.m"
          check_hlds__format_call__V_8_8 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_14, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
        }
#line 874 "format_call.m"
        {
#line 874 "format_call.m"
          check_hlds__format_call__V_9_9 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_14, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_list_skeleton_state_0);
        }
#line 874 "format_call.m"
        {
#line 874 "format_call.m"
          check_hlds__format_call__V_10_10 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_14, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0);
        }
#line 874 "format_call.m"
        {
#line 874 "format_call.m"
          check_hlds__format_call__V_11_11 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_14, check_hlds__format_call__TypeInfo_14_14);
        }
#line 874 "format_call.m"
        {
#line 874 "format_call.m"
          check_hlds__format_call__ConjMap_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 874 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_6, 0) = ((MR_Box) (check_hlds__format_call__V_8_8));
#line 874 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_6, 1) = ((MR_Box) (check_hlds__format_call__V_9_9));
#line 874 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_6, 2) = ((MR_Box) (check_hlds__format_call__V_10_10));
#line 874 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_6, 3) = ((MR_Box) (check_hlds__format_call__V_11_11));
#line 874 "format_call.m"
        }
#line 874 "format_call.m"
      }
#line 873 "format_call.m"
    return check_hlds__format_call__ConjMap_6;
#line 873 "format_call.m"
  }
#line 868 "format_call.m"
}

#line 849 "format_call.m"
static void MR_CALL 
check_hlds__format_call__format_call_traverse_disj_arms_11_p_0(
#line 849 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_1,
#line 849 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 849 "format_call.m"
  MR_Word check_hlds__format_call__ContainingId_3,
#line 849 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__4_4,
#line 849 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_0_5,
#line 849 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_Counter_6,
#line 849 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_7,
#line 849 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ConjMaps_8,
#line 849 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_0_9,
#line 849 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_PredMap_10,
#line 849 "format_call.m"
  MR_Word * check_hlds__format_call__HeadVar__11_11)
#line 849 "format_call.m"
{
#line 855 "format_call.m"
  {
#line 855 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;

#line 855 "format_call.m"
    if ((check_hlds__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 855 "format_call.m"
      {
#line 855 "format_call.m"
        *check_hlds__format_call__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 855 "format_call.m"
        *check_hlds__format_call__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 855 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_PredMap_10 = check_hlds__format_call__STATE_VARIABLE_PredMap_0_9;
#line 855 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_ConjMaps_8 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_7;
#line 855 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_Counter_6 = check_hlds__format_call__STATE_VARIABLE_Counter_0_5;
#line 855 "format_call.m"
      }
#line 855 "format_call.m"
    else
#line 859 "format_call.m"
      {
#line 859 "format_call.m"
        MR_Word check_hlds__format_call__TypeCtorInfo_51_51;
#line 859 "format_call.m"
        MR_Word check_hlds__format_call__Goal_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 859 "format_call.m"
        MR_Word check_hlds__format_call__Goals_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 859 "format_call.m"
        MR_Word check_hlds__format_call__GoalFormatCallSites_27;
#line 859 "format_call.m"
        MR_Word check_hlds__format_call__GoalsFormatCallSites_28;
#line 859 "format_call.m"
        MR_Word check_hlds__format_call__GoalRelevantVars_32;
#line 859 "format_call.m"
        MR_Word check_hlds__format_call__GoalsRelevantVars_33;
#line 859 "format_call.m"
        MR_Word check_hlds__format_call__DisjId_34;
#line 859 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_42_42;
#line 859 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_43_43;
#line 859 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_44_44;
#line 859 "format_call.m"
        MR_Word check_hlds__format_call__V_45_45;
#line 859 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_46_46;
#line 859 "format_call.m"
        MR_Word check_hlds__format_call__GoalConj_70;
#line 859 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_33_71;
#line 859 "format_call.m"
        MR_Integer check_hlds__format_call__N_81;

#line 860 "format_call.m"
        {
#line 860 "format_call.m"
          check_hlds__format_call__V_45_45 = parse_tree__set_of_var__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0);
        }
#line 880 "format_call.m"
        {
#line 880 "format_call.m"
          mercury__counter__allocate_3_p_0(&check_hlds__format_call__N_81, check_hlds__format_call__STATE_VARIABLE_Counter_0_5, &check_hlds__format_call__STATE_VARIABLE_Counter_33_71);
        }
#line 881 "format_call.m"
        check_hlds__format_call__DisjId_34 = (MR_Word) check_hlds__format_call__N_81;
#line 610 "format_call.m"
        {
#line 610 "format_call.m"
          hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__format_call__Goal_24, &check_hlds__format_call__GoalConj_70);
        }
#line 611 "format_call.m"
        {
#line 611 "format_call.m"
          check_hlds__format_call__format_call_traverse_conj_13_p_0(check_hlds__format_call__ModuleInfo_1, check_hlds__format_call__GoalConj_70, check_hlds__format_call__DisjId_34, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__format_call__GoalFormatCallSites_27, check_hlds__format_call__STATE_VARIABLE_Counter_33_71, &check_hlds__format_call__STATE_VARIABLE_Counter_42_42, check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_7, &check_hlds__format_call__STATE_VARIABLE_ConjMaps_43_43, check_hlds__format_call__STATE_VARIABLE_PredMap_0_9, &check_hlds__format_call__STATE_VARIABLE_PredMap_44_44, check_hlds__format_call__V_45_45, &check_hlds__format_call__GoalRelevantVars_32);
        }
#line 10219 "check_hlds.format_call.c"
        check_hlds__format_call__TypeCtorInfo_51_51 = (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0;
#line 863 "format_call.m"
        {
#line 863 "format_call.m"
          mercury__map__det_insert_4_p_0(check_hlds__format_call__TypeCtorInfo_51_51, check_hlds__format_call__TypeCtorInfo_51_51, ((MR_Box) (check_hlds__format_call__DisjId_34)), ((MR_Box) (check_hlds__format_call__ContainingId_3)), check_hlds__format_call__STATE_VARIABLE_PredMap_44_44, &check_hlds__format_call__STATE_VARIABLE_PredMap_46_46);
        }
#line 864 "format_call.m"
        {
#line 864 "format_call.m"
          check_hlds__format_call__format_call_traverse_disj_arms_11_p_0(check_hlds__format_call__ModuleInfo_1, check_hlds__format_call__Goals_25, check_hlds__format_call__ContainingId_3, &check_hlds__format_call__GoalsFormatCallSites_28, check_hlds__format_call__STATE_VARIABLE_Counter_42_42, check_hlds__format_call__STATE_VARIABLE_Counter_6, check_hlds__format_call__STATE_VARIABLE_ConjMaps_43_43, check_hlds__format_call__STATE_VARIABLE_ConjMaps_8, check_hlds__format_call__STATE_VARIABLE_PredMap_46_46, check_hlds__format_call__STATE_VARIABLE_PredMap_10, &check_hlds__format_call__GoalsRelevantVars_33);
        }
#line 859 "format_call.m"
        {
#line 859 "format_call.m"
          MR_Word base;
#line 859 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "format_call.m"
          *check_hlds__format_call__HeadVar__4_4 = base;
#line 859 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__GoalFormatCallSites_27));
#line 859 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__format_call__GoalsFormatCallSites_28));
#line 859 "format_call.m"
        }
#line 859 "format_call.m"
        {
#line 859 "format_call.m"
          MR_Word base;
#line 859 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 859 "format_call.m"
          *check_hlds__format_call__HeadVar__11_11 = base;
#line 859 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__GoalRelevantVars_32));
#line 859 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__format_call__GoalsRelevantVars_33));
#line 859 "format_call.m"
        }
#line 859 "format_call.m"
      }
#line 855 "format_call.m"
  }
#line 849 "format_call.m"
}

#line 833 "format_call.m"
static void MR_CALL 
check_hlds__format_call__format_call_traverse_disj_13_p_0(
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_14,
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__Disjuncts_15,
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__CurId_16,
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0_26,
#line 833 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_FormatCallSites_27,
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_0_28,
#line 833 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_Counter_29,
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_30,
#line 833 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ConjMaps_31,
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_0_32,
#line 833 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_PredMap_33,
#line 833 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_34,
#line 833 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_RelevantVars_35)
#line 833 "format_call.m"
{
#line 840 "format_call.m"
  {
#line 840 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 840 "format_call.m"
    MR_Word check_hlds__format_call__TypeCtorInfo_41_41;
#line 840 "format_call.m"
    MR_Word check_hlds__format_call__TypeCtorInfo_42_42;
#line 840 "format_call.m"
    MR_Word check_hlds__format_call__DisjFormatCallSitesLists_22;
#line 840 "format_call.m"
    MR_Word check_hlds__format_call__DisjRelevantVarSets_23;
#line 840 "format_call.m"
    MR_Word check_hlds__format_call__DisjFormatCallSites_24;
#line 840 "format_call.m"
    MR_Word check_hlds__format_call__DisjRelevantVars_25;

#line 841 "format_call.m"
    {
#line 841 "format_call.m"
      check_hlds__format_call__format_call_traverse_disj_arms_11_p_0(check_hlds__format_call__ModuleInfo_14, check_hlds__format_call__Disjuncts_15, check_hlds__format_call__CurId_16, &check_hlds__format_call__DisjFormatCallSitesLists_22, check_hlds__format_call__STATE_VARIABLE_Counter_0_28, check_hlds__format_call__STATE_VARIABLE_Counter_29, check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_30, check_hlds__format_call__STATE_VARIABLE_ConjMaps_31, check_hlds__format_call__STATE_VARIABLE_PredMap_0_32, check_hlds__format_call__STATE_VARIABLE_PredMap_33, &check_hlds__format_call__DisjRelevantVarSets_23);
    }
#line 10319 "check_hlds.format_call.c"
    check_hlds__format_call__TypeCtorInfo_41_41 = (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_format_call_site_0;
#line 844 "format_call.m"
    {
#line 844 "format_call.m"
      mercury__list__condense_2_p_0(check_hlds__format_call__TypeCtorInfo_41_41, check_hlds__format_call__DisjFormatCallSitesLists_22, &check_hlds__format_call__DisjFormatCallSites_24);
    }
#line 845 "format_call.m"
    {
#line 845 "format_call.m"
      *check_hlds__format_call__STATE_VARIABLE_FormatCallSites_27 = mercury__list__f_43_43_2_f_0(check_hlds__format_call__TypeCtorInfo_41_41, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0_26, check_hlds__format_call__DisjFormatCallSites_24);
    }
#line 10331 "check_hlds.format_call.c"
    check_hlds__format_call__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 846 "format_call.m"
    {
#line 846 "format_call.m"
      check_hlds__format_call__DisjRelevantVars_25 = parse_tree__set_of_var__union_list_1_f_0(check_hlds__format_call__TypeCtorInfo_42_42, check_hlds__format_call__DisjRelevantVarSets_23);
    }
#line 847 "format_call.m"
    {
#line 847 "format_call.m"
      parse_tree__set_of_var__union_3_p_0(check_hlds__format_call__TypeCtorInfo_42_42, check_hlds__format_call__DisjRelevantVars_25, check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_34, check_hlds__format_call__STATE_VARIABLE_RelevantVars_35);
#line 847 "format_call.m"
      return;
    }
#line 840 "format_call.m"
  }
#line 833 "format_call.m"
}

#line 829 "format_call.m"
static MR_Word MR_CALL 
check_hlds__format_call__project_case_goal_1_f_0(
#line 829 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1)
#line 829 "format_call.m"
{
#line 831 "format_call.m"
  {
#line 831 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 831 "format_call.m"
    MR_Word check_hlds__format_call__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 2)));
#line 831 "format_call.m"
    MR_Word check_hlds__format_call__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 831 "format_call.m"
    MR_Word check_hlds__format_call__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));

#line 831 "format_call.m"
    return check_hlds__format_call__Goal_5;
#line 831 "format_call.m"
  }
#line 829 "format_call.m"
}

#line 738 "format_call.m"
static void MR_CALL 
check_hlds__format_call__format_call_traverse_unify_8_p_0(
#line 738 "format_call.m"
  MR_Word check_hlds__format_call__Unification_9,
#line 738 "format_call.m"
  MR_Word check_hlds__format_call__CurId_10,
#line 738 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_55,
#line 738 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ConjMaps_56,
#line 738 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_0_57,
#line 738 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_PredMap_58,
#line 738 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_59,
#line 738 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_RelevantVars_60)
#line 738 "format_call.m"
{
#line 743 "format_call.m"
  {
#line 743 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;

#line 757 "format_call.m"
    if (((MR_tag((MR_Word) check_hlds__format_call__Unification_9)) == (MR_mktag((MR_Integer) 2))))
#line 745 "format_call.m"
      {
#line 745 "format_call.m"
        MR_Word check_hlds__format_call__TargetVar_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__Unification_9, (MR_Integer) 0)));
#line 745 "format_call.m"
        MR_Word check_hlds__format_call__SourceVar_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__Unification_9, (MR_Integer) 1)));

#line 746 "format_call.m"
        {
#line 746 "format_call.m"
          check_hlds__format_call__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_59, check_hlds__format_call__TargetVar_14);
        }
#line 754 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 747 "format_call.m"
          {
#line 747 "format_call.m"
            MR_Word check_hlds__format_call__TypeCtorInfo_115_115 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 747 "format_call.m"
            MR_Word check_hlds__format_call__TypeInfo_116_116;
#line 747 "format_call.m"
            MR_Word check_hlds__format_call__ConjMap0_16;
#line 747 "format_call.m"
            MR_Word check_hlds__format_call__StringMap_17;
#line 747 "format_call.m"
            MR_Word check_hlds__format_call__ListMap_18;
#line 747 "format_call.m"
            MR_Word check_hlds__format_call__ElementMap_19;
#line 747 "format_call.m"
            MR_Word check_hlds__format_call__EqvMap0_20;
#line 747 "format_call.m"
            MR_Word check_hlds__format_call__EqvMap_21;
#line 747 "format_call.m"
            MR_Word check_hlds__format_call__ConjMap_22;
#line 747 "format_call.m"
            MR_Word check_hlds__format_call__STATE_VARIABLE_RelevantVars_76_76;

#line 747 "format_call.m"
            {
#line 747 "format_call.m"
              parse_tree__set_of_var__delete_3_p_0(check_hlds__format_call__TypeCtorInfo_115_115, check_hlds__format_call__TargetVar_14, check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_59, &check_hlds__format_call__STATE_VARIABLE_RelevantVars_76_76);
            }
#line 748 "format_call.m"
            {
#line 748 "format_call.m"
              parse_tree__set_of_var__insert_3_p_0(check_hlds__format_call__TypeCtorInfo_115_115, check_hlds__format_call__SourceVar_15, check_hlds__format_call__STATE_VARIABLE_RelevantVars_76_76, check_hlds__format_call__STATE_VARIABLE_RelevantVars_60);
            }
#line 749 "format_call.m"
            {
#line 749 "format_call.m"
              check_hlds__format_call__ConjMap0_16 = check_hlds__format_call__get_conj_map_2_f_0(check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_55, check_hlds__format_call__CurId_10);
            }
#line 750 "format_call.m"
            check_hlds__format_call__StringMap_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap0_16, (MR_Integer) 0)));
#line 750 "format_call.m"
            check_hlds__format_call__ListMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap0_16, (MR_Integer) 1)));
#line 750 "format_call.m"
            check_hlds__format_call__ElementMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap0_16, (MR_Integer) 2)));
#line 750 "format_call.m"
            check_hlds__format_call__EqvMap0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap0_16, (MR_Integer) 3)));
#line 10463 "check_hlds.format_call.c"
            check_hlds__format_call__TypeInfo_116_116 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 751 "format_call.m"
            {
#line 751 "format_call.m"
              mercury__map__det_insert_4_p_0(check_hlds__format_call__TypeInfo_116_116, check_hlds__format_call__TypeInfo_116_116, ((MR_Box) (check_hlds__format_call__TargetVar_14)), ((MR_Box) (check_hlds__format_call__SourceVar_15)), check_hlds__format_call__EqvMap0_20, &check_hlds__format_call__EqvMap_21);
            }
#line 752 "format_call.m"
            {
#line 752 "format_call.m"
              check_hlds__format_call__ConjMap_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 752 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_22, 0) = ((MR_Box) (check_hlds__format_call__StringMap_17));
#line 752 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_22, 1) = ((MR_Box) (check_hlds__format_call__ListMap_18));
#line 752 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_22, 2) = ((MR_Box) (check_hlds__format_call__ElementMap_19));
#line 752 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_22, 3) = ((MR_Box) (check_hlds__format_call__EqvMap_21));
#line 752 "format_call.m"
            }
#line 753 "format_call.m"
            {
#line 753 "format_call.m"
              mercury__map__set_4_p_0((MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__format_call__CurId_10)), ((MR_Box) (check_hlds__format_call__ConjMap_22)), check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_55, check_hlds__format_call__STATE_VARIABLE_ConjMaps_56);
            }
#line 747 "format_call.m"
          }
#line 754 "format_call.m"
        else
#line 755 "format_call.m"
          {
#line 755 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_RelevantVars_60 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_59;
#line 755 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_ConjMaps_56 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_55;
#line 755 "format_call.m"
          }
#line 745 "format_call.m"
      }
#line 757 "format_call.m"
    else
#line 757 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__format_call__Unification_9)) == (MR_mktag((MR_Integer) 0))))
#line 758 "format_call.m"
        {
#line 758 "format_call.m"
          MR_Word check_hlds__format_call__CellVar_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Unification_9, (MR_Integer) 0)));
#line 758 "format_call.m"
          MR_Word check_hlds__format_call__ConsId_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Unification_9, (MR_Integer) 1)));
#line 758 "format_call.m"
          MR_Word check_hlds__format_call__ArgVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Unification_9, (MR_Integer) 2)));
#line 758 "format_call.m"
          MR_Word check_hlds__format_call__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Unification_9, (MR_Integer) 3)));
#line 758 "format_call.m"
          MR_Word check_hlds__format_call__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Unification_9, (MR_Integer) 4)));
#line 758 "format_call.m"
          MR_Word check_hlds__format_call__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Unification_9, (MR_Integer) 5)));
#line 758 "format_call.m"
          MR_Word check_hlds__format_call__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Unification_9, (MR_Integer) 6)));

#line 759 "format_call.m"
          {
#line 759 "format_call.m"
            check_hlds__format_call__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_59, check_hlds__format_call__CellVar_23);
          }
#line 819 "format_call.m"
          if (check_hlds__format_call__succeeded)
#line 760 "format_call.m"
            {
#line 760 "format_call.m"
              MR_Word check_hlds__format_call__StringMap0_30;
#line 760 "format_call.m"
              MR_Word check_hlds__format_call__ListMap0_31;
#line 760 "format_call.m"
              MR_Word check_hlds__format_call__ElementMap0_32;
#line 760 "format_call.m"
              MR_Word check_hlds__format_call__ConjMap0_96;
#line 760 "format_call.m"
              MR_Word check_hlds__format_call__EqvMap0_100;
#line 760 "format_call.m"
              MR_Word check_hlds__format_call__ConjMap_101;
#line 768 "format_call.m"
              MR_String check_hlds__format_call__StringConst_33;

#line 760 "format_call.m"
              {
#line 760 "format_call.m"
                check_hlds__format_call__ConjMap0_96 = check_hlds__format_call__get_conj_map_2_f_0(check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_55, check_hlds__format_call__CurId_10);
              }
#line 761 "format_call.m"
              check_hlds__format_call__StringMap0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap0_96, (MR_Integer) 0)));
#line 761 "format_call.m"
              check_hlds__format_call__ListMap0_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap0_96, (MR_Integer) 1)));
#line 761 "format_call.m"
              check_hlds__format_call__ElementMap0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap0_96, (MR_Integer) 2)));
#line 761 "format_call.m"
              check_hlds__format_call__EqvMap0_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap0_96, (MR_Integer) 3)));
#line 763 "format_call.m"
              check_hlds__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__format_call__ConsId_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__ConsId_24, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 763 "format_call.m"
              if (check_hlds__format_call__succeeded)
#line 763 "format_call.m"
                {
#line 763 "format_call.m"
                  check_hlds__format_call__StringConst_33 = ((MR_String) (MR_hl_field(MR_mktag(3), check_hlds__format_call__ConsId_24, (MR_Integer) 1)));
#line 765 "format_call.m"
                  {
#line 765 "format_call.m"
                    MR_Word check_hlds__format_call__StringMap_79;

#line 765 "format_call.m"
                    {
#line 765 "format_call.m"
                      parse_tree__set_of_var__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__format_call__CellVar_23, check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_59, check_hlds__format_call__STATE_VARIABLE_RelevantVars_60);
                    }
#line 766 "format_call.m"
                    {
#line 766 "format_call.m"
                      mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (check_hlds__format_call__CellVar_23)), ((MR_Box) (check_hlds__format_call__StringConst_33)), check_hlds__format_call__StringMap0_30, &check_hlds__format_call__StringMap_79);
                    }
#line 767 "format_call.m"
                    {
#line 767 "format_call.m"
                      check_hlds__format_call__ConjMap_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 767 "format_call.m"
                      MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_101, 0) = ((MR_Box) (check_hlds__format_call__StringMap_79));
#line 767 "format_call.m"
                      MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_101, 1) = ((MR_Box) (check_hlds__format_call__ListMap0_31));
#line 767 "format_call.m"
                      MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_101, 2) = ((MR_Box) (check_hlds__format_call__ElementMap0_32));
#line 767 "format_call.m"
                      MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_101, 3) = ((MR_Box) (check_hlds__format_call__EqvMap0_100));
#line 767 "format_call.m"
                    }
#line 765 "format_call.m"
                  }
#line 763 "format_call.m"
                }
#line 763 "format_call.m"
              else
#line 788 "format_call.m"
                {
#line 788 "format_call.m"
                  MR_Word check_hlds__format_call__List_40;
#line 769 "format_call.m"
                  MR_Word check_hlds__format_call__SymName_34;
#line 769 "format_call.m"
                  MR_Integer check_hlds__format_call__Arity_35;
#line 769 "format_call.m"
                  MR_Word check_hlds__format_call__TypeCtor_36;
#line 769 "format_call.m"
                  MR_String check_hlds__format_call__Functor_37;
#line 769 "format_call.m"
                  MR_Word check_hlds__format_call__V_131_131;

#line 769 "format_call.m"
                  check_hlds__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__format_call__ConsId_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__ConsId_24, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 769 "format_call.m"
                  if (check_hlds__format_call__succeeded)
#line 769 "format_call.m"
                    {
#line 769 "format_call.m"
                      check_hlds__format_call__SymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__ConsId_24, (MR_Integer) 1)));
#line 769 "format_call.m"
                      check_hlds__format_call__Arity_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__format_call__ConsId_24, (MR_Integer) 2)));
#line 769 "format_call.m"
                      check_hlds__format_call__TypeCtor_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__ConsId_24, (MR_Integer) 3)));
#line 770 "format_call.m"
                      {
#line 770 "format_call.m"
                        check_hlds__format_call__V_131_131 = parse_tree__builtin_lib_types__list_type_ctor_0_f_0();
                      }
#line 770 "format_call.m"
                      {
#line 770 "format_call.m"
                        check_hlds__format_call__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__format_call__TypeCtor_36, check_hlds__format_call__V_131_131);
                      }
#line 769 "format_call.m"
                      if (check_hlds__format_call__succeeded)
#line 769 "format_call.m"
                        {
#line 771 "format_call.m"
                          {
#line 771 "format_call.m"
                            check_hlds__format_call__Functor_37 = mdbcomp__prim_data__unqualify_name_1_f_0(check_hlds__format_call__SymName_34);
                          }
#line 777 "format_call.m"
                          if ((check_hlds__format_call__ArgVars_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "format_call.m"
                            {
#line 778 "format_call.m"
                              check_hlds__format_call__succeeded = (strcmp(check_hlds__format_call__Functor_37, (MR_String) "[]") == 0);
#line 778 "format_call.m"
                              if (check_hlds__format_call__succeeded)
#line 778 "format_call.m"
                                {
#line 779 "format_call.m"
                                  check_hlds__format_call__succeeded = (check_hlds__format_call__Arity_35 == (MR_Integer) 0);
#line 778 "format_call.m"
                                  if (check_hlds__format_call__succeeded)
#line 778 "format_call.m"
                                    {
#line 781 "format_call.m"
                                      check_hlds__format_call__List_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 781 "format_call.m"
                                      check_hlds__format_call__succeeded = MR_TRUE;
#line 778 "format_call.m"
                                    }
#line 778 "format_call.m"
                                }
#line 778 "format_call.m"
                            }
#line 777 "format_call.m"
                          else
#line 773 "format_call.m"
                            {
#line 773 "format_call.m"
                              MR_Word check_hlds__format_call__ArgVar1_38;
#line 773 "format_call.m"
                              MR_Word check_hlds__format_call__ArgVar2_39;
#line 773 "format_call.m"
                              MR_Word check_hlds__format_call__V_62_62;
#line 773 "format_call.m"
                              MR_Word check_hlds__format_call__V_63_63;

#line 773 "format_call.m"
                              check_hlds__format_call__succeeded = (strcmp(check_hlds__format_call__Functor_37, (MR_String) "[|]") == 0);
#line 773 "format_call.m"
                              if (check_hlds__format_call__succeeded)
#line 773 "format_call.m"
                                {
#line 774 "format_call.m"
                                  check_hlds__format_call__succeeded = (check_hlds__format_call__Arity_35 == (MR_Integer) 2);
#line 773 "format_call.m"
                                  if (check_hlds__format_call__succeeded)
#line 773 "format_call.m"
                                    {
#line 775 "format_call.m"
                                      check_hlds__format_call__ArgVar1_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ArgVars_25, (MR_Integer) 0)));
#line 775 "format_call.m"
                                      check_hlds__format_call__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ArgVars_25, (MR_Integer) 1)));
#line 775 "format_call.m"
                                      check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_62_62)) == (MR_mktag((MR_Integer) 1)));
#line 775 "format_call.m"
                                      if (check_hlds__format_call__succeeded)
#line 775 "format_call.m"
                                        {
#line 775 "format_call.m"
                                          check_hlds__format_call__ArgVar2_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_62_62, (MR_Integer) 0)));
#line 775 "format_call.m"
                                          check_hlds__format_call__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_62_62, (MR_Integer) 1)));
#line 775 "format_call.m"
                                          check_hlds__format_call__succeeded = (check_hlds__format_call__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "format_call.m"
                                          if (check_hlds__format_call__succeeded)
#line 773 "format_call.m"
                                            {
#line 776 "format_call.m"
                                              {
#line 776 "format_call.m"
                                                check_hlds__format_call__List_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "format_call.m"
                                                MR_hl_field(MR_mktag(1), check_hlds__format_call__List_40, 0) = ((MR_Box) (check_hlds__format_call__ArgVar1_38));
#line 776 "format_call.m"
                                                MR_hl_field(MR_mktag(1), check_hlds__format_call__List_40, 1) = ((MR_Box) (check_hlds__format_call__ArgVar2_39));
#line 776 "format_call.m"
                                              }
#line 776 "format_call.m"
                                              check_hlds__format_call__succeeded = MR_TRUE;
#line 773 "format_call.m"
                                            }
#line 775 "format_call.m"
                                        }
#line 773 "format_call.m"
                                    }
#line 773 "format_call.m"
                                }
#line 773 "format_call.m"
                            }
#line 769 "format_call.m"
                        }
#line 769 "format_call.m"
                    }
#line 788 "format_call.m"
                  if (check_hlds__format_call__succeeded)
#line 784 "format_call.m"
                    {
#line 784 "format_call.m"
                      MR_Word check_hlds__format_call__TypeCtorInfo_123_123 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 784 "format_call.m"
                      MR_Word check_hlds__format_call__STATE_VARIABLE_RelevantVars_64_64;
#line 784 "format_call.m"
                      MR_Word check_hlds__format_call__ListMap_80;

#line 784 "format_call.m"
                      {
#line 784 "format_call.m"
                        parse_tree__set_of_var__delete_3_p_0(check_hlds__format_call__TypeCtorInfo_123_123, check_hlds__format_call__CellVar_23, check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_59, &check_hlds__format_call__STATE_VARIABLE_RelevantVars_64_64);
                      }
#line 785 "format_call.m"
                      {
#line 785 "format_call.m"
                        parse_tree__set_of_var__insert_list_3_p_0(check_hlds__format_call__TypeCtorInfo_123_123, check_hlds__format_call__ArgVars_25, check_hlds__format_call__STATE_VARIABLE_RelevantVars_64_64, check_hlds__format_call__STATE_VARIABLE_RelevantVars_60);
                      }
#line 786 "format_call.m"
                      {
#line 786 "format_call.m"
                        mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_list_skeleton_state_0, ((MR_Box) (check_hlds__format_call__CellVar_23)), ((MR_Box) (check_hlds__format_call__List_40)), check_hlds__format_call__ListMap0_31, &check_hlds__format_call__ListMap_80);
                      }
#line 787 "format_call.m"
                      {
#line 787 "format_call.m"
                        check_hlds__format_call__ConjMap_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 787 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_101, 0) = ((MR_Box) (check_hlds__format_call__StringMap0_30));
#line 787 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_101, 1) = ((MR_Box) (check_hlds__format_call__ListMap_80));
#line 787 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_101, 2) = ((MR_Box) (check_hlds__format_call__ElementMap0_32));
#line 787 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_101, 3) = ((MR_Box) (check_hlds__format_call__EqvMap0_100));
#line 787 "format_call.m"
                      }
#line 784 "format_call.m"
                    }
#line 788 "format_call.m"
                  else
#line 815 "format_call.m"
                    {
#line 815 "format_call.m"
                      MR_Word check_hlds__format_call__Dummy_41;
#line 789 "format_call.m"
                      MR_Word check_hlds__format_call__SymName_81;
#line 789 "format_call.m"
                      MR_Integer check_hlds__format_call__Arity_82;
#line 789 "format_call.m"
                      MR_Word check_hlds__format_call__TypeCtor_83;
#line 789 "format_call.m"
                      MR_String check_hlds__format_call__Functor_84;
#line 789 "format_call.m"
                      MR_Word check_hlds__format_call__V_132_132;

#line 789 "format_call.m"
                      check_hlds__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__format_call__ConsId_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__ConsId_24, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 789 "format_call.m"
                      if (check_hlds__format_call__succeeded)
#line 789 "format_call.m"
                        {
#line 789 "format_call.m"
                          check_hlds__format_call__SymName_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__ConsId_24, (MR_Integer) 1)));
#line 789 "format_call.m"
                          check_hlds__format_call__Arity_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__format_call__ConsId_24, (MR_Integer) 2)));
#line 789 "format_call.m"
                          check_hlds__format_call__TypeCtor_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__ConsId_24, (MR_Integer) 3)));
#line 790 "format_call.m"
                          {
#line 790 "format_call.m"
                            check_hlds__format_call__V_132_132 = parse_tree__builtin_lib_types__poly_type_type_ctor_0_f_0();
                          }
#line 790 "format_call.m"
                          {
#line 790 "format_call.m"
                            check_hlds__format_call__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0(check_hlds__format_call__TypeCtor_83, check_hlds__format_call__V_132_132);
                          }
#line 789 "format_call.m"
                          if (check_hlds__format_call__succeeded)
#line 789 "format_call.m"
                            {
#line 791 "format_call.m"
                              check_hlds__format_call__succeeded = (check_hlds__format_call__Arity_82 == (MR_Integer) 1);
#line 789 "format_call.m"
                              if (check_hlds__format_call__succeeded)
#line 789 "format_call.m"
                                {
#line 792 "format_call.m"
                                  {
#line 792 "format_call.m"
                                    check_hlds__format_call__Functor_84 = mdbcomp__prim_data__unqualify_name_1_f_0(check_hlds__format_call__SymName_81);
                                  }
#line 796 "format_call.m"
                                  if ((strcmp(check_hlds__format_call__Functor_84, (MR_String) "c") == 0))
#line 803 "format_call.m"
                                    {
#line 804 "format_call.m"
                                      check_hlds__format_call__Dummy_41 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__format_call_scalar_common_4[2]);
#line 803 "format_call.m"
                                      check_hlds__format_call__succeeded = MR_TRUE;
#line 803 "format_call.m"
                                    }
#line 796 "format_call.m"
                                  else
#line 796 "format_call.m"
                                    if ((strcmp(check_hlds__format_call__Functor_84, (MR_String) "f") == 0))
#line 794 "format_call.m"
                                      {
#line 795 "format_call.m"
                                        check_hlds__format_call__Dummy_41 = (MR_Word) &check_hlds__format_call_scalar_common_4[3];
#line 794 "format_call.m"
                                        check_hlds__format_call__succeeded = MR_TRUE;
#line 794 "format_call.m"
                                      }
#line 796 "format_call.m"
                                    else
#line 796 "format_call.m"
                                      if ((strcmp(check_hlds__format_call__Functor_84, (MR_String) "i") == 0))
#line 797 "format_call.m"
                                        {
#line 798 "format_call.m"
                                          check_hlds__format_call__Dummy_41 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__format_call_scalar_common_4[4]);
#line 797 "format_call.m"
                                          check_hlds__format_call__succeeded = MR_TRUE;
#line 797 "format_call.m"
                                        }
#line 796 "format_call.m"
                                      else
#line 796 "format_call.m"
                                        if ((strcmp(check_hlds__format_call__Functor_84, (MR_String) "s") == 0))
#line 800 "format_call.m"
                                          {
#line 801 "format_call.m"
                                            check_hlds__format_call__Dummy_41 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__format_call_scalar_common_4[5]);
#line 800 "format_call.m"
                                            check_hlds__format_call__succeeded = MR_TRUE;
#line 800 "format_call.m"
                                          }
#line 796 "format_call.m"
                                        else
#line 796 "format_call.m"
                                          check_hlds__format_call__succeeded = MR_FALSE;
#line 789 "format_call.m"
                                }
#line 789 "format_call.m"
                            }
#line 789 "format_call.m"
                        }
#line 815 "format_call.m"
                      if (check_hlds__format_call__succeeded)
#line 807 "format_call.m"
                        {
#line 807 "format_call.m"
                          MR_Word check_hlds__format_call__WhatToPrint_43;
#line 807 "format_call.m"
                          MR_Word check_hlds__format_call__ElementMap_85;
#line 810 "format_call.m"
                          MR_Word check_hlds__format_call__ArgVar_42;
#line 808 "format_call.m"
                          MR_Word check_hlds__format_call__V_71_71;

#line 807 "format_call.m"
                          {
#line 807 "format_call.m"
                            parse_tree__set_of_var__delete_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__format_call__CellVar_23, check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_59, check_hlds__format_call__STATE_VARIABLE_RelevantVars_60);
                          }
#line 808 "format_call.m"
                          check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__ArgVars_25)) == (MR_mktag((MR_Integer) 1)));
#line 808 "format_call.m"
                          if (check_hlds__format_call__succeeded)
#line 808 "format_call.m"
                            {
#line 808 "format_call.m"
                              check_hlds__format_call__ArgVar_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ArgVars_25, (MR_Integer) 0)));
#line 808 "format_call.m"
                              check_hlds__format_call__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ArgVars_25, (MR_Integer) 1)));
#line 808 "format_call.m"
                              check_hlds__format_call__succeeded = (check_hlds__format_call__V_71_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 808 "format_call.m"
                            }
#line 810 "format_call.m"
                          if (check_hlds__format_call__succeeded)
#line 809 "format_call.m"
                            {
#line 809 "format_call.m"
                              check_hlds__format_call__WhatToPrint_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 809 "format_call.m"
                              MR_hl_field(MR_mktag(0), check_hlds__format_call__WhatToPrint_43, 0) = ((MR_Box) (check_hlds__format_call__ArgVar_42));
#line 809 "format_call.m"
                              MR_hl_field(MR_mktag(0), check_hlds__format_call__WhatToPrint_43, 1) = ((MR_Box) (check_hlds__format_call__Dummy_41));
#line 809 "format_call.m"
                            }
#line 810 "format_call.m"
                          else
#line 811 "format_call.m"
                            {
#line 811 "format_call.m"
                              {
#line 811 "format_call.m"
                                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.format_call", (MR_String) "predicate \140check_hlds.format_call.format_call_traverse_unify\'/8", (MR_String) "arity mismatch");
#line 811 "format_call.m"
                                return;
                              }
#line 811 "format_call.m"
                            }
#line 813 "format_call.m"
                          {
#line 813 "format_call.m"
                            mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0, ((MR_Box) (check_hlds__format_call__CellVar_23)), ((MR_Box) (check_hlds__format_call__WhatToPrint_43)), check_hlds__format_call__ElementMap0_32, &check_hlds__format_call__ElementMap_85);
                          }
#line 814 "format_call.m"
                          {
#line 814 "format_call.m"
                            check_hlds__format_call__ConjMap_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 814 "format_call.m"
                            MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_101, 0) = ((MR_Box) (check_hlds__format_call__StringMap0_30));
#line 814 "format_call.m"
                            MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_101, 1) = ((MR_Box) (check_hlds__format_call__ListMap0_31));
#line 814 "format_call.m"
                            MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_101, 2) = ((MR_Box) (check_hlds__format_call__ElementMap_85));
#line 814 "format_call.m"
                            MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_101, 3) = ((MR_Box) (check_hlds__format_call__EqvMap0_100));
#line 814 "format_call.m"
                          }
#line 807 "format_call.m"
                        }
#line 815 "format_call.m"
                      else
#line 816 "format_call.m"
                        {
#line 816 "format_call.m"
                          check_hlds__format_call__ConjMap_101 = check_hlds__format_call__ConjMap0_96;
#line 816 "format_call.m"
                          *check_hlds__format_call__STATE_VARIABLE_RelevantVars_60 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_59;
#line 816 "format_call.m"
                        }
#line 815 "format_call.m"
                    }
#line 788 "format_call.m"
                }
#line 818 "format_call.m"
              {
#line 818 "format_call.m"
                mercury__map__set_4_p_0((MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_map_0, ((MR_Box) (check_hlds__format_call__CurId_10)), ((MR_Box) (check_hlds__format_call__ConjMap_101)), check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_55, check_hlds__format_call__STATE_VARIABLE_ConjMaps_56);
              }
#line 760 "format_call.m"
            }
#line 819 "format_call.m"
          else
#line 820 "format_call.m"
            {
#line 820 "format_call.m"
              *check_hlds__format_call__STATE_VARIABLE_RelevantVars_60 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_59;
#line 820 "format_call.m"
              *check_hlds__format_call__STATE_VARIABLE_ConjMaps_56 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_55;
#line 820 "format_call.m"
            }
#line 758 "format_call.m"
        }
#line 757 "format_call.m"
      else
#line 757 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__format_call__Unification_9)) == (MR_mktag((MR_Integer) 1))))
#line 823 "format_call.m"
          {
#line 823 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_ConjMaps_56 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_55;
#line 823 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_RelevantVars_60 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_59;
#line 823 "format_call.m"
          }
#line 757 "format_call.m"
        else
#line 757 "format_call.m"
          if (((((MR_tag((MR_Word) check_hlds__format_call__Unification_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__Unification_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 825 "format_call.m"
            {
#line 825 "format_call.m"
              *check_hlds__format_call__STATE_VARIABLE_ConjMaps_56 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_55;
#line 825 "format_call.m"
              *check_hlds__format_call__STATE_VARIABLE_RelevantVars_60 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_59;
#line 825 "format_call.m"
            }
#line 757 "format_call.m"
          else
#line 824 "format_call.m"
            {
#line 824 "format_call.m"
              *check_hlds__format_call__STATE_VARIABLE_ConjMaps_56 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_55;
#line 824 "format_call.m"
              *check_hlds__format_call__STATE_VARIABLE_RelevantVars_60 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_59;
#line 824 "format_call.m"
            }
#line 825 "format_call.m"
    *check_hlds__format_call__STATE_VARIABLE_PredMap_58 = check_hlds__format_call__STATE_VARIABLE_PredMap_0_57;
#line 743 "format_call.m"
  }
#line 738 "format_call.m"
}

#line 637 "format_call.m"
static MR_Box MR_CALL 
check_hlds__format_call__format_call_traverse_conj_13_p_0_1(
#line 637 "format_call.m"
  MR_Box check_hlds__format_call__closure_arg,
#line 637 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_1)
#line 637 "format_call.m"
{
#line 637 "format_call.m"
  {
#line 637 "format_call.m"
    MR_Box check_hlds__format_call__wrapper_arg_2;
#line 637 "format_call.m"
    MR_Box check_hlds__format_call__closure = check_hlds__format_call__closure_arg;
#line 637 "format_call.m"
    MR_Word check_hlds__format_call__conv0_Goal_5;

#line 637 "format_call.m"
    {
#line 637 "format_call.m"
      check_hlds__format_call__conv0_Goal_5 = check_hlds__format_call__project_case_goal_1_f_0(((MR_Word) check_hlds__format_call__wrapper_arg_1));
    }
#line 637 "format_call.m"
    check_hlds__format_call__wrapper_arg_2 = ((MR_Box) (check_hlds__format_call__conv0_Goal_5));
#line 637 "format_call.m"
    return check_hlds__format_call__wrapper_arg_2;
#line 637 "format_call.m"
  }
#line 637 "format_call.m"
}

#line 614 "format_call.m"
static void MR_CALL 
check_hlds__format_call__format_call_traverse_conj_13_p_0(
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1,
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__2_2,
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__3_3,
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0_4,
#line 614 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5,
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_0_6,
#line 614 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_Counter_7,
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_8,
#line 614 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ConjMaps_9,
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_0_10,
#line 614 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_PredMap_11,
#line 614 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_12,
#line 614 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_RelevantVars_13)
#line 614 "format_call.m"
{
#line 620 "format_call.m"
  while (MR_TRUE)
#line 620 "format_call.m"
    {
#line 620 "format_call.m"
      /* tailcall optimized into a loop */
#line 620 "format_call.m"
      {
#line 620 "format_call.m"
        MR_bool check_hlds__format_call__succeeded;

#line 620 "format_call.m"
        if ((check_hlds__format_call__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 620 "format_call.m"
          {
#line 620 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_12;
#line 620 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__format_call__STATE_VARIABLE_PredMap_0_10;
#line 620 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_8;
#line 620 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_Counter_7 = check_hlds__format_call__STATE_VARIABLE_Counter_0_6;
#line 620 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0_4;
#line 620 "format_call.m"
          }
#line 620 "format_call.m"
        else
#line 623 "format_call.m"
          {
#line 623 "format_call.m"
            MR_Word check_hlds__format_call__Goal_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 0)));
#line 623 "format_call.m"
            MR_Word check_hlds__format_call__Goals_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__HeadVar__2_2, (MR_Integer) 1)));
#line 623 "format_call.m"
            MR_Word check_hlds__format_call__GoalExpr_40;
#line 623 "format_call.m"
            MR_Word check_hlds__format_call__GoalInfo_41;
#line 623 "format_call.m"
            MR_Word check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 623 "format_call.m"
            MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_130_130;
#line 623 "format_call.m"
            MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 623 "format_call.m"
            MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_132_132;
#line 623 "format_call.m"
            MR_Word check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133;

#line 624 "format_call.m"
            {
#line 624 "format_call.m"
              check_hlds__format_call__format_call_traverse_conj_13_p_0(check_hlds__format_call__HeadVar__1_1, check_hlds__format_call__Goals_33, check_hlds__format_call__HeadVar__3_3, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0_4, &check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__format_call__STATE_VARIABLE_Counter_0_6, &check_hlds__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_8, &check_hlds__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__format_call__STATE_VARIABLE_PredMap_0_10, &check_hlds__format_call__STATE_VARIABLE_PredMap_132_132, check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_12, &check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133);
            }
#line 626 "format_call.m"
            check_hlds__format_call__GoalExpr_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Goal_32, (MR_Integer) 0)));
#line 626 "format_call.m"
            check_hlds__format_call__GoalInfo_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Goal_32, (MR_Integer) 1)));
#line 631 "format_call.m"
            if (((MR_tag((MR_Word) check_hlds__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 0))))
#line 654 "format_call.m"
              {
#line 654 "format_call.m"
                MR_Word check_hlds__format_call__TypeCtorInfo_221_221;
#line 654 "format_call.m"
                MR_Word check_hlds__format_call__SubGoal_56 = (MR_Word) MR_body(((MR_Word) check_hlds__format_call__GoalExpr_40), (MR_Integer) 0);
#line 654 "format_call.m"
                MR_Word check_hlds__format_call__SubGoalId_57;
#line 654 "format_call.m"
                MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_174_174;

#line 655 "format_call.m"
                {
#line 655 "format_call.m"
                  check_hlds__format_call__format_call_traverse_goal_13_p_0(check_hlds__format_call__HeadVar__1_1, check_hlds__format_call__SubGoal_56, &check_hlds__format_call__SubGoalId_57, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__format_call__STATE_VARIABLE_Counter_7, check_hlds__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__format_call__STATE_VARIABLE_PredMap_132_132, &check_hlds__format_call__STATE_VARIABLE_PredMap_174_174, check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__format_call__STATE_VARIABLE_RelevantVars_13);
                }
#line 11191 "check_hlds.format_call.c"
                check_hlds__format_call__TypeCtorInfo_221_221 = (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0;
#line 657 "format_call.m"
                {
#line 657 "format_call.m"
                  mercury__map__det_insert_4_p_0(check_hlds__format_call__TypeCtorInfo_221_221, check_hlds__format_call__TypeCtorInfo_221_221, ((MR_Box) (check_hlds__format_call__SubGoalId_57)), ((MR_Box) (check_hlds__format_call__HeadVar__3_3)), check_hlds__format_call__STATE_VARIABLE_PredMap_174_174, check_hlds__format_call__STATE_VARIABLE_PredMap_11);
#line 657 "format_call.m"
                  return;
                }
#line 654 "format_call.m"
              }
#line 631 "format_call.m"
            else
#line 631 "format_call.m"
              if (((MR_tag((MR_Word) check_hlds__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 2))))
#line 683 "format_call.m"
                {
#line 683 "format_call.m"
                  MR_Word check_hlds__format_call__PredId_72 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__GoalExpr_40, (MR_Integer) 0)));
#line 683 "format_call.m"
                  MR_Word check_hlds__format_call__Args_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__GoalExpr_40, (MR_Integer) 2)));
#line 683 "format_call.m"
                  MR_Word check_hlds__format_call__PredInfo_78;
#line 683 "format_call.m"
                  MR_Word check_hlds__format_call__ModuleName_79;
#line 683 "format_call.m"
                  MR_String check_hlds__format_call__Name_80;
#line 683 "format_call.m"
                  MR_Integer check_hlds__format_call___ProcId_73 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__format_call__GoalExpr_40, (MR_Integer) 1)));
#line 683 "format_call.m"
                  MR_Word check_hlds__format_call__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__GoalExpr_40, (MR_Integer) 3)));
#line 683 "format_call.m"
                  MR_Word check_hlds__format_call__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__GoalExpr_40, (MR_Integer) 4)));
#line 683 "format_call.m"
                  MR_Word check_hlds__format_call__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__GoalExpr_40, (MR_Integer) 5)));
#line 698 "format_call.m"
                  MR_Word check_hlds__format_call__Kind_81;
#line 698 "format_call.m"
                  MR_Word check_hlds__format_call__StringVar_82;
#line 698 "format_call.m"
                  MR_Word check_hlds__format_call__ValuesVar_83;

#line 684 "format_call.m"
                  {
#line 684 "format_call.m"
                    hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__format_call__HeadVar__1_1, check_hlds__format_call__PredId_72, &check_hlds__format_call__PredInfo_78);
                  }
#line 685 "format_call.m"
                  {
#line 685 "format_call.m"
                    check_hlds__format_call__ModuleName_79 = hlds__hlds_pred__pred_info_module_1_f_0(check_hlds__format_call__PredInfo_78);
                  }
#line 686 "format_call.m"
                  {
#line 686 "format_call.m"
                    check_hlds__format_call__Name_80 = hlds__hlds_pred__pred_info_name_1_f_0(check_hlds__format_call__PredInfo_78);
                  }
#line 688 "format_call.m"
                  {
#line 688 "format_call.m"
                    check_hlds__format_call__succeeded = check_hlds__format_call__is_format_call_kind_and_vars_6_p_0(check_hlds__format_call__ModuleName_79, check_hlds__format_call__Name_80, check_hlds__format_call__Args_74, &check_hlds__format_call__Kind_81, &check_hlds__format_call__StringVar_82, &check_hlds__format_call__ValuesVar_83);
                  }
#line 698 "format_call.m"
                  if (check_hlds__format_call__succeeded)
#line 691 "format_call.m"
                    {
#line 691 "format_call.m"
                      MR_Integer check_hlds__format_call__Arity_84;
#line 691 "format_call.m"
                      MR_Word check_hlds__format_call__GoalId_85;
#line 691 "format_call.m"
                      MR_Word check_hlds__format_call__Context_86;
#line 691 "format_call.m"
                      MR_Word check_hlds__format_call__FormatCallSite_87;
#line 691 "format_call.m"
                      MR_Word check_hlds__format_call__V_159_159;
#line 691 "format_call.m"
                      MR_Word check_hlds__format_call__V_161_161;

#line 691 "format_call.m"
                      {
#line 691 "format_call.m"
                        check_hlds__format_call__Arity_84 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__format_call__PredInfo_78);
                      }
#line 692 "format_call.m"
                      {
#line 692 "format_call.m"
                        check_hlds__format_call__GoalId_85 = hlds__hlds_goal__goal_info_get_goal_id_1_f_0(check_hlds__format_call__GoalInfo_41);
                      }
#line 693 "format_call.m"
                      {
#line 693 "format_call.m"
                        check_hlds__format_call__Context_86 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__format_call__GoalInfo_41);
                      }
#line 694 "format_call.m"
                      {
#line 694 "format_call.m"
                        check_hlds__format_call__FormatCallSite_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 694 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_87, 0) = ((MR_Box) (check_hlds__format_call__GoalId_85));
#line 694 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_87, 1) = ((MR_Box) (check_hlds__format_call__StringVar_82));
#line 694 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_87, 2) = ((MR_Box) (check_hlds__format_call__ValuesVar_83));
#line 694 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_87, 3) = ((MR_Box) (check_hlds__format_call__Kind_81));
#line 694 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_87, 4) = ((MR_Box) (check_hlds__format_call__ModuleName_79));
#line 694 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_87, 5) = ((MR_Box) (check_hlds__format_call__Name_80));
#line 694 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_87, 6) = ((MR_Box) (check_hlds__format_call__Arity_84));
#line 694 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_87, 7) = ((MR_Box) (check_hlds__format_call__Context_86));
#line 694 "format_call.m"
                        MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_87, 8) = ((MR_Box) (check_hlds__format_call__HeadVar__3_3));
#line 694 "format_call.m"
                      }
#line 696 "format_call.m"
                      {
#line 696 "format_call.m"
                        MR_Word base;
#line 696 "format_call.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "format_call.m"
                        *check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5 = base;
#line 696 "format_call.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__FormatCallSite_87));
#line 696 "format_call.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129));
#line 696 "format_call.m"
                      }
#line 697 "format_call.m"
                      {
#line 697 "format_call.m"
                        check_hlds__format_call__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__format_call__V_161_161, 0) = ((MR_Box) (check_hlds__format_call__ValuesVar_83));
#line 697 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__format_call__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "format_call.m"
                      }
#line 697 "format_call.m"
                      {
#line 697 "format_call.m"
                        check_hlds__format_call__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__format_call__V_159_159, 0) = ((MR_Box) (check_hlds__format_call__StringVar_82));
#line 697 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__format_call__V_159_159, 1) = ((MR_Box) (check_hlds__format_call__V_161_161));
#line 697 "format_call.m"
                      }
#line 697 "format_call.m"
                      {
#line 697 "format_call.m"
                        parse_tree__set_of_var__insert_list_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__format_call__V_159_159, check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__format_call__STATE_VARIABLE_RelevantVars_13);
                      }
#line 691 "format_call.m"
                    }
#line 698 "format_call.m"
                  else
#line 699 "format_call.m"
                    {
#line 699 "format_call.m"
                      *check_hlds__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133;
#line 699 "format_call.m"
                      *check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 699 "format_call.m"
                    }
#line 699 "format_call.m"
                  *check_hlds__format_call__STATE_VARIABLE_Counter_7 = check_hlds__format_call__STATE_VARIABLE_Counter_130_130;
#line 699 "format_call.m"
                  *check_hlds__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 699 "format_call.m"
                  *check_hlds__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__format_call__STATE_VARIABLE_PredMap_132_132;
#line 683 "format_call.m"
                }
#line 631 "format_call.m"
              else
#line 631 "format_call.m"
                if (((MR_tag((MR_Word) check_hlds__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 1))))
#line 702 "format_call.m"
                  {
#line 702 "format_call.m"
                    MR_Word check_hlds__format_call__RHS_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__GoalExpr_40, (MR_Integer) 1)));
#line 702 "format_call.m"
                    MR_Word check_hlds__format_call__Unification_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__GoalExpr_40, (MR_Integer) 3)));
#line 702 "format_call.m"
                    MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_149_149;
#line 702 "format_call.m"
                    MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_150_150;
#line 702 "format_call.m"
                    MR_Word check_hlds__format_call__STATE_VARIABLE_RelevantVars_151_151;
#line 702 "format_call.m"
                    MR_Word check_hlds__format_call__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__GoalExpr_40, (MR_Integer) 0)));
#line 702 "format_call.m"
                    MR_Word check_hlds__format_call__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__GoalExpr_40, (MR_Integer) 2)));
#line 702 "format_call.m"
                    MR_Word check_hlds__format_call__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__GoalExpr_40, (MR_Integer) 4)));

#line 703 "format_call.m"
                    {
#line 703 "format_call.m"
                      check_hlds__format_call__format_call_traverse_unify_8_p_0(check_hlds__format_call__Unification_91, check_hlds__format_call__HeadVar__3_3, check_hlds__format_call__STATE_VARIABLE_ConjMaps_131_131, &check_hlds__format_call__STATE_VARIABLE_ConjMaps_149_149, check_hlds__format_call__STATE_VARIABLE_PredMap_132_132, &check_hlds__format_call__STATE_VARIABLE_PredMap_150_150, check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133, &check_hlds__format_call__STATE_VARIABLE_RelevantVars_151_151);
                    }
#line 713 "format_call.m"
                    if (((MR_tag((MR_Word) check_hlds__format_call__RHS_89)) == (MR_mktag((MR_Integer) 1))))
#line 715 "format_call.m"
                      {
#line 715 "format_call.m"
                        *check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 715 "format_call.m"
                        *check_hlds__format_call__STATE_VARIABLE_Counter_7 = check_hlds__format_call__STATE_VARIABLE_Counter_130_130;
#line 715 "format_call.m"
                        *check_hlds__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_149_149;
#line 715 "format_call.m"
                        *check_hlds__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__format_call__STATE_VARIABLE_PredMap_150_150;
#line 715 "format_call.m"
                        *check_hlds__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_151_151;
#line 715 "format_call.m"
                      }
#line 713 "format_call.m"
                    else
#line 713 "format_call.m"
                      if (((MR_tag((MR_Word) check_hlds__format_call__RHS_89)) == (MR_mktag((MR_Integer) 2))))
#line 708 "format_call.m"
                        {
#line 708 "format_call.m"
                          MR_Word check_hlds__format_call__TypeCtorInfo_224_224;
#line 708 "format_call.m"
                          MR_Word check_hlds__format_call__LambdaGoal_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__RHS_89, (MR_Integer) 6)));
#line 708 "format_call.m"
                          MR_Word check_hlds__format_call__LambdaGoalId_102;
#line 708 "format_call.m"
                          MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_155_155;
#line 706 "format_call.m"
                          MR_Word check_hlds__format_call___Purity_93 = ((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__RHS_89, (MR_Integer) 0)))) & (MR_Integer) 3);
#line 706 "format_call.m"
                          MR_Word check_hlds__format_call___HOGroundness_94 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__RHS_89, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 706 "format_call.m"
                          MR_Word check_hlds__format_call___PredFunc_95 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__RHS_89, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 706 "format_call.m"
                          MR_Word check_hlds__format_call___LambdaNonLocals_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__RHS_89, (MR_Integer) 2)));
#line 706 "format_call.m"
                          MR_Word check_hlds__format_call___LambdaQuantVars_98 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__RHS_89, (MR_Integer) 3)));
#line 706 "format_call.m"
                          MR_Word check_hlds__format_call___LambdaModes_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__RHS_89, (MR_Integer) 4)));
#line 706 "format_call.m"
                          MR_Word check_hlds__format_call___LambdaDetism_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__RHS_89, (MR_Integer) 5)));

#line 709 "format_call.m"
                          {
#line 709 "format_call.m"
                            check_hlds__format_call__format_call_traverse_goal_13_p_0(check_hlds__format_call__HeadVar__1_1, check_hlds__format_call__LambdaGoal_101, &check_hlds__format_call__LambdaGoalId_102, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__format_call__STATE_VARIABLE_Counter_7, check_hlds__format_call__STATE_VARIABLE_ConjMaps_149_149, check_hlds__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__format_call__STATE_VARIABLE_PredMap_150_150, &check_hlds__format_call__STATE_VARIABLE_PredMap_155_155, check_hlds__format_call__STATE_VARIABLE_RelevantVars_151_151, check_hlds__format_call__STATE_VARIABLE_RelevantVars_13);
                          }
#line 11446 "check_hlds.format_call.c"
                          check_hlds__format_call__TypeCtorInfo_224_224 = (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0;
#line 712 "format_call.m"
                          {
#line 712 "format_call.m"
                            mercury__map__det_insert_4_p_0(check_hlds__format_call__TypeCtorInfo_224_224, check_hlds__format_call__TypeCtorInfo_224_224, ((MR_Box) (check_hlds__format_call__LambdaGoalId_102)), ((MR_Box) (check_hlds__format_call__HeadVar__3_3)), check_hlds__format_call__STATE_VARIABLE_PredMap_155_155, check_hlds__format_call__STATE_VARIABLE_PredMap_11);
#line 712 "format_call.m"
                            return;
                          }
#line 708 "format_call.m"
                        }
#line 713 "format_call.m"
                      else
#line 714 "format_call.m"
                        {
#line 714 "format_call.m"
                          *check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 714 "format_call.m"
                          *check_hlds__format_call__STATE_VARIABLE_Counter_7 = check_hlds__format_call__STATE_VARIABLE_Counter_130_130;
#line 714 "format_call.m"
                          *check_hlds__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_149_149;
#line 714 "format_call.m"
                          *check_hlds__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__format_call__STATE_VARIABLE_PredMap_150_150;
#line 714 "format_call.m"
                          *check_hlds__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_151_151;
#line 714 "format_call.m"
                        }
#line 702 "format_call.m"
                  }
#line 631 "format_call.m"
                else
#line 631 "format_call.m"
                  if (((((MR_tag((MR_Word) check_hlds__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 681 "format_call.m"
                    {
#line 681 "format_call.m"
                      *check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 681 "format_call.m"
                      *check_hlds__format_call__STATE_VARIABLE_Counter_7 = check_hlds__format_call__STATE_VARIABLE_Counter_130_130;
#line 681 "format_call.m"
                      *check_hlds__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 681 "format_call.m"
                      *check_hlds__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__format_call__STATE_VARIABLE_PredMap_132_132;
#line 681 "format_call.m"
                      *check_hlds__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133;
#line 681 "format_call.m"
                    }
#line 631 "format_call.m"
                  else
#line 631 "format_call.m"
                    if (((((MR_tag((MR_Word) check_hlds__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 628 "format_call.m"
                      {
#line 628 "format_call.m"
                        MR_Word check_hlds__format_call__Conjuncts_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 2)));
#line 628 "format_call.m"
                        MR_Word check_hlds__format_call__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 1)));

#line 629 "format_call.m"
                        /* direct tailcall eliminated */
#line 629 "format_call.m"
                        {
#line 629 "format_call.m"
                          MR_Word check_hlds__format_call__HeadVar__2__tmp_copy_2 = check_hlds__format_call__Conjuncts_43;
#line 629 "format_call.m"
                          MR_Word check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0__tmp_copy_4 = check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 629 "format_call.m"
                          MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_0__tmp_copy_6 = check_hlds__format_call__STATE_VARIABLE_Counter_130_130;
#line 629 "format_call.m"
                          MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_0__tmp_copy_8 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 629 "format_call.m"
                          MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_0__tmp_copy_10 = check_hlds__format_call__STATE_VARIABLE_PredMap_132_132;
#line 629 "format_call.m"
                          MR_Word check_hlds__format_call__STATE_VARIABLE_RelevantVars_0__tmp_copy_12 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133;

#line 629 "format_call.m"
                          check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_12 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_0__tmp_copy_12;
#line 629 "format_call.m"
                          check_hlds__format_call__STATE_VARIABLE_PredMap_0_10 = check_hlds__format_call__STATE_VARIABLE_PredMap_0__tmp_copy_10;
#line 629 "format_call.m"
                          check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_8 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_0__tmp_copy_8;
#line 629 "format_call.m"
                          check_hlds__format_call__STATE_VARIABLE_Counter_0_6 = check_hlds__format_call__STATE_VARIABLE_Counter_0__tmp_copy_6;
#line 629 "format_call.m"
                          check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0_4 = check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0__tmp_copy_4;
#line 629 "format_call.m"
                          check_hlds__format_call__HeadVar__2_2 = check_hlds__format_call__HeadVar__2__tmp_copy_2;
#line 629 "format_call.m"
                        }
#line 629 "format_call.m"
                        continue;
#line 628 "format_call.m"
                      }
#line 631 "format_call.m"
                    else
#line 631 "format_call.m"
                      if (((((MR_tag((MR_Word) check_hlds__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 632 "format_call.m"
                        {
#line 632 "format_call.m"
                          MR_Word check_hlds__format_call__Disjuncts_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 1)));

#line 633 "format_call.m"
                          {
#line 633 "format_call.m"
                            check_hlds__format_call__format_call_traverse_disj_13_p_0(check_hlds__format_call__HeadVar__1_1, check_hlds__format_call__Disjuncts_44, check_hlds__format_call__HeadVar__3_3, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__format_call__STATE_VARIABLE_Counter_7, check_hlds__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__format_call__STATE_VARIABLE_PredMap_132_132, check_hlds__format_call__STATE_VARIABLE_PredMap_11, check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__format_call__STATE_VARIABLE_RelevantVars_13);
#line 633 "format_call.m"
                            return;
                          }
#line 632 "format_call.m"
                        }
#line 631 "format_call.m"
                      else
#line 631 "format_call.m"
                        if (((((MR_tag((MR_Word) check_hlds__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 679 "format_call.m"
                          {
#line 679 "format_call.m"
                            *check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 679 "format_call.m"
                            *check_hlds__format_call__STATE_VARIABLE_Counter_7 = check_hlds__format_call__STATE_VARIABLE_Counter_130_130;
#line 679 "format_call.m"
                            *check_hlds__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 679 "format_call.m"
                            *check_hlds__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__format_call__STATE_VARIABLE_PredMap_132_132;
#line 679 "format_call.m"
                            *check_hlds__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133;
#line 679 "format_call.m"
                          }
#line 631 "format_call.m"
                        else
#line 631 "format_call.m"
                          if (((((MR_tag((MR_Word) check_hlds__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 641 "format_call.m"
                            {
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__TypeCtorInfo_219_219;
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__Cond_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 2)));
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__Then_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 3)));
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__Else_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 4)));
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__ElseId_52;
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__CondThenId_53;
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__ThenConj_54;
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__CondConj_55;
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__STATE_VARIABLE_FormatCallSites_177_177;
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_178_178;
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_179_179;
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_180_180;
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__STATE_VARIABLE_RelevantVars_181_181;
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_182_182;
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_183_183;
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__V_184_184;
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_188_188;
#line 641 "format_call.m"
                              MR_Word check_hlds__format_call__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 1)));

#line 643 "format_call.m"
                              {
#line 643 "format_call.m"
                                check_hlds__format_call__format_call_traverse_goal_13_p_0(check_hlds__format_call__HeadVar__1_1, check_hlds__format_call__Else_51, &check_hlds__format_call__ElseId_52, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129, &check_hlds__format_call__STATE_VARIABLE_FormatCallSites_177_177, check_hlds__format_call__STATE_VARIABLE_Counter_130_130, &check_hlds__format_call__STATE_VARIABLE_Counter_178_178, check_hlds__format_call__STATE_VARIABLE_ConjMaps_131_131, &check_hlds__format_call__STATE_VARIABLE_ConjMaps_179_179, check_hlds__format_call__STATE_VARIABLE_PredMap_132_132, &check_hlds__format_call__STATE_VARIABLE_PredMap_180_180, check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133, &check_hlds__format_call__STATE_VARIABLE_RelevantVars_181_181);
                              }
#line 11623 "check_hlds.format_call.c"
                              check_hlds__format_call__TypeCtorInfo_219_219 = (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0;
#line 645 "format_call.m"
                              {
#line 645 "format_call.m"
                                mercury__map__det_insert_4_p_0(check_hlds__format_call__TypeCtorInfo_219_219, check_hlds__format_call__TypeCtorInfo_219_219, ((MR_Box) (check_hlds__format_call__ElseId_52)), ((MR_Box) (check_hlds__format_call__HeadVar__3_3)), check_hlds__format_call__STATE_VARIABLE_PredMap_180_180, &check_hlds__format_call__STATE_VARIABLE_PredMap_182_182);
                              }
#line 647 "format_call.m"
                              {
#line 647 "format_call.m"
                                check_hlds__format_call__alloc_id_3_p_0(&check_hlds__format_call__CondThenId_53, check_hlds__format_call__STATE_VARIABLE_Counter_178_178, &check_hlds__format_call__STATE_VARIABLE_Counter_183_183);
                              }
#line 648 "format_call.m"
                              {
#line 648 "format_call.m"
                                hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__format_call__Then_50, &check_hlds__format_call__ThenConj_54);
                              }
#line 649 "format_call.m"
                              {
#line 649 "format_call.m"
                                hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__format_call__Cond_49, &check_hlds__format_call__CondConj_55);
                              }
#line 650 "format_call.m"
                              {
#line 650 "format_call.m"
                                check_hlds__format_call__V_184_184 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__format_call__CondConj_55, check_hlds__format_call__ThenConj_54);
                              }
#line 650 "format_call.m"
                              {
#line 650 "format_call.m"
                                check_hlds__format_call__format_call_traverse_conj_13_p_0(check_hlds__format_call__HeadVar__1_1, check_hlds__format_call__V_184_184, check_hlds__format_call__CondThenId_53, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_177_177, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__format_call__STATE_VARIABLE_Counter_183_183, check_hlds__format_call__STATE_VARIABLE_Counter_7, check_hlds__format_call__STATE_VARIABLE_ConjMaps_179_179, check_hlds__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__format_call__STATE_VARIABLE_PredMap_182_182, &check_hlds__format_call__STATE_VARIABLE_PredMap_188_188, check_hlds__format_call__STATE_VARIABLE_RelevantVars_181_181, check_hlds__format_call__STATE_VARIABLE_RelevantVars_13);
                              }
#line 652 "format_call.m"
                              {
#line 652 "format_call.m"
                                mercury__map__det_insert_4_p_0(check_hlds__format_call__TypeCtorInfo_219_219, check_hlds__format_call__TypeCtorInfo_219_219, ((MR_Box) (check_hlds__format_call__CondThenId_53)), ((MR_Box) (check_hlds__format_call__HeadVar__3_3)), check_hlds__format_call__STATE_VARIABLE_PredMap_188_188, check_hlds__format_call__STATE_VARIABLE_PredMap_11);
#line 652 "format_call.m"
                                return;
                              }
#line 641 "format_call.m"
                            }
#line 631 "format_call.m"
                          else
#line 631 "format_call.m"
                            if (((((MR_tag((MR_Word) check_hlds__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 659 "format_call.m"
                              {
#line 659 "format_call.m"
                                MR_Word check_hlds__format_call__Reason_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 1)));
#line 659 "format_call.m"
                                MR_Word check_hlds__format_call__SubGoal_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 2)));
#line 661 "format_call.m"
                                MR_Word check_hlds__format_call__TermVar_59;
#line 661 "format_call.m"
                                MR_Word check_hlds__format_call__V_163_163;
#line 668 "format_call.m"
                                MR_Word check_hlds__format_call__TypeCtorInfo_222_222;

#line 661 "format_call.m"
                                check_hlds__format_call__succeeded = ((((MR_tag((MR_Word) check_hlds__format_call__Reason_58)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__Reason_58, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 661 "format_call.m"
                                if (check_hlds__format_call__succeeded)
#line 661 "format_call.m"
                                  {
#line 661 "format_call.m"
                                    check_hlds__format_call__TermVar_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__Reason_58, (MR_Integer) 1)));
#line 661 "format_call.m"
                                    check_hlds__format_call__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__Reason_58, (MR_Integer) 2)));
#line 661 "format_call.m"
                                    check_hlds__format_call__succeeded = (check_hlds__format_call__V_163_163 == (MR_Integer) 1);
#line 661 "format_call.m"
                                    if (check_hlds__format_call__succeeded)
#line 661 "format_call.m"
                                      {
#line 11697 "check_hlds.format_call.c"
                                        check_hlds__format_call__TypeCtorInfo_222_222 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 668 "format_call.m"
                                        {
#line 668 "format_call.m"
                                          check_hlds__format_call__succeeded = parse_tree__set_of_var__member_2_p_0(check_hlds__format_call__TypeCtorInfo_222_222, check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__format_call__TermVar_59);
                                        }
#line 668 "format_call.m"
                                        check_hlds__format_call__succeeded = !(check_hlds__format_call__succeeded);
#line 661 "format_call.m"
                                      }
#line 661 "format_call.m"
                                  }
#line 674 "format_call.m"
                                if (check_hlds__format_call__succeeded)
#line 673 "format_call.m"
                                  {
#line 673 "format_call.m"
                                    *check_hlds__format_call__STATE_VARIABLE_RelevantVars_13 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133;
#line 673 "format_call.m"
                                    *check_hlds__format_call__STATE_VARIABLE_PredMap_11 = check_hlds__format_call__STATE_VARIABLE_PredMap_132_132;
#line 673 "format_call.m"
                                    *check_hlds__format_call__STATE_VARIABLE_ConjMaps_9 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 673 "format_call.m"
                                    *check_hlds__format_call__STATE_VARIABLE_Counter_7 = check_hlds__format_call__STATE_VARIABLE_Counter_130_130;
#line 673 "format_call.m"
                                    *check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5 = check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 673 "format_call.m"
                                  }
#line 674 "format_call.m"
                                else
#line 675 "format_call.m"
                                  {
#line 675 "format_call.m"
                                    MR_Word check_hlds__format_call__V_164_164;

#line 675 "format_call.m"
                                    {
#line 675 "format_call.m"
                                      check_hlds__format_call__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "format_call.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__format_call__V_164_164, 0) = ((MR_Box) (check_hlds__format_call__SubGoal_208));
#line 675 "format_call.m"
                                      MR_hl_field(MR_mktag(1), check_hlds__format_call__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 675 "format_call.m"
                                    }
#line 675 "format_call.m"
                                    /* direct tailcall eliminated */
#line 675 "format_call.m"
                                    {
#line 675 "format_call.m"
                                      MR_Word check_hlds__format_call__HeadVar__2__tmp_copy_2 = check_hlds__format_call__V_164_164;
#line 675 "format_call.m"
                                      MR_Word check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0__tmp_copy_4 = check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129;
#line 675 "format_call.m"
                                      MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_0__tmp_copy_6 = check_hlds__format_call__STATE_VARIABLE_Counter_130_130;
#line 675 "format_call.m"
                                      MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_0__tmp_copy_8 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_131_131;
#line 675 "format_call.m"
                                      MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_0__tmp_copy_10 = check_hlds__format_call__STATE_VARIABLE_PredMap_132_132;
#line 675 "format_call.m"
                                      MR_Word check_hlds__format_call__STATE_VARIABLE_RelevantVars_0__tmp_copy_12 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133;

#line 675 "format_call.m"
                                      check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_12 = check_hlds__format_call__STATE_VARIABLE_RelevantVars_0__tmp_copy_12;
#line 675 "format_call.m"
                                      check_hlds__format_call__STATE_VARIABLE_PredMap_0_10 = check_hlds__format_call__STATE_VARIABLE_PredMap_0__tmp_copy_10;
#line 675 "format_call.m"
                                      check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_8 = check_hlds__format_call__STATE_VARIABLE_ConjMaps_0__tmp_copy_8;
#line 675 "format_call.m"
                                      check_hlds__format_call__STATE_VARIABLE_Counter_0_6 = check_hlds__format_call__STATE_VARIABLE_Counter_0__tmp_copy_6;
#line 675 "format_call.m"
                                      check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0_4 = check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0__tmp_copy_4;
#line 675 "format_call.m"
                                      check_hlds__format_call__HeadVar__2_2 = check_hlds__format_call__HeadVar__2__tmp_copy_2;
#line 675 "format_call.m"
                                    }
#line 675 "format_call.m"
                                    continue;
#line 675 "format_call.m"
                                  }
#line 659 "format_call.m"
                              }
#line 631 "format_call.m"
                            else
#line 631 "format_call.m"
                              if (((((MR_tag((MR_Word) check_hlds__format_call__GoalExpr_40)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 719 "format_call.m"
                                {
#line 719 "format_call.m"
                                  MR_Word check_hlds__format_call__ShortHand_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 1)));

#line 725 "format_call.m"
                                  if (((MR_tag((MR_Word) check_hlds__format_call__ShortHand_107)) == (MR_mktag((MR_Integer) 1))))
#line 721 "format_call.m"
                                    {
#line 721 "format_call.m"
                                      MR_Word check_hlds__format_call__MainGoal_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand_107, (MR_Integer) 4)));
#line 721 "format_call.m"
                                      MR_Word check_hlds__format_call__OrElseGoals_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand_107, (MR_Integer) 5)));
#line 721 "format_call.m"
                                      MR_Word check_hlds__format_call__V_143_143;
#line 721 "format_call.m"
                                      MR_Word check_hlds__format_call__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand_107, (MR_Integer) 0)));
#line 721 "format_call.m"
                                      MR_Word check_hlds__format_call__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand_107, (MR_Integer) 1)));
#line 721 "format_call.m"
                                      MR_Word check_hlds__format_call__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand_107, (MR_Integer) 2)));
#line 721 "format_call.m"
                                      MR_Word check_hlds__format_call__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand_107, (MR_Integer) 3)));
#line 721 "format_call.m"
                                      MR_Word check_hlds__format_call__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ShortHand_107, (MR_Integer) 6)));

#line 722 "format_call.m"
                                      {
#line 722 "format_call.m"
                                        check_hlds__format_call__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "format_call.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__format_call__V_143_143, 0) = ((MR_Box) (check_hlds__format_call__MainGoal_112));
#line 722 "format_call.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__format_call__V_143_143, 1) = ((MR_Box) (check_hlds__format_call__OrElseGoals_113));
#line 722 "format_call.m"
                                      }
#line 722 "format_call.m"
                                      {
#line 722 "format_call.m"
                                        check_hlds__format_call__format_call_traverse_disj_13_p_0(check_hlds__format_call__HeadVar__1_1, check_hlds__format_call__V_143_143, check_hlds__format_call__HeadVar__3_3, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__format_call__STATE_VARIABLE_Counter_7, check_hlds__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__format_call__STATE_VARIABLE_PredMap_132_132, check_hlds__format_call__STATE_VARIABLE_PredMap_11, check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__format_call__STATE_VARIABLE_RelevantVars_13);
#line 722 "format_call.m"
                                        return;
                                      }
#line 721 "format_call.m"
                                    }
#line 725 "format_call.m"
                                  else
#line 725 "format_call.m"
                                    if (((MR_tag((MR_Word) check_hlds__format_call__ShortHand_107)) == (MR_mktag((MR_Integer) 0))))
#line 732 "format_call.m"
                                      {
#line 734 "format_call.m"
                                        {
#line 734 "format_call.m"
                                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.format_call", (MR_String) "predicate \140check_hlds.format_call.format_call_traverse_conj\'/13", (MR_String) "bi_implication");
#line 734 "format_call.m"
                                          return;
                                        }
#line 732 "format_call.m"
                                      }
#line 725 "format_call.m"
                                    else
#line 726 "format_call.m"
                                      {
#line 726 "format_call.m"
                                        MR_Word check_hlds__format_call__TypeCtorInfo_225_225;
#line 726 "format_call.m"
                                        MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_140_140;
#line 726 "format_call.m"
                                        MR_Word check_hlds__format_call__SubGoal_209 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__ShortHand_107, (MR_Integer) 2)));
#line 726 "format_call.m"
                                        MR_Word check_hlds__format_call__SubGoalId_210;
#line 726 "format_call.m"
                                        MR_Word check_hlds__format_call__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__ShortHand_107, (MR_Integer) 0)));
#line 726 "format_call.m"
                                        MR_Word check_hlds__format_call__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__ShortHand_107, (MR_Integer) 1)));

#line 727 "format_call.m"
                                        {
#line 727 "format_call.m"
                                          check_hlds__format_call__format_call_traverse_goal_13_p_0(check_hlds__format_call__HeadVar__1_1, check_hlds__format_call__SubGoal_209, &check_hlds__format_call__SubGoalId_210, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__format_call__STATE_VARIABLE_Counter_7, check_hlds__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__format_call__STATE_VARIABLE_PredMap_132_132, &check_hlds__format_call__STATE_VARIABLE_PredMap_140_140, check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__format_call__STATE_VARIABLE_RelevantVars_13);
                                        }
#line 11866 "check_hlds.format_call.c"
                                        check_hlds__format_call__TypeCtorInfo_225_225 = (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0;
#line 730 "format_call.m"
                                        {
#line 730 "format_call.m"
                                          mercury__map__det_insert_4_p_0(check_hlds__format_call__TypeCtorInfo_225_225, check_hlds__format_call__TypeCtorInfo_225_225, ((MR_Box) (check_hlds__format_call__SubGoalId_210)), ((MR_Box) (check_hlds__format_call__HeadVar__3_3)), check_hlds__format_call__STATE_VARIABLE_PredMap_140_140, check_hlds__format_call__STATE_VARIABLE_PredMap_11);
#line 730 "format_call.m"
                                          return;
                                        }
#line 726 "format_call.m"
                                      }
#line 719 "format_call.m"
                                }
#line 631 "format_call.m"
                              else
#line 636 "format_call.m"
                                {
#line 636 "format_call.m"
                                  MR_Word check_hlds__format_call__Cases_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 3)));
#line 636 "format_call.m"
                                  MR_Word check_hlds__format_call__Disjuncts_207;
#line 636 "format_call.m"
                                  MR_Word check_hlds__format_call__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 1)));
#line 636 "format_call.m"
                                  MR_Word check_hlds__format_call__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__format_call__GoalExpr_40, (MR_Integer) 2)));

#line 637 "format_call.m"
                                  {
#line 637 "format_call.m"
                                    check_hlds__format_call__Disjuncts_207 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_case_0, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &check_hlds__format_call_scalar_common_1[9], check_hlds__format_call__Cases_47);
                                  }
#line 638 "format_call.m"
                                  {
#line 638 "format_call.m"
                                    check_hlds__format_call__format_call_traverse_disj_13_p_0(check_hlds__format_call__HeadVar__1_1, check_hlds__format_call__Disjuncts_207, check_hlds__format_call__HeadVar__3_3, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_129_129, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_5, check_hlds__format_call__STATE_VARIABLE_Counter_130_130, check_hlds__format_call__STATE_VARIABLE_Counter_7, check_hlds__format_call__STATE_VARIABLE_ConjMaps_131_131, check_hlds__format_call__STATE_VARIABLE_ConjMaps_9, check_hlds__format_call__STATE_VARIABLE_PredMap_132_132, check_hlds__format_call__STATE_VARIABLE_PredMap_11, check_hlds__format_call__STATE_VARIABLE_RelevantVars_133_133, check_hlds__format_call__STATE_VARIABLE_RelevantVars_13);
#line 638 "format_call.m"
                                    return;
                                  }
#line 636 "format_call.m"
                                }
#line 623 "format_call.m"
          }
#line 620 "format_call.m"
      }
#line 620 "format_call.m"
      break;
#line 620 "format_call.m"
    }
#line 614 "format_call.m"
}

#line 601 "format_call.m"
static void MR_CALL 
check_hlds__format_call__format_call_traverse_goal_13_p_0(
#line 601 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_14,
#line 601 "format_call.m"
  MR_Word check_hlds__format_call__Goal_15,
#line 601 "format_call.m"
  MR_Word * check_hlds__format_call__CurId_16,
#line 601 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0_23,
#line 601 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_FormatCallSites_24,
#line 601 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_0_25,
#line 601 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_Counter_26,
#line 601 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_27,
#line 601 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_ConjMaps_28,
#line 601 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_PredMap_0_29,
#line 601 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_PredMap_30,
#line 601 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_31,
#line 601 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_RelevantVars_32)
#line 601 "format_call.m"
{
#line 608 "format_call.m"
  {
#line 608 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 608 "format_call.m"
    MR_Word check_hlds__format_call__GoalConj_22;
#line 608 "format_call.m"
    MR_Word check_hlds__format_call__STATE_VARIABLE_Counter_33_33;
#line 608 "format_call.m"
    MR_Integer check_hlds__format_call__N_43;

#line 880 "format_call.m"
    {
#line 880 "format_call.m"
      mercury__counter__allocate_3_p_0(&check_hlds__format_call__N_43, check_hlds__format_call__STATE_VARIABLE_Counter_0_25, &check_hlds__format_call__STATE_VARIABLE_Counter_33_33);
    }
#line 881 "format_call.m"
    *check_hlds__format_call__CurId_16 = (MR_Word) check_hlds__format_call__N_43;
#line 610 "format_call.m"
    {
#line 610 "format_call.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__format_call__Goal_15, &check_hlds__format_call__GoalConj_22);
    }
#line 611 "format_call.m"
    {
#line 611 "format_call.m"
      check_hlds__format_call__format_call_traverse_conj_13_p_0(check_hlds__format_call__ModuleInfo_14, check_hlds__format_call__GoalConj_22, *check_hlds__format_call__CurId_16, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_0_23, check_hlds__format_call__STATE_VARIABLE_FormatCallSites_24, check_hlds__format_call__STATE_VARIABLE_Counter_33_33, check_hlds__format_call__STATE_VARIABLE_Counter_26, check_hlds__format_call__STATE_VARIABLE_ConjMaps_0_27, check_hlds__format_call__STATE_VARIABLE_ConjMaps_28, check_hlds__format_call__STATE_VARIABLE_PredMap_0_29, check_hlds__format_call__STATE_VARIABLE_PredMap_30, check_hlds__format_call__STATE_VARIABLE_RelevantVars_0_31, check_hlds__format_call__STATE_VARIABLE_RelevantVars_32);
#line 611 "format_call.m"
      return;
    }
#line 608 "format_call.m"
  }
#line 601 "format_call.m"
}

#line 589 "format_call.m"
static MR_Word MR_CALL 
check_hlds__format_call__project_var_to_print_1_f_0(
#line 589 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1)
#line 589 "format_call.m"
{
#line 591 "format_call.m"
  {
#line 591 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 591 "format_call.m"
    MR_Word check_hlds__format_call__VarToPrint_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));
#line 591 "format_call.m"
    MR_Word check_hlds__format_call___DummyToPrint_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));

#line 591 "format_call.m"
    return check_hlds__format_call__VarToPrint_3;
#line 591 "format_call.m"
  }
#line 589 "format_call.m"
}

#line 584 "format_call.m"
static MR_Word MR_CALL 
check_hlds__format_call__project_dummy_to_print_1_f_0(
#line 584 "format_call.m"
  MR_Word check_hlds__format_call__HeadVar__1_1)
#line 584 "format_call.m"
{
#line 587 "format_call.m"
  {
#line 587 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 587 "format_call.m"
    MR_Word check_hlds__format_call__DummyToPrint_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 1)));
#line 587 "format_call.m"
    MR_Word check_hlds__format_call___VarToPrint_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__HeadVar__1_1, (MR_Integer) 0)));

#line 587 "format_call.m"
    return check_hlds__format_call__DummyToPrint_4;
#line 587 "format_call.m"
  }
#line 584 "format_call.m"
}

#line 568 "format_call.m"
static void MR_CALL 
check_hlds__format_call__follow_list_value_5_p_0(
#line 568 "format_call.m"
  MR_Word check_hlds__format_call__ConjMaps_6,
#line 568 "format_call.m"
  MR_Word check_hlds__format_call__PredMap_7,
#line 568 "format_call.m"
  MR_Word check_hlds__format_call__CurId_8,
#line 568 "format_call.m"
  MR_Word check_hlds__format_call__PolytypeVar_9,
#line 568 "format_call.m"
  MR_Word * check_hlds__format_call__MaybeResult_10)
#line 568 "format_call.m"
{
#line 571 "format_call.m"
  while (MR_TRUE)
#line 571 "format_call.m"
    {
#line 571 "format_call.m"
      /* tailcall optimized into a loop */
#line 571 "format_call.m"
      {
#line 571 "format_call.m"
        MR_bool check_hlds__format_call__succeeded;
#line 571 "format_call.m"
        MR_Word check_hlds__format_call__ConjMap_11;
#line 571 "format_call.m"
        MR_Word check_hlds__format_call__ElementMap_14;
#line 571 "format_call.m"
        MR_Word check_hlds__format_call__EqvMap_15;
#line 873 "format_call.m"
        MR_Word check_hlds__format_call__ConjMapPrime_26;
#line 871 "format_call.m"
        MR_Box check_hlds__format_call__conv0_ConjMapPrime_26;
#line 573 "format_call.m"
        MR_Word check_hlds__format_call__V_12_12;
#line 573 "format_call.m"
        MR_Word check_hlds__format_call__V_13_13;
#line 576 "format_call.m"
        MR_Word check_hlds__format_call__EqvVar_16;
#line 574 "format_call.m"
        MR_Word check_hlds__format_call__TypeInfo_19_19;
#line 574 "format_call.m"
        MR_Box check_hlds__format_call__conv1_EqvVar_16;

#line 871 "format_call.m"
        {
#line 871 "format_call.m"
          check_hlds__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_map_0, check_hlds__format_call__ConjMaps_6, ((MR_Box) (check_hlds__format_call__CurId_8)), &check_hlds__format_call__conv0_ConjMapPrime_26);
        }
#line 871 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 871 "format_call.m"
          {
#line 871 "format_call.m"
            check_hlds__format_call__ConjMapPrime_26 = ((MR_Word) check_hlds__format_call__conv0_ConjMapPrime_26);
#line 871 "format_call.m"
            check_hlds__format_call__succeeded = MR_TRUE;
#line 871 "format_call.m"
          }
#line 873 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 872 "format_call.m"
          check_hlds__format_call__ConjMap_11 = check_hlds__format_call__ConjMapPrime_26;
#line 873 "format_call.m"
        else
#line 874 "format_call.m"
          {
#line 874 "format_call.m"
            MR_Word check_hlds__format_call__TypeInfo_14_33 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 874 "format_call.m"
            MR_Word check_hlds__format_call__V_27_27;
#line 874 "format_call.m"
            MR_Word check_hlds__format_call__V_28_28;
#line 874 "format_call.m"
            MR_Word check_hlds__format_call__V_29_29;
#line 874 "format_call.m"
            MR_Word check_hlds__format_call__V_30_30;

#line 874 "format_call.m"
            {
#line 874 "format_call.m"
              check_hlds__format_call__V_27_27 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_33, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 874 "format_call.m"
            {
#line 874 "format_call.m"
              check_hlds__format_call__V_28_28 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_33, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_list_skeleton_state_0);
            }
#line 874 "format_call.m"
            {
#line 874 "format_call.m"
              check_hlds__format_call__V_29_29 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_33, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0);
            }
#line 874 "format_call.m"
            {
#line 874 "format_call.m"
              check_hlds__format_call__V_30_30 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_33, check_hlds__format_call__TypeInfo_14_33);
            }
#line 874 "format_call.m"
            {
#line 874 "format_call.m"
              check_hlds__format_call__ConjMap_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 874 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, 0) = ((MR_Box) (check_hlds__format_call__V_27_27));
#line 874 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, 1) = ((MR_Box) (check_hlds__format_call__V_28_28));
#line 874 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, 2) = ((MR_Box) (check_hlds__format_call__V_29_29));
#line 874 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, 3) = ((MR_Box) (check_hlds__format_call__V_30_30));
#line 874 "format_call.m"
            }
#line 874 "format_call.m"
          }
#line 573 "format_call.m"
        check_hlds__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, (MR_Integer) 0)));
#line 573 "format_call.m"
        check_hlds__format_call__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, (MR_Integer) 1)));
#line 573 "format_call.m"
        check_hlds__format_call__ElementMap_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, (MR_Integer) 2)));
#line 573 "format_call.m"
        check_hlds__format_call__EqvMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, (MR_Integer) 3)));
#line 12153 "check_hlds.format_call.c"
        check_hlds__format_call__TypeInfo_19_19 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 574 "format_call.m"
        {
#line 574 "format_call.m"
          check_hlds__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__format_call__TypeInfo_19_19, check_hlds__format_call__TypeInfo_19_19, check_hlds__format_call__EqvMap_15, ((MR_Box) (check_hlds__format_call__PolytypeVar_9)), &check_hlds__format_call__conv1_EqvVar_16);
        }
#line 574 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 574 "format_call.m"
          {
#line 574 "format_call.m"
            check_hlds__format_call__EqvVar_16 = ((MR_Word) check_hlds__format_call__conv1_EqvVar_16);
#line 574 "format_call.m"
            check_hlds__format_call__succeeded = MR_TRUE;
#line 574 "format_call.m"
          }
#line 576 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 575 "format_call.m"
          {
#line 575 "format_call.m"
            /* direct tailcall eliminated */
#line 575 "format_call.m"
            {
#line 575 "format_call.m"
              MR_Word check_hlds__format_call__PolytypeVar__tmp_copy_9 = check_hlds__format_call__EqvVar_16;

#line 575 "format_call.m"
              check_hlds__format_call__PolytypeVar_9 = check_hlds__format_call__PolytypeVar__tmp_copy_9;
#line 575 "format_call.m"
            }
#line 575 "format_call.m"
            continue;
#line 575 "format_call.m"
          }
#line 576 "format_call.m"
        else
#line 578 "format_call.m"
          {
#line 578 "format_call.m"
            MR_Word check_hlds__format_call__WhatToPrint_17;
#line 576 "format_call.m"
            MR_Box check_hlds__format_call__conv2_WhatToPrint_17;

#line 576 "format_call.m"
            {
#line 576 "format_call.m"
              check_hlds__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0, check_hlds__format_call__ElementMap_14, ((MR_Box) (check_hlds__format_call__PolytypeVar_9)), &check_hlds__format_call__conv2_WhatToPrint_17);
            }
#line 576 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 576 "format_call.m"
              {
#line 576 "format_call.m"
                check_hlds__format_call__WhatToPrint_17 = ((MR_Word) check_hlds__format_call__conv2_WhatToPrint_17);
#line 576 "format_call.m"
                check_hlds__format_call__succeeded = MR_TRUE;
#line 576 "format_call.m"
              }
#line 578 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 577 "format_call.m"
              {
#line 577 "format_call.m"
                MR_Word base;
#line 577 "format_call.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 577 "format_call.m"
                *check_hlds__format_call__MaybeResult_10 = base;
#line 577 "format_call.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__WhatToPrint_17));
#line 577 "format_call.m"
              }
#line 578 "format_call.m"
            else
#line 580 "format_call.m"
              {
#line 580 "format_call.m"
                MR_Word check_hlds__format_call__PredId_18;
#line 578 "format_call.m"
                MR_Word check_hlds__format_call__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0;
#line 578 "format_call.m"
                MR_Box check_hlds__format_call__conv3_PredId_18;

#line 578 "format_call.m"
                {
#line 578 "format_call.m"
                  check_hlds__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__format_call__TypeCtorInfo_22_22, check_hlds__format_call__TypeCtorInfo_22_22, check_hlds__format_call__PredMap_7, ((MR_Box) (check_hlds__format_call__CurId_8)), &check_hlds__format_call__conv3_PredId_18);
                }
#line 578 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 578 "format_call.m"
                  {
#line 578 "format_call.m"
                    check_hlds__format_call__PredId_18 = ((MR_Word) check_hlds__format_call__conv3_PredId_18);
#line 578 "format_call.m"
                    check_hlds__format_call__succeeded = MR_TRUE;
#line 578 "format_call.m"
                  }
#line 580 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 579 "format_call.m"
                  {
#line 579 "format_call.m"
                    /* direct tailcall eliminated */
#line 579 "format_call.m"
                    {
#line 579 "format_call.m"
                      MR_Word check_hlds__format_call__CurId__tmp_copy_8 = check_hlds__format_call__PredId_18;

#line 579 "format_call.m"
                      check_hlds__format_call__CurId_8 = check_hlds__format_call__CurId__tmp_copy_8;
#line 579 "format_call.m"
                    }
#line 579 "format_call.m"
                    continue;
#line 579 "format_call.m"
                  }
#line 580 "format_call.m"
                else
#line 581 "format_call.m"
                  *check_hlds__format_call__MaybeResult_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 580 "format_call.m"
              }
#line 578 "format_call.m"
          }
#line 571 "format_call.m"
      }
#line 571 "format_call.m"
      break;
#line 571 "format_call.m"
    }
#line 568 "format_call.m"
}

#line 534 "format_call.m"
static void MR_CALL 
check_hlds__format_call__follow_list_skeleton_5_p_0(
#line 534 "format_call.m"
  MR_Word check_hlds__format_call__ConjMaps_6,
#line 534 "format_call.m"
  MR_Word check_hlds__format_call__PredMap_7,
#line 534 "format_call.m"
  MR_Word check_hlds__format_call__CurId_8,
#line 534 "format_call.m"
  MR_Word check_hlds__format_call__ListVar_9,
#line 534 "format_call.m"
  MR_Word * check_hlds__format_call__Result_10)
#line 534 "format_call.m"
{
#line 537 "format_call.m"
  while (MR_TRUE)
#line 537 "format_call.m"
    {
#line 537 "format_call.m"
      /* tailcall optimized into a loop */
#line 537 "format_call.m"
      {
#line 537 "format_call.m"
        MR_bool check_hlds__format_call__succeeded;
#line 537 "format_call.m"
        MR_Word check_hlds__format_call__ConjMap_11;
#line 537 "format_call.m"
        MR_Word check_hlds__format_call__ListMap_13;
#line 537 "format_call.m"
        MR_Word check_hlds__format_call__EqvMap_15;
#line 873 "format_call.m"
        MR_Word check_hlds__format_call__ConjMapPrime_36;
#line 871 "format_call.m"
        MR_Box check_hlds__format_call__conv0_ConjMapPrime_36;
#line 539 "format_call.m"
        MR_Word check_hlds__format_call__V_12_12;
#line 539 "format_call.m"
        MR_Word check_hlds__format_call__V_14_14;
#line 542 "format_call.m"
        MR_Word check_hlds__format_call__EqvVar_16;
#line 540 "format_call.m"
        MR_Word check_hlds__format_call__TypeInfo_29_29;
#line 540 "format_call.m"
        MR_Box check_hlds__format_call__conv1_EqvVar_16;

#line 871 "format_call.m"
        {
#line 871 "format_call.m"
          check_hlds__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_map_0, check_hlds__format_call__ConjMaps_6, ((MR_Box) (check_hlds__format_call__CurId_8)), &check_hlds__format_call__conv0_ConjMapPrime_36);
        }
#line 871 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 871 "format_call.m"
          {
#line 871 "format_call.m"
            check_hlds__format_call__ConjMapPrime_36 = ((MR_Word) check_hlds__format_call__conv0_ConjMapPrime_36);
#line 871 "format_call.m"
            check_hlds__format_call__succeeded = MR_TRUE;
#line 871 "format_call.m"
          }
#line 873 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 872 "format_call.m"
          check_hlds__format_call__ConjMap_11 = check_hlds__format_call__ConjMapPrime_36;
#line 873 "format_call.m"
        else
#line 874 "format_call.m"
          {
#line 874 "format_call.m"
            MR_Word check_hlds__format_call__TypeInfo_14_43 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 874 "format_call.m"
            MR_Word check_hlds__format_call__V_37_37;
#line 874 "format_call.m"
            MR_Word check_hlds__format_call__V_38_38;
#line 874 "format_call.m"
            MR_Word check_hlds__format_call__V_39_39;
#line 874 "format_call.m"
            MR_Word check_hlds__format_call__V_40_40;

#line 874 "format_call.m"
            {
#line 874 "format_call.m"
              check_hlds__format_call__V_37_37 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_43, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 874 "format_call.m"
            {
#line 874 "format_call.m"
              check_hlds__format_call__V_38_38 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_43, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_list_skeleton_state_0);
            }
#line 874 "format_call.m"
            {
#line 874 "format_call.m"
              check_hlds__format_call__V_39_39 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_43, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0);
            }
#line 874 "format_call.m"
            {
#line 874 "format_call.m"
              check_hlds__format_call__V_40_40 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_43, check_hlds__format_call__TypeInfo_14_43);
            }
#line 874 "format_call.m"
            {
#line 874 "format_call.m"
              check_hlds__format_call__ConjMap_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 874 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, 0) = ((MR_Box) (check_hlds__format_call__V_37_37));
#line 874 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, 1) = ((MR_Box) (check_hlds__format_call__V_38_38));
#line 874 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, 2) = ((MR_Box) (check_hlds__format_call__V_39_39));
#line 874 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, 3) = ((MR_Box) (check_hlds__format_call__V_40_40));
#line 874 "format_call.m"
            }
#line 874 "format_call.m"
          }
#line 539 "format_call.m"
        check_hlds__format_call__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, (MR_Integer) 0)));
#line 539 "format_call.m"
        check_hlds__format_call__ListMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, (MR_Integer) 1)));
#line 539 "format_call.m"
        check_hlds__format_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, (MR_Integer) 2)));
#line 539 "format_call.m"
        check_hlds__format_call__EqvMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, (MR_Integer) 3)));
#line 12413 "check_hlds.format_call.c"
        check_hlds__format_call__TypeInfo_29_29 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 540 "format_call.m"
        {
#line 540 "format_call.m"
          check_hlds__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__format_call__TypeInfo_29_29, check_hlds__format_call__TypeInfo_29_29, check_hlds__format_call__EqvMap_15, ((MR_Box) (check_hlds__format_call__ListVar_9)), &check_hlds__format_call__conv1_EqvVar_16);
        }
#line 540 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 540 "format_call.m"
          {
#line 540 "format_call.m"
            check_hlds__format_call__EqvVar_16 = ((MR_Word) check_hlds__format_call__conv1_EqvVar_16);
#line 540 "format_call.m"
            check_hlds__format_call__succeeded = MR_TRUE;
#line 540 "format_call.m"
          }
#line 542 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 541 "format_call.m"
          {
#line 541 "format_call.m"
            /* direct tailcall eliminated */
#line 541 "format_call.m"
            {
#line 541 "format_call.m"
              MR_Word check_hlds__format_call__ListVar__tmp_copy_9 = check_hlds__format_call__EqvVar_16;

#line 541 "format_call.m"
              check_hlds__format_call__ListVar_9 = check_hlds__format_call__ListVar__tmp_copy_9;
#line 541 "format_call.m"
            }
#line 541 "format_call.m"
            continue;
#line 541 "format_call.m"
          }
#line 542 "format_call.m"
        else
#line 562 "format_call.m"
          {
#line 562 "format_call.m"
            MR_Word check_hlds__format_call__ListState_17;
#line 542 "format_call.m"
            MR_Box check_hlds__format_call__conv2_ListState_17;

#line 542 "format_call.m"
            {
#line 542 "format_call.m"
              check_hlds__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_list_skeleton_state_0, check_hlds__format_call__ListMap_13, ((MR_Box) (check_hlds__format_call__ListVar_9)), &check_hlds__format_call__conv2_ListState_17);
            }
#line 542 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 542 "format_call.m"
              {
#line 542 "format_call.m"
                check_hlds__format_call__ListState_17 = ((MR_Word) check_hlds__format_call__conv2_ListState_17);
#line 542 "format_call.m"
                check_hlds__format_call__succeeded = MR_TRUE;
#line 542 "format_call.m"
              }
#line 562 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 546 "format_call.m"
              if ((check_hlds__format_call__ListState_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "format_call.m"
                {
#line 544 "format_call.m"
                  MR_Word check_hlds__format_call__V_27_27;

#line 545 "format_call.m"
                  {
#line 545 "format_call.m"
                    check_hlds__format_call__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "format_call.m"
                    MR_hl_field(MR_mktag(1), check_hlds__format_call__V_27_27, 0) = ((MR_Box) (check_hlds__format_call__ListVar_9));
#line 545 "format_call.m"
                    MR_hl_field(MR_mktag(1), check_hlds__format_call__V_27_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "format_call.m"
                  }
#line 545 "format_call.m"
                  {
#line 545 "format_call.m"
                    MR_Word base;
#line 545 "format_call.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 545 "format_call.m"
                    *check_hlds__format_call__Result_10 = base;
#line 545 "format_call.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "format_call.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__format_call__V_27_27));
#line 545 "format_call.m"
                  }
#line 544 "format_call.m"
                }
#line 546 "format_call.m"
              else
#line 547 "format_call.m"
                {
#line 547 "format_call.m"
                  MR_Word check_hlds__format_call__HeadVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ListState_17, (MR_Integer) 0)));
#line 547 "format_call.m"
                  MR_Word check_hlds__format_call__TailVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__ListState_17, (MR_Integer) 1)));
#line 547 "format_call.m"
                  MR_Word check_hlds__format_call__TailResult_20;

#line 548 "format_call.m"
                  {
#line 548 "format_call.m"
                    check_hlds__format_call__follow_list_skeleton_5_p_0(check_hlds__format_call__ConjMaps_6, check_hlds__format_call__PredMap_7, check_hlds__format_call__CurId_8, check_hlds__format_call__TailVar_19, &check_hlds__format_call__TailResult_20);
                  }
#line 553 "format_call.m"
                  if ((check_hlds__format_call__TailResult_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "format_call.m"
                    *check_hlds__format_call__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 553 "format_call.m"
                  else
#line 555 "format_call.m"
                    {
#line 555 "format_call.m"
                      MR_Word check_hlds__format_call__TailPolytypeVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__TailResult_20, (MR_Integer) 0)));
#line 555 "format_call.m"
                      MR_Word check_hlds__format_call__TailSkeletonVars_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__TailResult_20, (MR_Integer) 1)));
#line 555 "format_call.m"
                      MR_Word check_hlds__format_call__PolytypeVars_23;
#line 555 "format_call.m"
                      MR_Word check_hlds__format_call__SkeletonVars_24;

#line 556 "format_call.m"
                      {
#line 556 "format_call.m"
                        check_hlds__format_call__PolytypeVars_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__format_call__PolytypeVars_23, 0) = ((MR_Box) (check_hlds__format_call__HeadVar_18));
#line 556 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__format_call__PolytypeVars_23, 1) = ((MR_Box) (check_hlds__format_call__TailPolytypeVars_21));
#line 556 "format_call.m"
                      }
#line 557 "format_call.m"
                      {
#line 557 "format_call.m"
                        check_hlds__format_call__SkeletonVars_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__format_call__SkeletonVars_24, 0) = ((MR_Box) (check_hlds__format_call__TailVar_19));
#line 557 "format_call.m"
                        MR_hl_field(MR_mktag(1), check_hlds__format_call__SkeletonVars_24, 1) = ((MR_Box) (check_hlds__format_call__TailSkeletonVars_22));
#line 557 "format_call.m"
                      }
#line 558 "format_call.m"
                      {
#line 558 "format_call.m"
                        MR_Word base;
#line 558 "format_call.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "format_call.m"
                        *check_hlds__format_call__Result_10 = base;
#line 558 "format_call.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__PolytypeVars_23));
#line 558 "format_call.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__format_call__SkeletonVars_24));
#line 558 "format_call.m"
                      }
#line 555 "format_call.m"
                    }
#line 547 "format_call.m"
                }
#line 562 "format_call.m"
            else
#line 564 "format_call.m"
              {
#line 564 "format_call.m"
                MR_Word check_hlds__format_call__PredId_25;
#line 562 "format_call.m"
                MR_Word check_hlds__format_call__TypeCtorInfo_32_32 = (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0;
#line 562 "format_call.m"
                MR_Box check_hlds__format_call__conv3_PredId_25;

#line 562 "format_call.m"
                {
#line 562 "format_call.m"
                  check_hlds__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__format_call__TypeCtorInfo_32_32, check_hlds__format_call__TypeCtorInfo_32_32, check_hlds__format_call__PredMap_7, ((MR_Box) (check_hlds__format_call__CurId_8)), &check_hlds__format_call__conv3_PredId_25);
                }
#line 562 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 562 "format_call.m"
                  {
#line 562 "format_call.m"
                    check_hlds__format_call__PredId_25 = ((MR_Word) check_hlds__format_call__conv3_PredId_25);
#line 562 "format_call.m"
                    check_hlds__format_call__succeeded = MR_TRUE;
#line 562 "format_call.m"
                  }
#line 564 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 563 "format_call.m"
                  {
#line 563 "format_call.m"
                    /* direct tailcall eliminated */
#line 563 "format_call.m"
                    {
#line 563 "format_call.m"
                      MR_Word check_hlds__format_call__CurId__tmp_copy_8 = check_hlds__format_call__PredId_25;

#line 563 "format_call.m"
                      check_hlds__format_call__CurId_8 = check_hlds__format_call__CurId__tmp_copy_8;
#line 563 "format_call.m"
                    }
#line 563 "format_call.m"
                    continue;
#line 563 "format_call.m"
                  }
#line 564 "format_call.m"
                else
#line 565 "format_call.m"
                  *check_hlds__format_call__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 564 "format_call.m"
              }
#line 562 "format_call.m"
          }
#line 537 "format_call.m"
      }
#line 537 "format_call.m"
      break;
#line 537 "format_call.m"
    }
#line 534 "format_call.m"
}

#line 511 "format_call.m"
static void MR_CALL 
check_hlds__format_call__follow_format_string_5_p_0(
#line 511 "format_call.m"
  MR_Word check_hlds__format_call__ConjMaps_6,
#line 511 "format_call.m"
  MR_Word check_hlds__format_call__PredMap_7,
#line 511 "format_call.m"
  MR_Word check_hlds__format_call__CurId_8,
#line 511 "format_call.m"
  MR_Word check_hlds__format_call__StringVar_9,
#line 511 "format_call.m"
  MR_Word * check_hlds__format_call__MaybeString_10)
#line 511 "format_call.m"
{
#line 514 "format_call.m"
  while (MR_TRUE)
#line 514 "format_call.m"
    {
#line 514 "format_call.m"
      /* tailcall optimized into a loop */
#line 514 "format_call.m"
      {
#line 514 "format_call.m"
        MR_bool check_hlds__format_call__succeeded;
#line 514 "format_call.m"
        MR_Word check_hlds__format_call__ConjMap_11;
#line 514 "format_call.m"
        MR_Word check_hlds__format_call__StringMap_12;
#line 514 "format_call.m"
        MR_Word check_hlds__format_call__EqvMap_15;
#line 873 "format_call.m"
        MR_Word check_hlds__format_call__ConjMapPrime_26;
#line 871 "format_call.m"
        MR_Box check_hlds__format_call__conv0_ConjMapPrime_26;
#line 516 "format_call.m"
        MR_Word check_hlds__format_call__V_13_13;
#line 516 "format_call.m"
        MR_Word check_hlds__format_call__V_14_14;
#line 519 "format_call.m"
        MR_Word check_hlds__format_call__EqvVar_16;
#line 517 "format_call.m"
        MR_Word check_hlds__format_call__TypeInfo_19_19;
#line 517 "format_call.m"
        MR_Box check_hlds__format_call__conv1_EqvVar_16;

#line 871 "format_call.m"
        {
#line 871 "format_call.m"
          check_hlds__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_map_0, check_hlds__format_call__ConjMaps_6, ((MR_Box) (check_hlds__format_call__CurId_8)), &check_hlds__format_call__conv0_ConjMapPrime_26);
        }
#line 871 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 871 "format_call.m"
          {
#line 871 "format_call.m"
            check_hlds__format_call__ConjMapPrime_26 = ((MR_Word) check_hlds__format_call__conv0_ConjMapPrime_26);
#line 871 "format_call.m"
            check_hlds__format_call__succeeded = MR_TRUE;
#line 871 "format_call.m"
          }
#line 873 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 872 "format_call.m"
          check_hlds__format_call__ConjMap_11 = check_hlds__format_call__ConjMapPrime_26;
#line 873 "format_call.m"
        else
#line 874 "format_call.m"
          {
#line 874 "format_call.m"
            MR_Word check_hlds__format_call__TypeInfo_14_33 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 874 "format_call.m"
            MR_Word check_hlds__format_call__V_27_27;
#line 874 "format_call.m"
            MR_Word check_hlds__format_call__V_28_28;
#line 874 "format_call.m"
            MR_Word check_hlds__format_call__V_29_29;
#line 874 "format_call.m"
            MR_Word check_hlds__format_call__V_30_30;

#line 874 "format_call.m"
            {
#line 874 "format_call.m"
              check_hlds__format_call__V_27_27 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_33, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
            }
#line 874 "format_call.m"
            {
#line 874 "format_call.m"
              check_hlds__format_call__V_28_28 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_33, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_list_skeleton_state_0);
            }
#line 874 "format_call.m"
            {
#line 874 "format_call.m"
              check_hlds__format_call__V_29_29 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_33, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0);
            }
#line 874 "format_call.m"
            {
#line 874 "format_call.m"
              check_hlds__format_call__V_30_30 = mercury__map__init_0_f_0(check_hlds__format_call__TypeInfo_14_33, check_hlds__format_call__TypeInfo_14_33);
            }
#line 874 "format_call.m"
            {
#line 874 "format_call.m"
              check_hlds__format_call__ConjMap_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 874 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, 0) = ((MR_Box) (check_hlds__format_call__V_27_27));
#line 874 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, 1) = ((MR_Box) (check_hlds__format_call__V_28_28));
#line 874 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, 2) = ((MR_Box) (check_hlds__format_call__V_29_29));
#line 874 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, 3) = ((MR_Box) (check_hlds__format_call__V_30_30));
#line 874 "format_call.m"
            }
#line 874 "format_call.m"
          }
#line 516 "format_call.m"
        check_hlds__format_call__StringMap_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, (MR_Integer) 0)));
#line 516 "format_call.m"
        check_hlds__format_call__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, (MR_Integer) 1)));
#line 516 "format_call.m"
        check_hlds__format_call__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, (MR_Integer) 2)));
#line 516 "format_call.m"
        check_hlds__format_call__EqvMap_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__ConjMap_11, (MR_Integer) 3)));
#line 12765 "check_hlds.format_call.c"
        check_hlds__format_call__TypeInfo_19_19 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 517 "format_call.m"
        {
#line 517 "format_call.m"
          check_hlds__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__format_call__TypeInfo_19_19, check_hlds__format_call__TypeInfo_19_19, check_hlds__format_call__EqvMap_15, ((MR_Box) (check_hlds__format_call__StringVar_9)), &check_hlds__format_call__conv1_EqvVar_16);
        }
#line 517 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 517 "format_call.m"
          {
#line 517 "format_call.m"
            check_hlds__format_call__EqvVar_16 = ((MR_Word) check_hlds__format_call__conv1_EqvVar_16);
#line 517 "format_call.m"
            check_hlds__format_call__succeeded = MR_TRUE;
#line 517 "format_call.m"
          }
#line 519 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 518 "format_call.m"
          {
#line 518 "format_call.m"
            /* direct tailcall eliminated */
#line 518 "format_call.m"
            {
#line 518 "format_call.m"
              MR_Word check_hlds__format_call__StringVar__tmp_copy_9 = check_hlds__format_call__EqvVar_16;

#line 518 "format_call.m"
              check_hlds__format_call__StringVar_9 = check_hlds__format_call__StringVar__tmp_copy_9;
#line 518 "format_call.m"
            }
#line 518 "format_call.m"
            continue;
#line 518 "format_call.m"
          }
#line 519 "format_call.m"
        else
#line 521 "format_call.m"
          {
#line 521 "format_call.m"
            MR_String check_hlds__format_call__String_17;
#line 519 "format_call.m"
            MR_Box check_hlds__format_call__conv2_String_17;

#line 519 "format_call.m"
            {
#line 519 "format_call.m"
              check_hlds__format_call__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__format_call__StringMap_12, ((MR_Box) (check_hlds__format_call__StringVar_9)), &check_hlds__format_call__conv2_String_17);
            }
#line 519 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 519 "format_call.m"
              {
#line 519 "format_call.m"
                check_hlds__format_call__String_17 = ((MR_String) check_hlds__format_call__conv2_String_17);
#line 519 "format_call.m"
                check_hlds__format_call__succeeded = MR_TRUE;
#line 519 "format_call.m"
              }
#line 521 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 520 "format_call.m"
              {
#line 520 "format_call.m"
                MR_Word base;
#line 520 "format_call.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 520 "format_call.m"
                *check_hlds__format_call__MaybeString_10 = base;
#line 520 "format_call.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__String_17));
#line 520 "format_call.m"
              }
#line 521 "format_call.m"
            else
#line 523 "format_call.m"
              {
#line 523 "format_call.m"
                MR_Word check_hlds__format_call__PredId_18;
#line 521 "format_call.m"
                MR_Word check_hlds__format_call__TypeCtorInfo_22_22 = (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0;
#line 521 "format_call.m"
                MR_Box check_hlds__format_call__conv3_PredId_18;

#line 521 "format_call.m"
                {
#line 521 "format_call.m"
                  check_hlds__format_call__succeeded = mercury__map__search_3_p_0(check_hlds__format_call__TypeCtorInfo_22_22, check_hlds__format_call__TypeCtorInfo_22_22, check_hlds__format_call__PredMap_7, ((MR_Box) (check_hlds__format_call__CurId_8)), &check_hlds__format_call__conv3_PredId_18);
                }
#line 521 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 521 "format_call.m"
                  {
#line 521 "format_call.m"
                    check_hlds__format_call__PredId_18 = ((MR_Word) check_hlds__format_call__conv3_PredId_18);
#line 521 "format_call.m"
                    check_hlds__format_call__succeeded = MR_TRUE;
#line 521 "format_call.m"
                  }
#line 523 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 522 "format_call.m"
                  {
#line 522 "format_call.m"
                    /* direct tailcall eliminated */
#line 522 "format_call.m"
                    {
#line 522 "format_call.m"
                      MR_Word check_hlds__format_call__CurId__tmp_copy_8 = check_hlds__format_call__PredId_18;

#line 522 "format_call.m"
                      check_hlds__format_call__CurId_8 = check_hlds__format_call__CurId__tmp_copy_8;
#line 522 "format_call.m"
                    }
#line 522 "format_call.m"
                    continue;
#line 522 "format_call.m"
                  }
#line 523 "format_call.m"
                else
#line 524 "format_call.m"
                  *check_hlds__format_call__MaybeString_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 523 "format_call.m"
              }
#line 521 "format_call.m"
          }
#line 514 "format_call.m"
      }
#line 514 "format_call.m"
      break;
#line 514 "format_call.m"
    }
#line 511 "format_call.m"
}

#line 461 "format_call.m"
static MR_Box MR_CALL 
check_hlds__format_call__try_create_replacement_goal_13_p_0_1(
#line 461 "format_call.m"
  MR_Box check_hlds__format_call__closure_arg,
#line 461 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_1)
#line 461 "format_call.m"
{
#line 461 "format_call.m"
  {
#line 461 "format_call.m"
    MR_Box check_hlds__format_call__wrapper_arg_2;
#line 461 "format_call.m"
    MR_Box check_hlds__format_call__closure = check_hlds__format_call__closure_arg;
#line 461 "format_call.m"
    MR_Word check_hlds__format_call__conv0_VarToPrint_3;

#line 461 "format_call.m"
    {
#line 461 "format_call.m"
      check_hlds__format_call__conv0_VarToPrint_3 = check_hlds__format_call__project_var_to_print_1_f_0(((MR_Word) check_hlds__format_call__wrapper_arg_1));
    }
#line 461 "format_call.m"
    check_hlds__format_call__wrapper_arg_2 = ((MR_Box) (check_hlds__format_call__conv0_VarToPrint_3));
#line 461 "format_call.m"
    return check_hlds__format_call__wrapper_arg_2;
#line 461 "format_call.m"
  }
#line 461 "format_call.m"
}

#line 451 "format_call.m"
static void MR_CALL 
check_hlds__format_call__try_create_replacement_goal_13_p_0(
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_14,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__GoalId_15,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__Kind_16,
#line 451 "format_call.m"
  MR_String check_hlds__format_call__FormatString_17,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__StringVar_18,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__ValuesToDeleteVars_19,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__WhatToPrints_20,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_38,
#line 451 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_GoalIdMap_39,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_0_40,
#line 451 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarSet_41,
#line 451 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_0_42,
#line 451 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarTypes_43)
#line 451 "format_call.m"
{
#line 459 "format_call.m"
  {
#line 459 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 459 "format_call.m"
    MR_Word check_hlds__format_call__FormatStringChars_24;
#line 459 "format_call.m"
    MR_Word check_hlds__format_call__VarsToPrint_25;

#line 460 "format_call.m"
    {
#line 460 "format_call.m"
      mercury__string__to_char_list_2_p_0(check_hlds__format_call__FormatString_17, &check_hlds__format_call__FormatStringChars_24);
    }
#line 461 "format_call.m"
    {
#line 461 "format_call.m"
      check_hlds__format_call__VarsToPrint_25 = mercury__list__map_2_f_0((MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0, (MR_Word) &check_hlds__format_call_scalar_common_2[2], (MR_Word) &check_hlds__format_call_scalar_common_1[8], check_hlds__format_call__WhatToPrints_20);
    }
#line 483 "format_call.m"
    if (((MR_tag((MR_Word) check_hlds__format_call__Kind_16)) == (MR_mktag((MR_Integer) 1))))
#line 490 "format_call.m"
      {
#line 490 "format_call.m"
        MR_Word check_hlds__format_call__IOInVar_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Kind_16, (MR_Integer) 0)));
#line 490 "format_call.m"
        MR_Word check_hlds__format_call__IOOutVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Kind_16, (MR_Integer) 1)));
#line 500 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_45_45;
#line 500 "format_call.m"
        MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_46_46;
#line 500 "format_call.m"
        MR_Word check_hlds__format_call__ReplacementGoal_59;

#line 492 "format_call.m"
        {
#line 492 "format_call.m"
          check_hlds__format_call__succeeded = check_hlds__format_call__create_io_format_replacement_11_p_0(check_hlds__format_call__ModuleInfo_14, check_hlds__format_call__FormatStringChars_24, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__format_call__IOInVar_30, check_hlds__format_call__IOOutVar_31, check_hlds__format_call__VarsToPrint_25, &check_hlds__format_call__ReplacementGoal_59, check_hlds__format_call__STATE_VARIABLE_VarSet_0_40, &check_hlds__format_call__STATE_VARIABLE_VarSet_45_45, check_hlds__format_call__STATE_VARIABLE_VarTypes_0_42, &check_hlds__format_call__STATE_VARIABLE_VarTypes_46_46);
        }
#line 500 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 496 "format_call.m"
          {
#line 496 "format_call.m"
            MR_Word check_hlds__format_call__V_47_47;
#line 496 "format_call.m"
            MR_Word check_hlds__format_call__AllToDeleteVars_57;
#line 496 "format_call.m"
            MR_Word check_hlds__format_call__FCOptGoalInfo_58;

#line 496 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_VarTypes_43 = check_hlds__format_call__STATE_VARIABLE_VarTypes_46_46;
#line 496 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_VarSet_41 = check_hlds__format_call__STATE_VARIABLE_VarSet_45_45;
#line 496 "format_call.m"
            {
#line 496 "format_call.m"
              check_hlds__format_call__AllToDeleteVars_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__AllToDeleteVars_57, 0) = ((MR_Box) (check_hlds__format_call__StringVar_18));
#line 496 "format_call.m"
              MR_hl_field(MR_mktag(1), check_hlds__format_call__AllToDeleteVars_57, 1) = ((MR_Box) (check_hlds__format_call__ValuesToDeleteVars_19));
#line 496 "format_call.m"
            }
#line 497 "format_call.m"
            {
#line 497 "format_call.m"
              check_hlds__format_call__V_47_47 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__format_call__AllToDeleteVars_57);
            }
#line 497 "format_call.m"
            {
#line 497 "format_call.m"
              check_hlds__format_call__FCOptGoalInfo_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 497 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__FCOptGoalInfo_58, 0) = ((MR_Box) (check_hlds__format_call__ReplacementGoal_59));
#line 497 "format_call.m"
              MR_hl_field(MR_mktag(0), check_hlds__format_call__FCOptGoalInfo_58, 1) = ((MR_Box) (check_hlds__format_call__V_47_47));
#line 497 "format_call.m"
            }
#line 499 "format_call.m"
            {
#line 499 "format_call.m"
              mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0, ((MR_Box) (check_hlds__format_call__GoalId_15)), ((MR_Box) (check_hlds__format_call__FCOptGoalInfo_58)), check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_38, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_39);
#line 499 "format_call.m"
              return;
            }
#line 496 "format_call.m"
          }
#line 500 "format_call.m"
        else
#line 504 "format_call.m"
          {
#line 504 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_VarTypes_43 = check_hlds__format_call__STATE_VARIABLE_VarTypes_0_42;
#line 504 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_VarSet_41 = check_hlds__format_call__STATE_VARIABLE_VarSet_0_40;
#line 504 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_GoalIdMap_39 = check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_38;
#line 504 "format_call.m"
          }
#line 490 "format_call.m"
      }
#line 483 "format_call.m"
    else
#line 483 "format_call.m"
      if (((MR_tag((MR_Word) check_hlds__format_call__Kind_16)) == (MR_mktag((MR_Integer) 2))))
#line 490 "format_call.m"
        {
#line 490 "format_call.m"
          MR_Word check_hlds__format_call__StreamVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__Kind_16, (MR_Integer) 0)));
#line 490 "format_call.m"
          MR_Word check_hlds__format_call__IOInVar_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__Kind_16, (MR_Integer) 1)));
#line 490 "format_call.m"
          MR_Word check_hlds__format_call__IOOutVar_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__Kind_16, (MR_Integer) 2)));
#line 490 "format_call.m"
          MR_Word check_hlds__format_call__MaybeStreamVar_92;
#line 500 "format_call.m"
          MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_45_81;
#line 500 "format_call.m"
          MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_46_82;
#line 500 "format_call.m"
          MR_Word check_hlds__format_call__ReplacementGoal_86;

#line 489 "format_call.m"
          {
#line 489 "format_call.m"
            check_hlds__format_call__MaybeStreamVar_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 489 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__format_call__MaybeStreamVar_92, 0) = ((MR_Box) (check_hlds__format_call__StreamVar_33));
#line 489 "format_call.m"
          }
#line 492 "format_call.m"
          {
#line 492 "format_call.m"
            check_hlds__format_call__succeeded = check_hlds__format_call__create_io_format_replacement_11_p_0(check_hlds__format_call__ModuleInfo_14, check_hlds__format_call__FormatStringChars_24, check_hlds__format_call__MaybeStreamVar_92, check_hlds__format_call__IOInVar_90, check_hlds__format_call__IOOutVar_91, check_hlds__format_call__VarsToPrint_25, &check_hlds__format_call__ReplacementGoal_86, check_hlds__format_call__STATE_VARIABLE_VarSet_0_40, &check_hlds__format_call__STATE_VARIABLE_VarSet_45_81, check_hlds__format_call__STATE_VARIABLE_VarTypes_0_42, &check_hlds__format_call__STATE_VARIABLE_VarTypes_46_82);
          }
#line 500 "format_call.m"
          if (check_hlds__format_call__succeeded)
#line 496 "format_call.m"
            {
#line 496 "format_call.m"
              MR_Word check_hlds__format_call__V_75_75;
#line 496 "format_call.m"
              MR_Word check_hlds__format_call__AllToDeleteVars_76;
#line 496 "format_call.m"
              MR_Word check_hlds__format_call__FCOptGoalInfo_77;

#line 496 "format_call.m"
              *check_hlds__format_call__STATE_VARIABLE_VarTypes_43 = check_hlds__format_call__STATE_VARIABLE_VarTypes_46_82;
#line 496 "format_call.m"
              *check_hlds__format_call__STATE_VARIABLE_VarSet_41 = check_hlds__format_call__STATE_VARIABLE_VarSet_45_81;
#line 496 "format_call.m"
              {
#line 496 "format_call.m"
                check_hlds__format_call__AllToDeleteVars_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__format_call__AllToDeleteVars_76, 0) = ((MR_Box) (check_hlds__format_call__StringVar_18));
#line 496 "format_call.m"
                MR_hl_field(MR_mktag(1), check_hlds__format_call__AllToDeleteVars_76, 1) = ((MR_Box) (check_hlds__format_call__ValuesToDeleteVars_19));
#line 496 "format_call.m"
              }
#line 497 "format_call.m"
              {
#line 497 "format_call.m"
                check_hlds__format_call__V_75_75 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__format_call__AllToDeleteVars_76);
              }
#line 497 "format_call.m"
              {
#line 497 "format_call.m"
                check_hlds__format_call__FCOptGoalInfo_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 497 "format_call.m"
                MR_hl_field(MR_mktag(0), check_hlds__format_call__FCOptGoalInfo_77, 0) = ((MR_Box) (check_hlds__format_call__ReplacementGoal_86));
#line 497 "format_call.m"
                MR_hl_field(MR_mktag(0), check_hlds__format_call__FCOptGoalInfo_77, 1) = ((MR_Box) (check_hlds__format_call__V_75_75));
#line 497 "format_call.m"
              }
#line 499 "format_call.m"
              {
#line 499 "format_call.m"
                mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0, ((MR_Box) (check_hlds__format_call__GoalId_15)), ((MR_Box) (check_hlds__format_call__FCOptGoalInfo_77)), check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_38, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_39);
#line 499 "format_call.m"
                return;
              }
#line 496 "format_call.m"
            }
#line 500 "format_call.m"
          else
#line 504 "format_call.m"
            {
#line 504 "format_call.m"
              *check_hlds__format_call__STATE_VARIABLE_VarTypes_43 = check_hlds__format_call__STATE_VARIABLE_VarTypes_0_42;
#line 504 "format_call.m"
              *check_hlds__format_call__STATE_VARIABLE_VarSet_41 = check_hlds__format_call__STATE_VARIABLE_VarSet_0_40;
#line 504 "format_call.m"
              *check_hlds__format_call__STATE_VARIABLE_GoalIdMap_39 = check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_38;
#line 504 "format_call.m"
            }
#line 490 "format_call.m"
        }
#line 483 "format_call.m"
      else
#line 483 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__format_call__Kind_16)) == (MR_mktag((MR_Integer) 3))))
#line 507 "format_call.m"
          {
#line 507 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_GoalIdMap_39 = check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_38;
#line 507 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_VarSet_41 = check_hlds__format_call__STATE_VARIABLE_VarSet_0_40;
#line 507 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_VarTypes_43 = check_hlds__format_call__STATE_VARIABLE_VarTypes_0_42;
#line 507 "format_call.m"
          }
#line 483 "format_call.m"
        else
#line 467 "format_call.m"
          {
#line 467 "format_call.m"
            MR_Word check_hlds__format_call__ResultVar_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Kind_16, (MR_Integer) 0)));
#line 477 "format_call.m"
            MR_Word check_hlds__format_call__ReplacementGoal_27;
#line 477 "format_call.m"
            MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_51_51;
#line 477 "format_call.m"
            MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_52_52;

#line 469 "format_call.m"
            {
#line 469 "format_call.m"
              check_hlds__format_call__succeeded = check_hlds__format_call__create_string_format_replacement_9_p_0(check_hlds__format_call__ModuleInfo_14, check_hlds__format_call__FormatStringChars_24, check_hlds__format_call__ResultVar_26, check_hlds__format_call__VarsToPrint_25, &check_hlds__format_call__ReplacementGoal_27, check_hlds__format_call__STATE_VARIABLE_VarSet_0_40, &check_hlds__format_call__STATE_VARIABLE_VarSet_51_51, check_hlds__format_call__STATE_VARIABLE_VarTypes_0_42, &check_hlds__format_call__STATE_VARIABLE_VarTypes_52_52);
            }
#line 477 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 473 "format_call.m"
              {
#line 473 "format_call.m"
                MR_Word check_hlds__format_call__AllToDeleteVars_28;
#line 473 "format_call.m"
                MR_Word check_hlds__format_call__FCOptGoalInfo_29;
#line 473 "format_call.m"
                MR_Word check_hlds__format_call__V_53_53;

#line 473 "format_call.m"
                *check_hlds__format_call__STATE_VARIABLE_VarTypes_43 = check_hlds__format_call__STATE_VARIABLE_VarTypes_52_52;
#line 473 "format_call.m"
                *check_hlds__format_call__STATE_VARIABLE_VarSet_41 = check_hlds__format_call__STATE_VARIABLE_VarSet_51_51;
#line 473 "format_call.m"
                {
#line 473 "format_call.m"
                  check_hlds__format_call__AllToDeleteVars_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__AllToDeleteVars_28, 0) = ((MR_Box) (check_hlds__format_call__StringVar_18));
#line 473 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__AllToDeleteVars_28, 1) = ((MR_Box) (check_hlds__format_call__ValuesToDeleteVars_19));
#line 473 "format_call.m"
                }
#line 474 "format_call.m"
                {
#line 474 "format_call.m"
                  check_hlds__format_call__V_53_53 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__format_call__AllToDeleteVars_28);
                }
#line 474 "format_call.m"
                {
#line 474 "format_call.m"
                  check_hlds__format_call__FCOptGoalInfo_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 474 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__format_call__FCOptGoalInfo_29, 0) = ((MR_Box) (check_hlds__format_call__ReplacementGoal_27));
#line 474 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__format_call__FCOptGoalInfo_29, 1) = ((MR_Box) (check_hlds__format_call__V_53_53));
#line 474 "format_call.m"
                }
#line 476 "format_call.m"
                {
#line 476 "format_call.m"
                  mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0, ((MR_Box) (check_hlds__format_call__GoalId_15)), ((MR_Box) (check_hlds__format_call__FCOptGoalInfo_29)), check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_38, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_39);
#line 476 "format_call.m"
                  return;
                }
#line 473 "format_call.m"
              }
#line 477 "format_call.m"
            else
#line 481 "format_call.m"
              {
#line 481 "format_call.m"
                *check_hlds__format_call__STATE_VARIABLE_VarTypes_43 = check_hlds__format_call__STATE_VARIABLE_VarTypes_0_42;
#line 481 "format_call.m"
                *check_hlds__format_call__STATE_VARIABLE_VarSet_41 = check_hlds__format_call__STATE_VARIABLE_VarSet_0_40;
#line 481 "format_call.m"
                *check_hlds__format_call__STATE_VARIABLE_GoalIdMap_39 = check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_38;
#line 481 "format_call.m"
              }
#line 467 "format_call.m"
          }
#line 459 "format_call.m"
  }
#line 451 "format_call.m"
}

#line 404 "format_call.m"
static void MR_CALL 
check_hlds__format_call__check_format_call_site_13_p_0_3(
#line 404 "format_call.m"
  MR_Box check_hlds__format_call__closure_arg,
#line 404 "format_call.m"
  MR_Box * check_hlds__format_call__wrapper_arg_1)
#line 404 "format_call.m"
{
#line 404 "format_call.m"
  {
#line 404 "format_call.m"
    MR_Box check_hlds__format_call__closure = check_hlds__format_call__closure_arg;
#line 404 "format_call.m"
    MR_String check_hlds__format_call__conv2_HeadVar__3_3;

#line 404 "format_call.m"
    {
#line 404 "format_call.m"
      mercury__string__format_3_p_0(((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__format_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__closure, (MR_Integer) 4))), &check_hlds__format_call__conv2_HeadVar__3_3);
    }
#line 404 "format_call.m"
    *check_hlds__format_call__wrapper_arg_1 = ((MR_Box) (check_hlds__format_call__conv2_HeadVar__3_3));
#line 404 "format_call.m"
  }
#line 404 "format_call.m"
}

#line 402 "format_call.m"
static MR_Box MR_CALL 
check_hlds__format_call__check_format_call_site_13_p_0_2(
#line 402 "format_call.m"
  MR_Box check_hlds__format_call__closure_arg,
#line 402 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_1)
#line 402 "format_call.m"
{
#line 402 "format_call.m"
  {
#line 402 "format_call.m"
    MR_Box check_hlds__format_call__wrapper_arg_2;
#line 402 "format_call.m"
    MR_Box check_hlds__format_call__closure = check_hlds__format_call__closure_arg;
#line 402 "format_call.m"
    MR_Word check_hlds__format_call__conv1_DummyToPrint_4;

#line 402 "format_call.m"
    {
#line 402 "format_call.m"
      check_hlds__format_call__conv1_DummyToPrint_4 = check_hlds__format_call__project_dummy_to_print_1_f_0(((MR_Word) check_hlds__format_call__wrapper_arg_1));
    }
#line 402 "format_call.m"
    check_hlds__format_call__wrapper_arg_2 = ((MR_Box) (check_hlds__format_call__conv1_DummyToPrint_4));
#line 402 "format_call.m"
    return check_hlds__format_call__wrapper_arg_2;
#line 402 "format_call.m"
  }
#line 402 "format_call.m"
}

#line 376 "format_call.m"
static void MR_CALL 
check_hlds__format_call__check_format_call_site_13_p_0_1(
#line 376 "format_call.m"
  MR_Box check_hlds__format_call__closure_arg,
#line 376 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 376 "format_call.m"
  MR_Box * check_hlds__format_call__wrapper_arg_2)
#line 376 "format_call.m"
{
#line 376 "format_call.m"
  {
#line 376 "format_call.m"
    MR_Box check_hlds__format_call__closure = check_hlds__format_call__closure_arg;
#line 376 "format_call.m"
    MR_Word check_hlds__format_call__conv0_MaybeResult_10;

#line 376 "format_call.m"
    {
#line 376 "format_call.m"
      check_hlds__format_call__follow_list_value_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__closure, (MR_Integer) 5))), ((MR_Word) check_hlds__format_call__wrapper_arg_1), &check_hlds__format_call__conv0_MaybeResult_10);
    }
#line 376 "format_call.m"
    *check_hlds__format_call__wrapper_arg_2 = ((MR_Box) (check_hlds__format_call__conv0_MaybeResult_10));
#line 376 "format_call.m"
  }
#line 376 "format_call.m"
}

#line 339 "format_call.m"
static void MR_CALL 
check_hlds__format_call__check_format_call_site_13_p_0(
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_14,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__OptFormatCalls_15,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__ConjMaps_16,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__PredMap_17,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__FormatCallSite_18,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_67,
#line 339 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_GoalIdMap_68,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_Specs_0_69,
#line 339 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_Specs_70,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_0_71,
#line 339 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarSet_72,
#line 339 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_0_73,
#line 339 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarTypes_74)
#line 339 "format_call.m"
{
#line 346 "format_call.m"
  {
#line 346 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 346 "format_call.m"
    MR_Word check_hlds__format_call__GoalId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_18, (MR_Integer) 0)));
#line 346 "format_call.m"
    MR_Word check_hlds__format_call__StringVar_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_18, (MR_Integer) 1)));
#line 346 "format_call.m"
    MR_Word check_hlds__format_call__ValuesVar_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_18, (MR_Integer) 2)));
#line 346 "format_call.m"
    MR_Word check_hlds__format_call__Kind_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_18, (MR_Integer) 3)));
#line 346 "format_call.m"
    MR_Word check_hlds__format_call__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_18, (MR_Integer) 4)));
#line 346 "format_call.m"
    MR_String check_hlds__format_call__Name_28 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_18, (MR_Integer) 5)));
#line 346 "format_call.m"
    MR_Integer check_hlds__format_call__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_18, (MR_Integer) 6)));
#line 346 "format_call.m"
    MR_Word check_hlds__format_call__Context_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_18, (MR_Integer) 7)));
#line 346 "format_call.m"
    MR_Word check_hlds__format_call__CurId_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__FormatCallSite_18, (MR_Integer) 8)));
#line 346 "format_call.m"
    MR_Word check_hlds__format_call__SymName_32;
#line 346 "format_call.m"
    MR_Word check_hlds__format_call__MaybeFormatStringVar_35;
#line 346 "format_call.m"
    MR_Word check_hlds__format_call__MaybeSkeletonInfo_46;
#line 346 "format_call.m"
    MR_Word check_hlds__format_call__STATE_VARIABLE_Specs_102_102;
#line 346 "format_call.m"
    MR_Word check_hlds__format_call__STATE_VARIABLE_Specs_132_132;
#line 357 "format_call.m"
    MR_String check_hlds__format_call__FormatString0_34;
#line 353 "format_call.m"
    MR_Word check_hlds__format_call__MaybeFormatString0_33;
#line 382 "format_call.m"
    MR_Word check_hlds__format_call__PolytypeVars0_41;
#line 382 "format_call.m"
    MR_Word check_hlds__format_call__SkeletonVars0_42;
#line 382 "format_call.m"
    MR_Word check_hlds__format_call__WhatToPrints0_44;
#line 374 "format_call.m"
    MR_Word check_hlds__format_call__TypeInfo_173_173;
#line 374 "format_call.m"
    MR_Word check_hlds__format_call__TypeInfo_174_174;
#line 374 "format_call.m"
    MR_Word check_hlds__format_call__SkeletonResult_40;
#line 374 "format_call.m"
    MR_Word check_hlds__format_call__WhatToPrintMaybes0_43;
#line 374 "format_call.m"
    MR_Word check_hlds__format_call__V_103_103;
#line 446 "format_call.m"
    MR_String check_hlds__format_call__FormatString_51;
#line 446 "format_call.m"
    MR_Word check_hlds__format_call__StringVar1_52;
#line 446 "format_call.m"
    MR_Word check_hlds__format_call__ValuesToDeleteVars_53;
#line 446 "format_call.m"
    MR_Word check_hlds__format_call__WhatToPrints_54;
#line 399 "format_call.m"
    MR_Tuple check_hlds__format_call__V_133_133;
#line 399 "format_call.m"
    MR_Tuple check_hlds__format_call__V_134_134;

#line 349 "format_call.m"
    {
#line 349 "format_call.m"
      check_hlds__format_call__SymName_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__format_call__SymName_32, 0) = ((MR_Box) (check_hlds__format_call__ModuleName_27));
#line 349 "format_call.m"
      MR_hl_field(MR_mktag(1), check_hlds__format_call__SymName_32, 1) = ((MR_Box) (check_hlds__format_call__Name_28));
#line 349 "format_call.m"
    }
#line 352 "format_call.m"
    {
#line 352 "format_call.m"
      check_hlds__format_call__follow_format_string_5_p_0(check_hlds__format_call__ConjMaps_16, check_hlds__format_call__PredMap_17, check_hlds__format_call__CurId_31, check_hlds__format_call__StringVar_24, &check_hlds__format_call__MaybeFormatString0_33);
    }
#line 354 "format_call.m"
    check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__MaybeFormatString0_33)) == (MR_mktag((MR_Integer) 1)));
#line 354 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 354 "format_call.m"
      {
#line 354 "format_call.m"
        check_hlds__format_call__FormatString0_34 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__format_call__MaybeFormatString0_33, (MR_Integer) 0)));
#line 356 "format_call.m"
        {
#line 356 "format_call.m"
          MR_Tuple check_hlds__format_call__V_75_75;

#line 356 "format_call.m"
          {
#line 356 "format_call.m"
            check_hlds__format_call__V_75_75 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 356 "format_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__format_call__V_75_75, 0) = ((MR_Box) (check_hlds__format_call__FormatString0_34));
#line 356 "format_call.m"
            MR_hl_field(MR_mktag(0), check_hlds__format_call__V_75_75, 1) = ((MR_Box) (check_hlds__format_call__StringVar_24));
#line 356 "format_call.m"
          }
#line 356 "format_call.m"
          {
#line 356 "format_call.m"
            check_hlds__format_call__MaybeFormatStringVar_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 356 "format_call.m"
            MR_hl_field(MR_mktag(1), check_hlds__format_call__MaybeFormatStringVar_35, 0) = ((MR_Box) (check_hlds__format_call__V_75_75));
#line 356 "format_call.m"
          }
#line 356 "format_call.m"
          check_hlds__format_call__STATE_VARIABLE_Specs_102_102 = check_hlds__format_call__STATE_VARIABLE_Specs_0_69;
#line 356 "format_call.m"
        }
#line 354 "format_call.m"
      }
#line 354 "format_call.m"
    else
#line 358 "format_call.m"
      {
#line 358 "format_call.m"
        MR_Word check_hlds__format_call__UnknownFormatPieces_36;
#line 358 "format_call.m"
        MR_Word check_hlds__format_call__UnknownFormatMsg_38;
#line 358 "format_call.m"
        MR_Word check_hlds__format_call__UnknownFormatSpec_39;
#line 358 "format_call.m"
        MR_Word check_hlds__format_call__V_78_78;
#line 358 "format_call.m"
        MR_Word check_hlds__format_call__V_79_79;
#line 358 "format_call.m"
        MR_Word check_hlds__format_call__V_80_80;
#line 358 "format_call.m"
        MR_Word check_hlds__format_call__V_91_91;
#line 358 "format_call.m"
        MR_Word check_hlds__format_call__V_92_92;
#line 358 "format_call.m"
        MR_Word check_hlds__format_call__V_95_95;
#line 358 "format_call.m"
        MR_Word check_hlds__format_call__V_96_96;
#line 358 "format_call.m"
        MR_Word check_hlds__format_call__V_100_100;

#line 358 "format_call.m"
        check_hlds__format_call__MaybeFormatStringVar_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 360 "format_call.m"
        {
#line 360 "format_call.m"
          check_hlds__format_call__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 360 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_80_80, 0) = ((MR_Box) (check_hlds__format_call__SymName_32));
#line 360 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_80_80, 1) = ((MR_Box) (check_hlds__format_call__Arity_29));
#line 360 "format_call.m"
        }
#line 360 "format_call.m"
        {
#line 360 "format_call.m"
          check_hlds__format_call__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "format_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__format_call__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 360 "format_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__format_call__V_79_79, 1) = ((MR_Box) (check_hlds__format_call__V_80_80));
#line 360 "format_call.m"
        }
#line 359 "format_call.m"
        {
#line 359 "format_call.m"
          check_hlds__format_call__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_78_78, 0) = ((MR_Box) (check_hlds__format_call__V_79_79));
#line 359 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__format_call_scalar_common_2[8])));
#line 359 "format_call.m"
        }
#line 359 "format_call.m"
        {
#line 359 "format_call.m"
          check_hlds__format_call__UnknownFormatPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__UnknownFormatPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__format_call_scalar_common_2[10])));
#line 359 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__UnknownFormatPieces_36, 1) = ((MR_Box) (check_hlds__format_call__V_78_78));
#line 359 "format_call.m"
        }
#line 366 "format_call.m"
        {
#line 366 "format_call.m"
          check_hlds__format_call__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 366 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_96_96, 0) = ((MR_Box) (check_hlds__format_call__UnknownFormatPieces_36));
#line 366 "format_call.m"
        }
#line 365 "format_call.m"
        {
#line 365 "format_call.m"
          check_hlds__format_call__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 365 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_95_95, 0) = ((MR_Box) (check_hlds__format_call__V_96_96));
#line 365 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "format_call.m"
        }
#line 366 "format_call.m"
        {
#line 366 "format_call.m"
          check_hlds__format_call__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_92_92, 0) = ((MR_Box) (((MR_Integer) 33 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 366 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_92_92, 1) = ((MR_Box) (check_hlds__format_call__V_95_95));
#line 366 "format_call.m"
        }
#line 364 "format_call.m"
        {
#line 364 "format_call.m"
          check_hlds__format_call__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_91_91, 0) = ((MR_Box) (check_hlds__format_call__V_92_92));
#line 364 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 364 "format_call.m"
        }
#line 364 "format_call.m"
        {
#line 364 "format_call.m"
          check_hlds__format_call__UnknownFormatMsg_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 364 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__UnknownFormatMsg_38, 0) = ((MR_Box) (check_hlds__format_call__Context_30));
#line 364 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__UnknownFormatMsg_38, 1) = ((MR_Box) (check_hlds__format_call__V_91_91));
#line 364 "format_call.m"
        }
#line 367 "format_call.m"
        {
#line 367 "format_call.m"
          check_hlds__format_call__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_100_100, 0) = ((MR_Box) (check_hlds__format_call__UnknownFormatMsg_38));
#line 367 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_100_100, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "format_call.m"
        }
#line 367 "format_call.m"
        {
#line 367 "format_call.m"
          check_hlds__format_call__UnknownFormatSpec_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 367 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__UnknownFormatSpec_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__format_call_scalar_common_3[0])));
#line 367 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__UnknownFormatSpec_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 367 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__UnknownFormatSpec_39, 2) = ((MR_Box) (check_hlds__format_call__V_100_100));
#line 367 "format_call.m"
        }
#line 369 "format_call.m"
        {
#line 369 "format_call.m"
          check_hlds__format_call__STATE_VARIABLE_Specs_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_Specs_102_102, 0) = ((MR_Box) (check_hlds__format_call__UnknownFormatSpec_39));
#line 369 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_Specs_102_102, 1) = ((MR_Box) (check_hlds__format_call__STATE_VARIABLE_Specs_0_69));
#line 369 "format_call.m"
        }
#line 358 "format_call.m"
      }
#line 373 "format_call.m"
    {
#line 373 "format_call.m"
      check_hlds__format_call__follow_list_skeleton_5_p_0(check_hlds__format_call__ConjMaps_16, check_hlds__format_call__PredMap_17, check_hlds__format_call__CurId_31, check_hlds__format_call__ValuesVar_25, &check_hlds__format_call__SkeletonResult_40);
    }
#line 375 "format_call.m"
    check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__SkeletonResult_40)) == (MR_mktag((MR_Integer) 1)));
#line 375 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 375 "format_call.m"
      {
#line 375 "format_call.m"
        check_hlds__format_call__PolytypeVars0_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__SkeletonResult_40, (MR_Integer) 0)));
#line 375 "format_call.m"
        check_hlds__format_call__SkeletonVars0_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__SkeletonResult_40, (MR_Integer) 1)));
#line 13667 "check_hlds.format_call.c"
        check_hlds__format_call__TypeInfo_173_173 = (MR_Word) &check_hlds__format_call_scalar_common_2[2];
#line 13669 "check_hlds.format_call.c"
        check_hlds__format_call__TypeInfo_174_174 = (MR_Word) &check_hlds__format_call_scalar_common_2[3];
#line 376 "format_call.m"
        {
#line 376 "format_call.m"
          check_hlds__format_call__V_103_103 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 376 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_103_103, 0) = ((MR_Box) (&check_hlds__format_call_scalar_common_6[0]));
#line 376 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_103_103, 1) = ((MR_Box) (check_hlds__format_call__check_format_call_site_13_p_0_1));
#line 376 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_103_103, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 376 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_103_103, 3) = ((MR_Box) (check_hlds__format_call__ConjMaps_16));
#line 376 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_103_103, 4) = ((MR_Box) (check_hlds__format_call__PredMap_17));
#line 376 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_103_103, 5) = ((MR_Box) (check_hlds__format_call__CurId_31));
#line 376 "format_call.m"
        }
#line 376 "format_call.m"
        {
#line 376 "format_call.m"
          mercury__list__map_3_p_0(check_hlds__format_call__TypeInfo_173_173, check_hlds__format_call__TypeInfo_174_174, check_hlds__format_call__V_103_103, check_hlds__format_call__PolytypeVars0_41, &check_hlds__format_call__WhatToPrintMaybes0_43);
        }
#line 378 "format_call.m"
        {
#line 378 "format_call.m"
          check_hlds__format_call__succeeded = check_hlds__format_call__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_106_101_99_116_95_97_108_108_95_121_101_115_95_95_91_49_93_95_48_2_p_0(check_hlds__format_call__WhatToPrintMaybes0_43, &check_hlds__format_call__WhatToPrints0_44);
        }
#line 375 "format_call.m"
      }
#line 382 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 380 "format_call.m"
      {
#line 380 "format_call.m"
        MR_Word check_hlds__format_call__ToDeleteVars0_45;
#line 380 "format_call.m"
        MR_Word check_hlds__format_call__V_104_104;
#line 380 "format_call.m"
        MR_Tuple check_hlds__format_call__V_105_105;

#line 380 "format_call.m"
        {
#line 380 "format_call.m"
          check_hlds__format_call__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_104_104, 0) = ((MR_Box) (check_hlds__format_call__ValuesVar_25));
#line 380 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_104_104, 1) = ((MR_Box) (check_hlds__format_call__SkeletonVars0_42));
#line 380 "format_call.m"
        }
#line 380 "format_call.m"
        {
#line 380 "format_call.m"
          check_hlds__format_call__ToDeleteVars0_45 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__format_call_scalar_common_2[2], check_hlds__format_call__V_104_104, check_hlds__format_call__PolytypeVars0_41);
        }
#line 381 "format_call.m"
        {
#line 381 "format_call.m"
          check_hlds__format_call__V_105_105 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 381 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_105_105, 0) = ((MR_Box) (check_hlds__format_call__ToDeleteVars0_45));
#line 381 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_105_105, 1) = ((MR_Box) (check_hlds__format_call__WhatToPrints0_44));
#line 381 "format_call.m"
        }
#line 381 "format_call.m"
        {
#line 381 "format_call.m"
          check_hlds__format_call__MaybeSkeletonInfo_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 381 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__MaybeSkeletonInfo_46, 0) = ((MR_Box) (check_hlds__format_call__V_105_105));
#line 381 "format_call.m"
        }
#line 381 "format_call.m"
        check_hlds__format_call__STATE_VARIABLE_Specs_132_132 = check_hlds__format_call__STATE_VARIABLE_Specs_102_102;
#line 380 "format_call.m"
      }
#line 382 "format_call.m"
    else
#line 383 "format_call.m"
      {
#line 383 "format_call.m"
        MR_Word check_hlds__format_call__UnknownFormatValuesPieces_47;
#line 383 "format_call.m"
        MR_Word check_hlds__format_call__UnknownFormatValuesMsg_49;
#line 383 "format_call.m"
        MR_Word check_hlds__format_call__UnknownFormatValuesSpec_50;
#line 383 "format_call.m"
        MR_Word check_hlds__format_call__V_108_108;
#line 383 "format_call.m"
        MR_Word check_hlds__format_call__V_109_109;
#line 383 "format_call.m"
        MR_Word check_hlds__format_call__V_110_110;
#line 383 "format_call.m"
        MR_Word check_hlds__format_call__V_121_121;
#line 383 "format_call.m"
        MR_Word check_hlds__format_call__V_122_122;
#line 383 "format_call.m"
        MR_Word check_hlds__format_call__V_125_125;
#line 383 "format_call.m"
        MR_Word check_hlds__format_call__V_126_126;
#line 383 "format_call.m"
        MR_Word check_hlds__format_call__V_130_130;

#line 383 "format_call.m"
        check_hlds__format_call__MaybeSkeletonInfo_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 386 "format_call.m"
        {
#line 386 "format_call.m"
          check_hlds__format_call__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 386 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_110_110, 0) = ((MR_Box) (check_hlds__format_call__SymName_32));
#line 386 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_110_110, 1) = ((MR_Box) (check_hlds__format_call__Arity_29));
#line 386 "format_call.m"
        }
#line 386 "format_call.m"
        {
#line 386 "format_call.m"
          check_hlds__format_call__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "format_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__format_call__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 386 "format_call.m"
          MR_hl_field(MR_mktag(3), check_hlds__format_call__V_109_109, 1) = ((MR_Box) (check_hlds__format_call__V_110_110));
#line 386 "format_call.m"
        }
#line 385 "format_call.m"
        {
#line 385 "format_call.m"
          check_hlds__format_call__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_108_108, 0) = ((MR_Box) (check_hlds__format_call__V_109_109));
#line 385 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__format_call_scalar_common_2[8])));
#line 385 "format_call.m"
        }
#line 384 "format_call.m"
        {
#line 384 "format_call.m"
          check_hlds__format_call__UnknownFormatValuesPieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__UnknownFormatValuesPieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__format_call_scalar_common_2[11])));
#line 384 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__UnknownFormatValuesPieces_47, 1) = ((MR_Box) (check_hlds__format_call__V_108_108));
#line 384 "format_call.m"
        }
#line 392 "format_call.m"
        {
#line 392 "format_call.m"
          check_hlds__format_call__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 392 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_126_126, 0) = ((MR_Box) (check_hlds__format_call__UnknownFormatValuesPieces_47));
#line 392 "format_call.m"
        }
#line 391 "format_call.m"
        {
#line 391 "format_call.m"
          check_hlds__format_call__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_125_125, 0) = ((MR_Box) (check_hlds__format_call__V_126_126));
#line 391 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 391 "format_call.m"
        }
#line 392 "format_call.m"
        {
#line 392 "format_call.m"
          check_hlds__format_call__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_122_122, 0) = ((MR_Box) (((MR_Integer) 33 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 392 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_122_122, 1) = ((MR_Box) (check_hlds__format_call__V_125_125));
#line 392 "format_call.m"
        }
#line 390 "format_call.m"
        {
#line 390 "format_call.m"
          check_hlds__format_call__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_121_121, 0) = ((MR_Box) (check_hlds__format_call__V_122_122));
#line 390 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "format_call.m"
        }
#line 390 "format_call.m"
        {
#line 390 "format_call.m"
          check_hlds__format_call__UnknownFormatValuesMsg_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 390 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__UnknownFormatValuesMsg_49, 0) = ((MR_Box) (check_hlds__format_call__Context_30));
#line 390 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__UnknownFormatValuesMsg_49, 1) = ((MR_Box) (check_hlds__format_call__V_121_121));
#line 390 "format_call.m"
        }
#line 393 "format_call.m"
        {
#line 393 "format_call.m"
          check_hlds__format_call__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_130_130, 0) = ((MR_Box) (check_hlds__format_call__UnknownFormatValuesMsg_49));
#line 393 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__V_130_130, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "format_call.m"
        }
#line 393 "format_call.m"
        {
#line 393 "format_call.m"
          check_hlds__format_call__UnknownFormatValuesSpec_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 393 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__UnknownFormatValuesSpec_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__format_call_scalar_common_3[0])));
#line 393 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__UnknownFormatValuesSpec_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 393 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__UnknownFormatValuesSpec_50, 2) = ((MR_Box) (check_hlds__format_call__V_130_130));
#line 393 "format_call.m"
        }
#line 395 "format_call.m"
        {
#line 395 "format_call.m"
          check_hlds__format_call__STATE_VARIABLE_Specs_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_Specs_132_132, 0) = ((MR_Box) (check_hlds__format_call__UnknownFormatValuesSpec_50));
#line 395 "format_call.m"
          MR_hl_field(MR_mktag(1), check_hlds__format_call__STATE_VARIABLE_Specs_132_132, 1) = ((MR_Box) (check_hlds__format_call__STATE_VARIABLE_Specs_102_102));
#line 395 "format_call.m"
        }
#line 383 "format_call.m"
      }
#line 399 "format_call.m"
    check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__MaybeFormatStringVar_35)) == (MR_mktag((MR_Integer) 1)));
#line 399 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 399 "format_call.m"
      {
#line 399 "format_call.m"
        check_hlds__format_call__V_133_133 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), check_hlds__format_call__MaybeFormatStringVar_35, (MR_Integer) 0)));
#line 399 "format_call.m"
        check_hlds__format_call__FormatString_51 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__format_call__V_133_133, (MR_Integer) 0)));
#line 399 "format_call.m"
        check_hlds__format_call__StringVar1_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__V_133_133, (MR_Integer) 1)));
#line 400 "format_call.m"
        check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__MaybeSkeletonInfo_46)) == (MR_mktag((MR_Integer) 1)));
#line 400 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 400 "format_call.m"
          {
#line 400 "format_call.m"
            check_hlds__format_call__V_134_134 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), check_hlds__format_call__MaybeSkeletonInfo_46, (MR_Integer) 0)));
#line 400 "format_call.m"
            check_hlds__format_call__ValuesToDeleteVars_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__V_134_134, (MR_Integer) 0)));
#line 400 "format_call.m"
            check_hlds__format_call__WhatToPrints_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__V_134_134, (MR_Integer) 1)));
#line 400 "format_call.m"
            check_hlds__format_call__succeeded = MR_TRUE;
#line 400 "format_call.m"
          }
#line 399 "format_call.m"
      }
#line 446 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 402 "format_call.m"
      {
#line 402 "format_call.m"
        MR_Word check_hlds__format_call__DummiesToPrint_55;
#line 402 "format_call.m"
        MR_Word check_hlds__format_call__Result_56;
#line 404 "format_call.m"
        MR_Word check_hlds__format_call__V_136_136;

#line 402 "format_call.m"
        {
#line 402 "format_call.m"
          check_hlds__format_call__DummiesToPrint_55 = mercury__list__map_2_f_0((MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0, (MR_Word) &mercury__string__string__type_ctor_info_poly_type_0, (MR_Word) &check_hlds__format_call_scalar_common_1[7], check_hlds__format_call__WhatToPrints_54);
        }
#line 404 "format_call.m"
        {
#line 404 "format_call.m"
          check_hlds__format_call__V_136_136 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 404 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_136_136, 0) = ((MR_Box) (&check_hlds__format_call_scalar_common_8[0]));
#line 404 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_136_136, 1) = ((MR_Box) (check_hlds__format_call__check_format_call_site_13_p_0_3));
#line 404 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_136_136, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 404 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_136_136, 3) = ((MR_Box) (check_hlds__format_call__FormatString_51));
#line 404 "format_call.m"
          MR_hl_field(MR_mktag(0), check_hlds__format_call__V_136_136, 4) = ((MR_Box) (check_hlds__format_call__DummiesToPrint_55));
#line 404 "format_call.m"
        }
#line 404 "format_call.m"
        {
#line 404 "format_call.m"
          mercury__exception__try_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, check_hlds__format_call__V_136_136, &check_hlds__format_call__Result_56);
        }
#line 433 "format_call.m"
        if (((MR_tag((MR_Word) check_hlds__format_call__Result_56)) == (MR_mktag((MR_Integer) 2))))
#line 407 "format_call.m"
          {
#line 407 "format_call.m"
            MR_Word check_hlds__format_call__ExceptionUniv_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__format_call__Result_56, (MR_Integer) 0)));
#line 427 "format_call.m"
            MR_Word check_hlds__format_call__ExceptionError_58;
#line 408 "format_call.m"
            MR_Box check_hlds__format_call__conv3_ExceptionError_58;

#line 408 "format_call.m"
            {
#line 408 "format_call.m"
              check_hlds__format_call__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mercury__exception__exception__type_ctor_info_software_error_0, check_hlds__format_call__ExceptionUniv_57, &check_hlds__format_call__conv3_ExceptionError_58);
            }
#line 408 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 408 "format_call.m"
              {
#line 408 "format_call.m"
                check_hlds__format_call__ExceptionError_58 = ((MR_Word) check_hlds__format_call__conv3_ExceptionError_58);
#line 408 "format_call.m"
                check_hlds__format_call__succeeded = MR_TRUE;
#line 408 "format_call.m"
              }
#line 427 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 409 "format_call.m"
              {
#line 409 "format_call.m"
                MR_String check_hlds__format_call__ExceptionMsg0_59 = (MR_String) check_hlds__format_call__ExceptionError_58;
#line 409 "format_call.m"
                MR_String check_hlds__format_call__ExceptionMsg_61;
#line 409 "format_call.m"
                MR_Word check_hlds__format_call__BadFormatPieces_62;
#line 409 "format_call.m"
                MR_Word check_hlds__format_call__BadFormatMsg_63;
#line 409 "format_call.m"
                MR_Word check_hlds__format_call__BadFormatSpec_65;
#line 409 "format_call.m"
                MR_Word check_hlds__format_call__V_143_143;
#line 409 "format_call.m"
                MR_Word check_hlds__format_call__V_144_144;
#line 409 "format_call.m"
                MR_Word check_hlds__format_call__V_145_145;
#line 409 "format_call.m"
                MR_Word check_hlds__format_call__V_146_146;
#line 409 "format_call.m"
                MR_Word check_hlds__format_call__V_149_149;
#line 409 "format_call.m"
                MR_Word check_hlds__format_call__V_151_151;
#line 409 "format_call.m"
                MR_Word check_hlds__format_call__V_152_152;
#line 409 "format_call.m"
                MR_Word check_hlds__format_call__V_154_154;
#line 409 "format_call.m"
                MR_Word check_hlds__format_call__V_155_155;
#line 409 "format_call.m"
                MR_Word check_hlds__format_call__V_158_158;
#line 409 "format_call.m"
                MR_Word check_hlds__format_call__V_159_159;
#line 409 "format_call.m"
                MR_Word check_hlds__format_call__V_168_168;
#line 412 "format_call.m"
                MR_String check_hlds__format_call__Msg_60;

#line 410 "format_call.m"
                {
#line 410 "format_call.m"
                  check_hlds__format_call__succeeded = mercury__string__append_3_p_1((MR_String) "string.format: ", &check_hlds__format_call__Msg_60, check_hlds__format_call__ExceptionMsg0_59);
                }
#line 412 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 411 "format_call.m"
                  check_hlds__format_call__ExceptionMsg_61 = check_hlds__format_call__Msg_60;
#line 412 "format_call.m"
                else
#line 413 "format_call.m"
                  check_hlds__format_call__ExceptionMsg_61 = check_hlds__format_call__ExceptionMsg0_59;
#line 417 "format_call.m"
                {
#line 417 "format_call.m"
                  check_hlds__format_call__V_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 417 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__format_call__V_145_145, 0) = ((MR_Box) (check_hlds__format_call__SymName_32));
#line 417 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__format_call__V_145_145, 1) = ((MR_Box) (check_hlds__format_call__Arity_29));
#line 417 "format_call.m"
                }
#line 417 "format_call.m"
                {
#line 417 "format_call.m"
                  check_hlds__format_call__V_144_144 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "format_call.m"
                  MR_hl_field(MR_mktag(3), check_hlds__format_call__V_144_144, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 417 "format_call.m"
                  MR_hl_field(MR_mktag(3), check_hlds__format_call__V_144_144, 1) = ((MR_Box) (check_hlds__format_call__V_145_145));
#line 417 "format_call.m"
                }
#line 418 "format_call.m"
                {
#line 418 "format_call.m"
                  check_hlds__format_call__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "format_call.m"
                  MR_hl_field(MR_mktag(3), check_hlds__format_call__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 418 "format_call.m"
                  MR_hl_field(MR_mktag(3), check_hlds__format_call__V_152_152, 1) = ((MR_Box) (check_hlds__format_call__ExceptionMsg_61));
#line 418 "format_call.m"
                }
#line 417 "format_call.m"
                {
#line 417 "format_call.m"
                  check_hlds__format_call__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_151_151, 0) = ((MR_Box) (check_hlds__format_call__V_152_152));
#line 417 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_151_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 417 "format_call.m"
                }
#line 417 "format_call.m"
                {
#line 417 "format_call.m"
                  check_hlds__format_call__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_149_149, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 417 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_149_149, 1) = ((MR_Box) (check_hlds__format_call__V_151_151));
#line 417 "format_call.m"
                }
#line 417 "format_call.m"
                {
#line 417 "format_call.m"
                  check_hlds__format_call__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_146_146, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__format_call_scalar_common_2[13])));
#line 417 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_146_146, 1) = ((MR_Box) (check_hlds__format_call__V_149_149));
#line 417 "format_call.m"
                }
#line 416 "format_call.m"
                {
#line 416 "format_call.m"
                  check_hlds__format_call__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_143_143, 0) = ((MR_Box) (check_hlds__format_call__V_144_144));
#line 416 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_143_143, 1) = ((MR_Box) (check_hlds__format_call__V_146_146));
#line 416 "format_call.m"
                }
#line 415 "format_call.m"
                {
#line 415 "format_call.m"
                  check_hlds__format_call__BadFormatPieces_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 415 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__BadFormatPieces_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__format_call_scalar_common_2[12])));
#line 415 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__BadFormatPieces_62, 1) = ((MR_Box) (check_hlds__format_call__V_143_143));
#line 415 "format_call.m"
                }
#line 421 "format_call.m"
                {
#line 421 "format_call.m"
                  check_hlds__format_call__V_159_159 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 421 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__format_call__V_159_159, 0) = ((MR_Box) (check_hlds__format_call__BadFormatPieces_62));
#line 421 "format_call.m"
                }
#line 420 "format_call.m"
                {
#line 420 "format_call.m"
                  check_hlds__format_call__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_158_158, 0) = ((MR_Box) (check_hlds__format_call__V_159_159));
#line 420 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 420 "format_call.m"
                }
#line 421 "format_call.m"
                {
#line 421 "format_call.m"
                  check_hlds__format_call__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_155_155, 0) = ((MR_Box) (((MR_Integer) 32 | (((MR_Integer) 1 << (MR_Integer) 10)))));
#line 421 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_155_155, 1) = ((MR_Box) (check_hlds__format_call__V_158_158));
#line 421 "format_call.m"
                }
#line 419 "format_call.m"
                {
#line 419 "format_call.m"
                  check_hlds__format_call__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_154_154, 0) = ((MR_Box) (check_hlds__format_call__V_155_155));
#line 419 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_154_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 419 "format_call.m"
                }
#line 419 "format_call.m"
                {
#line 419 "format_call.m"
                  check_hlds__format_call__BadFormatMsg_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 419 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__format_call__BadFormatMsg_63, 0) = ((MR_Box) (check_hlds__format_call__Context_30));
#line 419 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__format_call__BadFormatMsg_63, 1) = ((MR_Box) (check_hlds__format_call__V_154_154));
#line 419 "format_call.m"
                }
#line 424 "format_call.m"
                {
#line 424 "format_call.m"
                  check_hlds__format_call__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 424 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_168_168, 0) = ((MR_Box) (check_hlds__format_call__BadFormatMsg_63));
#line 424 "format_call.m"
                  MR_hl_field(MR_mktag(1), check_hlds__format_call__V_168_168, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 424 "format_call.m"
                }
#line 424 "format_call.m"
                {
#line 424 "format_call.m"
                  check_hlds__format_call__BadFormatSpec_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 424 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__format_call__BadFormatSpec_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__format_call_scalar_common_3[1])));
#line 424 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__format_call__BadFormatSpec_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__format_call_scalar_common_4[1])));
#line 424 "format_call.m"
                  MR_hl_field(MR_mktag(0), check_hlds__format_call__BadFormatSpec_65, 2) = ((MR_Box) (check_hlds__format_call__V_168_168));
#line 424 "format_call.m"
                }
#line 426 "format_call.m"
                {
#line 426 "format_call.m"
                  MR_Word base;
#line 426 "format_call.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "format_call.m"
                  *check_hlds__format_call__STATE_VARIABLE_Specs_70 = base;
#line 426 "format_call.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__BadFormatSpec_65));
#line 426 "format_call.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__format_call__STATE_VARIABLE_Specs_132_132));
#line 426 "format_call.m"
                }
#line 409 "format_call.m"
              }
#line 427 "format_call.m"
            else
#line 426 "format_call.m"
              *check_hlds__format_call__STATE_VARIABLE_Specs_70 = check_hlds__format_call__STATE_VARIABLE_Specs_132_132;
#line 426 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_GoalIdMap_68 = check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_67;
#line 426 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_VarSet_72 = check_hlds__format_call__STATE_VARIABLE_VarSet_0_71;
#line 426 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_VarTypes_74 = check_hlds__format_call__STATE_VARIABLE_VarTypes_0_73;
#line 407 "format_call.m"
          }
#line 433 "format_call.m"
        else
#line 435 "format_call.m"
          {
#line 438 "format_call.m"
            if ((check_hlds__format_call__OptFormatCalls_15 == (MR_Integer) 0))
#line 437 "format_call.m"
              {
#line 437 "format_call.m"
                *check_hlds__format_call__STATE_VARIABLE_GoalIdMap_68 = check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_67;
#line 437 "format_call.m"
                *check_hlds__format_call__STATE_VARIABLE_VarSet_72 = check_hlds__format_call__STATE_VARIABLE_VarSet_0_71;
#line 437 "format_call.m"
                *check_hlds__format_call__STATE_VARIABLE_VarTypes_74 = check_hlds__format_call__STATE_VARIABLE_VarTypes_0_73;
#line 437 "format_call.m"
              }
#line 438 "format_call.m"
            else
#line 440 "format_call.m"
              {
#line 440 "format_call.m"
                check_hlds__format_call__try_create_replacement_goal_13_p_0(check_hlds__format_call__ModuleInfo_14, check_hlds__format_call__GoalId_23, check_hlds__format_call__Kind_26, check_hlds__format_call__FormatString_51, check_hlds__format_call__StringVar1_52, check_hlds__format_call__ValuesToDeleteVars_53, check_hlds__format_call__WhatToPrints_54, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_67, check_hlds__format_call__STATE_VARIABLE_GoalIdMap_68, check_hlds__format_call__STATE_VARIABLE_VarSet_0_71, check_hlds__format_call__STATE_VARIABLE_VarSet_72, check_hlds__format_call__STATE_VARIABLE_VarTypes_0_73, check_hlds__format_call__STATE_VARIABLE_VarTypes_74);
              }
#line 440 "format_call.m"
            *check_hlds__format_call__STATE_VARIABLE_Specs_70 = check_hlds__format_call__STATE_VARIABLE_Specs_132_132;
#line 435 "format_call.m"
          }
#line 402 "format_call.m"
      }
#line 446 "format_call.m"
    else
#line 448 "format_call.m"
      {
#line 448 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_VarTypes_74 = check_hlds__format_call__STATE_VARIABLE_VarTypes_0_73;
#line 448 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_VarSet_72 = check_hlds__format_call__STATE_VARIABLE_VarSet_0_71;
#line 448 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_Specs_70 = check_hlds__format_call__STATE_VARIABLE_Specs_132_132;
#line 448 "format_call.m"
        *check_hlds__format_call__STATE_VARIABLE_GoalIdMap_68 = check_hlds__format_call__STATE_VARIABLE_GoalIdMap_0_67;
#line 448 "format_call.m"
      }
#line 346 "format_call.m"
  }
#line 339 "format_call.m"
}

#line 269 "format_call.m"
static MR_bool MR_CALL 
check_hlds__format_call__is_format_call_kind_and_vars_6_p_0(
#line 269 "format_call.m"
  MR_Word check_hlds__format_call__ModuleName_7,
#line 269 "format_call.m"
  MR_String check_hlds__format_call__Name_8,
#line 269 "format_call.m"
  MR_Word check_hlds__format_call__Args_9,
#line 269 "format_call.m"
  MR_Word * check_hlds__format_call__Kind_10,
#line 269 "format_call.m"
  MR_Word * check_hlds__format_call__FormatStringVar_11,
#line 269 "format_call.m"
  MR_Word * check_hlds__format_call__FormattedValuesVar_12)
#line 269 "format_call.m"
{
#line 274 "format_call.m"
  {
#line 274 "format_call.m"
    MR_bool check_hlds__format_call__succeeded = (strcmp(check_hlds__format_call__Name_8, (MR_String) "format") == 0);
#line 277 "format_call.m"
    MR_Word check_hlds__format_call__V_46_46;

#line 274 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 274 "format_call.m"
      {
#line 277 "format_call.m"
        {
#line 277 "format_call.m"
          check_hlds__format_call__V_46_46 = mdbcomp__prim_data__mercury_string_module_0_f_0();
        }
#line 277 "format_call.m"
        {
#line 277 "format_call.m"
          check_hlds__format_call__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__format_call__ModuleName_7, check_hlds__format_call__V_46_46);
        }
#line 283 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 281 "format_call.m"
          {
#line 281 "format_call.m"
            MR_Word check_hlds__format_call__ResultVar_13;
#line 281 "format_call.m"
            MR_Word check_hlds__format_call__V_20_20;
#line 281 "format_call.m"
            MR_Word check_hlds__format_call__V_21_21;
#line 281 "format_call.m"
            MR_Word check_hlds__format_call__V_22_22;

#line 281 "format_call.m"
            check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 281 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 281 "format_call.m"
              {
#line 281 "format_call.m"
                *check_hlds__format_call__FormatStringVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Args_9, (MR_Integer) 0)));
#line 281 "format_call.m"
                check_hlds__format_call__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Args_9, (MR_Integer) 1)));
#line 281 "format_call.m"
                check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 281 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 281 "format_call.m"
                  {
#line 281 "format_call.m"
                    *check_hlds__format_call__FormattedValuesVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_20_20, (MR_Integer) 0)));
#line 281 "format_call.m"
                    check_hlds__format_call__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_20_20, (MR_Integer) 1)));
#line 281 "format_call.m"
                    check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 281 "format_call.m"
                    if (check_hlds__format_call__succeeded)
#line 281 "format_call.m"
                      {
#line 281 "format_call.m"
                        check_hlds__format_call__ResultVar_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_21_21, (MR_Integer) 0)));
#line 281 "format_call.m"
                        check_hlds__format_call__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_21_21, (MR_Integer) 1)));
#line 281 "format_call.m"
                        check_hlds__format_call__succeeded = (check_hlds__format_call__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "format_call.m"
                        if (check_hlds__format_call__succeeded)
#line 281 "format_call.m"
                          {
#line 282 "format_call.m"
                            {
#line 282 "format_call.m"
                              MR_Word base;
#line 282 "format_call.m"
                              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 282 "format_call.m"
                              *check_hlds__format_call__Kind_10 = base;
#line 282 "format_call.m"
                              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__format_call__ResultVar_13));
#line 282 "format_call.m"
                            }
#line 282 "format_call.m"
                            check_hlds__format_call__succeeded = MR_TRUE;
#line 281 "format_call.m"
                          }
#line 281 "format_call.m"
                      }
#line 281 "format_call.m"
                  }
#line 281 "format_call.m"
              }
#line 281 "format_call.m"
          }
#line 283 "format_call.m"
        else
#line 294 "format_call.m"
          {
#line 284 "format_call.m"
            MR_Word check_hlds__format_call__V_47_47;

#line 284 "format_call.m"
            {
#line 284 "format_call.m"
              check_hlds__format_call__V_47_47 = mdbcomp__prim_data__mercury_io_module_0_f_0();
            }
#line 284 "format_call.m"
            {
#line 284 "format_call.m"
              check_hlds__format_call__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__format_call__ModuleName_7, check_hlds__format_call__V_47_47);
            }
#line 294 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 289 "format_call.m"
              {
#line 289 "format_call.m"
                MR_Word check_hlds__format_call__V_50_50;
#line 289 "format_call.m"
                MR_Word check_hlds__format_call__V_51_51;
#line 289 "format_call.m"
                MR_Word check_hlds__format_call__V_52_52;
#line 289 "format_call.m"
                MR_Word check_hlds__format_call__V_53_53;
#line 289 "format_call.m"
                MR_Word check_hlds__format_call__V_54_54;
#line 289 "format_call.m"
                MR_Word check_hlds__format_call__V_55_55;
#line 289 "format_call.m"
                MR_Word check_hlds__format_call__V_56_56;
#line 289 "format_call.m"
                MR_Word check_hlds__format_call__V_57_57;

#line 287 "format_call.m"
                check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 287 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 287 "format_call.m"
                  {
#line 287 "format_call.m"
                    check_hlds__format_call__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Args_9, (MR_Integer) 0)));
#line 287 "format_call.m"
                    check_hlds__format_call__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Args_9, (MR_Integer) 1)));
#line 287 "format_call.m"
                    check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_50_50)) == (MR_mktag((MR_Integer) 1)));
#line 287 "format_call.m"
                    if (check_hlds__format_call__succeeded)
#line 287 "format_call.m"
                      {
#line 287 "format_call.m"
                        check_hlds__format_call__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_50_50, (MR_Integer) 0)));
#line 287 "format_call.m"
                        check_hlds__format_call__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_50_50, (MR_Integer) 1)));
#line 287 "format_call.m"
                        check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 287 "format_call.m"
                        if (check_hlds__format_call__succeeded)
#line 287 "format_call.m"
                          {
#line 287 "format_call.m"
                            check_hlds__format_call__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_52_52, (MR_Integer) 0)));
#line 287 "format_call.m"
                            check_hlds__format_call__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_52_52, (MR_Integer) 1)));
#line 287 "format_call.m"
                            check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_54_54)) == (MR_mktag((MR_Integer) 1)));
#line 287 "format_call.m"
                            if (check_hlds__format_call__succeeded)
#line 287 "format_call.m"
                              {
#line 287 "format_call.m"
                                check_hlds__format_call__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_54_54, (MR_Integer) 0)));
#line 287 "format_call.m"
                                check_hlds__format_call__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_54_54, (MR_Integer) 1)));
#line 289 "format_call.m"
                                if ((check_hlds__format_call__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 287 "format_call.m"
                                  {
#line 287 "format_call.m"
                                    *check_hlds__format_call__FormatStringVar_11 = check_hlds__format_call__V_51_51;
#line 287 "format_call.m"
                                    *check_hlds__format_call__FormattedValuesVar_12 = check_hlds__format_call__V_53_53;
#line 288 "format_call.m"
                                    {
#line 288 "format_call.m"
                                      MR_Word base;
#line 288 "format_call.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 288 "format_call.m"
                                      *check_hlds__format_call__Kind_10 = base;
#line 288 "format_call.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__V_55_55));
#line 288 "format_call.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__format_call__V_57_57));
#line 288 "format_call.m"
                                    }
#line 287 "format_call.m"
                                    check_hlds__format_call__succeeded = MR_TRUE;
#line 287 "format_call.m"
                                  }
#line 289 "format_call.m"
                                else
#line 291 "format_call.m"
                                  {
#line 291 "format_call.m"
                                    MR_Word check_hlds__format_call__V_27_27;
#line 291 "format_call.m"
                                    MR_Word check_hlds__format_call__IOOut_43;

#line 290 "format_call.m"
                                    *check_hlds__format_call__FormatStringVar_11 = check_hlds__format_call__V_53_53;
#line 290 "format_call.m"
                                    *check_hlds__format_call__FormattedValuesVar_12 = check_hlds__format_call__V_55_55;
#line 291 "format_call.m"
                                    check_hlds__format_call__IOOut_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_56_56, (MR_Integer) 0)));
#line 291 "format_call.m"
                                    check_hlds__format_call__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_56_56, (MR_Integer) 1)));
#line 291 "format_call.m"
                                    check_hlds__format_call__succeeded = (check_hlds__format_call__V_27_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "format_call.m"
                                    if (check_hlds__format_call__succeeded)
#line 291 "format_call.m"
                                      {
#line 292 "format_call.m"
                                        {
#line 292 "format_call.m"
                                          MR_Word base;
#line 292 "format_call.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 292 "format_call.m"
                                          *check_hlds__format_call__Kind_10 = base;
#line 292 "format_call.m"
                                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (check_hlds__format_call__V_51_51));
#line 292 "format_call.m"
                                          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (check_hlds__format_call__V_57_57));
#line 292 "format_call.m"
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (check_hlds__format_call__IOOut_43));
#line 292 "format_call.m"
                                        }
#line 292 "format_call.m"
                                        check_hlds__format_call__succeeded = MR_TRUE;
#line 291 "format_call.m"
                                      }
#line 291 "format_call.m"
                                  }
#line 287 "format_call.m"
                              }
#line 287 "format_call.m"
                          }
#line 287 "format_call.m"
                      }
#line 287 "format_call.m"
                  }
#line 289 "format_call.m"
              }
#line 294 "format_call.m"
            else
#line 304 "format_call.m"
              {
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__TC_InfoVarForStream_17;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__StateInVar_18;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__StateOutVar_19;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__V_36_36;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__V_37_37;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__V_38_38;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__V_39_39;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__V_40_40;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__V_41_41;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__StreamVar_44;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__V_49_49;

#line 295 "format_call.m"
                {
#line 295 "format_call.m"
                  check_hlds__format_call__V_49_49 = mdbcomp__prim_data__mercury_std_lib_module_name_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__format_call_scalar_common_2[9]));
                }
#line 295 "format_call.m"
                {
#line 295 "format_call.m"
                  check_hlds__format_call__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__format_call__ModuleName_7, check_hlds__format_call__V_49_49);
                }
#line 304 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 304 "format_call.m"
                  {
#line 300 "format_call.m"
                    check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__Args_9)) == (MR_mktag((MR_Integer) 1)));
#line 300 "format_call.m"
                    if (check_hlds__format_call__succeeded)
#line 300 "format_call.m"
                      {
#line 300 "format_call.m"
                        check_hlds__format_call__TC_InfoVarForStream_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Args_9, (MR_Integer) 0)));
#line 300 "format_call.m"
                        check_hlds__format_call__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Args_9, (MR_Integer) 1)));
#line 300 "format_call.m"
                        check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 300 "format_call.m"
                        if (check_hlds__format_call__succeeded)
#line 300 "format_call.m"
                          {
#line 300 "format_call.m"
                            check_hlds__format_call__StreamVar_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_36_36, (MR_Integer) 0)));
#line 300 "format_call.m"
                            check_hlds__format_call__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_36_36, (MR_Integer) 1)));
#line 300 "format_call.m"
                            check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 300 "format_call.m"
                            if (check_hlds__format_call__succeeded)
#line 300 "format_call.m"
                              {
#line 300 "format_call.m"
                                *check_hlds__format_call__FormatStringVar_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_37_37, (MR_Integer) 0)));
#line 300 "format_call.m"
                                check_hlds__format_call__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_37_37, (MR_Integer) 1)));
#line 300 "format_call.m"
                                check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_38_38)) == (MR_mktag((MR_Integer) 1)));
#line 300 "format_call.m"
                                if (check_hlds__format_call__succeeded)
#line 300 "format_call.m"
                                  {
#line 300 "format_call.m"
                                    *check_hlds__format_call__FormattedValuesVar_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_38_38, (MR_Integer) 0)));
#line 300 "format_call.m"
                                    check_hlds__format_call__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_38_38, (MR_Integer) 1)));
#line 301 "format_call.m"
                                    check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 301 "format_call.m"
                                    if (check_hlds__format_call__succeeded)
#line 301 "format_call.m"
                                      {
#line 301 "format_call.m"
                                        check_hlds__format_call__StateInVar_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_39_39, (MR_Integer) 0)));
#line 301 "format_call.m"
                                        check_hlds__format_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_39_39, (MR_Integer) 1)));
#line 301 "format_call.m"
                                        check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 301 "format_call.m"
                                        if (check_hlds__format_call__succeeded)
#line 301 "format_call.m"
                                          {
#line 301 "format_call.m"
                                            check_hlds__format_call__StateOutVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_40_40, (MR_Integer) 0)));
#line 301 "format_call.m"
                                            check_hlds__format_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_40_40, (MR_Integer) 1)));
#line 301 "format_call.m"
                                            check_hlds__format_call__succeeded = (check_hlds__format_call__V_41_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "format_call.m"
                                            if (check_hlds__format_call__succeeded)
#line 304 "format_call.m"
                                              {
#line 302 "format_call.m"
                                                {
#line 302 "format_call.m"
                                                  MR_Word base;
#line 302 "format_call.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 302 "format_call.m"
                                                  *check_hlds__format_call__Kind_10 = base;
#line 302 "format_call.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (check_hlds__format_call__TC_InfoVarForStream_17));
#line 302 "format_call.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (check_hlds__format_call__StreamVar_44));
#line 302 "format_call.m"
                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__format_call__StateInVar_18));
#line 302 "format_call.m"
                                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (check_hlds__format_call__StateOutVar_19));
#line 302 "format_call.m"
                                                }
#line 302 "format_call.m"
                                                check_hlds__format_call__succeeded = MR_TRUE;
#line 304 "format_call.m"
                                              }
#line 301 "format_call.m"
                                          }
#line 301 "format_call.m"
                                      }
#line 300 "format_call.m"
                                  }
#line 300 "format_call.m"
                              }
#line 300 "format_call.m"
                          }
#line 300 "format_call.m"
                      }
#line 304 "format_call.m"
                  }
#line 304 "format_call.m"
              }
#line 294 "format_call.m"
          }
#line 274 "format_call.m"
      }
#line 274 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 274 "format_call.m"
  }
#line 269 "format_call.m"
}

#line 320 "format_call.m"
static void MR_CALL 
check_hlds__format_call__analyze_and_optimize_format_calls_8_p_0_1(
#line 320 "format_call.m"
  MR_Box check_hlds__format_call__closure_arg,
#line 320 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_1,
#line 320 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_2,
#line 320 "format_call.m"
  MR_Box * check_hlds__format_call__wrapper_arg_3,
#line 320 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_4,
#line 320 "format_call.m"
  MR_Box * check_hlds__format_call__wrapper_arg_5,
#line 320 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_6,
#line 320 "format_call.m"
  MR_Box * check_hlds__format_call__wrapper_arg_7,
#line 320 "format_call.m"
  MR_Box check_hlds__format_call__wrapper_arg_8,
#line 320 "format_call.m"
  MR_Box * check_hlds__format_call__wrapper_arg_9)
#line 320 "format_call.m"
{
#line 320 "format_call.m"
  {
#line 320 "format_call.m"
    MR_Box check_hlds__format_call__closure = check_hlds__format_call__closure_arg;
#line 320 "format_call.m"
    MR_Word check_hlds__format_call__conv3_STATE_VARIABLE_GoalIdMap_68;
#line 320 "format_call.m"
    MR_Word check_hlds__format_call__conv2_STATE_VARIABLE_Specs_70;
#line 320 "format_call.m"
    MR_Word check_hlds__format_call__conv1_STATE_VARIABLE_VarSet_72;
#line 320 "format_call.m"
    MR_Word check_hlds__format_call__conv0_STATE_VARIABLE_VarTypes_74;

#line 320 "format_call.m"
    {
#line 320 "format_call.m"
      check_hlds__format_call__check_format_call_site_13_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__closure, (MR_Integer) 6))), ((MR_Word) check_hlds__format_call__wrapper_arg_1), ((MR_Word) check_hlds__format_call__wrapper_arg_2), &check_hlds__format_call__conv3_STATE_VARIABLE_GoalIdMap_68, ((MR_Word) check_hlds__format_call__wrapper_arg_4), &check_hlds__format_call__conv2_STATE_VARIABLE_Specs_70, ((MR_Word) check_hlds__format_call__wrapper_arg_6), &check_hlds__format_call__conv1_STATE_VARIABLE_VarSet_72, ((MR_Word) check_hlds__format_call__wrapper_arg_8), &check_hlds__format_call__conv0_STATE_VARIABLE_VarTypes_74);
    }
#line 320 "format_call.m"
    *check_hlds__format_call__wrapper_arg_3 = ((MR_Box) (check_hlds__format_call__conv3_STATE_VARIABLE_GoalIdMap_68));
#line 320 "format_call.m"
    *check_hlds__format_call__wrapper_arg_5 = ((MR_Box) (check_hlds__format_call__conv2_STATE_VARIABLE_Specs_70));
#line 320 "format_call.m"
    *check_hlds__format_call__wrapper_arg_7 = ((MR_Box) (check_hlds__format_call__conv1_STATE_VARIABLE_VarSet_72));
#line 320 "format_call.m"
    *check_hlds__format_call__wrapper_arg_9 = ((MR_Box) (check_hlds__format_call__conv0_STATE_VARIABLE_VarTypes_74));
#line 320 "format_call.m"
  }
#line 320 "format_call.m"
}

#line 135 "format_call.m"
void MR_CALL 
check_hlds__format_call__analyze_and_optimize_format_calls_8_p_0(
#line 135 "format_call.m"
  MR_Word check_hlds__format_call__ModuleInfo_9,
#line 135 "format_call.m"
  MR_Word check_hlds__format_call__Goal0_10,
#line 135 "format_call.m"
  MR_Word * check_hlds__format_call__MaybeGoal_11,
#line 135 "format_call.m"
  MR_Word * check_hlds__format_call__Specs_12,
#line 135 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarSet_0_37,
#line 135 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarSet_38,
#line 135 "format_call.m"
  MR_Word check_hlds__format_call__STATE_VARIABLE_VarTypes_0_39,
#line 135 "format_call.m"
  MR_Word * check_hlds__format_call__STATE_VARIABLE_VarTypes_40)
#line 135 "format_call.m"
{
#line 311 "format_call.m"
  {
#line 311 "format_call.m"
    MR_bool check_hlds__format_call__succeeded;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__TypeCtorInfo_51_51 = (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__TypeCtorInfo_53_53;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__TypeCtorInfo_63_63;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__TypeCtorInfo_64_64;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__ConjMaps0_15;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__Counter0_16;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__Goal1_18;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__FormatCallSites_20;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__ConjMaps_22;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__PredMap_23;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__Globals_25;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__OptFormatCalls_26;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__GoalIdMap_27;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__V_43_43;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__V_44_44;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__V_46_46;
#line 311 "format_call.m"
    MR_Word check_hlds__format_call__V_47_47;
#line 314 "format_call.m"
    MR_Word check_hlds__format_call__V_17_17;
#line 315 "format_call.m"
    MR_Word check_hlds__format_call__V_19_19;
#line 315 "format_call.m"
    MR_Word check_hlds__format_call___Counter_21;
#line 315 "format_call.m"
    MR_Word check_hlds__format_call__V_24_24;
#line 320 "format_call.m"
    MR_Box check_hlds__format_call__conv7_GoalIdMap_27;
#line 320 "format_call.m"
    MR_Box check_hlds__format_call__conv6_Specs_12;
#line 320 "format_call.m"
    MR_Box check_hlds__format_call__conv5_STATE_VARIABLE_VarSet_38;
#line 320 "format_call.m"
    MR_Box check_hlds__format_call__conv4_STATE_VARIABLE_VarTypes_40;

#line 312 "format_call.m"
    {
#line 312 "format_call.m"
      mercury__map__init_1_p_0(check_hlds__format_call__TypeCtorInfo_51_51, (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_map_0, &check_hlds__format_call__ConjMaps0_15);
    }
#line 313 "format_call.m"
    {
#line 313 "format_call.m"
      mercury__counter__init_2_p_0((MR_Integer) 0, &check_hlds__format_call__Counter0_16);
    }
#line 314 "format_call.m"
    {
#line 314 "format_call.m"
      hlds__goal_path__fill_goal_id_slots_in_proc_body_5_p_0(check_hlds__format_call__ModuleInfo_9, check_hlds__format_call__STATE_VARIABLE_VarTypes_0_39, &check_hlds__format_call__V_17_17, check_hlds__format_call__Goal0_10, &check_hlds__format_call__Goal1_18);
    }
#line 315 "format_call.m"
    {
#line 315 "format_call.m"
      check_hlds__format_call__V_43_43 = mercury__map__init_0_f_0(check_hlds__format_call__TypeCtorInfo_51_51, check_hlds__format_call__TypeCtorInfo_51_51);
    }
#line 14851 "check_hlds.format_call.c"
    check_hlds__format_call__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 315 "format_call.m"
    {
#line 315 "format_call.m"
      check_hlds__format_call__V_44_44 = parse_tree__set_of_var__init_0_f_0(check_hlds__format_call__TypeCtorInfo_53_53);
    }
#line 315 "format_call.m"
    {
#line 315 "format_call.m"
      check_hlds__format_call__format_call_traverse_goal_13_p_0(check_hlds__format_call__ModuleInfo_9, check_hlds__format_call__Goal1_18, &check_hlds__format_call__V_19_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__format_call__FormatCallSites_20, check_hlds__format_call__Counter0_16, &check_hlds__format_call___Counter_21, check_hlds__format_call__ConjMaps0_15, &check_hlds__format_call__ConjMaps_22, check_hlds__format_call__V_43_43, &check_hlds__format_call__PredMap_23, check_hlds__format_call__V_44_44, &check_hlds__format_call__V_24_24);
    }
#line 318 "format_call.m"
    {
#line 318 "format_call.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__format_call__ModuleInfo_9, &check_hlds__format_call__Globals_25);
    }
#line 319 "format_call.m"
    {
#line 319 "format_call.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__format_call__Globals_25, (MR_Integer) 368, &check_hlds__format_call__OptFormatCalls_26);
    }
#line 320 "format_call.m"
    {
#line 320 "format_call.m"
      check_hlds__format_call__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 320 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__format_call__V_46_46, 0) = ((MR_Box) (&check_hlds__format_call_scalar_common_5[0]));
#line 320 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__format_call__V_46_46, 1) = ((MR_Box) (check_hlds__format_call__analyze_and_optimize_format_calls_8_p_0_1));
#line 320 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__format_call__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 320 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__format_call__V_46_46, 3) = ((MR_Box) (check_hlds__format_call__ModuleInfo_9));
#line 320 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__format_call__V_46_46, 4) = ((MR_Box) (check_hlds__format_call__OptFormatCalls_26));
#line 320 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__format_call__V_46_46, 5) = ((MR_Box) (check_hlds__format_call__ConjMaps_22));
#line 320 "format_call.m"
      MR_hl_field(MR_mktag(0), check_hlds__format_call__V_46_46, 6) = ((MR_Box) (check_hlds__format_call__PredMap_23));
#line 320 "format_call.m"
    }
#line 14893 "check_hlds.format_call.c"
    check_hlds__format_call__TypeCtorInfo_63_63 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 14895 "check_hlds.format_call.c"
    check_hlds__format_call__TypeCtorInfo_64_64 = (MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0;
#line 320 "format_call.m"
    {
#line 320 "format_call.m"
      check_hlds__format_call__V_47_47 = mercury__map__init_0_f_0(check_hlds__format_call__TypeCtorInfo_63_63, check_hlds__format_call__TypeCtorInfo_64_64);
    }
#line 320 "format_call.m"
    {
#line 320 "format_call.m"
      mercury__list__foldl4_10_p_0((MR_Word) &check_hlds__format_call__check_hlds__format_call__type_ctor_info_format_call_site_0, (MR_Word) &check_hlds__format_call_scalar_common_1[0], (MR_Word) &check_hlds__format_call_scalar_common_2[0], (MR_Word) &check_hlds__format_call_scalar_common_2[1], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_vartypes_0, check_hlds__format_call__V_46_46, check_hlds__format_call__FormatCallSites_20, ((MR_Box) (check_hlds__format_call__V_47_47)), &check_hlds__format_call__conv7_GoalIdMap_27, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__format_call__conv6_Specs_12, ((MR_Box) (check_hlds__format_call__STATE_VARIABLE_VarSet_0_37)), &check_hlds__format_call__conv5_STATE_VARIABLE_VarSet_38, ((MR_Box) (check_hlds__format_call__STATE_VARIABLE_VarTypes_0_39)), &check_hlds__format_call__conv4_STATE_VARIABLE_VarTypes_40);
    }
#line 320 "format_call.m"
    check_hlds__format_call__GoalIdMap_27 = ((MR_Word) check_hlds__format_call__conv7_GoalIdMap_27);
#line 320 "format_call.m"
    *check_hlds__format_call__Specs_12 = ((MR_Word) check_hlds__format_call__conv6_Specs_12);
#line 320 "format_call.m"
    *check_hlds__format_call__STATE_VARIABLE_VarSet_38 = ((MR_Word) check_hlds__format_call__conv5_STATE_VARIABLE_VarSet_38);
#line 320 "format_call.m"
    *check_hlds__format_call__STATE_VARIABLE_VarTypes_40 = ((MR_Word) check_hlds__format_call__conv4_STATE_VARIABLE_VarTypes_40);
#line 323 "format_call.m"
    {
#line 323 "format_call.m"
      check_hlds__format_call__succeeded = mercury__map__is_empty_1_p_0(check_hlds__format_call__TypeCtorInfo_63_63, check_hlds__format_call__TypeCtorInfo_64_64, check_hlds__format_call__GoalIdMap_27);
    }
#line 326 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 325 "format_call.m"
      *check_hlds__format_call__MaybeGoal_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 326 "format_call.m"
    else
#line 330 "format_call.m"
      {
#line 330 "format_call.m"
        MR_Word check_hlds__format_call__GoalInfo1_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Goal1_18, (MR_Integer) 1)));
#line 330 "format_call.m"
        MR_Word check_hlds__format_call__InstMapDelta_30;
#line 330 "format_call.m"
        MR_Word check_hlds__format_call__NeededVars0_31;
#line 330 "format_call.m"
        MR_Word check_hlds__format_call__ToDeleteVars0_32;
#line 330 "format_call.m"
        MR_Word check_hlds__format_call__Goal_33;
#line 330 "format_call.m"
        MR_Word check_hlds__format_call__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__format_call__Goal1_18, (MR_Integer) 0)));
#line 334 "format_call.m"
        MR_Word check_hlds__format_call__V_34_34;
#line 334 "format_call.m"
        MR_Word check_hlds__format_call___NeededVars_35;
#line 334 "format_call.m"
        MR_Word check_hlds__format_call___ToDeleteVars_36;

#line 331 "format_call.m"
        {
#line 331 "format_call.m"
          check_hlds__format_call__InstMapDelta_30 = hlds__hlds_goal__goal_info_get_instmap_delta_1_f_0(check_hlds__format_call__GoalInfo1_29);
        }
#line 332 "format_call.m"
        {
#line 332 "format_call.m"
          hlds__instmap__instmap_delta_changed_vars_2_p_0(check_hlds__format_call__InstMapDelta_30, &check_hlds__format_call__NeededVars0_31);
        }
#line 333 "format_call.m"
        {
#line 333 "format_call.m"
          check_hlds__format_call__ToDeleteVars0_32 = parse_tree__set_of_var__init_0_f_0(check_hlds__format_call__TypeCtorInfo_53_53);
        }
#line 334 "format_call.m"
        {
#line 334 "format_call.m"
          check_hlds__format_call__opt_format_call_sites_in_goal_8_p_0(check_hlds__format_call__Goal1_18, &check_hlds__format_call__Goal_33, check_hlds__format_call__GoalIdMap_27, &check_hlds__format_call__V_34_34, check_hlds__format_call__NeededVars0_31, &check_hlds__format_call___NeededVars_35, check_hlds__format_call__ToDeleteVars0_32, &check_hlds__format_call___ToDeleteVars_36);
        }
#line 336 "format_call.m"
        {
#line 336 "format_call.m"
          MR_Word base;
#line 336 "format_call.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 336 "format_call.m"
          *check_hlds__format_call__MaybeGoal_11 = base;
#line 336 "format_call.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__format_call__Goal_33));
#line 336 "format_call.m"
        }
#line 330 "format_call.m"
      }
#line 311 "format_call.m"
  }
#line 135 "format_call.m"
}

#line 132 "format_call.m"
MR_bool MR_CALL 
check_hlds__format_call__is_format_call_3_p_0(
#line 132 "format_call.m"
  MR_Word check_hlds__format_call__ModuleName_4,
#line 132 "format_call.m"
  MR_String check_hlds__format_call__Name_5,
#line 132 "format_call.m"
  MR_Word check_hlds__format_call__Args_6)
#line 132 "format_call.m"
{
#line 274 "format_call.m"
  {
#line 274 "format_call.m"
    MR_bool check_hlds__format_call__succeeded = (strcmp(check_hlds__format_call__Name_5, (MR_String) "format") == 0);
#line 277 "format_call.m"
    MR_Word check_hlds__format_call__V_49_49;

#line 274 "format_call.m"
    if (check_hlds__format_call__succeeded)
#line 274 "format_call.m"
      {
#line 277 "format_call.m"
        {
#line 277 "format_call.m"
          check_hlds__format_call__V_49_49 = mdbcomp__prim_data__mercury_string_module_0_f_0();
        }
#line 277 "format_call.m"
        {
#line 277 "format_call.m"
          check_hlds__format_call__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__format_call__ModuleName_4, check_hlds__format_call__V_49_49);
        }
#line 283 "format_call.m"
        if (check_hlds__format_call__succeeded)
#line 281 "format_call.m"
          {
#line 281 "format_call.m"
            MR_Word check_hlds__format_call__V_23_23;
#line 281 "format_call.m"
            MR_Word check_hlds__format_call__V_24_24;
#line 281 "format_call.m"
            MR_Word check_hlds__format_call__V_25_25;
#line 281 "format_call.m"
            MR_Word check_hlds__format_call___FormatStringVar_8;
#line 281 "format_call.m"
            MR_Word check_hlds__format_call___FormattedValuesVar_9;
#line 281 "format_call.m"
            MR_Word check_hlds__format_call__ResultVar_16;

#line 281 "format_call.m"
            check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 281 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 281 "format_call.m"
              {
#line 281 "format_call.m"
                check_hlds__format_call___FormatStringVar_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Args_6, (MR_Integer) 0)));
#line 281 "format_call.m"
                check_hlds__format_call__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Args_6, (MR_Integer) 1)));
#line 281 "format_call.m"
                check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 281 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 281 "format_call.m"
                  {
#line 281 "format_call.m"
                    check_hlds__format_call___FormattedValuesVar_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_23_23, (MR_Integer) 0)));
#line 281 "format_call.m"
                    check_hlds__format_call__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_23_23, (MR_Integer) 1)));
#line 281 "format_call.m"
                    check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_24_24)) == (MR_mktag((MR_Integer) 1)));
#line 281 "format_call.m"
                    if (check_hlds__format_call__succeeded)
#line 281 "format_call.m"
                      {
#line 281 "format_call.m"
                        check_hlds__format_call__ResultVar_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_24_24, (MR_Integer) 0)));
#line 281 "format_call.m"
                        check_hlds__format_call__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_24_24, (MR_Integer) 1)));
#line 281 "format_call.m"
                        check_hlds__format_call__succeeded = (check_hlds__format_call__V_25_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "format_call.m"
                      }
#line 281 "format_call.m"
                  }
#line 281 "format_call.m"
              }
#line 281 "format_call.m"
          }
#line 283 "format_call.m"
        else
#line 294 "format_call.m"
          {
#line 284 "format_call.m"
            MR_Word check_hlds__format_call__V_50_50;

#line 284 "format_call.m"
            {
#line 284 "format_call.m"
              check_hlds__format_call__V_50_50 = mdbcomp__prim_data__mercury_io_module_0_f_0();
            }
#line 284 "format_call.m"
            {
#line 284 "format_call.m"
              check_hlds__format_call__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__format_call__ModuleName_4, check_hlds__format_call__V_50_50);
            }
#line 294 "format_call.m"
            if (check_hlds__format_call__succeeded)
#line 289 "format_call.m"
              {
#line 289 "format_call.m"
                MR_Word check_hlds__format_call__V_53_53;
#line 289 "format_call.m"
                MR_Word check_hlds__format_call__V_55_55;
#line 289 "format_call.m"
                MR_Word check_hlds__format_call__V_57_57;
#line 289 "format_call.m"
                MR_Word check_hlds__format_call__V_59_59;
#line 287 "format_call.m"
                MR_Word check_hlds__format_call__V_54_54;
#line 287 "format_call.m"
                MR_Word check_hlds__format_call__V_56_56;
#line 287 "format_call.m"
                MR_Word check_hlds__format_call__V_58_58;
#line 287 "format_call.m"
                MR_Word check_hlds__format_call__V_60_60;

#line 287 "format_call.m"
                check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 287 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 287 "format_call.m"
                  {
#line 287 "format_call.m"
                    check_hlds__format_call__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Args_6, (MR_Integer) 0)));
#line 287 "format_call.m"
                    check_hlds__format_call__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Args_6, (MR_Integer) 1)));
#line 287 "format_call.m"
                    check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_53_53)) == (MR_mktag((MR_Integer) 1)));
#line 287 "format_call.m"
                    if (check_hlds__format_call__succeeded)
#line 287 "format_call.m"
                      {
#line 287 "format_call.m"
                        check_hlds__format_call__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_53_53, (MR_Integer) 0)));
#line 287 "format_call.m"
                        check_hlds__format_call__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_53_53, (MR_Integer) 1)));
#line 287 "format_call.m"
                        check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_55_55)) == (MR_mktag((MR_Integer) 1)));
#line 287 "format_call.m"
                        if (check_hlds__format_call__succeeded)
#line 287 "format_call.m"
                          {
#line 287 "format_call.m"
                            check_hlds__format_call__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_55_55, (MR_Integer) 0)));
#line 287 "format_call.m"
                            check_hlds__format_call__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_55_55, (MR_Integer) 1)));
#line 287 "format_call.m"
                            check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_57_57)) == (MR_mktag((MR_Integer) 1)));
#line 287 "format_call.m"
                            if (check_hlds__format_call__succeeded)
#line 287 "format_call.m"
                              {
#line 287 "format_call.m"
                                check_hlds__format_call__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_57_57, (MR_Integer) 0)));
#line 287 "format_call.m"
                                check_hlds__format_call__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_57_57, (MR_Integer) 1)));
#line 289 "format_call.m"
                                if ((check_hlds__format_call__V_59_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 287 "format_call.m"
                                  check_hlds__format_call__succeeded = MR_TRUE;
#line 289 "format_call.m"
                                else
#line 291 "format_call.m"
                                  {
#line 291 "format_call.m"
                                    MR_Word check_hlds__format_call__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_59_59, (MR_Integer) 1)));
#line 291 "format_call.m"
                                    MR_Word check_hlds__format_call__IOOut_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_59_59, (MR_Integer) 0)));

#line 291 "format_call.m"
                                    check_hlds__format_call__succeeded = (check_hlds__format_call__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "format_call.m"
                                  }
#line 287 "format_call.m"
                              }
#line 287 "format_call.m"
                          }
#line 287 "format_call.m"
                      }
#line 287 "format_call.m"
                  }
#line 289 "format_call.m"
              }
#line 294 "format_call.m"
            else
#line 304 "format_call.m"
              {
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__V_39_39;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__V_40_40;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__V_41_41;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__V_42_42;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__V_43_43;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__V_44_44;
#line 304 "format_call.m"
                MR_Word check_hlds__format_call__V_52_52;
#line 300 "format_call.m"
                MR_Word check_hlds__format_call__TC_InfoVarForStream_20;
#line 300 "format_call.m"
                MR_Word check_hlds__format_call__StreamVar_47;
#line 300 "format_call.m"
                MR_Word check_hlds__format_call___FormatStringVar_82;
#line 300 "format_call.m"
                MR_Word check_hlds__format_call___FormattedValuesVar_83;
#line 301 "format_call.m"
                MR_Word check_hlds__format_call__StateInVar_21;
#line 301 "format_call.m"
                MR_Word check_hlds__format_call__StateOutVar_22;

#line 295 "format_call.m"
                {
#line 295 "format_call.m"
                  check_hlds__format_call__V_52_52 = mdbcomp__prim_data__mercury_std_lib_module_name_1_f_0((MR_Word) MR_mkword(MR_mktag(1), &check_hlds__format_call_scalar_common_2[9]));
                }
#line 295 "format_call.m"
                {
#line 295 "format_call.m"
                  check_hlds__format_call__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__format_call__ModuleName_4, check_hlds__format_call__V_52_52);
                }
#line 304 "format_call.m"
                if (check_hlds__format_call__succeeded)
#line 304 "format_call.m"
                  {
#line 300 "format_call.m"
                    check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__Args_6)) == (MR_mktag((MR_Integer) 1)));
#line 300 "format_call.m"
                    if (check_hlds__format_call__succeeded)
#line 300 "format_call.m"
                      {
#line 300 "format_call.m"
                        check_hlds__format_call__TC_InfoVarForStream_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Args_6, (MR_Integer) 0)));
#line 300 "format_call.m"
                        check_hlds__format_call__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__Args_6, (MR_Integer) 1)));
#line 300 "format_call.m"
                        check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_39_39)) == (MR_mktag((MR_Integer) 1)));
#line 300 "format_call.m"
                        if (check_hlds__format_call__succeeded)
#line 300 "format_call.m"
                          {
#line 300 "format_call.m"
                            check_hlds__format_call__StreamVar_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_39_39, (MR_Integer) 0)));
#line 300 "format_call.m"
                            check_hlds__format_call__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_39_39, (MR_Integer) 1)));
#line 300 "format_call.m"
                            check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 300 "format_call.m"
                            if (check_hlds__format_call__succeeded)
#line 300 "format_call.m"
                              {
#line 300 "format_call.m"
                                check_hlds__format_call___FormatStringVar_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_40_40, (MR_Integer) 0)));
#line 300 "format_call.m"
                                check_hlds__format_call__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_40_40, (MR_Integer) 1)));
#line 300 "format_call.m"
                                check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 300 "format_call.m"
                                if (check_hlds__format_call__succeeded)
#line 300 "format_call.m"
                                  {
#line 300 "format_call.m"
                                    check_hlds__format_call___FormattedValuesVar_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_41_41, (MR_Integer) 0)));
#line 300 "format_call.m"
                                    check_hlds__format_call__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_41_41, (MR_Integer) 1)));
#line 301 "format_call.m"
                                    check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_42_42)) == (MR_mktag((MR_Integer) 1)));
#line 301 "format_call.m"
                                    if (check_hlds__format_call__succeeded)
#line 301 "format_call.m"
                                      {
#line 301 "format_call.m"
                                        check_hlds__format_call__StateInVar_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_42_42, (MR_Integer) 0)));
#line 301 "format_call.m"
                                        check_hlds__format_call__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_42_42, (MR_Integer) 1)));
#line 301 "format_call.m"
                                        check_hlds__format_call__succeeded = ((MR_tag((MR_Word) check_hlds__format_call__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 301 "format_call.m"
                                        if (check_hlds__format_call__succeeded)
#line 301 "format_call.m"
                                          {
#line 301 "format_call.m"
                                            check_hlds__format_call__StateOutVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_43_43, (MR_Integer) 0)));
#line 301 "format_call.m"
                                            check_hlds__format_call__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__format_call__V_43_43, (MR_Integer) 1)));
#line 301 "format_call.m"
                                            check_hlds__format_call__succeeded = (check_hlds__format_call__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 301 "format_call.m"
                                          }
#line 301 "format_call.m"
                                      }
#line 300 "format_call.m"
                                  }
#line 300 "format_call.m"
                              }
#line 300 "format_call.m"
                          }
#line 300 "format_call.m"
                      }
#line 304 "format_call.m"
                  }
#line 304 "format_call.m"
              }
#line 294 "format_call.m"
          }
#line 274 "format_call.m"
      }
#line 274 "format_call.m"
    return check_hlds__format_call__succeeded;
#line 274 "format_call.m"
  }
#line 132 "format_call.m"
}

void mercury__check_hlds__format_call__init(void)
{
}

void mercury__check_hlds__format_call__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_id_0);
	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_map_0);
	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_maps_0);
	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_conj_pred_map_0);
	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_fc_eqv_map_0);
	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_fc_goal_id_map_0);
	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_fc_opt_goal_info_0);
	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_follow_skeleton_result_0);
	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_format_call_kind_0);
	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_format_call_site_0);
	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_list_element_map_0);
	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_list_skeleton_map_0);
	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_list_skeleton_state_0);
	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_string_component_0);
	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_string_map_0);
	MR_register_type_ctor_info(&check_hlds__format_call__check_hlds__format_call__type_ctor_info_what_to_print_0);
}

void mercury__check_hlds__format_call__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.format_call. */
